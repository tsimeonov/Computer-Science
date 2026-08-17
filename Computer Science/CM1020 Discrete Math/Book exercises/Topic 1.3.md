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
