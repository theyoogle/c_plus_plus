//
// Created by The YooGle on 2020-04-02.
//

#include <iostream>
using namespace std;

void square(int arr[], int N);

int main11() {

    int nums[] = {1, 2, 3, 4, 5};
    int N = 5;

    square(nums, 5);

    for (int i=0; i<N; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}

void square(int arr[], int N){

    for (int i=0; i<N; i++) {
        arr[i] *= arr[i];
    }

}