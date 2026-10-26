POLYMORPHISM
Polymorphism means "many forms". It lets you make the same function call on different objects and get different behaviour, depending on what the object really is.

Think of a "start" button: on a car it starts the engine, on a laptop it boots the system. Same command, different result.

How POLYMORPHISM works in C++

The parent class marks a function as virtual, meaning "child classes may replace this".
Each child class overrides that function with its own version.
You call the function through a parent-class pointer or reference.
At runtime, C++ checks the real object and runs that object's version. This is called runtime polymorphism.

Example

Every circuit component lets current flow when you apply a voltage, but each does it differently.

Component(parent): has a virtual function that gives the current
Resistor(child): follows Ohm's law, current = voltage ÷ resistance
Diode(child): blocks current below 0.7 V and conducts above it

NOTE
The parent function must be virtual for polymorphism to work.
Without virtual, the parent's version would always run.
New component types can be added later without changing code that uses Component.

<img width="3072" height="2747" alt="IMG_20261026_200358901~2" src="https://github.com/user-attachments/assets/6f67bc09-d4cb-4d6d-984c-ee2ec1ddae66" />


