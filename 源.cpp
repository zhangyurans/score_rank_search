#include<iostream>
#include <limits> 
using namespace std;
int main() {
	int score;             //score��ָ�ɼ�
	char run = 'Y';        //�жϳ����Ƿ��������
	while (run == 'Y') {
		while (1) {
			cout << "������ɼ���" << endl;
			cin >> score;
			if (cin.fail()) {
				cin.clear();           //�ٴ��޸�������
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');          //ȡ�߸ղ����е��ַ�
				cout << "�ɼ���������������" << endl;
			}
			else if (score <= 100 && score > 0)
				break;
			else
				cout << "�ɼ���������������" << endl;
		}
		cout << "�ɼ���:" << endl << score << endl;
		cout << "�ɼ��ȼ�Ϊ: ";
		if (score < 60) {            //�жϳɼ��ȼ�
			cout << "������" << endl;
		}
		else if (score < 70) {
			cout << "����" << endl;
		}
		else if (score < 80) {
			cout << "��" << endl;
		}
		else if (score < 90) {
			cout << "����" << endl;
		}
		else if (score < 100) {
			cout << "����" << endl;
		}
		else {
			cout << "����" << endl;
		}
		while (1) {                        //ͨ����������˳�������߼�������
			cout << "�Ƿ������Y/N: ";
			cin >> run;
			if (run == 'N') {
				cout << "�������" << endl;
				break;
			}
			else if (run == 'Y') {
				cout << "������һλ�ĳɼ�����:" << endl;
				break;
			}
			else {
				cout << "��������ٴ�����" << endl;
			}
		}
	}
	return 0;
}