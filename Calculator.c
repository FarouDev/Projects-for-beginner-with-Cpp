#include <iostream>
#include <cmath>
using namespace std;
int main(){
int sel;
cout<<"                              Calculator"<<endl;
cout<<"        Enter the type of operation you want to calculate"<<endl;
cout<<"       [1] Arithmetic  || [2] trigonometric "<< endl;
cou<< "       [3] Exponential || [4] Logarithmic"<<endl;
cout<<"                          Enter number : ";
cin>> sel
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
