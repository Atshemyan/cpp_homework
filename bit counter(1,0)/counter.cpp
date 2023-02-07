//Ի ր ա կ ա ն ա ց ն ե լ ֆ ու ն կ ց ի ա, որը տ պ ում է էկրանին unsigned int ա ր գ ումենտ ի  1 և 0 բիթերի ք ա ն ա կ ները։
#include <iostream>
void counter(unsigned int num){  //count of 1 and  0 bits
    unsigned int copy = num;
    unsigned int counter = 0;
    if (num == 0)
    {
        std::cout << "All bits are 0" << std::endl;
    }
    
    while (copy != 0)
    {
        copy /= 2;
        counter++;
    }
    
    unsigned int arr[counter];
    copy = num;
    unsigned int counter_for_0 = 0;
    unsigned int counter_for_1 = 0;
    unsigned int i = 0;
    while (copy!= 0)
    {
        int tmp = copy % 2;
        if(tmp == 0)
	{
		++counter_for_0;
	}
	else
	{
		++counter_for_1;
	}
        copy /= 2;
        arr[i] = tmp;
        i++;
    }
    for (int j = counter - 1; j >= 0; j--)
    {
        std::cout << arr[j];
    }
    std::cout << "\n";
    std::cout << "Count of 1 --> " << counter_for_1 << "\n" << "Count of 0 -- > " << counter_for_0; 
}
