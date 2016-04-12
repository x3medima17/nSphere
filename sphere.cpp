//
// Created by dumitru on 12.04.16.
//


#include <cstdlib>
#include <vector>
#include <cmath>
#include <ctime>
#include <iostream>

double d_random(double d_min, double d_max)
{
    double d = (double)rand() / RAND_MAX;

    return d_min + d * (d_max - d_min);
}

std::vector<double> generate_random_vector(int n, double r)
{

    std::vector<double> V(n);
    for(int i=0;i<n;i++)
        V[i] = d_random(-r,r);
    return V;
}

bool is_inside(std::vector<double> &V, double r)
{
    double sum = 0;
    size_t n = V.size();
    for(size_t i=0;i<n;i++)
        sum += V[i]*V[i];

    return sum <= r*r;
}

double compute_volume(int n, double r, int iters)
{
    srand(time(NULL));
    int total = 0;
    int inside = 0;
    std::vector<double> V;

    for(int i=0;i<iters;i++)
    {
        V = generate_random_vector(n,r);
        total++;
        inside += is_inside(V,r);
    }

    double outer_volume = pow(r*2,n);
    double inner_volume = outer_volume * (double)inside/total;
    return inner_volume;
}

