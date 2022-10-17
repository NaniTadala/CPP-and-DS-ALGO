#include <iostream>
#include <string.h>
using namespace std;

class Hero {
private:
    
    int health;
    char level;
public:
    char *name;
    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }
    // Copy constructor (Deep copy)
    Hero(Hero& temp) {
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void setName(char name[]) {
        strcpy(this->name,name);
    }
    void setHealth(int health) {
        this->health = health;
    }
    void setLevel(char level) {
        this->level = level;
    }
    void print() {
        cout << "[ Name: " << this->name << " ,";
        cout << "Health: " << this->health << " ,";
        cout << "Level: " << this->level << " ]" << endl;
    }
};

int main() {
    // Object created statically
    Hero hero1;
    char name[13] = "Paul";
    hero1.setName(name);
    hero1.setHealth(100);
    hero1.setLevel('B');
    hero1.print();
    
    // use default copy constructor (Shallow copy)
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'F';
    hero1.print();
    hero2.print();

    return 0;
}