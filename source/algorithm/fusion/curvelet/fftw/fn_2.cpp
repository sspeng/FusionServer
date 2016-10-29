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

/* Generated by: /homee/stevenj/cvs/fftw/gensrc/genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -notwiddle 2 */

/*
 * This function contains 4 FP additions, 0 FP multiplications,
 * (or, 4 additions, 0 multiplications, 0 fused multiply/add),
 * 4 stack variables, and 8 memory accesses
 */

/*
 * Generator Id's : 
 * $Id: exprdag.ml,v 1.43 2003/03/16 23:43:46 stevenj Exp $
 * $Id: fft.ml,v 1.44 2003/03/16 23:43:46 stevenj Exp $
 * $Id: to_c.ml,v 1.26 2003/03/16 23:43:46 stevenj Exp $
 */

void fftw_no_twiddle_2(const fftw_complex *input, fftw_complex *output,
		       int istride, int ostride)
{
     fftw_real tmp1;
     fftw_real tmp2;
     fftw_real tmp3;
     fftw_real tmp4;
     ASSERT_ALIGNED_DOUBLE;
     tmp1 = c_re(input[0]);
     tmp2 = c_re(input[istride]);
     c_re(output[ostride]) = tmp1 - tmp2;
     c_re(output[0]) = tmp1 + tmp2;
     tmp3 = c_im(input[0]);
     tmp4 = c_im(input[istride]);
     c_im(output[ostride]) = tmp3 - tmp4;
     c_im(output[0]) = tmp3 + tmp4;
}

fftw_codelet_desc fftw_no_twiddle_2_desc = {
     "fftw_no_twiddle_2",
     (void (*)()) fftw_no_twiddle_2,
     2,
     FFTW_FORWARD,
     FFTW_NOTW,
     45,
     0,
     (const int *) 0,
};
