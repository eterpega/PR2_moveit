// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/control.h"
#include "DiscreteControlSpace.pypp.hpp"

namespace bp = boost::python;

struct DiscreteControlSpace_wrapper : ompl::control::DiscreteControlSpace, bp::wrapper< ompl::control::DiscreteControlSpace > {

    DiscreteControlSpace_wrapper(::ompl::base::StateSpacePtr const & stateSpace, int lowerBound, int upperBound )
    : ompl::control::DiscreteControlSpace( stateSpace, lowerBound, upperBound )
      , bp::wrapper< ompl::control::DiscreteControlSpace >(){
        // constructor
    
    }

    virtual ::ompl::control::Control * allocControl(  ) const  {
        if( bp::override func_allocControl = this->get_override( "allocControl" ) )
            return func_allocControl(  );
        else{
            return this->ompl::control::DiscreteControlSpace::allocControl(  );
        }
    }
    
    ::ompl::control::Control * default_allocControl(  ) const  {
        return ompl::control::DiscreteControlSpace::allocControl( );
    }

    virtual ::ompl::control::ControlSamplerPtr allocDefaultControlSampler(  ) const  {
        if( bp::override func_allocDefaultControlSampler = this->get_override( "allocDefaultControlSampler" ) )
            return func_allocDefaultControlSampler(  );
        else{
            return this->ompl::control::DiscreteControlSpace::allocDefaultControlSampler(  );
        }
    }
    
    ::ompl::control::ControlSamplerPtr default_allocDefaultControlSampler(  ) const  {
        return ompl::control::DiscreteControlSpace::allocDefaultControlSampler( );
    }

    virtual void copyControl( ::ompl::control::Control * destination, ::ompl::control::Control const * source ) const  {
        if( bp::override func_copyControl = this->get_override( "copyControl" ) )
            func_copyControl( boost::python::ptr(destination), boost::python::ptr(source) );
        else{
            this->ompl::control::DiscreteControlSpace::copyControl( boost::python::ptr(destination), boost::python::ptr(source) );
        }
    }
    
    void default_copyControl( ::ompl::control::Control * destination, ::ompl::control::Control const * source ) const  {
        ompl::control::DiscreteControlSpace::copyControl( boost::python::ptr(destination), boost::python::ptr(source) );
    }

    virtual void deserialize( ::ompl::control::Control * ctrl, void const * serialization ) const  {
        if( bp::override func_deserialize = this->get_override( "deserialize" ) )
            func_deserialize( boost::python::ptr(ctrl), serialization );
        else{
            this->ompl::control::DiscreteControlSpace::deserialize( boost::python::ptr(ctrl), serialization );
        }
    }
    
    void default_deserialize( ::ompl::control::Control * ctrl, void const * serialization ) const  {
        ompl::control::DiscreteControlSpace::deserialize( boost::python::ptr(ctrl), serialization );
    }

    virtual bool equalControls( ::ompl::control::Control const * control1, ::ompl::control::Control const * control2 ) const  {
        if( bp::override func_equalControls = this->get_override( "equalControls" ) )
            return func_equalControls( boost::python::ptr(control1), boost::python::ptr(control2) );
        else{
            return this->ompl::control::DiscreteControlSpace::equalControls( boost::python::ptr(control1), boost::python::ptr(control2) );
        }
    }
    
    bool default_equalControls( ::ompl::control::Control const * control1, ::ompl::control::Control const * control2 ) const  {
        return ompl::control::DiscreteControlSpace::equalControls( boost::python::ptr(control1), boost::python::ptr(control2) );
    }

    virtual void freeControl( ::ompl::control::Control * control ) const  {
        if( bp::override func_freeControl = this->get_override( "freeControl" ) )
            func_freeControl( boost::python::ptr(control) );
        else{
            this->ompl::control::DiscreteControlSpace::freeControl( boost::python::ptr(control) );
        }
    }
    
    void default_freeControl( ::ompl::control::Control * control ) const  {
        ompl::control::DiscreteControlSpace::freeControl( boost::python::ptr(control) );
    }

    virtual unsigned int getDimension(  ) const  {
        if( bp::override func_getDimension = this->get_override( "getDimension" ) )
            return func_getDimension(  );
        else{
            return this->ompl::control::DiscreteControlSpace::getDimension(  );
        }
    }
    
    unsigned int default_getDimension(  ) const  {
        return ompl::control::DiscreteControlSpace::getDimension( );
    }

    virtual unsigned int getSerializationLength(  ) const  {
        if( bp::override func_getSerializationLength = this->get_override( "getSerializationLength" ) )
            return func_getSerializationLength(  );
        else{
            return this->ompl::control::DiscreteControlSpace::getSerializationLength(  );
        }
    }
    
    unsigned int default_getSerializationLength(  ) const  {
        return ompl::control::DiscreteControlSpace::getSerializationLength( );
    }

    virtual void nullControl( ::ompl::control::Control * control ) const  {
        if( bp::override func_nullControl = this->get_override( "nullControl" ) )
            func_nullControl( boost::python::ptr(control) );
        else{
            this->ompl::control::DiscreteControlSpace::nullControl( boost::python::ptr(control) );
        }
    }
    
    void default_nullControl( ::ompl::control::Control * control ) const  {
        ompl::control::DiscreteControlSpace::nullControl( boost::python::ptr(control) );
    }

    virtual void serialize( void * serialization, ::ompl::control::Control const * ctrl ) const  {
        if( bp::override func_serialize = this->get_override( "serialize" ) )
            func_serialize( serialization, boost::python::ptr(ctrl) );
        else{
            this->ompl::control::DiscreteControlSpace::serialize( serialization, boost::python::ptr(ctrl) );
        }
    }
    
    void default_serialize( void * serialization, ::ompl::control::Control const * ctrl ) const  {
        ompl::control::DiscreteControlSpace::serialize( serialization, boost::python::ptr(ctrl) );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::control::DiscreteControlSpace::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::control::DiscreteControlSpace::setup( );
    }

    virtual ::ompl::control::ControlSamplerPtr allocControlSampler(  ) const  {
        if( bp::override func_allocControlSampler = this->get_override( "allocControlSampler" ) )
            return func_allocControlSampler(  );
        else{
            return this->ompl::control::ControlSpace::allocControlSampler(  );
        }
    }
    
    ::ompl::control::ControlSamplerPtr default_allocControlSampler(  ) const  {
        return ompl::control::ControlSpace::allocControlSampler( );
    }

    virtual bool isCompound(  ) const  {
        if( bp::override func_isCompound = this->get_override( "isCompound" ) )
            return func_isCompound(  );
        else{
            return this->ompl::control::ControlSpace::isCompound(  );
        }
    }
    
    bool default_isCompound(  ) const  {
        return ompl::control::ControlSpace::isCompound( );
    }

};

std::string __printSettings(::ompl::control::DiscreteControlSpace* obj)
{
    std::ostringstream s;
    obj->printSettings(s);
    return s.str();
}

std::string __printControl(::ompl::control::DiscreteControlSpace* space, ompl::control::Control* control)
        {
            std::ostringstream s;
            space->printControl(control, s);
            return s.str();
        }

void register_DiscreteControlSpace_class(){

    { //::ompl::control::DiscreteControlSpace
        typedef bp::class_< DiscreteControlSpace_wrapper, bp::bases< ompl::control::ControlSpace >, boost::noncopyable > DiscreteControlSpace_exposer_t;
        DiscreteControlSpace_exposer_t DiscreteControlSpace_exposer = DiscreteControlSpace_exposer_t( "DiscreteControlSpace", bp::init< ompl::base::StateSpacePtr const &, int, int >(( bp::arg("stateSpace"), bp::arg("lowerBound"), bp::arg("upperBound") )) );
        bp::scope DiscreteControlSpace_scope( DiscreteControlSpace_exposer );
        { //::ompl::control::DiscreteControlSpace::ControlType
            typedef bp::class_< ompl::control::DiscreteControlSpace::ControlType, bp::bases< ompl::control::Control >, boost::noncopyable > ControlType_exposer_t;
            ControlType_exposer_t ControlType_exposer = ControlType_exposer_t( "ControlType" );
            bp::scope ControlType_scope( ControlType_exposer );
            ControlType_exposer.def_readwrite( "value", &ompl::control::DiscreteControlSpace::ControlType::value );
        }
        { //::ompl::control::DiscreteControlSpace::allocControl
        
            typedef ::ompl::control::Control * ( ::ompl::control::DiscreteControlSpace::*allocControl_function_type)(  ) const;
            typedef ::ompl::control::Control * ( DiscreteControlSpace_wrapper::*default_allocControl_function_type)(  ) const;
            
            DiscreteControlSpace_exposer.def( 
                "allocControl"
                , allocControl_function_type(&::ompl::control::DiscreteControlSpace::allocControl)
                , default_allocControl_function_type(&DiscreteControlSpace_wrapper::default_allocControl)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::control::DiscreteControlSpace::allocDefaultControlSampler
        
            typedef ::ompl::control::ControlSamplerPtr ( ::ompl::control::DiscreteControlSpace::*allocDefaultControlSampler_function_type)(  ) const;
            typedef ::ompl::control::ControlSamplerPtr ( DiscreteControlSpace_wrapper::*default_allocDefaultControlSampler_function_type)(  ) const;
            
            DiscreteControlSpace_exposer.def( 
                "allocDefaultControlSampler"
                , allocDefaultControlSampler_function_type(&::ompl::control::DiscreteControlSpace::allocDefaultControlSampler)
                , default_allocDefaultControlSampler_function_type(&DiscreteControlSpace_wrapper::default_allocDefaultControlSampler) );
        
        }
        { //::ompl::control::DiscreteControlSpace::copyControl
        
            typedef void ( ::ompl::control::DiscreteControlSpace::*copyControl_function_type)( ::ompl::control::Control *,::ompl::control::Control const * ) const;
            typedef void ( DiscreteControlSpace_wrapper::*default_copyControl_function_type)( ::ompl::control::Control *,::ompl::control::Control const * ) const;
            
            DiscreteControlSpace_exposer.def( 
                "copyControl"
                , copyControl_function_type(&::ompl::control::DiscreteControlSpace::copyControl)
                , default_copyControl_function_type(&DiscreteControlSpace_wrapper::default_copyControl)
                , ( bp::arg("destination"), bp::arg("source") ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::deserialize
        
            typedef void ( ::ompl::control::DiscreteControlSpace::*deserialize_function_type)( ::ompl::control::Control *,void const * ) const;
            typedef void ( DiscreteControlSpace_wrapper::*default_deserialize_function_type)( ::ompl::control::Control *,void const * ) const;
            
            DiscreteControlSpace_exposer.def( 
                "deserialize"
                , deserialize_function_type(&::ompl::control::DiscreteControlSpace::deserialize)
                , default_deserialize_function_type(&DiscreteControlSpace_wrapper::default_deserialize)
                , ( bp::arg("ctrl"), bp::arg("serialization") ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::equalControls
        
            typedef bool ( ::ompl::control::DiscreteControlSpace::*equalControls_function_type)( ::ompl::control::Control const *,::ompl::control::Control const * ) const;
            typedef bool ( DiscreteControlSpace_wrapper::*default_equalControls_function_type)( ::ompl::control::Control const *,::ompl::control::Control const * ) const;
            
            DiscreteControlSpace_exposer.def( 
                "equalControls"
                , equalControls_function_type(&::ompl::control::DiscreteControlSpace::equalControls)
                , default_equalControls_function_type(&DiscreteControlSpace_wrapper::default_equalControls)
                , ( bp::arg("control1"), bp::arg("control2") ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::freeControl
        
            typedef void ( ::ompl::control::DiscreteControlSpace::*freeControl_function_type)( ::ompl::control::Control * ) const;
            typedef void ( DiscreteControlSpace_wrapper::*default_freeControl_function_type)( ::ompl::control::Control * ) const;
            
            DiscreteControlSpace_exposer.def( 
                "freeControl"
                , freeControl_function_type(&::ompl::control::DiscreteControlSpace::freeControl)
                , default_freeControl_function_type(&DiscreteControlSpace_wrapper::default_freeControl)
                , ( bp::arg("control") ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::getControlCount
        
            typedef unsigned int ( ::ompl::control::DiscreteControlSpace::*getControlCount_function_type)(  ) const;
            
            DiscreteControlSpace_exposer.def( 
                "getControlCount"
                , getControlCount_function_type( &::ompl::control::DiscreteControlSpace::getControlCount ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::getDimension
        
            typedef unsigned int ( ::ompl::control::DiscreteControlSpace::*getDimension_function_type)(  ) const;
            typedef unsigned int ( DiscreteControlSpace_wrapper::*default_getDimension_function_type)(  ) const;
            
            DiscreteControlSpace_exposer.def( 
                "getDimension"
                , getDimension_function_type(&::ompl::control::DiscreteControlSpace::getDimension)
                , default_getDimension_function_type(&DiscreteControlSpace_wrapper::default_getDimension) );
        
        }
        { //::ompl::control::DiscreteControlSpace::getLowerBound
        
            typedef int ( ::ompl::control::DiscreteControlSpace::*getLowerBound_function_type)(  ) const;
            
            DiscreteControlSpace_exposer.def( 
                "getLowerBound"
                , getLowerBound_function_type( &::ompl::control::DiscreteControlSpace::getLowerBound ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::getSerializationLength
        
            typedef unsigned int ( ::ompl::control::DiscreteControlSpace::*getSerializationLength_function_type)(  ) const;
            typedef unsigned int ( DiscreteControlSpace_wrapper::*default_getSerializationLength_function_type)(  ) const;
            
            DiscreteControlSpace_exposer.def( 
                "getSerializationLength"
                , getSerializationLength_function_type(&::ompl::control::DiscreteControlSpace::getSerializationLength)
                , default_getSerializationLength_function_type(&DiscreteControlSpace_wrapper::default_getSerializationLength) );
        
        }
        { //::ompl::control::DiscreteControlSpace::getUpperBound
        
            typedef int ( ::ompl::control::DiscreteControlSpace::*getUpperBound_function_type)(  ) const;
            
            DiscreteControlSpace_exposer.def( 
                "getUpperBound"
                , getUpperBound_function_type( &::ompl::control::DiscreteControlSpace::getUpperBound ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::nullControl
        
            typedef void ( ::ompl::control::DiscreteControlSpace::*nullControl_function_type)( ::ompl::control::Control * ) const;
            typedef void ( DiscreteControlSpace_wrapper::*default_nullControl_function_type)( ::ompl::control::Control * ) const;
            
            DiscreteControlSpace_exposer.def( 
                "nullControl"
                , nullControl_function_type(&::ompl::control::DiscreteControlSpace::nullControl)
                , default_nullControl_function_type(&DiscreteControlSpace_wrapper::default_nullControl)
                , ( bp::arg("control") ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::serialize
        
            typedef void ( ::ompl::control::DiscreteControlSpace::*serialize_function_type)( void *,::ompl::control::Control const * ) const;
            typedef void ( DiscreteControlSpace_wrapper::*default_serialize_function_type)( void *,::ompl::control::Control const * ) const;
            
            DiscreteControlSpace_exposer.def( 
                "serialize"
                , serialize_function_type(&::ompl::control::DiscreteControlSpace::serialize)
                , default_serialize_function_type(&DiscreteControlSpace_wrapper::default_serialize)
                , ( bp::arg("serialization"), bp::arg("ctrl") ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::setBounds
        
            typedef void ( ::ompl::control::DiscreteControlSpace::*setBounds_function_type)( int,int ) ;
            
            DiscreteControlSpace_exposer.def( 
                "setBounds"
                , setBounds_function_type( &::ompl::control::DiscreteControlSpace::setBounds )
                , ( bp::arg("lowerBound"), bp::arg("upperBound") ) );
        
        }
        { //::ompl::control::DiscreteControlSpace::setup
        
            typedef void ( ::ompl::control::DiscreteControlSpace::*setup_function_type)(  ) ;
            typedef void ( DiscreteControlSpace_wrapper::*default_setup_function_type)(  ) ;
            
            DiscreteControlSpace_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::control::DiscreteControlSpace::setup)
                , default_setup_function_type(&DiscreteControlSpace_wrapper::default_setup) );
        
        }
        { //::ompl::control::ControlSpace::allocControlSampler
        
            typedef ::ompl::control::ControlSamplerPtr ( ::ompl::control::ControlSpace::*allocControlSampler_function_type)(  ) const;
            typedef ::ompl::control::ControlSamplerPtr ( DiscreteControlSpace_wrapper::*default_allocControlSampler_function_type)(  ) const;
            
            DiscreteControlSpace_exposer.def( 
                "allocControlSampler"
                , allocControlSampler_function_type(&::ompl::control::ControlSpace::allocControlSampler)
                , default_allocControlSampler_function_type(&DiscreteControlSpace_wrapper::default_allocControlSampler) );
        
        }
        { //::ompl::control::ControlSpace::isCompound
        
            typedef bool ( ::ompl::control::ControlSpace::*isCompound_function_type)(  ) const;
            typedef bool ( DiscreteControlSpace_wrapper::*default_isCompound_function_type)(  ) const;
            
            DiscreteControlSpace_exposer.def( 
                "isCompound"
                , isCompound_function_type(&::ompl::control::ControlSpace::isCompound)
                , default_isCompound_function_type(&DiscreteControlSpace_wrapper::default_isCompound) );
        
        }
        DiscreteControlSpace_exposer.def("settings", &__printSettings);
        DiscreteControlSpace_exposer.def("string", &__printControl);
    }

}
