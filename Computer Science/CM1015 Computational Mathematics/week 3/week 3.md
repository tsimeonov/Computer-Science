### Lesson 2.1: Introduction

<h5>Introduction to sequences and series:</h5>

---

`Sequence`

A sequence is a set of numbers written down in a specific order.
For example:
1,3,5,7,8 or -1,-2,-3,-4

Each number in the sequence is called a `term` of the sequence.
The number of terms in the first sequence above is five, and the number of terms in the second is four.

Sometimes we use the symbol `'...'` to indicate that the sequence continues.

All of the sequences given above have a finite number of terms. They are known as `finite sequences`. Some sequences go no for ever, and these are called `infinite sequences`. To indicate that a sequence might go on for ever we can use the '...' notation. So when we write
1,3,5,7,9 ...
it can be assumed that this sequence continues indefinitely.

---

<h5>Notation used for sequences</h5>

We use a subscript notation to refer to different terms in a sequence. For example, suppose we denote (indicate) the sequence 1,3,5,7,9,11 by x. Then the first term can be called x~1~, the second term x~2~ and so on.
That is,
x~1~ = 1, x~2~ = 3, x~3~ = 5, x~4~ = 7, and so on

---

<h5>Arithmetic progressions</h5>

A particularly simple way of forming a sequence is to calculate each new term by `adding` a fixed amount to the previous term. For example, suppose the first term is 1 and we find the subsequent terms by repeatedly adding 6. We obtain
1,7,13,19 ....
Such a sequence is called `arithmetic progression` or `arithmetic sequence`.
The fixed amount that is added each time is a constant called the `common difference`.

<h5 style="color:FireBrick;">Key points</h5>

An arithmetic progression can be written

a, a + d, a + 2d, a + 3d ....

`a` is the `first term`, `d` is the `common difference`.

Study the following pattern:

- The firs term is `a`
- The second term is a + d
- The third term is a + 2d
- The forth term is a + 3d

And so on. This lead to the following formula for the `n`th term:

`a + (n-1)d`

---

<h5>Geometric Progression</h5>

Another simple way of forming a sequence is to calculate each new term by `multiplying` the previous term by a fixed amount. For example, suppose the first term of a sequence is 2, and we find the second, third, and forth terms by repeatedly multiplying by 5. We obtain the sequence
2,10,50,250
Such a sequence is called a `geometric sequence` or `geometric progression`.
The fixed amount by which term is multiplied is called the `common ratio`

<h5 style="color:FireBrick;">Key points</h5>

A geometric progression can be written:
_a, ar, ar^2^, ar^3^_ .....
_a_ is the `first term`, _r_ is the `common ratio`

Study the following pattern:

- The first term is _a_
- The second term is _ar_
- The third term is _ar^2^_
- The fourth term is _ar^3^_

and so on. This leads us to the following formula for the n^th^ term:

The n^th^ term of a geometric progression is given by ar^n-1^

4. For n = 4: a~4~ = $\frac{1}{4}$ = 0.25

---

<h5>Infinite geometric series</h5>

An **infinite geometric series** is the sum of all terms in an **infinite geometric sequence** — where each term is multiplied by the same fixed number (called the **common ratio**).

##### Example:

If the first term is \( 1 \) and the common ratio (\( r \)) is \( \frac{1}{2} \):
$$1 + \frac{1}{2} + \frac{1}{4} + \frac{1}{8} + \frac{1}{16} + ...$$

This series goes on forever!

##### Key Points:

1. **Common Ratio** (\( r \)): The fixed number you multiply by to get each next term.
   - Example: \( r = \frac{1}{2} \).
2. **Convergence**: If \( |r| < 1 \) (|r| -> absolute value), the terms become smaller and smaller, and the series **converges** to a specific sum.
3. **Divergence**: If \( |r| \geq 1 \), the terms don't shrink, and the series grows without limit (**diverges**).

##### Formula for the Sum (if \( |r| < 1 \)):

\[
S = \frac{a}{1 - r}
\]

Where:

- \( S \) = sum of the series.
- \( a \) = first term.
- \( r \) = common ratio.

---

`Sigma notation`

Sigma notation $\sum_{}$, provides a concise and convenient way of writing long sums.
The sum 1+2+3 .... +10+11+12
can be written very concisely using the Greek letter $\sum_{}$ as

$$\sum_{k=1}^{k = 12} k$$

The $\sum_{}$ stands for sum, in this case the sum of all the values of `k` as `k` ranges through all whole numbers from 1 to 12.

---

<h5>Arithmetic series</h5>

If the terms of an arithmetic sequence are added, the result is known as an `arithmetic series`. For example, the arithmetic progression with five terms having first term 4 and common difference 5 is 4,9,14,19,24.
It is easily verified that this has sum 70. If the series has a large number of terms then finding its sum by directly adding all the terms will be laborious.
Fortunately there is a formula that enables us to find the sum of an arithmetic series.

<h5 style="color:FireBrick;">Key points</h5>

The sum of the first `n` terms of an arithmetic series with first term `a` and common difference `d` is denoted by S~n~ and give by:

S~n~ = $\frac{n}{2}$ (2a + (n - 1) d)

---

<h5>Geometric series</h5>

If the terms of a geometric sequence are added, the result is known as a `geometric series`.
For example, the geometric progression with five terms having first term 2 and common ration 3 is 2,6,18,54,162.
If hte terms are added we obtain the geometric series 2+6+18+54+162

<h5 style="color:FireBrick;">Key points</h5>

The sum of the first `n` terms of a geometric seriews with first term `a` and common ratio `r` is denoted by S~n~ and give by

S~n~ = $\frac{a(1-r^n)}{1 - r}$ provided `r` is not equal to 1

---

<h5>Infinite geometric series</h5>

When the terms of an infinite sequence are added we obtain an infinite series. It way seem strange to try to add an infinite number of terms but under some circumstances their sum is finite and can be found.
Consdider the special case of an infinite geometric series for which the common ratio `r` lies between -1 and 1.

<h5 style="color:FireBrick;">Key points</h5>

The sum of an infinite number of terms of a geomteric series is denoted by
S~∞~ = $\frac{a}{1 - r}$ provided -1 < r < 1
