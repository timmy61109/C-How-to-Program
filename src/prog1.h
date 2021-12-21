// 基礎類別: Person個人資料錄
class Student {
  protected:
    char name[10];
    int  Chinese;
    int  Math;
    int  English;
  public:
    Student() {};
    void get();
    void show();
};


// 衍生類別: Computing (成績計算)
class Computing:public Student {
  private:
    float average;
  public:
    Computing() {};
    ~Computing() {};
    void compute();
    void show_average();
};
