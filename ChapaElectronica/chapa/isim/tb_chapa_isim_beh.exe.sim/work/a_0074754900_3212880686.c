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
static const char *ng0 = "C:/Users/MiPC/Desktop/chapa/chapa/chapa.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0074754900_3212880686_p_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 4624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t7);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4496);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t3 = (t0 + 7448U);
    t5 = (t0 + 7524);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 2;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t3, t5, t8);
    if (t13 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7527);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB2;

LAB4:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7530);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB2;

LAB5:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7533);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7536);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB2;

LAB7:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7539);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB28;

LAB30:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7542);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB31;

LAB32:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB29:    goto LAB2;

LAB8:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7545);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB33;

LAB35:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7548);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB36;

LAB37:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);

LAB34:    goto LAB2;

LAB9:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7551);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB39:    goto LAB2;

LAB10:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7554);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB2;

LAB11:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7557);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);

LAB45:    goto LAB2;

LAB12:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7560);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB47;

LAB49:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB48:    goto LAB2;

LAB13:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7448U);
    t3 = (t0 + 7563);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB50;

LAB52:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);

LAB51:    goto LAB2;

LAB14:    xsi_set_current_line(28, ng0);
    t10 = (t0 + 4688);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)1;
    xsi_driver_first_trans_fast(t10);
    goto LAB15;

LAB17:    xsi_set_current_line(30, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_driver_first_trans_fast(t6);
    goto LAB15;

LAB19:    xsi_set_current_line(36, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t6);
    goto LAB20;

LAB22:    xsi_set_current_line(42, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)5;
    xsi_driver_first_trans_fast(t6);
    goto LAB23;

LAB25:    xsi_set_current_line(48, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB26;

LAB28:    xsi_set_current_line(54, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    goto LAB29;

LAB31:    xsi_set_current_line(56, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t6);
    goto LAB29;

LAB33:    xsi_set_current_line(62, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB34;

LAB36:    xsi_set_current_line(64, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)5;
    xsi_driver_first_trans_fast(t6);
    goto LAB34;

LAB38:    xsi_set_current_line(70, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)9;
    xsi_driver_first_trans_fast(t6);
    goto LAB39;

LAB41:    xsi_set_current_line(76, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)10;
    xsi_driver_first_trans_fast(t6);
    goto LAB42;

LAB44:    xsi_set_current_line(82, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_driver_first_trans_fast(t6);
    goto LAB45;

LAB47:    xsi_set_current_line(88, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)9;
    xsi_driver_first_trans_fast(t6);
    goto LAB48;

LAB50:    xsi_set_current_line(94, ng0);
    t6 = (t0 + 4688);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)10;
    xsi_driver_first_trans_fast(t6);
    goto LAB51;

}

static void work_a_0074754900_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4512);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t3 = (t0 + 2448U);
    t6 = *((char **)t3);
    t7 = *((int *)t6);
    t8 = (t5 == t7);
    if (t8 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t7 = (t5 + 1);
    t1 = (t0 + 4752);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t7;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 4752);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = 0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 4816);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_0074754900_3212880686_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16};

LAB0:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4528);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(116, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(117, ng0);
    t6 = (t0 + 7566);
    t8 = (t0 + 4880);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t6, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB5;

LAB7:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 7568);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB8:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 7570);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB9:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 7572);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB10:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 7574);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB11:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 7576);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB12:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 7578);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB13:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 7580);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB14:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 7582);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB15:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 7584);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB16:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 7586);
    t4 = (t0 + 4880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

}

static void work_a_0074754900_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(132, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4944);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4544);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0074754900_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0074754900_3212880686_p_0,(void *)work_a_0074754900_3212880686_p_1,(void *)work_a_0074754900_3212880686_p_2,(void *)work_a_0074754900_3212880686_p_3};
	xsi_register_didat("work_a_0074754900_3212880686", "isim/tb_chapa_isim_beh.exe.sim/work/a_0074754900_3212880686.didat");
	xsi_register_executes(pe);
}
