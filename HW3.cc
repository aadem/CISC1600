//Assignment 3
//input/output/operator
# include <iostream>
using namespace std;

int main()
{

string a;
float x;
float y;


cout << "Enter your name: ";
getline (cin, a);
cout << "Enter integer x=  ";
cin >> x;
cout << "Enter double y=  ";
cin >> y;
cout << "Hi " << a <<  " I've calculated that " <<  "x+y = "<<  x+y << " and " << "x-y = " << x-y <<  endl;

return 0;

}
