// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "StateValidityCheckerSpecs.pypp.hpp"

namespace bp = boost::python;

void register_StateValidityCheckerSpecs_class(){

    { //::ompl::base::StateValidityCheckerSpecs
        typedef bp::class_< ompl::base::StateValidityCheckerSpecs > StateValidityCheckerSpecs_exposer_t;
        StateValidityCheckerSpecs_exposer_t StateValidityCheckerSpecs_exposer = StateValidityCheckerSpecs_exposer_t( "StateValidityCheckerSpecs", bp::init< >() );
        bp::scope StateValidityCheckerSpecs_scope( StateValidityCheckerSpecs_exposer );
        bp::enum_< ompl::base::StateValidityCheckerSpecs::ClearanceComputationType>("ClearanceComputationType")
            .value("NONE", ompl::base::StateValidityCheckerSpecs::NONE)
            .value("EXACT", ompl::base::StateValidityCheckerSpecs::EXACT)
            .value("APPROXIMATE", ompl::base::StateValidityCheckerSpecs::APPROXIMATE)
            .value("BOUNDED_APPROXIMATE", ompl::base::StateValidityCheckerSpecs::BOUNDED_APPROXIMATE)
            .export_values()
            ;
        StateValidityCheckerSpecs_exposer.def_readwrite( "clearanceComputationType", &ompl::base::StateValidityCheckerSpecs::clearanceComputationType );
        StateValidityCheckerSpecs_exposer.def_readwrite( "hasValidDirectionComputation", &ompl::base::StateValidityCheckerSpecs::hasValidDirectionComputation );
    }

}
