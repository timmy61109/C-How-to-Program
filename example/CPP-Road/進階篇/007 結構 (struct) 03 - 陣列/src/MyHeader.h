struct Circle{
	int radius;
	int height;
	double girth;
	double area;
	double volume;
};

double getGirth(struct Circle c);
double getArea(struct Circle c);
double getVolume(struct Circle c);

void setRadius(struct Circle * c, int radius);
void setHeight(struct Circle * c, int height);
void setGirth(struct Circle * c);
void setArea(struct Circle * c);
void setVolume(struct Circle * c);
void setAllValue(struct Circle * c, int radius, int height);
//int compareCircle(struct Circle c1 , struct Circle c2);
//int compareCircle(struct Circle * c1 , struct Circle * c2);
int compareCircle(struct Circle & c1 , struct Circle & c2);

struct Circle copyCircle(struct Circle c1);
struct Circle * copyCircle(struct Circle * c1, struct Circle * c2);
struct Circle & copyCircle(struct Circle & c1, struct Circle & c2);

void showInfo(Circle c);

double getGirth(struct Circle c){
	return c.radius * 2 * 3.14159;
}
double getArea(struct Circle c){
	return c.radius * c.radius * 3.14159;
}
double getVolume(struct Circle c){
	return c.area * c.height;
}

void setRadius(struct Circle * c, int radius){
	if(c == NULL){
		return;
	}
	if(radius >= 1 && radius <= 10000){
		c->radius = radius;
	}else{
		c->radius = 1;
	}
	setGirth(c);
	setArea(c);
}
void setHeight(struct Circle * c, int height){
	if(c == NULL){
		return;
	}
	if(height >= 1 && height <= 10000){
		c->height = height;
	}else{
		c->height = 1;
	}
	setVolume(c);
}
void setGirth(struct Circle * c){
	if(c == NULL){
		return;
	}
	c->girth =  c->radius * 2 * 3.14159;
}
void setArea(struct Circle * c){
	if(c == NULL){
		return;
	}
	c->area = c->radius * c->radius * 3.14159;
}
void setVolume(struct Circle * c){
	if(c == NULL){
		return;
	}
	c->volume = c->area * c->height;
}
void setAllValue(struct Circle * c, int radius, int height){
	if(c == NULL){
		return;
	}
	setRadius(c,radius);
	setHeight(c,height);
}
/*
int compareCircle(struct Circle c1 , struct Circle c2){
	if(c1.radius > c2.radius){
		return 1;
	}else if(c1.radius < c2.radius){
		return -1;
	}else{
		if(c1.height > c2.height){
			return 1;
		}else if(c1.height < c2.height){
			return -1;
		}else{
			return 0;
		}
	}
}
*/
/*
int compareCircle(struct Circle * c1 , struct Circle * c2){
	if(c1->radius > c2->radius){
		return 1;
	}else if(c1->radius < c2->radius){
		return -1;
	}else{
		if(c1->height > c2->height){
			return 1;
		}else if(c1->height < c2->height){
			return -1;
		}else{
			return 0;
		}
	}
}
*/


int compareCircle(struct Circle & c1 , struct Circle & c2){
	if(c1.radius > c2.radius){
		return 1;
	}else if(c1.radius < c2.radius){
		return -1;
	}else{
		if(c1.height > c2.height){
			return 1;
		}else if(c1.height < c2.height){
			return -1;
		}else{
			return 0;
		}
	}
}

struct Circle copyCircle(struct Circle c1){
	struct Circle c2;
	setAllValue(&c2, c1.radius, c1.height);
	return c2;
}

struct Circle * copyCircle(struct Circle * c1, struct Circle * c2){
	setAllValue(c2, c1->radius, c1->height);
	return c2;
}

struct Circle & copyCircle(struct Circle & c1, struct Circle & c2){
	setAllValue(&c2, c1.radius, c1.height);
	return c2;
}

void showInfo(Circle c){
	cout<<c.radius<<"\t"<<c.height<<"\t"<<c.area<<"\t"<<c.volume<<endl;
}
