# Slum -- An Audio Signal Generator

## What is this?

* this is a summary of my audio skills;
* this is a library for audio data generation or testing;

## Lib Structure

1. Timer (v 0.0.1)

    ```mermaid
    graph TD;
        A(Timer)-->B(Phasor);
    ```

2. signal shaper (Doing)

    ```mermaid
    graph TD;
        C(shaper);
        C-->C1(sin shaper);
        C1-->C1_1(sine based on the taylor expansion)
        C1-->C1_2(cmath version sine)
        C-->C2(square shaper);
        C2-->C2_1(square based on the definition)
        C2-->C2_2(square based on the fourier transform)
        C-->C3(triangle shaper);
        C3-->C3_1(triangle based on the definition)
        C3-->C3_2(triangle based on the fourier transform)
    ```

3. signal point bits (TODO)

    ```mermaid
    graph TD;
    D(formatter);
        D-->D1(16Bit signed int);
        D-->D2(24Bit signed int);
        D-->D3(32Bit signed int);
    ```

4. the application ports (TODO)

    ```mermaid
    graph TD;
    E1(enveloper)
    E2(Extension ports...);
    ```
