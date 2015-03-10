// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pair_sort
void pair_sort(IntegerVector i, NumericVector x);
RcppExport SEXP FeatureHashing_pair_sort(SEXP iSEXP, SEXP xSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        pair_sort(i, x);
    }
    return R_NilValue;
END_RCPP
}
// merge
int merge(IntegerVector i, NumericVector x);
RcppExport SEXP FeatureHashing_merge(SEXP iSEXP, SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        int __result = merge(i, x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// todgCMatrix
SEXP todgCMatrix(S4 m);
RcppExport SEXP FeatureHashing_todgCMatrix(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        SEXP __result = todgCMatrix(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tomatrix
SEXP tomatrix(S4 m);
RcppExport SEXP FeatureHashing_tomatrix(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        SEXP __result = tomatrix(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// xi
IntegerVector xi(CharacterVector src);
RcppExport SEXP FeatureHashing_xi(SEXP srcSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        IntegerVector __result = xi(src);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// h
IntegerVector h(CharacterVector src);
RcppExport SEXP FeatureHashing_h(SEXP srcSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        IntegerVector __result = h(src);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// hashed_model_matrix_dataframe
SEXP hashed_model_matrix_dataframe(RObject tf, DataFrame data, unsigned long hash_size, bool transpose, S4 retval, bool keep_hashing_mapping, bool is_xi);
RcppExport SEXP FeatureHashing_hashed_model_matrix_dataframe(SEXP tfSEXP, SEXP dataSEXP, SEXP hash_sizeSEXP, SEXP transposeSEXP, SEXP retvalSEXP, SEXP keep_hashing_mappingSEXP, SEXP is_xiSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RObject >::type tf(tfSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type hash_size(hash_sizeSEXP );
        Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP );
        Rcpp::traits::input_parameter< S4 >::type retval(retvalSEXP );
        Rcpp::traits::input_parameter< bool >::type keep_hashing_mapping(keep_hashing_mappingSEXP );
        Rcpp::traits::input_parameter< bool >::type is_xi(is_xiSEXP );
        SEXP __result = hashed_model_matrix_dataframe(tf, data, hash_size, transpose, retval, keep_hashing_mapping, is_xi);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Xv
NumericVector Xv(S4 m, NumericVector v, NumericVector retval);
RcppExport SEXP FeatureHashing_Xv(SEXP mSEXP, SEXP vSEXP, SEXP retvalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type retval(retvalSEXP );
        NumericVector __result = Xv(m, v, retval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vX
NumericVector vX(NumericVector v, S4 m, NumericVector retval);
RcppExport SEXP FeatureHashing_vX(SEXP vSEXP, SEXP mSEXP, SEXP retvalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type retval(retvalSEXP );
        NumericVector __result = vX(v, m, retval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// selectColumn
SEXP selectColumn(S4 m, IntegerVector index, bool drop = true, SEXP Rretval = R_NilValue);
RcppExport SEXP FeatureHashing_selectColumn(SEXP mSEXP, SEXP indexSEXP, SEXP dropSEXP, SEXP RretvalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP );
        Rcpp::traits::input_parameter< bool >::type drop(dropSEXP );
        Rcpp::traits::input_parameter< SEXP >::type Rretval(RretvalSEXP );
        SEXP __result = selectColumn(m, index, drop, Rretval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// selectRow
SEXP selectRow(S4 m, IntegerVector index, bool drop = true, SEXP Rretval = R_NilValue);
RcppExport SEXP FeatureHashing_selectRow(SEXP mSEXP, SEXP indexSEXP, SEXP dropSEXP, SEXP RretvalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP );
        Rcpp::traits::input_parameter< bool >::type drop(dropSEXP );
        Rcpp::traits::input_parameter< SEXP >::type Rretval(RretvalSEXP );
        SEXP __result = selectRow(m, index, drop, Rretval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tag_existence
SEXP tag_existence(CharacterVector src, const std::string& delim);
RcppExport SEXP FeatureHashing_tag_existence(SEXP srcSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type delim(delimSEXP );
        SEXP __result = tag_existence(src, delim);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tag_count
SEXP tag_count(CharacterVector src, const std::string& delim);
RcppExport SEXP FeatureHashing_tag_count(SEXP srcSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type delim(delimSEXP );
        SEXP __result = tag_count(src, delim);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
