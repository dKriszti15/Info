#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a;
    double S=0,p=-1;
    double X=0,M=0;
    ifstream jegyek ("jegyek.txt");
    ofstream media ("media.txt");
    while (jegyek>>a)
    {

        S+=a;
        p+=1;

    }
    S-=a;
    X=S/p;
    M=((X*3)+a)/4;

    media << M ;


    jegyek.close();
    media.close();
    return 0;
}
