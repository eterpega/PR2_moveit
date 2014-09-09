// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "bindings/tools.h"
#include "vectorPlannerExperiment.pypp.hpp"

namespace bp = boost::python;

void register_vectorPlannerExperiment_class(){

    { //::std::vector< ompl::tools::Benchmark::PlannerExperiment >
        typedef bp::class_< std::vector< ompl::tools::Benchmark::PlannerExperiment > > vectorPlannerExperiment_exposer_t;
        vectorPlannerExperiment_exposer_t vectorPlannerExperiment_exposer = vectorPlannerExperiment_exposer_t( "vectorPlannerExperiment" );
        bp::scope vectorPlannerExperiment_scope( vectorPlannerExperiment_exposer );
        vectorPlannerExperiment_exposer.def( bp::vector_indexing_suite< ::std::vector< ompl::tools::Benchmark::PlannerExperiment > >() );
    }

}
