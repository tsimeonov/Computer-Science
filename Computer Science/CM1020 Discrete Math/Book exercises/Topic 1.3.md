1. Use truth tables to verify these equivalences

a) p ∧ T ≡ p
b) p ∨ F ≡ p
c) p ∧ F ≡ F
d) p ∨ T ≡ T
e) p ∨ p ≡ p
f) p ∧ p ≡ p

<details>
  <summary>Solution</summary>

a) p ∧ T ≡ p

|  p  |  T  | p ∧ T |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  F  |  T  |   F   |

its correct

b) p ∨ F ≡ p

|  p  |  F  | p ∨ F |
| :-: | :-: | :---: |
|  T  |  F  |   T   |
|  F  |  F  |   F   |

c) p ∧ F ≡ F

|  p  |  F  | p ∧ F |
| :-: | :-: | :---: |
|  T  |  F  |   F   |
|  F  |  F  |   F   |

they are equivalent

d) p ∨ T ≡ T

|  p  |  T  | p ∨ T |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  F  |  T  |   T   |

they are equivalent

e) p ∨ p ≡ p

|  p  | p ∨ p |
| :-: | :---: |
|  T  |   T   |
|  F  |   F   |

they are equivalent

f) p ∧ p ≡ p

|  p  | p ∧ p |
| :-: | :---: |
|  T  |   T   |
|  F  |   F   |

they are equivalent

</details>

---

2. Show that ¬(¬p) and p are logically equivalent.

<details>
  <summary>Solution</summary>

|  p  | ¬p  | ¬(¬p) |
| :-: | :-: | :---: |
|  T  |  F  |   T   |
|  F  |  T  |   F   |

</details>

---

3. Use truth tables to verify the commutative laws
   a) p ∨ q ≡ q ∨ p
   b) p ∧ q ≡ q ∧ p

<details>
  <summary>Solution</summary>

a) p ∨ q ≡ q ∨ p

|  p  |  q  | p ∨ q | q ∨ p |
| :-: | :-: | :---: | :---: |
|  T  |  T  |   T   |   T   |
|  T  |  F  |   T   |   T   |
|  F  |  T  |   T   |   T   |
|  F  |  F  |   F   |   F   |

they are equivalent

b) p ∧ q ≡ q ∧ p

|  p  |  q  | p ∧ q | q ∧ p |
| :-: | :-: | :---: | :---: |
|  T  |  T  |   T   |   T   |
|  T  |  F  |   F   |   F   |
|  F  |  T  |   F   |   F   |
|  F  |  F  |   F   |   F   |

</details>

---

4. Use truth tables to verify the associative laws

a) (p ∨ q) ∨ r ≡ p ∨ (q ∨ r)
b) (p ∧ q) ∧ r ≡ p ∧ (q ∧ r)

<details>
  <summary>Solution</summary>

a) (p ∨ q) ∨ r ≡ p ∨ (q ∨ r)

|  p  |  q  |  r  | p ∨ q | (p ∨ q) ∨ r | (q ∨ r) | p ∨ (q ∨ r) | (p ∨ q) ∨ r ≡ p ∨ (q ∨ r) |
| :-: | :-: | :-: | :---: | :---------: | :-----: | :---------: | :-----------------------: |
|  T  |  T  |  T  |   T   |      T      |    T    |      T      |            yes            |
|  T  |  T  |  F  |   T   |      T      |    T    |      T      |            yes            |
|  T  |  F  |  T  |   T   |      T      |    T    |      T      |            yes            |
|  T  |  F  |  F  |   T   |      T      |    F    |      T      |            yes            |
|  F  |  T  |  T  |   T   |      T      |    T    |      T      |            yes            |
|  F  |  T  |  F  |   T   |      T      |    T    |      T      |            yes            |
|  F  |  F  |  T  |   F   |      T      |    T    |      T      |            yes            |
|  F  |  F  |  F  |   F   |      F      |    F    |      F      |            yes            |

b) (p ∧ q) ∧ r ≡ p ∧ (q ∧ r)

|  p  |  q  |  r  | p ∧ q | (p ∧ q) ∧ r | (q ∧ r) | p ∧ (q ∧ r) | (p ∧ q) ∧ r ≡ p ∧ (q ∧ r) |
| :-: | :-: | :-: | :---: | :---------: | :-----: | :---------: | :-----------------------: |
|  T  |  T  |  T  |   T   |      T      |    T    |      T      |            yes            |
|  T  |  T  |  F  |   T   |      F      |    F    |      F      |            yes            |
|  T  |  F  |  T  |   F   |      F      |    F    |      F      |            yes            |
|  T  |  F  |  F  |   F   |      F      |    F    |      F      |            yes            |
|  F  |  T  |  T  |   F   |      F      |    T    |      F      |            yes            |
|  F  |  T  |  F  |   F   |      F      |    F    |      F      |            yes            |
|  F  |  F  |  T  |   F   |      F      |    F    |      F      |            yes            |
|  F  |  F  |  F  |   F   |      F      |    F    |      F      |            yes            |

</details>

---

5. Use a truth table to verify the distributive law

p ∧ (q ∨ r) ≡ (p ∧ q) ∨ (p ∧ r)

<details>
  <summary>Solution</summary>

p ∧ (q ∨ r) ≡ (p ∧ q) ∨ (p ∧ r)

|  p  |  q  |  r  | (q ∨ r) | p ∧ (q ∨ r) | (p ∧ q) | (p ∧ r) | (p ∧ q) ∨ (p ∧ r) |
| :-: | :-: | :-: | :-----: | :---------: | :-----: | :-----: | :---------------: |
|  T  |  T  |  T  |    T    |      T      |    T    |    T    |         T         |
|  T  |  T  |  F  |    T    |      T      |    T    |    F    |         T         |
|  T  |  F  |  T  |    T    |      T      |    F    |    T    |         T         |
|  T  |  F  |  F  |    F    |      F      |    F    |    F    |         F         |
|  F  |  T  |  T  |    T    |      F      |    F    |    F    |         F         |
|  F  |  T  |  F  |    T    |      F      |    F    |    F    |         F         |
|  F  |  F  |  T  |    T    |      F      |    F    |    F    |         F         |
|  F  |  F  |  F  |    F    |      F      |    F    |    F    |         F         |

</details>

---

6. Use a truth table to verify the first De Morgan law

¬(p ∧ q) ≡ ¬p ∨ ¬q

<details>
  <summary>Solution</summary>

¬(p ∧ q) ≡ ¬p ∨ ¬q

|  p  |  q  | ¬p  | ¬q  | (p ∧ q) | ¬(p ∧ q) | ¬p ∨ ¬q |
| :-: | :-: | :-: | :-: | :-----: | :------: | :-----: |
|  T  |  T  |  F  |  F  |    T    |    F     |    F    |
|  T  |  F  |  F  |  T  |    F    |    T     |    T    |
|  F  |  T  |  T  |  F  |    F    |    T     |    T    |
|  F  |  F  |  T  |  T  |    F    |    T     |    T    |

</details>

---

7. Use De Morgan’s laws to find the negation of each of the following statements.

a) Jan is rich and happy.
b) Carlos will bicycle or run tomorrow.
c) Mei walks or takes the bus to class.
d) Ibrahim is smart and hard working.

<details>
  <summary>Solution</summary>

a) Jan is not rich or not happy
b) Carlos will not bicycle and not run tommorrow
c) Mei doesn't walk and is not taking the bus to class
d) Ibrahim is not smart or not working hard

</details>

---

8. Use De Morgan’s laws to find the negation of each of the following statements.

a) Kwame will take a job in industry or go to graduate school.
b) Yoshiko knows Java and calculus.
c) James is young and strong.
d) Rita will move to Oregon or Washington.

<details>
  <summary>Solution</summary>

a) Kwame will not take a job in industry AND not go to graduate school
b) Yoshiko doesnt know Java OR she doesnt know calculus.
c) James is not young OR he is not too strong.
d) Rita will not move to Oregon AND will not move to Washington.

</details>

---

9. For each of these compound propositions, use the conditional-disjunction equivalence (Example 3) to find an equivalent compound proposition that does not involve conditionals.

a) p → ¬q
b) (p → q) → r
c) (¬q → p) → (p → ¬q)

The conditional-disjunction equivalence states that any conditional statement P -> Q is logically equivalent to ¬P V ¬Q

<details>
  <summary>Solution</summary>

a) ¬p V ¬q
b) ¬(¬p V q) V r
c) ¬(q V p) V (¬p V ¬q)

</details>

---

10. For each of these compound propositions, use the conditional-disjunction equivalence (Example 3) to find an equivalent compound proposition that does not involve conditionals.

a) ¬p → ¬q
b) (p ∨ q) → ¬p
c) (p → ¬q) → (¬p → q)

<details>
  <summary>Solution</summary>

a) p V ¬q
b) (¬p ∧ ¬q) V ¬p
c) step 1: (¬p V ¬q) → (¬p → q)
c) step 2: (¬p V ¬q) → (¬(¬p) → q), which simplifies to (p V q)
c) step 3: (¬p V ¬q) → (p V q)
c) step 4: ¬(¬p V ¬q) -> (p V q)
c) step 5: (p ∧ q) V (p V q)

</details>

---

11. Show that each of these conditional statements is a tautology by using truth tables.

a) (p ∧ q) → p
b) p → (p ∨ q)
c) ¬p → (p → q)
d) (p ∧ q) → (p → q)
e) ¬(p → q) → p
f) ¬(p → q) → ¬q

<details>
  <summary>Solution</summary>

a) (p ∧ q) → p

|  p  |  q  | p ∧ q | (p ∧ q) → p |
| :-: | :-: | :---: | :---------: |
|  T  |  T  |   T   |      T      |
|  T  |  F  |   F   |      T      |
|  F  |  T  |   F   |      T      |
|  F  |  F  |   F   |      T      |

b) p → (p ∨ q)

|  p  |  q  | p ∨ q | p → (p ∨ q) |
| :-: | :-: | :---: | :---------: |
|  T  |  T  |   T   |      T      |
|  T  |  F  |   T   |      T      |
|  F  |  T  |   T   |      T      |
|  F  |  F  |   F   |      T      |

Because every value in the final column is T, you have successfully proven that p → (p ∨ q) is a tautology.

c) ¬p → (p → q)

|  p  |  q  | ¬p  | p → q | ¬p → (p → q) |
| :-: | :-: | :-: | :---: | :----------: |
|  T  |  T  |  F  |   T   |      T       |
|  T  |  F  |  F  |   F   |      T       |
|  F  |  T  |  T  |   T   |      T       |
|  F  |  F  |  T  |   T   |      T       |

d) (p ∧ q) → (p → q)

|  p  |  q  | p ∧ q | p → q | (p ∧ q) → (p → q) |
| :-: | :-: | :---: | :---: | :---------------: |
|  T  |  T  |   T   |   T   |         T         |
|  T  |  F  |   F   |   F   |         T         |
|  F  |  T  |   F   |   T   |         T         |
|  F  |  F  |   F   |   T   |         T         |

e) ¬(p → q) → p

|  p  |  q  | ¬(p → q) | p → q | ¬(p → q) → p |
| :-: | :-: | :------: | :---: | :----------: |
|  T  |  T  |    F     |   T   |      T       |
|  T  |  F  |    T     |   F   |      T       |
|  F  |  T  |    F     |   T   |      T       |
|  F  |  F  |    F     |   T   |      T       |

f) ¬(p → q) → ¬q

|  p  |  q  | ¬q  | p → q | ¬(p → q) | ¬(p → q) → ¬q |
| :-: | :-: | :-: | :---: | :------: | :-----------: |
|  T  |  T  |  F  |   T   |    F     |       T       |
|  T  |  F  |  T  |   F   |    T     |       T       |
|  F  |  T  |  F  |   T   |    F     |       T       |
|  F  |  F  |  T  |   T   |    F     |       T       |

</details>

---

12. Show that each of these conditional statements is a tautology by using truth tables.

a) [¬p ∧ (p ∨ q)] → q
b) [(p → q) ∧ (q → r)] → (p → r)
c) [p ∧ (p → q)] → q
d) [(p ∨ q) ∧ (p → r) ∧ (q → r)] → r

<details>
  <summary>Solution</summary>

a) [¬p ∧ (p ∨ q)] → q

|  p  |  q  | ¬p  | p ∨ q | [¬p ∧ (p ∨ q)] | [¬p ∧ (p ∨ q)] → q |
| :-: | :-: | :-: | :---: | :------------: | :----------------: |
|  T  |  T  |  F  |   T   |       F        |         T          |
|  T  |  F  |  F  |   T   |       F        |         T          |
|  F  |  T  |  T  |   T   |       T        |         T          |
|  F  |  F  |  T  |   F   |       F        |         T          |

b) [(p → q) ∧ (q → r)] → (p → r)

|  p  |  q  |  r  | p → q | q → r | p → r | [(p → q) ∧ (q → r)] | [(p → q) ∧ (q → r)] → (p → r) |
| :-: | :-: | :-: | :---: | :---: | :---: | :-----------------: | :---------------------------: |
|  T  |  T  |  T  |   T   |   T   |   T   |          T          |               T               |
|  T  |  T  |  F  |   T   |   F   |   F   |          F          |               T               |
|  T  |  F  |  T  |   F   |   T   |   T   |          F          |               T               |
|  T  |  F  |  F  |   F   |   T   |   F   |          F          |               T               |
|  F  |  T  |  T  |   T   |   T   |   T   |          T          |               T               |
|  F  |  T  |  F  |   T   |   F   |   T   |          F          |               T               |
|  F  |  F  |  T  |   T   |   T   |   T   |          T          |               T               |
|  F  |  F  |  F  |   T   |   T   |   T   |          T          |               T               |

c) [p ∧ (p → q)] → q

|  p  |  q  | p → q | [p ∧ (p → q)] | [p ∧ (p → q)] → q |
| :-: | :-: | :---: | :-----------: | :---------------: |
|  T  |  T  |   T   |       T       |         T         |
|  T  |  F  |   F   |       F       |         T         |
|  F  |  T  |   T   |       F       |         T         |
|  F  |  F  |   T   |       F       |         T         |

d) [(p ∨ q) ∧ (p → r) ∧ (q → r)] → r

|  p  |  q  |  r  | p ∨ q | p → r | q → r | [(p ∨ q) ∧ (p → r) ∧ (q → r)] | [(p ∨ q) ∧ (p → r) ∧ (q → r)] → r |
| :-: | :-: | :-: | :---: | :---: | :---: | :---------------------------: | :-------------------------------: |
|  T  |  T  |  T  |   T   |   T   |   T   |               T               |                 T                 |
|  T  |  T  |  F  |   T   |   F   |   F   |               F               |                 T                 |
|  T  |  F  |  T  |   T   |   T   |   T   |               T               |                 T                 |
|  T  |  F  |  F  |   T   |   F   |   T   |               F               |                 T                 |
|  F  |  T  |  T  |   T   |   T   |   T   |               T               |                 T                 |
|  F  |  T  |  F  |   T   |   T   |   F   |               F               |                 T                 |
|  F  |  F  |  T  |   F   |   T   |   T   |               F               |                 T                 |
|  F  |  F  |  F  |   F   |   T   |   T   |               T               |                 T                 |

</details>

---

13. Show that each conditional statement in Exercise 11 is a tautology using the fact that a conditional statement is false exactly when the hypothesis is true and the conclusion is false. (Do not use truth tables.)

<details>
  <summary>Solution</summary>

</details>

---

14. Show that each conditional statement in Exercise 12 is a tautology using the fact that a conditional statement is false exactly when the hypothesis is true and the conclusion is false. (Do not use truth tables.)

<details>
  <summary>Solution</summary>

</details>

---

15. Show that each conditional statement in Exercise 11 is a tautology by applying a chain of logical identities as in Example 8. (Do not use truth tables.)

<details>
  <summary>Solution</summary>

</details>

---
