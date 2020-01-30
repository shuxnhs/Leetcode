<?php

/**
 *  多数元素
 * 给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
 * 你可以假设数组是非空的，并且给定的数组总是存在多数元素。
 */
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function majorityElement($nums) {
        $countArray = array_count_values($nums);
        $maxStr = '';
        $max = 0;
        foreach ($countArray as $key => $value){
            if ($value >= $max){
                $maxStr = $key;
                $max = $value;
            }
        }
        return $maxStr;
    }
}
$solution = new Solution;
var_dump($solution->majorityElement([2,2,1]));