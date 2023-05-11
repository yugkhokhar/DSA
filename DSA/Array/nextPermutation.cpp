//1. Find Dip Point
//2. Find the Number Just greater than the dip point and swap
//3. Sort/reverse the remain part after idx

void next_Permutation(vector<int>& nums) {
    int n = nums.size();
    //dip point
    int idx=-1
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1])
            idx=i;
    }

if(idx==-1){
    reverse(nums.begin(),nums.end());
    return;
}

    for(int i=n-1;i>=0;i--){
        if(nums[i]>nums[idx]){
            swap(nums[i],nums[idx]);
        }
    }

reverse(nums.begin()+idx+1,nums.end());



  
}