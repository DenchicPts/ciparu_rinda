#include "rinda.h"



int main() {
	vector<string> input{
		"123......4343.....5465....65",
		"1234...123456...58091341",
		"1..12..123..1234..12345.",
		"123456789123456789123456",
		"........................"
	};

	for (const auto& i : input)
	{
		cout << "For string " << i << endl
			 << "A : " << summarizeString(i) << endl
			 << "B : " << shortenNumbers(i) << endl
			 << "C : " << how_many_numbers(i) << endl
			 << "D : " << SummaAll(shortenNumbers(i)) << "\n\n\n";
	}

}