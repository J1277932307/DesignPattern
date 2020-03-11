//
// Created by 18369 on 2020/3/9.
//

#ifndef LINUX_CONTEXT_H
#define LINUX_CONTEXT_H

#include <memory>
#include "../include/Strategy.h"


class Context{

public:
    Context();
    ~Context();

public:
    void setStrategy(std::unique_ptr<Strategy> strategy);       //此处进行策略选择
    void doOperation(int a,int b);
private:
    std::unique_ptr<Strategy> strategy;                         //基类对象


};




#endif //LINUX_CONTEXT_H
