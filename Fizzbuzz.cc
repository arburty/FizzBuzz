//Austin Burt
// 6/17/2017

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Fizzbuzz.h"

using namespace std;

Fizzbuzz::Fizzbuzz() : _start(0), _stop(100), _fizz(3), _buzz(5) {
    run();
}

void Fizzbuzz::run() {
    cout << "-- In run() --\n";
}
