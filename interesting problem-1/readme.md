# Left and Right Houses Problem Explanation

<h3>Problem Summary</h3>
We need to find a position l (or r) in the village where we can place a road such that:

The people on the left side of the road are mostly satisfied (they want to live on the left side).
The people on the right side of the road are mostly satisfied (they want to live on the right side).
The villagers' preferences are given in a binary string s:<br>
s[j] = 0: The resident of house j wants to live on the left side.<br>
s[j] = 1: The resident of house j wants to live on the right side.<br>
We want to find an optimal l or r such that at least half of the people on each side of the road are satisfied with their placement.<br>
<h3>Problem Constraints</h3>
For each test case:<br>
You are given a string s of length n consisting of 0s and 1s.
You need to decide where the road should be built, satisfying the condition that for any group of x residents on one side, at least half should prefer living on that side.<br>
<h3>Approach Explanation</h3>
<h3>Left Condition</h3>
For any possible road position l (meaning the road will be placed after house l):

Houses 1 to l will be on the left side of the road.
For the left side to be satisfied, at least half of these l houses should prefer living on the left.
To understand the left condition, let's use the prefix sum array pref[]:

pref[i] stores the total number of 1s (people who prefer the right) from the start up to house i.<br>
The Formula:
The left condition is:<br>

(
𝑙
−
𝑝
𝑟
𝑒
𝑓
[
𝑙
]
)
×
2
≥
𝑙
(l−pref[l])×2≥l
<br>
Here's what this formula is saying:

pref[l] is the number of people who prefer the right side among the first l houses.
So, l - pref[l] is the number of people who prefer the left side among the first l houses (because l is the total number of houses, and pref[l] is the number of people who prefer right).
We need at least half of the l people to prefer the left side. To check if this condition is true, we multiply l - pref[l] by 2 (which checks if the number of left-preferring people is at least half of l).
In simple terms, (l - pref[l]) * 2 >= l checks if there are enough people on the left side who want to live on the left.

<h3> Right Condition </h3>
For the right side of the road, we need to ensure that after position l, at least half of the people on the right are satisfied.

Houses from l + 1 to n will be on the right side.
For the right side to be satisfied, at least half of these houses should prefer living on the right side.<br>
The Formula:
The right condition is:<br>

(
𝑝
𝑟
𝑒
𝑓
[
𝑛
]
−
𝑝
𝑟
𝑒
𝑓
[
𝑙
]
)
×
2
≥
(
𝑛
−
𝑙
)
(pref[n]−pref[l])×2≥(n−l) <br>
Here’s what this formula is saying:<br>

pref[n] is the total number of people who prefer the right side in the whole village.
pref[l] is the number of people who prefer the right side among the first l houses.
So, pref[n] - pref[l] gives the number of people who prefer the right side among the houses from l + 1 to n.
We need to ensure that at least half of the n - l people (the people on the right side of the road) want to live on the right. To check this condition, we multiply pref[n] - pref[l] by 2 (which checks if the number of right-preferring people is at least half of n - l).
In simple terms, (pref[n] - pref[l]) * 2 >= (n - l) checks if there are enough people on the right side who want to live on the right.

<h3> The First Valid Position</h3>
The algorithm starts from the middle of the village and checks both directions (left and right) for valid road positions. The first position l or r that satisfies both the left and right conditions is the position where the road should be placed.

l-pref[l] counts the number of 0s on the left, ensuring that half the people on the left are satisfied.
pref[n] - pref[l] counts the number of 1s on the right, ensuring that half the people on the right are satisfied.
<h3>Example</h3>
Let’s take the string s = "101" (first test case from the example). We have:

n = 3 (3 houses),
s = "101".
Prefix Sum Calculation:
pref[1] = 1 (one person wants the right),
pref[2] = 1 (no new person wants the right),
pref[3] = 2 (one more person wants the right).
So, pref = [0, 1, 1, 2].

Checking Possible Road Positions:
Try placing the road after house 2 (l = 2):
On the left: 1 out of 2 want to live on the left (satisfied).
On the right: 1 out of 1 wants to live on the right (satisfied).
So, the optimal road position is after house 2.<br>
This approach is repeated for each test case, checking each possible position l and r starting from the middle of the village.
