//Assignment 6 Add/sub/factorial Function!
//input/output
#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
  return a+b;
}

int sub(int a, int b)
{
   return a-b;
}
int factorial (int n)
{
int ret = 1;
while (n>0)
{
ret *=n;
 n=n-1;
}
return ret;
}
int main()
{
   int x = 0;
   int y = 0;
   cout << "Please input value for x: ";
   cin >> x;
   cout << "And input value for y:";
   cin >> y;
   
int operation = 1;
while(operation !=0)
{
   cout << "Choose one: " << endl;
   cout << "1) print x+y" << endl;
   cout << "2) print x-y" << endl;
   cout << "3) print x! " << endl;
   cout << "4) print y! " << endl;
   cout << "0) exit program" <<  endl;
   cout << " : " ;
   cin >> operation;
   int output;
   if(operation == 1)
  {
     output = add(x,y);
  }
  else if(operation == 2)
  {
     output = sub(x,y);
  }
  else if(operation == 3)
  {
    output = factorial(x);
  }
  else if(operation == 4)
  {
    output = factorial(y);
  }
  else{
      break;
  }
  cout << output << endl;
  
}
return 0;
}



