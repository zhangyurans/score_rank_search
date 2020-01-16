#include<iostream>
#include <limits> 
using namespace std;
int main() {
	int score;             //score代指成绩
	char run = 'Y';        //判断程序是否继续运行
	while (run == 'Y') {
		while (1) {
			cout << "请输入成绩：" << endl;
			cin >> score;
			if (cin.fail()) {
				cin.clear();           //再次修复输入流
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');          //取走刚才流中的字符
				cout << "成绩错误，请重新输入" << endl;
			}
			else if (score <= 100 && score > 0)
				break;
			else
				cout << "成绩错误，请重新输入" << endl;
		}
		cout << "成绩是:" << endl << score << endl;
		cout << "成绩等级为: ";
		if (score < 60) {            //判断成绩等级
			cout << "不及格" << endl;
		}
		else if (score < 70) {
			cout << "及格" << endl;
		}
		else if (score < 80) {
			cout << "中" << endl;
		}
		else if (score < 90) {
			cout << "良好" << endl;
		}
		else if (score < 100) {
			cout << "优秀" << endl;
		}
		else {
			cout << "满分" << endl;
		}
		while (1) {                        //通过输入决定退出程序或者继续输入
			cout << "是否继续？Y/N: ";
			cin >> run;
			if (run == 'N') {
				cout << "程序结束" << endl;
				break;
			}
			else if (run == 'Y') {
				cout << "进行下一位的成绩输入:" << endl;
				break;
			}
			else {
				cout << "输入错误，再次输入" << endl;
			}
		}
	}
	return 0;
}