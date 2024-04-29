
/**
 * @param {number[]} input
 * @param {number} target
 * @return {number}
 */
var minOperations = function (input, target) {
    let xorAllElementsInInput = 0;
    for (let value of input) {
        xorAllElementsInInput ^= value;
    }

    let minOperations = 0;
    while (xorAllElementsInInput > 0 || target > 0) {
        minOperations += (xorAllElementsInInput & 1) ^ (target & 1);
        xorAllElementsInInput = (xorAllElementsInInput >> 1);
        target = (target >> 1);
    }
    return minOperations;
};
