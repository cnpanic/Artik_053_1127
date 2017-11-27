#include <stdio.h>
#include <apps/shell/tash.h>

static void show_usage(FAR const char *program)
{
	printf("USAGE:\n");
	printf(" %s led        : gpio led on/off test\n", program);
	printf(" %s ledpwm     : pwm led on/off test\n", program);
	printf(" %s ledst      : gpio starter board led test\n", program);
	printf(" %s uart       : uart loopback test\n", program);
	printf(" %s gpio       : gpio loopback test\n", program);
	printf(" %s button     : gpio button interrupt test\n", program);
	printf(" %s pwm        : pwm buzzer test\n", program);
	printf(" %s tcs34725   : i2c rgb sensor(tcs34725) test\n", program);
	printf(" %s mpu9250    : i2c 9-axis motion tracking sensor(MPU9250) test\n", program);
	printf(" %s k6ds3      : spi 6-axis acceler sensor(K6DS3) test\n", program);
	printf(" %s lis3lv02qd : spi 3-axis acceler sensor(LIS3LV02QD) test\n", program);
	printf(" %s adctest    : adc print all channel value\n", program);
}

#ifdef CONFIG_BUILD_KERNEL // 만약 CONFIG_BUILD_KERNEL이 정의 되어 있으면 밑에 있는 int main을 쓰겠다.
int main(int argc, FAR char *argv[])
#else
int sensorbd_main(int argc, FAR char *argv[])
#endif
{
	int ret = 0;

	switch (argc) {
	case 2:
		if (strcmp(argv[1], "led") == 0) {
			ledonoff_main(argc, argv);
		} else if (strcmp(argv[1], "ledpwm") == 0) {
			ledpwm_main(argc, argv);
		} else if (strcmp(argv[1], "ledst") == 0) {
			starterled_main(argc, argv);
		} else if (strcmp(argv[1], "uart") == 0) {
			uartloopback_main(argc, argv);
		} else if (strcmp(argv[1], "gpio") == 0) {
			gpioloopback_main(argc, argv);
		} else if (strcmp(argv[1], "button") == 0) {
			switch_main(argc, argv);
		} else if (strcmp(argv[1], "pwm") == 0) {
			pwmbuzzer_main(argc, argv);
		} else if (strcmp(argv[1], "tcs34725") == 0) {
			tcs34725_main(argc, argv);
		} else if (strcmp(argv[1], "mpu9250") == 0) {
			mpu9250_main(argc, argv);
		} else if (strcmp(argv[1], "k6ds3") == 0) {
			k6ds3_main(argc, argv);
		} else if (strcmp(argv[1], "lis3lv02qd") == 0) {
			lis3lv02qd_main(argc, argv);
		} else if (strcmp(argv[1], "adctest") == 0) {
			adctest_main(argc, argv);
		} else {
			show_usage(argv[0]);
		}
		break;

	default:
		show_usage(argv[0]);
		break;
	}

	return ret;
}

int main(int argc, FAR char *argv[]){
	tash_cmd_install("sensorbd", sensorbd_main, TASH_EXECMD_SYNC); //쉘에다가 커맨드를 추가한다.sensorbd라는 커맨드를 치면 sensorbd_main으로 이동.
	return 0;
}
