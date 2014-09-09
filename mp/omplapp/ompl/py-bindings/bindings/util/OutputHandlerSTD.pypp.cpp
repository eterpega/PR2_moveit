// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/util.h"
#include "OutputHandlerSTD.pypp.hpp"

namespace bp = boost::python;

struct OutputHandlerSTD_wrapper : ompl::msg::OutputHandlerSTD, bp::wrapper< ompl::msg::OutputHandlerSTD > {

    OutputHandlerSTD_wrapper(ompl::msg::OutputHandlerSTD const & arg )
    : ompl::msg::OutputHandlerSTD( arg )
      , bp::wrapper< ompl::msg::OutputHandlerSTD >(){
        // copy constructor
        
    }

    OutputHandlerSTD_wrapper( )
    : ompl::msg::OutputHandlerSTD( )
      , bp::wrapper< ompl::msg::OutputHandlerSTD >(){
        // null constructor
    
    }

    virtual void log( ::std::string const & text, ::ompl::msg::LogLevel level, char const * filename, int line ) {
        if( bp::override func_log = this->get_override( "log" ) )
            func_log( text, level, filename, line );
        else{
            this->ompl::msg::OutputHandlerSTD::log( text, level, filename, line );
        }
    }
    
    void default_log( ::std::string const & text, ::ompl::msg::LogLevel level, char const * filename, int line ) {
        ompl::msg::OutputHandlerSTD::log( text, level, filename, line );
    }

};

void register_OutputHandlerSTD_class(){

    { //::ompl::msg::OutputHandlerSTD
        typedef bp::class_< OutputHandlerSTD_wrapper, bp::bases< ompl::msg::OutputHandler > > OutputHandlerSTD_exposer_t;
        OutputHandlerSTD_exposer_t OutputHandlerSTD_exposer = OutputHandlerSTD_exposer_t( "OutputHandlerSTD", bp::init< >() );
        bp::scope OutputHandlerSTD_scope( OutputHandlerSTD_exposer );
        { //::ompl::msg::OutputHandlerSTD::log
        
            typedef void ( ::ompl::msg::OutputHandlerSTD::*log_function_type)( ::std::string const &,::ompl::msg::LogLevel,char const *,int ) ;
            typedef void ( OutputHandlerSTD_wrapper::*default_log_function_type)( ::std::string const &,::ompl::msg::LogLevel,char const *,int ) ;
            
            OutputHandlerSTD_exposer.def( 
                "log"
                , log_function_type(&::ompl::msg::OutputHandlerSTD::log)
                , default_log_function_type(&OutputHandlerSTD_wrapper::default_log)
                , ( bp::arg("text"), bp::arg("level"), bp::arg("filename"), bp::arg("line") ) );
        
        }
    }

}
