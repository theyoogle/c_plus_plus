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

int main101(){

    Human human;

    human.info();

    return 0;
}