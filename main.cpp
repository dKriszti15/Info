#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int v[100];
    int i,j;
    int n;
    cout << "n= ";
    cin >>n;
    for(i=0; i<n; i++)
    {
        cout << "v["<<i<<"]=";
        cin >> v[i];
    }
    for (i=0; i<n; i++)

    cout << v[i] <<"  ";
     cout << endl;
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {

            //ha a tomb elso feleben valamelyik elem nagyobb,mint a tomb masodik feleben,csereld ki oket

            if(v[i]>v[j])
            {
                swap (v[i], v[j]);
            }
        }
    }
    for (i=0;i<n;i++){
    cout << v[i]<<"\t";
}
return 0;
}
