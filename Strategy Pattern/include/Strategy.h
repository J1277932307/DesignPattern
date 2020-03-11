//
// Created by 18369 on 2020/3/9.
//

#ifndef LINUX_STRATEGY_H
#define LINUX_STRATEGY_H
class Strategy{
public:
    Strategy();
    virtual ~Strategy();

public:
    virtual int dosome(int a,int b);

};
#endif //LINUX_STRATEGY_H
