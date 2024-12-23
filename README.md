# Case Study: Sequential vs. Binary Search

This repository contains C++ programs comparing the performance of **Sequential Search** and **Binary Search** for two types of datasets:

- **Dataset A**: Small, unsorted dataset (uses Sequential Search)
- **Dataset B**: Large, sorted dataset (uses Binary Search)

## Programs

### Dataset A - Sequential Search
The program demonstrates Sequential Search on an unsorted dataset. It counts the number of comparisons for both successful and unsuccessful searches.

### Dataset B - Binary Search
The program demonstrates Binary Search on a sorted dataset. It counts the number of comparisons for both successful and unsuccessful searches.

## How to Run

### Prerequisites
- A C++ compiler (e.g., g++, clang++)
- Basic understanding of C++ and search algorithms

### Steps
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/sequential-binary-search.git
   cd sequential-binary-search
   ```

2. Compile the programs:
   - For Sequential Search (Dataset A):
     ```bash
     g++ -o sequential_search sequential_search.cpp
     ./sequential_search
     ```
   - For Binary Search (Dataset B):
     ```bash
     g++ -o binary_search binary_search.cpp
     ./binary_search
     ```

3. Follow the prompts to enter the key for search.

## Example Output

### Sequential Search
```plaintext
Dataset A (unsorted): 5 12 8 21 30 7 18 14 20 1
Enter the key to search: 18
Key found at index 6 after 7 comparisons.
```

### Binary Search
```plaintext
Dataset B (sorted): 1 5 7 8 12 14 18 20 21 30
Enter the key to search: 20
Key found at index 7 after 4 comparisons.
```

## Comparison of Search Algorithms

| Dataset | Search Algorithm  | Characteristics      | Example Size | Key Found | Comparisons |
|---------|-------------------|----------------------|--------------|-----------|-------------|
| A       | Sequential Search | Unsorted, small size | 10           | Yes       | 7           |
| B       | Binary Search     | Sorted, large size   | 10           | Yes       | 4           |

## Key Learning Outcomes
1. Sequential Search is suitable for small, unsorted datasets.
2. Binary Search is significantly more efficient for large, sorted datasets.

## License
This project is licensed under the MIT License.

## Author
[Sher Hassan](https://github.com/Sher-Hassan)
