#include <string>
#include <set>

using namespace std;

class CheckAlpha
{
public:

	explicit CheckAlpha(const string& inputA, const string& inputB)
		: inputA(inputA), inputB(inputB) {

	}

	double getAplphaPoint()
	{
        set<char> ALetter;
        set<char> BLetter;
        set<char> TotalLetters;
        set<char> CommonLetters;

        for (char ch : inputA)
        {
            ALetter.insert(ch);
            TotalLetters.insert(ch);
        }
        for (char ch : inputB)
        {
            BLetter.insert(ch);
            TotalLetters.insert(ch);
        }

        for (char ch : TotalLetters)
        {
            if (ALetter.count(ch) > 0
                && BLetter.count(ch) > 0)
                CommonLetters.insert(ch);
        }

        double comSize = CommonLetters.size();
        double totalSize = TotalLetters.size();
        double temp = comSize/ totalSize * 40;
        return comSize / totalSize * 40;
	}

private:
	string inputA, inputB;

};
