//Library
#include <iostream>
using namespace std;
int main() {
//Declaring variables in desired data type and asking for input
int n1, n2;
cout <<"Enter an integer:";
cin >> n1;
cout <<"Enter another integer:";
cin >> n2;
//Performing arithmetic functions
int sum = n1 + n2;
int diff = n1 - n2;
int product = n1*n2;
int div = n1/n2;
int mod = n1 % n2;
//Displaying output of results
cout <<"The sum of the integers is " <<sum<< "."<< endl;
cout <<"The difference of the integers is " <<diff<< "."<< endl;
cout <<"The product of the integers is " <<product<< "."<< endl;
cout <<"The quotient when the first integer is divided by the second is " <<div<< "."<< endl;
cout <<"The remainder when the first integer is divided by the second is " <<mod<< "."<< endl;
return 0;
}
