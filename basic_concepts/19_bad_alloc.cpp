//
// Created by The YooGle on 2020-04-04.
//

#include <iostream>
using namespace std;

int main19(){

    try {
        int* nums = new int[0x1fffffffffff];

        delete[] nums;
    } catch (bad_alloc) {

        cout << "Memory Allocation Failed. Ending Program!";

    }

    return 0;
}