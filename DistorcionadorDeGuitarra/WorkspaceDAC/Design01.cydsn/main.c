#include "project.h"

int8 x;

int main(void)
{
    
   ADC_SAR_Seq_1_Start();
   ADC_SAR_Seq_1_StartConvert();
   DAC_Start();

   int8 canalADC = 0;
   int8 vmax, vmin;
   int16 digital;

   for(;;)
   {
        if(ADC_SAR_Seq_1_IsEndConversion(ADC_SAR_Seq_1_RETURN_STATUS)!= 0)
            x = ADC_SAR_Seq_1_GetResult16(canalADC);
        CONTROL_
            
        vmax = 10; vmin = 5;
        
        if(x > vmax)
        {
            x = vmax;
            Pin_2_Write(x);
        }
        else if(x < vmin)
        {
            x = vmin;
            Pin_2_Write(x);
        }
        else
            Pin_2_Write(x);
            
        //digital = Pin_5_Read() <<2 | Pin_6_Read();
        DAC_SetValue(digital);
   }
}