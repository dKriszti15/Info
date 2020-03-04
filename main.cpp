#include <iostream>

using namespace std;

int main()
{
    int szr,szam,hatvany,ujszam,szamjegy;
    cout << "szam= ";
    cin >> szam;
    cout <<"hanyas szamrendszerbe ? " <<endl ;
    cin >>szr;
    hatvany=1;
    ujszam=0;
    while (szam>0){
        szamjegy=szam%szr;
        szam=szam/szr;
        ujszam=ujszam+hatvany*szamjegy;
        hatvany=hatvany*10;
    }
    cout << ujszam ;

    return 0;
}
