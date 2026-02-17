// to display 1 2 3 4 5 using recursion

#include <iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout<<i<<"\n";
        i++;
        Display(6);
    }
}

int main()
{
    Display(6);

    return 0;
}
