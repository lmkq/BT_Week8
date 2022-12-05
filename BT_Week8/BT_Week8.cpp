//#include "SortAlgorithm.h"
//using namespace std;
//
//void main()
//{
//    //float a[] = { 1.4F, -5.2F, 3.3F, 0 };
//    //string a[] = { "Tuan","Loc","Hoang","Quynh" };
//    char a[]={'C','B', 'A', 'D', 'E'};
//    //STUDENT a[] = {new STUDENT("abc", 8.5), new STUDENT("def", 9.5);
//    int n = sizeof(a) / sizeof(a[0]);
//    /*SortAlgorithm<float>::SetAlgorithm(SortAlgorithm<float>::InterchangeSort);
//    SortAlgorithm<float>::Sort(a, n);*/
//    /*SortAlgorithm<string>::SetAlgorithm(SortAlgorithm<string>::InterchangeSort);
//    SortAlgorithm<string>::Sort(a, n);*/
//    SortAlgorithm<char>::SetAlgorithm(SortAlgorithm<char>::InterchangeSort);
//    SortAlgorithm<char>::Sort(a, n);
//    cout << "Array increasingly sorted: " << endl;
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << "\t";
//    }
//}

#include"SortAlgorithm.h"

int main()
{
	float b[] = { 1.4F,-5.2F,3.3F,0 };
	int n = sizeof(b) / sizeof(b[0]);
	SortAlgorithm<float>* obj = SortAlgorithm<float>::GetObject(SortAlgorithm<float>::InsertionSort);
	obj->Sort(b, n);
	cout << "\nafter sorting: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << "\t";
	}	



	return 0;
}