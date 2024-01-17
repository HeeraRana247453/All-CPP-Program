#include<iostream>
using namespace std;
// void nLetterTriangle(int n){
// for(int i=0;i<n;i++){int a=65;
//     for(int j=0;j<i+1;j++){cout<<char(a)<<" ";a++;}
//     cout<<endl;}}
void getNumberPattern(int n) {int p=n;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){cout<<n-j;}
    for(int k=0;k<2*p-1;k++){cout<<n-i;}p--;
    for(int l=0;l<i;l++){cout<<n-i+1+l;}
    cout<<endl;}
for(int a=1;a<n;a++){
    for(int b=0;b<n-a-1;b++){cout<<n-b;}
    for(int c=0;c<2*(a+1)-1;c++){cout<<a+1;}
    for(int d=0;d<n-a-1;d++){cout<<d+a+2;}cout<<endl;}cout<<endl;}    
int main()
{
    // nLetterTriangle(4);
    getNumberPattern(4);
    return 0;
}