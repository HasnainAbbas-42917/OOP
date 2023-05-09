//             Question no # 4 :
//
//you have to develop a game that has multiple characters . 
//these characters share some common properties like id,name,
//maximum power and strength.there are other properties as
//well that they have their own like Doremon has properties 
//like a list of name gadgets and the name of partner , Benton
//has the watch name , a list of name powers and total charge
//of the watch . There ara also common actions that they can
//perform like walk , jump and eat. Doremon can show gadgets ,
//launch attack and fly. Benton can perform the actions like
//rotate watch , fight and drive.Implement the game using inheritance in c++?
//
//                         Answer
//
//I can define a base class called "Character" that contains the common
//properties and actions of all characters. Then, we can create derived
//classes for each specific character, which inherit from the "Character"
//class and add their own unique properties and actions.
//
//
//                            Cod
	
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Character {
public:
    int id;
    string name;
    int max_power;
    int strength;

    void walk() {
        cout << name << " is walking.\n";
    }

    void jump() {
        cout << name << " is jumping.\n";
    }

    void eat() {
        cout << name << " is eating.\n";
    }
};

class Doremon : public Character {
public:
    vector<string> gadgets;
    string partner_name;

    void show_gadgets() {
        cout << "Gadgets of " << name << ": ";
        for (string gadget : gadgets) {
            cout << gadget << ", ";
        }
        cout << endl;
    }

    void launch_attack() {
        cout << name << " is launching an attack!\n";
    }

    void fly() {
        cout << name << " is flying.\n";
    }
};

class Benton : public Character {
public:
    string watch_name;
    vector<string> powers;
    int watch_charge;

    void rotate_watch() {
        cout << name << " is rotating the watch.\n";
    }

    void fight() {
        cout << name << " is fighting.\n";
    }

    void drive() {
        cout << name << " is driving.\n";
    }
};

int main() {
    Doremon d;
    d.id = 1;
    d.name = "Doremon";
    d.max_power = 100;
    d.strength = 50;
    d.gadgets = {"Take-copter", "Anywhere Door", "Bamboo-Copter"};
    d.partner_name = "Nobita";

    d.walk();
    d.jump();
    d.eat();
    d.show_gadgets();
    d.launch_attack();
    d.fly();

    Benton b;
    b.id = 2;
    b.name = "Benton";
    b.max_power = 150;
    b.strength = 80;
    b.watch_name = "Omnitrix";
    b.powers = {"Heatblast", "Four Arms", "XLR8"};
    b.watch_charge = 75;

    b.walk();
    b.jump();
    b.eat();
    b.rotate_watch();
    b.fight();
    b.drive();

    return 0;
}

						
							 