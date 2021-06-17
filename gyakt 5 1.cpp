#include <iostream>
using namespace std;
int identice(int n)
{
    int szj,x;
    x=n%10;
    while(n!=0)
    {
        szj=n%10;
        n=n/10;
        if (szj!=x)
        {
            return 0;
        }
        if(szj == x && n==0){
            return 1;
        }
    }
}
int main()
{
    cout << identice(2222) << endl;
    return 0;
}
