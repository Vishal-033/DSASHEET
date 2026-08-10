
// lrgest element
#include <bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){

int largest =INT_MIN;
for(int i=0;i<n;i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
  
       
    
}
 return largest;

}


int main()
{
    int nums[]={2, 3,5,6,3,4,1,4,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    int largenumber=largest(nums,n);
    cout<<largenumber;
    return 0;
    

}