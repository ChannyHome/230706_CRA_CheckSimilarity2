#include <string>
#define MAX_LENGTH_POINT 60
using namespace std;

class CheckLength
{
public:
	explicit CheckLength(const string& inputA, const string& inputB)
		: inputA(inputA), inputB(inputB) {}
	double getLengthPoint()
	{
		double sizeA = inputA.size();
		double sizeB = inputB.size();

		if (sizeA >= (sizeB * 2)
			|| sizeB >= (sizeA * 2))
			return 0;

		if (sizeA >= sizeB)
		{
			double gab = sizeA - sizeB;
			return (1 - gab / sizeB) * MAX_LENGTH_POINT;
		}
		else
		{
			double gab = sizeB - sizeA;
			return (1 - gab / sizeA) * MAX_LENGTH_POINT;
		}

	}
private:
	string inputA, inputB;
};
