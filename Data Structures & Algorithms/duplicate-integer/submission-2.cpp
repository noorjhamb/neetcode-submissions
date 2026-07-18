class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       /* map<int , int>freq;
        for(int x : nums){
            freq[x]++;

        }
        for(auto p : freq){
            if(p.second>1)return true;

        }
        return false;*/
        unordered_set<int>seen;
        for(auto x : nums){
            if(seen.count(x))return true;
         seen.insert(x);
        }
        return false;
        
        
    }
};