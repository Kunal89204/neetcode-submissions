class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;

        // for(int i = 0; i < heights.size(); i++){
        //     for(int j = i+ 1; j < heights.size(); j++){
        //         int w = j - i;
        //         int ht = min(heights[i], heights[j]);
        //         int area = w * ht;

        //         maxWater = max(maxWater, area);
        //     }
        // }

        int left = 0;
        int right = heights.size() - 1;

        while(left<right){
            int w = right - left;
            int ht = min(heights[left], heights[right]);
            int area = w * ht;

            maxWater = max(maxWater, area);

            if(heights[left] < heights[right]){
                left++;
            }else{
                right--;
            }
           

        }

        return maxWater;
    }
};
