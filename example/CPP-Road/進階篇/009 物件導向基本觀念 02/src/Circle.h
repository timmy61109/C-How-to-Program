class Circle{
private:
	double girth;
	double area;
	double volume;
public:
	int radius;
	int height;
	double getGirth(){
		return radius * 2 * 3.14159;
	}
	double getArea(){
		return radius * radius * 3.14159;
	}
	double getVolume(){
		return getArea() * height;
	}
	int compare(Circle c){
		int i = 0;
		if(radius > c.radius){
			i = 1;
		}else if(radius < c.radius){
			i = -1;
		}
		c.radius = 100;
		return i;
	}
	int compare2(Circle * pc){
		int i = 0;
		if(radius > pc->radius){
			i = 1;
		}else if(radius < pc->radius){
			i = -1;
		}
		pc->radius = 100;
		return i;
	}

	Circle copy(){
		Circle c;
		c.radius = radius;
		return c;
	}
	void copy2(Circle * pc){
		pc->radius = radius;
	}
	Circle * copy3(Circle * pc){
		pc->radius = radius;
		return pc;
	}
};
