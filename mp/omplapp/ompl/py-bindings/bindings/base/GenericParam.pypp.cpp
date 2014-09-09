// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "GenericParam.pypp.hpp"

namespace bp = boost::python;

struct GenericParam_wrapper : ompl::base::GenericParam, bp::wrapper< ompl::base::GenericParam > {

    GenericParam_wrapper(::std::string const & name )
    : ompl::base::GenericParam( name )
      , bp::wrapper< ompl::base::GenericParam >(){
        // constructor
    
    }

    virtual ::std::string getValue(  ) const {
        bp::override func_getValue = this->get_override( "getValue" );
        return func_getValue(  );
    }

    virtual bool setValue( ::std::string const & value ){
        bp::override func_setValue = this->get_override( "setValue" );
        return func_setValue( value );
    }

};

void register_GenericParam_class(){

    { //::ompl::base::GenericParam
        typedef bp::class_< GenericParam_wrapper, boost::noncopyable > GenericParam_exposer_t;
        GenericParam_exposer_t GenericParam_exposer = GenericParam_exposer_t( "GenericParam", bp::init< std::string const & >(( bp::arg("name") )) );
        bp::scope GenericParam_scope( GenericParam_exposer );
        { //::ompl::base::GenericParam::getName
        
            typedef ::std::string const & ( ::ompl::base::GenericParam::*getName_function_type)(  ) const;
            
            GenericParam_exposer.def( 
                "getName"
                , getName_function_type( &::ompl::base::GenericParam::getName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::GenericParam::getRangeSuggestion
        
            typedef ::std::string const & ( ::ompl::base::GenericParam::*getRangeSuggestion_function_type)(  ) const;
            
            GenericParam_exposer.def( 
                "getRangeSuggestion"
                , getRangeSuggestion_function_type( &::ompl::base::GenericParam::getRangeSuggestion )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::GenericParam::getValue
        
            typedef ::std::string ( ::ompl::base::GenericParam::*getValue_function_type)(  ) const;
            
            GenericParam_exposer.def( 
                "getValue"
                , bp::pure_virtual( getValue_function_type(&::ompl::base::GenericParam::getValue) ) );
        
        }
        { //::ompl::base::GenericParam::setName
        
            typedef void ( ::ompl::base::GenericParam::*setName_function_type)( ::std::string const & ) ;
            
            GenericParam_exposer.def( 
                "setName"
                , setName_function_type( &::ompl::base::GenericParam::setName )
                , ( bp::arg("name") ) );
        
        }
        { //::ompl::base::GenericParam::setRangeSuggestion
        
            typedef void ( ::ompl::base::GenericParam::*setRangeSuggestion_function_type)( ::std::string const & ) ;
            
            GenericParam_exposer.def( 
                "setRangeSuggestion"
                , setRangeSuggestion_function_type( &::ompl::base::GenericParam::setRangeSuggestion )
                , ( bp::arg("rangeSuggestion") ) );
        
        }
        { //::ompl::base::GenericParam::setValue
        
            typedef bool ( ::ompl::base::GenericParam::*setValue_function_type)( ::std::string const & ) ;
            
            GenericParam_exposer.def( 
                "setValue"
                , bp::pure_virtual( setValue_function_type(&::ompl::base::GenericParam::setValue) )
                , ( bp::arg("value") ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< ompl::base::GenericParam > >();
    }

}
