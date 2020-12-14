#include<iostream>
using namespace std;

void QuikcSort_by_Byankina(int mass[], int size) {          //�������� � ������� ������ � ��� ������
    int i = 0;                                      //������ ������� �������� �������
    int j = size - 1;                               //������ ���������� �������� �������
    int mid = mass[size / 2];                        //�������� �������� �������� �������, � ������� ����� ����������
    //����� � ������������ ��������� ������/������ ��������
    do {
        while (mass[i] < mid) {                      //���������� �������� ��������� ������ �������� �� ��������� �������� ��������
            i++;
        }
        while (mass[j] > mid) {                      //���������� �������� ��������� ������ �������� �� ��������� �������� ��������
            j--;
        }
        int t = mass[i];                              //������ ��������� �������
        mass[i] = mass[j];
        mass[j] = t;
        i++;
        j--;
    } while (i <= j);
    //��������� �������� ����� ����� �������
    if (j > 0) {
        QuikcSort_by_Byankina(mass, j + 1);
    }
    //��������� �������� ������ ����� �������
    if (i < size) {
        QuikcSort_by_Byankina(&mass[i], size - i);
    }
}
//int main()
//{
//	const int n = 10;
//    int mass[n];
//
//	for (int i = 0;i < n;i++)
//	{
//		mass[i] = rand();
//		cout << mass[i] << " ";
//	}
//    cout << endl;
//    QuikcSort_by_Byankina(mass,n);
//    for (int i = 0;i < n;i++)
//    {
//        cout << mass[i] << " ";
//    }
//
//}