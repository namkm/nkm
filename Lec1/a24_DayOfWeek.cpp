#include <iostream>
using namespace std;

int getDayNumber(int,int,int); //returns the day number
string getDayOfWeek(int); //returns the name of the day

int main() {
	int day,month,year;
	cin>>day;
	cin>>month;
	cin>>year;
	cout<<getDayOfWeek(getDayNumber(day,month,year));
	return 0;
}

int getDayNumber(int d,int m,int y){ //retuns the day number
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

string getDayOfWeek(int d){ //returns the name of the day
	switch(d){
      case 0 :return("Sunday");
      case 1 :return("Monday");
      case 2 :return("Tuesday");
      case 3 :return("Wednesday");
      case 4 :return("Thursday");
      case 5 :return("Friday");
      case 6 :return("Saturday");
      default:return("Error: Invalid Argument Passed");
   }
}