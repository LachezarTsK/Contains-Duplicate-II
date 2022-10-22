
/**
 * @param {number[]} input
 * @param {number} target
 * @return {boolean}
 */
var containsNearbyDuplicate = function (input, target) {
    const uniqueValues = new Set();
    for (let i = 0; i < input.length; ++i) {
        if (uniqueValues.has(input[i])) {
            return true;
        }
        uniqueValues.add(input[i]);
        if (uniqueValues.size > target) {
            uniqueValues.delete(input[i - target]);
        }
    }
    return false;
};
