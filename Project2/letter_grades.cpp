// letter_grades.cpp
#include <algorithm>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>

#include "Student_info.h"
#include "grade.h"

using namespace std;

string letter_grade(double grade) {
	// �� ������ �����ϴ� ����
	static const double numbers[] = {
		97, 94, 90,
		87, 84, 80, 
		77, 74, 70,
		60, 0
	};

	// ���� ����� ��Ī
	static const char* const letters[] = {
		"A+", "A", "A-",
		"B+", "B", "B-",
		"C+", "C", "C-",
		"D", "F"
	};

	// �迭 ũ��� ��� �ϳ��� ũ�⸦ ����Ͽ�
	// �� ������ �����ϴ� ���� ������ ����
	static const size_t ngrades =
		sizeof(numbers) / sizeof(*numbers);

	// �־��� ���� ������ �ش��ϴ� ���� �����
	// ã�Ƽ� ��ȯ
	for (size_t i = 0; i < ngrades; i++) {
		if (grade >= numbers[i])
			return letters[i];
	}

	return "?\ ?\ ?";
}

int main() {
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;

	ifstream student_file("grades.txt");

	// �л� �̸��� ��� ������ �о� �����ϱ�
	while (read(student_file, record) {
		maxlen = max(maxlen, record.name.size());
		students.puch_back(record);
	}

	// �л� ��� �����ϱ�
	sort(students.begin(), students.end(), compare);

	// �̸��� ������ ����
	for (vector<Student_info>::size_type i = 0;
		i != students.size(); ++i) {

		cout << students[i].getName()
			<< string(maxlen + 1 - students[i].name.size(), ' ';

		try {
			double final_grade = students[i].grades();
			streamsize prec = cout.precision();

			cout << setprecision(3) << letter_grade(fonal_grade)
				<< setprecision(prec) << endl;
		}
		catch (domain_error e) {
			cout << e, what() << endl;
		}
	}

	return 0;
}