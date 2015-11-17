import java.lang.Math; 

public class HelloWorld
{
  public static void main(String[] args)
  {
    
    int i = 10, j = 10, sum1, sum2;
    sum1= (i / 2) + fun( i );
    sum2 = fun ( &j ) + (j / 2);
    System.out.print("sum1->"+sum1);
  }
}

int fun (int k){
    k += 4;
    int a = 3 * k-1;
  return a;
}
