#include <iostream>
#include <string>
class Product {
private:
    std::string name;
    double price;
public:
    void get_product() {
        std::cout << "Enter product name: ";
        std::cin >> name;
        std::cout << "Enter product price: ";
        std::cin >> price;
    }
    void print_product() {
        std::cout << "Product: " << name << ", Price: " << price << std::endl;
    }
};
int main() {
    int num_products;
    std::cout << "Enter the number of products: ";
    std::cin >> num_products;
    Product *products = new Product[num_products];
    for (int i = 0; i < num_products; ++i) {
        std::cout << "\nEnter details for Product " << i+1 << ":" << std::endl;
        products[i].get_product();
    }
    std::cout << "\nProduct Details:" << std::endl;
    for (int i = 0; i < num_products; ++i) {
        std::cout << "Product " << i+1 << ": ";
        products[i].print_product();
    }
    delete[] products; 
    return 0;
}
