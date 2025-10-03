# Constructor-and-Destructor-in-C-plus-plus

## Aim:

To study about the constructor and destructor in C++.

## Theory:

**1. Constrcutor**: A constructor is a special member function of a class that is automatically called when an object is created.

- It has the same name as the class.

- It's main purpose is to initialize the data members of a class.

##### Key Features

- Same name as the class.

- No return type(not even void).

- Invoked automatically when an object is created.

- Can be overloaded(multiple constructors in the same class).

- Can have default arguments.

##### Types of Constructors

- Default contructor: No parameters, initializes with default values.

- Parameterized constructor: Takes parameters to assign user-defined values.

- Copy constructor: Initializes a new object as a copy of an existing object.

**2. Destructor**: A destructor is a special member function that is automatically called when an object goes out of scope or is deleted.

It is used to release resources (like memory, files, or connections) acquired by the object.

##### Key Features

- Same name as the class but preceded with a tilde.

- No parameters, no return type.

- Only one destructor per class (cannot be overloaded).

- Automatically invoked when an object is destroyed.

## 1. Algorithm: Default Constructor inside a class

**Step 1**: Start the program.

**Step 2**: Include the header file <iostream> for input and output operations.

**Step 3**: Define a class student with the following members:

1. Data members:

- rollno (integer)

- name (character array)

- fees (double)

2. Member functions:

- Constructor student() → Reads values of rollno, name, and fees from the user.

- display() → Displays the student details.

**Step 4**: Inside the constructor:

- Prompt the user to enter roll number, name, and fees.

- Read and store the values in the respective data members.

**Step 5**: In the display() function:

- Print the roll number, name, and fees on the screen.

**Step 6**: In the main() function:

- Create an object s of class student.

- At this moment, the constructor is automatically invoked, and inputs are taken.

- Call the function s.display() to show the stored details.

**Step 7**: End the program.

## 2. Algorithm: Default Constructor outside a class

**Step 1**: Start

**Step 2**: Define a class Mycar with data members:

- car no (integer)

- name (character array)

- price (double)

**Step 3**: Create a constructor Mycar() to:

- Input car number

- Input car name

- Input car price

**Step 4**: Define a member function display() to print:

- Car number

- Car name

- Car price

**Step 5**: In main():

- Create an object s of class Mycar.

- Call the function s.display() to show car details.

**Step 6**: End

## 3. Algorithm: Parametrized constructor

**Step 1**: Start

**Step 2**: Define a class multiplication with:

- Data members: a, b, and multiply.

- A parameterized constructor multiplication(int m, int n) that:

- Assigns a = m, b = n.

- Calculates multiply = a * b.

- A member function display() that prints the values of a, b, and their product.

**Step 3**: In the main() function:

- Create an object mul of class multiplication with values 2 and 5.

- Call mul.display() to show the result.

**Step 4**: End

## 4. Algorithm: 



