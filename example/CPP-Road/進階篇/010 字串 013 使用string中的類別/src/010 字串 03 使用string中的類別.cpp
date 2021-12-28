//============================================================================
// Name        : 010.cpp
// Author      : 許裕永
// Version     :
// Copyright   : 010 字串 03 使用string中的類別
// Description : 使用string中的類別
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	return 0;
}

/*物件變數
	string wordA;
	string wordB = "test";
	string wordC("wordC");
	wordA = "wordA";
	wordB = "wordB";
	//wordC("other Word");
	cout<<wordA<<" "<<wordB<<" "<<wordC<<endl;
	*/

/*物件指標
	string * pWordA;
	string * pWordB = new string;
	string * pWordC = new string();
	string * pWordD = new string("wordD");
	//string * pWordE = "wordE";

	// *pWordA = "Hello"; //要先 new
	pWordA = new string("wordA");
	cout<<*pWordA<<endl;

	*pWordB = "wordB";
	cout<<*pWordB<<endl;

	*pWordC = "1234567";
	cout<<*pWordC<<endl;


	// *pWordD = new string("1234567890");
	pWordD = new string("1234567890");
	cout<<*pWordD<<endl;
	*/
/* at / []
	string wordA = "1234567890";
	cout<<wordA[0]<<endl;
	cout<<wordA.at(1)<<endl;
	*/

/* length / size
	string wordA = "1234567890";
	for(size_t i = 0; i < wordA.size(); i++){
		cout<<wordA[i]<<endl;
	}
	cout<<"-------------------"<<endl;
	for(size_t i = 0; i < wordA.length(); i++){
		cout<<wordA.at(i)<<endl;
	}
	*/
/* assing / =
	string wordA = "WordA";
	wordA.assign("new WordA");
	cout<<wordA<<endl;
	wordA = "new new WordA";
	cout<<wordA<<endl;
	*/

/* append / +=
	string wordA = "123";
	wordA.append("456");
	cout<<wordA<<endl;
	wordA += "789";
	cout<<wordA<<endl;
	*/
/* insert
	string wordA = "01245";
	wordA.insert(3,"3");
	cout<<wordA<<endl;
	*/
/* erase
	string wordA = "0123444445678";
	wordA.erase(5,4);
	cout<<wordA<<endl;
	*/
/* replace
	string wordA = "0123444446789";
	wordA.replace(5,4,"5");
	cout<<wordA<<endl;
	*/
/* find
	string wordA = "0123456789";
	int st = wordA.find("456");
	cout<<st<<endl;
	st = wordA.find("457",0,2);
	cout<<st<<endl;
	*/
/* find_first_of
	string wordA = "Hi, Jetter. Welcome.";
	int find = -1;
	while((find = wordA.find_first_of("aeiou",find + 1))!= -1){
		cout<<find<<":"<<wordA[find]<<endl;
	}
 */
/* substr
	string wordA = "0123456789";
	string wordB = wordA.substr(3,5);
	cout<<wordB<<endl;
	*/
/* compare
	string wordA = "01234";
	string wordB = "12345";
	string wordC = "01234";
	cout<<wordA.compare(wordB)<<endl;
	cout<<wordB.compare(wordA)<<endl;
	cout<<wordA.compare(wordC)<<endl;
	*/
