class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> state1;
        unordered_map<char , int> state2;
        for(char x :s){
            state1[x]++;    }

        for(char x :t){
            state2[x]++;     }

        return state1==state2;


        
    }
};
