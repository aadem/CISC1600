// input output loop
#include<iostream>
#include<string>

using namespace std;
int main ()
{
double sum = 0;
int input = 1;
double x = 0;
for(int i =1; i <=3; i++ )
{
	cout<<"Input a numbder to sum up:";
	cin >> x;
	sum = sum + x;
}

cout << "The sum is: " << sum << endl;

return 0;

}
