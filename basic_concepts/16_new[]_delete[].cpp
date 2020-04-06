//
// Created by The YooGle on 2020-04-04.
//

#include <iostream>
using namespace std;

int main16(){

    int* nums = new int[10];

    for (int i=0; i<10; i++){
        *(nums + i) = (i * i);
    }

    for (int i=0; i<10; i++){
        cout << *(nums + i) <<endl;
    }

    delete[] nums;
    return 0;
}