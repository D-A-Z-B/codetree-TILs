#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    map<string, int> m;
    m.insert({ "Bessie", 0 });
    m.insert({ "Elsie", 0 });
    m.insert({ "Daisy", 0 });
    m.insert({ "Gertie", 0 });
    m.insert({ "Annabelle", 0 });
    m.insert({ "Maggie", 0 });
    m.insert({ "Henrietta", 0 });

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string name;
        int score;
        cin >> name >> score;
        auto student = m.find(name);
        if (student != m.end()) {
            student->second += score;
        }
    }

    vector<pair<string, int>> sortedMap(m.begin(), m.end());
    sort(sortedMap.begin(), sortedMap.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
        });
    bool isTie = all_of(sortedMap.begin(), sortedMap.end(), [&](const auto& entry) {
        return entry.second == sortedMap[0].second;
        });

    if (isTie) {
        cout << "tie" << endl;
    }
    else {
        int smallestValue = sortedMap[0].second;
        int secondSmallestValue = -1;

        for (const auto& entry : sortedMap) {
            if (entry.second > smallestValue) {
                secondSmallestValue = entry.second;
                break;
            }
        }

        if (secondSmallestValue != -1) {
            for (const auto& entry : sortedMap) {
                if (entry.second == secondSmallestValue) {
                    cout << entry.first << endl;
                    break;
                }
            }
        }
        else {
        }
    }

    return 0;
}