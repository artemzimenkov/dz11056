#include <iostream>
#include "Easy.h"

using namespace std;

int itc_sqrt(int num){
    if (num < 0)
        return -1;
    for (long long a = 0; a <= num; a++)
    {
        if (a * a > num)
            return -1;
        else if (a * a == num)
            return (int)a;
    }
    return -1;
}
