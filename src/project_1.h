class Complex {                   //宣告複數類別
  private:
	float real,img;
  public:
	Complex(float r,float i);  //Constructor
	Complex() {}  //Default Constructor
  ~Complex() {}  //Destructor
	Complex& add(const Complex& c,const Complex& d);  //相加函數
	Complex& sub(const Complex& c,const Complex& d);  //相減函數
	Complex& mul(const Complex& c,const Complex& d);  //相乘函數
	Complex& div(const Complex& c,const Complex& d);  //相除函數
	void showdata();
};
