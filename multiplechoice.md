Student Grading Program

1. OOP Concepts Used

This program is mainly a procedural C++ program, not a true object-oriented program. It does not use classes, objects, inheritance, or polymorphism.

However, the idea of abstraction is still present because the program separates the data:
- the answer key
- the student responses
- the grade calculation logic

The major OOP concepts that are not currently applied are:
- Encapsulation: data and behavior are not grouped inside a class
- Inheritance: no parent/child classes are used
- Polymorphism: no method overriding or different behaviors are implemented
- Objects: no student objects are created

2. Algorithm and Main Steps

The program works by comparing each student’s answers to the correct answer key.

Main steps:
1. Store the student answers in a 2D array:
    8 students
   10 answers per student
2. Store the correct answers in a 1D array called key
3. Loop through each student using an outer for loop
4. For every student, loop through all 10 questions using an inner for loop
5. Compare each answer with the corresponding answer in the key
6. If the answer matches, increase the number of correct answers
7. After checking all questions, display the student’s score as:
 correctAnswers/10

Example:
- Student 0 is checked against the key
- each question is compared one by one
- total correct answers are counted
- the score is printed to the screen

This is a straightforward linear comparison algorithm with a time complexity of O(n × m), where:
n = number of students
 m = number of test questions

 3. Possible Error Points

Here are common issues and edge cases to watch for:

Array size mismatch:
  If the student answers array is not 8 × 10, the loop may not work correctly
Incorrect key length:
If the key does not have exactly 10 answers, the comparison becomes invalid
Case sensitivity:
 If a student answers with lowercase letters like 'a' instead of 'A', the comparison will fail
Invalid characters:
If a user enters symbols, spaces, or empty values, the code may not handle them properly
Out-of-bounds errors:
  If loops are changed incorrectly, program may access memory beyond the array

