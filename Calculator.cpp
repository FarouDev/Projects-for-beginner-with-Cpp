#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int sel;
cout<<"                              Calculator"<<endl;
cout<<"        Enter the type of operation you want to calculate"<<endl;
cout<<"       [1] Arithmetic  || [2] trigonometric "<< endl;
cout<< "       [3] Exponential || [4] Logarithmic"<<endl;
cout<<"                          Enter number : ";
cin>> sel;
switch(sel){
case 1:
    Arithmetic();
    break;
case 2:
    trigonometric();
    break;
case 3:
    Exponential();
    break;
case 4:
    Logarithmic();
    break;
default:
    cout<<"invaild operation";
}

return 0;
}

void Arithmetic()
    {
        int op;
        float x = 0 , y = 0;
cout<<"Select operation"<<endl;
cout<<"[1] Addition || [2] Substraction"<< endl;
cout<<"[3] Product  || [4] Division" <<endl;
cin>> op;

cout<<" Enter first number : ";
cin>> x;

cout<<" Enter second number : ";
cin>>y;

cout<<" Result: ";
    switch(op)
    {
    case 1:
        cout<<(x+y);
        break;
    case 2:
        cout<<(x-y);
        break;
    case 3:
        cout<<(x*y);
        break;
    case 4:
        cout<<(x/y);
        break;
    default:
        cout<<"invaild operation"<<endl;
        break;
    }

    }
