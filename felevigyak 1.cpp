#include <iostream>

using namespace std;

int main()
{
    int a,o,p=1,n,i;
    cout << "hany szamot akarsz beolvasni? " << endl;
    cin >> n;
    for (i=0; i<n; i++)
    {
        cout << "add meg a szamot " <<endl;
        cin >> a;
        for (o=3; o<a/2+1;o+=2)
        {
            if (a%o==0 && o%2!=0)
            {
                p=p*o;
            }
        }

    }
    cout << "a paratlan osztok szorzata= " << p <<endl;
    return 0;
}
