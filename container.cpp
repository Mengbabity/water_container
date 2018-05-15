class Solution {
public:
	int maxArea(vector<int> height) {
		int n = height.size();
		int h = 0;
		int w = 0;
		int area = 0;
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            h=min(height[i],height[j]);
            w=j-i;
            area=max(area,h*w);
            
            while(height[i]<=h && i<j)
                i++;
            
            while(height[j]<=h && i<j)
                j--;
        }

		return area;

	}
};
