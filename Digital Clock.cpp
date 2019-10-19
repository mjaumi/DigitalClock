/*
    Original Author: S. M. Shahriar Nirjon
    Last Modified by: Mohammad Saifur Rahman
    last modified: October 13, 2015
    Version: 2.0
*/




# include "iGraphics.h"
# include <time.h>
# include <math.h>

/*
	function iDraw() is called again and again by the system.
*/

int H, M, S;
int i = 0;
int l = 0;
int r = 0;
int g = 255;
int b = 0;




void iDraw()
{
	//place your drawing codes here
	



	iClear();

	time_t presenttime;
	struct tm* storedtime;
	presenttime = time(NULL);
	storedtime = localtime(&presenttime);

	H = (storedtime->tm_hour);
	M = (storedtime->tm_min);
	S = (storedtime->tm_sec);

	iSetColor(r, g, b);
	
	iText(400, 300, "Press [i] to get International time and [l] to get Local time",GLUT_BITMAP_TIMES_ROMAN_24);

	if(l == 1)
	{
		if(H < 12)
		{
			// A
			iFilledRectangle(1610, 700, 2, 97.5); // left bottom
			iFilledRectangle(1610, 805, 2, 97.5); // left top
			iFilledRectangle(1615, 905, 97.5, 2); //top
			iFilledRectangle(1715, 805, 2, 97.5); // right top
			iFilledRectangle(1715, 700, 2, 97.5); //right bottom
			iFilledRectangle(1615, 802.5, 97.5, 2); //middle

			// m
			iFilledRectangle(1750, 700, 2, 97.5); // left bottom
			iFilledRectangle(1855, 700, 2, 97.5); //right bottom
			iFilledRectangle(1802.5, 700, 2, 97.5); //middle
			iFilledRectangle(1755, 800, 43.75, 2); //top right
			iFilledRectangle(1805.75, 800, 47.75, 2); //top left
			
			if(H == 0)
			{
				H += 12;
			}	
		}

		else if(H > 12)
		{
			// P
			iFilledRectangle(1610, 700, 2, 97.5); // left bottom
			iFilledRectangle(1610, 805, 2, 97.5); // left top
			iFilledRectangle(1615, 905, 97.5, 2); //top
			iFilledRectangle(1715, 805, 2, 97.5); // right top
			iFilledRectangle(1615, 802.5, 97.5, 2); //middle

			// m
			iFilledRectangle(1750, 700, 2, 97.5); // left bottom
			iFilledRectangle(1855, 700, 2, 97.5); //right bottom
			iFilledRectangle(1802.5, 700, 2, 97.5); //middle
			iFilledRectangle(1755, 800, 43.75, 2); //top right
			iFilledRectangle(1805.75, 800, 47.75, 2); //top left
			H -= 12;
		}

		else if(H == 12)
		{
			// P
			iFilledRectangle(1610, 700, 2, 97.5); // left bottom
			iFilledRectangle(1610, 805, 2, 97.5); // left top
			iFilledRectangle(1615, 905, 97.5, 2); //top
			iFilledRectangle(1715, 805, 2, 97.5); // right top
			iFilledRectangle(1615, 802.5, 97.5, 2); //middle

			// m
			iFilledRectangle(1750, 700, 2, 97.5); // left bottom
			iFilledRectangle(1855, 700, 2, 97.5); //right bottom
			iFilledRectangle(1802.5, 700, 2, 97.5); //middle
			iFilledRectangle(1755, 800, 43.75, 2); //top right
			iFilledRectangle(1805.75, 800, 47.75, 2); //top left
		}
	}

	if (H/10 == 0)
	{
		//1st eight
		iFilledRectangle(70, 400, 2, 290); // left bottom
		iFilledRectangle(70, 700, 2, 290); // left top
		iFilledRectangle(80, 995, 290, 2); //top
		iFilledRectangle(380, 700, 2, 290); // right top
		iFilledRectangle(380, 400, 2, 290); //right bottom
		iFilledRectangle(80, 395, 290, 2); //bottom
		
	}

	if (H/10 == 1)
	{
		//1st eight
		
		iFilledRectangle(380, 700, 2, 290); // right top
		iFilledRectangle(380, 400, 2, 290); //right bottom
	
	}

	if (H/10 == 2)
	{
		//1st eight
		iFilledRectangle(70, 400, 2, 290); // left bottom
		iFilledRectangle(80, 995, 290, 2); //top
		iFilledRectangle(380, 700, 2, 290); // right top
		iFilledRectangle(80, 395, 290, 2); //bottom
		iFilledRectangle(80, 695, 290, 2); //middle
	}

	if (H%10 == 0)
	{
		//2nd eight
	    iFilledRectangle(450, 400, 2, 290); // left bottom
	    iFilledRectangle(450, 700, 2, 290); // left top
	    iFilledRectangle(460, 995, 290, 2); //top
		iFilledRectangle(760, 700, 2, 290); // right top
		iFilledRectangle(760, 400, 2, 290); //right bottom
		iFilledRectangle(460, 395, 290, 2); //bottom
	}

	if (H%10 == 1)
	{
		//2nd eight
		iFilledRectangle(760, 700, 2, 290); // right top
		iFilledRectangle(760, 400, 2, 290); //right bottom
	}

	if (H%10 == 2)
	{
		//2nd eight
	    iFilledRectangle(450, 400, 2, 290); // left bottom
	    iFilledRectangle(460, 995, 290, 2); //top
		iFilledRectangle(760, 700, 2, 290); // right top
		iFilledRectangle(460, 395, 290, 2); //bottom
		iFilledRectangle(460, 695, 290, 2); //middle
	}
	
	if (H%10 == 3)
	{
		//2nd eight
		iFilledRectangle(460, 995, 290, 2); //top
		iFilledRectangle(760, 700, 2, 290); // right top
		iFilledRectangle(760, 400, 2, 290); //right bottom
		iFilledRectangle(460, 395, 290, 2); //bottom
		iFilledRectangle(460, 695, 290, 2); //middle
	}

	if (H%10 == 4)
	{
		//2nd eight
		iFilledRectangle(450, 700, 2, 290); // left top
		iFilledRectangle(760, 700, 2, 290); // right top
		iFilledRectangle(760, 400, 2, 290); //right bottom
		iFilledRectangle(460, 695, 290, 2); //middle
	}

	if (H%10 == 5)
	{
		//2nd eight
		iFilledRectangle(450, 700, 2, 290); // left top
		iFilledRectangle(460, 995, 290, 2); //top
		iFilledRectangle(760, 400, 2, 290); //right bottom
		iFilledRectangle(460, 395, 290, 2); //bottom
		iFilledRectangle(460, 695, 290, 2); //middle
	}

	if (H%10 == 6)
	{
		//2nd eight
		iFilledRectangle(450, 400, 2, 290); // left bottom
		iFilledRectangle(450, 700, 2, 290); // left top
		iFilledRectangle(460, 995, 290, 2); //top
		iFilledRectangle(760, 400, 2, 290); //right bottom
		iFilledRectangle(460, 395, 290, 2); //bottom
		iFilledRectangle(460, 695, 290, 2); //middle
	}

	if (H%10 == 7)
	{
		//2nd eight
		iFilledRectangle(460, 995, 290, 2); //top
		iFilledRectangle(760, 700, 2, 290); // right top
		iFilledRectangle(760, 400, 2, 290); //right bottom
	}

	if (H%10 == 8)
	{
		//2nd eight
		iFilledRectangle(450, 400, 2, 290); // left bottom
		iFilledRectangle(450, 700, 2, 290); // left top
		iFilledRectangle(460, 995, 290, 2); //top
		iFilledRectangle(760, 700, 2, 290); // right top
		iFilledRectangle(760, 400, 2, 290); //right bottom
		iFilledRectangle(460, 395, 290, 2); //bottom
		iFilledRectangle(460, 695, 290, 2); //middle
	}

	if (H%10 == 9)
	{
		//2nd eight
		iFilledRectangle(450, 700, 2, 290); // left top
		iFilledRectangle(460, 995, 290, 2); //top
		iFilledRectangle(760, 700, 2, 290); // right top
		iFilledRectangle(760, 400, 2, 290); //right bottom
		iFilledRectangle(460, 395, 290, 2); //bottom
		iFilledRectangle(460, 695, 290, 2); //middle
	}

	if (M/10 == 0)
	{
		//3rd eight
		iFilledRectangle(850, 400, 2, 290); // left bottom
		iFilledRectangle(850, 700, 2, 290); // left top
		iFilledRectangle(860, 995, 290, 2); //top
		iFilledRectangle(1160, 700, 2, 290); // right top
		iFilledRectangle(1160, 400, 2, 290); //right bottom
		iFilledRectangle(860, 395, 290, 2); //bottom
	}

	if (M/10 == 1)
	{
		//3rd eight
		iFilledRectangle(1160, 700, 2, 290); // right top
		iFilledRectangle(1160, 400, 2, 290); //right bottom
	}

	if (M/10 == 2)
	{
		//3rd eight
		iFilledRectangle(850, 400, 2, 290); // left bottom
		iFilledRectangle(860, 995, 290, 2); //top
		iFilledRectangle(1160, 700, 2, 290); // right top
		iFilledRectangle(860, 395, 290, 2); //bottom
		iFilledRectangle(860, 695, 290, 2); //middle
	}

	if (M/10 == 3)
	{
		//3rd eight
		iFilledRectangle(860, 995, 290, 2); //top
		iFilledRectangle(1160, 700, 2, 290); // right top
		iFilledRectangle(1160, 400, 2, 290); //right bottom
		iFilledRectangle(860, 395, 290, 2); //bottom
		iFilledRectangle(860, 695, 290, 2); //middle
	}

	if (M/10 == 4)
	{
		//3rd eight
		iFilledRectangle(850, 700, 2, 290); // left top
		iFilledRectangle(1160, 700, 2, 290); // right top
		iFilledRectangle(1160, 400, 2, 290); //right bottom
		iFilledRectangle(860, 695, 290, 2); //middle
	}

	if (M/10 == 5)
	{
		//3rd eight
		iFilledRectangle(850, 700, 2, 290); // left top
		iFilledRectangle(860, 995, 290, 2); //top
		iFilledRectangle(1160, 400, 2, 290); //right bottom
		iFilledRectangle(860, 395, 290, 2); //bottom
		iFilledRectangle(860, 695, 290, 2); //middle
	}

	if (M%10 == 0)
	{
		//4th eight
		iFilledRectangle(1230, 400, 2, 290); // left bottom
		iFilledRectangle(1230, 700, 2, 290); // left top
		iFilledRectangle(1240, 995, 290, 2); //top
		iFilledRectangle(1540, 700, 2, 290); // right top
		iFilledRectangle(1540, 400, 2, 290); //right bottom
		iFilledRectangle(1240, 395, 290, 2); //bottom
	}

	if (M%10 == 1)
	{
		//4th eight
		iFilledRectangle(1540, 700, 2, 290); // right top
		iFilledRectangle(1540, 400, 2, 290); //right bottom
	}

	if (M%10 == 2)
	{
		//4th eight
		iFilledRectangle(1230, 400, 2, 290); // left bottom
		iFilledRectangle(1240, 995, 290, 2); //top
		iFilledRectangle(1540, 700, 2, 290); // right top
		iFilledRectangle(1240, 395, 290, 2); //bottom
		iFilledRectangle(1240, 695, 290, 2); //middle
	}

	if (M%10 == 3)
	{
		//4th eight
		iFilledRectangle(1240, 995, 290, 2); //top
		iFilledRectangle(1540, 700, 2, 290); // right top
		iFilledRectangle(1540, 400, 2, 290); //right bottom
		iFilledRectangle(1240, 395, 290, 2); //bottom
		iFilledRectangle(1240, 695, 290, 2); //middle
	}

	if (M%10 == 4)
	{
		//4th eight
		iFilledRectangle(1230, 700, 2, 290); // left top
		iFilledRectangle(1540, 700, 2, 290); // right top
		iFilledRectangle(1540, 400, 2, 290); //right bottom
		iFilledRectangle(1240, 695, 290, 2); //middle
	}

	if (M%10 == 5)
	{
		//4th eight
		iFilledRectangle(1230, 700, 2, 290); // left top
		iFilledRectangle(1240, 995, 290, 2); //top
		iFilledRectangle(1540, 400, 2, 290); //right bottom
		iFilledRectangle(1240, 395, 290, 2); //bottom
		iFilledRectangle(1240, 695, 290, 2); //middle
	}

	if (M%10 == 6)
	{
		//4th eight
		iFilledRectangle(1230, 400, 2, 290); // left bottom
		iFilledRectangle(1230, 700, 2, 290); // left top
		iFilledRectangle(1240, 995, 290, 2); //top
		iFilledRectangle(1540, 400, 2, 290); //right bottom
		iFilledRectangle(1240, 395, 290, 2); //bottom
		iFilledRectangle(1240, 695, 290, 2); //middle
	}

	if (M%10 == 7)
	{
		//4th eight
		iFilledRectangle(1240, 995, 290, 2); //top
		iFilledRectangle(1540, 700, 2, 290); // right top
		iFilledRectangle(1540, 400, 2, 290); //right bottom
	}

	if (M%10 == 8)
	{
		//4th eight
		iFilledRectangle(1230, 400, 2, 290); // left bottom
		iFilledRectangle(1230, 700, 2, 290); // left top
		iFilledRectangle(1240, 995, 290, 2); //top
		iFilledRectangle(1540, 700, 2, 290); // right top
		iFilledRectangle(1540, 400, 2, 290); //right bottom
		iFilledRectangle(1240, 395, 290, 2); //bottom
		iFilledRectangle(1240, 695, 290, 2); //middle
	}

	if (M%10 == 9)
	{
		//4th eight
		iFilledRectangle(1230, 700, 2, 290); // left top
		iFilledRectangle(1240, 995, 290, 2); //top
		iFilledRectangle(1540, 700, 2, 290); // right top
		iFilledRectangle(1540, 400, 2, 290); //right bottom
		iFilledRectangle(1240, 395, 290, 2); //bottom
		iFilledRectangle(1240, 695, 290, 2); //middle
	}

	if (S/10 == 0)
	{
		// 5th eight
		iFilledRectangle(1610, 400, 2, 97.5); // left bottom
		iFilledRectangle(1610, 505, 2, 97.5); // left top
		iFilledRectangle(1615, 605, 97.5, 2); //top
		iFilledRectangle(1715, 505, 2, 97.5); // right top
		iFilledRectangle(1715, 400, 2, 97.5); //right bottom
		iFilledRectangle(1615, 395, 97.5, 2); //bottom
	}

	if (S/10 == 1)
	{
		// 5th eight
		iFilledRectangle(1715, 505, 2, 97.5); // right top
		iFilledRectangle(1715, 400, 2, 97.5); //right bottom
	}

	if (S/10 == 2)
	{
		// 5th eight
		iFilledRectangle(1610, 400, 2, 97.5); // left bottom
		iFilledRectangle(1615, 605, 97.5, 2); //top
		iFilledRectangle(1715, 505, 2, 97.5); // right top
		iFilledRectangle(1615, 395, 97.5, 2); //bottom
		iFilledRectangle(1615, 502.5, 97.5, 2); //middle
	}

	if (S/10 == 3)
	{
		// 5th eight
		iFilledRectangle(1615, 605, 97.5, 2); //top
		iFilledRectangle(1715, 505, 2, 97.5); // right top
		iFilledRectangle(1715, 400, 2, 97.5); //right bottom
		iFilledRectangle(1615, 395, 97.5, 2); //bottom
		iFilledRectangle(1615, 502.5, 97.5, 2); //middle
	}

	if (S/10 == 4)
	{
		// 5th eight
		iFilledRectangle(1610, 505, 2, 97.5); // left top
		iFilledRectangle(1715, 505, 2, 97.5); // right top
		iFilledRectangle(1715, 400, 2, 97.5); //right bottom
		iFilledRectangle(1615, 502.5, 97.5, 2); //middle
	}

	if (S/10 == 5)
	{
		// 5th eight
		iFilledRectangle(1610, 505, 2, 97.5); // left top
		iFilledRectangle(1615, 605, 97.5, 2); //top
		iFilledRectangle(1715, 400, 2, 97.5); //right bottom
		iFilledRectangle(1615, 395, 97.5, 2); //bottom
		iFilledRectangle(1615, 502.5, 97.5, 2); //middle
	}

	if (S%10 == 0)
	{
		//6th eight
		iFilledRectangle(1750, 400, 2, 97.5); // left bottom
		iFilledRectangle(1750, 505, 2, 97.5); // left top
		iFilledRectangle(1755, 605, 97.5, 2); //top
		iFilledRectangle(1855, 505, 2, 97.5); // right top
		iFilledRectangle(1855, 400, 2, 97.5); //right bottom
		iFilledRectangle(1755, 395, 97.5, 2); //bottom
	}

	if (S%10 == 1)
	{
		//6th eight
		iFilledRectangle(1855, 505, 2, 97.5); // right top
		iFilledRectangle(1855, 400, 2, 97.5); //right bottom
	}

	if (S%10 == 2)
	{
		//6th eight
		iFilledRectangle(1750, 400, 2, 97.5); // left bottom
		iFilledRectangle(1755, 605, 97.5, 2); //top
		iFilledRectangle(1855, 505, 2, 97.5); // right top
		iFilledRectangle(1755, 395, 97.5, 2); //bottom
		iFilledRectangle(1755, 502.5, 97.5, 2); //middle
	}

	if (S%10 == 3)
	{
		//6th eight
		iFilledRectangle(1755, 605, 97.5, 2); //top
		iFilledRectangle(1855, 505, 2, 97.5); // right top
		iFilledRectangle(1855, 400, 2, 97.5); //right bottom
		iFilledRectangle(1755, 395, 97.5, 2); //bottom
		iFilledRectangle(1755, 502.5, 97.5, 2); //middle
	}

	if (S%10 == 4)
	{
		//6th eight
		iFilledRectangle(1750, 505, 2, 97.5); // left top
		iFilledRectangle(1855, 505, 2, 97.5); // right top
		iFilledRectangle(1855, 400, 2, 97.5); //right bottom
		iFilledRectangle(1755, 502.5, 97.5, 2); //middle
	}

	if (S%10 == 5)
	{
		//6th eight
		iFilledRectangle(1750, 505, 2, 97.5); // left top
		iFilledRectangle(1755, 605, 97.5, 2); //top
		iFilledRectangle(1855, 400, 2, 97.5); //right bottom
		iFilledRectangle(1755, 395, 97.5, 2); //bottom
		iFilledRectangle(1755, 502.5, 97.5, 2); //middle
	}

	if (S%10 == 6)
	{
		//6th eight
		iFilledRectangle(1750, 400, 2, 97.5); // left bottom
		iFilledRectangle(1750, 505, 2, 97.5); // left top
		iFilledRectangle(1755, 605, 97.5, 2); //top
		iFilledRectangle(1855, 400, 2, 97.5); //right bottom
		iFilledRectangle(1755, 395, 97.5, 2); //bottom
		iFilledRectangle(1755, 502.5, 97.5, 2); //middle
	}

	if (S%10 == 7)
	{
		//6th eight
		iFilledRectangle(1755, 605, 97.5, 2); //top
		iFilledRectangle(1855, 505, 2, 97.5); // right top
		iFilledRectangle(1855, 400, 2, 97.5); //right bottom
	}

	if (S%10 == 8)
	{
		//6th eight
		iFilledRectangle(1750, 400, 2, 97.5); // left bottom
		iFilledRectangle(1750, 505, 2, 97.5); // left top
		iFilledRectangle(1755, 605, 97.5, 2); //top
		iFilledRectangle(1855, 505, 2, 97.5); // right top
		iFilledRectangle(1855, 400, 2, 97.5); //right bottom
		iFilledRectangle(1755, 395, 97.5, 2); //bottom
		iFilledRectangle(1755, 502.5, 97.5, 2); //middle
	}

	if (S%10 == 9)
	{
		//6th eight
		iFilledRectangle(1750, 505, 2, 97.5); // left top
		iFilledRectangle(1755, 605, 97.5, 2); //top
		iFilledRectangle(1855, 505, 2, 97.5); // right top
		iFilledRectangle(1855, 400, 2, 97.5); //right bottom
		iFilledRectangle(1755, 395, 97.5, 2); //bottom
		iFilledRectangle(1755, 502.5, 97.5, 2); //middle
	}
	/*//1st eight
	iFilledRectangle(70, 400, 2, 290); // left bottom
	iFilledRectangle(70, 700, 2, 290); // left top
	iFilledRectangle(80, 995, 290, 2); //top
	iFilledRectangle(380, 700, 2, 290); // right top
	iFilledRectangle(380, 400, 2, 290); //right bottom
	iFilledRectangle(80, 395, 290, 2); //bottom
	iFilledRectangle(80, 695, 290, 2); //middle


	//2nd eight
	iFilledRectangle(450, 400, 2, 290); // left bottom
	iFilledRectangle(450, 700, 2, 290); // left top
	iFilledRectangle(460, 995, 290, 2); //top
	iFilledRectangle(760, 700, 2, 290); // right top
	iFilledRectangle(760, 400, 2, 290); //right bottom
	iFilledRectangle(460, 395, 290, 2); //bottom
	iFilledRectangle(460, 695, 290, 2); //middle

	

	//3rd eight
    iFilledRectangle(850, 400, 2, 290); // left bottom
	iFilledRectangle(850, 700, 2, 290); // left top
	iFilledRectangle(860, 995, 290, 2); //top
	iFilledRectangle(1160, 700, 2, 290); // right top
	iFilledRectangle(1160, 400, 2, 290); //right bottom
	iFilledRectangle(860, 395, 290, 2); //bottom
	iFilledRectangle(860, 695, 290, 2); //middle

	//4th eight
	iFilledRectangle(1230, 400, 2, 290); // left bottom
	iFilledRectangle(1230, 700, 2, 290); // left top
	iFilledRectangle(1240, 995, 290, 2); //top
	iFilledRectangle(1540, 700, 2, 290); // right top
	iFilledRectangle(1540, 400, 2, 290); //right bottom
	iFilledRectangle(1240, 395, 290, 2); //bottom
	iFilledRectangle(1240, 695, 290, 2); //middle

	// 5th eight
	iFilledRectangle(1610, 400, 2, 97.5); // left bottom
	iFilledRectangle(1610, 505, 2, 97.5); // left top
	iFilledRectangle(1615, 605, 97.5, 2); //top
	iFilledRectangle(1715, 505, 2, 97.5); // right top
	iFilledRectangle(1715, 400, 2, 97.5); //right bottom
	iFilledRectangle(1615, 395, 97.5, 2); //bottom
	iFilledRectangle(1615, 502.5, 97.5, 2); //middle

	//6th eight
	iFilledRectangle(1750, 400, 2, 97.5); // left bottom
	iFilledRectangle(1750, 505, 2, 97.5); // left top
	iFilledRectangle(1755, 605, 97.5, 2); //top
	iFilledRectangle(1855, 505, 2, 97.5); // right top
	iFilledRectangle(1855, 400, 2, 97.5); //right bottom
	iFilledRectangle(1755, 395, 97.5, 2); //bottom
	iFilledRectangle(1755, 502.5, 97.5, 2); //middle
	*/

	if(S%2 == 0)
	{
		//puku puku
	    iFilledEllipse(805, 845, 5, 25, 1000); // puku top
	    iFilledEllipse(805, 545, 5, 25, 1000); // puku bottom
	}
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	//place your code here
	

 //mposx = mx;
 //mposy = my;
 if(mx== 2){}        /*Something to do with mx*/
 else if(my== 2){}   /*Something to do with my*/

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(key == 'i')
	{
		i = 1;
		l = 0;
	}
	if (key == 'l')
	{
		i = 0;
		l = 1;
	}
	
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}

void colorChange()
{
	if(S%10 == 0)
	{
		r = rand()%255;
		g = rand()%255;
		b = rand()%255;
	}
}


int main()
{
	//place your own initialization codes here.

	iSetTimer(1000, colorChange);
	
	iInitialize(1960, 1290, "demooo");
	return 0;
}
