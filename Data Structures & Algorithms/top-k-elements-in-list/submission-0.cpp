class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        vector<int>ans;
        vector<pair<int,int>>res;
        for(int x : nums){
            mp[x]++;
            
        }
        for(auto p : mp){
            res.push_back({p.first,p.second});
            sort(res.begin(),res.end(),[](pair<int,int>a , pair<int , int>b){
                return a.second>b.second;
            });

        }
        for(int i = 0 ; i<k ; i++){
            ans.push_back(res[i].first);
        }
        return ans;

    }
};
