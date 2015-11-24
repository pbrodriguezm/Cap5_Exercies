#include <iostream>
#include <time.h>
#define max 100000
using namespace std;

int main()
{
    int sum=0;
    float sum1=0;
    float start = clock();

    for (int i = 0; i < max; ++i)
    {   
        sum+=i;
    }

    float end = clock();
    cout << "Tiempo con enteros: " << (end - start) / ((double)CLOCKS_PER_SEC)<<endl;

    float start1 = clock();

    for (float i = 0; i < max; i ++)
    {   
        sum1+=i;;
    }

    float end1 = clock();
    cout << "Tiempo con flotantes: " << (end1 - start1) / ((double)CLOCKS_PER_SEC)<<endl;
}
