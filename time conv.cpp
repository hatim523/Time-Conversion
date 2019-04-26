#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	string time;
	cin>>time;
	
	int i=0;
	bool flag= false;
	
	while (time[i] != '\0')
	{
		if (time[i] == 'P')
			flag = true;
		i++;
	}
	
	int num[6];
	
	num[0] = (int) time[0] - 48;
	num[1] = (int) time[1] - 48;
	num[2] = (int) time[3] - 48;
	num[3] = (int) time[4] - 48;
	num[4] = (int) time[6] - 48;
	num[5] = (int) time[7] - 48;
	
	int hour = (num[0] * 10) + num[1];
	int min = (num[2] * 10) + num[3];
	int sec = (num[4] * 10) + num[5];
	
	if (flag == true)
		hour = hour + 12;
	
	if (flag == false && hour == 12)
		hour = 0;
	if (flag == true && hour == 24)
		hour = 12;
		
	cout<<setfill('0')<<setw(2)<<hour<<":";
	cout<<setfill('0')<<setw(2)<<min<<":";
	cout<<setfill('0')<<setw(2)<<sec;
	
}
