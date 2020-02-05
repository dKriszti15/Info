#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int v[100];
    int n,i;
    srand(time(NULL));
    cout <<"n= ";
    cin >>n;
    for(i=0; i<n; i++)
    {
        v[i] = rand()%1000;
        cout << v[i] << "  ";
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

    cout << "a masodik legnagyobb elem:"<<v[i-1]<<endl;
    cout <<"a hamadik legkisebb elem:" << v[2] <<endl;

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
    cout << endl;
    cout <<"a masodik legnagyobb es a harmadik legkisebb elem lnko-ja = " << v[2];


    return 0;
}

