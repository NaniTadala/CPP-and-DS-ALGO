#include <iostream>
using namespace std;

class Employee {
private:
    int salary;
    int age;
    short int ID;
public:
    // Default will be replaced
    Employee() {
        cout << "Simple constructor called" << endl;
    } 
    // Parameterized Construtor
    Employee(int salary, int age) {
        // 'this' Keyword
        cout << "this -> address " << this << endl;
        this -> age = age;
        this -> salary = salary;
    }
    // New Copy Constructor
    // Default copy constructor will be dead
    Employee(Employee& temp) {
        cout << "Copy constructor called" << endl;
        this-> salary = temp.salary;
        this-> age = temp.age;
    }
    void print() {
        cout << "Salaray: " << this -> salary << endl;
        cout << "Age: " << this -> age << endl;
    }
    void setSalary(int s) {
        salary = s;
    }
    int getSalary() {
        return salary;
    }
    int getAge() {
        return age;
    }
};

int main() {
    // Object created statically
    Employee nani(56000, 20);
    cout << "Address of nani " << &nani << endl;
    nani.print();

    // Copy Constructor
    Employee paul(nani);
    paul.print();
    return 0;
}