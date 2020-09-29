#ifndef roman_header
#define roman_header

#include<string>

namespace HCC {
	namespace Roman{

		__declspec(dllexport) class Roman
		{
		public:
			static std::string convert(uint64_t number);

		private:
			static void append_order(uint64_t fives, char fiveSymbol, uint64_t ones, char oneSymbol, char tenSymbol, std::string& romanNumber);
		};
	}
}

#endif


