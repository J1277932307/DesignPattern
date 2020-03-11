//
// Created by 18369 on 2020/3/9.
//
#include "../include/Context.h"
using std::unique_ptr;
void Context::setStrategy(unique_ptr<Strategy> strategy)
{
    this->strategy = std::move(strategy);        //unique_ptr需要通过std::move转移所有权
}

Context::Context() {}

Context::~Context(){}

void Context::doOperation(int a, int b)
{
    strategy->dosome(a, b);
}
