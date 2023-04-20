# Push_swap


First project that we work on sorting algorithms.

The least amount of moves with two stacks.
You have two stacks called Stack A and Stack B. Stack A is given a random list of unorganized numbers in Stack A and sort them so that Stack A is organized from smallest to largest. 
There are only a few moves you're allowed to used to maniulate the Stacks that we're going to call "actions". The main goal, os this proyect is to orgnize Stack A in as few actions as possible.


So what actions are we alloed to use on the two Stacks?

sa : - Swap top two numbers in Stack A

sb : -  Swap top two numbers in Stack B

ss : - Run *sa* and *sb* at the same time

ra : - Top number goes to bottom os Stack A

rb : - Top number goes to bottom os Stack B

rr : - Run *ra* and  *rb* at the same time

rra : - Bottom number goes to top of Stack A

rrb : - Bottom number goes to top of Stack B

rrr : - Run *rra* and *rrb* at the same time

pa : - Send top of B to top of A

pb : - Send top of A to top of B

