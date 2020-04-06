//
// Created by The YooGle on 2020-04-04.
//

#include <iostream>
using namespace std;

int main17(){

    //----------------------------------------

    int num = 100;
    int* const p = &num;  // Pointer is constant so you can't change pointer value
    *p = 200;

    int age = 18;
//    p = &age;     // Not Allowed

    int* q = p;

    //----------------------------------------

//    int num = 100;
//    const int* p = &num;  // Data is Constant so you can't change data; const-data-ptr cannot be assigned to non-const-data-ptr
////    *p = 200;       // Not Allowed
//
//    int age = 18;
//    p = &age;
//
////    int* q = p;     // Not Allowed

    //----------------------------------------

//    int num = 100;
//    const int* const p = &num;    // Data and Pointer, both are constant so you can't change pointer value as well as data; const-data-ptr cannot be assigned to non-const-data-ptr
////    *p = 200;      // Not Allowed
//
//    int age = 18;
////    p = &age;       // Not Allowed
//
////    int* q = p;     // Not Allowed

    //----------------------------------------

    return 0;
}