#include <array>
#include <cstdio>

int main()
{
        std::array<int, 4> arr1 = {1, 2, 3, 4};
        std::array<int, 4> arr2 = {5, 6, 7, 8};
        int  sum  = 0;
        for (int i = 0; i < arr1.size(); i += 1)
        {
                sum = arr1[i] + arr2[i];
                std::printf("Sum[%d}=%d\n", i, sum);
        }
}