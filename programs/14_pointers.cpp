//
// Created by The YooGle on 2020-04-03.
//

#include <iostream>
using namespace std;

int main14(){

    int num = 10;
    int* pointerToNum = &num;

    cout << "Num is " << num << endl;

    cout << "Enter num : ";
    cin >> *pointerToNum;

    cout << "Num is " << num;

    return 0;
}