#include <iostream>

using namespace std;

int main()
{
    int a,oszto;
    bool prim=true;
    cout <<"kerem a vizsgalando szamot " ;
    cin >>a;
    for (oszto=2;oszto<a/2+1;oszto++){
        if(a%oszto==0){
            prim = false;
        }
    }
    if (prim){
        cout <<"a szam prim" ;
    }
    else{
        cout <<"a szam nem prim";
    }

}
