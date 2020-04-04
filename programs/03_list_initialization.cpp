#include <iostream>
using namespace std;

int main3() {

    int largeNum = 5000000;
    short smallNum = largeNum;

    cout << smallNum << endl;

    short smallNum1 {100};
//    short smallNum2 {largeNum};

    cout << smallNum1 << endl;

    return 0;
}