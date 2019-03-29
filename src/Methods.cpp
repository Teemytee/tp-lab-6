#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "../include/Classes.h"
using namespace std;

Employee::Employee(int idS, string nameS) {
	id = idS;
	name = nameS;
};

int Employee::getId() {
	return id;
}

string Employee::getName() {
	return name;
}

int Employee::getWorktime() {
	return worktime;
}

int Employee::getNumproj() {
	return numproj;
}

Personal::Personal(int idS, string nameS, int worktimeS) : Employee(idS, nameS) {
	worktime = worktimeS;
}

void Cleaner::salW() {
	payment = 200 * worktime;
}

int Cleaner::getSal() {
	salW();
	return payment;
}

void Driver::salW() {
	payment = 250 * worktime;
}

int Driver::getSal() {
	salW();
	return payment;
}

Engineer::Engineer(int idS, string nameS, int worktimeS, int numprojS) : Employee(idS, nameS) {
	worktime = worktimeS;
	numproj = numprojS;
}

int Engineer::getpaym1() {
	return paym1;
}

int Engineer::getpaym2() {
	return paym2;
}

void Programmer::salW() {
	paym1 = 400 * worktime;
}

void Programmer::salP() {
	paym2 = 5000 * numproj;
}

int Programmer::getSal() {
	salW();
	salP();
	payment = paym1 + paym2;
	return payment;
}

void Tester::salW() {
	paym1 = 300 * worktime;
}

void Tester::salP() {
	paym2 = 350 * numproj;
}

int Tester::getSal() {
	salW();
	salP();
	payment = paym1 + paym2;
	return payment;
}

void TeamLeader::salH() {
	payment = paym1 + paym2 + 7000;
}

int TeamLeader::getSal() {
	salW();
	salP();
	salH();
	return payment;
}

Manager::Manager(int idS, string nameS, int numprojS) : Employee(idS, nameS) {
	numproj = numprojS;
}

void Manager::salP() {
	payment = 2500 * numproj;
	paym1 = payment;
}

int Manager::getSal() {
	salP();
	return payment;
}

void ProjectManager::salH() {
	payment = paym1 + 5000;
	paym2 = payment;
}

int ProjectManager::getSal() {
	salP();
	salH();
	return payment;
}

void SeniorManager::sumSal() {
	payment = paym2 + 10000;
}

int SeniorManager::getSal() {
	ProjectManager::getSal();
	sumSal();
	return payment;
}