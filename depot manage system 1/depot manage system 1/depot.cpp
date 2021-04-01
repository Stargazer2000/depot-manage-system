#include "depot.h"
void cargo_manage::start_input()
{
	fstream fp_start;
	fp_start.open(FILENAME);
	fp_start >> cargo_total_num;
	for (int i = 0;i < cargo_total_num;i++)
	{

	}
}