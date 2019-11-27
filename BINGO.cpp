#include <iostream>
#include <stdlib.h>
#include  <time.h>

using namespace std;

int main()
{
    srand ((unsigned)time (NULL));
    int x = rand () % 101
    int a = -1;
    while (a!=x){
        cout <<"kerem a tippet";
        cin >>a;
        if (a==x){
            cout <<"GG! Eltalaltad!" <<endl;

        }else if (a>x){
        cout<< "a szam nagyobb mint amire egondoltam" <<endl;

        }else {
        cout <<"a szam kisebb mint amire gondoltam" <<endl;
        }
    }
    return 0;
}
