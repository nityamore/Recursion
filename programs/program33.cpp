// Input : 2345
// Output : 2
//          23
//          234
//          2345

#include <iostream>
using namespace std;

int DisplayDigits(int iNo)
{
   static int iCount = 0;

   if(iNo != 0)
   {
        cout<<iNo<<"\n";
        DisplayDigits(iNo / 10); 
        cout<<iNo<<"\n";  
   }
   return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    DisplayDigits(iValue);
    
    return 0;
}
