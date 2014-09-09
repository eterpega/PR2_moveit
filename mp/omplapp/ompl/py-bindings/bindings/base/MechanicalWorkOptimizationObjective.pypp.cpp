// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "MechanicalWorkOptimizationObjective.pypp.hpp"

namespace bp = boost::python;

struct MechanicalWorkOptimizationObjective_wrapper : ompl::base::MechanicalWorkOptimizationObjective, bp::wrapper< ompl::base::MechanicalWorkOptimizationObjective > {

    MechanicalWorkOptimizationObjective_wrapper(::ompl::base::SpaceInformationPtr const & si, double pathLengthWeight=1.00000000000000008180305391403130954586231382563710212708e-5 )
    : ompl::base::MechanicalWorkOptimizationObjective( si, pathLengthWeight )
      , bp::wrapper< ompl::base::MechanicalWorkOptimizationObjective >(){
        // constructor
    
    }

    virtual double getPathLengthWeight(  ) const  {
        if( bp::override func_getPathLengthWeight = this->get_override( "getPathLengthWeight" ) )
            return func_getPathLengthWeight(  );
        else{
            return this->ompl::base::MechanicalWorkOptimizationObjective::getPathLengthWeight(  );
        }
    }
    
    double default_getPathLengthWeight(  ) const  {
        return ompl::base::MechanicalWorkOptimizationObjective::getPathLengthWeight( );
    }

    virtual ::ompl::base::Cost motionCost( ::ompl::base::State const * s1, ::ompl::base::State const * s2 ) const  {
        if( bp::override func_motionCost = this->get_override( "motionCost" ) )
            return func_motionCost( boost::python::ptr(s1), boost::python::ptr(s2) );
        else{
            return this->ompl::base::MechanicalWorkOptimizationObjective::motionCost( boost::python::ptr(s1), boost::python::ptr(s2) );
        }
    }
    
    ::ompl::base::Cost default_motionCost( ::ompl::base::State const * s1, ::ompl::base::State const * s2 ) const  {
        return ompl::base::MechanicalWorkOptimizationObjective::motionCost( boost::python::ptr(s1), boost::python::ptr(s2) );
    }

    virtual ::ompl::base::Cost averageStateCost( unsigned int numStates ) const  {
        if( bp::override func_averageStateCost = this->get_override( "averageStateCost" ) )
            return func_averageStateCost( numStates );
        else{
            return this->ompl::base::OptimizationObjective::averageStateCost( numStates );
        }
    }
    
    ::ompl::base::Cost default_averageStateCost( unsigned int numStates ) const  {
        return ompl::base::OptimizationObjective::averageStateCost( numStates );
    }

    virtual ::ompl::base::Cost combineCosts( ::ompl::base::Cost c1, ::ompl::base::Cost c2 ) const  {
        if( bp::override func_combineCosts = this->get_override( "combineCosts" ) )
            return func_combineCosts( c1, c2 );
        else{
            return this->ompl::base::OptimizationObjective::combineCosts( c1, c2 );
        }
    }
    
    ::ompl::base::Cost default_combineCosts( ::ompl::base::Cost c1, ::ompl::base::Cost c2 ) const  {
        return ompl::base::OptimizationObjective::combineCosts( c1, c2 );
    }

    virtual ::ompl::base::Cost getCost( ::ompl::base::Path const & path ) const  {
        if( bp::override func_getCost = this->get_override( "getCost" ) )
            return func_getCost( boost::ref(path) );
        else{
            return this->ompl::base::OptimizationObjective::getCost( boost::ref(path) );
        }
    }
    
    ::ompl::base::Cost default_getCost( ::ompl::base::Path const & path ) const  {
        return ompl::base::OptimizationObjective::getCost( boost::ref(path) );
    }

    virtual ::ompl::base::Cost identityCost(  ) const  {
        if( bp::override func_identityCost = this->get_override( "identityCost" ) )
            return func_identityCost(  );
        else{
            return this->ompl::base::OptimizationObjective::identityCost(  );
        }
    }
    
    ::ompl::base::Cost default_identityCost(  ) const  {
        return ompl::base::OptimizationObjective::identityCost( );
    }

    virtual ::ompl::base::Cost infiniteCost(  ) const  {
        if( bp::override func_infiniteCost = this->get_override( "infiniteCost" ) )
            return func_infiniteCost(  );
        else{
            return this->ompl::base::OptimizationObjective::infiniteCost(  );
        }
    }
    
    ::ompl::base::Cost default_infiniteCost(  ) const  {
        return ompl::base::OptimizationObjective::infiniteCost( );
    }

    virtual ::ompl::base::Cost initialCost( ::ompl::base::State const * s ) const  {
        if( bp::override func_initialCost = this->get_override( "initialCost" ) )
            return func_initialCost( boost::python::ptr(s) );
        else{
            return this->ompl::base::OptimizationObjective::initialCost( boost::python::ptr(s) );
        }
    }
    
    ::ompl::base::Cost default_initialCost( ::ompl::base::State const * s ) const  {
        return ompl::base::OptimizationObjective::initialCost( boost::python::ptr(s) );
    }

    virtual bool isCostBetterThan( ::ompl::base::Cost c1, ::ompl::base::Cost c2 ) const  {
        if( bp::override func_isCostBetterThan = this->get_override( "isCostBetterThan" ) )
            return func_isCostBetterThan( c1, c2 );
        else{
            return this->ompl::base::OptimizationObjective::isCostBetterThan( c1, c2 );
        }
    }
    
    bool default_isCostBetterThan( ::ompl::base::Cost c1, ::ompl::base::Cost c2 ) const  {
        return ompl::base::OptimizationObjective::isCostBetterThan( c1, c2 );
    }

    virtual bool isSatisfied( ::ompl::base::Cost c ) const  {
        if( bp::override func_isSatisfied = this->get_override( "isSatisfied" ) )
            return func_isSatisfied( c );
        else{
            return this->ompl::base::OptimizationObjective::isSatisfied( c );
        }
    }
    
    bool default_isSatisfied( ::ompl::base::Cost c ) const  {
        return ompl::base::OptimizationObjective::isSatisfied( c );
    }

    virtual bool isSymmetric(  ) const  {
        if( bp::override func_isSymmetric = this->get_override( "isSymmetric" ) )
            return func_isSymmetric(  );
        else{
            return this->ompl::base::OptimizationObjective::isSymmetric(  );
        }
    }
    
    bool default_isSymmetric(  ) const  {
        return ompl::base::OptimizationObjective::isSymmetric( );
    }

    virtual ::ompl::base::Cost motionCostHeuristic( ::ompl::base::State const * s1, ::ompl::base::State const * s2 ) const  {
        if( bp::override func_motionCostHeuristic = this->get_override( "motionCostHeuristic" ) )
            return func_motionCostHeuristic( boost::python::ptr(s1), boost::python::ptr(s2) );
        else{
            return this->ompl::base::OptimizationObjective::motionCostHeuristic( boost::python::ptr(s1), boost::python::ptr(s2) );
        }
    }
    
    ::ompl::base::Cost default_motionCostHeuristic( ::ompl::base::State const * s1, ::ompl::base::State const * s2 ) const  {
        return ompl::base::OptimizationObjective::motionCostHeuristic( boost::python::ptr(s1), boost::python::ptr(s2) );
    }

    virtual ::ompl::base::Cost stateCost( ::ompl::base::State const * s ) const  {
        if( bp::override func_stateCost = this->get_override( "stateCost" ) )
            return func_stateCost( boost::python::ptr(s) );
        else{
            return this->ompl::base::OptimizationObjective::stateCost( boost::python::ptr(s) );
        }
    }
    
    ::ompl::base::Cost default_stateCost( ::ompl::base::State const * s ) const  {
        return ompl::base::OptimizationObjective::stateCost( boost::python::ptr(s) );
    }

    virtual ::ompl::base::Cost terminalCost( ::ompl::base::State const * s ) const  {
        if( bp::override func_terminalCost = this->get_override( "terminalCost" ) )
            return func_terminalCost( boost::python::ptr(s) );
        else{
            return this->ompl::base::OptimizationObjective::terminalCost( boost::python::ptr(s) );
        }
    }
    
    ::ompl::base::Cost default_terminalCost( ::ompl::base::State const * s ) const  {
        return ompl::base::OptimizationObjective::terminalCost( boost::python::ptr(s) );
    }

};

void register_MechanicalWorkOptimizationObjective_class(){

    { //::ompl::base::MechanicalWorkOptimizationObjective
        typedef bp::class_< MechanicalWorkOptimizationObjective_wrapper, bp::bases< ompl::base::OptimizationObjective >, boost::noncopyable > MechanicalWorkOptimizationObjective_exposer_t;
        MechanicalWorkOptimizationObjective_exposer_t MechanicalWorkOptimizationObjective_exposer = MechanicalWorkOptimizationObjective_exposer_t( "MechanicalWorkOptimizationObjective", bp::init< ompl::base::SpaceInformationPtr const &, bp::optional< double > >(( bp::arg("si"), bp::arg("pathLengthWeight")=1.00000000000000008180305391403130954586231382563710212708e-5 )) );
        bp::scope MechanicalWorkOptimizationObjective_scope( MechanicalWorkOptimizationObjective_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::base::MechanicalWorkOptimizationObjective >();
        { //::ompl::base::MechanicalWorkOptimizationObjective::getPathLengthWeight
        
            typedef double ( ::ompl::base::MechanicalWorkOptimizationObjective::*getPathLengthWeight_function_type)(  ) const;
            typedef double ( MechanicalWorkOptimizationObjective_wrapper::*default_getPathLengthWeight_function_type)(  ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "getPathLengthWeight"
                , getPathLengthWeight_function_type(&::ompl::base::MechanicalWorkOptimizationObjective::getPathLengthWeight)
                , default_getPathLengthWeight_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_getPathLengthWeight) );
        
        }
        { //::ompl::base::MechanicalWorkOptimizationObjective::motionCost
        
            typedef ::ompl::base::Cost ( ::ompl::base::MechanicalWorkOptimizationObjective::*motionCost_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_motionCost_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "motionCost"
                , motionCost_function_type(&::ompl::base::MechanicalWorkOptimizationObjective::motionCost)
                , default_motionCost_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_motionCost)
                , ( bp::arg("s1"), bp::arg("s2") ) );
        
        }
        { //::ompl::base::OptimizationObjective::averageStateCost
        
            typedef ::ompl::base::Cost ( ::ompl::base::OptimizationObjective::*averageStateCost_function_type)( unsigned int ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_averageStateCost_function_type)( unsigned int ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "averageStateCost"
                , averageStateCost_function_type(&::ompl::base::OptimizationObjective::averageStateCost)
                , default_averageStateCost_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_averageStateCost)
                , ( bp::arg("numStates") ) );
        
        }
        { //::ompl::base::OptimizationObjective::combineCosts
        
            typedef ::ompl::base::Cost ( ::ompl::base::OptimizationObjective::*combineCosts_function_type)( ::ompl::base::Cost,::ompl::base::Cost ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_combineCosts_function_type)( ::ompl::base::Cost,::ompl::base::Cost ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "combineCosts"
                , combineCosts_function_type(&::ompl::base::OptimizationObjective::combineCosts)
                , default_combineCosts_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_combineCosts)
                , ( bp::arg("c1"), bp::arg("c2") ) );
        
        }
        { //::ompl::base::OptimizationObjective::getCost
        
            typedef ::ompl::base::Cost ( ::ompl::base::OptimizationObjective::*getCost_function_type)( ::ompl::base::Path const & ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_getCost_function_type)( ::ompl::base::Path const & ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "getCost"
                , getCost_function_type(&::ompl::base::OptimizationObjective::getCost)
                , default_getCost_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_getCost)
                , ( bp::arg("path") ) );
        
        }
        { //::ompl::base::OptimizationObjective::identityCost
        
            typedef ::ompl::base::Cost ( ::ompl::base::OptimizationObjective::*identityCost_function_type)(  ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_identityCost_function_type)(  ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "identityCost"
                , identityCost_function_type(&::ompl::base::OptimizationObjective::identityCost)
                , default_identityCost_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_identityCost) );
        
        }
        { //::ompl::base::OptimizationObjective::infiniteCost
        
            typedef ::ompl::base::Cost ( ::ompl::base::OptimizationObjective::*infiniteCost_function_type)(  ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_infiniteCost_function_type)(  ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "infiniteCost"
                , infiniteCost_function_type(&::ompl::base::OptimizationObjective::infiniteCost)
                , default_infiniteCost_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_infiniteCost) );
        
        }
        { //::ompl::base::OptimizationObjective::initialCost
        
            typedef ::ompl::base::Cost ( ::ompl::base::OptimizationObjective::*initialCost_function_type)( ::ompl::base::State const * ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_initialCost_function_type)( ::ompl::base::State const * ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "initialCost"
                , initialCost_function_type(&::ompl::base::OptimizationObjective::initialCost)
                , default_initialCost_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_initialCost)
                , ( bp::arg("s") ) );
        
        }
        { //::ompl::base::OptimizationObjective::isCostBetterThan
        
            typedef bool ( ::ompl::base::OptimizationObjective::*isCostBetterThan_function_type)( ::ompl::base::Cost,::ompl::base::Cost ) const;
            typedef bool ( MechanicalWorkOptimizationObjective_wrapper::*default_isCostBetterThan_function_type)( ::ompl::base::Cost,::ompl::base::Cost ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "isCostBetterThan"
                , isCostBetterThan_function_type(&::ompl::base::OptimizationObjective::isCostBetterThan)
                , default_isCostBetterThan_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_isCostBetterThan)
                , ( bp::arg("c1"), bp::arg("c2") ) );
        
        }
        { //::ompl::base::OptimizationObjective::isSatisfied
        
            typedef bool ( ::ompl::base::OptimizationObjective::*isSatisfied_function_type)( ::ompl::base::Cost ) const;
            typedef bool ( MechanicalWorkOptimizationObjective_wrapper::*default_isSatisfied_function_type)( ::ompl::base::Cost ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "isSatisfied"
                , isSatisfied_function_type(&::ompl::base::OptimizationObjective::isSatisfied)
                , default_isSatisfied_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_isSatisfied)
                , ( bp::arg("c") ) );
        
        }
        { //::ompl::base::OptimizationObjective::isSymmetric
        
            typedef bool ( ::ompl::base::OptimizationObjective::*isSymmetric_function_type)(  ) const;
            typedef bool ( MechanicalWorkOptimizationObjective_wrapper::*default_isSymmetric_function_type)(  ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "isSymmetric"
                , isSymmetric_function_type(&::ompl::base::OptimizationObjective::isSymmetric)
                , default_isSymmetric_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_isSymmetric) );
        
        }
        { //::ompl::base::OptimizationObjective::motionCostHeuristic
        
            typedef ::ompl::base::Cost ( ::ompl::base::OptimizationObjective::*motionCostHeuristic_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_motionCostHeuristic_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "motionCostHeuristic"
                , motionCostHeuristic_function_type(&::ompl::base::OptimizationObjective::motionCostHeuristic)
                , default_motionCostHeuristic_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_motionCostHeuristic)
                , ( bp::arg("s1"), bp::arg("s2") ) );
        
        }
        { //::ompl::base::OptimizationObjective::stateCost
        
            typedef ::ompl::base::Cost ( ::ompl::base::OptimizationObjective::*stateCost_function_type)( ::ompl::base::State const * ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_stateCost_function_type)( ::ompl::base::State const * ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "stateCost"
                , stateCost_function_type(&::ompl::base::OptimizationObjective::stateCost)
                , default_stateCost_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_stateCost)
                , ( bp::arg("s") ) );
        
        }
        { //::ompl::base::OptimizationObjective::terminalCost
        
            typedef ::ompl::base::Cost ( ::ompl::base::OptimizationObjective::*terminalCost_function_type)( ::ompl::base::State const * ) const;
            typedef ::ompl::base::Cost ( MechanicalWorkOptimizationObjective_wrapper::*default_terminalCost_function_type)( ::ompl::base::State const * ) const;
            
            MechanicalWorkOptimizationObjective_exposer.def( 
                "terminalCost"
                , terminalCost_function_type(&::ompl::base::OptimizationObjective::terminalCost)
                , default_terminalCost_function_type(&MechanicalWorkOptimizationObjective_wrapper::default_terminalCost)
                , ( bp::arg("s") ) );
        
        }
    }

}
