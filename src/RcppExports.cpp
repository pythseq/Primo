// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// calc_Dmatrix
arma::mat calc_Dmatrix(const arma::mat& Q, const arma::mat& D0, const arma::mat& D1);
RcppExport SEXP _primo_calc_Dmatrix(SEXP QSEXP, SEXP D0SEXP, SEXP D1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D0(D0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D1(D1SEXP);
    rcpp_result_gen = Rcpp::wrap(calc_Dmatrix(Q, D0, D1));
    return rcpp_result_gen;
END_RCPP
}
// e_step_Dmat
arma::mat e_step_Dmat(const arma::rowvec& old_pi, const arma::mat& Dmat);
RcppExport SEXP _primo_e_step_Dmat(SEXP old_piSEXP, SEXP DmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type old_pi(old_piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Dmat(DmatSEXP);
    rcpp_result_gen = Rcpp::wrap(e_step_Dmat(old_pi, Dmat));
    return rcpp_result_gen;
END_RCPP
}
// e_step_Dmat_withColSums
arma::mat e_step_Dmat_withColSums(const arma::rowvec& old_pi, const arma::mat& Dmat);
RcppExport SEXP _primo_e_step_Dmat_withColSums(SEXP old_piSEXP, SEXP DmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type old_pi(old_piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Dmat(DmatSEXP);
    rcpp_result_gen = Rcpp::wrap(e_step_Dmat_withColSums(old_pi, Dmat));
    return rcpp_result_gen;
END_RCPP
}
// e_step
arma::mat e_step(const arma::rowvec& old_pi, const arma::mat& Q, const arma::mat& D0, const arma::mat& D1);
RcppExport SEXP _primo_e_step(SEXP old_piSEXP, SEXP QSEXP, SEXP D0SEXP, SEXP D1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type old_pi(old_piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D0(D0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D1(D1SEXP);
    rcpp_result_gen = Rcpp::wrap(e_step(old_pi, Q, D0, D1));
    return rcpp_result_gen;
END_RCPP
}
// m_step
arma::mat m_step(const arma::mat& old_B);
RcppExport SEXP _primo_m_step(SEXP old_BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type old_B(old_BSEXP);
    rcpp_result_gen = Rcpp::wrap(m_step(old_B));
    return rcpp_result_gen;
END_RCPP
}
// em_iter
arma::mat em_iter(const arma::rowvec& old_pi, const arma::mat& Q, const arma::mat& D0, const arma::mat& D1);
RcppExport SEXP _primo_em_iter(SEXP old_piSEXP, SEXP QSEXP, SEXP D0SEXP, SEXP D1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type old_pi(old_piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D0(D0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D1(D1SEXP);
    rcpp_result_gen = Rcpp::wrap(em_iter(old_pi, Q, D0, D1));
    return rcpp_result_gen;
END_RCPP
}
// em_iter_Dmat
arma::mat em_iter_Dmat(const arma::rowvec& old_pi, const arma::mat& Dmat);
RcppExport SEXP _primo_em_iter_Dmat(SEXP old_piSEXP, SEXP DmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type old_pi(old_piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Dmat(DmatSEXP);
    rcpp_result_gen = Rcpp::wrap(em_iter_Dmat(old_pi, Dmat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_primo_calc_Dmatrix", (DL_FUNC) &_primo_calc_Dmatrix, 3},
    {"_primo_e_step_Dmat", (DL_FUNC) &_primo_e_step_Dmat, 2},
    {"_primo_e_step_Dmat_withColSums", (DL_FUNC) &_primo_e_step_Dmat_withColSums, 2},
    {"_primo_e_step", (DL_FUNC) &_primo_e_step, 4},
    {"_primo_m_step", (DL_FUNC) &_primo_m_step, 1},
    {"_primo_em_iter", (DL_FUNC) &_primo_em_iter, 4},
    {"_primo_em_iter_Dmat", (DL_FUNC) &_primo_em_iter_Dmat, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_primo(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
