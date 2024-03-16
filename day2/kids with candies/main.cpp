#include<iostream>
#include<stdio.h>
#include<vector>

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandy = INT_MIN;

        for(int candy : candies) {
            maxCandy = max(maxCandy, candy);
        }

        for(int candy : candies) {
            result.push_back(candy + extraCandies >= maxCandy);
        }

        return result;
    }
};