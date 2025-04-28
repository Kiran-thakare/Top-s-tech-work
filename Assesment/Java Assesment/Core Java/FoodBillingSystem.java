import java.util.*;

public class FoodBillingSystem {
    
    static class FoodItem {
        int id;
        String name;
        double price;

        FoodItem(int id, String name, double price) {
            this.id = id;
            this.name = name;
            this.price = price;
        }
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        double totalBill = 0;
        boolean ordering = true;

        List<FoodItem> menu = new ArrayList<>();
        menu.add(new FoodItem(1, "Pizza", 250.00));
        menu.add(new FoodItem(2, "Burger", 120.00));
        menu.add(new FoodItem(3, "Pasta", 150.00));
        menu.add(new FoodItem(4, "Sandwich", 100.00));
        menu.add(new FoodItem(5, "Fries", 80.00));
        menu.add(new FoodItem(6, "Cold Drink", 50.00));

        System.out.println("==========================================");
        System.out.println("      Welcome to Food Billing  ");
        System.out.println("==========================================");

        while (ordering) {
            displayMenu(menu);

            System.out.print("\nEnter the Food ID you want to order: ");
            int foodId = sc.nextInt();

            FoodItem selectedItem = null;
            for (FoodItem item : menu) {
                if (item.id == foodId) {
                    selectedItem = item;
                    break;
                }
            }

            if (selectedItem == null) {
                System.out.println("Invalid Food ID! Please try again.");
                continue; 
            }

            System.out.print("Enter quantity for " + selectedItem.name + ": ");
            int quantity = sc.nextInt();

            double itemTotal = selectedItem.price * quantity;
            totalBill += itemTotal;

            System.out.println(" Added " + quantity + " x " + selectedItem.name + " to the bill.");
            System.out.println(" Current Total Bill: ₹" + totalBill);

            System.out.print("\nDo you want to order more? (yes/no): ");
            String more = sc.next().toLowerCase();

            if (!more.equals("yes")) {
                ordering = false;
            }
        }

        // Final bill display
        System.out.println("\n==========================================");
        System.out.println("              Final Bill ");
        System.out.println("==========================================");
        System.out.println("Total Amount Payable: ₹" + totalBill);
        System.out.println("==========================================");
        System.out.println("Thank you for ordering! Visit Again ");

        sc.close();
    }

    // Method to display the menu items
    public static void displayMenu(List<FoodItem> menu) {
        System.out.println("\nAvailable Food Items:");
        System.out.println("------------------------------------------");
        System.out.printf("%-5s %-20s %-10s\n", "ID", "Item", "Price (₹)");
        System.out.println("------------------------------------------");

        for (FoodItem item : menu) {
            System.out.printf("%-5d %-20s %-10.2f\n", item.id, item.name, item.price);
        }
        System.out.println("------------------------------------------");
    }
}
