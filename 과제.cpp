//#1번
/*#include<iostream>
using namespace std;

int get_summed_result(int i, int j, int k);
int get_multiplited_result(int i, int j, int k);
int get_subtracted_result(int i, int j);
double get_divided_result(double i, double k);
int get_rest(int i, int k);

int main() {
	int a, b, c;
	cout << "숫자 세 개를 입력하세요 : ";
	cin >> a >> b >> c;
	int r1 = get_summed_result(a, b, c);
	int r2 = get_multiplited_result(a, b, c);
	int r3 = get_subtracted_result(a, b);
	double r4 = get_divided_result(a, b);
	int r5 = get_rest(a, b);
	
	cout << "a+b+c = " << r1 << endl;
	cout << "a*b*c = " << r2<< endl;
	cout << "a-b = " << r3 << endl;
	if (b == 0) {
		cout << "나눗셈과 나머지 연산은 할수 없습니다.";
	}
	else {
		cout << "a/b = " << r4 << endl;
		cout << "a%b = " << r5 << endl;
	}
		 

	return 0;
}

int get_summed_result(int i, int j, int k) {
	return i + j + k;
}

int get_multiplited_result(int i, int j, int k) {
	return i * j * k;
}

int get_subtracted_result(int i, int j) {
	return i - j;
}

double get_divided_result(double i, double k) {
	return i / k;
}
int get_rest(int i, int k) {
	return i % k;
}*/



//과제2번//
#include<iostream>
using namespace std;

#include<cstdlib>
using namespace std;

#include<ctime>
using namespace std;

int main() {
	int a=0,b=0,c=0 ;
	int d=0, e=0, f=0;
	int ball = 0, strike = 0;

	while (a == b || b == c || a == c) {
		srand(time(0));
		a = 1 + rand() % 9;
		b = 1 + rand() % 9;
		c = 1 + rand() % 9;
	}
	cout << "숫자야구 시작"; 
	
	for (int i = 1; i <= 10; i++) {
		while (d == e || e == f || d == f) {
			cout << "\n\n서로다른 숫자 3개를 입력해주세요 : ";
			cin >> d >> e >> f;
			if (d > 9 || d < 1 || e>9 || e < 1 || f>9 || f < 1) {
				cout << "1~9사이숫자를 넣어주세요";
				d = 0, e = 0, f = 0;
				continue;
			}//if
		}//while
		if (d == a) {
			strike++;
		}
		else if (d == b || d == c) {
			ball++;
		}
		if (e == b) {
			strike++;
		}
		else if (e ==c || e == a) {
			ball++;
		}
		if (f == c) {
			strike++;
		}
		else if (f == a || f == b) {
			ball++;
		}
		cout << endl << i << "번 결과:" << strike << " strike " << ball << " ball ";
		if (strike == 3) {
			break;
		}
		strike = 0;
		ball=0;
		d = 0, e = 0, f = 0;

	}
	cout << "\n게임종료";

	return 0;
}