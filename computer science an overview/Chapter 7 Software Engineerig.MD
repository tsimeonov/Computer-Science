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

### 7.2.2 The traditional development phase

```mermaid
stateDiagram-v2
direction LR
ra: requirements analysis
ra:::yourState
ra:::yourState --> Design
Design --> Implementaion
Implementaion --> Testing
```
