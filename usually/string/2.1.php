<?php
/**
 * 验证回文串
	给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
	说明：本题中，我们将空字符串定义为有效的回文串。

	示例 1:

	输入: "A man, a plan, a canal: Panama"
	输出: true
 *
	示例 2:
	输入: "race a car"
	输出: false
 */

class Solution {

    /**
     * @param String $s
     * @return Boolean
     */
    function isPalindrome(string $s) {
        if(empty($s)){
            return true;
        }
        $strArr = [];
        for($i = 0 ; $i < strlen($s); $i++){
            if(preg_match('/^[a-zA-Z0-9]$/u', $s[$i])){
                $strArr[] = strtolower($s[$i]);
            }
        }
        for ($j = 0; $j <= count($strArr) / 2; $j++){
            if($strArr[$j] !== $strArr[count($strArr)-$j-1]){
                return false;
            }
        }
        return true;
    }
}
$solution = new Solution();
var_dump($solution->isPalindrome("A man, a plan, a canal: Panama"));