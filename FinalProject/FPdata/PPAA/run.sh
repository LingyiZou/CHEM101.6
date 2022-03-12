gmx grompp -f npt -c PPsol -p PP -o npt -v >& output.grompp_npt
gmx mdrun -s npt -o npt -e npt -c npt -v >& output.md_npt
gmx polystat -f npt -s npt -o rg.xvg -b 10000


