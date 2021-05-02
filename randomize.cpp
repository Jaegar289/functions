#include <random>
#include <vector>
#include <iostream>
#include <map>

// Returns random number min to max
int get_int_random_number(int min, int max) {
	if (min> max)
		std::swap(min, max);
	long long lmin = static_cast<long long>(min);
	long long lmax = static_cast<long long>(max);
	std::random_device rd;
	std::mt19937 mersenne(rd());
	const long long max_64{ 2'147'483'647 };
	static const double fraction = 0.5 / (static_cast<double>(max_64) + 1.0);
	return static_cast<int>(mersenne() * fraction * (lmax - lmin + 1) + min);
}


// Analyze the difference in percentage between theoretical and practical results
// See how much each of the dropped values differs from count / (to-from + 1), that is, from the average
// Add up all the differences and find their percentage of the number
// Along the way, display the generation results for greater clarity 
void test_get_int_random_number(unsigned int count,int from,int to) {
	if (from > to)
		std::swap(from,to);
	// Generate a random number from to to count times
	// Push the result into a vector 
	std::map<int,int> arr;
	for (int k = 0; k < count; k++) {
		int value = get_int_random_number(from, to);
		arr[value - from]++;
	}
	// Find the theoretical value for each number
	double mean = count / (to - from + 1);
	//Find the Error * 2
	double difference = 0;
	for (auto number : arr) {
		// Find the difference between the theoretical and practical value, add it to the sum of the errors 
		difference += abs(mean - number.second);
		// Output practical value
		std::cout << number.second << std::endl;
	}
	// Divide the sum of the errors into two so each wrong throw is recorded twice
	difference /= 2;
	// Find the percentage of the error by dividing the sum of errors by the number of throws
	double percent = (difference / count) * 100;
	std::cout << "The error is " << percent << " percents.\n";

}

