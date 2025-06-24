#include <cmath>
#include <iostream>

using namespace std;

int solution(int n) {
    int i = sqrt(n); 
    if (pow(i, 2) == n)
        return 1;
    else
        return 2;
}