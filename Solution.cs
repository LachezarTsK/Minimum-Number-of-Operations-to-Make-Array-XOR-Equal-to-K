
using System;

public class Solution
{
    public int MinOperations(int[] input, int target)
    {
        int xorAllElementsInInput = 0;
        foreach (int value in input)
        {
            xorAllElementsInInput ^= value;
        }

        int minOperations = 0;
        while (xorAllElementsInInput > 0 || target > 0)
        {
            minOperations += (xorAllElementsInInput & 1) ^ (target & 1);
            xorAllElementsInInput = (xorAllElementsInInput >> 1);
            target = (target >> 1);
        }
        return minOperations;
    }
}
