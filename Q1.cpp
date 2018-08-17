//Library
#include <iostream>
using namespace std;

int main() {
cout <<"Hello"<< endl;

//Declaring and defining variables of all basic data types
int intVar = 19;
float floatVar = 1.9;
char charVar = 's';
double doubleVar = 19.122000;
bool boolVar = false;

//Displaying the values and sizes of all basic data types
cout <<"The integer value is " <<intVar<< " and the size of the integer value is " <<sizeof(int)<< "."<< endl;
cout <<"The float value is " <<floatVar<< " and the size of the float value is " <<sizeof(float)<< "."<< endl;
cout <<"The character value is " <<charVar<< " and the size of the character value is " <<sizeof(char)<< "."<< endl;
cout <<"The double value is " <<doubleVar<< " and the size of the double value is " <<sizeof(double)<< "."<< endl;
cout <<"The boolean value is " <<boolVar<< " and the size of the boolean value is " <<sizeof(bool)<< "."<< endl;
return 0;
}
