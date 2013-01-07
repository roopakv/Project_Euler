#include <iostream>
#include <cstdlib>
#include "problems.h"
#include <fstream>
using namespace std;
int problem8()
{
    long maxprod=-1;
    long prod=1;
    char num[1010];
    int num2[1010];
    int i=0,n;
    char a;
    //a=num;
    ifstream reader;
    reader.open("problem8_input.txt");
    while(!reader.eof())
    {
        a=reader.get();
        if(a>=48 && a<=57)
        {
            num2[i] = a-48;
            num[i++]=a;
            
        }
    }
    num[i]='\0';
    n=i;
    for(i=0;i<n-4;i++)
    {
        prod = num2[i] * num2[i+1] * num2[i+2] * num2[i+3] * num2[i+4];
        if(prod>maxprod)
            maxprod=prod;
        
    }
    cout<<"Answer :"<<num<<endl<<maxprod;
}
