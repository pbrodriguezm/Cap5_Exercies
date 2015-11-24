#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int k=10;

int fun(int &k)
{
    k=2*k;
    cout<<"Ingreso a la función"<<endl;
    return k;
}

int fun2(int x, int y)
{
    int z=x*y;
    return z;
}
int main() {
    cout<<"sum1: "<<fun2(fun(k),k)<<endl;
    return 0;
}
