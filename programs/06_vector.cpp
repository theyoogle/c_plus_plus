//
// Created by The YooGle on 2020-03-30.
//

#include <iostream>
#include <vector>
using namespace std;

int main6(){

    vector<int> nums;

    char ch = 'a';
    do {
        int num;
        cout << "Number : ";
        cin >> num;
        nums.push_back(num);
        for (int i =0; i< nums.size(); i++){
            cout << nums[i] << " ";
        }

        cout << endl << "Continue or q for quit : ";
        cin >> ch;

    } while (ch != 'q');

    return 0;
}