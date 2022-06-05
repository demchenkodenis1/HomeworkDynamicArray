
#include "Header.h"
using namespace std;


int main()
{

	srand(time(NULL));          //Включаю генератор псевдослучайных значений

	int* Ptr = NULL;
	Massiv Massiv;            //объект массив типа массив (справа объект - слева тип)
	int N = 0;                  //количество элементов для массива


	N = rand() % 20 + 1;             //генерирую случайные числа, ноль не генерируем
	
	cout << "\n\n" << "Destructor" << endl;
	Massiv.Destructor(Ptr);        //Освобождаю память
	cout << "\n\n" << "Operator_ravno" << endl;
	Massiv.Operator_ravno(Ptr, N);
	cout << "\n\n" << "At" << endl;
	Massiv.At(Ptr, N);
	cout << "\n\n" << "Operator_kvadratnye_skobki" << endl;
	Massiv.Operator_kvadratnye_skobki(Ptr, N);
	cout << "\n\n" << "Front" << endl;
	Massiv.Front(Ptr, N);
	cout << "\n\n" << "Back" << endl;
	Massiv.Back(Ptr, N);
	cout << "\n\n" << "Data" << endl;
	Massiv.Data(Ptr, N);
	cout << "\n\n" << "Capacity" << endl;
	Massiv.Capacity(Ptr, N);
	cout << "\n\n" << "Empty" << endl;
	Massiv.Empty(Ptr, N);
	cout << "\n\n" << "Size" << endl;
	Massiv.Size(Ptr, N);
	cout << "\n\n" << "Reserve" << endl;
	Massiv.Reserve(Ptr, N);
	cout << "\n\n" << "Shrink_to_fit" << endl;
	Massiv.Shrink_to_fit(Ptr, N);
	cout << "\n\n" << "Clear" << endl;
	Massiv.Clear(Ptr, N);
	cout << "\n\n" << "Insert" << endl;
	Massiv.Insert(Ptr, N);
	cout << "\n\n" << "Erase" << endl;
	Massiv.Erase(Ptr, N);
	cout << "\n\n" << "Push_back_and_Pop_back" << endl;
	Massiv.Push_back_and_Pop_back(Ptr, N);
	cout << "\n\n" << "Emplace_back" << endl;
	Massiv.Emplace_back(Ptr, N);
	cout << "\n\n" << "Resize" << endl;
	Massiv.Resize(Ptr, N);
	cout << "\n\n" << "Swap" << endl;
	Massiv.Swap(Ptr, N);


	cout << "\n\n";

	cin.get();
}