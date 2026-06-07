class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1;
        int left = 0;
        int marea=0;
        while (right>left){
            int width=right-left;
            int heighta =std::min(height[right],height[left]);
            int area=width*heighta;
            marea=std::max(area,marea);
            if (height[right]>=height[left])
                left++;
            else
                right--;

        }
    return{marea};
    }
};
