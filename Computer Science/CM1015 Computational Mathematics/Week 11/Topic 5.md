## Topic 5: Graph sketching and kinematics

### 1. Defining a Function

A function is a rule that takes an input (usually $x$) and assigns it to exactly one output (usually $y$ or $f(x)$).

- `Domain`: The set of all possible input values (what you are "allowed" to plug in).

- `Codomain`: The set of all potential output values.

- `Type`: This describes the relationship. For example, a linear function ($f(x) = mx + c$) creates a straight line, while a quadratic function ($f(x) = ax^2 + bx + c$) creates a curve (parabola).

---

### 2. Cartesian Coordinates and Plotting

The `Cartesian plane `is a 2D grid defined by a horizontal axis ($x$) and a vertical axis ($y$).

- `Locating Points`: Every point is an ordered pair $(x, y)$. The first number tells you how far to move left/right; the second tells you how far to move up/down.

- `Plotting a Function`: To graph a function, you choose several $x$ values (the domain), calculate their corresponding $y$ values, plot those points, and connect them.

---

To derive and plot the motion of an object, we look at how its position and speed change over time. In physics, we generally categorize this into two types: Uniform Motion (moving at a steady pace) and Uniformly Accelerated Motion (speeding up or slowing down at a steady rate).

1. Uniform Motion (Constant Speed)

In uniform motion, an object covers equal distances in equal intervals of time. Its acceleration is zero ($a = 0$).

The Derivations

- `Speed` ($v$): Since speed is constant, the formula is simply its initial value:

$$v(t) = v_0$$

- `Distance` ($d$): Speed is defined as the rate of change of distance ($v = \frac{\Delta d}{\Delta t}$). To find distance, we multiply speed by time:

$$d(t) = v_0 \cdot t$$

The Plots

- Speed-Time Graph: A horizontal line. This shows that as time passes, the speed value remains the same.

- Distance-Time Graph: A straight diagonal line starting from the origin. The slope (gradient) of this line represents the speed.

<img src="../Week 9/speed.jpeg" width="500px"/>

2. Uniformly Accelerated Motion (Constant Acceleration)

Here, the object's velocity changes at a constant rate ($a = \text{constant}$). This is common in scenarios like a car speeding up or an object falling under gravity.

The Derivations

- Speed ($v$): Acceleration is the rate of change of velocity ($a = \frac{\Delta v}{\Delta t}$). By rearranging, we get:

$$v(t) = v_0 + at$$

(This is a linear function: $y = mx + c$)

- Distance ($d$): Distance is the area under the speed-time graph. For a steadily increasing speed, the average speed is $\frac{v_0 + v}{2}$. Substituting the speed formula above into $d = \text{average speed} \cdot t$ gives:

$$d(t) = v_0t + \frac{1}{2}at^2$$

(This is a quadratic function, creating a curve)

The Plots

- Speed-Time Graph: A straight diagonal line. The slope of this line is the acceleration ($a$). If the line slopes upward, the object is accelerating; downward means it is decelerating.

- Distance-Time Graph: An upward curve (parabola). Because the object is getting faster, it covers more distance in each subsequent second, causing the line to get steeper over time.
