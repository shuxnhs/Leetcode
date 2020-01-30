<?php

/**
 *  只出现一次的数字
 *  给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
 */
class Solution {
    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function singleNumber($nums) {
        $interger = "";
        $countArray = array_count_values($nums);
        foreach($countArray as $key => $value){
            if(1 == $value){
                $interger = $key;
            }
        }
        return $interger;
    }
}
$solution = new Solution;
var_dump($solution->singleNumber([2,2,1]));