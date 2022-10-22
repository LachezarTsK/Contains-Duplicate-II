
import java.util.HashSet;
import java.util.Set;

public class Solution {

    public boolean containsNearbyDuplicate(int[] input, int target) {
        Set<Integer> uniqueValues = new HashSet<>();
        for (int i = 0; i < input.length; ++i) {
            if (uniqueValues.contains(input[i])) {
                return true;
            }
            uniqueValues.add(input[i]);
            if (uniqueValues.size() > target) {
                uniqueValues.remove(input[i - target]);
            }
        }
        return false;
    }
}
