#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int t)
    {
        // cannot sort the given vector... because we need to return the indeces based on it.. so we will just create a vector and sort that instead
        vector<int> a = nums;

        sort(a.begin(), a.end());

        int i = 0, j = a.size() - 1;

        int res1, res2;

        while (i < j)
        {
            int sum = a[i] + a[j];

            if (sum == t)
            {
                res1 = a[i], res2 = a[j]; // storing the values.. to later find indeces from original vector#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int t)
    {
        // cannot sort the given vector... because we need to return the indeces based on it.. so we will just create a vector and sort that instead
        vector<int> a = nums;

        sort(a.begin(), a.end());

        int i = 0, j = a.size() - 1;

        int res1, res2;

        while (i < j)
        {
            int sum = a[i] + a[j];

            if (sum == t)
            {
                res1 = a[i], res2 = a[j]; // storing the values.. to later find indeces from original vector
                break;
            }

            if (sum > t)
            {
                // if sum is greater than target we need to lower down
                // to lower down we need to have some lower number.. for which we have to decrement the j index
                --j;
            }
            else
            {
                // we need to raise up
                i++;
            }
        }

        return this->getIndices(nums, res1, res2);
    }

private:
    // Get indeces from original vector

    vector<int> getIndices(vector<int> &nums, int num1, int num2)
    {
        if (nums.empty())
        {
            return {};
        }

        vector<int> res;
        int size = nums.size();

        for (int i = 0; i < size; ++i)
        {
            if (nums[i] == num1 || nums[i] == num2)
                res.push_back(i);
            if (res.size() == 2)
                break; // stop once both found
        }

        return res;
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15}, res;
    int target = 9;

    res = (new Solution())->twoSum(nums, target);

    printf("The two indeces are %d and %d", res[0], res[1]);

    return 1;
}

                break;
            }

            if (sum > t)
            {
                // if sum is greater than target we need to lower down
                // to lower down we need to have some lower number.. for which we have to decrement the j index
                --j;
            }
            else
            {
                // we need to raise up
                i++;
            }
        }

        return this->getIndices(nums, res1, res2);
    }

private:
    // Get indeces from original vector

    vector<int> getIndices(vector<int> &nums, int num1, int num2)
    {
        if (nums.empty())
        {
            return {};
        }

        vector<int> res;
        int size = nums.size();

        for (int i = 0; i < size; ++i)
        {
            if (nums[i] == num1 || nums[i] == num2)
                res.push_back(i);
            if (res.size() == 2)
                break; // stop once both found
        }

        return res;
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15}, res;
    int target = 9;

    res = (new Solution())->twoSum(nums, target);

    printf("The two indeces are %d and %d", res[0], res[1]);

    return 1;
}
