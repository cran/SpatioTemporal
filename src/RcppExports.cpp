// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// parsCovFuns_cpp
std::vector<std::string> parsCovFuns_cpp(const std::string& type);
RcppExport SEXP _SpatioTemporal_parsCovFuns_cpp(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(parsCovFuns_cpp(type));
    return rcpp_result_gen;
END_RCPP
}
// namesCovFuns
std::vector<std::string> namesCovFuns();
RcppExport SEXP _SpatioTemporal_namesCovFuns() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(namesCovFuns());
    return rcpp_result_gen;
END_RCPP
}
// evalCovFuns_cpp
Eigen::MatrixXd evalCovFuns_cpp(const std::string& type, const Eigen::Map<Eigen::VectorXd>& pars, const Eigen::Map<Eigen::MatrixXd>& d, const Eigen::Map<Eigen::VectorXi>& diff);
RcppExport SEXP _SpatioTemporal_evalCovFuns_cpp(SEXP typeSEXP, SEXP parsSEXP, SEXP dSEXP, SEXP diffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type diff(diffSEXP);
    rcpp_result_gen = Rcpp::wrap(evalCovFuns_cpp(type, pars, d, diff));
    return rcpp_result_gen;
END_RCPP
}
// dist_Cpp
Eigen::MatrixXd dist_Cpp(const Eigen::Map<Eigen::MatrixXd>& coord);
RcppExport SEXP _SpatioTemporal_dist_Cpp(SEXP coordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type coord(coordSEXP);
    rcpp_result_gen = Rcpp::wrap(dist_Cpp(coord));
    return rcpp_result_gen;
END_RCPP
}
// crossDist_Cpp
Eigen::MatrixXd crossDist_Cpp(const Eigen::Map<Eigen::MatrixXd>& coord1, const Eigen::Map<Eigen::MatrixXd>& coord2);
RcppExport SEXP _SpatioTemporal_crossDist_Cpp(SEXP coord1SEXP, SEXP coord2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type coord1(coord1SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type coord2(coord2SEXP);
    rcpp_result_gen = Rcpp::wrap(crossDist_Cpp(coord1, coord2));
    return rcpp_result_gen;
END_RCPP
}
// expandF_cpp
Eigen::SparseMatrix<double> expandF_cpp(const Eigen::Map<Eigen::MatrixXd>& F, const Eigen::Map<Eigen::VectorXi>& loc_ind, int n_loc);
RcppExport SEXP _SpatioTemporal_expandF_cpp(SEXP FSEXP, SEXP loc_indSEXP, SEXP n_locSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type loc_ind(loc_indSEXP);
    Rcpp::traits::input_parameter< int >::type n_loc(n_locSEXP);
    rcpp_result_gen = Rcpp::wrap(expandF_cpp(F, loc_ind, n_loc));
    return rcpp_result_gen;
END_RCPP
}
// loglikeST_cpp
double loglikeST_cpp(const Eigen::Map<Eigen::VectorXd>& x_in, const Eigen::Map<Eigen::VectorXd>& x_fixed, char type, const Eigen::Map<Eigen::VectorXd>& Y_in, const Eigen::Map<Eigen::SparseMatrix<double>>& F, const Eigen::Map<Eigen::MatrixXd>& M_FX, const std::vector<std::string>& type_B, const std::string& type_nu, const Eigen::Map<Eigen::MatrixXd>& nugget_matrix, const Eigen::Map<Eigen::VectorXi>& n_cov_pars, const Eigen::Map<Eigen::MatrixXd>& dist_B, const Eigen::Map<Eigen::MatrixXd>& dist_nu, const Eigen::Map<Eigen::VectorXi>& blocks, const Eigen::Map<Eigen::VectorXi>& ind);
RcppExport SEXP _SpatioTemporal_loglikeST_cpp(SEXP x_inSEXP, SEXP x_fixedSEXP, SEXP typeSEXP, SEXP Y_inSEXP, SEXP FSEXP, SEXP M_FXSEXP, SEXP type_BSEXP, SEXP type_nuSEXP, SEXP nugget_matrixSEXP, SEXP n_cov_parsSEXP, SEXP dist_BSEXP, SEXP dist_nuSEXP, SEXP blocksSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type x_in(x_inSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type x_fixed(x_fixedSEXP);
    Rcpp::traits::input_parameter< char >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type Y_in(Y_inSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double>>& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type M_FX(M_FXSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type type_B(type_BSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type type_nu(type_nuSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type nugget_matrix(nugget_matrixSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type n_cov_pars(n_cov_parsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type dist_B(dist_BSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type dist_nu(dist_nuSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type blocks(blocksSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type ind(indSEXP);
    rcpp_result_gen = Rcpp::wrap(loglikeST_cpp(x_in, x_fixed, type, Y_in, F, M_FX, type_B, type_nu, nugget_matrix, n_cov_pars, dist_B, dist_nu, blocks, ind));
    return rcpp_result_gen;
END_RCPP
}
// loglikeSTnaive_cpp
double loglikeSTnaive_cpp(const Eigen::Map<Eigen::VectorXd>& x_in, const Eigen::Map<Eigen::VectorXd>& x_fixed, char type, const Eigen::Map<Eigen::VectorXd>& Y_in, const Eigen::Map<Eigen::SparseMatrix<double>>& F, const Eigen::Map<Eigen::MatrixXd>& M_FX, const std::vector<std::string>& type_B, const std::string& type_nu, const Eigen::Map<Eigen::MatrixXd>& nugget_matrix, const Eigen::Map<Eigen::VectorXi>& n_cov_pars, const Eigen::Map<Eigen::MatrixXd>& dist_B, const Eigen::Map<Eigen::MatrixXd>& dist_nu, const Eigen::Map<Eigen::VectorXi>& blocks, const Eigen::Map<Eigen::VectorXi>& ind);
RcppExport SEXP _SpatioTemporal_loglikeSTnaive_cpp(SEXP x_inSEXP, SEXP x_fixedSEXP, SEXP typeSEXP, SEXP Y_inSEXP, SEXP FSEXP, SEXP M_FXSEXP, SEXP type_BSEXP, SEXP type_nuSEXP, SEXP nugget_matrixSEXP, SEXP n_cov_parsSEXP, SEXP dist_BSEXP, SEXP dist_nuSEXP, SEXP blocksSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type x_in(x_inSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type x_fixed(x_fixedSEXP);
    Rcpp::traits::input_parameter< char >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type Y_in(Y_inSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double>>& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type M_FX(M_FXSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type type_B(type_BSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type type_nu(type_nuSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type nugget_matrix(nugget_matrixSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type n_cov_pars(n_cov_parsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type dist_B(dist_BSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type dist_nu(dist_nuSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type blocks(blocksSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type ind(indSEXP);
    rcpp_result_gen = Rcpp::wrap(loglikeSTnaive_cpp(x_in, x_fixed, type, Y_in, F, M_FX, type_B, type_nu, nugget_matrix, n_cov_pars, dist_B, dist_nu, blocks, ind));
    return rcpp_result_gen;
END_RCPP
}
// loglikeST_test_cpp
Eigen::MatrixXd loglikeST_test_cpp(const Eigen::Map<Eigen::VectorXd>& x_in, const Eigen::Map<Eigen::VectorXd>& x_fixed, char type, const Eigen::Map<Eigen::VectorXd>& Y_in, const Eigen::Map<Eigen::SparseMatrix<double>>& F, const Eigen::Map<Eigen::MatrixXd>& M_FX, const std::vector<std::string>& type_B, const std::string& type_nu, const Eigen::Map<Eigen::MatrixXd>& nugget_matrix, const Eigen::Map<Eigen::VectorXi>& n_cov_pars, const Eigen::Map<Eigen::MatrixXd>& dist_B, const Eigen::Map<Eigen::MatrixXd>& dist_nu, const Eigen::Map<Eigen::VectorXi>& blocks, const Eigen::Map<Eigen::VectorXi>& ind);
RcppExport SEXP _SpatioTemporal_loglikeST_test_cpp(SEXP x_inSEXP, SEXP x_fixedSEXP, SEXP typeSEXP, SEXP Y_inSEXP, SEXP FSEXP, SEXP M_FXSEXP, SEXP type_BSEXP, SEXP type_nuSEXP, SEXP nugget_matrixSEXP, SEXP n_cov_parsSEXP, SEXP dist_BSEXP, SEXP dist_nuSEXP, SEXP blocksSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type x_in(x_inSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type x_fixed(x_fixedSEXP);
    Rcpp::traits::input_parameter< char >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type Y_in(Y_inSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double>>& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type M_FX(M_FXSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type type_B(type_BSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type type_nu(type_nuSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type nugget_matrix(nugget_matrixSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type n_cov_pars(n_cov_parsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type dist_B(dist_BSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type dist_nu(dist_nuSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type blocks(blocksSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type ind(indSEXP);
    rcpp_result_gen = Rcpp::wrap(loglikeST_test_cpp(x_in, x_fixed, type, Y_in, F, M_FX, type_B, type_nu, nugget_matrix, n_cov_pars, dist_B, dist_nu, blocks, ind));
    return rcpp_result_gen;
END_RCPP
}
// makeSigmaB_cpp
Eigen::SparseMatrix<double> makeSigmaB_cpp(const Eigen::Map<Eigen::VectorXd>& par, const Eigen::Map<Eigen::MatrixXd>& dist, const std::vector<std::string>& type, const Eigen::Map<Eigen::VectorXd>& nugget, bool symmetry, const Eigen::Map<Eigen::VectorXi>& ind2_to_1);
RcppExport SEXP _SpatioTemporal_makeSigmaB_cpp(SEXP parSEXP, SEXP distSEXP, SEXP typeSEXP, SEXP nuggetSEXP, SEXP symmetrySEXP, SEXP ind2_to_1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type dist(distSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type nugget(nuggetSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetry(symmetrySEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type ind2_to_1(ind2_to_1SEXP);
    rcpp_result_gen = Rcpp::wrap(makeSigmaB_cpp(par, dist, type, nugget, symmetry, ind2_to_1));
    return rcpp_result_gen;
END_RCPP
}
// makeSigmaNu_cpp
Eigen::SparseMatrix<double> makeSigmaNu_cpp(const Eigen::Map<Eigen::VectorXd>& par, const Eigen::Map<Eigen::MatrixXd>& dist, const std::string& type, const Eigen::Map<Eigen::VectorXd>& nugget, double random_effect, bool symmetry, const Eigen::Map<Eigen::VectorXi>& blocks1, const Eigen::Map<Eigen::VectorXi>& blocks2, const Eigen::Map<Eigen::VectorXi>& ind1, const Eigen::Map<Eigen::VectorXi>& ind2, const Eigen::Map<Eigen::VectorXi>& ind2_to_1);
RcppExport SEXP _SpatioTemporal_makeSigmaNu_cpp(SEXP parSEXP, SEXP distSEXP, SEXP typeSEXP, SEXP nuggetSEXP, SEXP random_effectSEXP, SEXP symmetrySEXP, SEXP blocks1SEXP, SEXP blocks2SEXP, SEXP ind1SEXP, SEXP ind2SEXP, SEXP ind2_to_1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type dist(distSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type nugget(nuggetSEXP);
    Rcpp::traits::input_parameter< double >::type random_effect(random_effectSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetry(symmetrySEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type blocks1(blocks1SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type blocks2(blocks2SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type ind1(ind1SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type ind2(ind2SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXi>& >::type ind2_to_1(ind2_to_1SEXP);
    rcpp_result_gen = Rcpp::wrap(makeSigmaNu_cpp(par, dist, type, nugget, random_effect, symmetry, blocks1, blocks2, ind1, ind2, ind2_to_1));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SpatioTemporal_parsCovFuns_cpp", (DL_FUNC) &_SpatioTemporal_parsCovFuns_cpp, 1},
    {"_SpatioTemporal_namesCovFuns", (DL_FUNC) &_SpatioTemporal_namesCovFuns, 0},
    {"_SpatioTemporal_evalCovFuns_cpp", (DL_FUNC) &_SpatioTemporal_evalCovFuns_cpp, 4},
    {"_SpatioTemporal_dist_Cpp", (DL_FUNC) &_SpatioTemporal_dist_Cpp, 1},
    {"_SpatioTemporal_crossDist_Cpp", (DL_FUNC) &_SpatioTemporal_crossDist_Cpp, 2},
    {"_SpatioTemporal_expandF_cpp", (DL_FUNC) &_SpatioTemporal_expandF_cpp, 3},
    {"_SpatioTemporal_loglikeST_cpp", (DL_FUNC) &_SpatioTemporal_loglikeST_cpp, 14},
    {"_SpatioTemporal_loglikeSTnaive_cpp", (DL_FUNC) &_SpatioTemporal_loglikeSTnaive_cpp, 14},
    {"_SpatioTemporal_loglikeST_test_cpp", (DL_FUNC) &_SpatioTemporal_loglikeST_test_cpp, 14},
    {"_SpatioTemporal_makeSigmaB_cpp", (DL_FUNC) &_SpatioTemporal_makeSigmaB_cpp, 6},
    {"_SpatioTemporal_makeSigmaNu_cpp", (DL_FUNC) &_SpatioTemporal_makeSigmaNu_cpp, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_SpatioTemporal(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}