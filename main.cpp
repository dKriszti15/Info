#include <iostream>

using namespace std;

int main()
{
    int a,b,x,lnko;
    cout<< "kerem az elso szamot";
    cin >> a;
    cout<<"kerem a masodik szamot";
    cin>>b;
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;

        }
        else
        {
            b-=a;
        }
        cout << "lnko="<<a;
        return 0;
    }
}
