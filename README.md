# nSphere
[![Build Status](https://travis-ci.org/x3medima17/nSphere.svg?branch=dev)](https://travis-ci.org/x3medima17/nSphere)

This is an implemetation of Monte Carlo algorithm for finding volume of an n-Dimensional sphere. The program was written for TGT Oil Internhip.
The folowing 'best practices' were used.
  - Tests
  - Continuous Integration
  - Github
 
To use is you need only one file: `sphere.cpp`.
To calculate the volume use function `compute_area(dimension, radius, iters).`

Example:
```cpp
    double v = compute_volume(3,2,1000000); //33.51
```
