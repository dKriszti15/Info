#include <iostream>

using namespace std;

int main()
{
    int szamlalo,nevezo,lnko,tort,iszamlalo,inevezo,x,y;
    cout << "a szamlalo = " ;
    cin >> szamlalo;
    cout << "a nevezo = ";
    cin >> nevezo;
    x=szamlalo;
    y=nevezo;
    while (x!=y){
    if (x>y){
        x=x-y;
    }
    if (y>x){
        y=y-x;
    }
    }
    lnko=x;
    iszamlalo=szamlalo/x;
    inevezo=nevezo/x;
    cout << "szamlalo2 = " << iszamlalo <<endl;
    cout << "nevezo2 = " <<inevezo <<endl;

    return 0;
}
