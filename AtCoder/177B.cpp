#include <iostream>
#include <algorithm>
int main()
{
    int max = 0, cur = 0, i = 0;
    std::string s, t;
    std::cin >> s >> t;
    int slen = s.length(), tlen = t.length();

    while (i <= slen - tlen)
    {
        cur = 0;
        for (int j = 0; j < tlen; j++)
        {
            if (s[i + j] == t[j])
            {
                cur++;
            }
        }
        max = std::max(max, cur);
        i++;
    }
    std::cout << t.length() - max << '\n';
    return 0;
}