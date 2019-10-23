#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,S1=0,S2=1;
    cout << "kerem a vizsgalando szamot " << endl;
    cin >> a;
    d=0;
    b=a;
    while (b>0)
    {
        c=b%10;

        if (c%4==0)
        {
            S1=S1+c;

        }
        if (c%5!=0){

            S2=S2*c;
        }
        b=b/10;

    }

    cout <<"a 4-gyel oszthato szamok osszege= " << S1 <<endl;
    cout <<"ay 5-tel nem oszthato szamok szorzata= " <<S2 <<endl;
    return 0;
}
