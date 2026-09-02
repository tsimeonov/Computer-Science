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
