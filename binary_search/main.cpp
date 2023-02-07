#include <iostream>
char binary_search_recursive(char* arr, char inputed_char, char start, char end);

int main(){
char arr[5] = {'a', 'b', 'c', 'd', 'e'};
const int size = sizeof(arr);
char input;
std::cin >> input;
std::cout << binary_search_recursive(arr,input,0,size - 1);

return 0;
}
