#include <vector>
#include <string>

using namespace std;

vector <int> combSort(std::vector<int> data) // data � �������� �������  (������� �� ������, ����� ����� comb(array) ����� ������ array)
{
    double factor = 1.2473309; // ������ ����������
    int step = data.size() - 1; // ��� ����������

    //��������� �������� �����, ����� step==1 ������������ ������ ������� ���������� ���������
    while (step >= 1)
    {
        for (int i = 0; i + step < data.size(); i++)
        {
            if (data[i] > data[i + step])
            {
                std::swap(data[i], data[i + step]);
            }
        }
        step /= factor;
    }
    return data;
}


  