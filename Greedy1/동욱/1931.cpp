#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int> vec1, pair<int, int> vec2 )
{
    if(vec1.second == vec2.second)
        return vec1.first < vec2.first;
    return vec1.second < vec2.second;
}


int main()
{
    vector<pair <int, int>> conference;
    int num;
    int cnt = 0;
    int temp = 0;
    cin >> num;

    for(int i=0; i<num; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;

        conference.push_back(make_pair(num1,num2));
    }

    sort(conference.begin(),conference.end(),compare);

    for(int i=0; i<num; i++){
        if(conference[i].first >= temp){
            cnt++;
            temp = conference[i].second;
        }
    }

    cout << cnt << endl;
    return 0;
}
