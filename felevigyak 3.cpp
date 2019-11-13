#include <iostream>

using namespace std;

int main()
{
    int a,S=0,n,i,felszam,x;
    cout << "hany szamot akarsz beolvasni? " << endl;
    cin >> n;
    for (i=0; i<n; i++)
    {
        cout << "add meg a szamot " <<endl;
        cin >> a;
        for (x=2; x<(a+1)/2; x++)
        {
            if (a%x>0)
            {
                S=S+x;


            }
        }
    }
    cout <<S <<endl;
}
