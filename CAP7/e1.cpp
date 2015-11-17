
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
    
    return 0;
}

/*****
**(rpt1) (izq -> der) sum1 es 46 y sum2 es 48
* * explicando (izq -> der)
** sum1 = (i_ant / 2) + fun(&i_ant)
*       = (10 / 2) + (3 * (10 + 4) - 1)  
*       = 5 + 41  
*       = 46
* sum2 = fun(&j_ant) + (j_nuevo / 2) 
*     = (3 * (10 + 4) – 1) + (14 / 2) 
*     = 41 + 7  
*     = 48
**/
