//Task 2

#include <iostream>
using namespace std;

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(double x, double y);

int main(){
    int x,y,choice;

    cout<<"Choose an operation to perform:\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n";
    cin>>choice;
    cout<<"Enter first number. ";
    cin>>x;
    cout<<"\nEnter second number. ";
    cin>>y;

    cout<<"Answer: ";
    switch (choice)
    {
    case 1:
        cout<<add(x,y);
        break;

    case 2:
        cout<<sub(x,y);
        break;

    case 3:
        cout<<mul(x,y);
        break;
    
    case 4:
        cout<<div(double(x),double(y));
        break;
    default:
        break;
    }

}

int add(int x, int y){
    return x+y;
}

int sub(int x, int y){
    return x-y;
}

int mul(int x, int y){
    return x*y;
}

double div(double x, double y){
    return x/y;
}