#include <bits/stdc++.h>

using namespace std;
#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--) //test cases
	{
	    int N;
	    cin>>N;
	    //Input all N eleemnts
        int arr[N];
        int repeating,missing;
        bool present[N+1] = {false};  //Checks which numbers are present
        for(int i=0;i<N;++i)
        {
            cin>>arr[i];
            if(present[arr[i]]==true)
                repeating = arr[i];
            present[arr[i]] = true;
        }
        
        for(int i=1;i<=N;++i)
        {
            if(present[i]==false)
            {
                missing = i;
                break;
            }
        }
        
        cout<<repeating<<" "<<missing<<"\n";
	}
	return 0;
}


int main()
{
    int arr[] = { 4, 3, 6, 2, 1, 1 };
    int n = 6;
     
    unordered_map<int, bool> numberMap;
     
    for(int i : arr)
    {
        if (numberMap.find(i) ==
            numberMap.end())
        {
            numberMap[i] = true;
        }
        else
        {
            cout << "Repeating = " << i;
        }
    }
    cout << endl;
     
    for(int i = 1; i <= n; i++)
    {
        if (numberMap.find(i) ==
            numberMap.end())
        {
            cout << "Missing = " << i;
        }
    }
    return 0;
}



//Optimal1:
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll n;
    cin>>n;
    ll arr[n],sum=(n*(n+1))/2,sumsq=(n*(n+1)*(2*n+1))/6;
    for(ll i=0;i<n;i++) cin>>arr[i];
    for(ll i=0;i<n;i++){
        sum-=arr[i];
        sumsq-=arr[i]*arr[i];
    }
    ll x,y;

    x=(sumsq/sum+sum)/2;
    y=x-sum;
    cout<<"missing: "<<x<<" repeating: "<<y<<endl;
	return;
}
int main(){
    int t=1,z=1;
    // scanf("%d",&t);
    while(z<=t){
        solve(); z++;
    }
    return 0;
}/
