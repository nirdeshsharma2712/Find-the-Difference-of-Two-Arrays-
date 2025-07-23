class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec1;
        vector<vector<int>> ans;
        set<int> test1 , test2;
        for(int i=0;i<nums1.size();i++) test1.insert(nums1[i]);
        for(int i=0;i<nums2.size();i++) test2.insert(nums2[i]);
        for(int val1: test1){
            if(test2.count(val1)==0) vec1.push_back(val1);
        }
        ans.push_back(vec1);
        vec1.clear();
        for(int val1: test2){
            if(test1.count(val1)==0) vec1.push_back(val1);
        }
        ans.push_back(vec1);
        return ans;
    }
};
