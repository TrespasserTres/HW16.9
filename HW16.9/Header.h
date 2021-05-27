#pragma once
#include <vector>
#include <array>
#include <iostream>
#include <string>
using namespace std;

class User                  // Класс пользователей с паролем и именем
{
public:
     User(const string& log, const string& pas, const string& nam) : login_(log), password_(pas), name_(nam) {}
     void displayUser();    // Вывод логина, имени и пароля
     string getLogin();     // Выдача логина
     string getPassword();  // Выдача пароля
     string getName();      // Выдача имени
private:
    string login_;
    string password_;
    string name_;
};

class Mail                  // Класс с архивом сообщений
{
public:
    Mail(const string& nam, const string& mes, const string& auth) : name_(nam), mesage_(mes), author_(auth) {}
    void displaymail(string Authormes);              // Вывод cooбщений
private:
    string name_;
    string mesage_;
    string author_;
};

int backint(string a);   // Перевод текста в int (отсекаем неправильный выбор в меню)