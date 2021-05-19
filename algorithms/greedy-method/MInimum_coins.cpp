#include<iostream>
using namespace std;
#define size 9

int main()
{
    int coins[size]={1,2,5,10,20,50,100,500,1000};
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    int count=0,i=size-1;
    int coin_count[size]={0,0,0,0,0,0,0,0,0};
    while(amount)
    {
        count+=amount/coins[i];
        coin_count[i]=amount/coins[i];
        amount=amount%coins[i];
        i--;
    }
    cout<<" Minimum Coins Required: "<<count;
    for(int i=size-1;i>=0;i--)
    {
        if(coin_count[i])
        {
            cout<<"\n "<<coins[i]<<" x "<<coin_count[i];
        }
    }
    return 0; 
}