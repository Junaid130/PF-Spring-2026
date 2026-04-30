/*Q6 E-Commerce Order Tracker
📋 Scenario
An online store needs a lightweight order tracking system. Each order has an order ID, customer
name, product name, quantity, unit price, and order status ("Pending", "Shipped", or "Delivered"). The
system must compute the total bill for each order and list all orders with a specific status.
✅ Your Tasks
1. Define a struct Order with appropriate fields for all the data described above. Include a float
unitPrice and int quantity field.
2. In main(), create an array of 4 Order structures populated with user input.
3. Write a function float computeTotal(struct Order o) that returns quantity × unitPrice for a
given order, and call it for each order to print itemized bills.
4. Write a function void filterByStatus(struct Order orders[], int n, char *status) that prints only
the orders matching the given status string. Use strcmp() for comparison.
💡 Hint: Use strcmp(order.status, status) == 0 to compare C strings. Don't use == on char arrays — it compares
pointers, not content.*/
#include <stdio.h>
#include <string.h>
    struct Order {
    int orderId;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char orderStatus[20];
};
float computeTotal(struct Order order) {
    return order.quantity * order.unitPrice;
}
void filterByStatus(struct Order ordersArray[], int numOrders, char *statusFilter) {
    for(int i = 0; i < numOrders; i++) {
        if(strcmp(ordersArray[i].orderStatus, statusFilter) == 0) {
        printf("Order %d for %s is %s\n", ordersArray[i].orderId, ordersArray[i].customerName, statusFilter);
        }
    }
}
int main() {
    struct Order orders[4];
    for(int i = 0; i < 4; i++) {
        printf("Enter Order ID, Customer, Product, Qty, Price, Status:\n");
        scanf("%d %s %s %d %f %s", &orders[i].orderId, orders[i].customerName, orders[i].productName,
        &orders[i].quantity, &orders[i].unitPrice, orders[i].orderStatus);
    }
    for(int i = 0; i < 4; i++) {
        printf("Order %d Total: %.2f\n", orders[i].orderId, computeTotal(orders[i]));
    }
    filterByStatus(orders, 4, "Shipped");
    return 0;
}