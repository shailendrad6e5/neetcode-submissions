class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            int max = -1;
            for(int j = i + 1; j < n; j++){
                if(max < arr[j]) max = arr[j];
            }
            arr[i] = max;
        }
        return arr;
    }
};