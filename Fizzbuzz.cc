//Austin Burt
// 6/17/2017

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Fizzbuzz.h"

using namespace std;

 //these member variables will be optional arguments in the future
Fizzbuzz::Fizzbuzz() : _start(0), _stop(100), _fizz(3), _buzz(5) {
    run();
}

void Fizzbuzz::run() {
     //for when start and stop are arguments
    if (_start >= _stop) {
        cerr << "start must be greater than stop\n";
        exit(0);
    }

    int count = _start;
    while (count++ < _stop) {
        if (count % _fizz == 0) {
            if (count % _buzz == 0) {
                cout << "fizzbuzz\n";
                continue;
            }
            cout << "fizz\n";
            continue;
        } else if (count % _buzz == 0) {
            cout << "buzz\n";
            continue;
        }
        cout << count << "\n";
    }
}
