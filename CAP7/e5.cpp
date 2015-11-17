#include <iostream>

using namespace std;


int fun (int k){
   cout<<"Entra 1"<<endl;
  return k+1;
}

int fun2 (int k){
    cout<<"Entra 2"<<endl;
  return k+1;
}

int main()
{
    int i = fun(5)+fun2(3)+3;
    cout << "suma: " << 1<<endl;
    return 0;
}

/****
* Entra 1
* Entra 2
* suma: 1
*/
