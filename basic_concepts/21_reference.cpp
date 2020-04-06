//
// Created by The YooGle on 2020-04-04.
//

#include <iostream>
using namespace std;

int main21() {

    int num = 100;
    int& ref = num;     // alias to num

    cout << "Num : " << num << endl;
    cout << "Ref : " << ref << endl;

    cout << "&Num : " << &num << endl;
    cout << "&Ref : " << &ref << endl;

    num = 200;

    cout << "Num : " << num << endl;
    cout << "Ref : " << ref << endl;

    ref = 300;

    cout << "Num : " << num << endl;
    cout << "Ref : " << ref << endl;

    return 0;
}