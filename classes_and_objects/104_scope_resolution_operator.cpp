//
// Created by The YooGle on 2020-04-05.
//

#include <iostream>
using namespace std;

class Human {

    string name;
    int age;

public:

    Human(string n, int a);

    void info(){
        cout << name << " is " << age << " years old!" << endl;
    }

};

Human::Human(string n, int a) {
    name = n;
    age = a;
}

int main104(){

    Human human("david", 26);

    human.info();

    return 0;
}