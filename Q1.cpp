//Library
#include <iostream>
using namespace std;

int main() {
//Declaring and defining variables of basic data types
int intVar = 19;
float floatVar = 1.9;
char charVar = 'S';
double doubleVar = 1.9122000;
bool boolVar = false;

//Displaying the values and sizes of basic data types
cout <<"The integer value is " <<intVar<< " and its size is " <<sizeof(int)<< "."<< endl;
cout <<"The float value is " <<floatVar<< " and its size is " <<sizeof(float)<< "."<< endl;
cout <<"The character value is " <<charVar<< " and its size is " <<sizeof(char)<< "."<< endl;
cout <<"The double value is " <<doubleVar<< " and its size is " <<sizeof(double)<< "."<< endl;
cout <<"The Boolean value is " <<boolVar<< " and its size is " <<sizeof(bool)<< "."<< endl;
return 0;
}
