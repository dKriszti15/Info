#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int v[1000];
    int n,i;
    srand(time(NULL));
    cout <<"n= ";
    cin >>n;
    for(i=0; i<n; i++)
    {
        v[i] = rand()%100;
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
        for (i=0;i<n;i++){
        cout << v[i] << "\t"<<endl;
        }



        cout << "a masodik legnagyobb elem:"<<v[i-2]<<endl;
        cout <<"a hamadik legkisebb elem:" << v[2] <<endl;

    return 0;
}
