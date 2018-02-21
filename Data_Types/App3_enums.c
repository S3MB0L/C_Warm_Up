#include <stdio.h>

main()
{
    enum aylar
    {
      OCAK,
      SUBAT,
      MART,
      NISAN,
      MAYIS,
      HAZIRAN,
      TEMMUZ,
      AGUSTOS,
      EYLUL,
      EKIM,
      KASIM,
      ARALIK
    };
    for(int i=0;i<=ARALIK;i++)
      printf("%d\n",i+1);

    enum gunler
    {
      PAZARTESI,
      SALI,
      CARSAMBA,
      PERSEMBE,
      CUMA,
      CUMARTESI,
      PAZAR
    };
    for(int i=0;i<=PAZAR;i++)
      printf("%d\n",i+1);
}
