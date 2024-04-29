
class Solution {
    fun minOperations(input: IntArray, k: Int): Int {
        var xorAllElementsInInput = 0
        for (value in input) {
            xorAllElementsInInput = (xorAllElementsInInput xor value)
        }

        var target = k
        var minOperations = 0

        while (xorAllElementsInInput > 0 || target > 0) {
            minOperations += (xorAllElementsInInput and 1) xor (target and 1)
            xorAllElementsInInput = (xorAllElementsInInput shr 1)
            target = (target shr 1)
        }
        return minOperations
    }
}
