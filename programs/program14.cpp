// Input : 4
// Output :  1*2*3*4 = 24

#include <iostream>
using namespace std;

// Global variable
int iFact = 1;

int Factorial(int iNo)
{
   if(iNo >= 1)
   {
        iFact = iFact * iNo;
        Factorial(--iNo);               // Pre decrement
   }
   return iFact;
       
}

int main()
{
    Factorial(4);

    cout<<"Factorial is :"<<iFact<<"\n";
    
    return 0;
}
