//
// Created by 18369 on 2020/3/9.
//

#include "../include/Derive.h"
Derive::Derive(int a,int b,int c):Base(a,b,c){};
Derive::~Derive() {}

int Derive::mod(int sum, int c)
{
    return c % sum;
}
