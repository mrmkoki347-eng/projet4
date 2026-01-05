# Best Time to Buy and Sell Stock (C Project)

This project implements an optimized solution for the algorithmic problem "Best Time to Buy and Sell Stock" using the C language. It includes a custom test runner and automated testing via GitHub Actions.

## 1. The Problem
**LeetCode Reference:** [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i-th` day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

## 2. Real-Life Use Case
In financial markets (High-Frequency Trading or Algorithmic Trading), analyzing historical data is crucial. This algorithm represents a fundamental strategy: **"Buy Low, Sell High"**.

Imagine a trader wants to analyze the past performance of a stock to understand its maximum potential volatility and profit. This algorithm quickly identifies the perfect entry and exit points in historical data to evaluate how profitable a perfect strategy would have been.

## 3. Explanation of Approach
We use a **One Pass (Greedy)** approach to solve this problem efficiently:

1. We iterate through the array of prices only once.
2. We keep track of the **minimum price** found so far (`minPrice`).
3. For every price we visit, we calculate the potential profit if we sold today (`currentPrice - minPrice`).
4. If this calculated profit is higher than our recorded `maxProfit`, we update `maxProfit`.

This allows us to find the solution without needing nested loops.

## 4. Complexity Analysis

* **Time Complexity: O(n)**
    * We traverse the list of prices exactly once, performing constant-time operations at each step.
* **Space Complexity: O(1)**
    * We only use two integer variables (`minPrice` and `maxProfit`) to store the state, regardless of the input size.

## 5. How to Compile and Run Tests

The project includes a built-in test runner that reads test cases from `dataset.txt`.

### Prerequisites
* GCC Compiler (or any standard C compiler)
* Make sure `main.c` and `dataset.txt` are in the same folder.

### Command Line Instructions
1.  **Compile the code:**
    ```bash
    gcc main.c -o stock_app
    ```

2.  **Run the application:**
    * On Windows:
        ```bash
        .\stock_app.exe
        ```
    * On Linux/Mac:
        ```bash
        ./stock_app
        ```

3.  **Output:**
    The program will automatically read the inputs from `dataset.txt`, compare the actual output with the expected output, and display a success or failure message for each test case.


## 6. Online Demo (Hosting)

To satisfy the requirement "Can we host our algorithm so that it can be used online?", this project is deployed on Replit. You can compile and run the C code directly in your browser without any local setup.

**👉 [Click here to Run on Replit](https://replit.com/@maramkouki/projet4)**