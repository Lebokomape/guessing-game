#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

 using namespace std;

 int main(){

int random_number;
 int num;
 int i;

    srand(time(0));
    random_number = ((rand ()% 100)+1);

 for (i=0; i<5; ++i){

    cout<<random_number<<endl;
    cout<<"Please guess a number between 1 and 100: ";
    cin>>num;

    if( num== random_number ){

    cout<<"You win"<<endl;
        return 0;
    }
    else if( num > random_number){

        cout<<"guess lower"<<endl;
    }
    else if (num < random_number){

       cout<<"guess higher"<<endl;
    }

 }
 cout<<"You lose"<<endl;

return 0;
 }
