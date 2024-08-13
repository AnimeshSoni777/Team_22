#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    year=year+1;
    int a,b,c,d;
    while(1){
        a=year%10;
        b=(year%100)/10;
        c=(year%1000)/100;
        d=year/1000;
        if(a==b||a==c||a==d||b==c||b==d||c==d){
            year++;
            continue;
        }
        if(a!=b!=c!=d){
            cout<<year;
            break;
        }
    }
    return 0;
}