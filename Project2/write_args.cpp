// write_args.cpp
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	// ��� ������Ʈ�� �Է��� �μ��� �����ϸ� ���
	if (argc > 1) {
		// ù ��° �μ��� ���
		// ���� �ϳ��� �Բ� ������ �μ����� ���� ���
		cout << argv[0]; // "Hello"

		for (int i = 2; i != argc; ++i) {
			cout << " " << argv[i]; // argv[i]�� char* Ÿ��
		}

		cout << endl;
		return 0;
	}
}