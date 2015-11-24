using System;

class Program
{
	static int fun(int k) {
        k=2*k;
        return k;
    }

    static void Main()
    {
        int i = 10,sum1;
        sum1 = fun(i)+i;
        Console.Write("sum1: "+sum1+"\n");
    }
}
