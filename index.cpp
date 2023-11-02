#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct list
{
    char name[100];
    float price;
    struct list *next;
}*Monitor, *MotherBoard, *Processor, *PowerSupply, *GraphicsCard, *Casing;

struct pcBuild
{
    char itemName[100];
    float price;
    struct pcBuild* next;
};

struct customerInfo
{
    char customerName[100];
};


void powerSupplyList()
{
    struct list *ps1, *ps2, *ps3, *ps4;
    ps1 = (struct list* ) malloc(sizeof(struct list ));
    ps2 = (struct list* ) malloc(sizeof(struct list ));
    ps3 = (struct list* ) malloc(sizeof(struct list ));
    ps4 = (struct list* ) malloc(sizeof(struct list ));

    strcpy(ps1->name, "Antec HCG1000  Watt Power Supply\t-----\tPrice: 1800 tk");
    ps1->price = 1800.00;
    ps1->next = ps2;

    strcpy(ps2->name ,"Cooler Master E400w Power Supply\t-----\tPrice: 3500  tk");
    ps2->price = 3500.00;
    ps2->next = ps3;

    strcpy(ps3->name ,  "Gam Kratos E600W RG Power Supply\t-----\tPrice: 4400  tk");
    ps3->price = 4400.00;
    ps3->next = ps4;

    strcpy(ps4->name ,  "ASUS ROG THOR 85P 80Power Supply\t-----\tPrice: 2400 tk");
    ps4->price = 2400.00;
    ps4->next = NULL;

    PowerSupply = ps1;
}

void processorList()
{
    struct list *p1, *p2, *p3, *p4;
    p1 = (struct list* ) malloc(sizeof(struct list ));
    p2 = (struct list* ) malloc(sizeof(struct list ));
    p3 = (struct list* ) malloc(sizeof(struct list ));
    p4 = (struct list* ) malloc(sizeof(struct list ));

    strcpy(p1->name, "Intel 12th Gen Core i9 Processor\t-----\tPrice: 67000 tk");
    p1->price = 67000.00;
    p1->next = p2;

    strcpy(p2->name ,"Intel 10th Gen Core i3 Processor\t-----\tPrice: 11500 tk");
    p2->price = 11500.00;
    p2->next = p3;

    strcpy(p3->name ,  "AMD Ryzen 3Processor with Radeon\t-----\tPrice: 16800 tk");
    p3->price = 16800.00;
    p3->next = p4;

    strcpy(p4->name ,  "AMD Ryzen 3 Pro RX4100 Processor\t-----\tPrice: 10700 tk");
    p4->price = 10700.00;
    p4->next = NULL;

    Processor = p1;
}

void monitorList()
{
    struct list *m1, *m2, *m3, *m4;
    m1 = (struct list* ) malloc(sizeof(struct list ));
    m2 = (struct list* ) malloc(sizeof(struct list ));
    m3 = (struct list* ) malloc(sizeof(struct list ));
    m4 = (struct list* ) malloc(sizeof(struct list ));

    strcpy(m1->name, "Acer EB192Q 18.5 Inch HD Monitor\t-----\t Price: 9000  tk");
    m1->price = 9000.00;
    m1->next = m2;

    strcpy(m2->name ,"HP V19125QR 18.5 Inch HD Monitor\t-----\t Price: 10400 tk");
    m2->price = 14000.00;
    m2->next = m3;

    strcpy(m3->name ,  "Dell E2016HVNV 19.5' LED Monitor\t-----\t Price: 12000 tk");
    m3->price = 12000.00;
    m3->next = m4;

    strcpy(m4->name ,  "PHILIPS 241V8 24'IPS FHD Monitor\t-----\t Price: 19700 tk");
    m4->price = 19700.00;
    m4->next = NULL;

    Monitor = m1;
}

void motherBoardList()
{
    struct list *mb1, *mb2, *mb3, *mb4;
    mb1 = (struct list* ) malloc(sizeof(struct list ));
    mb2 = (struct list* ) malloc(sizeof(struct list ));
    mb3 = (struct list* ) malloc(sizeof(struct list ));
    mb4 = (struct list* ) malloc(sizeof(struct list ));

    strcpy(mb1->name ,  "MSI A320M-A Pro AMD Motherboard\t\t-----\tPrice: 6200  tk");
    mb1->price = 6200.00;
    mb1->next = mb2;

    strcpy(mb2->name ,  "Gigabyte GA-H81M-S2 Motherboard\t\t-----\tPrice: 7900  tk");
    mb2->price =7000.00;
    mb2->next = mb3;

    strcpy(mb3->name ,  "Gigabyte B6 12thGen Motherboard\t\t-----\tPrice: 20500 tk");
    mb3->price = 20500.00;
    mb3->next = mb4;

    strcpy(mb4->name ,  "ASUS ROG42 12th Gen Motherboard\t\t-----\tPrice: 29000 tk");
    mb4->price = 29000.00;
    mb4->next = NULL;

    MotherBoard = mb1;


}

void casingList()
{
    struct list *c1, *c2, *c3, *c4;
    c1 = (struct list* ) malloc(sizeof(struct list ));
    c2 = (struct list* ) malloc(sizeof(struct list ));
    c3 = (struct list* ) malloc(sizeof(struct list ));
    c4 = (struct list* ) malloc(sizeof(struct list ));

    strcpy(c1->name ,  "MaxGreen A363BK ATSX 5S04 Casing\t-----\tPrice: 5450  tk");
    c1->price = 5400.00;
    c1->next = c2;

    strcpy(c2->name ,  "MaxGreen G563BL Window AX Casing\t-----\tPrice: 4050  tk");
    c2->price = 4050.00;
    c2->next = c3;

    strcpy(c3->name ,  "Corsair 60X RGB ATX Smart Casing\t-----\tPrice: 24500 tk");
    c3->price = 24500.00;
    c3->next = c4;

    strcpy(c4->name ,  "AMD Ryzen 3 Pro 4350 Star Casing\t-----\tPrice: 34200 tk");
    c4->price = 34200.00;
    c4->next = NULL;

    Casing = c1;

}

void graphicsList()
{
    struct list *g1, *g2, *g3, *g4;
    g1 = (struct list* ) malloc(sizeof(struct list ));
    g2 = (struct list* ) malloc(sizeof(struct list ));
    g3 = (struct list* ) malloc(sizeof(struct list ));
    g4 = (struct list* ) malloc(sizeof(struct list ));

    strcpy(g1->name ,  "GForce G730K  2GB Graphics Card\t\t-----\tPrice: 7050  tk");
    g1->price = 9000.00;
    g1->next = g2;

    strcpy(g2->name ,  "GeForce 1050T 4GB Graphics Card\t\t-----\tPrice: 22500 tk");
    g2->price = 14000.00;
    g2->next = g3;

    strcpy(g3->name ,  "PaGeForce RTX 8GB Graphics Card\t\t-----\tPrice: 41900 tk");
    g3->price = 12000.00;
    g3->next = g4;

    strcpy(g4->name ,  "Gigabyte RTX 12 GBGraphics Card\t\t-----\tPrice: 58000 tk");
    g4->price = 19700.00;
    g4->next = NULL;

    GraphicsCard = g1;
}

void display(struct list *p)
{
    list *temp;
    temp = p;

    while(temp != NULL)
    {
        printf("%s \n", temp->name);
        temp = temp->next;
    }

    printf("\n_____________________________________\n\n");

}



void productListing ()
{

    int chooseProduct;
    printf("\n\n Choose Your Option From Here: [1/2/3/4/5/6/7/8/9/0]");
    printf("\n  [1]  -- Monitor");
    printf("\n  [2]  -- Mother Board");
    printf("\n  [3]  -- Casing");
    printf("\n  [4]  -- Graphics Card");
    printf("\n  [5]  -- Processor");
    printf("\n  [6]  -- Power Supply");
    printf("\n  [7]  -- Delete selected item");
    printf("\n  [8]  -- View Your Build With Price");
    printf("\n  [9]  -- Save As file");
    printf("\n  [0]  -- Exit the Program");
    printf("\n Your Choose is: ");
    
}


int main()
{
    printf("\n\t\t\t===================== ** Bangi PC Building Solution ** =====================");
    printf ("\n\n Enter Your Name: ");
    printf("\n\n\n\n");
    monitorList();
    motherBoardList();
    graphicsList();
    casingList();
    powerSupplyList();
    processorList();
    display(Monitor);
    display(MotherBoard);
    display(Processor);
    display(Casing);
    display(PowerSupply);
    display(GraphicsCard);
    productListing();
    return 0;
}