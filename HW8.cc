//Assignment Eight/Arrays:
#include <iostream>
#include <string>
using namespace std;

void outputOne(string names[], int scores[], int index){
        cout << "#" << index << ": "<<names[index] << " - "<< scores[index] << endl;
}
void outputAll(string names[],int scores[], int size){
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
void updateValue(int scores[], int index, int newScore){
	scores[index]=newScore;
}
int main()
{
   int size = 10;
   string names[size] = {"Kennedy","Jackson","Jefferson","Lincoln","Nixon","Reagan","Roosevelt","Truman","Wilson","Wawshington"};
   int scores[size] = {90,70,98,99,70,82,100,88,80,100};
   int operation, index;
   int newScore;
   bool running = true;
   do
   {
       cout << "What would you like to do next?" << endl;
       cout << "(1-Output student name/score)" << endl;
       cout << "(2-Output all names/score)" << endl;
       cout << "(3-Output all average score)" <<endl;
       cout << "(4-Output student name/newScore)" << endl;
       cout << "(Anything else-Exit the program)" << endl;
       cout << "> ";
       cin >> operation;
       switch(operation)
       {
          case 1:
              cout << "> please input student #: ";
              cin >> index;
              if(index>=0 && index <10)
                outputOne(names, scores, index);
              else
                cout << "Invalid index!" << endl;
              break;
           case 2:
                outputAll(names,scores,10);
              break;
           case 3:
              cout << "Average = " << getAverageScore(scores,10) << endl;
              break;
	   case 4:
		cout << "Please input student #: ";
		cin >> index;
		cout << "current score is : ";
		outputOne(names, scores, index);
		cout << "Enter new score:";
		cin >> newScore;
		updateValue(scores, index, newScore);
		outputOne(names, scores, index);
	        break;

              default:
              running = false;
              break;
        }
   }while(running);
   return 0;
}
