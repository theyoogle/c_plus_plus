//
// Created by The YooGle on 2020-04-04.
//

#include <iostream>
using namespace std;

void calcCircum(const double* const ptr_pi,
                const double* const ptr_rad,
                double* const ptr_cir){

    if (ptr_pi && ptr_rad && ptr_cir){
        *ptr_cir = 2 * (*ptr_pi) * (*ptr_rad);
    }

}

int main18(){

    const double pi = 3.14;

    double radius = 5;
    double circum;

    calcCircum(&pi, &radius, &circum);

    cout << circum;

    return 0;
}