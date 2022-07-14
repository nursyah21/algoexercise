#include <iostream>
#include <string>

int main()
{
    int largestPalindromeProduct = 0;
    
    
    for (int i = 100; i < 1000; ++i)
    {
        for (int j = 100; j < 1000; ++j)
        {
            int currentProduct = i * j;
            std::string currentProductString = std::to_string(currentProduct);
            
            if (
                (currentProductString == std::string{ currentProductString.rbegin(), currentProductString.rend() }) &&
                (currentProduct > largestPalindromeProduct)
            )
            {
                largestPalindromeProduct = currentProduct;
            }
        }
    }
    
    std::cout << largestPalindromeProduct << "\n";
}
