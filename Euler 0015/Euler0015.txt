/*
PROBLEM NUMBER: 15

PROBLEM TITLE: "Latice paths"

PROBLEM STATEMENT:

"Starting in the top left corner of a 2×2 grid, 
and only being able to move to the right and down, 
there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?"

Solution: "137846528820"
*/


// This one can be solved without the aid of programming
// by recognizing that all paths from the top left corner
// to the bottom right corner consists of 40 intersections.
// At each intersection, a choice is made of either going
// down, or going to the right. However, one may only go
// down 20 times in total, or to the right 20 times in total.


// If we encode each path as a string of 0's and 1's, with 0's
// indicating the choice to go down, and 1's indicating the
// choice to go to the right, we only need to determine the 
// number of ways in which one can uniquely place twenty 0's within
// forty slots, and allow the rest to be filled by 1's.

// In other words, we are calculating 40 choose 20, the number
// of ways that we can order and move 20 objects within
// 40 slots.

// 40 choose 20 = 137,846,528,820.
