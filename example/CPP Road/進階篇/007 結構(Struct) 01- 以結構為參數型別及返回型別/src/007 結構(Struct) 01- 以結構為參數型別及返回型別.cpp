//============================================================================
// Name        : 007.cpp
// Author      : 許裕永
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "MyHeader.h"
int main() {
	return 0;
}


/*
 *
	//1. 宣告及定義 struct
	//2. 宣告 struct 型別的變數
	//3. 存取變數成員資料
	//4. 宣告 struct 型別的指標並配置記憶體
	//5. 存取指標成員資料
	//6. 建立及呼叫參數為 struct 變數的函式
	//7. 建立及呼叫參數為 struct 指標的函式
	//8. 建立及呼叫參數為 struct 參考的函式
	//9. struct 返回值
	//10.struct * 返回值
	//11.struct & 返回值
	struct Circle c1;
	c1.radius = 8;
	c1.height = 5;

	struct Circle c2;
	c2.radius = 18;
	c2.height = 15;

	struct Circle * c3 = new Circle;
	c3 -> radius = 28;
	c3 -> height = 25;

	cout<<getCircleGirth(c1)<<endl;
	cout<<getCircleArea(c1)<<endl;
	cout<<getCircleVolume(c1)<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<getCircleGirth(c2)<<endl;
	cout<<getCircleArea(c2)<<endl;
	cout<<getCircleVolume(c2)<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<getCircleGirth2(c3)<<endl;
	cout<<getCircleArea2(c3)<<endl;
	cout<<getCircleVolume2(c3)<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<getCircleGirth2(&c1)<<endl;
	cout<<getCircleArea2(&c1)<<endl;
	cout<<getCircleVolume2(&c1)<<endl;
	cout<<"--------------------------------------"<<endl;

	//struct Circle * c4;
	//cout<<getCircleGirth2(c4)<<endl;
	//cout<<getCircleArea2(c4)<<endl;
	//cout<<getCircleVolume2(c4)<<endl;
	//cout<<"--------------------------------------"<<endl;


	cout<<getCircleGirth3(c1)<<endl;
	cout<<getCircleArea3(c1)<<endl;
	cout<<getCircleVolume3(c1)<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<getCircleGirth3(*c3)<<endl;
	cout<<getCircleArea3(*c3)<<endl;
	cout<<getCircleVolume3(*c3)<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<getCircleGirth4(c3)<<endl;
	cout<<getCircleArea4(c3)<<endl;
	cout<<getCircleVolume4(c3)<<endl;
	cout<<"--------------------------------------"<<endl;
	//struct Circle * c4;  //沒有配置記憶體合法, 但執行會錯誤
	struct Circle *c4 = new struct Circle;
	c4->radius = 10;
	c4->height = 20;
	cout<<getCircleGirth4(c4)<<endl;
	cout<<getCircleArea4(c4)<<endl;
	cout<<getCircleVolume4(c4)<<endl;
	cout<<"--------------------------------------"<<endl;

	struct Circle c5;
	c5.radius = 10;
	c5.height = 20;
	//changeCircle(c5); //原物件值並未被改變
	c5 = changeCircle(c5); //c5己指向新物件, 用指標參數或指標參考均可達到改變物件值的目的
	cout<<c5.radius<<endl;
	cout<<c5.height<<endl;
	cout<<"--------------------------------------"<<endl;
	struct Circle c6 = changeCircle(c5); //可用在保留舊物件, 建立新物件
	cout<<c5.radius<<endl;
	cout<<c5.height<<endl;
	cout<<c6.radius<<endl;
	cout<<c6.height<<endl;
	cout<<"--------------------------------------"<<endl;


	struct Circle * c7 = new struct Circle;
	c7->radius = 10;
	c7->height = 20;
	//changeCircle2(c7); //原物件值己被改變
	c7 = changeCircle2(c7); //c7指向同一個物件
	cout<<c7->radius<<endl;
	cout<<c7->height<<endl;
	changeCircle2(c7)->radius += 10;
	cout<<c7->radius<<endl;
	cout<<"--------------------------------------"<<endl;

	struct Circle c8;
	c8.radius = 10;
	c8.height = 20;
	changeCircle3(c8); //原物件值己被改變
	c8 = changeCircle(c8); //c8指向同一個物件
	cout<<c8.radius<<endl;
	cout<<c8.height<<endl;
	changeCircle3(c8).radius += 10;
	cout<<c8.radius<<endl;
 */
