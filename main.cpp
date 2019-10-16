#include <iostream>

using namespace std;

int main()
{
    int i,n,S=0;
    cout <<"hany szamot akarsz megvizsgalni? ";
    cin >>n;
    for(i=0; i<n; i++)
    {
        int a,oszto;
        bool prim=true;
        cout <<"kerem a vizsgalando szamokat " ;
        cin >>a;
        for (oszto=2; oszto<a/2+1; oszto++)
        {
            if(a%oszto==0)
            {
                prim = false;
            }
        }
    if (prim){
        S=S+a;}

    }
    cout <<"a primszamok osszege= "<<S ;




}
