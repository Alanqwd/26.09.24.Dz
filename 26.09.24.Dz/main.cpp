#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>

class Lamp
{
public:
		Lamp(std::string model, std::string color, int power) :
			model_(model), color_(color), power_(power) 
		{}

		std::string GetModel()const {
			return model_;
		}
		void SetModel( std::string model)const {
			model = model_;
		}
		std::string GetColor()const {
			return color_;
		}
		void SetColor(std::string color)const {
			color = model_;
		}
		int GetPower() const {
			return power_;
		}
		void SetPower(int power) {
			power = power_;
		}

	void Print()const {
		std::cout << "������: " << model_ << "\n";
		std::cout << "����: " << color_ << "\n";
		std::cout << "��������: " << power_ << " ��" << "\n";

	}
private:
	std::string color_;
	std::string model_;
	int power_;

};


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::vector<Lamp> lamp;
	int models;
	std::cout << "������� ���-�� ������������: ";
	std::cin >> models;
	system("cls");
	for (int i = 0; i < models; ++i) {
		std::string model, color;
		int power;
			std::cout << "������� ������ �����������: " << "\n";
			std::cin >> model;
			system("cls");
			std::cout << "������� ���� �����������: ";
			std::cin >> color;
			system("cls");
			std::cout << "������� �������� �����������: ";
			std::cin >> power;
			system("cls");
		lamp.push_back(Lamp(model, color, power));

	}

	std::cout << "���������� � ������������:" << "\n\n";
	std::cout << "---------------------" << "\n";
	for (const Lamp& lamp : lamp) {
		lamp.Print();
		std::cout << "---------------------" << "\n";
	}


	return 0; 
}