#include <iostream>
#include <cstdlib>
#include "problems.h"
#include <fstream>
using namespace std;
int problem13()
{
    char nums[101][55];
    int ans[70];
    int i=0,j,csum=0;
    char a;
    //a=num;
    ifstream reader;
    reader.open("problem13_input.txt");
    while(!reader.eof())
    {
        reader.getline(nums[i++],55,'\n');
    }
    j=49;
    for(j=49;j>=0;j--)
    {
        
        cout<<"Col "<<j;
        for(i=0;i<100;i++)
        {
            csum=csum + (nums[i][j]-48);
        }
        ans[j] = csum%10;
        cout<<"-"<<ans[j]<<endl;
        csum = csum/10;
    }
    cout<<csum;
    for(i=0;i<8;i++)
    {
        cout<<ans[i];
    }
    //cout<<"Answer :"<<num<<endl<<maxprod;
}
