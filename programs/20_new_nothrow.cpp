//
// Created by The YooGle on 2020-04-04.
//

#include <iostream>
using namespace std;

int main(){

    int* nums = new(nothrow) int[0x1fffffffffff];   // Returns NULL on fail

    if (nums){
        cout << nums;
        delete[] nums;
    } else {
        cout << "Memory Allocation Failed. Ending Program!";
    }

    return 0;
}