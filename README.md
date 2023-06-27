# PIC_time1_Interrupt
-Written for CCS c compiler for the target device PIC16F877A__
-It is used to generate desired delay before interrupt occurs__
-The interrupt is based on the preloaded value in TMR1 word__
-T(one interrupt)=[4X(TMR1-Prescaled value)]/[f<sub>oc</sub>]__
-Use TMR1=15534 for a 0.5 second delay with no prescaler value 
