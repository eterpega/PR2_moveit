// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/control.h"
#include "SpaceInformation.pypp.hpp"

namespace bp = boost::python;

struct ControlSpaceInformation_wrapper : ompl::control::SpaceInformation, bp::wrapper< ompl::control::SpaceInformation > {

    ControlSpaceInformation_wrapper(::ompl::base::StateSpacePtr const & stateSpace, ::ompl::control::ControlSpacePtr const & controlSpace )
    : ompl::control::SpaceInformation( stateSpace, controlSpace )
      , bp::wrapper< ompl::control::SpaceInformation >(){
        // constructor
    
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::control::SpaceInformation::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::control::SpaceInformation::setup( );
    }

    void setDefaultMotionValidator(  ){
        ompl::base::SpaceInformation::setDefaultMotionValidator(  );
    }

};

std::string __printSettings(::ompl::control::SpaceInformation* obj)
{
    std::ostringstream s;
    obj->printSettings(s);
    return s.str();
}

std::string __printControl(::ompl::control::SpaceInformation* space, ompl::control::Control* control)
        {
            std::ostringstream s;
            space->printControl(control, s);
            return s.str();
        }

void register_SpaceInformation_class(){

    { //::ompl::control::SpaceInformation
        typedef bp::class_< ControlSpaceInformation_wrapper, bp::bases< ::ompl::base::SpaceInformation >, boost::noncopyable > SpaceInformation_exposer_t;
        SpaceInformation_exposer_t SpaceInformation_exposer = SpaceInformation_exposer_t( "SpaceInformation", bp::init< ompl::base::StateSpacePtr const &, ompl::control::ControlSpacePtr const & >(( bp::arg("stateSpace"), bp::arg("controlSpace") )) );
        bp::scope SpaceInformation_scope( SpaceInformation_exposer );
        { //::ompl::control::SpaceInformation::allocControl
        
            typedef ::ompl::control::Control * ( ::ompl::control::SpaceInformation::*allocControl_function_type)(  ) const;
            
            SpaceInformation_exposer.def( 
                "allocControl"
                , allocControl_function_type( &::ompl::control::SpaceInformation::allocControl )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::control::SpaceInformation::allocControlSampler
        
            typedef ::ompl::control::ControlSamplerPtr ( ::ompl::control::SpaceInformation::*allocControlSampler_function_type)(  ) const;
            
            SpaceInformation_exposer.def( 
                "allocControlSampler"
                , allocControlSampler_function_type( &::ompl::control::SpaceInformation::allocControlSampler ) );
        
        }
        { //::ompl::control::SpaceInformation::allocDirectedControlSampler
        
            typedef ::ompl::control::DirectedControlSamplerPtr ( ::ompl::control::SpaceInformation::*allocDirectedControlSampler_function_type)(  ) const;
            
            SpaceInformation_exposer.def( 
                "allocDirectedControlSampler"
                , allocDirectedControlSampler_function_type( &::ompl::control::SpaceInformation::allocDirectedControlSampler ) );
        
        }
        { //::ompl::control::SpaceInformation::canPropagateBackward
        
            typedef bool ( ::ompl::control::SpaceInformation::*canPropagateBackward_function_type)(  ) const;
            
            SpaceInformation_exposer.def( 
                "canPropagateBackward"
                , canPropagateBackward_function_type( &::ompl::control::SpaceInformation::canPropagateBackward ) );
        
        }
        { //::ompl::control::SpaceInformation::clearDirectedSamplerAllocator
        
            typedef void ( ::ompl::control::SpaceInformation::*clearDirectedSamplerAllocator_function_type)(  ) ;
            
            SpaceInformation_exposer.def( 
                "clearDirectedSamplerAllocator"
                , clearDirectedSamplerAllocator_function_type( &::ompl::control::SpaceInformation::clearDirectedSamplerAllocator ) );
        
        }
        { //::ompl::control::SpaceInformation::cloneControl
        
            typedef ::ompl::control::Control * ( ::ompl::control::SpaceInformation::*cloneControl_function_type)( ::ompl::control::Control const * ) const;
            
            SpaceInformation_exposer.def( 
                "cloneControl"
                , cloneControl_function_type( &::ompl::control::SpaceInformation::cloneControl )
                , ( bp::arg("source") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::control::SpaceInformation::copyControl
        
            typedef void ( ::ompl::control::SpaceInformation::*copyControl_function_type)( ::ompl::control::Control *,::ompl::control::Control const * ) const;
            
            SpaceInformation_exposer.def( 
                "copyControl"
                , copyControl_function_type( &::ompl::control::SpaceInformation::copyControl )
                , ( bp::arg("destination"), bp::arg("source") ) );
        
        }
        { //::ompl::control::SpaceInformation::equalControls
        
            typedef bool ( ::ompl::control::SpaceInformation::*equalControls_function_type)( ::ompl::control::Control const *,::ompl::control::Control const * ) const;
            
            SpaceInformation_exposer.def( 
                "equalControls"
                , equalControls_function_type( &::ompl::control::SpaceInformation::equalControls )
                , ( bp::arg("control1"), bp::arg("control2") ) );
        
        }
        { //::ompl::control::SpaceInformation::freeControl
        
            typedef void ( ::ompl::control::SpaceInformation::*freeControl_function_type)( ::ompl::control::Control * ) const;
            
            SpaceInformation_exposer.def( 
                "freeControl"
                , freeControl_function_type( &::ompl::control::SpaceInformation::freeControl )
                , ( bp::arg("control") ) );
        
        }
        { //::ompl::control::SpaceInformation::getControlSpace
        
            typedef ::ompl::control::ControlSpacePtr const & ( ::ompl::control::SpaceInformation::*getControlSpace_function_type)(  ) const;
            
            SpaceInformation_exposer.def( 
                "getControlSpace"
                , getControlSpace_function_type( &::ompl::control::SpaceInformation::getControlSpace )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SpaceInformation::getMaxControlDuration
        
            typedef unsigned int ( ::ompl::control::SpaceInformation::*getMaxControlDuration_function_type)(  ) const;
            
            SpaceInformation_exposer.def( 
                "getMaxControlDuration"
                , getMaxControlDuration_function_type( &::ompl::control::SpaceInformation::getMaxControlDuration ) );
        
        }
        { //::ompl::control::SpaceInformation::getMinControlDuration
        
            typedef unsigned int ( ::ompl::control::SpaceInformation::*getMinControlDuration_function_type)(  ) const;
            
            SpaceInformation_exposer.def( 
                "getMinControlDuration"
                , getMinControlDuration_function_type( &::ompl::control::SpaceInformation::getMinControlDuration ) );
        
        }
        { //::ompl::control::SpaceInformation::getPropagationStepSize
        
            typedef double ( ::ompl::control::SpaceInformation::*getPropagationStepSize_function_type)(  ) const;
            
            SpaceInformation_exposer.def( 
                "getPropagationStepSize"
                , getPropagationStepSize_function_type( &::ompl::control::SpaceInformation::getPropagationStepSize ) );
        
        }
        { //::ompl::control::SpaceInformation::getStatePropagator
        
            typedef ::ompl::control::StatePropagatorPtr const & ( ::ompl::control::SpaceInformation::*getStatePropagator_function_type)(  ) const;
            
            SpaceInformation_exposer.def( 
                "getStatePropagator"
                , getStatePropagator_function_type( &::ompl::control::SpaceInformation::getStatePropagator )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SpaceInformation::nullControl
        
            typedef void ( ::ompl::control::SpaceInformation::*nullControl_function_type)( ::ompl::control::Control * ) const;
            
            SpaceInformation_exposer.def( 
                "nullControl"
                , nullControl_function_type( &::ompl::control::SpaceInformation::nullControl )
                , ( bp::arg("control") ) );
        
        }
        { //::ompl::control::SpaceInformation::propagate
        
            typedef void ( ::ompl::control::SpaceInformation::*propagate_function_type)( ::ompl::base::State const *,::ompl::control::Control const *,int,::ompl::base::State * ) const;
            
            SpaceInformation_exposer.def( 
                "propagate"
                , propagate_function_type( &::ompl::control::SpaceInformation::propagate )
                , ( bp::arg("state"), bp::arg("control"), bp::arg("steps"), bp::arg("result") ) );
        
        }
        { //::ompl::control::SpaceInformation::propagate
        
            typedef void ( ::ompl::control::SpaceInformation::*propagate_function_type)( ::ompl::base::State const *,::ompl::control::Control const *,int,::std::vector< ompl::base::State* > &,bool ) const;
            
            SpaceInformation_exposer.def( 
                "propagate"
                , propagate_function_type( &::ompl::control::SpaceInformation::propagate )
                , ( bp::arg("state"), bp::arg("control"), bp::arg("steps"), bp::arg("result"), bp::arg("alloc") ) );
        
        }
        { //::ompl::control::SpaceInformation::propagateWhileValid
        
            typedef unsigned int ( ::ompl::control::SpaceInformation::*propagateWhileValid_function_type)( ::ompl::base::State const *,::ompl::control::Control const *,int,::ompl::base::State * ) const;
            
            SpaceInformation_exposer.def( 
                "propagateWhileValid"
                , propagateWhileValid_function_type( &::ompl::control::SpaceInformation::propagateWhileValid )
                , ( bp::arg("state"), bp::arg("control"), bp::arg("steps"), bp::arg("result") ) );
        
        }
        { //::ompl::control::SpaceInformation::propagateWhileValid
        
            typedef unsigned int ( ::ompl::control::SpaceInformation::*propagateWhileValid_function_type)( ::ompl::base::State const *,::ompl::control::Control const *,int,::std::vector< ompl::base::State* > &,bool ) const;
            
            SpaceInformation_exposer.def( 
                "propagateWhileValid"
                , propagateWhileValid_function_type( &::ompl::control::SpaceInformation::propagateWhileValid )
                , ( bp::arg("state"), bp::arg("control"), bp::arg("steps"), bp::arg("result"), bp::arg("alloc") ) );
        
        }
        { //::ompl::control::SpaceInformation::setDirectedControlSamplerAllocator
        
            typedef void ( ::ompl::control::SpaceInformation::*setDirectedControlSamplerAllocator_function_type)( ::ompl::control::DirectedControlSamplerAllocator const & ) ;
            
            SpaceInformation_exposer.def( 
                "setDirectedControlSamplerAllocator"
                , setDirectedControlSamplerAllocator_function_type( &::ompl::control::SpaceInformation::setDirectedControlSamplerAllocator )
                , ( bp::arg("dcsa") ) );
        
        }
        { //::ompl::control::SpaceInformation::setMinMaxControlDuration
        
            typedef void ( ::ompl::control::SpaceInformation::*setMinMaxControlDuration_function_type)( unsigned int,unsigned int ) ;
            
            SpaceInformation_exposer.def( 
                "setMinMaxControlDuration"
                , setMinMaxControlDuration_function_type( &::ompl::control::SpaceInformation::setMinMaxControlDuration )
                , ( bp::arg("minSteps"), bp::arg("maxSteps") ) );
        
        }
        { //::ompl::control::SpaceInformation::setPropagationStepSize
        
            typedef void ( ::ompl::control::SpaceInformation::*setPropagationStepSize_function_type)( double ) ;
            
            SpaceInformation_exposer.def( 
                "setPropagationStepSize"
                , setPropagationStepSize_function_type( &::ompl::control::SpaceInformation::setPropagationStepSize )
                , ( bp::arg("stepSize") ) );
        
        }
        { //::ompl::control::SpaceInformation::setStatePropagator
        
            typedef void ( ::ompl::control::SpaceInformation::*setStatePropagator_function_type)( ::ompl::control::StatePropagatorFn const & ) ;
            
            SpaceInformation_exposer.def( 
                "setStatePropagator"
                , setStatePropagator_function_type( &::ompl::control::SpaceInformation::setStatePropagator )
                , ( bp::arg("fn") ) );
        
        }
        { //::ompl::control::SpaceInformation::setStatePropagator
        
            typedef void ( ::ompl::control::SpaceInformation::*setStatePropagator_function_type)( ::ompl::control::StatePropagatorPtr const & ) ;
            
            SpaceInformation_exposer.def( 
                "setStatePropagator"
                , setStatePropagator_function_type( &::ompl::control::SpaceInformation::setStatePropagator )
                , ( bp::arg("sp") ) );
        
        }
        { //::ompl::control::SpaceInformation::setup
        
            typedef void ( ::ompl::control::SpaceInformation::*setup_function_type)(  ) ;
            typedef void ( ControlSpaceInformation_wrapper::*default_setup_function_type)(  ) ;
            
            SpaceInformation_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::control::SpaceInformation::setup)
                , default_setup_function_type(&ControlSpaceInformation_wrapper::default_setup) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< ompl::control::SpaceInformation > >();
        bp::implicitly_convertible< boost::shared_ptr< ompl::control::SpaceInformation >, boost::shared_ptr< ompl::base::SpaceInformation > >();
        SpaceInformation_exposer.def("settings", &__printSettings);
        SpaceInformation_exposer.def("string", &__printControl);
    }

}
