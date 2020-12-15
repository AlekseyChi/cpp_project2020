#include <vector>

using namespace std;

vector<int> CountingSortByTkachev(vector<int> data)
{
	int max = data[0];
	for (size_t i = 0; i < data.size(); i++)
	{
		max = (data[i] > max) ? data[i] : max;
		if (data[i] < 0)
		{
			return data; // �� ����� �������� � ���������, ��� ���� ���� ���� ������������� �����
		}
	}
	vector<int> c;
	c.resize(max + 1);
	for (int elem : data)
	{
		++c[elem];
	}
	int b = 0;
	for (size_t i = 0; i < c.size(); i++)
	{
		for (size_t j = 0; j < c[i]; j++)
		{
			data[b] = i;
			b++;
		}
	}
	return data;
}

vector<double> CountingSortByTkachev(vector<double> data)
{
	return data; // �� ����� �������� � double, ��� ��� ������������� �������� �� ����������� ���-�� ����� � ��������������� ������� �������
}