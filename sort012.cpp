#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr){
		
		int low=0,mid=0, high=arr.size()-1;
		while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==2){
                swap(arr[mid], arr[high]);
                high--;
            }
            else{
                if(arr[mid]==1){
                    mid++;
                }
            }
        }
}


// void sort012(vector<int>& nums) {
        
//         if(nums.size() == 1){
//             return;
//         }
//         int zero = 0, one = 0, two = 0;
//         for(int i = 0 ; i < nums.size(); i++){
//             if(nums[i] == 0){
//                 zero++;
//             }else if(nums[i] == 1){
//                 one++;
//             }else{
//                 two++;
//             }
//         }
        
//         int i = 0;
//         while(zero--){
//             nums[i] = 0;
//             i++;
//         }
//         while(one--){
//             nums[i] = 1;
//             i++;
//         }
//         while(two--){
//             nums[i] = 2;
//             i++;
//         }
// }
int main(){
    int n;
    cin>>n;
	vector<int> v;
	
	for(int i=0; i<n; i++){
		int num;	
		cin>>num;
		v.push_back(num);
	}
	sort012(v);
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
return 0;
	
}
