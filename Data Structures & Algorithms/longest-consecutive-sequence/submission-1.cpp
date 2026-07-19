class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxlength =0 ; 
        unordered_set<int>st;
        for(int num:nums){
            st.insert(num);
        }
        for(int num:st){

            if(st.find(num-1)==st.end()){
                int curr=num;
                int length =1;
                while(curr!=INT_MAX && st.find(curr+1)!=st.end()){
                    curr++;
                    length++;
                }
                maxlength = max(maxlength, length);

            }
        }
        return maxlength;
    }
};
