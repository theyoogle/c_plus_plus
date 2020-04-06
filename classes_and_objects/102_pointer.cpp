//
// Created by The YooGle on 2020-04-05.
//

#include <iostream>
using namespace std;

class Human {

    string name = "yoogle";
    int age = 18;

public:
    void info(){
        cout << name << " is " << age << " years old!" << endl;
    }

};

int main102(){

    Human *human = new Human();

    human->info();

    (*human).info();

    delete human;
    return 0;
}