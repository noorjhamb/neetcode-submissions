class Solution {
public:
    bool isPalindrome(string s) {
        bool found = true;
        s.erase(remove(s.begin(), s.end(),' ' ),s.end());
        s.erase(remove_if(s.begin(), s.end(), ::ispunct), s.end());
    
        for (char &c : s){
            c=tolower(c);

        }
        for(int i =0 ; i<s.length()/2 ; i++){
            if(s[i]!=s[s.length()-1-i]) return false;
        }
        return found;
    }
};
