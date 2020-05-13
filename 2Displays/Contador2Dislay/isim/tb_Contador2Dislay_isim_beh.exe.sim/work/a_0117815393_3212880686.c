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
static const char *ng0 = "H:/Logica Secuencial/2do Parcial/Practica14_ContadorDisplay1/BCDDisplay/BCDDisplay.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_0117815393_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3520);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t3 = (t0 + 1968U);
    t6 = *((char **)t3);
    t7 = *((int *)t6);
    t8 = (t5 == t7);
    if (t8 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t7 = (t5 + 1);
    t1 = (t0 + 3616);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t7;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 3616);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = 0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 3680);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t8;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_0117815393_3212880686_p_1(char *t0)
{
    char t5[16];
    char t21[16];
    char t36[16];
    char t51[16];
    char t66[16];
    char t81[16];
    char t96[16];
    char t111[16];
    char t126[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    int t24;
    unsigned char t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t37;
    char *t38;
    int t39;
    unsigned char t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t52;
    char *t53;
    int t54;
    unsigned char t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t67;
    char *t68;
    int t69;
    unsigned char t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t82;
    char *t83;
    int t84;
    unsigned char t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t97;
    char *t98;
    int t99;
    unsigned char t100;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t112;
    char *t113;
    int t114;
    unsigned char t115;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t127;
    char *t128;
    int t129;
    unsigned char t130;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6248U);
    t3 = (t0 + 6289);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t17 = (t0 + 1672U);
    t18 = *((char **)t17);
    t17 = (t0 + 6248U);
    t19 = (t0 + 6300);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 3;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (3 - 0);
    t9 = (t24 * 1);
    t9 = (t9 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t9;
    t25 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t18, t17, t19, t21);
    if (t25 != 0)
        goto LAB5;

LAB6:    t32 = (t0 + 1672U);
    t33 = *((char **)t32);
    t32 = (t0 + 6248U);
    t34 = (t0 + 6311);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 0;
    t38 = (t37 + 4U);
    *((int *)t38) = 3;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t39 = (3 - 0);
    t9 = (t39 * 1);
    t9 = (t9 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t9;
    t40 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t33, t32, t34, t36);
    if (t40 != 0)
        goto LAB7;

LAB8:    t47 = (t0 + 1672U);
    t48 = *((char **)t47);
    t47 = (t0 + 6248U);
    t49 = (t0 + 6322);
    t52 = (t51 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = 0;
    t53 = (t52 + 4U);
    *((int *)t53) = 3;
    t53 = (t52 + 8U);
    *((int *)t53) = 1;
    t54 = (3 - 0);
    t9 = (t54 * 1);
    t9 = (t9 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t9;
    t55 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t48, t47, t49, t51);
    if (t55 != 0)
        goto LAB9;

LAB10:    t62 = (t0 + 1672U);
    t63 = *((char **)t62);
    t62 = (t0 + 6248U);
    t64 = (t0 + 6333);
    t67 = (t66 + 0U);
    t68 = (t67 + 0U);
    *((int *)t68) = 0;
    t68 = (t67 + 4U);
    *((int *)t68) = 3;
    t68 = (t67 + 8U);
    *((int *)t68) = 1;
    t69 = (3 - 0);
    t9 = (t69 * 1);
    t9 = (t9 + 1);
    t68 = (t67 + 12U);
    *((unsigned int *)t68) = t9;
    t70 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t63, t62, t64, t66);
    if (t70 != 0)
        goto LAB11;

LAB12:    t77 = (t0 + 1672U);
    t78 = *((char **)t77);
    t77 = (t0 + 6248U);
    t79 = (t0 + 6344);
    t82 = (t81 + 0U);
    t83 = (t82 + 0U);
    *((int *)t83) = 0;
    t83 = (t82 + 4U);
    *((int *)t83) = 3;
    t83 = (t82 + 8U);
    *((int *)t83) = 1;
    t84 = (3 - 0);
    t9 = (t84 * 1);
    t9 = (t9 + 1);
    t83 = (t82 + 12U);
    *((unsigned int *)t83) = t9;
    t85 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t78, t77, t79, t81);
    if (t85 != 0)
        goto LAB13;

LAB14:    t92 = (t0 + 1672U);
    t93 = *((char **)t92);
    t92 = (t0 + 6248U);
    t94 = (t0 + 6355);
    t97 = (t96 + 0U);
    t98 = (t97 + 0U);
    *((int *)t98) = 0;
    t98 = (t97 + 4U);
    *((int *)t98) = 3;
    t98 = (t97 + 8U);
    *((int *)t98) = 1;
    t99 = (3 - 0);
    t9 = (t99 * 1);
    t9 = (t9 + 1);
    t98 = (t97 + 12U);
    *((unsigned int *)t98) = t9;
    t100 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t93, t92, t94, t96);
    if (t100 != 0)
        goto LAB15;

LAB16:    t107 = (t0 + 1672U);
    t108 = *((char **)t107);
    t107 = (t0 + 6248U);
    t109 = (t0 + 6366);
    t112 = (t111 + 0U);
    t113 = (t112 + 0U);
    *((int *)t113) = 0;
    t113 = (t112 + 4U);
    *((int *)t113) = 3;
    t113 = (t112 + 8U);
    *((int *)t113) = 1;
    t114 = (3 - 0);
    t9 = (t114 * 1);
    t9 = (t9 + 1);
    t113 = (t112 + 12U);
    *((unsigned int *)t113) = t9;
    t115 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t108, t107, t109, t111);
    if (t115 != 0)
        goto LAB17;

LAB18:    t122 = (t0 + 1672U);
    t123 = *((char **)t122);
    t122 = (t0 + 6248U);
    t124 = (t0 + 6377);
    t127 = (t126 + 0U);
    t128 = (t127 + 0U);
    *((int *)t128) = 0;
    t128 = (t127 + 4U);
    *((int *)t128) = 3;
    t128 = (t127 + 8U);
    *((int *)t128) = 1;
    t129 = (3 - 0);
    t9 = (t129 * 1);
    t9 = (t9 + 1);
    t128 = (t127 + 12U);
    *((unsigned int *)t128) = t9;
    t130 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t123, t122, t124, t126);
    if (t130 != 0)
        goto LAB19;

LAB20:
LAB21:    t137 = (t0 + 6388);
    t139 = (t0 + 3744);
    t140 = (t139 + 56U);
    t141 = *((char **)t140);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    memcpy(t143, t137, 7U);
    xsi_driver_first_trans_fast_port(t139);

LAB2:    t144 = (t0 + 3536);
    *((int *)t144) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 6293);
    t12 = (t0 + 3744);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 7U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    t23 = (t0 + 6304);
    t27 = (t0 + 3744);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t23, 7U);
    xsi_driver_first_trans_fast_port(t27);
    goto LAB2;

LAB7:    t38 = (t0 + 6315);
    t42 = (t0 + 3744);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t38, 7U);
    xsi_driver_first_trans_fast_port(t42);
    goto LAB2;

LAB9:    t53 = (t0 + 6326);
    t57 = (t0 + 3744);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memcpy(t61, t53, 7U);
    xsi_driver_first_trans_fast_port(t57);
    goto LAB2;

LAB11:    t68 = (t0 + 6337);
    t72 = (t0 + 3744);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    memcpy(t76, t68, 7U);
    xsi_driver_first_trans_fast_port(t72);
    goto LAB2;

LAB13:    t83 = (t0 + 6348);
    t87 = (t0 + 3744);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memcpy(t91, t83, 7U);
    xsi_driver_first_trans_fast_port(t87);
    goto LAB2;

LAB15:    t98 = (t0 + 6359);
    t102 = (t0 + 3744);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    memcpy(t106, t98, 7U);
    xsi_driver_first_trans_fast_port(t102);
    goto LAB2;

LAB17:    t113 = (t0 + 6370);
    t117 = (t0 + 3744);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    memcpy(t121, t113, 7U);
    xsi_driver_first_trans_fast_port(t117);
    goto LAB2;

LAB19:    t128 = (t0 + 6381);
    t132 = (t0 + 3744);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    memcpy(t136, t128, 7U);
    xsi_driver_first_trans_fast_port(t132);
    goto LAB2;

LAB22:    goto LAB2;

}


extern void work_a_0117815393_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0117815393_3212880686_p_0,(void *)work_a_0117815393_3212880686_p_1};
	xsi_register_didat("work_a_0117815393_3212880686", "isim/tb_Contador2Dislay_isim_beh.exe.sim/work/a_0117815393_3212880686.didat");
	xsi_register_executes(pe);
}
