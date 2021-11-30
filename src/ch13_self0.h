class c {         // c 類別宣告
  private:
    // 私有資料成員
    float real,img;
  public:
    // 公用函數成員
    c(float x, float y);  // c 的 constructor 宣告
    c() {}  // c 的 default constructor定義
    c add(c x, c y);  // 傳回c 資料型態的相加函數宣告?
    void showdata();  // 顯示資料
};
