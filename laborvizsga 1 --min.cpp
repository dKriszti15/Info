#include <iostream>

using namespace std;

int main()
{
    int a=0,i,x,min=INT_MAX;
    int S=0;
    for (i=0;i<10;i++){
        cout <<"x= " ;
        cin >> x;
        if (i==0){
            min = x;
        }
    }S+=x;
    if (min >x){
        min = x;
    }
    cout <<"min:" <<min <<endl;
    return 0;
}
