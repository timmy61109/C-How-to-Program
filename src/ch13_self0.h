#define ID 12
#define DATABASE 500


class BankUserClient {         // c 類別宣告
  private:
    // 私有資料成員

    typedef struct {
      unsigned int number;
      char name[50];
      char id[ID];
      char account[256];
      char password[256];
      double balance;

    } user_data_t;

    typedef struct {
      char file_name[50];
      char database_name[50];
      unsigned int count;
      user_data_t source_data[DATABASE];
      user_data_t target_data[DATABASE];

    } info_t;

  public:
    // 公用函數成員
    BankUserClient(info_t *info);  // c 的 constructor 宣告
    BankUserClient(const BankUserClient& str);  // Copy constructor宣告
    BankUserClient() {}  // c 的 default constructor定義
    ~BankUserClient() {}

    void sign_up();
    void sign_in();
    void query();
    void deposit();
    void withdraw();
    void exit();

    unsigned int init_menu();

    // database
    unsigned int database_menu();
    void database();
    void creat_database();
    void use_database();
    void close_database();

    // management
    unsigned int management_meun();
    void management();
    void export_csv();
    void insert();
    void selete();
    void drop();
    void update();

    // print example data
    void example();

    // file merge to database
    unsigned int merge_menu();
    void merge();
    void file_merge_data();
    void data_merge_file();
    void source_merge_to_target();

    // Share function
    void keyin(info_t *info_p);
    void keyin_row(user_data_t *data_row_p);
    void search();
    void print_data(info_t *info_p);
    void print_row_data();
    void write_data();
    void write_row_data();
    void read_data();
    int compare();
    void print_part_of_data();

};
