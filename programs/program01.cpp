// to display 1 2 3 4 5 using recursion

#include <iostream>
using namespace std;

void Display()
{
    static int i = 1;

    if(i <= 4)
    {
        cout<<i<<"\n";
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
