//
// Created by The YooGle on 2020-04-02.
//

#include <iostream>
using namespace std;

void twice(int &x);

int main12() {

    int num = 10;

    twice(num);

    cout << num;

    return 0;
}

void twice(int &x) {
    x += x;
}