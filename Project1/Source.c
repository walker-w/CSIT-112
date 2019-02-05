#include <stdio.h>
#include <math.h> 

int main(void) {
	double wavelength;
	double t[] = { 14.16 , 16.41 , 23.55 , 27.94 };
	int counter = 0;

	wavelength = 0.1542;

	printf("%-30s%-30s%-30s%-30s%-30s\n", "Angle", "d", "d square ratio", "doubled", "tripled");

	double d[4];
	
	d[0] = wavelength / sin(t[0] * 0.01745329);
	d[1] = wavelength / sin(t[1] * 0.01745329);
	d[2] = wavelength / sin(t[2] * 0.01745329);
	d[3] = wavelength / sin(t[3] * 0.01745329);


	while (counter <= 3) {
		double d_ratio, doubled, tripled;
		d_ratio = (d[0] * d[0]) / (d[counter] * d[counter]);
		doubled = d_ratio * 2;
		tripled = d_ratio * 3;
		printf("%-30.4f%-30.4f%-30.4f%-30.4f%-30.4f\n", t[counter], d[counter], d_ratio, doubled, tripled);
		counter = counter + 1;
	}
	
}