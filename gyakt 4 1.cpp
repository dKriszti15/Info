#include <iostream>

using namespace std;

int joc(int n)
{
    int k=0,i;
    for (i=2; i<=n; i++)
    {
        if (n%i==0)
        {
            k+=1;
        }
    }
    return k;
}

int main()
{
    cout <<joc(12) ;
    return 0;
}
