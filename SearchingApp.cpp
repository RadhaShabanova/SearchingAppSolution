#include <iostream>
#include <vector>     // Make sure <vector> is included
#include <array>      // Include <array> for std::array
#include "Searching.cpp"  // Include the library with the search functions

int main() {
    // Initialize vector manually using push_back
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(30);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(70);

    int target;

    // Prompt user to enter the target value
    std::cout << "Enter the value of target: ";
    std::cin >> target;

    // The rest of your code remains the same for performing searches
    int index = binarySearch(vec, target);
    if (index != -1) {
        std::cout << "Binary search. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search. Element not found in the vector." << std::endl;
    }

    // Binary search for first occurrence in vector
    index = binarySearchFirst(vec, target);
    if (index != -1) {
        std::cout << "Binary search (first occurrence). Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search (first occurrence). Element not found in the vector." << std::endl;
    }

    // Linear search in vector
    index = linearSearch(vec, target);
    if (index != -1) {
        std::cout << "Linear search. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Linear search. Element not found in the vector." << std::endl;
    }

    // Continue with array search as in your original code
    std::array<int, 10> arr = {10, 20, 30, 30, 30, 40, 50, 60, 70, 70};

    // Binary search in array
    index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "Binary search in array. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search in array. Element not found in the array." << std::endl;
    }

    // Binary search for first occurrence in array
    index = binarySearchFirst(arr, target);
    if (index != -1) {
        std::cout << "Binary search (first occurrence) in array. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search (first occurrence) in array. Element not found in the array." << std::endl;
    }

    // Linear search in array
    index = linearSearch(arr, target);
    if (index != -1) {
        std::cout << "Linear search in array. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Linear search in array. Element not found in the array." << std::endl;
    }

    return 0;
}
