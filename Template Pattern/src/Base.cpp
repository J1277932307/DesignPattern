//
// Created by 18369 on 2020/3/9.
//
#include <iostream>
#include "../include/Base.h"
using  std::cout;
using std::endl;

Base::Base(int a,int b,int c):a(a),b(b),c(c) {}
Base::~Base() {}

int Base::add(int a, int b)
{
    return a + b;
}

int Base::mod(int sum, int c)
{
    return sum % c;
}

void Base::run()
{
    int s = add(a,b);
    int m = mod(s, c);
    cout << m <<endl;

}