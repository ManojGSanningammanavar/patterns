// question 136 (single nor)
// class Solution {
//     public:
//         int singleNumber(vector<int>& nums) {
//             int sum=0;
//             for(int val : nums){
//                 sum^=val;
//             }
//             return sum;
//         }
//     };


//question 53 (max sum of subarray)
// class Solution {
//     public:
//         int maxSubArray(vector<int>& nums) {
//             int currentsum = 0 ,  maxsum = INT_MIN;
//             for(int val :nums){
//                 currentsum+=val;
//                 maxsum= max(currentsum , maxsum);
//                 if(currentsum<0){
//                         currentsum=0;
//                 }
//             }
//             return maxsum;
//         }
//     };


//Question 169 (MAJORITY ELEMENT)
// class Solution {
//     public:
//         int majorityElement(vector<int>& nums) {
//             int n = nums.size();
//             sort(nums.begin(), nums.end());
//             int freq = 1, ans = nums[0];
            
//             for(int i = 1; i < n; i++) {  // Start from i=1
//                 if(nums[i] == nums[i-1]) {
//                     freq++;
//                 }
//                 else {
//                     freq = 1;  // Reset to 1 for new element
//                     ans = nums[i];
//                 }
//                 if(freq > n/2) {
//                     return ans;
//                 }
//             }
//             return ans;  // This handles case when majority is the last element or array has only 1 element
//         }
//     };


//Question 50 POW(X,N)
/* class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1) return 1.0;
        if(x==0) return 0.0;
        if(x==-1 && n%2==0 ) return 1.0;
        if(x==-1 && n%2!= 0) return -1.0;

        long binform = n;
        if(n<0){
            x=1/x;
            binform= -binform;

        }

        double ans=1;
        while(binform>0){
            if(binform %2 ==1){
                ans*=x;

            }
            x*=x;
            binform /=2;

        }
        return ans;
    }
*/


//Question 121. Best Time to Buy and Sell Stock
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0 ;
        int bestbuy=prices[0];
        for (int i = 0 ; i < prices.size() ; i++){
            if(prices[i]>bestbuy){
                maxprofit= max(maxprofit, prices[i]-bestbuy);
            }
            bestbuy= min(bestbuy, prices[i]);
        }
        return maxprofit;
    }
};
*/


//QUESTION 11. Container With Most Water
/*class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0, rp=height.size()-1;
        int ans =0;
        while(lp<rp){
            int w = rp-lp;
            int ht = min(height[lp], height[rp]);
            int area= w * ht;
            ans= max(ans, area);
        height[lp] < height[rp] ? lp++ : rp-- ;
        }
        return ans;
    }
};
*/


//QUESTION 238. Product of Array Except Self
/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        for (int i = 1 ; i<n ; i++){
            ans[i]= ans[i-1]*nums[i-1];
        }
        int suffix = 1;
        for(int i =n-2; i>=0; i--){
            suffix*= nums[i+1];
            ans[i]*= suffix;
        }
        return ans;
    }
};
*/


// QUESTION  33 (Search in Rotated Sorted Array)
/*
class Solution {
public:
    int search(vector<int>& a, int tar) {
        int st =0,  end  = a.size()-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(a[mid]==tar){
                return mid;
            }
            if(a[st]<=a[mid]){
                if(a[st]<=tar && tar<=a[mid]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else{
                if(a[mid]<=tar && tar<= a[end]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
*/

//QUESTION 852 (pEAK INDEX OF mountain array)
/*
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int st = 1, end = a.size()-2;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(a[mid-1]<a[mid] && a[mid]>a[mid+1]){
                return mid;
            }
            else if(a[mid-1]<a[mid]){
                st= mid+1;
            }        
            else{
                end= mid-1;
            }

            }
            return -1;
    }
};
*/


//QUESTION 540. (Single Element in a Sorted Array)
/*
class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n = a.size();
        if(n==1) return a[0];
        int st =0, end = n-1;
        while(st<= end){
            int mid = st + (end-st )/2;
            if(mid ==0 && a[0]!=a[1]) {
                return a[mid];
            }
            if(mid ==n-1 && a[n-1]!=a[n-2]) {
                return a[mid];
            }
            if(a[mid-1] != a[mid] && a[mid]!=a[mid+1]){
                return a[mid];
            }
            if(mid%2 == 0){
                if(a[mid-1]==a[mid]){
                    end = mid-1;
                }
                else{
                    st = mid+1;

                }
            }
            else{
                  if(a[mid-1]==a[mid]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};
*/



//que - 75 (0's,1's,2's)
/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int low = 0, mid = 0 , high = n-1;
        while (mid <=high){
            if(nums[mid]== 0){
                swap(nums[low], nums[mid]);
                mid++;
                low++;

            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high], nums[mid]);
                high--;
            }

        }
    }
};
*/

//Queartion 88 (merge sorted array)
/*
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int idx = m+n-1;
        int i = m-1;
        int j = n-1;
        while(i>=0 && j>=0){
            if(a[i]>=b[j]){
                a[idx--] = a[i--];
            }
            else{
                a[idx--]=b[j--];
            }
        }
        while(j>=0){
            a[idx--]=b[j--];
        }

    }
};
*/