//Library
#include <iostream>
using namespace std;

int main() {
//Declaring variables in desired data type and asking for input
float n1, n2;
cout <<"Enter a number:";
cin >> n1;
cout <<"Enter another number:";
cin >> n2;
//Performing the arithmetic functions
float sum = n1 + n2;
float diff = n1 - n2;
float product = n1*n2;
float div = n1/n2;
//Displaying the output of the results
cout <<"The sum of the numbers is " <<sum<< "."<< endl;
cout <<"The difference of the numbers is " <<diff<< "."<< endl;
cout <<"The product of the numbers is " <<product<< "."<< endl;
cout <<"The quotient when the first number is divided by the second is " <<div<< "."<< endl;
return 0;
}
