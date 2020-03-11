//
// Created by 18369 on 2020/3/9.
//

#ifndef LINUX_BASE_H
#define LINUX_BASE_H


class Base
{
public:
    Base(int a,int b,int c);
    virtual ~Base();

public:
    void run();
    int add(int a,int b);
    virtual int mod(int sum,int c);
private:
    int a;
    int b;
    int c;

};


#endif //LINUX_BASE_H
