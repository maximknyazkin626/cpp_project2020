#include <iostream>
#include <array>
#include <vector>
using namespace std;

template <typename T>
void Quick(vector<T>& a, int left, int right)
{
	int l = left; int r = right; /// ������ ������� �������, ������� ����� � ������� ������
	int pivon = a[(l + r) / 2]; //// ������ ������� �������, �� ����� ����������� ��� ������� ����� �������� ����������
	while (l <= r)
	{
		while (a[l] < pivon)
			l++;
		while (a[r] > pivon)
			r--;
		if (l <= r)
			swap(a[l++], a[r--]);
	}
	if (left < r)  /// ����������� �������
		Quick(a, left, r); ///��������� ����� ���������
	if (right > l)
		Quick(a, l, right); /// ��������� ������ ��������� 
}

vector<int> int_QuickSortKnyazkin(vector<int> mas) {
	Quick(mas, 0, (int)mas.size() - 1);            /// ������� ��� ������ ������� ����� 
	return mas;
}

/*vector<double> double_QuickSortKnyazkin(vector<double> mas) {
	Quick(mas, 0, (int)mas.size() - 1);                  /// ������� ��� ������ ������� ������
	return mas;
} */