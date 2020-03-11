#include <iostream>
#include "include/Derive.h"

using namespace std;


int main(int argc, char *argv[])
{
    Derive* d = new Derive(2,6,3);
    d->run();
}