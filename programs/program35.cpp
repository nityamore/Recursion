// Input : 6
// Output : 1   2   3   6

#include <iostream>
using namespace std;

int DisplayFactors(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
        iCnt++;
        DisplayFactors(iNo);
    }
}

int main()
{
    int iValue = 0;
   
    cout<<"Enter number : \n";
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}
