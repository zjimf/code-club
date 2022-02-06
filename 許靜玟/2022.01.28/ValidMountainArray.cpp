class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int maxPosition = max_element(arr.begin(),arr.end()) - arr.begin();
        if(arr.size() == 1) return 0;
        for(int i=0; i< arr.size()-1; i++)
        {
            if(i < maxPosition)
            {
                if(arr[i] >= arr[i+1] || maxPosition == arr.size()-1) return false;
            }
            else
            {
                if(arr[i] <= arr[i+1] || maxPosition == 0) return false;
            }
        }
        return true;
    }
};