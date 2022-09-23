#include<iostream>
#include<crtdbg.h>

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

	void AddValue(int value)
	{
		total = total + value;
	}

	int getTotalValue()
	{
		return total;
	}

	void destroy()
	{
		if (instance !=  NULL)
		{
			delete instance;
			instance = NULL;
			cout << "instance 해제" << endl;
		}
	}

	

private:
	int total;
	static SingletonClass* instance;
	SingletonClass() {
		total = 0;
	}
	~SingletonClass();//외부에서 클래스를 생성못하게 막음.
};



SingletonClass::~SingletonClass()
{

}

SingletonClass* SingletonClass::instance = NULL;


void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	SingletonClass::getinstance()->showMessage();
	SingletonClass::getinstance()->destroy();


}



