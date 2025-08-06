<?php

/**
 * Class Solution
 *
 * Provides a method to solve the Two Sum problem:
 * Given an array of integers and a target sum, find the indices
 * of the two numbers that add up to the target.
 */
class Solution {

    /**
     * Find two indices such that their values in the array add up to the target.
     *
     * @param int[] $nums   An array of integers.
     * @param int   $target The target sum.
     * 
     * @return int[] An array containing the two indices. Returns an empty array if no valid pair is found.
     */
    public function twoSum(array $nums, int $target): array {
        $map = []; // Hash map to store number => index

        foreach ($nums as $index => $num) {
            $complement = $target - $num;

            // If the complement exists in the map, we found the answer
            if (isset($map[$complement])) {
                return [$map[$complement], $index];
            }

            // Store current number with its index
            $map[$num] = $index;
        }

        // No valid pair found
        return [];
    }
}

// ---------- Test the Solution ----------

$nums = [2, 7, 11, 15];   // Input array
$target = 9;              // Target sum

$solution = new Solution();
$result = $solution->twoSum($nums, $target);

// Output the result
if (count($result) === 2) {
    echo 'The two numbers are: ' . $nums[$result[0]] . ' and ' . $nums[$result[1]] . PHP_EOL;
    echo 'Their indices are: ' . $result[0] . ' and ' . $result[1] . PHP_EOL;
} else {
    echo 'No pair found!' . PHP_EOL;
}
