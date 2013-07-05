int main()
{
    int n,i,z;
    int suma=0,cantidad=0;
    printf("Digite un numero para calcular los numeros perfectos que hay hasta el mismo\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {suma=0;
        for(z=1;z<i;z++)
        {
            if(i%z==0)
                suma+=z;


        }
        if(suma==i)
            cantidad++;

    }
    printf("Hay %d numero(s) perfecto(s)",cantidad);

}
