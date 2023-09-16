#include<vector>
#include<Array>
using namespace std;
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