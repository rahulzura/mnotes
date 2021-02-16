## Notes

1. Proposition or statement - An assertion that is universally true or universally false.

2. Six logical connectives:
    - inclusive or (disjunction) (v): p or q
    - exclusive or (disjunction) (⊕): p or q but not both
    - and (conjunction) (∧): p and q
    - negation (~): not p
    - conditional connectives:
        - implies (→): p → q is read as 'if p then q' or 'p implies q' or 'p is sufficient for q' or 'p only if q'. p is called the hypothesis and q the conclusion.

        - converse of p → q is q → p read as 'p if q' or 'p is necessary for q'

        - biconditional (↔): p ↔ q is (p → q) ∧ (q → p) read as 'p if and only if (iff) q' or 'p implies and is implied by q' or 'p is necessary and sufficient for q'


3. When conclusion is true regardless of whether or not the hypothesis is true, we say that the conclusion is vacuously true.

4. Precedence: ~, ∧, ∨ and ⊕, → and ↔

5. Logically equivalence (≡): Two propositions are logically equivalent if the truth value of both of them are same for the same choice of simple propositions involved in them.

6. Tautology: Always true
7. Contradiction: Always false 

8. Propositional function or predicate: A sentence p(x) that becomes a proposition when we give x a definite value from the set of values it can take (universe of discourse). Denoted by p(x), q(x), etc.

9. A predicate is usually not a proposition but every proposition is a prepositional function in the same way that every real number is a real-valued function, namely, the constant function.

10. Quantifiers:
    - ∃ (there exists)
    - ∀ (for all)
    - ∈ (belongs to)
    - ∉ (does not belong to)
    - ∃! (there exists one and only one, there exists a unique, or there exists exactly one)


11. *IMPORTANT*: 'There is at least one child in the class.' as '(∃ x in U)p(x)', where p(x) is the sentence 'x is in the class.' and U is the set of all children. The opposite of it would be 'There is no child in the class' as '(∀ x ∈ U)q(x)' or 'q(x), ∀ x ∈ U', where x ranges over all children and q(x) denotes the sentence 'x is not in the class.' i.e., q(x) ≡ ~ P(x)

12. *IMPORTANT*: Two rules for negation that relate ∀ and ∃
    1. ~ (∀ x ∈ U)p(x) ≡ (∃ x ∈ U) (~ p(x))
    2. ~ (∃ x ∈ U)p(x) ≡ (∀ x ∈ U) (~ p(x)) where U is the set of values that x can take.
    - By extension, ~ [(∀ xi ∈ U1) (∃ x2 ∈ U2) (∃ x3 ∈ U2) (∃ x3 ∈ U3)(∀ x4 ∈ U4) … (∃ xn ∈ Un)p] ≡ (∃ x1 ∈U1) (∀ x2 ∈ U2 ) (∀ x3 ∈ U3)(∃ x4 ∈ U4) …(∀ xn ∈ Un ) (~ p) **look up internet for the meaning of the last p**
    
13. Formulaes:
    1. p → q ≡ ~p ∨ q
    2. p ↔ q ≡ (p → q) ∧ (q → p)
    3. De Morgan's laws
        - ~ (p ∧ q) ≡ ~ p ∨ ~ q
        - ~ (p ∨ q) ≡ ~ p ∧ ~ q

    4. ~ (~p) ≡ p (Double negation law)
    5. Idempotent laws:
        - p ∧ p ≡ p
        - p ∨ p ≡ p
    
    6. Commutativity:
        - p ∨ q ≡ q ∨ p 
        - p ∧ q ≡ q ∧ p
    
    7. Associativity:
        - (p ∨ q) ∨ r ≡ p ∨ ( q ∨ r)
        - (p ∧ q) ∧ r ≡ p ∧ ( q ∧ r) 

    8. Distributivity
        - p ∨ ( q ∧ r) ≡ (p ∨ q) ∧ (p ∨ r)
        - p ∧ (q ∨ r) ≡ ( p ∧ q) ∨ (p ∧ r)


## Exercises
### E1
i. Statement. Because it's an assertion that is universally false.
ii. Not statement. Because it's a question not an assertion.
iii. Statement. Because the stated fact is universally true.
iv. Statement. Because it's a universally true assertion.
v. Wrong sentence structure, either the 'is' should be removed to make it an exclamation or replace the '!' with '?' to make it a question. Either way it's not statement.
vi. ...graduate. Not statement. It's can be true for some girl, not for some other girl, i.e., who 'she' refers to is not clear.
vii. Statement. It's a universally true assertion.
viii. Statement. It's a universally true assertion.
ix. Not statement. It's not universally true, it's subjective, for some maths can be fun but it doesnt' have to be fun for all.
x. Not statement. For n = 2, the assertion is true, but for n = 3 the assertion is false. Hence, it's not universally true or false which is why it's not a statement.

### E2
i. F
iii. T
iv. T
vi. T or F
vii. T
viii. T

### E3
1. T:
    - 2 + 2 = 4
    - x - x = 0 for all x that belongs to R

2. F:
    - 2 + 3 = 8
    - x - x > 0 for all x that belongs to R

3. Not propositions:
    - The food was delicious
    - 2^n = n^2

### E4
p: 2 + 3 = 7 (always false)
q: Radha is an engineer (can be either)
p   q   p v q
F   F   F
F   T   T

### E5

### E6

### E7