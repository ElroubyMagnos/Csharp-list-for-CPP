#include<vector>
#include<Array>
#include<String>
using namespace std;

string ToUpperAll(string x)
{
	for (int i = 0; i < x.length(); i++)
	{
		x[i] = toupper(x[i]);
	}
	return x;
}

template<class T>
string ToString(T x)
{
	return to_string(x);
}

template<class T>
class ListSharp
{
	std::vector<T> Data = {};

	public: T GetData(int number)
	{
		return Data.at(number);
	}

	public: void Add(T Item)
	{
		Data.push_back(Item);
	}

	public: void Remove(T Item)
	{
		std::vector<T> Container = {};

		for (int i = 0; i < Data.size(); i++)
		{
			if (Data[i] != Item)
			{
				Container.push_back(Data.at(i));
			}
		}

		Data = Container;
	}

	public: void RemoveAt(int number)
	{
		std::vector<T> Container = {};

		for (int i = 0; i < Data.size(); i++)
		{
			if (i != number)
			{
				Container.push_back(Data.at(i));
			}
		}

		Data = Container;
	}

	public: int Count()
	{
		return Data.size();
	}
};
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
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

	public: void RemoveAt(int num)
	{
		Keys.RemoveAt(num);
		Values.RemoveAt(num);
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

