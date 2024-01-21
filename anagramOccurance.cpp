#include <iostream>
#include <vector>
using namespace std;

int countAnnagrams(string p, string txt)
{
    int pat_size = p.size(), txt_size = txt.size(), ans = 0;
    vector<int> text(26), pat(26);
    // cout << txt_size << " " << pat_size << endl;
    if (txt_size > pat_size)
        return 0;
    for (int i = 0; i < txt_size; i++)
    {
        text[txt[i] - 'a']++;
        pat[p[i] - 'a']++;
        // cout << txt[i] - 'a' << endl;
    }
    ans += (text == pat);
    // cout << ans << endl;
    for (int i = txt_size; i < pat_size; i++)
    {
        pat[p[i-txt_size] - 'a']--;  // remove previous occurance
        pat[p[i] - 'a']++; // add new occurance
        ans+= (pat == text);
    }
    return ans;
}

int main()
{
    string s1 ="cb",s2 = "wljfrimpmyhchzriwkbarxbgfcbceyhjugixwtbvtrehb";
    cout << countAnnagrams(s2,s1) << endl;
    return 0;
}