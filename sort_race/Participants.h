#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);

//place your method name here
std::vector<int> quick_sort_by_gerasimoff(std::vector<int> sort);
std::vector<double> quick_sort_by_gerasimoff(std::vector<double> sort);