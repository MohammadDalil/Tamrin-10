#include <conio.h>
#include <iostream>

using namespace std;

class Time
{
public:
    int hour, minute, second;
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void sum(Time s);
    void display_time();
    void sub(Time s);
    void time_to_seconds();

};
void Time::display_time()
{
    cout << "your time is->\t" << hour << ":" << minute << ":" << second;

}
void Time::sum(Time s)
{
    int d = second, u = hour, o = minute;
    second += s.second;
    minute += s.minute + (second / 60);
    hour += s.hour + (minute / 60);
    minute = minute % 60;
    second = second % 60;
    cout << hour << ":" << minute << ":" << second;
    second = d;
    hour = u;
    minute = o;

}
void Time::sub(Time s)
{
    int d = second, u = hour, o = minute;
    if (s.second > second)
    {
        --minute;
        second += 60;
    }

    second -= s.second;
    if (s.minute > minute)
    {
        --hour;
        minute += 60;
    }
    minute -= s.minute;
    hour -= s.hour;
    cout << hour << ":" << minute << ":" << second;
    second = d;
    hour = u;
    minute = o;
}

void Time::time_to_seconds()
{
    int d = second, u = hour, o = minute;
    hour *= 3600;
    minute *= 60;
    second = hour + minute + second;
    cout << second;
    second = d;
    hour = u;
    minute = o;
}
int main()
{
    int hour, min, sec;
    int hour2, min2, sec2;
    Time re(0, 0, 0);
    Time rt(0, 0, 0);
    cout << "enter the first time\t\t";
    cout << "enter hour\n";
    cin >> hour;
    while (hour > 24)
    {
        cout << "wrong\n";
        cin >> hour;
    }
    cout << "enter minute\n";
    cin >> min;
    while (min > 60)
    {
        cout << "wrong\n";
        cin >> min;
    }
    cout << "enter second\n";
    cin >> sec;
    while (sec > 60)
    {
        cout << "wrong";
        cin >> sec;
    }
    Time re(hour, min, sec);
    cout << "enter the second time\t\t";
    cout << "enter hour\n";
    cin >> hour2;
    while (hour2 > 24)
    {
        cout << "wrong\n";
        cin >> hour2;
    }
    cout << "enter minute\n";
    cin >> min2;
    while (min2 > 60)
    {
        cout << "wrong\n";
        cin >> min2;
    }
    cout << "enter second\n";
    cin >> sec2;
    while (sec2 > 60)
    {
        cout << "wrong";
        cin >> sec2;
    }
    Time rt(hour, min, sec);
    re.display_time();
    cout << "\n";
    rt.display_time();
    cout << "\n";
    re.sum(rt);
    cout << "\n";
    re.sub(rt);
    cout << "\n";
    re.time_to_seconds();
    cout << "\n";
    rt.time_to_seconds();

}
