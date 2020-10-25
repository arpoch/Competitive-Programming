#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> subsets;
    vector<int> set;
    for (int i = 0; i < pow(2, nums.size()); i++)
    {
        set.clear();
        for (int j = 0; j < nums.size(); j++)
        {
            if ((i & (1 << j)) != 0)
            {
                set.push_back(nums[j]);
            }
        }
        subsets.push_back(set);
    }
    //subsets.push_back(set);
    return subsets;
}
int main()
{
    vector<vector<int>> ans;
    vector<int> nums{1, 2, 3};
    ans = subsets(nums);
    for (auto &x : ans)
    {
        for (auto y : x)
        {
            cout << y << '\t';
        }
        cout << "\n";
    }
    return 0;
}
