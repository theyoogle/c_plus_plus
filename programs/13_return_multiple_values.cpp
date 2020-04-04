//
// Created by The YooGle on 2020-04-02.
//

#include <iostream>
using namespace std;

int rgba(int r, int &g, int &b, int&a);

int main13() {

    int r, g, b, a;

    r = rgba(r, g, b, a);

    cout << "R : " << r << endl;
    cout << "G : " << g << endl;
    cout << "B : " << b << endl;
    cout << "A : " << a << endl;

    return 0;
}

int rgba(int r, int &g, int &b, int&a) {

    r = 10;
    g = 20;
    b = 30;
    a = 40;

    return r;
}