#include <iostream>
#include <cstdlib>
#include <vector>
#include "problems.h"
using namespace std;
int problem7()
{
    long maxprod=-1;
    long prod=1;
    vector<bool> parr(9000001,true);
    long i,j,cnt=0;
    /*for(i=0;i<1000000;i++)
    {
        parr[i]=true;
    }*/
    
    for(i=2;i<1000;i++)
    {
        
        if(parr[i]==true)
        {
            cnt++;
            for(j=i;j*i<1000000;j++)
            {
                parr[j*i]=false;
            }
        }
    }
    for(;i<1000000;i++)
    {
        if(parr[i]==true)
        {
            cnt++;
            if(cnt==10001)
            {
                cout<<"Answer: "<<i<<endl;
                break;
            }
        }
    }
     
    //cout<<"Answer :"<<num<<endl<<maxprod;
}
