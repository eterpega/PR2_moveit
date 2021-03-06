// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "ProblemDefinition.pypp.hpp"

namespace bp = boost::python;

struct ProblemDefinition_wrapper : ompl::base::ProblemDefinition, bp::wrapper< ompl::base::ProblemDefinition > {

    ProblemDefinition_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::base::ProblemDefinition( si )
      , bp::wrapper< ompl::base::ProblemDefinition >(){
        // constructor
    
    }

    bool fixInvalidInputState( ::ompl::base::State * state, double dist, bool start, unsigned int attempts ){
        return ompl::base::ProblemDefinition::fixInvalidInputState( boost::python::ptr(state), dist, start, attempts );
    }

};

std::string __str__(::ompl::base::ProblemDefinition* obj)
{
    std::ostringstream s;
    obj->print(s);
    return s.str();
}

void register_ProblemDefinition_class(){

    { //::ompl::base::ProblemDefinition
        typedef bp::class_< ProblemDefinition_wrapper, boost::noncopyable > ProblemDefinition_exposer_t;
        ProblemDefinition_exposer_t ProblemDefinition_exposer = ProblemDefinition_exposer_t( "ProblemDefinition", bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope ProblemDefinition_scope( ProblemDefinition_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::base::ProblemDefinition >();
        { //::ompl::base::ProblemDefinition::addSolutionPath
        
            typedef void ( ::ompl::base::ProblemDefinition::*addSolutionPath_function_type)( ::ompl::base::PathPtr const &,bool,double,::std::string const & ) const;
            
            ProblemDefinition_exposer.def( 
                "addSolutionPath"
                , addSolutionPath_function_type( &::ompl::base::ProblemDefinition::addSolutionPath )
                , ( bp::arg("path"), bp::arg("approximate")=(bool)(false), bp::arg("difference")=-1.0e+0, bp::arg("plannerName")="Unknown" ) );
        
        }
        { //::ompl::base::ProblemDefinition::addSolutionPath
        
            typedef void ( ::ompl::base::ProblemDefinition::*addSolutionPath_function_type)( ::ompl::base::PlannerSolution const & ) const;
            
            ProblemDefinition_exposer.def( 
                "addSolutionPath"
                , addSolutionPath_function_type( &::ompl::base::ProblemDefinition::addSolutionPath )
                , ( bp::arg("sol") ) );
        
        }
        { //::ompl::base::ProblemDefinition::addStartState
        
            typedef void ( ::ompl::base::ProblemDefinition::*addStartState_function_type)( ::ompl::base::State const * ) ;
            
            ProblemDefinition_exposer.def( 
                "addStartState"
                , addStartState_function_type( &::ompl::base::ProblemDefinition::addStartState )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::ProblemDefinition::addStartState
        
            typedef void ( ::ompl::base::ProblemDefinition::*addStartState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const & ) ;
            
            ProblemDefinition_exposer.def( 
                "addStartState"
                , addStartState_function_type( &::ompl::base::ProblemDefinition::addStartState )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::ProblemDefinition::clearGoal
        
            typedef void ( ::ompl::base::ProblemDefinition::*clearGoal_function_type)(  ) ;
            
            ProblemDefinition_exposer.def( 
                "clearGoal"
                , clearGoal_function_type( &::ompl::base::ProblemDefinition::clearGoal ) );
        
        }
        { //::ompl::base::ProblemDefinition::clearSolutionNonExistenceProof
        
            typedef void ( ::ompl::base::ProblemDefinition::*clearSolutionNonExistenceProof_function_type)(  ) ;
            
            ProblemDefinition_exposer.def( 
                "clearSolutionNonExistenceProof"
                , clearSolutionNonExistenceProof_function_type( &::ompl::base::ProblemDefinition::clearSolutionNonExistenceProof ) );
        
        }
        { //::ompl::base::ProblemDefinition::clearSolutionPaths
        
            typedef void ( ::ompl::base::ProblemDefinition::*clearSolutionPaths_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "clearSolutionPaths"
                , clearSolutionPaths_function_type( &::ompl::base::ProblemDefinition::clearSolutionPaths ) );
        
        }
        { //::ompl::base::ProblemDefinition::clearStartStates
        
            typedef void ( ::ompl::base::ProblemDefinition::*clearStartStates_function_type)(  ) ;
            
            ProblemDefinition_exposer.def( 
                "clearStartStates"
                , clearStartStates_function_type( &::ompl::base::ProblemDefinition::clearStartStates ) );
        
        }
        { //::ompl::base::ProblemDefinition::fixInvalidInputState
        
            typedef bool ( ProblemDefinition_wrapper::*fixInvalidInputState_function_type)( ::ompl::base::State *,double,bool,unsigned int ) ;
            
            ProblemDefinition_exposer.def( 
                "fixInvalidInputState"
                , fixInvalidInputState_function_type( &ProblemDefinition_wrapper::fixInvalidInputState )
                , ( bp::arg("state"), bp::arg("dist"), bp::arg("start"), bp::arg("attempts") ) );
        
        }
        { //::ompl::base::ProblemDefinition::fixInvalidInputStates
        
            typedef bool ( ::ompl::base::ProblemDefinition::*fixInvalidInputStates_function_type)( double,double,unsigned int ) ;
            
            ProblemDefinition_exposer.def( 
                "fixInvalidInputStates"
                , fixInvalidInputStates_function_type( &::ompl::base::ProblemDefinition::fixInvalidInputStates )
                , ( bp::arg("distStart"), bp::arg("distGoal"), bp::arg("attempts") ) );
        
        }
        { //::ompl::base::ProblemDefinition::getGoal
        
            typedef ::ompl::base::GoalPtr const & ( ::ompl::base::ProblemDefinition::*getGoal_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "getGoal"
                , getGoal_function_type( &::ompl::base::ProblemDefinition::getGoal )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ProblemDefinition::getInputStates
        
            typedef void ( ::ompl::base::ProblemDefinition::*getInputStates_function_type)( ::std::vector< ompl::base::State const* > & ) const;
            
            ProblemDefinition_exposer.def( 
                "getInputStates"
                , getInputStates_function_type( &::ompl::base::ProblemDefinition::getInputStates )
                , ( bp::arg("states") ) );
        
        }
        { //::ompl::base::ProblemDefinition::getOptimizationObjective
        
            typedef ::ompl::base::OptimizationObjectivePtr const & ( ::ompl::base::ProblemDefinition::*getOptimizationObjective_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "getOptimizationObjective"
                , getOptimizationObjective_function_type( &::ompl::base::ProblemDefinition::getOptimizationObjective )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ProblemDefinition::getSolution
        
            typedef bool ( ::ompl::base::ProblemDefinition::*getSolution_function_type)( ::ompl::base::PlannerSolution & ) const;
            
            ProblemDefinition_exposer.def( 
                "getSolution"
                , getSolution_function_type( &::ompl::base::ProblemDefinition::getSolution )
                , ( bp::arg("solution") ) );
        
        }
        { //::ompl::base::ProblemDefinition::getSolutionCount
        
            typedef ::std::size_t ( ::ompl::base::ProblemDefinition::*getSolutionCount_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "getSolutionCount"
                , getSolutionCount_function_type( &::ompl::base::ProblemDefinition::getSolutionCount ) );
        
        }
        { //::ompl::base::ProblemDefinition::getSolutionDifference
        
            typedef double ( ::ompl::base::ProblemDefinition::*getSolutionDifference_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "getSolutionDifference"
                , getSolutionDifference_function_type( &::ompl::base::ProblemDefinition::getSolutionDifference ) );
        
        }
        { //::ompl::base::ProblemDefinition::getSolutionNonExistenceProof
        
            typedef ::ompl::base::SolutionNonExistenceProofPtr const & ( ::ompl::base::ProblemDefinition::*getSolutionNonExistenceProof_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "getSolutionNonExistenceProof"
                , getSolutionNonExistenceProof_function_type( &::ompl::base::ProblemDefinition::getSolutionNonExistenceProof )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ProblemDefinition::getSolutionPath
        
            typedef ::ompl::base::PathPtr ( ::ompl::base::ProblemDefinition::*getSolutionPath_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "getSolutionPath"
                , getSolutionPath_function_type( &::ompl::base::ProblemDefinition::getSolutionPath ) );
        
        }
        { //::ompl::base::ProblemDefinition::getSolutions
        
            typedef ::std::vector< ompl::base::PlannerSolution > ( ::ompl::base::ProblemDefinition::*getSolutions_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "getSolutions"
                , getSolutions_function_type( &::ompl::base::ProblemDefinition::getSolutions ) );
        
        }
        { //::ompl::base::ProblemDefinition::getSpaceInformation
        
            typedef ::ompl::base::SpaceInformationPtr const & ( ::ompl::base::ProblemDefinition::*getSpaceInformation_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "getSpaceInformation"
                , getSpaceInformation_function_type( &::ompl::base::ProblemDefinition::getSpaceInformation )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ProblemDefinition::getStartState
        
            typedef ::ompl::base::State const * ( ::ompl::base::ProblemDefinition::*getStartState_function_type)( unsigned int ) const;
            
            ProblemDefinition_exposer.def( 
                "getStartState"
                , getStartState_function_type( &::ompl::base::ProblemDefinition::getStartState )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ProblemDefinition::getStartState
        
            typedef ::ompl::base::State * ( ::ompl::base::ProblemDefinition::*getStartState_function_type)( unsigned int ) ;
            
            ProblemDefinition_exposer.def( 
                "getStartState"
                , getStartState_function_type( &::ompl::base::ProblemDefinition::getStartState )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ProblemDefinition::getStartStateCount
        
            typedef unsigned int ( ::ompl::base::ProblemDefinition::*getStartStateCount_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "getStartStateCount"
                , getStartStateCount_function_type( &::ompl::base::ProblemDefinition::getStartStateCount ) );
        
        }
        { //::ompl::base::ProblemDefinition::hasApproximateSolution
        
            typedef bool ( ::ompl::base::ProblemDefinition::*hasApproximateSolution_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "hasApproximateSolution"
                , hasApproximateSolution_function_type( &::ompl::base::ProblemDefinition::hasApproximateSolution ) );
        
        }
        { //::ompl::base::ProblemDefinition::hasOptimizationObjective
        
            typedef bool ( ::ompl::base::ProblemDefinition::*hasOptimizationObjective_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "hasOptimizationObjective"
                , hasOptimizationObjective_function_type( &::ompl::base::ProblemDefinition::hasOptimizationObjective ) );
        
        }
        { //::ompl::base::ProblemDefinition::hasOptimizedSolution
        
            typedef bool ( ::ompl::base::ProblemDefinition::*hasOptimizedSolution_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "hasOptimizedSolution"
                , hasOptimizedSolution_function_type( &::ompl::base::ProblemDefinition::hasOptimizedSolution ) );
        
        }
        { //::ompl::base::ProblemDefinition::hasSolution
        
            typedef bool ( ::ompl::base::ProblemDefinition::*hasSolution_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "hasSolution"
                , hasSolution_function_type( &::ompl::base::ProblemDefinition::hasSolution ) );
        
        }
        { //::ompl::base::ProblemDefinition::hasSolutionNonExistenceProof
        
            typedef bool ( ::ompl::base::ProblemDefinition::*hasSolutionNonExistenceProof_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "hasSolutionNonExistenceProof"
                , hasSolutionNonExistenceProof_function_type( &::ompl::base::ProblemDefinition::hasSolutionNonExistenceProof ) );
        
        }
        { //::ompl::base::ProblemDefinition::hasStartState
        
            typedef bool ( ::ompl::base::ProblemDefinition::*hasStartState_function_type)( ::ompl::base::State const *,unsigned int * ) ;
            
            ProblemDefinition_exposer.def( 
                "hasStartState"
                , hasStartState_function_type( &::ompl::base::ProblemDefinition::hasStartState )
                , ( bp::arg("state"), bp::arg("startIndex")=0l ) );
        
        }
        { //::ompl::base::ProblemDefinition::isStraightLinePathValid
        
            typedef ::ompl::base::PathPtr ( ::ompl::base::ProblemDefinition::*isStraightLinePathValid_function_type)(  ) const;
            
            ProblemDefinition_exposer.def( 
                "isStraightLinePathValid"
                , isStraightLinePathValid_function_type( &::ompl::base::ProblemDefinition::isStraightLinePathValid ) );
        
        }
        { //::ompl::base::ProblemDefinition::isTrivial
        
            typedef bool ( ::ompl::base::ProblemDefinition::*isTrivial_function_type)( unsigned int *,double * ) const;
            
            ProblemDefinition_exposer.def( 
                "isTrivial"
                , isTrivial_function_type( &::ompl::base::ProblemDefinition::isTrivial )
                , ( bp::arg("startIndex")=0l, bp::arg("distance")=0l ) );
        
        }
        { //::ompl::base::ProblemDefinition::setGoal
        
            typedef void ( ::ompl::base::ProblemDefinition::*setGoal_function_type)( ::ompl::base::GoalPtr const & ) ;
            
            ProblemDefinition_exposer.def( 
                "setGoal"
                , setGoal_function_type( &::ompl::base::ProblemDefinition::setGoal )
                , ( bp::arg("goal") ) );
        
        }
        { //::ompl::base::ProblemDefinition::setGoalState
        
            typedef void ( ::ompl::base::ProblemDefinition::*setGoalState_function_type)( ::ompl::base::State const *,double const ) ;
            
            ProblemDefinition_exposer.def( 
                "setGoalState"
                , setGoalState_function_type( &::ompl::base::ProblemDefinition::setGoalState )
                , ( bp::arg("goal"), bp::arg("threshold")=std::numeric_limits<double>::epsilon() ) );
        
        }
        { //::ompl::base::ProblemDefinition::setGoalState
        
            typedef void ( ::ompl::base::ProblemDefinition::*setGoalState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const &,double const ) ;
            
            ProblemDefinition_exposer.def( 
                "setGoalState"
                , setGoalState_function_type( &::ompl::base::ProblemDefinition::setGoalState )
                , ( bp::arg("goal"), bp::arg("threshold")=std::numeric_limits<double>::epsilon() ) );
        
        }
        { //::ompl::base::ProblemDefinition::setOptimizationObjective
        
            typedef void ( ::ompl::base::ProblemDefinition::*setOptimizationObjective_function_type)( ::ompl::base::OptimizationObjectivePtr const & ) ;
            
            ProblemDefinition_exposer.def( 
                "setOptimizationObjective"
                , setOptimizationObjective_function_type( &::ompl::base::ProblemDefinition::setOptimizationObjective )
                , ( bp::arg("optimizationObjective") ) );
        
        }
        { //::ompl::base::ProblemDefinition::setSolutionNonExistenceProof
        
            typedef void ( ::ompl::base::ProblemDefinition::*setSolutionNonExistenceProof_function_type)( ::ompl::base::SolutionNonExistenceProofPtr const & ) ;
            
            ProblemDefinition_exposer.def( 
                "setSolutionNonExistenceProof"
                , setSolutionNonExistenceProof_function_type( &::ompl::base::ProblemDefinition::setSolutionNonExistenceProof )
                , ( bp::arg("nonExistenceProof") ) );
        
        }
        { //::ompl::base::ProblemDefinition::setStartAndGoalStates
        
            typedef void ( ::ompl::base::ProblemDefinition::*setStartAndGoalStates_function_type)( ::ompl::base::State const *,::ompl::base::State const *,double const ) ;
            
            ProblemDefinition_exposer.def( 
                "setStartAndGoalStates"
                , setStartAndGoalStates_function_type( &::ompl::base::ProblemDefinition::setStartAndGoalStates )
                , ( bp::arg("start"), bp::arg("goal"), bp::arg("threshold")=std::numeric_limits<double>::epsilon() ) );
        
        }
        { //::ompl::base::ProblemDefinition::setStartAndGoalStates
        
            typedef void ( ::ompl::base::ProblemDefinition::*setStartAndGoalStates_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const &,::ompl::base::ScopedState< ompl::base::StateSpace > const &,double const ) ;
            
            ProblemDefinition_exposer.def( 
                "setStartAndGoalStates"
                , setStartAndGoalStates_function_type( &::ompl::base::ProblemDefinition::setStartAndGoalStates )
                , ( bp::arg("start"), bp::arg("goal"), bp::arg("threshold")=std::numeric_limits<double>::epsilon() ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< ompl::base::ProblemDefinition > >();
        ProblemDefinition_exposer.def("__str__", &__str__);
    }

}
