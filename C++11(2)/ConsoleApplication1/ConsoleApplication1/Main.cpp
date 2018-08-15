#include <iostream>
#include <array>
#include <string>
using namespace std;
class Session
{
private:
	int mem1 = 10;
	double mem2{ 1966.54 };
	short mem3;
public:
	Session(){}
	Session(short s) :mem3(s){}
	Session(int n, double d, short s) :mem1(n), mem2(d), mem3(s){}
	Session(const Session &);
	Session(Session &&);
	Session & operator=(Session &);
	Session & operator=(Session &&);
	~Session();
	int getmem1()
	{
		return mem1;
	}
	int getmem3()
	{
		return mem3;
	}
};

template <typename T> using arr12 = array<T, 4>;

void show_list3(){}
template<typename T,typename... Args>
void show_list3(T value, Args... args)
{
	cout << value << ",";
	show_list3(args...);
}
int main()
{
	/*
	short a = 11;
	Session s{a};
	cout << s.getmem1() << endl;
	cout << s.getmem3() << endl;
	
	//template <typename T> using arr12 = array<T, 4>;  将arr12的声明放在函数内，arr12会报错未定义错误
	arr12<double> a1={1.1,2.2,3.3,4.4};
	for (double x : a1)
		cout << x << " ";
	cout << endl;
	
	enum Old1 { yes, no, maybe };                    //传统形式
	enum class New1{never,sometimes,often,always};   //新形式
	enum struct New2{ lever, never, sever };             //新形式
	Old1 o = yes;
	New1 n1 = New1::never;
	New2 n2 = New2::never;
	cout << o << "," <<int(n1) << "," << int(n2) << endl;
	
	auto count=[](int x){return x % 3 == 0; };
	auto count1 = [](double &x)->double{int y = 4; return x=x - y; };
	double temp = 7;
	count1(temp);
	cout << count(6) <<","<< temp << endl;
	*/
	int n = 14;
	double x = 2.17;
	string mr = "Mr.String objects!";
	show_list3(n, x);
	cout << endl;
	show_list3(x*x, '!', 7, mr);
	return 0;
}