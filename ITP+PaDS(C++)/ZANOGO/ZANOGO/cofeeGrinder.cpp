#include<iostream>
using namespace std;

struct CG
{
private:
	int Size;


	int *data;
public:
	
	CG(int size)
	{
		this->Size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout <<"Объект "<<this<< " Вызвался конструктор!" << endl;
	}

	CG(const CG &other)
	{
		this->Size = other.Size;
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}

		cout << "Объект " << this << " Вызвался конструктор!" << endl;
	}
	
	CG & operator = (const CG& other)
	{
		cout << "Вызвался оператор присваивания" << endl;
		this->Size = other.Size;
		if (this->data!=nullptr)
		{
			delete[]this->data;
		}
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}
		return *this;
	}

	~CG()
	{
		cout << "Объект " << this << " Вызвался деструктор!" << endl;
		delete[] data;
	}

};

void foo(CG value)
{
	cout << "Вызвалась функция foo" << endl;
}

CG foo_2()
{
	cout << "Вызвалась функция foo_2" << endl;
	CG temp(3);
	return temp;
}

int main()
{
	setlocale(LC_ALL, "ru");
	//foo_2();
	CG a(10);
	CG b(5);
	a = b;
	CG a();
	CG b();
	return 0;
}