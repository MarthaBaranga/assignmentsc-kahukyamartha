CHAINED INHERITANCE

Inheritance lets a new class reuse what an existing class already has. The existing class is the parent (base class), and the new one is the child(derived class).
The child gets the parent's data and functions automatically, then adds its own.
Think of it like a family: a child inherits traits from a parent, and the parent inherited traits from the grandparent.

Chained (multilevel) inheritance is when a child class becomes the parent of another class, forming a chain:

Grandparent TO Parent TO Child

The class at the bottom gets everything from every class above it.

 Example

Device(grandparent): has a name
ElectricalDevice (parent): is a Device, and adds voltage, current and power
Motor(child): is an ElectricalDevice, and adds speed and efficiency

So a Motor has a name (from Device), voltage and power (from ElectricalDevice), and speed (its own).

 What the program shows

The Motor object uses a function from Device even though Motor never wrote it.
It also uses the power calculation from ElectricalDevice.
It has its own function for showing speed and output power.
A plain ElectricalDevice (a kettle) cannot use Motor's function, because inheritance only flows downward.
<img width="3072" height="4080" alt="IMG_20261026_200336009~2" src="https://github.com/user-attachments/assets/9dcc24cc-067f-4234-9add-4a607a9e9ee7" />


