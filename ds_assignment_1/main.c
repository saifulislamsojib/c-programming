#include <stdio.h>

/*
write a c programming to constract a basic software for super shop
1. Function display price of 5 products (without return type)
2. Get Order function, take orders and display order(without
argument with return type)
3. calculate bill(With return type with argument)
4. Display bill with discount(without returntype with arguments)
*/

char products[5][30] = {"Rice (1kg)", "Oil (1L)", "Sugar (1kg)", "Salt (500g)",
                        "Flour (1kg)"};
float prices[5] = {60, 120, 80, 20, 50};
int quantities[5] = {0};

void displayPrice() {
  printf("--- SUPER SHOP - PRODUCT LIST ---\n");
  for (int i = 0; i < 5; i++) {
    printf("Price or product %s is: %.2f\n", products[i], prices[i]);
  }
}

int getOrder() {
  int qty;
  printf("\n--- PLACE YOUR ORDER ---\n");
  for (int i = 0; i < 5; i++) {
    printf("Enter quantity for %s - %.2f: ", products[i], prices[i]);
    scanf("%d", &qty);
    quantities[i] = qty;
  }
  printf("\n--- YOUR ORDER SUMMARY ---\n");
  int totalItems = 0;
  for (int i = 0; i < 5; i++) {
    if (quantities[i] > 0) {
      printf("Product: %s, Quantity: %d, Subtotal: %.2f\n", products[i],
             quantities[i], quantities[i] * prices[i]);
      totalItems += quantities[i];
    }
  }
  printf("Total Items Ordered: %d\n", totalItems);
  return totalItems;
  return 0;
}

float calculateBill(int qty[]) {
  float total = 0;
  for (int i = 0; i < 5; i++) {
    total += qty[i] * prices[i];
  }
  return total;
}

void displayBill(float totalBill, int totalItems) {
  float discount = 0;
  float discountPercent = 0;

  // Discount logic
  if (totalBill > 500) {
    discountPercent = 10;
  } else if (totalBill > 200) {
    discountPercent = 5;
  }

  discount = (totalBill * discountPercent) / 100;
  float finalBill = totalBill - discount;

  printf("FINAL BILL\n");

  printf("%-20s %-10s %-10s\n", "Product", "Qty", "Amount");
  for (int i = 0; i < 5; i++) {
    if (quantities[i] > 0) {
      printf("Product: %s, Quantity: %d, Amount: %.2f\n", products[i],
             quantities[i], quantities[i] * prices[i]);
    }
  }
  printf("Total Items: %d\n", totalItems);
  printf("Gross Total: %.2f\n", totalBill);
  printf("Discount (%.0f%%): %.2f\n", discountPercent, discount);
  printf("Net Payable: %.2f\n", finalBill);
}

int main() {
  displayPrice();
  int totalItems = getOrder();
  float totalBill = calculateBill(quantities);
  displayBill(totalBill, totalItems);

  return 0;
}
