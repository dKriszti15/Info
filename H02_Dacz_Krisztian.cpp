#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout << "a szam: ";
    cin >>a;
    d=0;
    b=a;
    while (b>0)
    {
        c=b % 10;
        b=b / 10;
        d=d*10+c;
        if(c%2!=0)
        {
            d=d*10+c-1;
        }
    }


    cout << "az uj szam: " <<d;

    return 0;
}
