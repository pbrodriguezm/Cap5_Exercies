using System;

class Program
{
	static int fun(int k) {
        k += 4;
        return 3 * (k) - 1;
    }

    static void Main()
    {
        int i = 10, j = 10, sum1, sum2;
        sum1 = (i / 2) + fun(i);
        sum2 = fun(j) + (j / 2);
        Console.Write("sum1: "+sum1+"\n");
        Console.Write("sum2: "+sum2+"\n");
    }
}
