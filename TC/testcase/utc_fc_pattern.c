#include <tet_api.h>

static void startup(void);
static void cleanup(void);

void (*tet_startup)(void) = startup;
void (*tet_cleanup)(void) = cleanup;

static void utc_fc_pattern(void);

struct tet_testlist tet_testlist[] = {
	{ utc_fc_pattern, 1 },
	{ NULL, 0 },
};

static void startup(void)
{
	/* start of TC */
}

static void cleanup(void)
{
	/* end of TC */
}

static void utc_fc_pattern(void)
{
	int ret;
	ret = system("fc-pattern");
	if(WEXITSTATUS(ret) == 0)
		dts_pass("utc_fc_pattern");
	else
		dts_fail("utc_fc_pattern");
}
