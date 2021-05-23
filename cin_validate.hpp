#pragma once
#include <utility>
#include <limits>

// int cin validator
// check if cin success and error handling
// check if value in interval
// set last=true if the cin ended and there is no values to input more
// set last=false if there are any more values to input
auto none{std::pair<int, int>{std::numeric_limits<int>::min(),std::numeric_limits<int>::min()}};
bool cin_validate(int n, std::pair<int, int> interval = none, bool last = true);
