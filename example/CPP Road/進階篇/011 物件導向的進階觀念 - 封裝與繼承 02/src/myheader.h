class Shape{
	int area;
	int girth;
protected:
	void setArea(int a);
	void setGirth(int g);
public :
	Shape(){
		area = 0;
		girth = 0;
	}
	int getArea();
	int getGirth();

};
int Shape :: getArea(){
	return area;
}
int Shape ::getGirth(){
	return girth;
}
void  Shape :: setArea(int a){
	area = a;
}
void  Shape :: setGirth(int g){
	girth = g;
}

class Circle : public Shape{
	int radius;
public:
	Circle(){
		radius = 0;
	}
	void setRadius(int r);
};
void Circle::setRadius(int r){
	if(r >= 0 && r <= 100){
		radius = r;
		setArea(radius * radius * 3.14159);
		setGirth(radius * 2 * 3.14159);
	}
}
class Rectangle : public Shape{

};
