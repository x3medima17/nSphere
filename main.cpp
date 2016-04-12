#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <cmath>
#include "sphere.cpp"

using namespace std;



int main()
{
    srand(time(NULL));
    int n = 9;
    int r = 2;
    cout<<compute_volume(4,5,1000000);

    return 0;
}
