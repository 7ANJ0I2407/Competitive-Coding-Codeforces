#include <iostream>
#include <unordered_map>
#include <set>
#include <climits>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    set<char> unique_pokemons(s.begin(), s.end());
    int total_types = unique_pokemons.size();

    unordered_map<char, int> pokemon_count;
    int min_len = INT_MAX;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        pokemon_count[s[right]]++;

        while (pokemon_count.size() == total_types) {
            min_len = min(min_len, right - left + 1);

            pokemon_count[s[left]]--;
            if (pokemon_count[s[left]] == 0) {
                pokemon_count.erase(s[left]);
            }
            left++;
        }
    }

    cout << min_len << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}
