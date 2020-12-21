#include <vector>
#include "Participants.h"
using namespace std;

template <typename T>
void comb(vector<T>& data) 
{
	double factor = 1.2473309; // ���������� ���������� �������, ����������� �������� (��������� �� �������)
	int step = data.size() - 1; 

	while (step >= 1)
	{
		for (int i = 0; i + step < data.size(); i++)
		{
			if (data[i] > data[i + step])
			{
				swap(data[i], data[i + step]);  // ������ ������� ��������
			}
		}
		step =step/factor; // ��������� ���� � ����������� � ������������� �������
	}
}

vector<int> combsort_Dimova(vector<int> data) // ������� ��� int
{
	comb(data);
	return data;

}

vector<double> combsort_Dimova(vector<double> data) // ������� ��� double
{
	comb(data);
	return data;


}