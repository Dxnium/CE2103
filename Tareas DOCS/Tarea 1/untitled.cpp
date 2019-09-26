#include <iostream>
using namespace std;
int main()
{
int a = 7; // assigned 7 to a
int *aPtr = &a; // initialize aPtr with the address of int variable a

cout<<"ptr= "<<&a;

cout<<"\na= "<<*aPtr<<endl;



} // end main