//---------------------------------------------------------------------------
#pragma hdrstop
#include "Human.h"
Human :: Human(std::string countryValue, std::string teamValue, std::string surnameValue, int numValue, int ageValue, int heightValue, int weightValue)
{
	country = countryValue;
	team = teamValue;
	surname = surnameValue;
	num = numValue;
	age = ageValue;
	height = heightValue;
	weight = weightValue;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
