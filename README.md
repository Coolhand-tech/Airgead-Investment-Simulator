Great choice! Here's the updated **README** with the new repository name **Airgead Investment Simulator**:

---

# Airgead Investment Simulator 💰

The **Airgead Investment Simulator** is an educational tool designed to teach high school students about fiscal responsibility, investing, and compound interest. Built with **C++**, this app allows users to simulate compound interest calculations and explore how different investment scenarios evolve over time.

## Features

- **Interactive User Input**: Input details like initial investment, monthly deposit, annual interest rate, and investment duration (in years).
- **Compound Interest Calculation**: Provides monthly and yearly compound interest results, helping users see how their investment grows.
- **Scenario Testing**: Compare two scenarios: one with monthly deposits and one without, to understand the difference regular contributions make.
- **Clear Reports**: Displays year-end balances for both scenarios, showcasing how user decisions impact long-term financial growth.

## How to Use

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/Coolhand-tech/Airgead-Investment-Simulator.git
   ```

2. **Navigate to the Project Folder**:
   ```bash
   cd Airgead-Investment-Simulator
   ```

3. **Compile the Code**:
   - On **Linux/macOS**:
     ```bash
     g++ -o airgead_app main.cpp investment.cpp
     ```
   - On **Windows** (using an IDE like Visual Studio):
     - Open the project in Visual Studio and build the solution.

4. **Run the Application**:
   ```bash
   ./airgead_app
   ```

5. **Follow the Prompts**:
   - Enter the **initial investment**, **monthly deposit**, **annual interest rate**, and **number of years**.
   - View the year-end balances and see how your investment grows.

## Requirements

- **C++ Compiler** (e.g., g++, Visual Studio, etc.)
- **C++17 or later** (for some advanced features)

## Project Structure

- **`main.cpp`**: The main entry point of the program where the user interacts with the application and inputs data.
- **`investment.cpp`**: Contains the logic for calculating compound interest and handling the investment scenarios.
- **`investment.h`**: Header file for defining the `Investment` class and its methods.
- **`README.md`**: The project documentation with instructions on how to set up, compile, and run the app.

## Example Output

```plaintext
Enter the initial investment amount: 1000
Enter the monthly deposit amount: 100
Enter the annual interest rate (in %): 5
Enter the number of years: 10

Year-end balance with no monthly deposits: $1,628.89
Year-end balance with monthly deposits: $10,850.44
```

## Future Enhancements

- **Graphical User Interface (GUI)**: Integrate a GUI to make the app more interactive and user-friendly.
- **Enhanced Reporting**: Include monthly and yearly breakdowns of how compound interest is accrued.
- **Mobile Version**: Develop a mobile version of the app for easier accessibility.

## Contributing

Contributions are welcome! If you'd like to suggest improvements, report bugs, or contribute new features, feel free to fork the repository and submit a pull request.

Please ensure all contributions maintain the project's goals and coding standards.

## License

This project is open source and available under the [MIT License](LICENSE).
