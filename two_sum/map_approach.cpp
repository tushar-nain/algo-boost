#include <bits/stdc++.h>
using namespace std;

/**
 * Class to solve the Two Sum problem.
 * Given an array of integers `nums` and a target integer `t`,
 * find the indices of the two numbers such that they add up to the target.
 */
class Solution
{
public:
    /**
     * Function to return the indices of the two numbers that add up to the target.
     *
     * @param nums - Reference to a vector of integers.
     * @param t - The target sum.
     * @return A vector containing the indices of the two numbers.
     */
    vector<int> twoSum(vector<int> &nums, int t)
    {
        // Hash map to store number as key and its index as value.
        unordered_map<int, int> map;

        // Iterate through the array
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = t - nums[i]; // The number required to reach the target

            // If complement exists in the map, return the pair of indices
            if (map.find(complement) != map.end())
            {
                return {map[complement], i};
            }
            else
            {
                // Store the number and its index in the map
                map[nums[i]] = i;
            }
        }

        // Return an empty vector if no valid pair is found
        return {};
    }
};

int main()
{
    // Input vector and target
    vector<int> nums = {2, 11, 7, 15}, res;
    int target = 9;

    // Create a Solution object and call the twoSum method
    res = (new Solution())->twoSum(nums, target);

    // Print the result
    printf("The two indices are %d and %d", res[0], res[1]);

    return 0;
}
