// Take-home task: a Rectangle class that keeps its width and length private.

#include <iostream>
using namespace std;

class Rectangle {
private:    // private: only the class itself can access these
    double width, length;

public:     // public: anyone can call these functions
    Rectangle(double w = 1.0, double l = 1.0) {
        setWidth(w);     // reuse the setters so the checks apply here as well
        setLength(l);
    }

    double getWidth() const { return width; }
    double getLength() const { return length; }

    void setWidth(double w) {
        if (w > 0) width = w;
        else {
            cout << "Invalid width " << w << ". Using 1.0 instead." << endl;
            width = 1.0;
        }
    }

    void setLength(double l) {
        if (l > 0) length = l;
        else {
            cout << "Invalid length " << l << ". Using 1.0 instead." << endl;
            length = 1.0;
        }
    }

    // Calculations
    double area() const { return width * length; }
    double perimeter() const { return 2 * (width + length); }
};

// Prints the details of a rectangle
void show(const string& name, const Rectangle& r) {
    cout << name << endl;
    cout << "  Width:     " << r.getWidth() << endl;
    cout << "  Length:    " << r.getLength() << endl;
    cout << "  Area:      " << r.area() << endl;
    cout << "  Perimeter: " << r.perimeter() << endl;
}

int main() {
    // Example 1: a rectangle with width 5 and length 3
    Rectangle r1(5, 3);
    show("Rectangle 1", r1);

    // Example 2: start with the default size, then change it with the setters
    Rectangle r2;                 // starts as 1 x 1
    r2.setWidth(10);
    r2.setLength(4.5);
    show("\nRectangle 2 (after using the setters)", r2);

    // Example 3: an invalid (negative) value gets rejected
    Rectangle r3(2, 8);
    r3.setWidth(-4);              // not allowed, so width becomes 1.0
    show("\nRectangle 3 (testing an invalid value)", r3);

    return 0;
}
