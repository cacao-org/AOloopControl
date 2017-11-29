/**
 * @file    AOloopControl_dmwrite.c 
 * @brief   AO loop Control functions PRIMARY AND FILTERED DM WRITE  
 * 
 * REAL TIME COMPUTING ROUTINES
 *  
 * @author  O. Guyon
 * @date    24 nov 2017
 *
 * 
 * @bug No known bugs.
 * 
 */




#define _GNU_SOURCE

//libraries created by O. Guyon 

#include "CommandLineInterface/CLIcore.h"
#include "AOloopControl/AOloopControl.h"


extern DATA data;

#define NB_AOloopcontrol 10 // max number of loops
//long LOOPNUMBER = 0; // current loop index

static int AOlooploadconf_init = 0;

#define AOconfname "/tmp/AOconf.shm"
AOLOOPCONTROL_CONF *AOconf; // configuration - this can be an array
AOloopControl_var aoloopcontrol_var;





int_fast8_t AOloopControl_DMprimaryWrite_on()
{
    if(aoloopcontrol_var.AOloopcontrol_meminit==0)
        AOloopControl_InitializeMemory(1);

    AOconf[aoloopcontrol_var.LOOPNUMBER].DMprimaryWriteON = 1;
    AOloopControl_perfTest_showparams(aoloopcontrol_var.LOOPNUMBER);

    return 0;
}


int_fast8_t AOloopControl_DMprimaryWrite_off()
{
    if(aoloopcontrol_var.AOloopcontrol_meminit==0)
        AOloopControl_InitializeMemory(1);

    AOconf[aoloopcontrol_var.LOOPNUMBER].DMprimaryWriteON = 0;
    AOloopControl_perfTest_showparams(aoloopcontrol_var.LOOPNUMBER);

    return 0;
}


int_fast8_t AOloopControl_DMfilteredWrite_on()
{
    if(aoloopcontrol_var.AOloopcontrol_meminit==0)
        AOloopControl_InitializeMemory(1);

    AOconf[aoloopcontrol_var.LOOPNUMBER].DMfilteredWriteON = 1;
    AOloopControl_perfTest_showparams(aoloopcontrol_var.LOOPNUMBER);

    return 0;
}


int_fast8_t AOloopControl_DMfilteredWrite_off()
{
    if(aoloopcontrol_var.AOloopcontrol_meminit==0)
        AOloopControl_InitializeMemory(1);

    AOconf[aoloopcontrol_var.LOOPNUMBER].DMfilteredWriteON = 0;
    AOloopControl_perfTest_showparams(aoloopcontrol_var.LOOPNUMBER);

    return 0;
}
