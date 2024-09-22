// class Solution {
// public:
//     int maxArea(vector<int>& height) {

        // brute force solution
        //O(n2) ----> TLE
        // (10^5)^2  
        //we have to do in 10^8

        // int maxWater = 0;

        // for(int i = 0 ; i < height.size() ; i++)
        // {
        //     for(int j = i+1 ; j < height.size() ; j++)
        //     {
        //         int width = j-i;
        //         int heightt = min(height[i] , height[j]);
        //         int water = (width * heightt);
        //         maxWater = max(maxWater , water);

        //     }
        // }

        // return maxWater;


        //optimal - O(n)


//     int lp = 0;
//     int rp = height.size() - 1;
//     int maxWater = 0;

//     while(lp < rp)
//     {
//          int width = rp-lp;
//          int heightt = min(height[lp] , height[rp]);
//          int water = width * heightt;
//          maxWater = max(maxWater , water);

//          height[lp] < height[rp] ? lp++ : rp--;
//     }

//     return maxWater;
        
//     }
// };