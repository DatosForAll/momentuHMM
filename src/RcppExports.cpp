// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// XBloop_rcpp
arma::mat XBloop_rcpp(List DM, NumericVector Xvec, unsigned int nbObs, unsigned int nr, unsigned int nc, bool circularAngleMean, bool consensus, IntegerVector rindex, arma::mat cindex, int nbStates, double refCoeff);
RcppExport SEXP _momentuHMM_XBloop_rcpp(SEXP DMSEXP, SEXP XvecSEXP, SEXP nbObsSEXP, SEXP nrSEXP, SEXP ncSEXP, SEXP circularAngleMeanSEXP, SEXP consensusSEXP, SEXP rindexSEXP, SEXP cindexSEXP, SEXP nbStatesSEXP, SEXP refCoeffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type DM(DMSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Xvec(XvecSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nbObs(nbObsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< bool >::type circularAngleMean(circularAngleMeanSEXP);
    Rcpp::traits::input_parameter< bool >::type consensus(consensusSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rindex(rindexSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cindex(cindexSEXP);
    Rcpp::traits::input_parameter< int >::type nbStates(nbStatesSEXP);
    Rcpp::traits::input_parameter< double >::type refCoeff(refCoeffSEXP);
    rcpp_result_gen = Rcpp::wrap(XBloop_rcpp(DM, Xvec, nbObs, nr, nc, circularAngleMean, consensus, rindex, cindex, nbStates, refCoeff));
    return rcpp_result_gen;
END_RCPP
}
// combine
NumericVector combine(const List& list);
RcppExport SEXP _momentuHMM_combine(SEXP listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type list(listSEXP);
    rcpp_result_gen = Rcpp::wrap(combine(list));
    return rcpp_result_gen;
END_RCPP
}
// cbindmean2
arma::mat cbindmean2(arma::mat x, arma::mat y);
RcppExport SEXP _momentuHMM_cbindmean2(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cbindmean2(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cbindmean3
arma::mat cbindmean3(arma::mat x, arma::mat y, arma::mat z);
RcppExport SEXP _momentuHMM_cbindmean3(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(cbindmean3(x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// cbindsigma2
arma::mat cbindsigma2(arma::mat x, arma::mat xy, arma::mat y);
RcppExport SEXP _momentuHMM_cbindsigma2(SEXP xSEXP, SEXP xySEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xy(xySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cbindsigma2(x, xy, y));
    return rcpp_result_gen;
END_RCPP
}
// cbindsigma3
arma::mat cbindsigma3(arma::mat x, arma::mat xy, arma::mat xz, arma::mat y, arma::mat yz, arma::mat z);
RcppExport SEXP _momentuHMM_cbindsigma3(SEXP xSEXP, SEXP xySEXP, SEXP xzSEXP, SEXP ySEXP, SEXP yzSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xy(xySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xz(xzSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type yz(yzSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(cbindsigma3(x, xy, xz, y, yz, z));
    return rcpp_result_gen;
END_RCPP
}
// dgamma_rcpp
arma::colvec dgamma_rcpp(NumericVector x, arma::mat mu, arma::mat sigma);
RcppExport SEXP _momentuHMM_dgamma_rcpp(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(dgamma_rcpp(x, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// dweibull_rcpp
arma::colvec dweibull_rcpp(NumericVector x, arma::mat shape, arma::mat scale);
RcppExport SEXP _momentuHMM_dweibull_rcpp(SEXP xSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(dweibull_rcpp(x, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// dnorm_rcpp
arma::colvec dnorm_rcpp(NumericVector x, arma::mat mean, arma::mat sd);
RcppExport SEXP _momentuHMM_dnorm_rcpp(SEXP xSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(dnorm_rcpp(x, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// dlnorm_rcpp
arma::colvec dlnorm_rcpp(NumericVector x, arma::mat meanlog, arma::mat sdlog);
RcppExport SEXP _momentuHMM_dlnorm_rcpp(SEXP xSEXP, SEXP meanlogSEXP, SEXP sdlogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type meanlog(meanlogSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sdlog(sdlogSEXP);
    rcpp_result_gen = Rcpp::wrap(dlnorm_rcpp(x, meanlog, sdlog));
    return rcpp_result_gen;
END_RCPP
}
// dexp_rcpp
arma::colvec dexp_rcpp(NumericVector x, arma::mat rate, arma::mat foo);
RcppExport SEXP _momentuHMM_dexp_rcpp(SEXP xSEXP, SEXP rateSEXP, SEXP fooSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type foo(fooSEXP);
    rcpp_result_gen = Rcpp::wrap(dexp_rcpp(x, rate, foo));
    return rcpp_result_gen;
END_RCPP
}
// dvm_rcpp
arma::colvec dvm_rcpp(NumericVector x, arma::mat mu, arma::mat kappa);
RcppExport SEXP _momentuHMM_dvm_rcpp(SEXP xSEXP, SEXP muSEXP, SEXP kappaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kappa(kappaSEXP);
    rcpp_result_gen = Rcpp::wrap(dvm_rcpp(x, mu, kappa));
    return rcpp_result_gen;
END_RCPP
}
// dwrpcauchy_rcpp
arma::colvec dwrpcauchy_rcpp(NumericVector x, arma::mat mu, arma::mat rho);
RcppExport SEXP _momentuHMM_dwrpcauchy_rcpp(SEXP xSEXP, SEXP muSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(dwrpcauchy_rcpp(x, mu, rho));
    return rcpp_result_gen;
END_RCPP
}
// dbeta_rcpp
arma::colvec dbeta_rcpp(NumericVector x, arma::mat shape1, arma::mat shape2);
RcppExport SEXP _momentuHMM_dbeta_rcpp(SEXP xSEXP, SEXP shape1SEXP, SEXP shape2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type shape2(shape2SEXP);
    rcpp_result_gen = Rcpp::wrap(dbeta_rcpp(x, shape1, shape2));
    return rcpp_result_gen;
END_RCPP
}
// dpois_rcpp
arma::colvec dpois_rcpp(NumericVector x, arma::mat rate, arma::mat foo);
RcppExport SEXP _momentuHMM_dpois_rcpp(SEXP xSEXP, SEXP rateSEXP, SEXP fooSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type foo(fooSEXP);
    rcpp_result_gen = Rcpp::wrap(dpois_rcpp(x, rate, foo));
    return rcpp_result_gen;
END_RCPP
}
// dbern_rcpp
arma::colvec dbern_rcpp(NumericVector x, arma::mat prob, arma::mat foo);
RcppExport SEXP _momentuHMM_dbern_rcpp(SEXP xSEXP, SEXP probSEXP, SEXP fooSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prob(probSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type foo(fooSEXP);
    rcpp_result_gen = Rcpp::wrap(dbern_rcpp(x, prob, foo));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm_rcpp
arma::colvec dmvnorm_rcpp(NumericVector x, const arma::mat mean, const arma::mat varcovM);
RcppExport SEXP _momentuHMM_dmvnorm_rcpp(SEXP xSEXP, SEXP meanSEXP, SEXP varcovMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type varcovM(varcovMSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm_rcpp(x, mean, varcovM));
    return rcpp_result_gen;
END_RCPP
}
// dcat_rcpp
arma::colvec dcat_rcpp(const NumericVector x, const arma::mat prob, const arma::mat foo);
RcppExport SEXP _momentuHMM_dcat_rcpp(SEXP xSEXP, SEXP probSEXP, SEXP fooSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type prob(probSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type foo(fooSEXP);
    rcpp_result_gen = Rcpp::wrap(dcat_rcpp(x, prob, foo));
    return rcpp_result_gen;
END_RCPP
}
// dnbinom_rcpp
arma::colvec dnbinom_rcpp(NumericVector x, arma::mat mu, arma::mat size);
RcppExport SEXP _momentuHMM_dnbinom_rcpp(SEXP xSEXP, SEXP muSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(dnbinom_rcpp(x, mu, size));
    return rcpp_result_gen;
END_RCPP
}
// dlogis_rcpp
arma::colvec dlogis_rcpp(NumericVector x, arma::mat location, arma::mat scale);
RcppExport SEXP _momentuHMM_dlogis_rcpp(SEXP xSEXP, SEXP locationSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type location(locationSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(dlogis_rcpp(x, location, scale));
    return rcpp_result_gen;
END_RCPP
}
// dt_rcpp
arma::colvec dt_rcpp(NumericVector x, arma::mat df, arma::mat ncp);
RcppExport SEXP _momentuHMM_dt_rcpp(SEXP xSEXP, SEXP dfSEXP, SEXP ncpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type df(dfSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ncp(ncpSEXP);
    rcpp_result_gen = Rcpp::wrap(dt_rcpp(x, df, ncp));
    return rcpp_result_gen;
END_RCPP
}
// expmatrix_rcpp
arma::mat expmatrix_rcpp(arma::mat x);
RcppExport SEXP _momentuHMM_expmatrix_rcpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(expmatrix_rcpp(x));
    return rcpp_result_gen;
END_RCPP
}
// getDM_rcpp
arma::cube getDM_rcpp(arma::cube X, arma::mat covs, CharacterVector DM, unsigned int nr, unsigned int nc, CharacterVector cov, unsigned int nbObs);
RcppExport SEXP _momentuHMM_getDM_rcpp(SEXP XSEXP, SEXP covsSEXP, SEXP DMSEXP, SEXP nrSEXP, SEXP ncSEXP, SEXP covSEXP, SEXP nbObsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covs(covsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type DM(DMSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type cov(covSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nbObs(nbObsSEXP);
    rcpp_result_gen = Rcpp::wrap(getDM_rcpp(X, covs, DM, nr, nc, cov, nbObs));
    return rcpp_result_gen;
END_RCPP
}
// nLogLike_rcpp
double nLogLike_rcpp(int nbStates, arma::mat covs, DataFrame data, CharacterVector dataNames, List dist, List Par, IntegerVector aInd, List zeroInflation, List oneInflation, bool stationary, IntegerVector knownStates, IntegerVector betaRef, int mixtures, bool CT);
RcppExport SEXP _momentuHMM_nLogLike_rcpp(SEXP nbStatesSEXP, SEXP covsSEXP, SEXP dataSEXP, SEXP dataNamesSEXP, SEXP distSEXP, SEXP ParSEXP, SEXP aIndSEXP, SEXP zeroInflationSEXP, SEXP oneInflationSEXP, SEXP stationarySEXP, SEXP knownStatesSEXP, SEXP betaRefSEXP, SEXP mixturesSEXP, SEXP CTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nbStates(nbStatesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covs(covsSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dataNames(dataNamesSEXP);
    Rcpp::traits::input_parameter< List >::type dist(distSEXP);
    Rcpp::traits::input_parameter< List >::type Par(ParSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aInd(aIndSEXP);
    Rcpp::traits::input_parameter< List >::type zeroInflation(zeroInflationSEXP);
    Rcpp::traits::input_parameter< List >::type oneInflation(oneInflationSEXP);
    Rcpp::traits::input_parameter< bool >::type stationary(stationarySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type knownStates(knownStatesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type betaRef(betaRefSEXP);
    Rcpp::traits::input_parameter< int >::type mixtures(mixturesSEXP);
    Rcpp::traits::input_parameter< bool >::type CT(CTSEXP);
    rcpp_result_gen = Rcpp::wrap(nLogLike_rcpp(nbStates, covs, data, dataNames, dist, Par, aInd, zeroInflation, oneInflation, stationary, knownStates, betaRef, mixtures, CT));
    return rcpp_result_gen;
END_RCPP
}
// trMatrix_rcpp
arma::cube trMatrix_rcpp(int nbStates, arma::mat beta, arma::mat covs, IntegerVector betaRef, bool CT, NumericVector dt);
RcppExport SEXP _momentuHMM_trMatrix_rcpp(SEXP nbStatesSEXP, SEXP betaSEXP, SEXP covsSEXP, SEXP betaRefSEXP, SEXP CTSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nbStates(nbStatesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covs(covsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type betaRef(betaRefSEXP);
    Rcpp::traits::input_parameter< bool >::type CT(CTSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(trMatrix_rcpp(nbStates, beta, covs, betaRef, CT, dt));
    return rcpp_result_gen;
END_RCPP
}
