class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        vector<int>v;
        for(auto x: nums){
            mp[x]++;
        }
        for(auto p:mp){
            if(p.second>1){
                v.push_back(p.first);
            }
        }
        return v;
    }
};
