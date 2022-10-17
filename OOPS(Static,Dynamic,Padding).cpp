#include <iostream>
using namespace std;

class Employee {
private:
    int salary;
    int age;
    short int ID;
public:
    void setSalary(int s) {
        salary = s;
    }
    int getSalary() {
        return salary;
    }
};

int main() {
    // Static allocaton
    Employee nani;
    nani.setSalary(56000);
    cout << nani.getSalary() << endl;
    cout << sizeof(nani) << endl;

    // Dynamic allocation
    Employee *pani = new Employee;
    pani->setSalary(60000); // (*pani).setSalary(60000);
    cout << pani->getSalary() << endl;
    cout << sizeof(*pani) << endl;

    return 0;
}