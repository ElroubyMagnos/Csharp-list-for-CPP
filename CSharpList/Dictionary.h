#include<vector>
#include<Array>
#include"CSharp.h"
using namespace std;

template<class T, class Y>
class DictionarySharp
{
	ListSharp<T> Keys = {};
	ListSharp<Y> Values = {};

	public: void Add(T Key, Y Value)
	{
		Keys.Add(Key);
		Values.Add(Value);
	}

	public: T GetKeys(int number)
	{
		return Keys.GetData(number);
	}

	public: Y GetValues(int number)
	{
		return Values.GetData(number);
	}
};