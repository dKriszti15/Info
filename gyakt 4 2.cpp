#include <iostream>

using namespace std;

int main()
{
    int m,n,i,j,x=0;
    int a[50][50];
    cout << "m=  ";
    cin >> m;
    cout << "n= ";
    cin>>n;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            cout <<"a["<<i<<"]["<<j<<"]= ";
            cin >> a[i][j];
        }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            if (a[i][j]>x && a[i][j]<21)
            {
                x=a[i][j];
            }
        }
        if (x<21 && x>0\)
        {
            cout << x<<endl;
        }
        if (x==0)
        {
            cout << "NU EXISTA!" <<endl;
        }
        x=0;
    }


    return 0;
}
