#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	srand(time(0));
	cout << "�����: ������� ��������� ����������, ���-111\n";

	double x1, y1, x2, y2, x3, y3;
	cout << "������� X1: ";
	cin >> x1;
	cout << "������� Y1: ";
	cin >> y1;
	cout << "������� X2: ";
	cin >> x2;
	cout << "������� Y2: ";
	cin >> y2;
	cout << "������� X3: ";
	cin >> x3;
	cout << "������� Y3: ";
	cin >> y3;

	double side_1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double side_2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double side_3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

	cout << "������� ����� ������������: \n";
	cout << side_1 << "\n";
	cout << side_2 << "\n";
	cout << side_3 << "\n";

	system("pause");

	return 0;
}
