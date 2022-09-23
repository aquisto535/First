#include<iostream>

using namespace std;


//동적 싱글톤
class SingletonClass
{
public:
	static SingletonClass* getinstance()
	{
		if (!instance) {
			instance = new SingletonClass();
		}

		return instance;
	}

	void showMessage()
	{
		cout << "singleton pattern" << endl;
	}

private:
	static SingletonClass *instance;
	SingletonClass();
	~SingletonClass();//외부에서 클래스를 생성못하게 막음.
};

SingletonClass::SingletonClass()
{
}

SingletonClass::~SingletonClass()
{
}

SingletonClass* SingletonClass::instance = NULL;


void main()
{
	SingletonClass::getinstance()->showMessage();//객체를 한번만 생성해 재활용함.	
}



