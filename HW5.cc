// input outpu Assignment 5.
// Combine use loops & conditions. 
#include<iostream>
#include<string>

using namespace std;

 int main()

{

 int guess, number = 0;
 number = 10;
 cout << "Guess a number between 1 and 20:\n";

while ( guess != number )
  {    
    cin >> guess;
 
if (guess > number)
   {
  cout << "Oops, too large!Guess again:\n";
   }
 else
    if (guess < number)
       {   
         cout << "Oops, too small!Guess again:\n";
       }
     else
        if ( guess == number )
          { 
             cout <<"Bingo! The number you guessed is correct." << endl;
          }
  
  }

return 0;

}

