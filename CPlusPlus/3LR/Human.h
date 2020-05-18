//---------------------------------------------------------------------------
#include <string>
#ifndef HumanH
#define HumanH
class Human
{
	public:
		Human *pNext;
		std::string country , team , surname;
		int num , age , height , weight;
		Human(std::string countryValue, std::string teamValue, std::string surnameValue, int numValue, int ageValue, int heightValue, int weightValue);
		Human (){}
};
//---------------------------------------------------------------------------
#endif
