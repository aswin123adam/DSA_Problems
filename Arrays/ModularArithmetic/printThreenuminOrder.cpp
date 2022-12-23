#include<iostream>
#include<string>
using namespace std;

int main(){
int temp;
int start=0;
int A=74;
int B = 86;
int C = 54;
(A>B)? ((A>C)? temp = A: temp = C):((B>C)? temp = B : temp = C);

if(temp == A){
    if(B>C){
        start+=C;
        start*=100;
        start+=B;
    }
    else{
        start+=B;
        start*=100;
        start+=C;
    }
    start*=100;
    start+=A;
}
else if(temp == B){
    if(A>C){
        start+=C;
        start*=100;
        start+=A;
    }
    else{
        start+=A;
        start*=100;
        start+=C;
    }
    start*=100;
    start+=B;
}
else{
    if(A>B){
        start+=B;
        start*=100;
        start+=A;
    }
    else{
        start+=A;
        start*=100;
        start+=B;
    }
    start*=100;
    start+=C;
}
cout<<start;
}