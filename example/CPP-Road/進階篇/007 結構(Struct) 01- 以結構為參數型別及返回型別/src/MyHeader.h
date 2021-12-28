/*
 * MyHeader.h
 *
 *  Created on: 2019¦~6¤ë21¤é
 *      Author: User
 */

const double PI = 3.14159;

struct Circle{
	int radius;
	int height;
};
double getCircleGirth(struct Circle c);
double getCircleArea(struct Circle c);
double getCircleVolume(struct Circle c);
double getCircleGirth2(struct Circle * c);
double getCircleArea2(struct Circle * c);
double getCircleVolume2(struct Circle * c);
double getCircleGirth3(struct Circle & c);
double getCircleArea3(struct Circle & c);
double getCircleVolume3(struct Circle & c);
double getCircleGirth4(struct Circle *& c);
double getCircleArea4(struct Circle *& c);
double getCircleVolume4(struct Circle *& c);
struct Circle changeCircle(struct Circle c);
struct Circle * changeCircle2(struct Circle * c);
struct Circle & changeCircle3(struct Circle & c);

double getCircleGirth(struct Circle c){
	return c.radius * 2 * PI;
}
double getCircleArea(struct Circle c){
	return c.radius * c.radius * PI;
}
double getCircleVolume(struct Circle c){
	return getCircleArea(c) * c.height;
}

double getCircleGirth2(struct Circle * c){
	return c->radius * 2 * PI;
}
double getCircleArea2(struct Circle * c){
	return c->radius * c->radius * PI;
}
double getCircleVolume2(struct Circle * c){
	return getCircleArea2(c) * c->height;
}

double getCircleGirth3(struct Circle & c){
	return c.radius * 2 * PI;
}
double getCircleArea3(struct Circle & c){
	return c.radius * c.radius * PI;
}
double getCircleVolume3(struct Circle & c){
	return getCircleArea(c) * c.height;
}
double getCircleGirth4(struct Circle *& c){
	return c->radius * 2 * PI;
}
double getCircleArea4(struct Circle *& c){
	return c->radius * c->radius * PI;
}
double getCircleVolume4(struct Circle *& c){
	return getCircleArea4(c) * c->height;
}
struct Circle changeCircle(struct Circle c){
	c.radius *= 10;
	c.height *= 10;
	return c;
}
struct Circle * changeCircle2(struct Circle * c){
	c->radius *= 10;
	c->height *= 10;
	return c;
}
struct Circle & changeCircle3(struct Circle & c){
	c.radius *= 10;
	c.height *= 10;
	return c;
}
