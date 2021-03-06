# STL Implementation Questions

Q1. http://codeforces.com/problemset/problem/782/A

He has n distinct pairs of socks which are initially in a bag. The pairs are numbered from 1 to n. Andryusha wants to put paired socks together and put them in the wardrobe. He takes the socks one by one from the bag, and for each sock he looks whether the pair of this sock has been already took out of the bag, or not. If not (that means the pair of this sock is still in the bag), he puts the current socks on the table in front of him. Otherwise, he puts both socks from the pair to the wardrobe.
Andryusha remembers the order in which he took the socks from the bag. Can you tell him what is the maximum number of socks that were on the table at the same time?

Input:
The first line contains the single integer n (1 ≤ n ≤ 105) — the number of sock pairs.
The second line contains 2n integers x 1, x 2, ..., x 2n (1 ≤ x i ≤ n), which describe the order in which Andryusha took the socks from the bag. More precisely, x i means that the i-th sock Andryusha took out was from pair x i.
It is guaranteed that Andryusha took exactly two socks of each pair.

Output:
Print single integer — the maximum number of socks that were on the table at the same time.



Q2. http://codeforces.com/problemset/problem/4/C

Each time a new user wants to register, he sends to the system a request with his name. If such a name does not exist in the system database, it is inserted into the database, and the user gets the response OK, confirming the successful registration. If the name already exists in the system database, the system makes up a new user name, sends it to the user as a prompt and also inserts the prompt into the database. The new name is formed by the following rule. Numbers, starting with 1, are appended one after another to name (name1, name2, ...), among these numbers the least i is found so that name i does not yet exist in the database.

Input:
The first line contains number n (1 ≤ n ≤ 105). The following n lines contain the requests to the system. Each request is a non-empty line, and consists of not more than 32 characters, which are all lowercase Latin letters.

Output:
Print n lines, which are system responses to the requests: OK in case of successful registration, or a prompt with a new name, if the requested name is already taken.



Q3. string as input 1+2+3+4 or 1+2-3-4 upto 6 decimal digits. Find total.



Q4. https://codeforces.com/problemset/problem/1358/B   Knowledge of Sets used



Q5. https://codeforces.com/contest/1360/problem/C Vectors used to find if the numbers have same parity or |x-y|=1, erase function also used.



Q6. https://leetcode.com/problems/path-crossing/ Map used with key value in the form of coordinates, basically checking if coordinate visited already or not.



Q7. https://codeforces.com/problemset/problem/31/A copying vector and sorting



Professor Vasechkin is studying evolution of worms. Recently he put forward hypotheses that all worms evolve by division. There are n forms of worms. Worms of these forms have lengths a 1, a 2, ..., a n. To prove his theory, professor needs to find 3 different forms that the length of the first form is equal to sum of lengths of the other two forms. Help him to do this.

Input:
The first line contains integer n (3 ≤ n ≤ 100) — amount of worm's forms. The second line contains n space-separated integers a i (1 ≤ a i ≤ 1000) — lengths of worms of each form.

Output:
Output 3 distinct integers i j k (1 ≤ i, j, k ≤ n) — such indexes of worm's forms that a i = a j + a k. If there is no such triple, output -1. If there are several solutions, output any of them. It possible that a j = a k.
