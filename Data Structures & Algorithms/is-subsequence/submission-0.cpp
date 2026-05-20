class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_pointer = 0, t_pointer = 0;
        int n = s.size(), m = t.size();
        while(s_pointer < n && t_pointer < m) {
            if (s[s_pointer] == t[t_pointer]) {
                s_pointer++;
                t_pointer++;
            }
            else t_pointer++;
        };
        return s_pointer == n;
    }
};