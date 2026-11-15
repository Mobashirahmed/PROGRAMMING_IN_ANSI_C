/* In inventory management, the Economic Order Quantity for a single item is given by
    EOQ = √((2 * demand rate * setup costs) / holding cost per item per unit time)
   and the optimal Time Between Orders
    TBO = √((2 * setup costs) / (demand rate * holding cost per unit time))
   WAP to compute EOQ and TBO, given demand rate (items per unit time), setup costs (per order), and holding cost (per item per unit time). */

#include<stdio.h>
#include<math.h>

int main() {
    float demand_rate, setup_costs, holding_cost, EOQ, TBO;

    demand_rate = 1000.0;
    setup_costs = 50.0;
    holding_cost = 10.0;

    EOQ = sqrt((2 * demand_rate * setup_costs) / holding_cost);
    TBO = sqrt((2 * setup_costs) / (demand_rate * holding_cost));

    printf("Economic Order Quantity (EOQ): %.2f items\n", EOQ);
    printf("Optimal Time Between Orders (TBO): %.2f time units\n", TBO);

    return 0;
}