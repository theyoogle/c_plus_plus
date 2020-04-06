//
// Created by The YooGle on 2020-04-05.
//

#include <iostream>
using namespace std;

class Human {

    string name;
    int age;

public:

    Human(string n, int a){
        name = n;
        age = a;
    }

    void info(){
        cout << name << " is " << age << " years old!" << endl;
    }

};

int main103(){

    Human human("varun", 28);

    human.info();

    return 0;
}