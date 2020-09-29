#include "Roman.h"

using namespace std;

namespace HCC {
	namespace Roman {

		string Roman::convert(uint64_t i)
		{
			uint64_t thousands = i / 1000;
			uint64_t fivehundreds = (i - thousands * 1000) / 500;
			uint64_t hundreds = (i - thousands * 1000 - fivehundreds * 500) / 100;
			uint64_t fiftees = (i - thousands * 1000 - fivehundreds * 500 - hundreds * 100) / 50;
			uint64_t tens = (i - thousands * 1000 - fivehundreds * 500 - hundreds * 100 - fiftees * 50) / 10;
			uint64_t fives = (i - thousands * 1000 - fivehundreds * 500 - hundreds * 100 - fiftees * 50 - tens * 10) / 5;
			uint64_t ones = (i - thousands * 1000 - fivehundreds * 500 - hundreds * 100 - fiftees * 50 - tens * 10 - fives * 5);

			string roman_number;

			roman_number.append(thousands, 'M');
			append_order(fivehundreds, 'D', hundreds, 'C', 'M', roman_number);
			append_order(fiftees, 'L', tens, 'X', 'C', roman_number);
			append_order(fives, 'V', ones, 'I', 'X', roman_number);

			return roman_number;
		}

		void Roman::append_order(uint64_t fives, char fiveSymbol, uint64_t ones, char oneSymbol, char tenSymbol, string& roman_number)
		{
			roman_number.append(fives, fiveSymbol);

			if (ones == 4 && fives == 1)
			{
				roman_number.erase(roman_number.end()-1, roman_number.end());
				roman_number.append(1, oneSymbol);
				roman_number.append(1, tenSymbol);
			}
			else if (ones == 4)
			{
				roman_number.append(1, oneSymbol);
				roman_number.append(1, fiveSymbol);
			}
			else
			{
				roman_number.append(ones, oneSymbol);
			}
		}
	}
}
