public class HelloWorld
{
  public static void main(String[] args)
  {
    
  int i = fun(5)+fun2(3)+3;    
    System.out.print("suma->"+i);
  }


static int fun (int k){
   System.out.println("Entra 1");
  return k+1;
}

static  int fun2 (int k){
    System.out.println("Entra 2");
  return k+1;
}
}

/******
*Entra 1
*Entra 2
*suma->13
*
*/
