class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> answers(n);
        answers[n-1] = -1;
        for(int i = n-2; i >= 0; i--) 
        answers[i] = max(answers[i+1], arr[i+1]);
        return answers;
    }
};