class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = (n1+n2);
        vector<int> mergedArray(n);
        int i=0,j=0,k=0;
        while(i<n1 and j<n2){
           if(nums1[i]<=nums2[j]){
              mergedArray[k++] =(nums1[i++]);
           }
            else{
                mergedArray[k++] = (nums2[j++]);
            }
        }
        while(i<n1){
            mergedArray[k++]= nums1[i++];
        }
        while(j<n2){
            mergedArray[k++]= nums2[j++];
        }
        for(auto x: mergedArray)
            cout<<x<<" ";
        cout<<endl;
        if(n%2) return mergedArray[(n+1)/2-1];
        else return (mergedArray[n/2-1] + mergedArray[(n)/2])/2.0;
    }
};