#include <iostream>

using namespace std;

int main()
{
    int a,b,forditott,szam,szamjegy,i,o;
    bool pall=false;
    cout << "add meg az intervallum szelso ertekeit " << endl;
    cout <<"a=" ;
    cin >>a;
    cout <<"b=" ;
    cin >>b;
    for(i=a; i<=b; i++)
    {   bool prim=true;
        szam=i;
        forditott=0;
        while (szam>0)
        {
            szamjegy=szam%10;
            szam=szam/10;
            forditott=forditott*10+szamjegy;
        }
        if (forditott==i){
            pall = true;}

        for (o=2; o<=i/2; o++)
        {


            if(i%o==0)
            {
                prim = false;
            }

        }


        if ((pall==true) && (prim==true))
        {

            cout << i << " prim-pallindrom" <<endl;
        }
        pall=false;
    }
    return 0;
}
