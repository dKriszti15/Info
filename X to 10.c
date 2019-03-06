#include <iostream>

using namespace std;

int main()
{
    int szam,ujszam,hatvany,szamjegy,szamrendszer;
    cout << "Az atalakitando szam:" << endl;
    cin >> szam;
    cout << "Melyink szamrendszerbol szeretnenk?" ;
    cin >> szamrendszer;
    hatvany=1;
    ujszam=0;
        while(szam>0){
            szamjegy=szam%10;
            szam=szam/10;
            ujszam=ujszam+hatvany*szamjegy;
            hatvany=hatvany*szamrendszer;
        }
    cout << ujszam <<endl;
    return 0;
}
