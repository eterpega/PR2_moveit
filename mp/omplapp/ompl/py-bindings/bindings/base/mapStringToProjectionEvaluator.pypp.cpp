// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "bindings/base.h"
#include "_shared_ptr_less__ompl_scope_base_scope_ProjectionEvaluator__greater___value_traits.pypp.hpp"
#include "mapStringToProjectionEvaluator.pypp.hpp"

namespace bp = boost::python;

void register_mapStringToProjectionEvaluator_class(){

    { //::std::map< std::string, boost::shared_ptr<ompl::base::ProjectionEvaluator> >
        typedef bp::class_< std::map< std::string, boost::shared_ptr<ompl::base::ProjectionEvaluator> > > mapStringToProjectionEvaluator_exposer_t;
        mapStringToProjectionEvaluator_exposer_t mapStringToProjectionEvaluator_exposer = mapStringToProjectionEvaluator_exposer_t( "mapStringToProjectionEvaluator" );
        bp::scope mapStringToProjectionEvaluator_scope( mapStringToProjectionEvaluator_exposer );
        mapStringToProjectionEvaluator_exposer.def( bp::indexing::map_suite< std::map< std::string, boost::shared_ptr<ompl::base::ProjectionEvaluator> > >() );
    }

}
