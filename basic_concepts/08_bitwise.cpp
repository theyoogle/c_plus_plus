//
// Created by The YooGle on 2020-03-30.
//

#include <iostream>
#include <bitset>
using namespace std;

int main8() {

    unsigned short num = 7;

    bitset<8> bits(num);
    cout << "Bits : " << bits << endl;

    bitset<8> bitwiseNot(~num);
    cout << "~ : " << bitwiseNot << " : " << (~num) << endl;

    bitset<8> bitwiseAnd(0x0F & num);
    cout << "& : " << bitwiseAnd << " : " << (0x0F & num) << endl;

    bitset<8> bitwiseOr(0x0F | num);
    cout << "| : " << bitwiseOr << " : " << (0x0F | num) << endl;

    bitset<8> bitwiseXor(0x0F ^ num);
    cout << "^ : " << bitwiseXor << " : " << (0x0F ^ num) << endl;

    bitset<8> leftShift(num << 1);
    cout << "<<: " << leftShift << " : " << (num << 1) << endl;

    bitset<8> rightShift(num >> 1);
    cout << ">>: " << rightShift << " : " << (num >> 1) << endl;

    return 0;
}