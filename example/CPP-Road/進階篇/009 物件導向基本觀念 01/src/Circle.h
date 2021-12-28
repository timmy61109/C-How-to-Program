class Circle{
public:
	int radius;
	int height;
	double girth;
	double area;
	double volume;
	double getGirth(){
		return radius * 2 * 3.14159;
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
	Circle copy(){
		Circle c;
		c.radius = radius;
		return c;
	}
};
