// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "ValidStateSamplerSelector.pypp.hpp"

namespace bp = boost::python;

void register_ValidStateSamplerSelector_class(){

    { //::ompl::base::SamplerSelector< ompl::base::ValidStateSampler >
        typedef bp::class_< ompl::base::SamplerSelector< ompl::base::ValidStateSampler > > ValidStateSamplerSelector_exposer_t;
        ValidStateSamplerSelector_exposer_t ValidStateSamplerSelector_exposer = ValidStateSamplerSelector_exposer_t( "ValidStateSamplerSelector" );
        bp::scope ValidStateSamplerSelector_scope( ValidStateSamplerSelector_exposer );
        { //::ompl::base::SamplerSelector< ompl::base::ValidStateSampler >::allocStateSampler
        
            typedef ompl::base::SamplerSelector< ompl::base::ValidStateSampler > exported_class_t;
            typedef ::ompl::base::ValidStateSamplerPtr ( exported_class_t::*allocStateSampler_function_type)( ::ompl::base::SpaceInformation const * ) ;
            
            ValidStateSamplerSelector_exposer.def( 
                "allocStateSampler"
                , allocStateSampler_function_type( &::ompl::base::SamplerSelector< ompl::base::ValidStateSampler >::allocStateSampler )
                , ( bp::arg("si") ) );
        
        }
    }

}
