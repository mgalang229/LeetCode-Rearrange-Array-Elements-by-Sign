class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg;
        for (int& x : nums) {
            if (x > 0) {
                pos.push_back(x);
            } else {
                neg.push_back(x);
            }
        }
        vector<int> ans;
        int index1 = 0, index2 = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans.push_back(pos[index1++]);
            } else {
                ans.push_back(neg[index2++]);
            }
        }
        return ans;
    }
};
