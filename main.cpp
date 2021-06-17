#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    int a[20][20];
    cin >> n;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            a[i][j]=1;
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {

            if (i+j < n-1){
                a[i][j]=n-1-i-j;
            }
            else {
                a[i][j]=a[i][j-1]+1;
            }
            if(i+j==n-1)
            {
                a[i][j]=0;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {

            cout << a[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}
