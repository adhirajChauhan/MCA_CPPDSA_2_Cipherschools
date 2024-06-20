//Encapsulation

#include<iostream>
using namespace std;

class Employee{
    private:
    int empID;
    double salary;

    public:
    Employee(){

    }

    Employee(int empID, double salary){
        this->empID = empID;
        this->salary = salary;
    }

    int getID(){
        return empID;
    }

    void setID(int newID){
        empID = newID;
    }

};

int main(){
    Employee e1(100, 1000);

    cout << e1.getID() << endl;

    e1.setID(200);

    cout << e1.getID() << endl;
}



// Class Definition:

// Define a class Student with the following private data members:
// name (string): The name of the student.
// rollNumber (int): The roll number of the student.
// age (int): The age of the student.
// grade (char): The grade of the student.

// Get Methods:
// Implement the following public getter methods to retrieve the values of the private data members:
// string getName(): Returns the name of the student.
// int getRollNumber(): Returns the roll number of the student.
// int getAge(): Returns the age of the student.
// char getGrade(): Returns the grade of the student.

// Set Methods:
// Implement the following public setter methods to modify the values of the private data members:
// void setName(string newName): Sets the name of the student to newName.
// void setRollNumber(int newRollNumber): Sets the roll number of the student to newRollNumber.
// void setAge(int newAge): Sets the age of the student to newAge.
// void setGrade(char newGrade): Sets the grade of the student to newGrade.