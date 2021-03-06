% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/objClass.R
\name{nll_BLOQ}
\alias{nll_BLOQ}
\title{Non-linear log likelihood for the BLOQ part of the data}
\usage{
nll_BLOQ(nout.bloq, derivs.bloq, derivs.err.bloq, opt.BLOQ = c("M3",
  "M4NM", "M4BEAL", "M1"), opt.hessian = c(BLOQ_part1 = TRUE, BLOQ_part2
  = TRUE, BLOQ_part3 = TRUE))
}
\arguments{
\item{nout.bloq}{The bloq output of \code{\link[=res]{res()}}}

\item{derivs.bloq, derivs.err.bloq}{attributes of output of \code{\link[=res]{res()}}}

\item{opt.BLOQ}{Character denoting the method to deal with BLOQ data}

\item{opt.hessian}{Named logical vector to include or exclude
various summands of the hessian matrix}
}
\description{
Non-linear log likelihood for the BLOQ part of the data
}
