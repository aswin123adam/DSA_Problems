#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
/*
int findMod(int array[],int p){
    for()
}
*/
int main()
{
    int arr[8]={2,4,5,5,6,4,3,2};
    int p =56;
   /* int p;
    int tot;
    cin>>tot;
    for(int i=0; i<tot; i++)
    cin>>arr[i];
    //int ans=findMod( arr , p );
    cin>>p;*/

    int ans=0;
    int len = size(arr);
    for(int i=0;i<size(arr);i++){
        int pwr = pow(10,len-1-i);
        ans=(ans+((arr[i]%p) * (pwr%p))%p)%p;
        
    }
    cout<<ans;
    
}