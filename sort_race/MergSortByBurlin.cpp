#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& data, int first, int last) 
{
	int left_it, right_it, middle, j;
	int *mas; //���������� ������������� ����
	mas = (int*)malloc((last - first) * sizeof(int)); //��������� ���������������� ������� ������ ������� ������� �� ������������������ ������ 
	                                                 //(������ - ������� ���������� � ������� ��������)

	middle = (first + last) / 2;
	left_it = first;
	right_it = middle + 1;

	for (j = first; j <= last; j++) //����, �������� �������� ��������� �� ������� ������ �� ������� �����
		if ((left_it <= middle) && ((right_it > last) || (data[left_it] < data[right_it])))
		{
			*(mas + j - first) = data[left_it];
			left_it++;
		}
		else
		{
			*(mas + j - first) = data[left_it];
			right_it++;
		}
	//����������� ���������� � ������
	for (j = first; j <= last; j++) data[j] = *(mas + j - first);
};
//����������� ��������� ����������
	


void MergeSort(vector<int>& data, int first, int last)
{
	{
		if (first < last)
		{
			MergeSort(data, first, (first + last) / 2); //���������� ������(�����) �����
			MergeSort(data, (first + last) / 2 + 1, last); //���������� ���������(������) �����
			merge(data, first, last); //������� ���� ������
		}
	}
};


vector<int> merge_sort(vector<int> data)
{
	MergeSort(data, 0,  data.size() - 1);
	return data;
}
