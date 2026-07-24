# First-Proj

A simple C++ program to find the solutions, intercepts, and vertex of a quadratic equation.

## What It Does

This program solves quadratic equations of the form **ax² + bx + c = 0** and calculates:

- **Solutions (Roots)** — the x-values where the equation equals zero
- **Intercepts** — where the parabola crosses the x-axis and y-axis
- **Vertex** — the peak or lowest point of the parabola

## How to Use It

1. Open your terminal
2. Navigate to the project directory
3. Run: `.\firstProject` (on Windows)
4. Enter the coefficients:
   - `a` — coefficient of x²
   - `b` — coefficient of x
   - `c` — constant term
5. The program will display the solutions, intercepts, and vertex coordinates

### Example

```
Input:
a = 1
b = -5
c = 6

Output:
Solutions: x = 2, x = 3
Y-intercept: (0, 6)
X-intercepts: (2, 0), (3, 0)
Vertex: (2.5, -0.25)
```

## Why It's Procedural-Based

This program follows a **procedural programming** style:

- **Sequential Execution** — it follows a linear step-by-step flow: input → calculate → output
- **Function-Based** — each calculation (solutions, intercepts, vertex) is handled by individual functions that perform specific tasks
- **No Object-Oriented Design** — it doesn't use classes or objects; instead, it uses functions to organize logic
- **Data Processing** — the program takes input data, processes it through a series of calculations, and returns results

This approach is ideal for learning the fundamentals of programming: understanding how to structure logic, use mathematical formulas, and organize code into reusable functions.

## Note

This was a learning project created while starting to learn C++. The code structure reflects beginner-level practices and serves as a foundation for understanding procedural programming concepts.
