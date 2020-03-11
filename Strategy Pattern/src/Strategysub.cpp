//
// Created by 18369 on 2020/3/9.
//

#include <iostream>
#include "../include/Strategysub.h"

using std::cout;
using std::endl;

int Strategysub::dosome(int a, int b) {
    int sub = a - b;
    cout << "获得了差:" << sub <<endl;
    return sub;
}


