# Product List Manager

This is a simple C++ console application that allows you to manage a list of products and their prices. It supports adding products, displaying the list of products, sorting products by price, and showing the total number of products added. The program has a limit of 10 products.

## Features

1. **Add Product**: Add a new product and its price to the list (maximum of 10 products).
2. **Show Products**: Display the current list of products with their prices.
3. **Sort Products by Price**: Sort the list of products based on their prices (in ascending order).
4. **Display Total Items**: Show the total number of products in the list.
5. **Exit**: Exit the program.

## How It Works

### Menu
The application presents a simple menu with the following options:
```
Menu:
1. Add item
2. Show items
3. Sort items
4. Display total items
5. Exit
```

### Adding a Product
The user is prompted to enter the product name and price. The product is added to the list if the total number of products has not exceeded 10.

### Displaying Products
The user can view the list of products and their prices. If no products are added, a message will indicate that the list is empty.

### Sorting Products
The products can be sorted by their prices in ascending order using a simple bubble sort algorithm. The sorted list is then displayed.

### Displaying the Total Items
At any time, the user can check how many products have been added to the list.

### Exiting the Program
Selecting the "Exit" option will terminate the program with a goodbye message.

## Code Breakdown

- **add()**: Function to add a new product and price to the list.
- **show()**: Function to display the current list of products and prices.
- **sort()**: Function to sort products by price using the bubble sort algorithm.
- **Main loop**: Continuously shows the menu and allows users to select actions until they choose to exit.

## Example Usage

1. **Adding Products**
   ```
   enter the product name: Apple
   enter the product price: 2
   product added successfully!
   ```

2. **Displaying Products**
   ```
   current items in the list:
   product: Apple, price: 2
   ```

3. **Sorting Products**
   ```
   Apple is worth 2 euro.
   products sorted by price.
   ```

4. **Exiting**
   ```
   have a nice day. see you soon.
   ```

## Compilation

To compile the program, use the following command:

```bash
g++ product_manager.cpp -o product_manager
```

Run the program:

```bash
./product_manager
```

## Requirements

- C++ compiler (e.g., g++)
- Basic knowledge of C++ and command-line operations

## Limitations

- The maximum number of products that can be added is limited to 10.
- The program only accepts product names without spaces.
  
## Future Improvements

- Allow more than 10 products.
- Handle product names with spaces.
- Provide the ability to delete products.
- Add persistence (save products to a file).

---

Enjoy using the Product List Manager!
