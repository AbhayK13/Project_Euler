#include <iostream>

int main()
{
  unsigned int exp;
  std::cin >> exp;

  // result
  unsigned int sum = 0;
  for (unsigned int i = 2; i <= 7*9*9*9*9*9*9; i++)
  {
    unsigned int currentSum = 0;

    unsigned int reduce = i;
    while (reduce > 0)
    {
      // taking the right-most digit
      unsigned int digit = reduce % 10;
      // and remove it
      reduce /= 10;

      // compute digit^exp
      unsigned int power = 1;
      for (unsigned int j = 1; j <= exp; j++)
        power *= digit;

      // add to currentSum
      currentSum += power;
    }

    if (currentSum == i)
      sum += i;
  }

  std::cout << sum << std::endl;
  return 0;
}
