#pragma once
#include<vector>

using namespace std;
template <typename T>
void compAndSwap(vector<T>& mass, size_t i, size_t j, int dir)
{
    if (dir == (mass[i] > mass[j]))
        swap(mass[i], mass[j]);
}
template <typename T>
void bitonicMerge(vector<T>& mass, int low, size_t Numb, int dir)
{
    if (Numb > 1)
    {
        int k = Numb / 2;
        for (int i = low; i < low + k; i++)
            compAndSwap(mass, i, i + k, dir);
        bitonicMerge(mass, low, k, dir);
        bitonicMerge(mass, low + k, k, dir);
    }
}


template <typename T>
void bitonicSort(vector<T>& mass, int low, size_t Numb, int dir)
{
    if (Numb > 1)
    {
        int k = Numb / 2;
        // ���������� � ������� �����������, ��� ��� dir ����� ����� 1
        bitonicSort(mass, low, k, 1);
        // ���������� �� ��������, ��� ��� dir ����� 0
        bitonicSort(mass, low + k, k, 0);
        // ����� ���������� ������������������ � ������� �����������
        // ��� ��� dir = 1.
        bitonicMerge(mass, low, Numb, dir);
    }
}


template <typename T>
vector<T> Bitonic_Sort(vector<T> mass)
{
    size_t N = mass.size();
    bitonicSort(mass, 0, N, 1);
    return mass;
}