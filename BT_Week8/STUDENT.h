#pragma once
#include<iostream>
#include<string>
using namespace std;

class STUDENT
{
	string name;
	float diem;
public:
	STUDENT();
	STUDENT(string, float);
	~STUDENT() = default;
};

