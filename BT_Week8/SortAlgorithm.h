#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include"STUDENT.h"
using namespace std;
template<class T>
class SortAlgorithm
{
private:
	static SortAlgorithm* alg; // thêm
	static void (*currentAlg)(T a[], int);
	SortAlgorithm() 
	{
		currentAlg = InterchangeSort; // thêm
	}

public:
	static SortAlgorithm* GetObject(void(*pAlg)(T a[], int n)) // thêm
	{
		if (alg == NULL)
			alg = new SortAlgorithm;
		if (alg != NULL)
			alg->currentAlg = pAlg;
		return alg;
	}
	static void InterchangeSort(T a[], int n)
	{
		int i, j;
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if (a[i] > a[j])
					swap(a[i], a[j]);
	}
	static void SeletionSort(T a[], int n)
	{
		int min;
		for (int i = 0; i < n - 1; i++)
		{
			min = i;
			for (int j = i + 1; j < n; j++) {
				if (a[j] < a[min])
					min = j;
			}

			if (min != i)
				swap(a[min], a[i]);
		}
	}
	static void InsertionSort(T a[], int n)
	{
		int pos;
		T x;
		for (int i = 1; i < n; i++)
		{
			x = a[i];
			for (pos = i; (pos > 0) && (a[pos - 1] > x); pos--)
				a[pos] = a[pos - 1];
			a[pos] = x;
		}
	}

	//static void SetAlgorithm(void (*pAlg)(T a[], int n)) 
	//{
	//	if (pAlg != NULL) currentAlg = pAlg;
	//}

	void Sort(T a[], int n) { // sửa: tui có xóa static
		if (currentAlg != NULL)
			currentAlg(a, n);
	}
};

// sửa: đống này là tui thêm 
template<class T>
SortAlgorithm<T>* SortAlgorithm<T>::GetObject(void(*pAlg)(T a[], int n));
template<class T>
void SortAlgorithm<T>::InsertionSort(T a[], int n);
template<class T>
void SortAlgorithm<T>::SeletionSort(T a[], int n);
template<class T>
void SortAlgorithm<T>::InterchangeSort(T a[], int n);
template<class T>
SortAlgorithm<T>* SortAlgorithm<T>::alg;
template<class T>
void SortAlgorithm<T>::(*currentAlg)(T a[], int) = NULL;