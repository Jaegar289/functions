#pragma once

// Returns random number min to max
int get_int_random_number(int min, int max);

// Analyze the difference in percentage between theoretical and practical results
// See how much each of the dropped values differs from count / (to-from + 1), that is, from the average
// Add up all the differences and find their percentage of the number
// Along the way, display the generation results for greater clarity 
void test_get_int_random_number(unsigned int count, int from, int to);
