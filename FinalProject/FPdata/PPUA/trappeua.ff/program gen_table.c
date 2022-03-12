#include <stdio.h>
#include <math.h>

main()
{
    FILE    *fout;
    double  r;

    fout = fopen("table_example.xvg", "w");
    fprintf(fout, "#\n# Example LJ 6-12 Potential\n#\n");

    for (r=0; r<=3; r+=0.002) {

        double f = 1/r;
        double fprime = 1/(pow(r,2));

        double g = -1/(pow(r,6));
        double gprime = -6/(pow(r,7));

        double h = 1/(pow(r,12));
        double hprime = 12/(pow(r,13));

        /* print output */
        if (r<0.04) {
            fprintf(fout, "%12.10e   %12.10e %12.10e   %12.10e %12.10e   %12.10e %12.10e\n", r,0.0,0.0,0.0,0.0,0.0,0.0);
        } else {
            fprintf(fout, "%12.10e   %12.10e %12.10e   %12.10e %12.10e   %12.10e %12.10e\n", r,f,fprime,g,gprime,h,hprime);
        }
    }

    fclose(fout);
    return(0);
}