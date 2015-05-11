/** Code auto-generated by cOde 0.2 **/
#include <R.h> 
 #include <math.h> 

static double parms[86];
static double forc[1];
static double cons[0];

#define p1 parms[0] 
 #define p5 parms[1] 
 #define p2 parms[2] 
 #define p3 parms[3] 
 #define p4 parms[4] 
 #define s_STAT parms[5] 
 #define y0_0 parms[6] 
 #define y1_0 parms[7] 
 #define y2_0 parms[8] 
 #define y3_0 parms[9] 
 #define y4_0 parms[10] 
 #define y5_0 parms[11] 
 #define y6_0 parms[12] 
 #define y7_0 parms[13] 
 #define y8_0 parms[14] 
 #define y9_0 parms[15] 
 #define y10_0 parms[16] 
 #define y11_0 parms[17] 
 #define y12_0 parms[18] 
 #define y13_0 parms[19] 
 #define y14_0 parms[20] 
 #define y15_0 parms[21] 
 #define y16_0 parms[22] 
 #define y17_0 parms[23] 
 #define y18_0 parms[24] 
 #define y19_0 parms[25] 
 #define y20_0 parms[26] 
 #define y21_0 parms[27] 
 #define y22_0 parms[28] 
 #define y23_0 parms[29] 
 #define y24_0 parms[30] 
 #define y25_0 parms[31] 
 #define y26_0 parms[32] 
 #define y27_0 parms[33] 
 #define y28_0 parms[34] 
 #define y29_0 parms[35] 
 #define y30_0 parms[36] 
 #define y31_0 parms[37] 
 #define y32_0 parms[38] 
 #define y33_0 parms[39] 
 #define y34_0 parms[40] 
 #define y35_0 parms[41] 
 #define y36_0 parms[42] 
 #define y37_0 parms[43] 
 #define y38_0 parms[44] 
 #define y39_0 parms[45] 
 #define y40_0 parms[46] 
 #define y41_0 parms[47] 
 #define y42_0 parms[48] 
 #define y43_0 parms[49] 
 #define y44_0 parms[50] 
 #define y45_0 parms[51] 
 #define y46_0 parms[52] 
 #define y47_0 parms[53] 
 #define y48_0 parms[54] 
 #define y49_0 parms[55] 
 #define y50_0 parms[56] 
 #define y51_0 parms[57] 
 #define y52_0 parms[58] 
 #define y53_0 parms[59] 
 #define y54_0 parms[60] 
 #define y55_0 parms[61] 
 #define y56_0 parms[62] 
 #define y57_0 parms[63] 
 #define y58_0 parms[64] 
 #define y59_0 parms[65] 
 #define y60_0 parms[66] 
 #define y61_0 parms[67] 
 #define y62_0 parms[68] 
 #define y63_0 parms[69] 
 #define y64_0 parms[70] 
 #define y65_0 parms[71] 
 #define y66_0 parms[72] 
 #define y67_0 parms[73] 
 #define y68_0 parms[74] 
 #define y69_0 parms[75] 
 #define y70_0 parms[76] 
 #define y71_0 parms[77] 
 #define y72_0 parms[78] 
 #define y73_0 parms[79] 
 #define y74_0 parms[80] 
 #define y75_0 parms[81] 
 #define y76_0 parms[82] 
 #define y77_0 parms[83] 
 #define y78_0 parms[84] 
 #define y79_0 parms[85] 
 #define pEpoR forc[0] 

void initmod(void (* odeparms)(int *, double *)) {
	 int N=86;
	 odeparms(&N, parms);
}

void initforc(void (* odeforcs)(int *, double *)) {
	 int N=1;
	 odeforcs(&N, forc);
}

/** Derivatives (ODE system) **/
void derivs (int *n, double *t, double *y, double *ydot, double *RPAR, int *IPAR) {

	 double time = *t;

	 ydot[0] = -1*(p1*pEpoR*y[0])+1*(p5*y[8]);
 	 ydot[1] = 1*(p1*pEpoR*y[0])-2*(p2*y[1]*y[1]);
 	 ydot[2] = 1*(p2*y[1]*y[1])-1*(p3*y[2]);
 	 ydot[3] = 1*(p3*y[2])-1*(p4*y[3]);
 	 ydot[4] = 2*(p4*y[3])-1*(p5*y[4]);
 	 ydot[5] = 1*(p5*y[4])-1*(p5*y[5]);
 	 ydot[6] = 1*(p5*y[5])-1*(p5*y[6]);
 	 ydot[7] = 1*(p5*y[6])-1*(p5*y[7]);
 	 ydot[8] = 1*(p5*y[7])-1*(p5*y[8]);
 	 ydot[9] = (1)*(-1*(p1*pEpoR*y[0])+1*(p5*y[8]))+(1)*(1*(p1*pEpoR*y[0])-2*(p2*y[1]*y[1]))+(2)*(1*(p2*y[1]*y[1])-1*(p3*y[2]));
 	 ydot[10] = 0+(s_STAT)*(1*(p1*pEpoR*y[0])-2*(p2*y[1]*y[1]))+(s_STAT*2)*(1*(p2*y[1]*y[1])-1*(p3*y[2]));
 	 ydot[11] = (-(p1*pEpoR))*(y[11])+(p5)*(y[19]);
 	 ydot[12] = (p1*pEpoR)*(y[11])+(-(2*(p2*y[1]+p2*y[1])))*(y[12]);
 	 ydot[13] = (p2*y[1]+p2*y[1])*(y[12])+(-p3)*(y[13]);
 	 ydot[14] = (p3)*(y[13])+(-p4)*(y[14]);
 	 ydot[15] = (2*p4)*(y[14])+(-p5)*(y[15]);
 	 ydot[16] = (p5)*(y[15])+(-p5)*(y[16]);
 	 ydot[17] = (p5)*(y[16])+(-p5)*(y[17]);
 	 ydot[18] = (p5)*(y[17])+(-p5)*(y[18]);
 	 ydot[19] = (p5)*(y[18])+(-p5)*(y[19]);
 	 ydot[20] = ((1)*(p1*pEpoR)-(1)*(p1*pEpoR))*(y[11])+((2)*(p2*y[1]+p2*y[1])-(1)*(2*(p2*y[1]+p2*y[1])))*(y[12])+(-((2)*p3))*(y[13])+((1)*p5)*(y[19]);
 	 ydot[21] = ((s_STAT)*(p1*pEpoR))*(y[11])+((s_STAT*2)*(p2*y[1]+p2*y[1])-(s_STAT)*(2*(p2*y[1]+p2*y[1])))*(y[12])+(-((s_STAT*2)*p3))*(y[13]);
 	 ydot[22] = ((1)*(p1*pEpoR)-(1)*(p1*pEpoR))*(0)+((2)*(p2*y[1]+p2*y[1])-(1)*(2*(p2*y[1]+p2*y[1])))*(0)+(-((2)*p3))*(0)+((1)*p5)*(0);
 	 ydot[23] = ((s_STAT)*(p1*pEpoR))*(0)+((s_STAT*2)*(p2*y[1]+p2*y[1])-(s_STAT)*(2*(p2*y[1]+p2*y[1])))*(0)+(-((s_STAT*2)*p3))*(0);
 	 ydot[24] = (-(p1*pEpoR))*(y[24])+(p5)*(y[32])+-(pEpoR*y[0]);
 	 ydot[25] = (p1*pEpoR)*(y[24])+(-(2*(p2*y[1]+p2*y[1])))*(y[25])+pEpoR*y[0];
 	 ydot[26] = (p2*y[1]+p2*y[1])*(y[25])+(-p3)*(y[26]);
 	 ydot[27] = (p3)*(y[26])+(-p4)*(y[27]);
 	 ydot[28] = (2*p4)*(y[27])+(-p5)*(y[28]);
 	 ydot[29] = (p5)*(y[28])+(-p5)*(y[29]);
 	 ydot[30] = (p5)*(y[29])+(-p5)*(y[30]);
 	 ydot[31] = (p5)*(y[30])+(-p5)*(y[31]);
 	 ydot[32] = (p5)*(y[31])+(-p5)*(y[32]);
 	 ydot[33] = ((1)*(p1*pEpoR)-(1)*(p1*pEpoR))*(y[24])+((2)*(p2*y[1]+p2*y[1])-(1)*(2*(p2*y[1]+p2*y[1])))*(y[25])+(-((2)*p3))*(y[26])+((1)*p5)*(y[32])+(1)*(pEpoR*y[0])-(1)*(pEpoR*y[0]);
 	 ydot[34] = ((s_STAT)*(p1*pEpoR))*(y[24])+((s_STAT*2)*(p2*y[1]+p2*y[1])-(s_STAT)*(2*(p2*y[1]+p2*y[1])))*(y[25])+(-((s_STAT*2)*p3))*(y[26])+(s_STAT)*(pEpoR*y[0]);
 	 ydot[35] = (-(p1*pEpoR))*(y[35])+(p5)*(y[43])+y[8];
 	 ydot[36] = (p1*pEpoR)*(y[35])+(-(2*(p2*y[1]+p2*y[1])))*(y[36]);
 	 ydot[37] = (p2*y[1]+p2*y[1])*(y[36])+(-p3)*(y[37]);
 	 ydot[38] = (p3)*(y[37])+(-p4)*(y[38]);
 	 ydot[39] = (2*p4)*(y[38])+(-p5)*(y[39])+-y[4];
 	 ydot[40] = (p5)*(y[39])+(-p5)*(y[40])+y[4]-y[5];
 	 ydot[41] = (p5)*(y[40])+(-p5)*(y[41])+y[5]-y[6];
 	 ydot[42] = (p5)*(y[41])+(-p5)*(y[42])+y[6]-y[7];
 	 ydot[43] = (p5)*(y[42])+(-p5)*(y[43])+y[7]-y[8];
 	 ydot[44] = ((1)*(p1*pEpoR)-(1)*(p1*pEpoR))*(y[35])+((2)*(p2*y[1]+p2*y[1])-(1)*(2*(p2*y[1]+p2*y[1])))*(y[36])+(-((2)*p3))*(y[37])+((1)*p5)*(y[43])+(1)*y[8];
 	 ydot[45] = ((s_STAT)*(p1*pEpoR))*(y[35])+((s_STAT*2)*(p2*y[1]+p2*y[1])-(s_STAT)*(2*(p2*y[1]+p2*y[1])))*(y[36])+(-((s_STAT*2)*p3))*(y[37]);
 	 ydot[46] = (-(p1*pEpoR))*(y[46])+(p5)*(y[54]);
 	 ydot[47] = (p1*pEpoR)*(y[46])+(-(2*(p2*y[1]+p2*y[1])))*(y[47])+-(2*(y[1]*y[1]));
 	 ydot[48] = (p2*y[1]+p2*y[1])*(y[47])+(-p3)*(y[48])+y[1]*y[1];
 	 ydot[49] = (p3)*(y[48])+(-p4)*(y[49]);
 	 ydot[50] = (2*p4)*(y[49])+(-p5)*(y[50]);
 	 ydot[51] = (p5)*(y[50])+(-p5)*(y[51]);
 	 ydot[52] = (p5)*(y[51])+(-p5)*(y[52]);
 	 ydot[53] = (p5)*(y[52])+(-p5)*(y[53]);
 	 ydot[54] = (p5)*(y[53])+(-p5)*(y[54]);
 	 ydot[55] = ((1)*(p1*pEpoR)-(1)*(p1*pEpoR))*(y[46])+((2)*(p2*y[1]+p2*y[1])-(1)*(2*(p2*y[1]+p2*y[1])))*(y[47])+(-((2)*p3))*(y[48])+((1)*p5)*(y[54])+(2)*(y[1]*y[1])-(1)*(2*(y[1]*y[1]));
 	 ydot[56] = ((s_STAT)*(p1*pEpoR))*(y[46])+((s_STAT*2)*(p2*y[1]+p2*y[1])-(s_STAT)*(2*(p2*y[1]+p2*y[1])))*(y[47])+(-((s_STAT*2)*p3))*(y[48])+(s_STAT*2)*(y[1]*y[1])-(s_STAT)*(2*(y[1]*y[1]));
 	 ydot[57] = (-(p1*pEpoR))*(y[57])+(p5)*(y[65]);
 	 ydot[58] = (p1*pEpoR)*(y[57])+(-(2*(p2*y[1]+p2*y[1])))*(y[58]);
 	 ydot[59] = (p2*y[1]+p2*y[1])*(y[58])+(-p3)*(y[59])+-y[2];
 	 ydot[60] = (p3)*(y[59])+(-p4)*(y[60])+y[2];
 	 ydot[61] = (2*p4)*(y[60])+(-p5)*(y[61]);
 	 ydot[62] = (p5)*(y[61])+(-p5)*(y[62]);
 	 ydot[63] = (p5)*(y[62])+(-p5)*(y[63]);
 	 ydot[64] = (p5)*(y[63])+(-p5)*(y[64]);
 	 ydot[65] = (p5)*(y[64])+(-p5)*(y[65]);
 	 ydot[66] = ((1)*(p1*pEpoR)-(1)*(p1*pEpoR))*(y[57])+((2)*(p2*y[1]+p2*y[1])-(1)*(2*(p2*y[1]+p2*y[1])))*(y[58])+(-((2)*p3))*(y[59])+((1)*p5)*(y[65])+-((2)*y[2]);
 	 ydot[67] = ((s_STAT)*(p1*pEpoR))*(y[57])+((s_STAT*2)*(p2*y[1]+p2*y[1])-(s_STAT)*(2*(p2*y[1]+p2*y[1])))*(y[58])+(-((s_STAT*2)*p3))*(y[59])+-((s_STAT*2)*y[2]);
 	 ydot[68] = (-(p1*pEpoR))*(y[68])+(p5)*(y[76]);
 	 ydot[69] = (p1*pEpoR)*(y[68])+(-(2*(p2*y[1]+p2*y[1])))*(y[69]);
 	 ydot[70] = (p2*y[1]+p2*y[1])*(y[69])+(-p3)*(y[70]);
 	 ydot[71] = (p3)*(y[70])+(-p4)*(y[71])+-y[3];
 	 ydot[72] = (2*p4)*(y[71])+(-p5)*(y[72])+2*y[3];
 	 ydot[73] = (p5)*(y[72])+(-p5)*(y[73]);
 	 ydot[74] = (p5)*(y[73])+(-p5)*(y[74]);
 	 ydot[75] = (p5)*(y[74])+(-p5)*(y[75]);
 	 ydot[76] = (p5)*(y[75])+(-p5)*(y[76]);
 	 ydot[77] = ((1)*(p1*pEpoR)-(1)*(p1*pEpoR))*(y[68])+((2)*(p2*y[1]+p2*y[1])-(1)*(2*(p2*y[1]+p2*y[1])))*(y[69])+(-((2)*p3))*(y[70])+((1)*p5)*(y[76]);
 	 ydot[78] = ((s_STAT)*(p1*pEpoR))*(y[68])+((s_STAT*2)*(p2*y[1]+p2*y[1])-(s_STAT)*(2*(p2*y[1]+p2*y[1])))*(y[69])+(-((s_STAT*2)*p3))*(y[70]);
 	 ydot[79] = ((s_STAT)*(p1*pEpoR))*(0)+((s_STAT*2)*(p2*y[1]+p2*y[1])-(s_STAT)*(2*(p2*y[1]+p2*y[1])))*(0)+(-((s_STAT*2)*p3))*(0)+(1*(p1*pEpoR*y[0])-2*(p2*y[1]*y[1]))+2*(1*(p2*y[1]*y[1])-1*(p3*y[2]));

	 RPAR[0] = pEpoR;
	 for(int i=  1 ; i <  31 ; ++i) RPAR[i] = 0;
}

