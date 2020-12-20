#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);

//Tkachev Team
std::vector<int> countingSortByTkachev(std::vector<int> data);
std::vector<double> countingSortByTkachev(std::vector<double> data);
//place your method name here