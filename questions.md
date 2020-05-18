#STL Implementation Questions

Q1. http://codeforces.com/problemset/problem/782/A

He has n distinct pairs of socks which are initially in a bag. The pairs are numbered from 1 to n. Andryusha wants to put paired socks together and put them in the wardrobe. He takes the socks one by one from the bag, and for each sock he looks whether the pair of this sock has been already took out of the bag, or not. If not (that means the pair of this sock is still in the bag), he puts the current socks on the table in front of him. Otherwise, he puts both socks from the pair to the wardrobe.
Andryusha remembers the order in which he took the socks from the bag. Can you tell him what is the maximum number of socks that were on the table at the same time?

Input
The first line contains the single integer n (1 ≤ n ≤ 105) — the number of sock pairs.
The second line contains 2n integers x 1, x 2, ..., x 2n (1 ≤ x i ≤ n), which describe the order in which Andryusha took the socks from the bag. More precisely, x i means that the i-th sock Andryusha took out was from pair x i.
It is guaranteed that Andryusha took exactly two socks of each pair.

Output
Print single integer — the maximum number of socks that were on the table at the same time.
