// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "GoalLazySamples.pypp.hpp"

namespace bp = boost::python;

struct GoalLazySamples_wrapper : ompl::base::GoalLazySamples, bp::wrapper< ompl::base::GoalLazySamples > {

    GoalLazySamples_wrapper(::ompl::base::SpaceInformationPtr const & si, ::ompl::base::GoalSamplingFn const & samplerFunc, bool autoStart=true, double minDist=std::numeric_limits<double>::epsilon() )
    : ompl::base::GoalLazySamples( si, boost::ref(samplerFunc), autoStart, minDist )
      , bp::wrapper< ompl::base::GoalLazySamples >(){
        // constructor
    
    }

    virtual void addState( ::ompl::base::State const * st ) {
        if( bp::override func_addState = this->get_override( "addState" ) )
            func_addState( boost::python::ptr(st) );
        else{
            this->ompl::base::GoalLazySamples::addState( boost::python::ptr(st) );
        }
    }
    
    void default_addState( ::ompl::base::State const * st ) {
        ompl::base::GoalLazySamples::addState( boost::python::ptr(st) );
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::base::GoalLazySamples::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::base::GoalLazySamples::clear( );
    }

    virtual bool couldSample(  ) const  {
        if( bp::override func_couldSample = this->get_override( "couldSample" ) )
            return func_couldSample(  );
        else{
            return this->ompl::base::GoalLazySamples::couldSample(  );
        }
    }
    
    bool default_couldSample(  ) const  {
        return ompl::base::GoalLazySamples::couldSample( );
    }

    virtual double distanceGoal( ::ompl::base::State const * st ) const  {
        if( bp::override func_distanceGoal = this->get_override( "distanceGoal" ) )
            return func_distanceGoal( boost::python::ptr(st) );
        else{
            return this->ompl::base::GoalLazySamples::distanceGoal( boost::python::ptr(st) );
        }
    }
    
    double default_distanceGoal( ::ompl::base::State const * st ) const  {
        return ompl::base::GoalLazySamples::distanceGoal( boost::python::ptr(st) );
    }

    virtual ::ompl::base::State const * getState( unsigned int index ) const  {
        if( bp::override func_getState = this->get_override( "getState" ) )
            return func_getState( index );
        else{
            return this->ompl::base::GoalLazySamples::getState( index );
        }
    }
    
    ::ompl::base::State const * default_getState( unsigned int index ) const  {
        return ompl::base::GoalLazySamples::getState( index );
    }

    virtual ::std::size_t getStateCount(  ) const  {
        if( bp::override func_getStateCount = this->get_override( "getStateCount" ) )
            return func_getStateCount(  );
        else{
            return this->ompl::base::GoalLazySamples::getStateCount(  );
        }
    }
    
    ::std::size_t default_getStateCount(  ) const  {
        return ompl::base::GoalLazySamples::getStateCount( );
    }

    void goalSamplingThread(  ){
        ompl::base::GoalLazySamples::goalSamplingThread(  );
    }

    virtual bool hasStates(  ) const  {
        if( bp::override func_hasStates = this->get_override( "hasStates" ) )
            return func_hasStates(  );
        else{
            return this->ompl::base::GoalLazySamples::hasStates(  );
        }
    }
    
    bool default_hasStates(  ) const  {
        return ompl::base::GoalLazySamples::hasStates( );
    }

    virtual void sampleGoal( ::ompl::base::State * st ) const  {
        if( bp::override func_sampleGoal = this->get_override( "sampleGoal" ) )
            func_sampleGoal( boost::python::ptr(st) );
        else{
            this->ompl::base::GoalLazySamples::sampleGoal( boost::python::ptr(st) );
        }
    }
    
    void default_sampleGoal( ::ompl::base::State * st ) const  {
        ompl::base::GoalLazySamples::sampleGoal( boost::python::ptr(st) );
    }

    virtual bool isSatisfied( ::ompl::base::State const * st ) const  {
        if( bp::override func_isSatisfied = this->get_override( "isSatisfied" ) )
            return func_isSatisfied( boost::python::ptr(st) );
        else{
            return this->ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st) );
        }
    }
    
    bool default_isSatisfied( ::ompl::base::State const * st ) const  {
        return ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st) );
    }

    virtual bool isSatisfied( ::ompl::base::State const * st, double * distance ) const  {
        if( bp::override func_isSatisfied = this->get_override( "isSatisfied" ) )
            return func_isSatisfied( boost::python::ptr(st), distance );
        else{
            return this->ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st), distance );
        }
    }
    
    bool default_isSatisfied( ::ompl::base::State const * st, double * distance ) const  {
        return ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st), distance );
    }

    virtual bool isStartGoalPairValid( ::ompl::base::State const * arg0, ::ompl::base::State const * arg1 ) const  {
        if( bp::override func_isStartGoalPairValid = this->get_override( "isStartGoalPairValid" ) )
            return func_isStartGoalPairValid( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        else{
            return this->ompl::base::Goal::isStartGoalPairValid( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        }
    }
    
    bool default_isStartGoalPairValid( ::ompl::base::State const * arg0, ::ompl::base::State const * arg1 ) const  {
        return ompl::base::Goal::isStartGoalPairValid( boost::python::ptr(arg0), boost::python::ptr(arg1) );
    }

    virtual unsigned int maxSampleCount(  ) const  {
        if( bp::override func_maxSampleCount = this->get_override( "maxSampleCount" ) )
            return func_maxSampleCount(  );
        else{
            return this->ompl::base::GoalStates::maxSampleCount(  );
        }
    }
    
    unsigned int default_maxSampleCount(  ) const  {
        return ompl::base::GoalStates::maxSampleCount( );
    }

};

void register_GoalLazySamples_class(){

    { //::ompl::base::GoalLazySamples
        typedef bp::class_< GoalLazySamples_wrapper, bp::bases< ompl::base::GoalStates >, boost::noncopyable > GoalLazySamples_exposer_t;
        GoalLazySamples_exposer_t GoalLazySamples_exposer = GoalLazySamples_exposer_t( "GoalLazySamples", bp::init< ompl::base::SpaceInformationPtr const &, ompl::base::GoalSamplingFn const &, bp::optional< bool, double > >(( bp::arg("si"), bp::arg("samplerFunc"), bp::arg("autoStart")=(bool)(true), bp::arg("minDist")=std::numeric_limits<double>::epsilon() )) );
        bp::scope GoalLazySamples_scope( GoalLazySamples_exposer );
        { //::ompl::base::GoalLazySamples::addState
        
            typedef void ( ::ompl::base::GoalLazySamples::*addState_function_type)( ::ompl::base::State const * ) ;
            typedef void ( GoalLazySamples_wrapper::*default_addState_function_type)( ::ompl::base::State const * ) ;
            
            GoalLazySamples_exposer.def( 
                "addState"
                , addState_function_type(&::ompl::base::GoalLazySamples::addState)
                , default_addState_function_type(&GoalLazySamples_wrapper::default_addState)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalLazySamples::addStateIfDifferent
        
            typedef bool ( ::ompl::base::GoalLazySamples::*addStateIfDifferent_function_type)( ::ompl::base::State const *,double ) ;
            
            GoalLazySamples_exposer.def( 
                "addStateIfDifferent"
                , addStateIfDifferent_function_type( &::ompl::base::GoalLazySamples::addStateIfDifferent )
                , ( bp::arg("st"), bp::arg("minDistance") ) );
        
        }
        { //::ompl::base::GoalLazySamples::clear
        
            typedef void ( ::ompl::base::GoalLazySamples::*clear_function_type)(  ) ;
            typedef void ( GoalLazySamples_wrapper::*default_clear_function_type)(  ) ;
            
            GoalLazySamples_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::base::GoalLazySamples::clear)
                , default_clear_function_type(&GoalLazySamples_wrapper::default_clear) );
        
        }
        { //::ompl::base::GoalLazySamples::couldSample
        
            typedef bool ( ::ompl::base::GoalLazySamples::*couldSample_function_type)(  ) const;
            typedef bool ( GoalLazySamples_wrapper::*default_couldSample_function_type)(  ) const;
            
            GoalLazySamples_exposer.def( 
                "couldSample"
                , couldSample_function_type(&::ompl::base::GoalLazySamples::couldSample)
                , default_couldSample_function_type(&GoalLazySamples_wrapper::default_couldSample) );
        
        }
        { //::ompl::base::GoalLazySamples::distanceGoal
        
            typedef double ( ::ompl::base::GoalLazySamples::*distanceGoal_function_type)( ::ompl::base::State const * ) const;
            typedef double ( GoalLazySamples_wrapper::*default_distanceGoal_function_type)( ::ompl::base::State const * ) const;
            
            GoalLazySamples_exposer.def( 
                "distanceGoal"
                , distanceGoal_function_type(&::ompl::base::GoalLazySamples::distanceGoal)
                , default_distanceGoal_function_type(&GoalLazySamples_wrapper::default_distanceGoal)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalLazySamples::getMinNewSampleDistance
        
            typedef double ( ::ompl::base::GoalLazySamples::*getMinNewSampleDistance_function_type)(  ) const;
            
            GoalLazySamples_exposer.def( 
                "getMinNewSampleDistance"
                , getMinNewSampleDistance_function_type( &::ompl::base::GoalLazySamples::getMinNewSampleDistance ) );
        
        }
        { //::ompl::base::GoalLazySamples::getState
        
            typedef ::ompl::base::State const * ( ::ompl::base::GoalLazySamples::*getState_function_type)( unsigned int ) const;
            typedef ::ompl::base::State const * ( GoalLazySamples_wrapper::*default_getState_function_type)( unsigned int ) const;
            
            GoalLazySamples_exposer.def( 
                "getState"
                , getState_function_type(&::ompl::base::GoalLazySamples::getState)
                , default_getState_function_type(&GoalLazySamples_wrapper::default_getState)
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::GoalLazySamples::getStateCount
        
            typedef ::std::size_t ( ::ompl::base::GoalLazySamples::*getStateCount_function_type)(  ) const;
            typedef ::std::size_t ( GoalLazySamples_wrapper::*default_getStateCount_function_type)(  ) const;
            
            GoalLazySamples_exposer.def( 
                "getStateCount"
                , getStateCount_function_type(&::ompl::base::GoalLazySamples::getStateCount)
                , default_getStateCount_function_type(&GoalLazySamples_wrapper::default_getStateCount) );
        
        }
        { //::ompl::base::GoalLazySamples::goalSamplingThread
        
            typedef void ( GoalLazySamples_wrapper::*goalSamplingThread_function_type)(  ) ;
            
            GoalLazySamples_exposer.def( 
                "goalSamplingThread"
                , goalSamplingThread_function_type( &GoalLazySamples_wrapper::goalSamplingThread ) );
        
        }
        { //::ompl::base::GoalLazySamples::hasStates
        
            typedef bool ( ::ompl::base::GoalLazySamples::*hasStates_function_type)(  ) const;
            typedef bool ( GoalLazySamples_wrapper::*default_hasStates_function_type)(  ) const;
            
            GoalLazySamples_exposer.def( 
                "hasStates"
                , hasStates_function_type(&::ompl::base::GoalLazySamples::hasStates)
                , default_hasStates_function_type(&GoalLazySamples_wrapper::default_hasStates) );
        
        }
        { //::ompl::base::GoalLazySamples::isSampling
        
            typedef bool ( ::ompl::base::GoalLazySamples::*isSampling_function_type)(  ) const;
            
            GoalLazySamples_exposer.def( 
                "isSampling"
                , isSampling_function_type( &::ompl::base::GoalLazySamples::isSampling ) );
        
        }
        { //::ompl::base::GoalLazySamples::sampleGoal
        
            typedef void ( ::ompl::base::GoalLazySamples::*sampleGoal_function_type)( ::ompl::base::State * ) const;
            typedef void ( GoalLazySamples_wrapper::*default_sampleGoal_function_type)( ::ompl::base::State * ) const;
            
            GoalLazySamples_exposer.def( 
                "sampleGoal"
                , sampleGoal_function_type(&::ompl::base::GoalLazySamples::sampleGoal)
                , default_sampleGoal_function_type(&GoalLazySamples_wrapper::default_sampleGoal)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalLazySamples::samplingAttemptsCount
        
            typedef unsigned int ( ::ompl::base::GoalLazySamples::*samplingAttemptsCount_function_type)(  ) const;
            
            GoalLazySamples_exposer.def( 
                "samplingAttemptsCount"
                , samplingAttemptsCount_function_type( &::ompl::base::GoalLazySamples::samplingAttemptsCount ) );
        
        }
        { //::ompl::base::GoalLazySamples::setMinNewSampleDistance
        
            typedef void ( ::ompl::base::GoalLazySamples::*setMinNewSampleDistance_function_type)( double ) ;
            
            GoalLazySamples_exposer.def( 
                "setMinNewSampleDistance"
                , setMinNewSampleDistance_function_type( &::ompl::base::GoalLazySamples::setMinNewSampleDistance )
                , ( bp::arg("dist") ) );
        
        }
        { //::ompl::base::GoalLazySamples::setNewStateCallback
        
            typedef void ( ::ompl::base::GoalLazySamples::*setNewStateCallback_function_type)( ::boost::function< void (ompl::base::State const*) > const & ) ;
            
            GoalLazySamples_exposer.def( 
                "setNewStateCallback"
                , setNewStateCallback_function_type( &::ompl::base::GoalLazySamples::setNewStateCallback )
                , ( bp::arg("callback") ) );
        
        }
        { //::ompl::base::GoalLazySamples::startSampling
        
            typedef void ( ::ompl::base::GoalLazySamples::*startSampling_function_type)(  ) ;
            
            GoalLazySamples_exposer.def( 
                "startSampling"
                , startSampling_function_type( &::ompl::base::GoalLazySamples::startSampling ) );
        
        }
        { //::ompl::base::GoalLazySamples::stopSampling
        
            typedef void ( ::ompl::base::GoalLazySamples::*stopSampling_function_type)(  ) ;
            
            GoalLazySamples_exposer.def( 
                "stopSampling"
                , stopSampling_function_type( &::ompl::base::GoalLazySamples::stopSampling ) );
        
        }
        { //::ompl::base::GoalRegion::isSatisfied
        
            typedef bool ( ::ompl::base::GoalRegion::*isSatisfied_function_type)( ::ompl::base::State const * ) const;
            typedef bool ( GoalLazySamples_wrapper::*default_isSatisfied_function_type)( ::ompl::base::State const * ) const;
            
            GoalLazySamples_exposer.def( 
                "isSatisfied"
                , isSatisfied_function_type(&::ompl::base::GoalRegion::isSatisfied)
                , default_isSatisfied_function_type(&GoalLazySamples_wrapper::default_isSatisfied)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalRegion::isSatisfied
        
            typedef bool ( ::ompl::base::GoalRegion::*isSatisfied_function_type)( ::ompl::base::State const *,double * ) const;
            typedef bool ( GoalLazySamples_wrapper::*default_isSatisfied_function_type)( ::ompl::base::State const *,double * ) const;
            
            GoalLazySamples_exposer.def( 
                "isSatisfied"
                , isSatisfied_function_type(&::ompl::base::GoalRegion::isSatisfied)
                , default_isSatisfied_function_type(&GoalLazySamples_wrapper::default_isSatisfied)
                , ( bp::arg("st"), bp::arg("distance") ) );
        
        }
        { //::ompl::base::Goal::isStartGoalPairValid
        
            typedef bool ( ::ompl::base::Goal::*isStartGoalPairValid_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            typedef bool ( GoalLazySamples_wrapper::*default_isStartGoalPairValid_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            
            GoalLazySamples_exposer.def( 
                "isStartGoalPairValid"
                , isStartGoalPairValid_function_type(&::ompl::base::Goal::isStartGoalPairValid)
                , default_isStartGoalPairValid_function_type(&GoalLazySamples_wrapper::default_isStartGoalPairValid)
                , ( bp::arg("arg0"), bp::arg("arg1") ) );
        
        }
        { //::ompl::base::GoalStates::maxSampleCount
        
            typedef unsigned int ( ::ompl::base::GoalStates::*maxSampleCount_function_type)(  ) const;
            typedef unsigned int ( GoalLazySamples_wrapper::*default_maxSampleCount_function_type)(  ) const;
            
            GoalLazySamples_exposer.def( 
                "maxSampleCount"
                , maxSampleCount_function_type(&::ompl::base::GoalStates::maxSampleCount)
                , default_maxSampleCount_function_type(&GoalLazySamples_wrapper::default_maxSampleCount) );
        
        }
    }

}
