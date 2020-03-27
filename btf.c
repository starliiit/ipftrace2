#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

#include "ipftrace.h"

struct btf_debuginfo {
  int dummy;
};

__unused static int
btf_debuginfo_fill_sym2info(__unused struct btf_debuginfo *dinfo, __unused struct ipft_symsdb *sdb)
{
  fprintf(stderr, "BTF is not supported currently. Sorry.\n");
  return -1;
}

__unused static int
btf_debuginfo_destroy(__unused struct btf_debuginfo *dinfo)
{
  fprintf(stderr, "BTF is not supported currently. Sorry.\n");
  return -1;
}

int
btf_debuginfo_create(__unused struct ipft_debuginfo **dinfop)
{
  fprintf(stderr, "BTF is not supported currently. Sorry.\n");
  return -1;
}