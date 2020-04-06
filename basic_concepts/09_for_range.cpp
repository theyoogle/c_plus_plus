//
// Created by The YooGle on 2020-03-31.
//

#include <iostream>
using namespace std;

int main9(){

    int nums[] = {3, 5, 6, 7, 2};

    for (int num: nums) {
        cout << num << ' ';
    }
    cout << endl;

    string name = "yoogle sharma";
    for (auto element: name){
        cout << element << ' ';
    }

    return 0;
}