#include <bits/stdc++.h>

using namespace std;


struct Interval
{
    int start;
    int end;
    Interval()
        : start(0), end(0)
    {
    }
    Interval(int s, int e)
        : start(s), end(e)
    {
    }
};

bool doesOverlap(Interval a, Interval b)
{
    return (min(a.end, b.end) >= max(a.start, b.start));
}


vector<Interval> insertNewInterval
(vector<Interval>& Intervals, Interval newInterval)
{
    vector<Interval> ans;
    int n = Intervals.size();

    if (n == 0)
    {
        ans.push_back(newInterval);
        return ans;
    }


  
    if (newInterval.end < Intervals[0].start ||
            newInterval.start > Intervals[n - 1].end)
    {
        if (newInterval.end < Intervals[0].start)
            ans.push_back(newInterval);

        for (int i = 0; i < n; i++)
            ans.push_back(Intervals[i]);

        if (newInterval.start > Intervals[n - 1].end)
            ans.push_back(newInterval);

        return ans;
    }

    if (newInterval.start <= Intervals[0].start &&
        newInterval.end >= Intervals[n - 1].end)
    {
        ans.push_back(newInterval);
        return ans;
    }


    bool overlap = true;
    for (int i = 0; i < n; i++)
    {
        overlap = doesOverlap(Intervals[i], newInterval);
        if (!overlap)
        {
            ans.push_back(Intervals[i]);

            if (i < n &&
                newInterval.start > Intervals[i].end &&
                newInterval.end < Intervals[i + 1].start)
                ans.push_back(newInterval);

            continue;
        }

        Interval temp;
        temp.start = min(newInterval.start,
                         Intervals[i].start);

        while (i < n && overlap)
        {

            temp.end = max(newInterval.end,
                           Intervals[i].end);
            if (i == n - 1)
                overlap = false;
            else
                overlap = doesOverlap(Intervals[i + 1],
                                          newInterval);
            i++;
        }

        i--;
        ans.push_back(temp);
    }

    return ans;
}


int main()
{
    vector<Interval> Intervals;
    Interval newInterval;

    newInterval.start = 1;
    newInterval.end = 2;
    Intervals.push_back(newInterval);
    newInterval.start = 3;
    newInterval.end = 5;
    Intervals.push_back(newInterval);
    newInterval.start = 6;
    newInterval.end = 7;
    Intervals.push_back(newInterval);
    newInterval.start = 8;
    newInterval.end = 10;
    Intervals.push_back(newInterval);
    newInterval.start = 12;
    newInterval.end = 16;
    Intervals.push_back(newInterval);
    newInterval.start = 4;
    newInterval.end = 9;

    vector<Interval> ans =
          insertNewInterval(Intervals, newInterval);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].start << ", "
             << ans[i].end << "\n";

    return 0;
}
