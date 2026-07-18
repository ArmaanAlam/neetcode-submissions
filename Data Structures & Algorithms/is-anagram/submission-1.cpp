class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(256, 0);

        for(char ch : s){
            arr[ch - 'a']++;
        }

        for(char ch : t){
            arr[ch - 'a']--;
        }

        for(int i = 0; i < 256; i++){
            if(arr[i] != 0) return false;
        }

        return true;
    }
};
