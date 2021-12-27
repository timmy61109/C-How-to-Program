#include <string>
using namespace std;
class Circle{
	string name;
	int radius;
	int height;
public:
	Circle(){
		name = "UnSet";
		radius = 1;
		height = 1;
	}
	double getGirth();
	double getArea();
	double getVolume();
	void setRadius(int r);
	void setHeight(int h);
	string getName();
	void setName(string n);
};

double Circle::getGirth(){
	return radius * 2 * 3.14159;
}
double Circle::getArea(){
	return radius * radius * 3.14159;
}
double Circle::getVolume(){
	return getArea() * height;
}
void Circle::setRadius(int r){
	if(r >= 1 && r <= 1000){
		radius = r;
	}
}
void Circle::setHeight(int h){
	if(h >= 1 && h <= 100){
		height = h;
	}
}
string Circle::getName(){
	return name;
}
void Circle::setName(string n){
	if(n.length()<= 10 && n[0] == 'C'){
		name = n;
	}




}
