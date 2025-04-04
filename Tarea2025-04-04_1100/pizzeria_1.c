#include <stdio.h>

int main()
{
   int tipoPizza,ingrediente;

   printf("Tenemos:\n1.Pizza vegetariana\n2.No vegetariana\n\n");
   printf("Elige un tipo de pizza:");
   scanf("%d",&tipoPizza);

   if (tipoPizza==1){
    printf("Estos son los ingredientes:\n1.Pimiento\n2.Tofu\n Elige(1 o 2):");
    scanf("%d", &ingrediente);
    printf("Pizza vegetariana con:Mozzarella,Tomate,");

    if (ingrediente==1)
        printf("Pimiento\n");
    else if (ingrediente==2)
        printf("Tofu\n");
    }else if (tipoPizza==2) {
        printf("Ingredientes:\n1.Peperoni\n2.Jamón\n3.Salmón\n Elige (1,2 o 3):");
        scanf("%d",&ingrediente);
        printf("Pizza no vegetariana con:Mozzarella,Tomate,");

    } else {
        printf("No hay\n");
    }
    return 0;
}
