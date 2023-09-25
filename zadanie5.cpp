#include <iostream>
#include "Easy.h"

using namespace std;

int itc_revnbr(int num){
    int n, u, m;
    n = num / 100;
    u = (num % 100 / 10) * 10;
    m = (num % 100 % 10) * 100;
    return m + u + n;
    }
