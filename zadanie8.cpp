#include <iostream>
#include "Easy.h"

using namespace std;

int itc_min(int min1, int min2){
    if (min1 >= min2)
        return min2;
    else
        return min1;
}
