# When?
- When we have the recursive formula $f(n) = \sum_{i=1}^m f(n-i)$
  - E.g. Fibonacci: f(n) = f(n-1)+f(n-2)
- So we can form a Matrix which times a column vec equals a col vec and that satisfies the recursive law
  - E.g. $[1 1 \ 1 0]*[ f(n) \ f(n-1)] = [f(n-1)+f(n) \ f(n)]$
- For unlinear equation , we can separate the unlinear item
  - f(x)+ux+v = \sum_{i=1}^m (f(x-i)+u(x-i) + v)
