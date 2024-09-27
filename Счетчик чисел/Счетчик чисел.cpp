#include <iostream>
#include <vector>
using namespace std;

class DivisibleBy3Functor {
private:
	int sum;
	int count;

public:

	DivisibleBy3Functor() : sum(0), count(0) {}

	void operator()(int number) {
		if (number % 3 == 0) {
			sum += number;
			count++;
		}
	}

	int get_sum() const {
		return sum;
	}

	int get_count() const {
		return count;
	}
};

int main() {
	vector<int> numbers = { 4, 1, 3, 6, 25, 54 };

	DivisibleBy3Functor functor;

	for (int number : numbers) {
		functor(number);
	}

	cout << "get_sum() = " << functor.get_sum() << endl;
	cout << "get_count() = " << functor.get_count() << endl;
}