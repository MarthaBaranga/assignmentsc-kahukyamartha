#include <iostream>
#include <string>
using namespace std;

// Level 1 (base): any device
class Device {
protected:
    string name;
public:
    Device(string n) : name(n) {}
    void showDevice() const { cout << "Device: " << name << "\n"; }
};

// Level 2: inherits from Device
class ElectricalDevice : public Device {
protected:
    double voltage, current;
public:
    ElectricalDevice(string n, double v, double i)
        : Device(n), voltage(v), current(i) {}
    double power() const { return voltage * current; }  // P = V * I
    void showElectrical() const {
        cout << "Rated: " << voltage << " V, " << current << " A, "
             << power() << " W\n";
    }
};

// Level 3: inherits from ElectricalDevice (and so from Device)
class Motor : public ElectricalDevice {
    int rpm;
    double efficiency;
public:
    Motor(string n, double v, double i, int r, double e)
        : ElectricalDevice(n, v, i), rpm(r), efficiency(e) {}
    void showMotor() const {
        cout << "Speed: " << rpm << " rpm, Output: "
             << power() * efficiency << " W\n";  // uses inherited power()
    }
};

int main() {
    Motor pump("Water Pump Motor", 240, 4.5, 2850, 0.85);

    pump.showDevice();      // inherited from Device
    pump.showElectrical();  // inherited from ElectricalDevice
    pump.showMotor();       // defined in Motor itself

    ElectricalDevice kettle("Kettle", 240, 8.3);
    kettle.showDevice();
    kettle.showElectrical();  // no showMotor(): inheritance flows down only
    return 0;
}
