
#include <iostream>
#include <string>

  using namespace std;
 int main()
{
string a;
cout << "what is your name?" ;
getline (cin, a);
string b;
cout << "what is your age?" ;
getline (cin, b);
string c;
cout << "what is your favorite thing?" ;
getline (cin, c);


cout << "Hi " << a <<  " I know you are " << b <<  " years old and like " <<  c  << endl ;

return 0;

}
