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
static const char *ng0 = "C:/Users/olaolu-Goke/Desktop/CNN/CNN Verilog/CNN Verilog Phase 4/convolution.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {1048575, 0};
static int ng4[] = {1048576, 0};



static void Always_34_0(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB23;

LAB24:
LAB25:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1848U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    xsi_set_current_line(36, ng0);
    t61 = ((char*)((ng1)));
    t62 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 10, 0LL);
    goto LAB22;

LAB23:    xsi_set_current_line(37, ng0);

LAB26:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 1528U);
    t18 = *((char **)t13);
    t13 = (t0 + 1688U);
    t19 = *((char **)t13);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 10, t18, 9, t19, 9);
    memset(t20, 0, 8);
    t13 = (t12 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB28;

LAB27:    t26 = (t6 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t12) < *((unsigned int *)t6))
        goto LAB29;

LAB30:    t32 = (t20 + 4);
    t14 = *((unsigned int *)t32);
    t15 = (~(t14));
    t16 = *((unsigned int *)t20);
    t17 = (t16 & t15);
    t21 = (t17 != 0);
    if (t21 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(41, ng0);

LAB36:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB34:    goto LAB25;

LAB28:    t31 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t20) = 1;
    goto LAB30;

LAB32:    xsi_set_current_line(38, ng0);

LAB35:    xsi_set_current_line(39, ng0);
    t33 = (t0 + 3048);
    t41 = (t33 + 56U);
    t42 = *((char **)t41);
    t55 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t42, 10, t55, 32);
    t61 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t61, t27, 0, 0, 10, 0LL);
    goto LAB34;

}

static void Always_48_1(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4552);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB24;

LAB25:
LAB26:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1848U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    xsi_set_current_line(49, ng0);

LAB23:    xsi_set_current_line(50, ng0);
    t61 = ((char*)((ng1)));
    t62 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 27, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB24:    xsi_set_current_line(53, ng0);

LAB27:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 1528U);
    t18 = *((char **)t13);
    t13 = (t0 + 1688U);
    t19 = *((char **)t13);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 10, t18, 9, t19, 9);
    memset(t20, 0, 8);
    t13 = (t12 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB29;

LAB28:    t26 = (t6 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB29;

LAB32:    if (*((unsigned int *)t12) < *((unsigned int *)t6))
        goto LAB30;

LAB31:    t32 = (t20 + 4);
    t14 = *((unsigned int *)t32);
    t15 = (~(t14));
    t16 = *((unsigned int *)t20);
    t17 = (t16 & t15);
    t21 = (t17 != 0);
    if (t21 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(58, ng0);

LAB37:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 27, t5, 32);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t5, 32);
    memset(t20, 0, 8);
    xsi_vlog_signed_less(t20, 32, t4, 27, t6, 32);
    t12 = (t20 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t20);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 21, 0LL);

LAB43:
LAB40:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 27, t3, 9, t4, 9);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t6, 0, 0, 27, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB35:    goto LAB26;

LAB29:    t31 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB31;

LAB30:    *((unsigned int *)t20) = 1;
    goto LAB31;

LAB33:    xsi_set_current_line(54, ng0);

LAB36:    xsi_set_current_line(55, ng0);
    t33 = (t0 + 2888);
    t41 = (t33 + 56U);
    t42 = *((char **)t41);
    t55 = (t0 + 1208U);
    t61 = *((char **)t55);
    t55 = (t0 + 1368U);
    t62 = *((char **)t55);
    memset(t27, 0, 8);
    xsi_vlog_signed_multiply(t27, 27, t61, 9, t62, 9);
    memset(t63, 0, 8);
    xsi_vlog_signed_add(t63, 27, t42, 27, t27, 27);
    t55 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t55, t63, 0, 0, 27, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB38:    xsi_set_current_line(60, ng0);
    t13 = ((char*)((ng3)));
    t18 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 21, 0LL);
    goto LAB40;

LAB41:    xsi_set_current_line(62, ng0);
    t13 = ((char*)((ng4)));
    memset(t27, 0, 8);
    xsi_vlog_signed_unary_minus(t27, 32, t13, 32);
    t18 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t18, t27, 0, 0, 21, 0LL);
    goto LAB43;

}


extern void work_m_00000000001895379848_3970665056_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000001895379848_3970665056", "isim/tb_isim_beh.exe.sim/work/m_00000000001895379848_3970665056.didat");
	xsi_register_executes(pe);
}
