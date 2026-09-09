### The core strategy matrix

<table style="width: 100%; max-width: 600px;">
  <thead>
    <tr>
      <th style="width: 25%;">Quantifier</th>
      <th style="width: 40%;">Goal: Prove True</th>
      <th style="width: 35%;">Goal: Prove False</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>&forall;x ("For all x")</td>
      <td>Algebraic proof or proof by cases (must work for an arbitary variable)</td>
      <td>Provide one counterexample wher the condion breaks</td>
    </tr>
    <tr>
      <td>&exist;x ("There exists an x")</td>
      <td>Provide one working example that satisfies the condtion</td>
      <td>Algebraic impossibility proof (show the opposite is universally true)</td>
    </tr>
  </tbody>
</table>

1. Handling Equations ($=$)

- For $\forall x (\text{LHS} = \text{RHS})$:
  - If True: Simplify both sides using algebraic identities until you reach an identity like $0 = 0$ or $x = x$ (e.g., $(-x)^2 = x^2$). Never just test numbers.
  - If False: Pick a single value for $x$ where the sides differ (e.g., for $\forall x (x + 1 = x)$, testing $x = 0$ gives $1 \neq 0$).
- For $\exists x (\text{LHS} = \text{RHS})$:
  - If True: Solve the equation algebraically for $x$, then verify that the solution lives in your allowed domain (e.g., $x^2 = 2 \implies x = \sqrt{2} \in \mathbb{R}$).
  - If False: Solve the equation and show that every solution falls outside the domain (e.g., $x^2 = -1 \implies x = \pm i \notin \mathbb{R}$, or $x^2 = 2 \implies x = \pm\sqrt{2} \notin \mathbb{Z}$).

2. Handling Inequalities ($<, >, \le, \ge$)

- For $\forall x (\text{Inequality})$:
  - If True:
    - Standard properties: Start from a known baseline, like $x^2 \ge 0$ or $\vert{}x\vert{} \ge 0$, and perform valid inequalities operations on both sides (e.g., adding $2$ gives $x^2 + 2 \ge 2 > 1$).
    - Proof by Cases: Split the domain into logical partitions (e.g., $x > 0$, $x = 0$, $x < 0$) and show the statement holds in every case.
  - If False: Solve the inequality algebraically to find its valid range. Any value outside that valid range is an immediate counterexample (e.g., solving $2x > x$ yields $x > 0$, so $x = -1$ serves as a counterexample).
- For $\exists x (\text{Inequality})$:
  - If True: Find any single number in the domain that makes the inequality true (e.g., for $\exists x (2x > x)$, testing $x = 5$ gives $10 > 5$, which completes the proof).
  - If False: Show that the inequality violates a mathematical rule for all numbers in the domain (e.g., showing $\exists x (x^2 < 0)$ is false because $x^2 \ge 0$ holds universally for all real numbers).

Step-by-Step Decision Checklist

1. Check the Domain: Always identify if variables belong to integers ($\mathbb{Z}$) or real numbers ($\mathbb{R}$).
2. Form a Hypothesis: Test quick mental values ($0, 1, -1$, fractions, or large numbers).
3. Select the Proof Type:

- Proving $\forall$ true $\rightarrow$ Arbitrary algebra / Cases.
- Proving $\forall$ false $\rightarrow$ One counterexample.
- Proving $\exists$ true $\rightarrow$ One valid candidate.
- Proving $\exists$ false $\rightarrow$ Show the negation is universally true.
