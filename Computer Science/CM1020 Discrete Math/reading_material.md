### Week 1

1. The Definition of a Set

<details>
    <summary>1.1 Introduction</summary>

<br/>

A set is a fundamental concept in mathematics and computer science. It’s a collection of distinct objects, considered as an object in its own right. Sets are used to group related items together and to perform operations on these groups

</details>

<br/>

<details>
     <summary>1.2 Definition of a set</summary>

<br/>

Definition 1. A set is a collection of objects. The objects in a set are called its elements or members. The elements in a set can be any types of objects, including sets! The members of a set do not even have to be of the same type. For example, although it may not have any meaningful application, a set can consist of numbers and names.

Definition 2. A set is an unordered collection of distinct elements.
For example: The set of primary colours can be written as {red, blue, yellow}
Elements of a set are also called members.

</details>

<br/>

1.3 Notation

Sets are usually denoted by capital letters, and their elements are listed within curly braces. For example the set A containing elements 1, 2, and 3 can be written as

A = {1,2,3}A

<details>
     <summary>1.3.1 Element or member of set (∈)</summary>

<br/>

The symbol ∈ denotes membership. If a is an element of a set A, we write a ∈ A

For example:

The set

A = {1,2,3} is a set containing the elements 1, 2 and 3.

We write:

1 ∈ A means 1 is an element of A

2 ∈ A means 2 is an element of A

3 ∈ A means 3 is an element of A

We refer to not a member of a set using the symbol ∉. If a is not an element of a set A, we write a ∉ A

For example: let A be a set with A = {1,2,3}.
Clearly 4 is not an element of A. We write 4 ∉ A.

</details>

<br/>

<details>
     <summary>1.3.2 Special sets of numbers</summary>

We designate these notations for some special sets of numbers:

N = the set of natural numbers (positive integers)

Z = the set of integers

Q = the set of rational numbers

R = the set of real numbers

<br/>

</details>

<br/>

<details>
     <summary>1.3.3. Empty set (∅)</summary>

The empty set, also known as the `null set`, is a fundamental concept in set theory and mathematics.
It is the set that contains no elements.

`Definition 3`. The empty set is a set with no elements. It is denoted by ∅ or {}.

In mathematical notation ∅ = {}

<br/>

</details>

<br/>

<details>
     <summary>1.3.4 Finite and infinite sets</summary>

`Finite set`: A set with a limited number of elements.

Example: {2,4,6}

Infinite set: A set with an unlimited number of elements.

Example: The set of natural numbers N = {1,2,3,…}

</details>

<br/>

Read the following extracts from the Koshy textbook. These pages will cover the following topics: the definition of a set; elements of a set; cardinality of a set; listing method; set builder method; subsets of a set; and powersets.

Koshy, T. Discrete Mathematics with Applications. (Burlington: Elsevier Academic Press, 2004),
pp. 67–70 and pp.72–75.

Once you’ve finished reading, attempt the following questions from Exercises 2.1 on pp.76: 1–27, 30–36 and 41–44.

---

### Week 2

2. Laws of sets: Commutative, associative and distributives

2.1 Introduction

In set theory, several fundamental laws govern how sets interact with each other. These laws help in understanding and manipulating sets. Here’s a detailed overview of each law, with examples.

2.2 Commutative laws

The commutative laws state that the order in which two sets are combined does not affect the result.

<details>
     <summary>2.2.1 Union</summary>

Let A and B be two sets, then:

A ∪ B = B ∪ A

A ∪ B = B ∪ A

Example:

If A={1,2} and B={2,3}, then

A ∪ B = {1,2,3} and B ∪ A = {1,2,3}

Both sets are equal.

</details>

<br/>

<details>
     <summary>2.2.2 Intersection</summary>

Let A and B be two sets, then

A ∩ B = B ∩ A

A ∩ B = B ∩ A

Example:

If A = {1,2} and B = {2,3}, then

A ∩ B = {2} and B ∩ A = {2}

Both sets are equal.

</details>

<br/>

2.3 Associative laws

The associative laws state that the grouping of sets does not affect the result when performing union or intersection.

<details>
     <summary>2.3.1 Union</summary>

Let A, B and C be three sets, then

(A ∪ B) ∪ C = A ∪ (B ∪ C)

Example:

If A={1}, B={2}, and C={3} , then

(A ∪ B) ∪ C = {1,2,3} and A ∪ (B ∪ C) = {1,2,3}

Both sets are equal.

</details>

<br/>

<details>
     <summary>2.3.2 Intersection</summary>

Let A, B and C be three sets, then

A ∩ B ∩ C = A ∩ (B ∩ C)

Example:

If A={1,2,3}, B={2,3,4}, and C = {3,4,5}, then

(A ∩ B) ∩ C = {3}and A ∩ (B ∩ C) = {3}.

Both sets are equal.

</details>

<br/>

2.4 Distributive laws

The distributive laws describe how union and intersection distribute over each other.

<details>
     <summary>2.4.1 Union over intersection</summary>

Let A, B and C be three sets, then

A ∪ (B ∩ C) = (A ∪ B) ∩ (A ∪ C)

Example:

If A={1,2} , B={2,3} , and C={2,4} , then

A ∪ (B ∩ C) = {1,2} and (A ∪ B) ∩ (A ∪ C) = {1,2}

Both sets are equal.

</details>

<br/>

<details>
     <summary>2.4.2 Intersection over union</summary>

Let A, B and C be three sets, then

A ∩ (B ∪ C) = (A ∩ B) ∪ (A ∩ C)

Example:

If A = {1,2,3} , B = {2,3,4} , and C = {3,4,5} , then

A ∩ (B ∪ C) = {2,3} and (A ∩ B) ∪ (A ∩ C) = {2,3}

Both sets are equal.

</details>

<br/>

2.5 Identity laws

The identity laws state that combining a set with the universal set or the empty set yields the set itself.

<br/>

<details>
     <summary>2.5.1 Union with empty set</summary>

Let A be a set, then

A ∪ ∅ = A

Example: If

A = {1,2} , then A ∪ ∅ = {1,2} = A

</details>

<br/>

<details>
     <summary>2.5.2 Intersection with universal set:</summary>

Let A be a set, then

A ∩ U = A

Example: If A = {1,2} and U is the universal set, then A ∩ U = {1,2} = A

</details>

<br/>

2.6 Complement laws

The complement laws describe the relationship between a set and its complement. Please note that the notation Ac and A‾ both represent the same concept in set theory and logic:

<br/>

<details>
     <summary>2.6.1 Union with complement:</summary>

Let A be a set and U the universal set, then

A ∪ Ac = U

Example:

If U = {1,2,3} and A = {1,2} , then

Ac={3} and A ∪ Ac = {1,2,3} = U

</details>

<br/>

<details>
     <summary>2.6.2 Intersection with complement:</summary>

Let A be a set and U the universal set, then

A ∩ $A^c$ = ∅

Example:

If U = {1,2,3} and A = {1,2} , then

$A^c$ = {3} and A ∩ $A^c$ = ∅

</details>

<br/>

2.7 Absorption laws

The absorption laws simplify expressions by showing how combining a set with another set and their union or intersection affects the result.

<br/>

<details>
     <summary>2.7.1 Union</summary>

Let A and B be two sets, then

A ∪ (A ∩ B) = A

Example:

If A = {1,2} and B={2,3} , then

A ∩ B = {2} and A ∪ (A ∩ B) = {1,2} = A.

</details>

<br/>

<details>
     <summary>2.7.2 Intersection</summary>

Let A and B be two sets, then

A ∩ (A ∪ B) = A

Example:

If A = {1,2} and B = {2,3} , then

A ∪ B = {1,2,3} and A ∩ (A ∪ B) = {1,2} = A.

</details>

<br/>

<details>
     <summary>2.8 Double negation laws</summary>

The double negation law states that taking the complement of a complement returns the original set.

Let A be a set and U the universal set, then

($A^c)^c$ = A

Example:

If U = {1,2,3} and A = {1,2} , then

$A^c$ = {3} and ($A^c)^c$ = {1,2} = A.

</details>

<br/>

2.9 De Morgan's laws

De Morgan’s laws relate the complement of the union of sets to the intersection of their complements, and vice versa.

<br/>

<details>
     <summary>2.9.1 Complement of union:</summary>

The complement of the union of two sets is equal to the intersection of their complements.

Let A,B, and C be three sets, then

$(A ∪ B)^c$ = $A^c$ ∩ $B^c$

Example:

if U = {1,2,3,4}, A = {1,2} and B = {2,3}, then

A ∪ B = {1,2,3}, $(A ∪ B)^c$ = {4}, and $A^c$ ∩ $B^c$ = {4}

Both sets contains the same elements.

</details>

<br/>

<details>
     <summary>2.9.2 Complement of intersection:</summary>

Let a, B and C be three sets, then

$(A ∩ B)^c$ = $A^c$ ∪ $B^c$

Example:

if U = {1,2,3,4}, A = {1,2} and B = {2,3}, then

A ∩ B = {1,2,3}, $(A ∩ B)^c$ = {4}, and $A^c$ ∪ $B^c$ = {4}

Both sets contains the same elements.

</details>

<br/>

Read the following pages to consolidate your knowledge of the following topics: set operations; the complement of a set; symmetric difference; membership tables; De Morgan's laws; and set properties.

Koshy, pp.78–86.

Please also complete the following exercises on:

- pp.93: questions 5, 6, 7 , 8, 11, 12, 14, 17, 27, 34, 35, 39 and 42

---

### Week 3

Read the following extracts to consolidate your knowledge of these topics: the definition of a function; the domain and co-domain; the range; injection (one-to-one); surjection (onto); and plotting functions.

Koshy, pp.117–120, 122–123, 125 and 137–140.

Once you’ve finished the reading, please attempt the following exercises:

- pp.123–124, exercises 1–4 and 25, 26, 41, 43.

---

### Week 4

Read the following extract to consolidate your knowledge on these topics: function composition; bijections; and the floor and ceiling functions.

Koshy, pp.125–128 and 150–153.

Once you’ve finished the reading, attempt the following exercises:

- pp.134 exercises 1–3, 5, 6, 10, 11.

- pp.155 exercises 1–8, 13, 15, 16.

---

### Week 5

Read the following pages to consolidate your knowledge of these topics: the definition of a proposition; truth tables and truth set; and compound propositions.

Rosen, K.H. Discrete Mathematics and its Applications. (New York: McGraw Hill, 2012) 7th Edition [ISBN 9780073383095]
pp.1–6
.

Once you’ve finished the readings, please attempt the following exercises from Rosen (2012):

- pp.12 exercises 1–4

- pp.13 exercises 5, 6, 8 (a, b, d, e, g and h), 9 (a, b, c and h)

- pp. 15 exercises 34 and 36.

You should also read the following:

Koshy, pp.2–9.

Once you’ve finished these pages, please attempt the following exercises from the Koshy (2004):

- pp.17 exercises 3, 6, 9, 16, 19, 23, 25 and 31.

---

### Week 6

Consolidate your understanding by reading the following pages on these topics: logical implication; converse, contrapositive and inverse; equivalence; the laws of propositional logic (including De Morgan's laws); and the precedence of logical operators.

Rosen, pp.6–11 and pp 25–31 .

Once you’ve finished the readings, please attempt the following exercises from the same book (Rosen 2012):

- pp.14: exercises 22–23,

- pp.13: exercises 10, 11, 12 and 14,

- pp.15: exercises 32, 33, 35 and 37,

- pp.35: exercises 9, 30, 31 and 34.

Koshy,

- pp.9–12, pp.15–16 and pp.20–25 .

Once you have finished the reading, please attempt the following exercises from the same book (Koshy 2004):

- p.19 exercises 54–56,

- p.29 exercises 3–7, 11 and 35–37.

---

### Week 7

Read the following pages to consolidate your knowledge of the following topics: the definition of predicates; quantifiers; logical operators; nested quantifiers.

Rosen,

- pp.36–45 and pp.57–62.

Once you’ve finished the readings, please attempt the following exercises from Rosen (2012):

- pp.53 exercises 1, 4, 5 , 7, 16,

- pp.54 exercises 21, 25 and 27,

- pp.56 exercises 43, 45, And 53,

- pp.64 exercises 1, 2 and 3.

Koshy,

- pp.32–35.

Once you’ve finished the reading, please attempt the following exercises from Koshy (2004):

- pp.36–37 exercises 1, 2, 3, 21, 22.

---

### Week 8

Read the following pages to consolidate your knowledge of the following topics: De Morgan’s laws; rules of inference; rules of inference with quantifiers.

- Rosen, pp.46–47 and pp.69–79.

Once you’ve finished the readings, please attempt the following exercises from Rosen (2012):

- pp.55 exercises 32, 33 and 34

- pp.79 exercises 2, 3, 12, 13 and 16

- pp.80 exercises 23, 29 and 30.

Koshy, pp.43–44 .

Levin, pp.6, 202–203 and 205–209 .

(This work is licensed under the
Creative Commons Attribution-Share Alike 4.0 International License
.)

Please also complete the following exercises from Levin (2019):

- pp.209–211, exercises 9, 12, 13, 14 and 15.

---
