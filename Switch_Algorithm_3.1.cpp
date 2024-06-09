#include <iostream> 
using namespace std;

void numSwitch(int &a, int  &b){
    double c = a;
        a = b; 
        b = c; 
    }


int main(){

int int1, int2;

cout << "Please enter the first number: ";
cin >> int1;

cout << "Please enteter the second number: ";
cin >> int2; 

cout << "" << endl; 
cout <<"Integer first number is " << int1 << ". "<< endl;
cout << "Integer second number is " << int2 << " ." << endl;
cout << "" << endl; 

numSwitch(int1, int2);


cout <<"Integer first number is " << int1 << " ."<< endl;
cout << "Integer second number is " << int2 << " ." << endl;
cout << "" << endl; 







    return 0;
}
