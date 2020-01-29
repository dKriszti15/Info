#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int v[100000];
    int i, n;
    n = 10;
    for(i=0; i<n; i++)
    {
        v[i] = rand()%1000;
    }
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
    return 0;
}
