//============================================================================
// Name        : 007.cpp
// Author      : �\�Υ�
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
	//1. �ŧi�Ωw�q struct
	//2. �ŧi struct ���O���ܼ�
	//3. �s���ܼƦ������
	//4. �ŧi struct ���O�����Шðt�m�O����
	//5. �s�����Ц������
	//6. �إߤΩI�s�ѼƬ� struct �ܼƪ��禡
	//7. �إߤΩI�s�ѼƬ� struct ���Ъ��禡
	//8. �إߤΩI�s�ѼƬ� struct �ѦҪ��禡
	//9. struct ��^��
	//10.struct * ��^��
	//11.struct & ��^��
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
	//struct Circle * c4;  //�S���t�m�O����X�k, ������|���~
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
	//changeCircle(c5); //�쪫��Ȩå��Q����
	c5 = changeCircle(c5); //c5�v���V�s����, �Ϋ��аѼƩΫ��аѦҧ��i�F����ܪ���Ȫ��ت�
	cout<<c5.radius<<endl;
	cout<<c5.height<<endl;
	cout<<"--------------------------------------"<<endl;
	struct Circle c6 = changeCircle(c5); //�i�Φb�O�d�ª���, �إ߷s����
	cout<<c5.radius<<endl;
	cout<<c5.height<<endl;
	cout<<c6.radius<<endl;
	cout<<c6.height<<endl;
	cout<<"--------------------------------------"<<endl;


	struct Circle * c7 = new struct Circle;
	c7->radius = 10;
	c7->height = 20;
	//changeCircle2(c7); //�쪫��Ȥv�Q����
	c7 = changeCircle2(c7); //c7���V�P�@�Ӫ���
	cout<<c7->radius<<endl;
	cout<<c7->height<<endl;
	changeCircle2(c7)->radius += 10;
	cout<<c7->radius<<endl;
	cout<<"--------------------------------------"<<endl;

	struct Circle c8;
	c8.radius = 10;
	c8.height = 20;
	changeCircle3(c8); //�쪫��Ȥv�Q����
	c8 = changeCircle(c8); //c8���V�P�@�Ӫ���
	cout<<c8.radius<<endl;
	cout<<c8.height<<endl;
	changeCircle3(c8).radius += 10;
	cout<<c8.radius<<endl;
 */
