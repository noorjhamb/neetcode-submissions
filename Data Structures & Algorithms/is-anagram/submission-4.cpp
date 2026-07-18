class Solution {
public:
    bool isAnagram(string s, string t) {
        /*unordered_map<char, int> state1;
        unordered_map<char , int> state2;
        for(char x :s){
            state1[x]++;    }

        for(char x :t){
            state2[x]++;     }

        return state1==state2;*/

        if (s.length() != t.length()) return false;

        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        for(char c: t){
            if(--freq[c]<0)return false;

        }
        return true;

        /*for(auto p : freq){
            if(p.second!=0)return false;
        }
        return true ;*/


        
    }
};
