// a discount of 10% is offered if the quantity purchased is more than 1000rs. this program is to calculate..
// ..total expenses when quantity and price per item is entered by the user.

#include <stdio.h>
int main()
{
    int si, n, Price, net_Price;
    printf("Enter your Book quantity = ");
    scanf("%d", &n);
    printf("Enter your Book Price = ");
    scanf("%d", &Price);
    net_Price = n * Price;
    if (n >= 1000)
    {
        // si=(Price*10)/100;
        // net_Price = (Price-si)*n;
        // Book_discount of 10%
        int amount = (net_Price * 10) / 100;
        int total = net_Price - amount;
        printf("BOOk discount is (10 % ).\n (book if you buy >1000) \n");
        printf("This is net Amount of purchase Book %d", total);
    }
    else if (n <= 1000)
    {
        printf("This is net Amount of purchase Book %d", net_Price);
    }
    else
    {
        printf("You purchase nothing");
    }
    return 0;
}
