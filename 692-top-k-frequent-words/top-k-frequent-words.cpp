class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        vector<string> ans;
        unordered_map<string, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[words[i]]++;
        }
        while (ans.size() < k) {
            int max = 0;
            string element = "";
            for (auto x : mpp) {
                if (x.second > max || (x.second == max && (element == "" || (x.first < element)))) {
                    max = x.second;
                    element = x.first;
                }
            }
            ans.push_back(element);
            mpp.erase(element);
        }
        return ans;
    }
};