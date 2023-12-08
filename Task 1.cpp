//Task 1

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){

    srand(time(NULL));
    int x=rand()%100, ans;

    do
    {   
        cout<<"Guess a number between 0 and 100.\n";
        cin>>ans;
        if (ans<x)
        {
           cout<<"Your number is too low.\n";
        }
        else if (ans>x)
        {
            cout<<"Your number is too high.\n";
        }
        else {
            cout<<"YOU WIN!\n";
        }
        
    } while (ans!=x);
    
    return 0;
}