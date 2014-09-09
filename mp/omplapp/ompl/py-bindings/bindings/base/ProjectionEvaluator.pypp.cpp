// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "ProjectionEvaluator.pypp.hpp"

namespace bp = boost::python;

struct ProjectionEvaluator_wrapper : ompl::base::ProjectionEvaluator, bp::wrapper< ompl::base::ProjectionEvaluator > {

    ProjectionEvaluator_wrapper(::ompl::base::StateSpace const * space )
    : ompl::base::ProjectionEvaluator( boost::python::ptr(space) )
      , bp::wrapper< ompl::base::ProjectionEvaluator >(){
        // constructor
    
    }

    ProjectionEvaluator_wrapper(::ompl::base::StateSpacePtr const & space )
    : ompl::base::ProjectionEvaluator( space )
      , bp::wrapper< ompl::base::ProjectionEvaluator >(){
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

    virtual unsigned int getDimension(  ) const {
        bp::override func_getDimension = this->get_override( "getDimension" );
        return func_getDimension(  );
    }

    virtual void project( ::ompl::base::State const * state, ::ompl::base::EuclideanProjection & projection ) const {
        bp::override func_project = this->get_override( "project" );
        func_project( boost::python::ptr(state), boost::ref(projection) );
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

std::string __printSettings(::ompl::base::ProjectionEvaluator* obj)
{
    std::ostringstream s;
    obj->printSettings(s);
    return s.str();
}

std::string __printProjection(::ompl::base::ProjectionEvaluator* obj, const ompl::base::EuclideanProjection &projection)
        {
            std::ostringstream s;
            obj->printProjection(projection, s);
            return s.str();
        }

void register_ProjectionEvaluator_class(){

    { //::ompl::base::ProjectionEvaluator
        typedef bp::class_< ProjectionEvaluator_wrapper, boost::noncopyable > ProjectionEvaluator_exposer_t;
        ProjectionEvaluator_exposer_t ProjectionEvaluator_exposer = ProjectionEvaluator_exposer_t( "ProjectionEvaluator", bp::init< ompl::base::StateSpace const * >(( bp::arg("space") )) );
        bp::scope ProjectionEvaluator_scope( ProjectionEvaluator_exposer );
        ProjectionEvaluator_exposer.def( bp::init< ompl::base::StateSpacePtr const & >(( bp::arg("space") )) );
        { //::ompl::base::ProjectionEvaluator::checkBounds
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*checkBounds_function_type)(  ) const;
            
            ProjectionEvaluator_exposer.def( 
                "checkBounds"
                , checkBounds_function_type( &::ompl::base::ProjectionEvaluator::checkBounds ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::checkCellSizes
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*checkCellSizes_function_type)(  ) const;
            
            ProjectionEvaluator_exposer.def( 
                "checkCellSizes"
                , checkCellSizes_function_type( &::ompl::base::ProjectionEvaluator::checkCellSizes ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::computeCoordinates
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*computeCoordinates_function_type)( ::ompl::base::EuclideanProjection const &,::ompl::base::ProjectionCoordinates & ) const;
            
            ProjectionEvaluator_exposer.def( 
                "computeCoordinates"
                , computeCoordinates_function_type( &::ompl::base::ProjectionEvaluator::computeCoordinates )
                , ( bp::arg("projection"), bp::arg("coord") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::computeCoordinates
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*computeCoordinates_function_type)( ::ompl::base::State const *,::ompl::base::ProjectionCoordinates & ) const;
            
            ProjectionEvaluator_exposer.def( 
                "computeCoordinates"
                , computeCoordinates_function_type( &::ompl::base::ProjectionEvaluator::computeCoordinates )
                , ( bp::arg("state"), bp::arg("coord") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::defaultCellSizes
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*defaultCellSizes_function_type)(  ) ;
            typedef void ( ProjectionEvaluator_wrapper::*default_defaultCellSizes_function_type)(  ) ;
            
            ProjectionEvaluator_exposer.def( 
                "defaultCellSizes"
                , defaultCellSizes_function_type(&::ompl::base::ProjectionEvaluator::defaultCellSizes)
                , default_defaultCellSizes_function_type(&ProjectionEvaluator_wrapper::default_defaultCellSizes) );
        
        }
        { //::ompl::base::ProjectionEvaluator::estimateBounds
        
            typedef void ( ProjectionEvaluator_wrapper::*estimateBounds_function_type)(  ) ;
            
            ProjectionEvaluator_exposer.def( 
                "estimateBounds"
                , estimateBounds_function_type( &ProjectionEvaluator_wrapper::estimateBounds ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::getBounds
        
            typedef ::ompl::base::RealVectorBounds const & ( ::ompl::base::ProjectionEvaluator::*getBounds_function_type)(  ) ;
            
            ProjectionEvaluator_exposer.def( 
                "getBounds"
                , getBounds_function_type( &::ompl::base::ProjectionEvaluator::getBounds )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ProjectionEvaluator::getCellSizes
        
            typedef ::std::vector< double > const & ( ::ompl::base::ProjectionEvaluator::*getCellSizes_function_type)(  ) const;
            
            ProjectionEvaluator_exposer.def( 
                "getCellSizes"
                , getCellSizes_function_type( &::ompl::base::ProjectionEvaluator::getCellSizes )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ProjectionEvaluator::getCellSizes
        
            typedef double ( ::ompl::base::ProjectionEvaluator::*getCellSizes_function_type)( unsigned int ) const;
            
            ProjectionEvaluator_exposer.def( 
                "getCellSizes"
                , getCellSizes_function_type( &::ompl::base::ProjectionEvaluator::getCellSizes )
                , ( bp::arg("dim") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::getDimension
        
            typedef unsigned int ( ::ompl::base::ProjectionEvaluator::*getDimension_function_type)(  ) const;
            
            ProjectionEvaluator_exposer.def( 
                "getDimension"
                , bp::pure_virtual( getDimension_function_type(&::ompl::base::ProjectionEvaluator::getDimension) ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::hasBounds
        
            typedef bool ( ::ompl::base::ProjectionEvaluator::*hasBounds_function_type)(  ) const;
            
            ProjectionEvaluator_exposer.def( 
                "hasBounds"
                , hasBounds_function_type( &::ompl::base::ProjectionEvaluator::hasBounds ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::inferBounds
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*inferBounds_function_type)(  ) ;
            
            ProjectionEvaluator_exposer.def( 
                "inferBounds"
                , inferBounds_function_type( &::ompl::base::ProjectionEvaluator::inferBounds ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::inferCellSizes
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*inferCellSizes_function_type)(  ) ;
            
            ProjectionEvaluator_exposer.def( 
                "inferCellSizes"
                , inferCellSizes_function_type( &::ompl::base::ProjectionEvaluator::inferCellSizes ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::mulCellSizes
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*mulCellSizes_function_type)( double ) ;
            
            ProjectionEvaluator_exposer.def( 
                "mulCellSizes"
                , mulCellSizes_function_type( &::ompl::base::ProjectionEvaluator::mulCellSizes )
                , ( bp::arg("factor") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::params
        
            typedef ::ompl::base::ParamSet & ( ::ompl::base::ProjectionEvaluator::*params_function_type)(  ) ;
            
            ProjectionEvaluator_exposer.def( 
                "params"
                , params_function_type( &::ompl::base::ProjectionEvaluator::params )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ProjectionEvaluator::params
        
            typedef ::ompl::base::ParamSet const & ( ::ompl::base::ProjectionEvaluator::*params_function_type)(  ) const;
            
            ProjectionEvaluator_exposer.def( 
                "params"
                , params_function_type( &::ompl::base::ProjectionEvaluator::params )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ProjectionEvaluator::project
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*project_function_type)( ::ompl::base::State const *,::ompl::base::EuclideanProjection & ) const;
            
            ProjectionEvaluator_exposer.def( 
                "project"
                , bp::pure_virtual( project_function_type(&::ompl::base::ProjectionEvaluator::project) )
                , ( bp::arg("state"), bp::arg("projection") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::setBounds
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*setBounds_function_type)( ::ompl::base::RealVectorBounds const & ) ;
            
            ProjectionEvaluator_exposer.def( 
                "setBounds"
                , setBounds_function_type( &::ompl::base::ProjectionEvaluator::setBounds )
                , ( bp::arg("bounds") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::setCellSizes
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*setCellSizes_function_type)( ::std::vector< double > const & ) ;
            typedef void ( ProjectionEvaluator_wrapper::*default_setCellSizes_function_type)( ::std::vector< double > const & ) ;
            
            ProjectionEvaluator_exposer.def( 
                "setCellSizes"
                , setCellSizes_function_type(&::ompl::base::ProjectionEvaluator::setCellSizes)
                , default_setCellSizes_function_type(&ProjectionEvaluator_wrapper::default_setCellSizes)
                , ( bp::arg("cellSizes") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::setCellSizes
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*setCellSizes_function_type)( unsigned int,double ) ;
            
            ProjectionEvaluator_exposer.def( 
                "setCellSizes"
                , setCellSizes_function_type( &::ompl::base::ProjectionEvaluator::setCellSizes )
                , ( bp::arg("dim"), bp::arg("cellSize") ) );
        
        }
        { //::ompl::base::ProjectionEvaluator::setup
        
            typedef void ( ::ompl::base::ProjectionEvaluator::*setup_function_type)(  ) ;
            typedef void ( ProjectionEvaluator_wrapper::*default_setup_function_type)(  ) ;
            
            ProjectionEvaluator_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::base::ProjectionEvaluator::setup)
                , default_setup_function_type(&ProjectionEvaluator_wrapper::default_setup) );
        
        }
        { //::ompl::base::ProjectionEvaluator::userConfigured
        
            typedef bool ( ::ompl::base::ProjectionEvaluator::*userConfigured_function_type)(  ) const;
            
            ProjectionEvaluator_exposer.def( 
                "userConfigured"
                , userConfigured_function_type( &::ompl::base::ProjectionEvaluator::userConfigured ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< ompl::base::ProjectionEvaluator > >();
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::RealVectorLinearProjectionEvaluator >, boost::shared_ptr< ompl::base::ProjectionEvaluator > >();
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::RealVectorRandomLinearProjectionEvaluator >, boost::shared_ptr< ompl::base::ProjectionEvaluator > >();
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::RealVectorOrthogonalProjectionEvaluator >, boost::shared_ptr< ompl::base::ProjectionEvaluator > >();
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::RealVectorIdentityProjectionEvaluator >, boost::shared_ptr< ompl::base::ProjectionEvaluator > >();
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::SubspaceProjectionEvaluator >, boost::shared_ptr< ompl::base::ProjectionEvaluator > >();
        ProjectionEvaluator_exposer.def("settings", &__printSettings);
        ProjectionEvaluator_exposer.def("projection", &__printProjection);
    }

}
