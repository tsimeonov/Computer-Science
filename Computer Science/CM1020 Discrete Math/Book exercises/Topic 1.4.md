1. Let P(x) denote the statement “x ≤ 4.” What are these truth values?

   a) P(0)
   b) P(4)
   c) P(6)

<details>
  <summary>Solution</summary>

a) To find the truth value of P(0), you simply substitute the 0 in for the x in the statement:

Statement: 0 ≤ 4 (Zero is less than or equal to 4) Since 0 is indeed less than 4, this statement is True.

b) P(4), 4 ≤ 4, the statement is true

c) P(6), 6 ≤ 4, the statement is false

</details>

---

2. Let P(x) be the statement “The word x contains the letter a.” What are these truth values?

a) P(orange)
b) P(lemon)
c) P(true)
d) P(false)

<details>
  <summary>Solution</summary>

a) P(orange) // True
b) P(lemon) // False
c) P(true) // False
d) P(false) // True

</details>

---

3. Let Q(x, y) denote the statement “x is the capital of y.”

What are these truth values?

a) Q(Denver, Colorado)
b) Q(Detroit, Michigan)
c) Q(Massachusetts, Boston)
d) Q(New York, New York)

<details>
  <summary>Solution</summary>

a) Q(Denver, Colorado) // True
b) Q(Detroit, Michigan) // True
c) Q(Massachusetts, Boston) // True
d) Q(New York, New York) // False

</details>

---

4. State the value of x after the statement if P(x) then x := 1 is executed, where P(x) is the statement “x > 1,” if the
   value of x when this statement is reached is:

a) x = 0
b) x = 1
c) x = 2

   <details>
     <summary>Solution</summary>

a)
Step 1: Evaluate the condition:
The program checks the statement P(0)m which is 0 > 1
Step 2: Determine truth value:
Since 0 is not greated htan 1, P(0) is false

b) 1 > 1 is false, so the command is skipped. The final value x = 1

c) 2 > 1 is true.
Becaus the condition is True, the program does executes x := 1 command.
Therefore, the original value of 2 gets overwritten and the final value is x = 1

</details>

---

5. Let P(x) be the statement “x spends more than five hours every weekday in class,” where the domain for x consists of all students.
   Express each of these quantifications in English.

a) ∃x P(x)
b) ∀x P(x)
c) ∃x ¬P(x)
d) ∀x ¬P(x)

<details>
     <summary>Solution</summary>

a)
The existential quantifier ∃x translates to "There exists at least one x" or "Some x".
When combined with the domain (students) and the statement P(x), it translates to:
"There is a student who spends more than five hours every weekday in class"

b) The universal quantifier ∀x translates to "For all x," "For every x," or "All x."
Every student spends more than five hours every weekday in class

c) Some students do not spend more than five hours every weekday in class

d) Every student does not spend more than five hours every weekday in class

</details>

---

6. Let N(x) be the statement “x has visited North Dakota,”
   where the domain consists of the students in your school.
   Express each of these quantifications in English.

a) ∃xN(x)
b) ∀xN(x)
c) ¬∃xN(x)
d) ∃x¬N(x)
e) ¬∀xN(x)
f) ∀x¬N(x)

<details>
     <summary>Solution</summary>

a) ∃xN(x)
There is a student who has visited North Dakota

b) ∀xN(x)
All students have visited North Dakota

c) ¬∃xN(x)
Not even one student has visited North Dakota

d) ∃x¬N(x)
There is a student who has not visited North Dakota

e) ¬∀xN(x)
It is not the case that all students have visited North Dakota

f) ∀x¬N(x)
NO students have visited North Dakota

</details>

---

7. Translate these statements into English, where C(x) is “x is a comedian” and F(x) is “x is funny”
   and the domain consists of all people.

a) ∀x(C(x) → F(x))
b) ∀x(C(x) ∧ F(x))
c) ∃x(C(x) → F(x))
d) ∃x(C(x) ∧ F(x))

<details>
     <summary>Solution</summary>

a) ∀x(C(x) → F(x))
Every comedian is funny

b) ∀x(C(x) ∧ F(x))
Everybody is a comedian and is funny

c) ∃x(C(x) → F(x))
There is at least one person who, if they are a comedian, then they ar funny

d) ∃x(C(x) ∧ F(x))
There is at least one who is comedian and funny

</details>

---

8. Translate these statements into English, where R(x) is “x is a rabbit” and H(x) is “x hops”
   and the domain consist of all animals.

a) ∀x(R(x) → H(x))
b) ∀x(R(x) ∧ H(x))
c) ∃x(R(x) → H(x))
d) ∃x(R(x) ∧ H(x))

<details>
     <summary>Solution</summary>

a) ∀x(R(x) → H(x))
Every rabit hop

b) ∀x(R(x) ∧ H(x))
Every animal is a rabbit and hops

c) ∃x(R(x) → H(x))
There is at least one animal thats if its a rabbit then it hops

d) ∃x(R(x) ∧ H(x))
There is at least one animal thats a rabbit and it hops

</details>

---

9. Let P(x) be the statement “x can speak Russian” and let
   Q(x) be the statement “x knows the computer language C++.” Express each of these sentences in terms of P(x),
   Q(x), quantifiers, and logical connectives. The domain for quantifiers consists of all students at your school.

a) There is a student at your school who can speak Russian and who knows C++.

b) There is a student at your school who can speak Russian but who doesn’t know C++.

c) Every student at your school either can speak Russian or knows C++.

d) No student at your school can speak Russian or knows C++.

<details>
     <summary>Solution</summary>

a) ∃x(P(x) ∧ Q(x))

b) ∃x(P(x) ∧ ¬Q(x))

c) ∀x(P(x) V Q(x))

d) ¬∃x(P(x) V Q(x))

</details>

---

10. Let:
    C(x) be the statement “x has a cat,”
    let D(x) be the statement “x has a dog,” and let
    F(x) be the statement “x has a ferret.”
    Express each of these statements in terms
    of C(x), D(x), F(x), quantifiers, and logical connectives.
    Let the domain consist of all students in your class.

a) A student in your class has a cat, a dog, and a ferret.
b) All students in your class have a cat, a dog, or a ferret.
c) Some student in your class has a cat and a ferret, but not a dog.
d) No student in your class has a cat, a dog, and a ferret.
e) For each of the three animals, cats, dogs, and ferrets,
there is a student in your class who has this animal as a pet.

<details>
     <summary>Solution</summary>

a) ∃x(C(x) ∧ D(x) ∧ F(x))
b) ∀x(C(x) V D(x) V F(x))
c) ∃x(C(x) ∧ F(x) ∧ ¬D(x))
d) ¬∃x(C(x) ∧ D(x) ∧ F(x))
e) ∃xC(x) ∧ ∃yD(y) ∧ ∃zF(z)

</details>

---

11. Let P(x) be the statement “x = x2.”
    If the domain consists of the integers, what are these truth values?

a) P(0)
b) P(1)
c) P(2)
d) P(−1)
e) ∃xP(x)
f) ∀xP(x)

<details>
     <summary>Solution</summary>

a) P(0) // 0 = 0^2 , True

b) P(1) // 1 = 1^2 , True

c) P(2) // 2 = 2^2, False

d) P(−1) // -1 = -1^2, False

e) ∃xP(x) // true

f) ∀xP(x) // false

</details>

---

12. Let Q(x) be the statement “x + 1 > 2x.” If the domain consists of all integers, what are these truth values?

a) Q(0)
b) Q(−1)
c) Q(1)
d) ∃xQ(x)
e) ∀xQ(x)
f) ∃x¬Q(x)
g) ∀x¬Q(x)

<details>
     <summary>Solution</summary>

a) Q(0) // 0 + 1 > 2^0 // 1 > 0 // True

b) Q(−1) // -1+1 > 2^(-1) // 0 > -2 // True

c) Q(1) // 1+1 > 2^1 // 2 > 2 // False

d) ∃xQ(x) // Q(x) : x + 1 > 2x // 1 > 2x-x // 1 > x (or x < 1) // True

e) ∀xQ(x) // Q(x) : x + 1 > 2x // 1 > 2x-x / 1 > x // False

f) ∃x¬Q(x)

"Can you find at least one integer that breaks the rule?"

- The rule Q(x) says: "x + 1 must be bigger than 2x."
- The negation ¬Q(x) means: "x + 1 is NOT bigger than 2x" (the rule fails).
- The symbol ∃ just means: "Can you find at least one?"

Now test an easy number like x = 1:

- Left side: 1 + 1 = 2
- Right side: 2 \* 1 = 2
- Is 2 > 2? No. The rule broke.

Because you found at least one integer (x = 1) where the rule broke, the statement ∃x¬Q(x) is True.

g) ∀x¬Q(x)

"Does EVERY single integer break the rule?"

- The rule Q(x) says: "x + 1 must be bigger than 2x."
- The negation ¬Q(x) means: "The rule breaks" (x + 1 is NOT bigger than 2x).
- The symbol ∀ means: "For ALL" or "Every single one."

So ∀x¬Q(x) is claiming: "Every integer in the universe breaks the rule."
To see if this claim is true, let's test x = 0:

- Left side: 0 + 1 = 1
- Right side: 2 \* 0 = 0
- Is 1 > 0? Yes! The rule actually works here.

Because x = 0 obeys the rule instead of breaking it, it is not true that every integer breaks the rule.
Therefore, ∀x¬Q(x) is False.

</details>

---

13. Determine the truth value of each of these statements if the domain consists of all integers.

a) ∀n(n + 1 > n)
b) ∃n(2n = 3n)
c) ∃n(n =−n)
d) ∀n(3n ≤ 4n)

<details>
     <summary>Solution</summary>

a) ∀n(n + 1 > n)

"Does EVERY single integer obey the rule"

- The rule ∀n says "n + 1 must be greater that n"
- The symbol ∀ means: "For ALL" or "Every single one."

So ∀n(n + 1 > n) is claiming: "Every integer in the universe obey the rule."
To see if this claim is true, let's test n = 1:

- Left side: 1 + 1 = 2
- Right side: 1
- Is 2 > 1, Yes the rule works here

Because 2 > 1 does ebay the rule and it's not breaking it.
Therefore, ∀n(n + 1 > n) is True.

b) ∃n(2n = 3n)

Meaning if the statement:

- The symbol ∃ means: "There exists at least one integer n"
- The condition: 2n = 3n
- The statement claims: "There is at least one integer where twise the number equals three times the number"

Evaluation:
Test n = 0

- Left side 2(0) = 0
- Right side 3(0) = 0
- Since 0 = 0, the condtion is satisfied

Because a valid integer (n = 0) exists that satisfies the equaltion, ∃n(2n = 3n) is True.

c) ∃n(n =−n)

Meaning of the statement:

- The symbol ∃ means: "There exists at least one integer n"
- The condition (n = -n)
- The statement claims: "There is at least one integer where one time the number is equal to negative number

Evaluation
Test n = 0

- Left side n(0) = 0
- Right side -n = -(0) 0
- Since 0 = 0, the candition is satisfaied and it is True

d) ∀n(3n ≤ 4n)

Meaning of the statement

- The symbol ∀ means: "For all integers n"
- The condition (3n ≤ 4n)
- The statement claims: "Three times the number is always less than or equal to four times the numer for every integer"

Evaluation
Test n = 1

- Left side 3(-1) = -3
- Right side 4(-1) = -4
- Since -3 > -4, the condition is not satisfies and the condition is False

</details>

---

14. Determine the truth value of each of these statements if the domain consists of all real numbers.

a) ∃x$(x^3 = −1)$
b) ∃x$(x^4 < x^2)$
c) ∀x$((−x)^2 = x^2)$
d) ∀x$(2x > x)$

<details>
     <summary>Solution</summary>

a) ∃x$(x^3 = −1)$

Meaning of the statement:

- The symbol ∃ means: "There exists at least one integer n"
- The condition $(x^3 = −1)$

Solve the equation algebraically:

- $(x^3 = −1)$
- Take the cube root of both sides :$x = \sqrt[3]{-1} = -1$

Check the candidate x = -1

- Is -1 an integer? Yes
- Left side: $(-1)^3 = (-1) \times (-1) \times (-1) = -1$
- Right side: -1
- Check -1 = -1, Yes

Because you can find an integer (x = -1) that satisfies the equation, the statement is True.

b) ∃x$(x^4 < x^2)$

Meaning of the statement:

- The symbol ∃ means: "There exists at least one integer n"
- The condition $(x^4 < x^2)$

Solve the equation algebraically:

- $(x^4 < x^2)$

Check the candidate x = 1

- Is 1 an integer? Yes
- Left side: $x^4$ = $1^4$ = 1
- Right side: $x^2$ = $1^2$ = 1
- Check 1 < 1, No, the statement is False

c) ∀x$((−x)^2 = x^2)$

Meaning of the statement:

- The symbol ∀ means: "For all integers x"
- The condition $((−x)^2 = x^2)$

Check the candidate x = 1

- Left side: $(-x)^2 = (-1x)^2 = 1 x^2 = x^2$
- Right side: $x^2 = x^2$
- Check 1 = 1, yes the statement is True

d) ∀x$(2x > x)$

Meaning of the statement:

- The symbol ∀ means: "For all integers x"
- The condtion: 2x > x

Check the candidate: -1

- Left side: 2(-1) = -2
- Right side: -1
- Check: -2 > -1? No, the statement is False

</details>

---

15. Determine the truth value of each of these statements if the domain for all variables consists of all integers.

a) ∀n$(n^2 ≥ 0)$
b) ∃n$(n^2 = 2)$
c) ∀n$(n^2 ≥ n)$
d) ∃n$(n^2 < 0)$

<details>
     <summary>Solution</summary>

a) ∀n$(n^2 ≥ 0)$

Meaning of the statement:

- The symbol ∀ means: "For all integers n"
- The condition: $(n^2 ≥ 0)$

- Case 1: n is positive (n > 0)
  A positive number multiplied by a positive number yields a positive result

- Case 2: n is zero (n = 0)
  Substracting zero yields $0^2 = 0$. This perfectly satisfies the "equal to" part of the ≥ 0

- Case 3: n is negative (n < 0)
  A negative number multiplied by a negative number yields a positive result (the negatives cancel out)

b) ∃n$(n^2 = 2)$

Meaning of the statement:

- The symbol ∃ means: "There exists at least one integer n"

Proof (bounding):
To prove an existential (∃) statement is true, you just need to find one single example that works.
Let's test the closest integers:

- $0^2 = 0$
- $1^2 = 1$ (and $(-1)^2 = 1$)
- $2^2 = 4$ (and $(02)^2 = 4$)

The target value, 2, falls strictly between $1^2 and 2^2$. Because there are no
whole integers between 1 and 2, it is impossible for any integers to square to exactly 2.
Conclusion: Because not integer satisfies the equation, the statement is False

c) ∀n$(n^2 ≥ n)$

Meaning of the statement:

- The symbol ∀ means: "For all integers n"

- Case 1: n is positive (n > 0)
  Since n is a positive integer, the smallest value it can be is 1.
  If n ≥ 1, multiplying both sides by n (which is positive) gives $n^2 ≥ n$

- Case 2: n is zero (n = 0)
  This also satisfies the the statement

- Case 3: n is negative (n < 0)
  Squaring a negative number yields a positive result. Because a positive number is always strictly greater than a negative number

Conclusion: Because $n^2 ≥ n$ holds true in ann three cases, the universal statement is True for all integers.

d) ∃n$(n^2 < 0)$

</details>

---
