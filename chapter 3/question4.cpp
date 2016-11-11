//question4.cpp --- 以整数方式输入秒数，然后以天、小时、分钟、秒的方式显示这段时间
#include<iostream>;
const double day_hour = 24;
const double hour_minute = 60;
const double minute_second = 60;

int main()
{
	using namespace std;
	long second;
	cout << "Enter the number of seconds:";
	cin >> second;
	cin.get();
	int day, hour, minute, second_2;
	day = second / minute_second / hour_minute / day_hour;
	hour = (second - day*day_hour*hour_minute*minute_second) / minute_second / hour_minute;
	minute = (second - day*day_hour*hour_minute*minute_second - hour*hour_minute*minute_second) / minute_second;
	second_2 = second - day*day_hour*hour_minute*minute_second - hour*hour_minute*minute_second - minute*minute_second;
	cout << second << " seconds = " << day << " days, " << hour << " hours, " << minute << " minutes, " << second_2 << " seconds\n";
	cin.get();
	return 0;
}