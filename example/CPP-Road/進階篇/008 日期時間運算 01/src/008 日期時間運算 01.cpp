//============================================================================
// Name        : 008.cpp
// Author      : 許裕永
// Version     :
// Copyright   : CPP Road
// Description : 008 日期時間運算 01
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;

int main() {
	/*
	time_t a = time(NULL);
	cout<<a<<endl;

	char* b = ctime(&a);
	cout<<b<<endl;
	*/

	/*
	time_t c;
	time(&c);
	char* d = ctime(&c);
	cout<<d<<endl;
	*/

	/*
	time_t * e = new time_t;
	time(e);
	char* f = ctime(e);
	cout<<f<<endl;
	*/

	/*
	struct tm t = {0};
	t.tm_year = 2019 - 1900;
	t.tm_mon = 12 - 1;
	t.tm_mday = 19;
	cout<<t.tm_year + 1900<<"/"<<t.tm_mon + 1<<"/"<<t.tm_mday<<endl;
	*/

	/*
	time_t t = time(NULL);
	struct tm * pt = localtime(&t);
	cout<<pt->tm_year + 1900<<"/"<<pt->tm_mon + 1<<"/"<<pt->tm_mday<<endl;

	char * result = new char[30];
	strftime(result,30,"Now is : %Y/%m/%d  %H:%M:%S",pt);
	cout<<result<<endl;
	*/

	/*
	struct tm startDate = {0};
	startDate.tm_year = 2020 - 1900;
	startDate.tm_mon = 1 - 1;
	startDate.tm_mday = 28;
	cout<<"The start date is : "<<startDate.tm_year + 1900<<"/"
			<<startDate.tm_mon + 1<<"/"<<startDate.tm_mday<<endl;

	time_t endTime = mktime(&startDate);
	endTime -= 86400 * 125;
	struct tm * endDate = localtime(&endTime);
	cout<<"The start date is : "<<endDate->tm_year + 1900<<"/"<<endDate->tm_mon + 1<<"/"<<endDate->tm_mday<<endl;
	*/


	struct tm startDate = {0};
	startDate.tm_year = 2020 - 1900;
	startDate.tm_mon = 1 - 1;
	startDate.tm_mday = 28;
	time_t startTime = mktime(&startDate);

	struct tm endDate = {0};
	endDate.tm_year = 2020 - 1900;
	endDate.tm_mon = 2 - 1;
	endDate.tm_mday = 2;
	time_t endTime = mktime(&endDate);

	/*
	time_t result = endTime - startTime;
	int days = result / 86400;
	*/

	double days = difftime(endTime, startTime) / 86400;

	cout<<days<<endl;

	return 0;
}

