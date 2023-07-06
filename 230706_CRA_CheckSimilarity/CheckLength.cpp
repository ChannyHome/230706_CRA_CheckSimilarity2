#include <string>
using namespace std;

class CheckLength
{
public:
	explicit CheckLength(const string& inputA, const string& inputB)
		: inputA(inputA), inputB(inputB) {}
	int getLengthPoint()
	{
		int sizeA = inputA.size();
		int sizeB = inputB.size();
		int gab = sizeA - sizeB;
		return (1 - gab / sizeB) * 60;

	}
private:
	string inputA, inputB;
};
