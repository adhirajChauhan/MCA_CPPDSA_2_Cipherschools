//constructor
//A constructor is a special member function that is called automatically when an object is created.
//It will have same name as class name
//It will have no retrun type
#include<iostream>
using namespace std;

class Employee{
    public:
    int empID;
    int empSalary;
    //Default constructor
    Employee(){
        cout << "Constructor called" << endl;
    }

    //Parameterized constructors
    Employee(int id){
        empID = id;
    }

    Employee(int empID, int empSalary){
        this->empID = empID;
        this->empSalary = empSalary;
    }

    Employee(Employee &emp){
        empID = emp.empID;
        empSalary = emp.empSalary;
    }

    void display(){
        cout << "Employee id is : " << empID << " and salary is : " << empSalary << endl; 
    }

    // ~Employee(){
    //     cout << "Destructor called " << endl;
    // }

};

int main(){
    // Employee e1;
    Employee e2(100,2000);
    // Employee e3(200, 1000);

    Employee e4(e2);

    cout << e4.empID << endl;
    cout << e4.empSalary << endl;

    // e3.display();
    
}