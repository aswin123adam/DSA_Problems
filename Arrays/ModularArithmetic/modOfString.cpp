#include <iostream>
#include <string>

using namespace std;
int main(){
    // string num = "5235";
    // int p = 12;
    string num;
    int p;
    cin>>num;
    cin>>p;
    int pwr = 1;
    int ans = 0;
    int len = num.length();
    for (int i = num.length() - 1; i >= 0; i--)
    {
        ans = ((ans + (((int)num[i])%p * (pwr%p))) % p)%p;
        len--;
        pwr*=10;
    }
    cout<<ans;
}

