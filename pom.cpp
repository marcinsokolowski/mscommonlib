#include <stdio.h>


main()
{
	double x = double(2.0)* double(3.14159265358979323846);
	printf("%.20f\n",x);

	double deg_to_rad = 3.14159265358979323846/180.00;
	printf("deg_to_rad = %.20f\n",deg_to_rad);

	double rad_to_deg = 180.00/3.14159265358979323846;
	printf("rad_to_deg = %.20f\n",rad_to_deg);

	double rad_to_h = 12.00/3.14159265358979323846;
	printf("rad_to_h = %.20f\n",rad_to_h);

	double h_to_rad = 3.14159265358979323846/12.00;
	printf("h_to_rad = %.20f\n",h_to_rad);

	// double ang = double(330.00)*double(3.14159265358979323846/180.00);
	double ang = double(330.00)*double(double(3.14159265358911111111)/double(180.00));
	// double test = ang*3.81971863420548807255;
	// double test = ang*(12.000000000000000000000/3.14159265358979323846);
	double test = ang*(double(12.000000000000000000000)/double(3.14159265358911111111));

	// test = (330.00)*(12.00/180.00);
	printf("test = %.20f\n",test);
}
