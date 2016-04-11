#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <cmath>


using namespace std;

double d_random(double d_min, double d_max)
{
    double d = (double)rand() / RAND_MAX;

    return d_min + d * (d_max - d_min);
}

vector<double> generate_random_vector(int n, int r)
{
    vector<double> V(n);
    for(int i=0;i<n;i++)
        V[i] = d_random(-r,r);
    return V;
}

bool is_inside(vector<double> &V, int r)
{
    double sum = 0;
    size_t n = V.size();
    for(size_t i=0;i<n;i++)
        sum += V[i]*V[i];

    return sum <= r*r;
}

void print_vector(vector<double> &V)
{
    for(int i=0;i<V.size();i++)
        cout<<V[i]<<" ";
    cout<<endl;
}

int main()
{
    srand(time(NULL));
    int n = 9;
    int r = 2;
    int total = 0;
    int inside = 0;
    int iters = 10000000;
    vector<double> V;

    for(int i=0;i<iters;i++)
    {
        V = generate_random_vector(n,r);
        total++;
        inside += is_inside(V,r);
    }

    double outer_volume = pow(r*2,n);
    double inner_volume = outer_volume * (double)inside/total;
    cout<<inside<<" "<<total<<endl;
    cout<<inner_volume;

    return 0;
}
