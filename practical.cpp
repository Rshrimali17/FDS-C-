#include <iostream>
#include <string>			
#include <string.h>
using namespace std;


void check(int *pointer){
	// pointer ++;
	cout << *pointer;
}



int main() {
	// cout << char(97) << endl;
	int arr[5] = {10, 1, 2, 3, 4};
	// int *point;

	// point = arr;

	// int i = 0; 
	// while (true){
	// 	cout << endl << i << endl;
	// 	i++;
	// 	if (i==5){
	// 		break;
	// 	}
	// }

	check(arr);

}


