#include <iostream>
#include "complex.h"


int main()
{
    complex x(2,3),y(1,2),z;
    x.print(x);
    y.print(y);
    z = x.add(x,y);
    z.print(z);


    return 0;
}
