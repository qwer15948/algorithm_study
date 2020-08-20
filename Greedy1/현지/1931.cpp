#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> A, pair<int, int> B)
{
	if (A.second == B.second)
		return A.first < B.first;
	return A.second < B.second;
}

int main()
{
	int conferenceCount = 0;
	vector< pair<int, int> > conferenceTime;

	int conference;
	cin >> conference;

	for (int i = 0; i < conference; i++)
	{
		int start, end;
		cin >> start >> end;

		conferenceTime.push_back(make_pair(start, end));
	}

	sort(conferenceTime.begin(), conferenceTime.end(), compare);

	int time = 0;
	for (int i = 0; i < conferenceTime.size(); i++)
	{
		if (time <= conferenceTime[i].first)
		{
			conferenceCount++;
			time = conferenceTime[i].second;
		}
	}

	cout << conferenceCount;
}