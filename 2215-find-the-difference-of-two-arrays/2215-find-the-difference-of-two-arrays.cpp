class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1;
        set<int> set2;

        for(int x : nums1) {
            set1.insert(x);
        }   

        for(int x : nums2) {
            set2.insert(x);
        }

        vector<vector<int>> answer(2);
        for(int x : set1) {
            if(set2.find(x) == set2.end()) {
                answer[0].push_back(x);
            }
        }

        for(int x : set2) {
            if(set1.find(x) == set1.end()) {
                answer[1].push_back(x);
            }
        }
        return answer;
    }
};