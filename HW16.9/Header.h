#pragma once
#include <vector>
#include <array>
#include <iostream>
#include <string>
using namespace std;

class User                  // ����� ������������� � ������� � ������
{
public:
     User(const string& log, const string& pas, const string& nam) : login_(log), password_(pas), name_(nam) {}
     void displayUser();    // ����� ������, ����� � ������
     string getLogin();     // ������ ������
     string getPassword();  // ������ ������
     string getName();      // ������ �����
private:
    string login_;
    string password_;
    string name_;
};

class Mail                  // ����� � ������� ���������
{
public:
    Mail(const string& nam, const string& mes, const string& auth) : name_(nam), mesage_(mes), author_(auth) {}
    void displaymail(string Authormes);              // ����� coo������
private:
    string name_;
    string mesage_;
    string author_;
};

int backint(string a);   // ������� ������ � int (�������� ������������ ����� � ����)