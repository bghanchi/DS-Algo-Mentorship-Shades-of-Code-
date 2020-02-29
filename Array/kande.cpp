#include<iostream>
using namespace std;


int main () {
    
    int n;
    cin >> n;
    int array[n];

     int sum=0,gt=0;   
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        sum+=array[i];
        if(sum<=0)
            sum=0;

        if(sum>gt){
            cout<<sum<<"\n";
            gt=sum;
        }    

    }

    cout<<gt<<"\n";
    
}