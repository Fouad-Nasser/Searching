#include<iostream>
using namespace std;

int main(){
    int n,ans=-1;
    scanf("%d",&n);
    unsigned int arr[n];
    unsigned int num;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cin>>num;

    for (int i = 0; i < n; i++)
    {
        if (num==arr[i])
        {
            ans=i;
            break;
        }
        
    }
        printf("%d\n",ans);
    
    
    return 0;
}
