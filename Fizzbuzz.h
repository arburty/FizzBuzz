#ifndef FIZZBUZZ_H_INCLUDED
#define FIZZBUZZ_H_INCLUDED

#include <iostream>

using namespace std;

class Fizzbuzz {
    public:
        Fizzbuzz();
        void run();
    protected:
        int _start;
        int _stop;
        int _fizz;
        int _buzz;
};

#endif
