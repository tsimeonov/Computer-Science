# 7.1 The Software engineering discipline

Distinction between software engineering and other engineering disciplines is the lack of quantitative techniques, called `metrics`.

- computer-aided software engineering (CASE) referes to the use of software tools and methodologies to support various activities in software development and engineering.

# 7.2 The software life cycle

## 7.2.1 The cycle as a whole

```mermaid
stateDiagram-v2
direction LR
[*] --> Development
Development --> Use
Use --> Maintanance
Maintanance --> Use
```

## 7.2.2 The traditional development phase

A programmer designs, implements, tests, degugs and maintains programs when solving problems.

```mermaid
stateDiagram-v2
direction LR
ra: requirements analysis
ra:::yourState
ra:::yourState --> Design
Design --> Implementaion
Implementaion --> Testing
```

## 7.2.3 Requirements analysis

The software life cylce begins with the requirements analysis-the goal of which is to specify whtat services the proposed system will provide, to identify any conditions (time constaints, security and so on) on those services, and to define how the outside world will interact with the system.
