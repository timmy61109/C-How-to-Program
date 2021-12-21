// 學生類別 Student
class Student {
  protected:
    char *school_name;  // 學校名稱
    char *class_name;  // 班級名稱
  public:
    Student(char *sn, char *cn);  // constructor
    void show();  // 顯示
};

// 衍生類別--->分數類別Score
class Score:public Student {
  private:
    int Chinese;
    int English;
    int Math;
  public:
    Score(char *s_n,char *c_n);  // constructor
    Score(char *s_n,char *c_n,int c,int m,int e );  // constructor
    void show();  // 顯示
  };
