#include <iostream>
#include <string>
using namespace std;
 
 int main(){ 
    string A = "565654";
/*string gg = "hello";
string sub = gg.substr(gg.length()-3,gg.length());
cout<<gg<<"\n"<<sub; */

int num;
    if(A.length() < 3){
        num = stoi(A);
        return (num%8 == 0) ? 1 : 0;
    }
    else{
        string sub = A.substr(A.length()-3,A.length());
        num = stoi(sub);
        return (num % 8 == 0)? 1 : 0;
    }
}