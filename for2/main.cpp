#include <iostream>

using namespace std;

int main()
{
    double Sparos=0,parosatlag,paratlanatlag,Sparatlan=0,tesco=0,tesco2=0;
    int n,a,i;
    cout<<"n=" ;
    cin>> n;
    for(i=0; i<n; i++)
    {
        cout <<"a=" ;
        cin>>a;
        if(a%2==0)
        {
            Sparos+=a;
            tesco=tesco+1;


        parosatlag=Sparos/tesco;

        }else{

            Sparatlan+=a;
            tesco2=tesco2+1;
        }

        paratlanatlag=Sparatlan/tesco2;
    }

    cout<<"parosak atlaga=" <<parosatlag <<endl;
    cout<<"paratlanok atlaga=" <<paratlanatlag <<endl;

}


