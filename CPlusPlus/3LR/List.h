// ---------------------------------------------------------------------------
#ifndef ListH
#define ListH
#include "Human.h"
class List {
private:
    int size;
	Human *pHead;
public:
	List();
	~List();
	void Add(std::string countryValue, std::string teamValue, std::string surnameValue, int numValue, int ageValue, int heightValue, int weightValue);
    void Delete(int index);
	int Size() {return size;};
	std::string& Country(int index);
	std::string& Team(int index);
	std::string& Surname(int index);
	int& Num(int index);
	int& Age(int index);
	int& Height(int index);
	int& Weight(int index);
};
// ---------------------------------------------------------------------------
#endif
