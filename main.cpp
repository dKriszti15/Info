#include <iostream>

using namespace std;

int suma( int n)
{
    int S,p,o,k;
    S=1;
    for (o=2; o<=n; o++)
    {
        if (n%o==0)
        {
            p=0;
            for (k=2; k<o/2+1; k++)
            {

                if (o%k==0)
                {
                    p++;
                }

            }
            if(p!=0)
            {
                S+=o;

            }
        }
    }
    return S;
}

int main()
{
    cout << suma(12);
    return 0;
}
