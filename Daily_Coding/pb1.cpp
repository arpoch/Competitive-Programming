//Time complexity is O(nlg(n))
#include <iostream>
#include <vector>
#include <map>
#include <math.h>
using namespace std;
bool check_sum(const vector<int> &list, int k)
{
    //Doing in one pass
    map<int, bool> diff;
    for (auto &x : list)
    {
        if (diff.find(x) != diff.end())
        {
            //cout << k - x;
            return true;
        }
        else
        {
            diff[(k - x)] = 0;
        }
    }

    return false;
}
int main()
{
    vector<int> list = {10, 15, 23, 7};
    int k = 17;
    cout << check_sum(list, k);
    return 0;
}
