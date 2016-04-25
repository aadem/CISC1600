#include <iostream>
#include <string>
using namespace std;

void outputOne(string names[], int scores[], int index){
        cout << "#" << index << ": "<<names[index] << " - "<< scores[index] << endl;
}
void outputAll(string names[],int scores[], int size)
{
        for(int i=0;i<size;i++){
                outputOne(names, scores, i);
        }
}
int getAverageScore(int scores[],int size){
        int total = 0;
        for(int i=0;i<size;i++){
           total += scores[i];
        }
        return total/size;
}
int main()
{
   string names[5] = {"Apple","Benjamine","Carrie","Denny","Eliot"};
   int scores[5] = {100,99,98,97,96};
   int operation, index;
   bool running = true;
   do
   {
       cout << "What would you like to do next?" << endl;
       cout << "(1-Output student name/score)" << endl;
       cout << "(2-Output all names/score)" << endl;
       cout << "(3-Output all average score)" <<endl;
       cout << "(anything else-Exit the program)" << endl;
       cout << "> ";
       cin >> operation;
       switch(operation)
       {
          case 1:
              cout << "> please input student #: ";
              cin >> index;
              if(index>=0 && index <5)
                outputOne(names, scores, index);
              else
                cout << "Invalid index!" << endl;
              break;
           case 2:
                outputAll(names,scores,5);
              break;
           case 3:
              cout << "Average = " << getAverageScore(scores,5) << endl;
              break;
	   default:
	      running = false;
		break;
	}
   }while(running);
    return 0;
}
