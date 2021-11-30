class Complex {         // Complex 類別宣告
  private:
    // 私有資料成員
    float real,img;
  public:
    // 公用函數成員
    Complex(float x, float y);  // Complex 的 constructor 宣告
    Complex() {}  // Complex 的 default constructor定義
    Complex add(Complex x, Complex y);  // 傳回Complex 資料型態的相加函數宣告?
    void showdata();  // 顯示資料
};
