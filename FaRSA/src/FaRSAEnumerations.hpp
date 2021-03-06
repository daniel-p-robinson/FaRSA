// Copyright (C) 2020 Frank E. Curtis, Daniel P. Robinson
//
// This code is published under the ??? License.
//
// Author(s) : Frank E. Curtis, Daniel P. Robinson

#ifndef __FARSAENUMERATIONS_HPP__
#define __FARSAENUMERATIONS_HPP__

namespace FaRSA
{

/** @name Enumerations */
//@{
/**
 * FaRSA enumerations
 */
enum FaRSA_Status
{
  FARSA_UNSET = -1,
  FARSA_SUCCESS,
  FARSA_CPU_TIME_LIMIT,
  FARSA_ITERATE_NORM_LIMIT,
  FARSA_ITERATION_LIMIT,
  FARSA_FUNCTION_EVALUATION_LIMIT,
  FARSA_GRADIENT_EVALUATION_LIMIT,
  FARSA_INITIALIZATION_FAILURE,
  FARSA_FUNCTION_EVALUATION_FAILURE,
  FARSA_GRADIENT_EVALUATION_FAILURE,
  FARSA_FUNCTION_EVALUATION_ASSERT,
  FARSA_GRADIENT_EVALUATION_ASSERT,
  FARSA_MATRIX,
  FARSA_MATRIX_ASSERT,
  FARSA_VECTOR,
  FARSA_VECTOR_ASSERT,
  FARSA_DIRECTION_COMPUTATION_FAILURE,
  FARSA_LINE_SEARCH_FAILURE,
  FARSA_APPROXIMATE_HESSIAN_UPDATE_FAILURE,
  FARSA_POINT_SET_UPDATE_FAILURE
};
/**
 * Direction computation enumerations
 */
enum DC_Status
{
  DC_UNSET = -1,
  DC_SUCCESS,
  DC_EVALUATION_FAILURE,
  DC_ITERATION_LIMIT
};
/**
 * Line search enumerations
 */
enum LS_Status
{
  LS_UNSET = -1,
  LS_SUCCESS,
  LS_EVALUATION_FAILURE,
  LS_STEPSIZE_TOO_SMALL,
  LS_ITERATION_LIMIT
};
/**
 * Report type enumerations
 */
enum ReportType
{
  R_SOLVER = 0,
  R_SUBSOLVER
};
/**
 * Report level enumerations
 */
enum ReportLevel
{
  R_BASIC = 0,
  R_PER_ITERATION,
  R_PER_INNER_ITERATION
};
/**
 * Sparse format enumerations
 */
enum SparseFormatType
{
  M_COORDINATE_LIST = 0,
  M_COMPRESSED_SPARSE_COLUMN,
  M_COMPRESSED_SPARSE_ROW
};
//@}

} // namespace FaRSA

#endif /* __FARSAENUMERATIONS_HPP__ */
