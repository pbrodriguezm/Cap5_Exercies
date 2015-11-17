#include <iostream>

using namespace std;

//*1.- Run the code given in Problem 13 (in the Problem Set) on some system that supports C to determine the values of sum1 and sum2. Explain the results.
int fun (int *k){
    *k += 4;
    return 3 * (*k) - 1;
}

int main()
{
    int i = 10, j = 10, sum1, sum2;
    sum1= (i / 2) + fun( &i );
    sum2 = fun ( &j ) + (j / 2);
    
    cout << "Hello world!->" << sum1<<endl;
    return 0;
}

/*****
**(rpt1) (izq -> der) sum1 es 46 y sum2 es 48
**(rpt2) (der -> izq) sum1 es 48 y sum2 es 46

**/
