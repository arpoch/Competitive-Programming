#include <iostream>
#include <math.h>
int main()
{
    int d = 0, s = 0, t = 0;
    //    double tfloat = 0;
    std::cin >> d >> t >> s;
    //    tfloat = (double)d / s;
    //    if (t >= tfloat)
    int dist = t * s;
    if (dist >= d)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
}