#include <iostream>
using namespace std;

class Id{
    public:
    string name;
    int age;
    int rollNumber;

    void printAge(){
        cout << "Age is : " << age << endl;
    }
};

int main(){
    Id student1;
    student1.name = "Abhishek";
    student1.age = 10;

    Id student2;
    student2.name = "Asmit";
    student2.age = 5;

    student2.printAge();
    cout << student1.name << endl;

}