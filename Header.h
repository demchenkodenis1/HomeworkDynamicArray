#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>  //rand
#include <vector>

using namespace std;

class Massiv  //Наш класс
{
public:


	void Create(int*& Arr, const int N);             //Метод выделения памяти под массив
	void Destructor(int* Arr);                         //Метод освобождения памяти
	void Fill(int* Arr, const int N);               //Метод заполнения массива значениями
	void Operator_ravno(int* Arr, const int N);
	void At(int* Arr, const int N);
	void Operator_kvadratnye_skobki(int* Arr, const int N);
	void Front(int* Arr, const int N);
	void Back(int* Arr, const int N);
	void Data(int* Arr, const int N);
	void Capacity(int* Arr, const int N);
	void Empty(int* Arr, const int N);
	void Size(int* Arr, const int N);
	void Reserve(int* Arr, const int N);
	void Shrink_to_fit(int* Arr, const int N);
	void Clear(int* Arr, const int N);
	void Insert(int* Arr, const int N);
	void Erase(int* Arr, const int N);
	void Push_back_and_Pop_back(int* Arr, const int N);
	void Emplace_back(int* Arr, const int N);
	void Resize(int* Arr, const int N);
	void Swap(int* Arr, const int N);

};

//void Massiv::Create(int*& Arr, const int N)     
//	Arr = new int[N];
//}

void Massiv::Destructor(int* Arr)                     
{
	delete[]Arr;                                  
	Arr = NULL;                                       
}






void Massiv::Operator_ravno(int* Arr, const int N)
{
	vector<int> v1, v2, v3;
	vector<int>::iterator iter;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << "v1 = ";
	for (iter = v1.begin(); iter != v1.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	v2 = v1;
	cout << "v2 = ";
	for (iter = v2.begin(); iter != v2.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	// move v1 into v2
	v2.clear();
	v2 = move(v1);
	cout << "v2 = ";
	for (iter = v2.begin(); iter != v2.end(); iter++)
		cout << *iter << " ";
	cout << endl;
}

void Massiv::At(int* Arr, const int N)
{
	vector <int> v1;

	v1.push_back(10);
	v1.push_back(20);

	const int& i = v1.at(0);
	int& j = v1.at(1);
	cout << "The first element is " << i << endl;
	cout << "The second element is " << j << endl;
}

void Massiv::Operator_kvadratnye_skobki(int* Arr, const int N)
{
	using namespace std;
	vector <int> v1;

	v1.push_back(10);
	v1.push_back(20);

	int& i = v1[1];
	cout << "The second integer of v1 is " << i << endl;
}

void Massiv::Front(int* Arr, const int N)
{
	vector <int> v1;

	v1.push_back(10);
	v1.push_back(11);

	int& i = v1.front();
	const int& ii = v1.front();

	cout << "The first integer of v1 is " << i << endl;
	// by incrementing i, we move the front reference to the second element
	i++;
	cout << "Now, the first integer of v1 is " << i << endl;
}


void Massiv::Back(int* Arr, const int N)
{
	vector <int> v1;

	v1.push_back(10);
	v1.push_back(11);

	int& i = v1.back();
	const int& ii = v1.front();

	cout << "The last integer of v1 is " << i << endl;
	i--;
	cout << "The next-to-last integer of v1 is " << ii << endl;
}


void Massiv::Data(int* Arr, const int N)
{
	vector<int> c1;
	vector<int>::pointer c1_ptr;
	vector<int>::const_pointer c1_cPtr;

	c1.push_back(1);
	c1.push_back(2);

	cout << "The vector c1 contains elements:";
	c1_cPtr = c1.data();
	for (size_t n = c1.size(); 0 < n; --n, c1_cPtr++)
	{
		cout << " " << *c1_cPtr;
	}
	cout << endl;

	cout << "The vector c1 now contains elements:";
	c1_ptr = c1.data();
	*c1_ptr = 20;
	for (size_t n = c1.size(); 0 < n; --n, c1_ptr++)
	{
		cout << " " << *c1_ptr;
	}
	cout << endl;
}

void Massiv::Capacity(int* Arr, const int N)
{
	vector <int> v1;

	v1.push_back(1);
	cout << "The length of storage allocated is "
		<< v1.capacity() << "." << endl;

	v1.push_back(2);
	cout << "The length of storage allocated is now "
		<< v1.capacity() << "." << endl;
}

void Massiv::Empty(int* Arr, const int N)
{
	vector <int> v1;

	v1.push_back(10);

	if (v1.empty())
		cout << "The vector is empty." << endl;
	else
		cout << "The vector is not empty." << endl;
}

void Massiv::Size(int* Arr, const int N)
{
	using namespace std;
	vector <int> v1;
	vector <int>::size_type i;

	v1.push_back(1);
	i = v1.size();
	cout << "Vector length is " << i << "." << endl;

	v1.push_back(2);
	i = v1.size();
	cout << "Vector length is now " << i << "." << endl;
}

void Massiv::Reserve(int* Arr, const int N)
{
	vector <int> v1;
	//vector <int>::iterator Iter;

	v1.push_back(1);
	cout << "Current capacity of v1 = "
		<< v1.capacity() << endl;
	v1.reserve(20);
	cout << "Current capacity of v1 = "
		<< v1.capacity() << endl;
}

void Massiv::Shrink_to_fit(int* Arr, const int N)
{
	vector <int> v1;
	//vector <int>::iterator Iter;

	v1.push_back(1);
	cout << "Current capacity of v1 = "
		<< v1.capacity() << endl;
	v1.reserve(20);
	cout << "Current capacity of v1 = "
		<< v1.capacity() << endl;
	v1.shrink_to_fit();
	cout << "Current capacity of v1 = "
		<< v1.capacity() << endl;
}

void Massiv::Clear(int* Arr, const int N)
{
	vector <int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	cout << "The size of v1 is " << v1.size() << endl;
	v1.clear();
	cout << "The size of v1 after clearing is " << v1.size() << endl;
}

void Massiv::Insert(int* Arr, const int N)
{
	using namespace std;
	vector <int> v1;
	vector <int>::iterator Iter;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	cout << "v1 =";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;

	v1.insert(v1.begin() + 1, 40);
	cout << "v1 =";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;
	v1.insert(v1.begin() + 2, 4, 50);

	cout << "v1 =";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;

	const auto v2 = v1;
	v1.insert(v1.begin() + 1, v2.begin() + 2, v2.begin() + 4);
	cout << "v1 =";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;

	// initialize a vector of vectors by moving v1
	vector < vector <int> > vv1;

	vv1.insert(vv1.begin(), move(v1));
	if (vv1.size() != 0 && vv1[0].size() != 0)
	{
		cout << "vv1[0] =";
		for (Iter = vv1[0].begin(); Iter != vv1[0].end(); Iter++)
			cout << " " << *Iter;
		cout << endl;
	}
}

void Massiv::Erase(int* Arr, const int N)
{
	using namespace std;
	vector <int> v1;
	vector <int>::iterator Iter;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << "v1 =";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;

	v1.erase(v1.begin());
	cout << "v1 =";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;

	v1.erase(v1.begin() + 1, v1.begin() + 3);
	cout << "v1 =";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;
}

template <typename T> void print_elem(const T & t) {
		cout << "(" << t << ") ";
	}

	template <typename T> void print_collection(const T & t) {
		cout << "  " << t.size() << " elements: ";

		for (const auto& p : t) {
			print_elem(p);
		}
		cout << endl;
	}


void Massiv::Push_back_and_Pop_back(int* Arr, const int N)
{

	
	vector<int> v;
	for (int i = 0; i < 10; ++i) {
		v.push_back(10 + i);
	}

	cout << "vector data: " << endl;
	print_collection(v);

	// pop_back() until it's empty, printing the last element as we go
	while (v.begin() != v.end()) {
		cout << "v.back(): "; print_elem(v.back()); cout << endl;
		v.pop_back();
	}
}

struct obj
{
	obj(int, double) {}
};

void Massiv::Emplace_back(int* Arr, const int N)
{
	std::vector<obj> v;
	v.emplace_back(1, 3.14); // obj in created in place in the vector
}


template <typename C> void print(const string& s, const C& c) {
	cout << s;

	for (const auto& e : c) {
		cout << e << " ";
	}
	cout << endl;
}

void printvstats(const vector<int>& v) {
	cout << "   the vector's size is: " << v.size() << endl;
	cout << "   the vector's capacity is: " << v.capacity() << endl;
	cout << "   the vector's maximum size is: " << v.max_size() << endl;
}

void Massiv::Resize(int* Arr, const int N)
{
	// declare a vector that begins with 0 elements.
	vector<int> v;

	// Show statistics about vector.
	cout << endl << "After declaring an empty vector:" << endl;
	printvstats(v);
	print("   the vector's contents: ", v);

	// Add one element to the end of the vector.
	v.push_back(-1);
	cout << endl << "After adding an element:" << endl;
	printvstats(v);
	print("   the vector's contents: ", v);

	for (int i = 1; i < 10; ++i) {
		v.push_back(i);
	}
	cout << endl << "After adding 10 elements:" << endl;
	printvstats(v);
	print("   the vector's contents: ", v);

	v.resize(6);
	cout << endl << "After resizing to 6 elements without an initialization value:" << endl;
	printvstats(v);
	print("   the vector's contents: ", v);

	v.resize(9, 999);
	cout << endl << "After resizing to 9 elements with an initialization value of 999:" << endl;
	printvstats(v);
	print("   the vector's contents: ", v);

	v.resize(12);
	cout << endl << "After resizing to 12 elements without an initialization value:" << endl;
	printvstats(v);
	print("   the vector's contents: ", v);

	// Ensure there's room for at least 1000 elements.
	v.reserve(1000);
	cout << endl << "After vector::reserve(1000):" << endl;
	printvstats(v);

	// Ensure there's room for at least 2000 elements.
	v.resize(2000);
	cout << endl << "After vector::resize(2000):" << endl;
	printvstats(v);
}

void Massiv::Swap(int* Arr, const int N)
{
	using namespace std;
	vector <int> v1, v2;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	v2.push_back(10);
	v2.push_back(20);

	cout << "The number of elements in v1 = " << v1.size() << endl;
	cout << "The number of elements in v2 = " << v2.size() << endl;
	cout << endl;

	v1.swap(v2);

	cout << "The number of elements in v1 = " << v1.size() << endl;
	cout << "The number of elements in v2 = " << v2.size() << endl;
}