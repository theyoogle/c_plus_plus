//
// Created by The YooGle on 2020-04-04.
//

#include <iostream>
using namespace std;

int main15() {

    int *num = new int;
    *num = 100;

    cout << num;

    delete num;
    return 0;
}