#include<bits/stdc++.h>
using namespace std;

int secondlargest(int nums[],int n)
{
   
    int max =INT_MIN;
    int sec=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>max)
        {
            sec=max;
            max=nums[i];
        } else if (nums[i]<max && nums[i]>sec)
        {
            sec=nums[i];
        }
    }
    return sec;
}

int main()
{
    int nums[]={ 4,3,2,2,4,5,7};
    
     int n = sizeof(nums)/sizeof(nums[0]);
    cout<<secondlargest(nums,n);
    return 0;
}