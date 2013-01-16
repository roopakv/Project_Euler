
#include<iostream>
#include<string.h>
#include "problems.h"

using namespace std;
int onedigit(int n)
{
    char numbers[][30]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    return strlen(numbers[n]);
}

int twodigit(int n)
{
    char numbers[][30]={"-","-","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if(n<20)
    {
        cout<<"idgfis";
        return onedigit(n);
    }
    else
        return strlen(numbers[n/10]);
}

int problem17()
{
    int sumtoten =0;
    int teens = 0;
    int tmp1,tmp2;
    int resttohundred=0;
    for(int i=1;i<=9;i++)
    {
        sumtoten=sumtoten + onedigit(i);
    }
    for(int i=10;i<=19;i++)
    {
        teens = teens + onedigit(i);
    }
    for(int i=2;i<=9;i++)
    {
        tmp1 = 10 * twodigit(i*10)+ sumtoten;
        resttohundred +=tmp1;
    }
    int hun = strlen("hundredand");
    int hunsum = 900*hun;
    int belhun = sumtoten + teens + resttohundred;
    int total = hunsum + belhun*10 + sumtoten*100 + strlen("onethousand") - 27;
    cout<<"Answer :"<<total<<endl;
}