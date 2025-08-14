#include <stdio.h>

int main()
{
    //รายละเอียดสินค้า
    char name1[] = "Coke";
    int price1 = 10, stock1 = 10, selected1 = 0; //selected1 คือ ตัวแปรที่ใช้เก็บจำนวนสินค้าที่ลูกค้าสะสมทั้งหมดที่เลือกในหลายรอบ 

    char name2[] = "Green Tea";
    int price2 = 12, stock2 = 12, selected2 = 0;

    char name3[] = "Americano";
    int price3 = 30, stock3 = 10, selected3 = 0;

    char name4[] = "Latte";
    int price4 = 35, stock4 = 10, selected4 = 0;

    char name5[] = "Sunflower Seeds";
    int price5 = 13, stock5 = 10, selected5 = 0;

    char name6[] = "Jin Som Mok";
    int price6 = 15, stock6 = 15, selected6 = 0;

    char name7[] = "Tua Paep";
    int price7 = 20, stock7 = 10, selected7 = 0;

    // จำนวนเงินที่มีในตู้
    int money1000 = 1;
    int money500 = 1;
    int money100 = 3;
    int money50 = 8;
    int money20 = 15;
    int money10 = 200;
    int money5 = 500;
    int money1 = 1000;

    //choice เก็บหมายเลขสินค้าที่ผู้ใช้เลือกจากเมนู
    //qty เก็บจำนวนสินค้าที่ผู้ใช้ต้องการซื้อใช้แค่ระหว่างรอบการเลือกครั้งเดียว
    //total เก็บราคารวมของสินค้าที่เลือกทั้งหมด
    int choice, qty, total = 0;

    // เลือกสินค้า
    do
    {
        // ---------- แสดงเมนู ----------
        printf("\n== Product Menu ==\n");
        printf("1. %s - %d Baht (%d left)\n", name1, price1, stock1);
        printf("2. %s - %d Baht (%d left)\n", name2, price2, stock2);
        printf("3. %s - %d Baht (%d left)\n", name3, price3, stock3);
        printf("4. %s - %d Baht (%d left)\n", name4, price4, stock4);
        printf("5. %s - %d Baht (%d left)\n", name5, price5, stock5);
        printf("6. %s - %d Baht (%d left)\n", name6, price6, stock6);
        printf("7. %s - %d Baht (%d left)\n", name7, price7, stock7);

        // ---------- เลือกสินค้า ----------
        printf("Enter product number (0 to finish): ");
        scanf("%d", &choice);
        if (choice == 0)
            break;

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (choice == 1 && qty <= stock1) //ตรวจว่าผู้ใช้เลือกสินค้าหมายเลข 1 หรือไม่ and ตรวจว่าจำนวนที่เลิอกไม่เกินจำนวนสินค้าที่เหลือในสต็อก
        {
            selected1 += qty;//บวกจำนวนสินค้าที่เลือก (qty) เข้าไปใน selected1
            stock1 -= qty; //ลบจำนวนที่ลูกค้าซื้อออกจากสต็อก
            total += price1 * qty; //คำนวณราคาของสินค้าที่ซื้อในรอบนี้ (price1 * qty) แล้วบวกเข้าไปในราคารวม (total)
        }
        else if (choice == 2 && qty <= stock2)
        {
            selected2 += qty;
            stock2 -= qty;
            total += price2 * qty;
        }
        else if (choice == 3 && qty <= stock3)
        {
            selected3 += qty;
            stock3 -= qty;
            total += price3 * qty;
        }
        else if (choice == 4 && qty <= stock4)
        {
            selected4 += qty;
            stock4 -= qty;
            total += price4 * qty;
        }
        else if (choice == 5 && qty <= stock5)
        {
            selected5 += qty;
            stock5 -= qty;
            total += price5 * qty;
        }
        else if (choice == 6 && qty <= stock6)
        {
            selected6 += qty;
            stock6 -= qty;
            total += price6 * qty;
        }
        else if (choice == 7 && qty <= stock7)
        {
            selected7 += qty;
            stock7 -= qty;
            total += price7 * qty;
        }
        else
        {
            printf("Please select a menu (1-7).\n");
        }
    } while (1);

    // ---------- ตรวจว่ามีสินค้าที่เลือกหรือไม่ ----------
    if (total == 0)
    {
        printf("No items selected.\n");
        return 0;
    } //ถ้า total ยังเป็น 0 แสดงว่าผู้ใช้ไม่ได้ซื้ออะไรเลยให้จบโปรแกรม

    // แสดงรายการที่เลือก
    printf("\n== Order Summary ==\n");
    if (selected1 > 0)
        printf("%s x%d = %d Baht\n", name1, selected1, selected1 * price1);
    if (selected2 > 0)
        printf("%s x%d = %d Baht\n", name2, selected2, selected2 * price2);
    if (selected3 > 0)
        printf("%s x%d = %d Baht\n", name3, selected3, selected3 * price3);
    if (selected4 > 0)
        printf("%s x%d = %d Baht\n", name4, selected4, selected4 * price4);
    if (selected5 > 0)
        printf("%s x%d = %d Baht\n", name5, selected5, selected5 * price5);
    if (selected6 > 0)
        printf("%s x%d = %d Baht\n", name6, selected6, selected6 * price6);
    if (selected7 > 0)
        printf("%s x%d = %d Baht\n", name7, selected7, selected7 * price7);

    printf("Total = %d Baht\n", total);

    // ---------- รับเงินลูกค้า ----------
    int paid = 0; //paid ตัวแปรเก็บจำนวนเงินที่ลูกค้าจ่าย
    do
    {
        int addPay = 0; //addPay เพื่อเก็บ จำนวนเงินที่ลูกค้าจ่ายเพิ่มในแต่ละรอบ
        printf("Enter amount to pay (need at least %d): ", total - paid);
        scanf("%d", &addPay);

        if (addPay > 0) //ตรวจว่าลูกค้าใส่จำนวนเงินมากกว่า 0 หรือไม่
        {
            paid += addPay; // บวกยอดจ่ายสะสม
            printf("You have paid: %d Baht. Remaining: %d Baht", paid, (paid >= total ? 0 : total - paid)); // ถ้า paid >= total ให้แสดง 0, ถ้าไม่ ให้แสดงส่วนที่ยังขาด
        }
        
    } while (paid < total); // วนจนกว่าจะจ่ายครบหรือเกิน

    // ---------- บันทึกเงินเข้าเครื่อง ----------
    int temp = paid; //ตัวแปร temp เก็บ ยอดเงินที่ต้องแปลงเป็นธนบัตรและเหรียญ
    while (temp >= 1000) //ตรวจว่าค่าใน temp ยัง มากกว่าหรือเท่ากับ 1000 หรือไม่
    {
        money1000++; //บวกจำนวนแบงค์ 1000 เข้า
        temp -= 1000;
    }
    while (temp >= 500)
    {
        money500++;
        temp -= 500;
    }
    while (temp >= 100)
    {
        money100++;
        temp -= 100;
    }
    while (temp >= 50)
    {
        money50++;
        temp -= 50;
    }
    while (temp >= 20)
    {
        money20++;
        temp -= 20;
    }
    while (temp >= 10)
    {
        money10++;
        temp -= 10;
    }
    while (temp >= 5)
    {
        money5++;
        temp -= 5;
    }
    while (temp >= 1)
    {
        money1++;
        temp -= 1;
    }

    // ---------- คำนวณเงินทอน ----------
    int change = paid - total; // change ตัวแปรเก็บจำนวนเงินทอน
    printf("Change = %d Baht\n", change);

    while (change >= 1000 && money1000 > 0) //เงินทอนยัง >= 1000 ไหม และ ในเครื่องยังมีแบงค์ 1000 ไหม
    {
        change -= 1000; //ลดเงินทอนลง 1000 บาท 
        money1000--; //ลดจำนวนแบงค์ 1000 ในเครื่องลง 1 ใบ เพราะเราเอาออกไปทอนแล้ว
        printf("1 x 1000 Baht\n");
    }
    while (change >= 500 && money500 > 0)
    {
        change -= 500;
        money500--;
        printf("1 x 500 Baht\n");
    }
    while (change >= 100 && money100 > 0)
    {
        change -= 100;
        money100--;
        printf("1 x 100 Baht\n");
    }
    while (change >= 50 && money50 > 0)
    {
        change -= 50;
        money50--;
        printf("1 x 50 Baht\n");
    }
    while (change >= 20 && money20 > 0)
    {
        change -= 20;
        money20--;
        printf("1 x 20 Baht\n");
    }
    while (change >= 10 && money10 > 0)
    {
        change -= 10;
        money10--;
        printf("1 x 10 Baht\n");
    }
    while (change >= 5 && money5 > 0)
    {
        change -= 5;
        money5--;
        printf("1 x 5 Baht\n");
    }
    while (change >= 1 && money1 > 0)
    {
        change -= 1;
        money1--;
        printf("1 x 1 Baht\n");
    }

    if (change > 0)
    {
        printf("!! Cannot return full change. Please contact staff.\n");
    }

    // แสดงเงินในเครื่อง
    printf("\n== Remaining Money in Machine ==\n");
    printf("1000 Baht: %d\n", money1000);
    printf("500 Baht: %d\n", money500);
    printf("100 Baht: %d\n", money100);
    printf("50 Baht: %d\n", money50);
    printf("20 Baht: %d\n", money20);
    printf("10 Baht: %d\n", money10);
    printf("5 Baht: %d\n", money5);
    printf("1 Baht: %d\n", money1);

    // แสดง stock
    printf("\n== Remaining Stock ==\n");
    printf("%s: %d left\n", name1, stock1);
    printf("%s: %d left\n", name2, stock2);
    printf("%s: %d left\n", name3, stock3);
    printf("%s: %d left\n", name4, stock4);
    printf("%s: %d left\n", name5, stock5);
    printf("%s: %d left\n", name6, stock6);
    printf("%s: %d left\n", name7, stock7);

    printf("\nThank you for your purchase!\n");
    return 0;
}
