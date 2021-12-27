class Circle{
	int radius;
public:
	//setter and getter functions
	void setRadius(int radius);
	int getRadius();
	/*
	Circle(){
		radius = 0;
	}
	*/
	Circle(int radius = 0){
		this->radius = 0;
		setRadius(radius);
	}
};

class Rectangle{
	int length;
	int width;
public :
	//setter and getter functions
	void setLength(int length);
	void setWidth(int width);
	int getLength();
	int getWidth();
	/*
	Rectangle(){
		length = 0;
		width = 0;
	}
	*/
	Rectangle(int length = 0, int width = 0){
		this->length = 0;
		this->width = 0;
	}
};

void Circle::setRadius(int radius){
	if(radius >= 0 && radius <= 100){
		this->radius = radius;
	}
}
int Circle::getRadius(){
	return radius;
}
void Rectangle::setLength(int length){
	if(length >= 0 && length <= 100){
		this->length = length;
	}
}
void Rectangle::setWidth(int width){
	if(width >= 0 && width <= 100){
		this->width = width;
	}
}
int Rectangle::getLength(){
	return length;
}

int Rectangle::getWidth(){
	return width;
}
