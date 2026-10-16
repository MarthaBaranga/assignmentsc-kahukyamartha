HOW THE CODE OPERATES

SUMMARY
This C++ program uses a 'Rectangle' class to store a width and a length. The class rejects invalid sizes and can work out the area and perimeter. The 'main' function builds three rectangles to demonstrate this.

THE RECTANGLE CLASS

Private members: 'width' and 'length' are declared private, so they cannot be accessed from outside the class. The only way to read or change them is through the class's public functions.

Constructor: 'Rectangle(double w = 1.0, double l = 1.0)' sets up a new rectangle. When no arguments are given, it starts as a 1 x 1 rectangle. It calls the setters instead of assigning directly, so the validity checks also run at creation.

Getters: 'getWidth()' and `getLength()' give back the current values. They are 'const' because they only read data and never modify the object.

Setters: 'setWidth()' and 'setLength()' only store a value if it is greater than 0. Otherwise they print an "Invalid" message and fall back to 1.0. As a result, a rectangle can never end up with a zero or negative side.

Calculations: 'area()' multiplies width by length. 'perimeter()' returns 2 times the sum of width and length. Both are 'const'.

THE show() FUCTION
'show()' receives a label and a rectangle, then prints the width, length, area, and perimeter. Using one function avoids repeating the same print statements for each rectangle. The rectangle is passed as a 'const' reference, so it is not copied and the function cannot change it.

The main() function

1. Rectangle 1 is created as 5 x 3 and printed.
2. Rectangle 2 begins at the default 1 x 1. The setters then change it to a width of 10 and a length of 4.5, and it is printed.
3. Rectangle 3 is created as 2 x 8. The call 'setWidth(-4)' fails the check, so an "Invalid width" message appears and the width becomes 1.0. The result is then printed.



