/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Rey Castro/UAEM Beto/9no Semestre/Arquitectura de Computadoras/Arquitectura PuertoA sale en B/Ram/Ram.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3830602496_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1192U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 6420U);
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t1);
    t13 = (t12 - 15);
    t14 = (t13 * -1);
    t15 = (4U * t14);
    t16 = (0U + t15);
    t7 = (t0 + 3616);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 4U);
    xsi_driver_first_trans_delta(t7, t16, 4U, 0LL);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1992U);
    t10 = *((char **)t3);
    t3 = (t0 + 1672U);
    t11 = *((char **)t3);
    t3 = (t0 + 6420U);
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t11, t3);
    t13 = (t12 - 15);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t12);
    t15 = (4U * t14);
    t16 = (0 + t15);
    t17 = (t10 + t16);
    t18 = (t0 + 3552);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t17, 4U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB9;

}


extern void work_a_3830602496_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3830602496_3212880686_p_0};
	xsi_register_didat("work_a_3830602496_3212880686", "isim/tb_TOP1_isim_beh.exe.sim/work/a_3830602496_3212880686.didat");
	xsi_register_executes(pe);
}
