/*
 * Copyright (c) 1997-1999, 2003 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Mon Mar 24 02:05:37 EST 2003 */

#include "fftw_int.h"
#include "fftw.h"

/* Generated by: /homee/stevenj/cvs/fftw/gensrc/genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -notwiddle 8 */

/*
 * This function contains 52 FP additions, 4 FP multiplications,
 * (or, 52 additions, 4 multiplications, 0 fused multiply/add),
 * 26 stack variables, and 32 memory accesses
 */
static const fftw_real K707106781 =
FFTW_KONST(+0.707106781186547524400844362104849039284835938);

/*
 * Generator Id's : 
 * $Id: exprdag.ml,v 1.43 2003/03/16 23:43:46 stevenj Exp $
 * $Id: fft.ml,v 1.44 2003/03/16 23:43:46 stevenj Exp $
 * $Id: to_c.ml,v 1.26 2003/03/16 23:43:46 stevenj Exp $
 */

void fftw_no_twiddle_8(const fftw_complex *input, fftw_complex *output,
		       int istride, int ostride)
{
     fftw_real tmp3;
     fftw_real tmp23;
     fftw_real tmp18;
     fftw_real tmp38;
     fftw_real tmp6;
     fftw_real tmp37;
     fftw_real tmp21;
     fftw_real tmp24;
     fftw_real tmp13;
     fftw_real tmp49;
     fftw_real tmp35;
     fftw_real tmp43;
     fftw_real tmp10;
     fftw_real tmp48;
     fftw_real tmp30;
     fftw_real tmp42;
     ASSERT_ALIGNED_DOUBLE;
     {
	  fftw_real tmp1;
	  fftw_real tmp2;
	  fftw_real tmp19;
	  fftw_real tmp20;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp1 = c_re(input[0]);
	  tmp2 = c_re(input[4 * istride]);
	  tmp3 = tmp1 + tmp2;
	  tmp23 = tmp1 - tmp2;
	  {
	       fftw_real tmp16;
	       fftw_real tmp17;
	       fftw_real tmp4;
	       fftw_real tmp5;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp16 = c_im(input[0]);
	       tmp17 = c_im(input[4 * istride]);
	       tmp18 = tmp16 + tmp17;
	       tmp38 = tmp16 - tmp17;
	       tmp4 = c_re(input[2 * istride]);
	       tmp5 = c_re(input[6 * istride]);
	       tmp6 = tmp4 + tmp5;
	       tmp37 = tmp4 - tmp5;
	  }
	  tmp19 = c_im(input[2 * istride]);
	  tmp20 = c_im(input[6 * istride]);
	  tmp21 = tmp19 + tmp20;
	  tmp24 = tmp19 - tmp20;
	  {
	       fftw_real tmp11;
	       fftw_real tmp12;
	       fftw_real tmp31;
	       fftw_real tmp32;
	       fftw_real tmp33;
	       fftw_real tmp34;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp11 = c_re(input[7 * istride]);
	       tmp12 = c_re(input[3 * istride]);
	       tmp31 = tmp11 - tmp12;
	       tmp32 = c_im(input[7 * istride]);
	       tmp33 = c_im(input[3 * istride]);
	       tmp34 = tmp32 - tmp33;
	       tmp13 = tmp11 + tmp12;
	       tmp49 = tmp32 + tmp33;
	       tmp35 = tmp31 - tmp34;
	       tmp43 = tmp31 + tmp34;
	  }
	  {
	       fftw_real tmp8;
	       fftw_real tmp9;
	       fftw_real tmp26;
	       fftw_real tmp27;
	       fftw_real tmp28;
	       fftw_real tmp29;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp8 = c_re(input[istride]);
	       tmp9 = c_re(input[5 * istride]);
	       tmp26 = tmp8 - tmp9;
	       tmp27 = c_im(input[istride]);
	       tmp28 = c_im(input[5 * istride]);
	       tmp29 = tmp27 - tmp28;
	       tmp10 = tmp8 + tmp9;
	       tmp48 = tmp27 + tmp28;
	       tmp30 = tmp26 + tmp29;
	       tmp42 = tmp29 - tmp26;
	  }
     }
     {
	  fftw_real tmp7;
	  fftw_real tmp14;
	  fftw_real tmp15;
	  fftw_real tmp22;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp7 = tmp3 + tmp6;
	  tmp14 = tmp10 + tmp13;
	  c_re(output[4 * ostride]) = tmp7 - tmp14;
	  c_re(output[0]) = tmp7 + tmp14;
	  tmp15 = tmp13 - tmp10;
	  tmp22 = tmp18 - tmp21;
	  c_im(output[2 * ostride]) = tmp15 + tmp22;
	  c_im(output[6 * ostride]) = tmp22 - tmp15;
     }
     {
	  fftw_real tmp51;
	  fftw_real tmp52;
	  fftw_real tmp47;
	  fftw_real tmp50;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp51 = tmp18 + tmp21;
	  tmp52 = tmp48 + tmp49;
	  c_im(output[4 * ostride]) = tmp51 - tmp52;
	  c_im(output[0]) = tmp51 + tmp52;
	  tmp47 = tmp3 - tmp6;
	  tmp50 = tmp48 - tmp49;
	  c_re(output[6 * ostride]) = tmp47 - tmp50;
	  c_re(output[2 * ostride]) = tmp47 + tmp50;
     }
     {
	  fftw_real tmp25;
	  fftw_real tmp36;
	  fftw_real tmp39;
	  fftw_real tmp40;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp25 = tmp23 + tmp24;
	  tmp36 = K707106781 * (tmp30 + tmp35);
	  c_re(output[5 * ostride]) = tmp25 - tmp36;
	  c_re(output[ostride]) = tmp25 + tmp36;
	  tmp39 = tmp37 + tmp38;
	  tmp40 = K707106781 * (tmp35 - tmp30);
	  c_im(output[7 * ostride]) = tmp39 - tmp40;
	  c_im(output[3 * ostride]) = tmp39 + tmp40;
     }
     {
	  fftw_real tmp45;
	  fftw_real tmp46;
	  fftw_real tmp41;
	  fftw_real tmp44;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp45 = tmp38 - tmp37;
	  tmp46 = K707106781 * (tmp42 + tmp43);
	  c_im(output[5 * ostride]) = tmp45 - tmp46;
	  c_im(output[ostride]) = tmp45 + tmp46;
	  tmp41 = tmp23 - tmp24;
	  tmp44 = K707106781 * (tmp42 - tmp43);
	  c_re(output[7 * ostride]) = tmp41 - tmp44;
	  c_re(output[3 * ostride]) = tmp41 + tmp44;
     }
}

fftw_codelet_desc fftw_no_twiddle_8_desc = {
     "fftw_no_twiddle_8",
     (void (*)()) fftw_no_twiddle_8,
     8,
     FFTW_FORWARD,
     FFTW_NOTW,
     177,
     0,
     (const int *) 0,
};
