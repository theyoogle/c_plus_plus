//
// Created by The YooGle on 2020-03-26.
//

#include <iostream>
using namespace std;

int main2() {

    cout << "short " << sizeof(short) << endl;
    cout << "int " << sizeof(int) << endl;
    cout << "long " << sizeof(long) << endl;
    cout << "long long " << sizeof(long long) << endl << endl;

    cout << "unsigned short " << sizeof(unsigned short) << endl;
    cout << "unsigned int " << sizeof(unsigned int) << endl;
    cout << "unsigned long " << sizeof(unsigned long) << endl;
    cout << "unsigned long long " << sizeof(unsigned long long) << endl << endl;

    cout << "bool " << sizeof(bool) << endl;
    cout << "char " << sizeof(char) << endl << endl;

    cout << "float " << sizeof(float) << endl;
    cout << "double " << sizeof(double) << endl << endl;

    cout << "int8_t " << sizeof(int8_t) << endl;
    cout << "int16_t " << sizeof(int16_t) << endl;
    cout << "int32_t " << sizeof(int32_t) << endl;
    cout << "int64_t " << sizeof(int64_t) << endl << endl;

    cout << "u_int8_t " << sizeof(u_int8_t) << endl;
    cout << "u_int16_t " << sizeof(u_int16_t) << endl;
    cout << "u_int32_t " << sizeof(u_int32_t) << endl;
    cout << "u_int64_t " << sizeof(u_int64_t) << endl << endl;

    cout << "Size of *int " << sizeof(int*) << endl;
    cout << "Size of *char " << sizeof(char*) << endl;
    cout << "Size of *double " << sizeof(double*) << endl << endl;

    return 0;
}