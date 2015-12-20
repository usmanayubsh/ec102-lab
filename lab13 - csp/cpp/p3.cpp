#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int time_to_secs(Time);
Time secs_to_time(int);

int main()
{
    int sum_in_seconds;
    char s;
    Time t1, t2, t3;

    cout << "Enter time 1 (hh:mm:ss): ";
    cin >> t1.hours >> s >> t1.minutes >> s >> t1.seconds;

    cout << "Enter time 2 (hh:mm:ss): ";
    cin >> t2.hours >> s >> t2.minutes >> s >> t2.seconds;

    sum_in_seconds = time_to_secs(t1) + time_to_secs(t2);
    cout << "Sum in seconds: " << sum_in_seconds << endl;
    t3 = secs_to_time(sum_in_seconds);
    cout << "The sum is: " << t3.hours << s << t3.minutes << s << t3.seconds;
    cout << endl;
    return 0;
}

int time_to_secs(Time t)
{
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

Time secs_to_time(int s)
{
    Time t;

    t.hours = s / 3600;
    s -= t.hours * 3600;

    t.minutes = s / 60;
    s -= t.minutes * 60;

    t.seconds = s;
    return t;
}