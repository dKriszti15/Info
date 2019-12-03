#include <iostream>

using namespace std;

int main()
{
    int a,n,i=0,q=0,k=0;
    double x=0,Sparos,Sparatlan,y=0;
    cout<< "n=" ;
    cin >>n;
    for (i=0; i<n; i++)
    {
        cout << "kerem a szamokat ";
        cin >>a;
        if (a%2==0)
        {
            Sparos+=a;
            q+=1;
        }
        else
        {


            Sparatlan+=a;
            k+=1;
        }

        x=Sparos/q;
        y=Sparatlan/k;
    }
    cout <<"a parosak atlaga = " <<x <<endl;
    cout <<"a paratlanok atlaga = " <<y <<endl;
    return 0;
}
