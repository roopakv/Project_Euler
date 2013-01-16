
#include<iostream>
#include "problems.h"
#include<vector>
#include<cstdlib>
#include<cstdio>
using namespace std;
vector<int> collat(1e8,-1);
int k=0;
int mynum;
long long collatz(long long num)
{
    k++;
    cout<<k<<"<-";
    if(collat[num]!=-1)
        return collat[num];
    
    if(num%2==0)
        collat[num] = collatz(num/2) + 1;
    else
        collat[num] = collatz(3*num+1) +1;
    
    k--;
    return collat[num];
}

long long collatz2(long long num)
{
    long length=0;
    long long init = num;
    while(num>0)
    {
        //cout<<"<-"<<num;
        //fflush(stdout);
        if(num<1e8)
        {
            if(collat[num]!=-1 )
            {
                length +=collat[num];
                break;
            }
        }
        if(num%2==0)
        {
            num = num/2;
            length=length+1;
            
        }
        else
        {
            
            num = 3*num+1;
            
            length++;
            //collat[num] = length;
        }
        /*collat[num] = collatz(num/2) + 1;
        else
            collat[num] = collatz(3*num+1) +1;*/
        
    }
    if(num<1e8)
        collat[init] = length;
    return length;
}

int problem14()
{
    long long max=-1,no,tmp;
    collat[1]=0;
    //cout<<sizeof(double)<<endl;
    //cout<<"13"<<"->"<<collatz2(26623)<<endl;
    for(long long i=2;i<1e6;i++)
    {
        tmp = collatz2(i);
        
        if(tmp>max)
        {
            max=tmp;
            no=i;
        }
    }
    
    cout<<"Answer :"<<no<<"-> "<<max<<" "<<endl;
    return 0;
            
}