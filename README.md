# Inventory Management System

Inventory Management System (IMS) is a desktop application developed in Visual Studio using C++. It facilitates efficient management of inventory by providing functionalities such as adding, removing, updating, searching, and displaying products. The system utilizes the `libxl` library for Excel handling and CLR (.NET Framework) for the graphical user interface (GUI).

## Features

1. **Add Product**: Add new products to the inventory with details such as name, quantity, price, etc.
2. **Remove Product**: Remove existing products from the inventory.
3. **Update Product**: Modify the details of existing products, such as quantity or price.
4. **Search Product**: Search for products based on name, ID, or any other relevant criteria.
5. **Display Product**: View the entire inventory or specific products with their details.

## Dependencies

- [**libxl**](https://www.libxl.com/documentation.html): External library used for handling Excel files.([ **How To Setup libxl In Visual Studion C++** ](https://www.libxl.com/vscpp.html) )
- [**CLR (.NET Framework)**](https://learn.microsoft.com/en-us/cpp/dotnet/dotnet-programming-with-cpp-cli-visual-cpp?view=msvc-170): Used for creating the GUI.

## Installation

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/soni-shashan/INVENTORY_MANAGEMENT_SYSTEM.git
    ```

2. Ensure you have Visual Studio installed with C++ development tools.

3. Install the required dependencies (`libxl`).

## Usage

1. Open the project in Visual Studio.
2. Build and run the application.
3. Use the provided GUI to manage the inventory:
   - Add new products.
   - Remove existing products.
   - Update product details.
   - Search for specific products.
   - Display the entire inventory or specific products.

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create your feature branch: `git checkout -b feature/new-feature`.
3. Commit your changes: `git commit -m 'Add new feature'`.
4. Push to the branch: `git push origin feature/new-feature`.
5. Submit a pull request.

### Contributors

- [23CS042 Shashan Lumbhani](https://github.com/soni-shashan)
- [23CS058 Banti Patel](https://github.com/Bantipatel20)
- [23CS060 Dhaval Patel](https://github.com/Dsp2810)
  

## Acknowledgements

- Thanks to [libxl](https://www.libxl.com/) for providing the library for Excel handling.
- This project utilizes CLR (.NET Framework) for the GUI.
