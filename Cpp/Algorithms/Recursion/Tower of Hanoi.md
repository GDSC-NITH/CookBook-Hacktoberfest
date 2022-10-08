<h1> TOWER OF HANOI ALGORIHTM</h1>

Tower of Hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks. 
Initially, all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and they are on rod A.

## Objective 
The objective of the puzzle is to move the entire stack to another rod (here considered C).

## Rules of Puzzle
1. Only one disk can be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack.
3. No disk may be placed on top of a smaller disk.

## With three disks, this illustration depicts the Tower of Hanoi puzzle
<img src="https://user-images.githubusercontent.com/77115663/194709581-ec7a2d04-b9f2-4b1b-b9ed-04b6f16a9f4a.png" width=800 height=500>

## Steps To solve using Recursion
The idea is to use the helper node to reach the destination using recursion. 
<h2> Recursion </h2>
Recursion is a process in which the function calls itself indirectly or directly in order to solve the problem. The function that performs the process of recursion is called a recursive function.<br>

## Below is the pattern for this problem:
1. Shift ‘N-1’ disks from ‘A’ to ‘B’, using C.
2. Shift last disk from ‘A’ to ‘C’.
3. Shift ‘N-1’ disks from ‘B’ to ‘C’, using A

## Tip
A Hanoi puzzle involving n disks involves (2^n-1) steps.

## Examples
**Input:** 2<br>
**Output:** <br>
* Disk 1 moved from A to B
* Disk 2 moved from A to C
* Disk 1 moved from B to C

**Input:** 3<br>
**Output:** <br>
* Disk 1 moved from A to C
* Disk 2 moved from A to B
* Disk 1 moved from C to B
* Disk 3 moved from A to C
* Disk 1 moved from B to A
* Disk 2 moved from B to C
* Disk 1 moved from A to C
