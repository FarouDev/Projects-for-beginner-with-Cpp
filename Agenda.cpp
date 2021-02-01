#include <iostream>
#include <string>
using namespace std;
string Names;
string Phones;
int main()
{
int sel = 0;
while(true){
cout << "My Agenda++\n\n";
cout << "Choose a number to execute an option\n\n"; cout << "[1] New Contact\n";
cout << "[2] Search by ID\n";
cout << "[3] Search by Name\n"; cout << "[4] Exit\n";
cout << "Your choice: ";
cin >> sel;
//switch to select between a functions 
switch(sel)
{
case 1:
NewContact();
break;
case 2:
SearchByID();
break;
case 3:
SearchByName();
break;
}
if(sel==4)
{
break;
}
}
return 0;
}