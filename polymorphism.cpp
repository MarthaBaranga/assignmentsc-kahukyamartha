#include <iostream>
#include <string>
using namespace std;

// Parent class with a virtual function
class Component {
protected:
    string label;
public:
    Component(string l) : label(l) {}
    virtual ~Component() {}
    virtual double current(double) const { return 0.0; }  // open circuit
    string name() const { return label; }
};

// Derived 1: Ohm's law, I = V / R
class Resistor : public Component {
    double r;
public:
    Resistor(string l, double res) : Component(l), r(res) {}
    double current(double v) const override { return v / r; }
};

// Derived 2: diode blocks below 0.7 V
class Diode : public Component {
    double r;
public:
    Diode(string l, double res) : Component(l), r(res) {}
    double current(double v) const override {
        return v < 0.7 ? 0.0 : (v - 0.7) / r;
    }
};

// Base-class reference: works with any component
void test(const Component& c, double v) {
    cout << c.name() << " at " << v << " V -> " << c.current(v) << " A\n";
}

int main() {
    Resistor r1("R1", 100);
    Diode d1("D1", 10);

    // Base-class pointers to different objects
    Component* parts[] = { &r1, &d1 };
    for (Component* p : parts)
        cout << p->name() << " at 5 V -> " << p->current(5.0) << " A\n";

    // Same call through a reference, different behaviour
    test(r1, 0.5);
    test(d1, 0.5);
    return 0;
}
