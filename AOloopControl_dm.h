#ifndef _AOLOOPCONTROL_dm_H
#define _AOLOOPCONTROL_dm_H



typedef struct
{
    char dmCname[80];
    char dmdispname[80];
    char dmRMname[80];
    uint_fast8_t DMMODE;                      /**< 0: zonal DM, 1: modal DM */
    uint_fast32_t sizexDM;                    /**< DM x size*/
    uint_fast32_t sizeyDM;                    /**< DM y size*/
    uint_fast32_t sizeDM;                     /**< DM total image (= x size * y size) */
    uint_fast32_t activeDMcnt;                /**< number of active actuators */
    uint_fast32_t sizeDM_active;              /**< only takes into account DM actuators that are active/in use */
	
} AOLOOPCONF_DMctrl;





#endif
