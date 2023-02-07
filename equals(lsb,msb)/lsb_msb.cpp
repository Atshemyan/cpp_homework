#include <iostream>
bool lsb_msb(unsigned int num){ //binar code and lsb/msb equals(true/false)
    unsigned int copy = num;
    unsigned int counter = 0;
    bool result = false;
    if (num == 0)
    {
        std::cout << "All bits are 0" << std::endl;
    }
    
    while (copy != 0)
    {
        copy /= 2;
        counter++;
    }
    
    unsigned int arr_of_bits[counter];
    copy = num;
   
    unsigned int i = 0;
    int tmp = 0;
    while (copy!= 0)
    {
        tmp = copy % 2;
        copy /= 2;
        arr_of_bits[i] = tmp;
        i++;
    }
    for (int j = counter - 1; j >= 0; j--)
    {
        std::cout << arr_of_bits[j];
    }
   std::cout << "\n";
   if(tmp == arr_of_bits[0])
   {
	return true;
   }
   else
   {
	return false;
   }
    
}


