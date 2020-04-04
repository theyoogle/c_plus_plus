//
// Created by The YooGle on 2020-03-31.
//

#include <iostream>
using namespace std;

int main10(){

    int num1 = 0, num2 = 1;
    int N = 7;

    int i = 2;

    cout << num1 << ' ' << num2 << ' ';
    while (i < N) {

        int num3  = num1 + num2;
        cout << num3 << ' ';

        num1 = num2;
        num2 = num3;

        i+=1;
    }

    return 0;
}