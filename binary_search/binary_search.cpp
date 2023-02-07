char binary_search(char* arr, char inputed_char){

int size = sizeof(arr);
int start = 0;
int end = size - 1;
while (start <= end)
{
	const char middle = (start + end) / 2;
	// start,x,x,x|middle|x,x,x,end
	if(inputed_char == arr[middle])
	{
		return inputed_char;
	}
	else if(inputed_char > arr[middle])
	{
		start = middle + 1;
	}
	else
	{
		end = middle - 1;

	}


}
return 0;
}

