// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "RealVectorRandomLinearProjectionEvaluator.pypp.hpp"

namespace bp = boost::python;

struct RealVectorRandomLinearProjectionEvaluator_wrapper : ompl::base::RealVectorRandomLinearProjectionEvaluator, bp::wrapper< ompl::base::RealVectorRandomLinearProjectionEvaluator > {

    RealVectorRandomLinearProjectionEvaluator_wrapper(::ompl::base::StateSpace const * space, ::std::vector< double > const & cellSizes )
    : ompl::base::RealVectorRandomLinearProjectionEvaluator( boost::python::ptr(space), boost::ref(cellSizes) )
      , bp::wrapper< ompl::base::RealVectorRandomLinearProjectionEvaluator >(){
        // constructor
    
    }

    RealVectorRandomLinearProjectionEvaluator_wrapper(::ompl::base::StateSpacePtr const & space, ::std::vector< double > const & cellSizes )
    : ompl::base::RealVectorRandomLinearProjectionEvaluator( space, boost::ref(cellSizes) )
      , bp::wrapper< ompl::base::RealVectorRandomLinearProjectionEvaluator >(){
        // constructor
    
    }

    RealVectorRandomLinearProjectionEvaluator_wrapper(::ompl::base::StateSpace const * space, unsigned int dim )
    : ompl::base::RealVectorRandomLinearProjectionEvaluator( boost::python::ptr(space), dim )
      , bp::wrapper< ompl::base::RealVectorRandomLinearProjectionEvaluator >(){
        // constructor
    
    }

    RealVectorRandomLinearProjectionEvaluator_wrapper(::ompl::base::StateSpacePtr const & space, unsigned int dim )
    : ompl::base::RealVectorRandomLinearProjectionEvaluator( space, dim )
      , bp::wrapper< ompl::base::RealVectorRandomLinearProjectionEvaluator >(){
        // constructor
    
    }

    virtual void defaultCellSizes(  ) {
        if( bp::override func_defaultCellSizes = this->get_override( "defaultCellSizes" ) )
            func_defaultCellSizes(  );
        else{
            this->ompl::base::ProjectionEvaluator::defaultCellSizes(  );
        }
    }
    
    void default_defaultCellSizes(  ) {
        ompl::base::ProjectionEvaluator::defaultCellSizes( );
    }

    void estimateBounds(  ){
        ompl::base::ProjectionEvaluator::estimateBounds(  );
    }

    virtual unsigned int getDimension(  ) const  {
        if( bp::override func_getDimension = this->get_override( "getDimension" ) )
            return func_getDimension(  );
        else{
            return this->ompl::base::RealVectorLinearProjectionEvaluator::getDimension(  );
        }
    }
    
    unsigned int default_getDimension(  ) const  {
        return ompl::base::RealVectorLinearProjectionEvaluator::getDimension( );
    }

    virtual void project( ::ompl::base::State const * state, ::ompl::base::EuclideanProjection & projection ) const  {
        if( bp::override func_project = this->get_override( "project" ) )
            func_project( boost::python::ptr(state), boost::ref(projection) );
        else{
            this->ompl::base::RealVectorLinearProjectionEvaluator::project( boost::python::ptr(state), boost::ref(projection) );
        }
    }
    
    void default_project( ::ompl::base::State const * state, ::ompl::base::EuclideanProjection & projection ) const  {
        ompl::base::RealVectorLinearProjectionEvaluator::project( boost::python::ptr(state), boost::ref(projection) );
    }

    virtual void setCellSizes( ::std::vector< double > const & cellSizes ) {
        if( bp::override func_setCellSizes = this->get_override( "setCellSizes" ) )
            func_setCellSizes( boost::ref(cellSizes) );
        else{
            this->ompl::base::ProjectionEvaluator::setCellSizes( boost::ref(cellSizes) );
        }
    }
    
    void default_setCellSizes( ::std::vector< double > const & cellSizes ) {
        ompl::base::ProjectionEvaluator::setCellSizes( boost::ref(cellSizes) );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::base::ProjectionEvaluator::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::base::ProjectionEvaluator::setup( );
    }

};

void register_RealVectorRandomLinearProjectionEvaluator_class(){

    { //::ompl::base::RealVectorRandomLinearProjectionEvaluator
        typedef bp::class_< RealVectorRandomLinearProjectionEvaluator_wrapper, bp::bases< ompl::base::RealVectorLinearProjectionEvaluator >, boost::noncopyable > RealVectorRandomLinearProjectionEvaluator_exposer_t;
        RealVectorRandomLinearProjectionEvaluator_exposer_t RealVectorRandomLinearProjectionEvaluator_exposer = RealVectorRandomLinearProjectionEvaluator_exposer_t( "RealVectorRandomLinearProjectionEvaluator", bp::init< ompl::base::StateSpace const *, std::vector< double > const & >(( bp::arg("space"), bp::arg("cellSizes") )) );
        bp::scope RealVectorRandomLinearProjectionEvaluator_scope( RealVectorRandomLinearProjectionEvaluator_exposer );
        RealVectorRandomLinearProjectionEvaluator_exposer.def( bp::init< ompl::base::StateSpacePtr const &, std::vector< double > const & >(( bp::arg("space"), bp::arg("cellSizes") )) );
        RealVectorRandomLinearProjectionEvaluator_exposer.def( bp::init< ompl::base::StateSpace const *, unsigned int >(( bp::arg("space"), bp::arg("dim") )) );
        RealVectorRandomLinearProjectionEvaluator_exposer.def( bp::init< ompl::base::StateSpacePtr const &, unsigned int >(( bp::arg("space"), bp::arg("dim") )) );
        { //::ompl::base::ProjectionEvaluator::defaultCellSizes
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*defaultCellSizes_function_type)(  ) ;
            typedef void ( RealVectorRandomLinearProjectionEvaluator_wrapper::*default_defaultCellSizes_function_type)(  ) ;
            
            RealVectorRandomLinearProjectionEvaluator_exposer.def( 
                "defaultCellSizes"
                , defaultCellSizes_function_type(&::ompl::base::ProjectionEvaluator::defaultCellSizes)
                , default_defaultCellSizes_function_type(&RealVectorRandomLinearProjectionEvaluator_wrapper::default_defaultCellSizes) );
        
        }
        { //::ompl::base::ProjectionEvaluator::estimateBounds
        
            typedef void ( RealVectorRandomLinearProjectionEvaluator_wrapper::*estimateBounds_function_type)(  ) ;
            
            RealVectorRandomLinearProjectionEvaluator_exposer.def( 
                "estimateBounds"
                , estimateBounds_function_type( &RealVectorRandomLinearProjectionEvaluator_wrapper::estimateBounds ) );
        
        }
        { //::ompl::base::RealVectorLinearProjectionEvaluator::getDimension
        
            typedef unsigned int ( ::ompl::base::RealVectorLinearProjectionEvaluator::*getDimension_function_type)(  ) const;
            typedef unsigned int ( RealVectorRandomLinearProjectionEvaluator_wrapper::*default_getDimension_function_type)(  ) const;
            
            RealVectorRandomLinearProjectionEvaluator_exposer.def( 
                "getDimension"
                , getDimension_function_type(&::ompl::base::RealVectorLinearProjectionEvaluator::getDimension)
                , default_getDimension_function_type(&RealVectorRandomLinearProjectionEvaluator_wrapper::default_getDimension) );
        
        }
        { //::ompl::base::RealVectorLinearProjectionEvaluator::project
        
            typedef void ( ::ompl::base::RealVectorLinearProjectionEvaluator::*project_function_type)( ::ompl::base::State const *,::ompl::base::EuclideanProjection & ) const;
            typedef void ( RealVectorRandomLinearProjectionEvaluator_wrapper::*default_project_function_type)( ::ompl::base::State const *,::ompl::base::EuclideanProjection & ) const;
            
            RealVectorRandomLinearProjectionEvaluator_exposer.def( 
                "project"
                , project_function_type(&::ompl::base::RealVectorLinearProjectionEvaluator::project)
                , default_project_function_type(&RealVectorRandomLinearProjectionEvaluator_wrapper::default_project)
                , ( bp::arg("state"), bp::arg("projection") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::setCellSizes
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*setCellSizes_function_type)( ::std::vector< double > const & ) ;
            typedef void ( RealVectorRandomLinearProjectionEvaluator_wrapper::*default_setCellSizes_function_type)( ::std::vector< double > const & ) ;
            
            RealVectorRandomLinearProjectionEvaluator_exposer.def( 
                "setCellSizes"
                , setCellSizes_function_type(&::ompl::base::ProjectionEvaluator::setCellSizes)
                , default_setCellSizes_function_type(&RealVectorRandomLinearProjectionEvaluator_wrapper::default_setCellSizes)
                , ( bp::arg("cellSizes") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::setCellSizes
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*setCellSizes_function_type)( unsigned int,double ) ;
            
            RealVectorRandomLinearProjectionEvaluator_exposer.def( 
                "setCellSizes"
                , setCellSizes_function_type( &::ompl::base::ProjectionEvaluator::setCellSizes )
                , ( bp::arg("dim"), bp::arg("cellSize") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::setup
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*setup_function_type)(  ) ;
            typedef void ( RealVectorRandomLinearProjectionEvaluator_wrapper::*default_setup_function_type)(  ) ;
            
            RealVectorRandomLinearProjectionEvaluator_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::base::ProjectionEvaluator::setup)
                , default_setup_function_type(&RealVectorRandomLinearProjectionEvaluator_wrapper::default_setup) );
        
        }
    }

}
