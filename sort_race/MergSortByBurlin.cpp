#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

void MergeSort(vector<int>& data, int first, int last)
{
	int left, right, middle, i; //� ������ ���������� ���������� ������
	if (last - first < 2) // �� ������ ���� � ������� 1 ��� 0 ��.
		return;
	if (last - first == 2) //���� � ������� 2 ��.
	{
		if (data[first] > data[first + 1])
			swap(data[first], data[first + 1]);
		return;
	}

	MergeSort(data, first, (first + last) / 2);
	MergeSort(data, (first + last) / 2 + 1, last);

	vector<int> vec;
	middle = (first + last) / 2;
	left = first;
	right = middle + 1;

	for (i = first; i <= last; i++)
	{
		if ((left <= middle) && ((right > last) || (data[left] < data[right])))
		{
			vec[i] = data[left];
			left++;
		}
		else
		{
			vec[i] = data[right];
			right++;
		}
	}
	for (i = first; i <= last; i++)
		data[i] = vec[i - first];
}

vector<int> merge_sort(vector<int> data)
{
	MergeSort(data, 0, data.size() - 1);
	return data;
}




/*
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
*/