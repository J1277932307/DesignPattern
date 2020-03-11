//
// Created by 18369 on 2020/3/9.
//

#ifndef LINUX_DERIVE_H
#define LINUX_DERIVE_H

#include "../../DesignPattern/Template Pattern/include/Base.h"

class Derive : public Base
{
public:
    Derive(int a,int b,int c);
    virtual ~Derive();

public:
    virtual int mod(int sum,int c);


};


#endif //LINUX_DERIVE_H
