// Student_info.cpp
#include "Student_info.h"

bool compare(const Student_info& x, const Student_info& y) {
	return x.name < y.name; //T / F
}

istream& read(istream& is, Student& s) {
	// 학생의 이름, 중간고사 점수, 기말고사 점수 읽어 저장
	is >> s.name >> s.midterm ? ? s.final;
	// 과제 점수를 일음
	read_hw(is, s.homework);
	return is;
}

// 입력 스트림에서 과제 점수를 읽어서 vector<double>에 넣음.
istream& read_hw(istream& in, vector<double>& hw) {
	if (in) {...}
}