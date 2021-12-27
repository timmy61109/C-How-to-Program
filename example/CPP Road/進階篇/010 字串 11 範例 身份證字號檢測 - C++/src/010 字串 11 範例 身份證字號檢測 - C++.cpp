//============================================================================
// Name        : 010.cpp
// Author      : 許裕永
// Version     :
// Copyright   : CPP Road
// Description : 010 字串 11 範例 身份證字號檢測 - C++
//============================================================================

#include <iostream>
#include <string>
using namespace std;

#include "MyHeader.h"

int main() {
	cout<<"Please input the ID =>";
	string id;
	cin>>id;

	bool b = checkId(id);

	if(b){
		cout<<"Correct"<<endl;
	}else{
		cout<<"Wrong"<<endl;
	}
	return 0;
}
