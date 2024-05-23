#include <iostream>
#include <algorithm>

class String 
{
public:

	String() 
	{
		Length_ = 80;
		String_ = new char[Length_ + 1];
		std::fill(String_, String_ + Length_ + 1, '0');
	}
	String(int size) 
	{
		String_ = new char[size + 1];
		std::fill(String_, String_ + size + 1, '0');
	}
	String(const char* input) 
	{
		Length_ = strlen(input);
		String_ = new char[Length_ + 1];
		for (int i = 0; i < Length_; i++) 
		{
			String_[i] = input[i];
		}
		String_[Length_] = '0';
	}
	void InputStr() 
	{
		std::cin.getline(String_, Length_ + 1);
	}

	void PrintStr() 
	{
		std::cout << String_ << std::endl;
	}
	~String()
	{
		delete[] String_;
	}

private:
	char* String_;
	int Length_;
};







int main() {
	setlocale(0, "");
	
  	String F80; // 80 символов
	String F10(10); // произвольное кол-во
	String F15("DDDDDD"); // Пользовательский ввод
	String F00;//Пользовательский ввод из консоли 
	F00.InputStr();
	F00.PrintStr();

	F10.PrintStr();



	return 0;
}
