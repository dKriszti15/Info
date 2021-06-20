#include <iostream>

using namespace std;

int afisare (int x,int y,int k)
{
    int i,j=0;
    for (i=x; i<=y; i++)
    {
        j++;
        if (j%k!=0)
        {
            cout << i << " ";
        }
        else
        {
            cout << i << "  *  ";
        }
    }
    if (j%k!=0)
    {
        cout << "  *  ";
    }
}

int main()
{
    cout << afisare(11,21,4);
    return 0;
}
