// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "PrecomputedStateSampler.pypp.hpp"

namespace bp = boost::python;

struct PrecomputedStateSampler_wrapper : ompl::base::PrecomputedStateSampler, bp::wrapper< ompl::base::PrecomputedStateSampler > {

    PrecomputedStateSampler_wrapper(::ompl::base::StateSpace const * space, ::std::vector< ompl::base::State const* > const & states )
    : ompl::base::PrecomputedStateSampler( boost::python::ptr(space), boost::ref(states) )
      , bp::wrapper< ompl::base::PrecomputedStateSampler >(){
        // constructor
    
    }

    PrecomputedStateSampler_wrapper(::ompl::base::StateSpace const * space, ::std::vector< ompl::base::State const* > const & states, ::std::size_t minIndex, ::std::size_t maxIndex )
    : ompl::base::PrecomputedStateSampler( boost::python::ptr(space), boost::ref(states), minIndex, maxIndex )
      , bp::wrapper< ompl::base::PrecomputedStateSampler >(){
        // constructor
    
    }

    virtual void sampleGaussian( ::ompl::base::State * state, ::ompl::base::State const * mean, double const stdDev ) {
        if( bp::override func_sampleGaussian = this->get_override( "sampleGaussian" ) )
            func_sampleGaussian( boost::python::ptr(state), boost::python::ptr(mean), stdDev );
        else{
            this->ompl::base::PrecomputedStateSampler::sampleGaussian( boost::python::ptr(state), boost::python::ptr(mean), stdDev );
        }
    }
    
    void default_sampleGaussian( ::ompl::base::State * state, ::ompl::base::State const * mean, double const stdDev ) {
        ompl::base::PrecomputedStateSampler::sampleGaussian( boost::python::ptr(state), boost::python::ptr(mean), stdDev );
    }

    virtual void sampleUniform( ::ompl::base::State * state ) {
        if( bp::override func_sampleUniform = this->get_override( "sampleUniform" ) )
            func_sampleUniform( boost::python::ptr(state) );
        else{
            this->ompl::base::PrecomputedStateSampler::sampleUniform( boost::python::ptr(state) );
        }
    }
    
    void default_sampleUniform( ::ompl::base::State * state ) {
        ompl::base::PrecomputedStateSampler::sampleUniform( boost::python::ptr(state) );
    }

    virtual void sampleUniformNear( ::ompl::base::State * state, ::ompl::base::State const * near, double const distance ) {
        if( bp::override func_sampleUniformNear = this->get_override( "sampleUniformNear" ) )
            func_sampleUniformNear( boost::python::ptr(state), boost::python::ptr(near), distance );
        else{
            this->ompl::base::PrecomputedStateSampler::sampleUniformNear( boost::python::ptr(state), boost::python::ptr(near), distance );
        }
    }
    
    void default_sampleUniformNear( ::ompl::base::State * state, ::ompl::base::State const * near, double const distance ) {
        ompl::base::PrecomputedStateSampler::sampleUniformNear( boost::python::ptr(state), boost::python::ptr(near), distance );
    }

};

void register_PrecomputedStateSampler_class(){

    { //::ompl::base::PrecomputedStateSampler
        typedef bp::class_< PrecomputedStateSampler_wrapper, bp::bases< ompl::base::StateSampler >, boost::noncopyable > PrecomputedStateSampler_exposer_t;
        PrecomputedStateSampler_exposer_t PrecomputedStateSampler_exposer = PrecomputedStateSampler_exposer_t( "PrecomputedStateSampler", bp::init< ompl::base::StateSpace const *, std::vector< ompl::base::State const* > const & >(( bp::arg("space"), bp::arg("states") )) );
        bp::scope PrecomputedStateSampler_scope( PrecomputedStateSampler_exposer );
        PrecomputedStateSampler_exposer.def( bp::init< ompl::base::StateSpace const *, std::vector< ompl::base::State const* > const &, std::size_t, std::size_t >(( bp::arg("space"), bp::arg("states"), bp::arg("minIndex"), bp::arg("maxIndex") )) );
        { //::ompl::base::PrecomputedStateSampler::sampleGaussian
        
            typedef void ( ::ompl::base::PrecomputedStateSampler::*sampleGaussian_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            typedef void ( PrecomputedStateSampler_wrapper::*default_sampleGaussian_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            
            PrecomputedStateSampler_exposer.def( 
                "sampleGaussian"
                , sampleGaussian_function_type(&::ompl::base::PrecomputedStateSampler::sampleGaussian)
                , default_sampleGaussian_function_type(&PrecomputedStateSampler_wrapper::default_sampleGaussian)
                , ( bp::arg("state"), bp::arg("mean"), bp::arg("stdDev") ) );
        
        }
        { //::ompl::base::PrecomputedStateSampler::sampleUniform
        
            typedef void ( ::ompl::base::PrecomputedStateSampler::*sampleUniform_function_type)( ::ompl::base::State * ) ;
            typedef void ( PrecomputedStateSampler_wrapper::*default_sampleUniform_function_type)( ::ompl::base::State * ) ;
            
            PrecomputedStateSampler_exposer.def( 
                "sampleUniform"
                , sampleUniform_function_type(&::ompl::base::PrecomputedStateSampler::sampleUniform)
                , default_sampleUniform_function_type(&PrecomputedStateSampler_wrapper::default_sampleUniform)
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::PrecomputedStateSampler::sampleUniformNear
        
            typedef void ( ::ompl::base::PrecomputedStateSampler::*sampleUniformNear_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            typedef void ( PrecomputedStateSampler_wrapper::*default_sampleUniformNear_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            
            PrecomputedStateSampler_exposer.def( 
                "sampleUniformNear"
                , sampleUniformNear_function_type(&::ompl::base::PrecomputedStateSampler::sampleUniformNear)
                , default_sampleUniformNear_function_type(&PrecomputedStateSampler_wrapper::default_sampleUniformNear)
                , ( bp::arg("state"), bp::arg("near"), bp::arg("distance") ) );
        
        }
    }

}
