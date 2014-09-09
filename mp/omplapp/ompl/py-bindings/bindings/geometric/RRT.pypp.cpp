// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/geometric.h"
#include "RRT.pypp.hpp"

namespace bp = boost::python;

struct RRT_wrapper : ompl::geometric::RRT, bp::wrapper< ompl::geometric::RRT > {

    RRT_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::geometric::RRT( si )
      , bp::wrapper< ompl::geometric::RRT >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::geometric::RRT::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::geometric::RRT::clear( );
    }

    void freeMemory(  ){
        ompl::geometric::RRT::freeMemory(  );
    }

    virtual void getPlannerData( ::ompl::base::PlannerData & data ) const  {
        if( bp::override func_getPlannerData = this->get_override( "getPlannerData" ) )
            func_getPlannerData( boost::ref(data) );
        else{
            this->ompl::geometric::RRT::getPlannerData( boost::ref(data) );
        }
    }
    
    void default_getPlannerData( ::ompl::base::PlannerData & data ) const  {
        ompl::geometric::RRT::getPlannerData( boost::ref(data) );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::geometric::RRT::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::geometric::RRT::setup( );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::geometric::RRT::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::geometric::RRT::solve( boost::ref(ptc) );
    }

    virtual void checkValidity(  ) {
        if( bp::override func_checkValidity = this->get_override( "checkValidity" ) )
            func_checkValidity(  );
        else{
            this->ompl::base::Planner::checkValidity(  );
        }
    }
    
    void default_checkValidity(  ) {
        ompl::base::Planner::checkValidity( );
    }

    virtual void setProblemDefinition( ::ompl::base::ProblemDefinitionPtr const & pdef ) {
        if( bp::override func_setProblemDefinition = this->get_override( "setProblemDefinition" ) )
            func_setProblemDefinition( pdef );
        else{
            this->ompl::base::Planner::setProblemDefinition( pdef );
        }
    }
    
    void default_setProblemDefinition( ::ompl::base::ProblemDefinitionPtr const & pdef ) {
        ompl::base::Planner::setProblemDefinition( pdef );
    }

};

void register_RRT_class(){

    { //::ompl::geometric::RRT
        typedef bp::class_< RRT_wrapper, bp::bases< ::ompl::base::Planner >, boost::noncopyable > RRT_exposer_t;
        RRT_exposer_t RRT_exposer = RRT_exposer_t( "RRT", bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope RRT_scope( RRT_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::geometric::RRT >();
        { //::ompl::geometric::RRT::clear
        
            typedef void ( ::ompl::geometric::RRT::*clear_function_type)(  ) ;
            typedef void ( RRT_wrapper::*default_clear_function_type)(  ) ;
            
            RRT_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::geometric::RRT::clear)
                , default_clear_function_type(&RRT_wrapper::default_clear) );
        
        }
        { //::ompl::geometric::RRT::freeMemory
        
            typedef void ( RRT_wrapper::*freeMemory_function_type)(  ) ;
            
            RRT_exposer.def( 
                "freeMemory"
                , freeMemory_function_type( &RRT_wrapper::freeMemory ) );
        
        }
        { //::ompl::geometric::RRT::getGoalBias
        
            typedef double ( ::ompl::geometric::RRT::*getGoalBias_function_type)(  ) const;
            
            RRT_exposer.def( 
                "getGoalBias"
                , getGoalBias_function_type( &::ompl::geometric::RRT::getGoalBias ) );
        
        }
        { //::ompl::geometric::RRT::getPlannerData
        
            typedef void ( ::ompl::geometric::RRT::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            typedef void ( RRT_wrapper::*default_getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            RRT_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type(&::ompl::geometric::RRT::getPlannerData)
                , default_getPlannerData_function_type(&RRT_wrapper::default_getPlannerData)
                , ( bp::arg("data") ) );
        
        }
        { //::ompl::geometric::RRT::getRange
        
            typedef double ( ::ompl::geometric::RRT::*getRange_function_type)(  ) const;
            
            RRT_exposer.def( 
                "getRange"
                , getRange_function_type( &::ompl::geometric::RRT::getRange ) );
        
        }
        { //::ompl::geometric::RRT::setGoalBias
        
            typedef void ( ::ompl::geometric::RRT::*setGoalBias_function_type)( double ) ;
            
            RRT_exposer.def( 
                "setGoalBias"
                , setGoalBias_function_type( &::ompl::geometric::RRT::setGoalBias )
                , ( bp::arg("goalBias") ) );
        
        }
        { //::ompl::geometric::RRT::setRange
        
            typedef void ( ::ompl::geometric::RRT::*setRange_function_type)( double ) ;
            
            RRT_exposer.def( 
                "setRange"
                , setRange_function_type( &::ompl::geometric::RRT::setRange )
                , ( bp::arg("distance") ) );
        
        }
        { //::ompl::geometric::RRT::setup
        
            typedef void ( ::ompl::geometric::RRT::*setup_function_type)(  ) ;
            typedef void ( RRT_wrapper::*default_setup_function_type)(  ) ;
            
            RRT_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::geometric::RRT::setup)
                , default_setup_function_type(&RRT_wrapper::default_setup) );
        
        }
        { //::ompl::geometric::RRT::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::geometric::RRT::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( RRT_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            RRT_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::geometric::RRT::solve)
                , default_solve_function_type(&RRT_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        RRT_exposer.def("solve", (::ompl::base::PlannerStatus(::ompl::base::Planner::*)( double ))(&::ompl::base::Planner::solve), (bp::arg("solveTime")) );
        RRT_exposer.def("setProblemDefinition",&::ompl::base::Planner::setProblemDefinition,
                            &RRT_wrapper::default_setProblemDefinition, (bp::arg("pdef")) );
        RRT_exposer.def("checkValidity",&::ompl::base::Planner::checkValidity,
                        &RRT_wrapper::default_checkValidity );
    }

}
