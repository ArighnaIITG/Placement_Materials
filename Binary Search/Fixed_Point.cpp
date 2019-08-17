/*
Objective: Given a sorted array of distinct integers, Find the Magic index or Fixed point in the array.

Magic Index or Fixed Point: Magic index or a Fixed point in an array is an index i in the array such that A[i] = i.

Example :

int[] A = { -1, 0, 1, 2, 4, 10 };

Magic index or fixed point is : 4
*/

/* Solution approach is simple. Use simple binary search. Take l=0 and r=n-1. Find out mid. If arr[mid]==mid return `mid`, else if arr[mid] > mid, then make r = m-1, or else l =m+1.
*/

int fixedpoint(vector<int>& nums)
{
    int n = nums.size();
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)>>1;
        if(nums[mid] == mid) return mid;
        else if(nums[mid] > mid) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
