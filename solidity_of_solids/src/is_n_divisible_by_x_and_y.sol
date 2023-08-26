// SPDX-License-Identifier: BSD-2-Clause
pragma solidity ^0.8.16;

contract Kata {
    function isDivisible(
        int n,
        int x,
        int y
    ) public pure returns (bool) {
        if (n % y == 0 && n % x == 0) {
            return true;
        } else {
            return false;
        }
    }
}
