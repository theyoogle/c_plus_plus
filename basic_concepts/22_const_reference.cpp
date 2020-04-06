//
// Created by The YooGle on 2020-04-04.
//

#include <iostream>
using namespace std;

int main22() {

    int num = 100;
    const int& ref = num;

    cout << "Num : " << num << endl;
    cout << "Ref : " << ref << endl;

    cout << "&Num : " << &num << endl;
    cout << "&Ref : " << &ref << endl;

//    ref = 200;    // Not allowed

//    int& ref1 = ref;  // Not allowed

    const int& ref2 = ref;

    return 0;
}