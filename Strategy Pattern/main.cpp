#include <iostream>
#include <memory>
#include "include/Context.h"
#include "include/Strategymul.h"
#include "include/Strategyadd.h"


using namespace std;


int main(int argc, char *argv[])
{
    Context c;
    //这里选择add
    c.setStrategy(make_unique<Strategyadd>());
    c.doOperation(2, 3);

    //这里选择mul
    c.setStrategy(make_unique<Strategymul>());
    c.doOperation(5,3);

}