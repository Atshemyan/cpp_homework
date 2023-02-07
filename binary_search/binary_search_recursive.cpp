#include <iostream>
char binary_search_recursive(char* arr, char inputed_char, char start, char end){
int size = sizeof(arr);

const char middle = (start + end) / 2;
if(start > end)
{
	return 'N';
}
if(inputed_char == arr[middle])
{
	return inputed_char;
}
else if(inputed_char > arr[middle])
{
	return binary_search_recursive(arr,inputed_char,middle + 1,end);
}
else
{
	return binary_search_recursive(arr,inputed_char,start,middle - 1);
}






return 0;
}
