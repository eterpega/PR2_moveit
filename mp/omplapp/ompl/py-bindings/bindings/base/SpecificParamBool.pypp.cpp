// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "SpecificParamBool.pypp.hpp"

namespace bp = boost::python;

struct SpecificParam_less__bool__greater__wrapper : ompl::base::SpecificParam< bool >, bp::wrapper< ompl::base::SpecificParam< bool > > {

    SpecificParam_less__bool__greater__wrapper(ompl::base::SpecificParam<bool> const & arg )
    : ompl::base::SpecificParam<bool>( arg )
      , bp::wrapper< ompl::base::SpecificParam< bool > >(){
        // copy constructor
        
    }

    virtual ::std::string getValue(  ) const  {
        if( bp::override func_getValue = this->get_override( "getValue" ) )
            return func_getValue(  );
        else{
            return this->ompl::base::SpecificParam< bool >::getValue(  );
        }
    }
    
    ::std::string default_getValue(  ) const  {
        return ompl::base::SpecificParam< bool >::getValue( );
    }

    virtual bool setValue( ::std::string const & value ) {
        if( bp::override func_setValue = this->get_override( "setValue" ) )
            return func_setValue( value );
        else{
            return this->ompl::base::SpecificParam< bool >::setValue( value );
        }
    }
    
    bool default_setValue( ::std::string const & value ) {
        return ompl::base::SpecificParam< bool >::setValue( value );
    }

};

void register_SpecificParamBool_class(){

    { //::ompl::base::SpecificParam< bool >
        typedef bp::class_< SpecificParam_less__bool__greater__wrapper, bp::bases< ompl::base::GenericParam > > SpecificParamBool_exposer_t;
        SpecificParamBool_exposer_t SpecificParamBool_exposer = SpecificParamBool_exposer_t( "SpecificParamBool", bp::no_init );
        bp::scope SpecificParamBool_scope( SpecificParamBool_exposer );
        { //::ompl::base::SpecificParam< bool >::getValue
        
            typedef ompl::base::SpecificParam< bool > exported_class_t;
            typedef ::std::string ( exported_class_t::*getValue_function_type)(  ) const;
            typedef ::std::string ( SpecificParam_less__bool__greater__wrapper::*default_getValue_function_type)(  ) const;
            
            SpecificParamBool_exposer.def( 
                "getValue"
                , getValue_function_type(&::ompl::base::SpecificParam< bool >::getValue)
                , default_getValue_function_type(&SpecificParam_less__bool__greater__wrapper::default_getValue) );
        
        }
        { //::ompl::base::SpecificParam< bool >::setValue
        
            typedef ompl::base::SpecificParam< bool > exported_class_t;
            typedef bool ( exported_class_t::*setValue_function_type)( ::std::string const & ) ;
            typedef bool ( SpecificParam_less__bool__greater__wrapper::*default_setValue_function_type)( ::std::string const & ) ;
            
            SpecificParamBool_exposer.def( 
                "setValue"
                , setValue_function_type(&::ompl::base::SpecificParam< bool >::setValue)
                , default_setValue_function_type(&SpecificParam_less__bool__greater__wrapper::default_setValue)
                , ( bp::arg("value") ) );
        
        }
    }

}
