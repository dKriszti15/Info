#include <iostream>

using namespace std;

int main()
{
    int a,o,S=0,n,i,szj,szam;
    cout << "hany szamot akarsz beolvasni? " << endl;
    cin >> n;
    for (i=0; i<n; i++)
    {
        cout << "add meg a szamot " <<endl;
        cin >> a;
        szam=a;
        while (szam>0){
            szj=szam%10;
            szam=szam/10;
            if (szj%4!=0){
                    S=S+szj;

            }
        }

    }
    cout <<  S <<endl;
    return 0;
}
