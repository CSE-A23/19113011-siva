#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class distance
{
    public:
        float km,metre;
    float convert(float x)
    {
        return x/1000;
    }
    void rope(float q,float w)
    {
        cout<<"\nADDing="<<q+w;
        cout<<"\nSUBtract="<<q-w;
    }
    friend void rope(float q,float w);
}DIST;


int main()
{
    float m1,m2,l,p;
    cout<<"Enter the metre-1 and metre-2\n";
    cin>>m1>>m2;
    l=DIST.convert(m1);
    p=DIST.convert(m2);
    cout<<l<<" "<<p;


)
