################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../._main.c \
../sensorbd_main.c 

OBJS += \
./._main.o \
./sensorbd_main.o 

C_DEPS += \
./._main.d \
./sensorbd_main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARTIK GCC C Compiler'
	arm-none-eabi-gcc  -D__TINYARA__ -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/include" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/include/apps" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/framework_include" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/apps_include" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/apps_include/netutils" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/artik-sdk_include" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/artik-sdk_include/base" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/artik-sdk_include/connectivity" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/artik-sdk_include/systemio" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/artik-sdk_include/wifi" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/artik-sdk_include/lwm2m" -I"/Applications/ARTIK/SDK/A053/v1.6/libsdk/typical/artik-sdk_include/mqtt" -O0 -ffunction-sections -fdata-sections -fno-builtin -fno-strict-aliasing -fno-strength-reduce -fomit-frame-pointer -Wstrict-prototypes -Wshadow -Wno-implicit-function-declaration -Wno-unused-function -Wno-unused-but-set-variable -DAPP_STACKSIZE=2048 -DAPP_PRIORITY=100 -mcpu=cortex-r4 -mfpu=vfpv3 -g -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


