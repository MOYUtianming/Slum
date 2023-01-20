# Audio Signal Generator

## What is this?

* this is a C/C++ library;
* this is a library for audio data generation;

## Lib Structure

1. timer

    ```mermaid
    graph TD;
        A(timer)-->B(phasor);
    ```

2. signal shaper

    ```mermaid
    graph TD;
        C(shaper);
        C-->C1(sin shaper);
        C-->C2(square shaper);
        C-->C3(triangle shaper);
    ```

3. signal point bits

    ```mermaid
    graph TD;
    D(formatter);
        D-->D1(16Bit);
        D-->D2(24Bit);
        D-->D3(32Bit);
    ```

4. the application ports

    ```mermaid
    graph TD;
    E(Extension ports...);
    ```
