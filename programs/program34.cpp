// Input : 2345
// Output : 14

#include <iostream>
using namespace std;

int SumDigit(int iNo)
{
   static int iSum = 0;
   int iDigit = 0;

   if(iNo != 0)
   {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumDigit(iNo);  
   }
   
   return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = SumDigit(iValue);

    cout<<"Sum of digits is :"<<iRet<<"\n";
    
    return 0;
}
