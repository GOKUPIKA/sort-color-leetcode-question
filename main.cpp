/*First Appraoch :
  [1]. First we make the count vector to store the count of numbers of nums vector.
  [2]. Iterate over the nums vector and store their count in count vector
  [3]. Make while loop to iterate over the count vector and stroing the value, after storing the value we decrement the its count
  */
    void sortColors(vector<int>& nums) {
        vector<int>count(3,0);
        int n=nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        int i=0;
        int j=0;
        while(n!=0){
            if(count[i]==0){
                i++;
            }
            else{
                nums[j]=i;
                count[i]--;
                j++;
                n--;                
            }            
        }
    }
/*
second Approach

DUTCH NATIONAL FLAG ALGORITHM
[1]. First we declare the 3 variable low, mid, high, we assume that elements starting from low to mid-1 is 1 and element from mid to high-1 is 2
[2]. initialization of varible
     low=0 (represent the starting index of the vector)
     mid=0 (represent the starting index of the vector)
     high=n-1 (represent the last index of the vector)
[3]. we run the while loop till our conditon is meet.
[4]. we take the 3 conditions
    * if the value is 0 : then we swap the low and mid value and increment low and mid by 1
    * if the value is 1 : then we increment the mid by 1
    * if the value is 2 : then we swap the high with the mid and decrement the value of high by 1    
*/

void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            switch(nums[mid]){
                case 0: swap(nums[low],nums[mid]);
                        low++,mid++;
                        break;
                case 1: mid++;
                        break;
                case 2: swap(nums[high],nums[mid]);
                        high--;
                    break;
            }
        }
    }
