#include <iostream>
using namespace std;

int main()
{
    int v[100];
    int n,i,S=0,P=1,X;
    cout <<"n= ";
    cin >>n;
    for(i=0; i<n; i++)
    {
        cout << "v["<<i<<"]=";
        cin >> v[i];
    }
    cout <<endl;

    for (i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {

            if (v[i]>v[j])
            {
                swap (v[i], v[j]);
            }

        }
    }
    P*=v[2]*v[i-1];
    S+=v[2]+v[i-1];
    while (v[2]!=v[i-1])
    {
        if (v[2]>v[i-1])
        {
            v[2]=v[2]-v[i-1];
        }
        if (v[i-1]>v[2])
        {
            v[i-1]=v[i-1]-v[2];
        }
    }
    X=P/v[2];

    cout << endl;
    cout <<P<<endl;
    cout <<S<<endl;
    cout <<v[2]<<endl;
    cout <<X<<endl;


    return 0;
}
