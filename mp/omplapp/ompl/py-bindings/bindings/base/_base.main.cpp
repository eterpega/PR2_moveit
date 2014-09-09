// This file has been generated by Py++.

#include "boost/python.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/map.hpp"

#include "bindings/base.h"

#include "bindings/base/AbstractState.pypp.hpp"

#include "bindings/base/AllValidStateValidityChecker.pypp.hpp"

#include "bindings/base/CompoundState.pypp.hpp"

#include "bindings/base/CompoundStateInternal.pypp.hpp"

#include "bindings/base/CompoundStateSampler.pypp.hpp"

#include "bindings/base/CompoundStateSpace.pypp.hpp"

#include "bindings/base/Cost.pypp.hpp"

#include "bindings/base/DiscreteMotionValidator.pypp.hpp"

#include "bindings/base/DiscreteState.pypp.hpp"

#include "bindings/base/DiscreteStateSampler.pypp.hpp"

#include "bindings/base/DiscreteStateSpace.pypp.hpp"

#include "bindings/base/DubinsMotionValidator.pypp.hpp"

#include "bindings/base/DubinsState.pypp.hpp"

#include "bindings/base/DubinsStateSpace.pypp.hpp"

#include "bindings/base/EuclideanProjection.pypp.hpp"

#include "bindings/base/GaussianValidStateSampler.pypp.hpp"

#include "bindings/base/GenericParam.pypp.hpp"

#include "bindings/base/Goal.pypp.hpp"

#include "bindings/base/GoalLazySamples.pypp.hpp"

#include "bindings/base/GoalRegion.pypp.hpp"

#include "bindings/base/GoalSampleableRegion.pypp.hpp"

#include "bindings/base/GoalState.pypp.hpp"

#include "bindings/base/GoalStates.pypp.hpp"

#include "bindings/base/MaximizeClearanceValidStateSampler.pypp.hpp"

#include "bindings/base/MaximizeMinClearanceObjective.pypp.hpp"

#include "bindings/base/MechanicalWorkOptimizationObjective.pypp.hpp"

#include "bindings/base/MinimaxObjective.pypp.hpp"

#include "bindings/base/MotionValidator.pypp.hpp"

#include "bindings/base/MultiOptimizationObjective.pypp.hpp"

#include "bindings/base/ObstacleBasedValidStateSampler.pypp.hpp"

#include "bindings/base/OptimizationObjective.pypp.hpp"

#include "bindings/base/ParamSet.pypp.hpp"

#include "bindings/base/Path.pypp.hpp"

#include "bindings/base/PathLengthOptimizationObjective.pypp.hpp"

#include "bindings/base/Planner.pypp.hpp"

#include "bindings/base/PlannerData.pypp.hpp"

#include "bindings/base/PlannerDataEdge.pypp.hpp"

#include "bindings/base/PlannerDataStorage.pypp.hpp"

#include "bindings/base/PlannerDataVertex.pypp.hpp"

#include "bindings/base/PlannerInputStates.pypp.hpp"

#include "bindings/base/PlannerProgressProperties.pypp.hpp"

#include "bindings/base/PlannerSolution.pypp.hpp"

#include "bindings/base/PlannerSpecs.pypp.hpp"

#include "bindings/base/PlannerStatus.pypp.hpp"

#include "bindings/base/PlannerTerminationCondition.pypp.hpp"

#include "bindings/base/PrecomputedStateSampler.pypp.hpp"

#include "bindings/base/ProblemDefinition.pypp.hpp"

#include "bindings/base/ProjectionEvaluator.pypp.hpp"

#include "bindings/base/ProjectionMatrix.pypp.hpp"

#include "bindings/base/RealVectorBounds.pypp.hpp"

#include "bindings/base/RealVectorIdentityProjectionEvaluator.pypp.hpp"

#include "bindings/base/RealVectorLinearProjectionEvaluator.pypp.hpp"

#include "bindings/base/RealVectorOrthogonalProjectionEvaluator.pypp.hpp"

#include "bindings/base/RealVectorRandomLinearProjectionEvaluator.pypp.hpp"

#include "bindings/base/RealVectorState.pypp.hpp"

#include "bindings/base/RealVectorStateSampler.pypp.hpp"

#include "bindings/base/RealVectorStateSpace.pypp.hpp"

#include "bindings/base/ReedsSheppMotionValidator.pypp.hpp"

#include "bindings/base/ReedsSheppState.pypp.hpp"

#include "bindings/base/ReedsSheppStateSpace.pypp.hpp"

#include "bindings/base/SE2State.pypp.hpp"

#include "bindings/base/SE2StateSpace.pypp.hpp"

#include "bindings/base/SE3State.pypp.hpp"

#include "bindings/base/SE3StateSpace.pypp.hpp"

#include "bindings/base/SO2State.pypp.hpp"

#include "bindings/base/SO2StateSampler.pypp.hpp"

#include "bindings/base/SO2StateSpace.pypp.hpp"

#include "bindings/base/SO3State.pypp.hpp"

#include "bindings/base/SO3StateSampler.pypp.hpp"

#include "bindings/base/SO3StateSpace.pypp.hpp"

#include "bindings/base/SpaceInformation.pypp.hpp"

#include "bindings/base/SpecificParamBool.pypp.hpp"

#include "bindings/base/SpecificParamChar.pypp.hpp"

#include "bindings/base/SpecificParamDouble.pypp.hpp"

#include "bindings/base/SpecificParamFloat.pypp.hpp"

#include "bindings/base/SpecificParamInt.pypp.hpp"

#include "bindings/base/SpecificParamString.pypp.hpp"

#include "bindings/base/SpecificParamUint.pypp.hpp"

#include "bindings/base/State.pypp.hpp"

#include "bindings/base/StateCostIntegralObjective.pypp.hpp"

#include "bindings/base/StateSampler.pypp.hpp"

#include "bindings/base/StateSamplerSelector.pypp.hpp"

#include "bindings/base/StateSpace.pypp.hpp"

#include "bindings/base/StateStorage.pypp.hpp"

#include "bindings/base/StateValidityChecker.pypp.hpp"

#include "bindings/base/StateValidityCheckerSpecs.pypp.hpp"

#include "bindings/base/SubspaceProjectionEvaluator.pypp.hpp"

#include "bindings/base/SubspaceStateSampler.pypp.hpp"

#include "bindings/base/TimeState.pypp.hpp"

#include "bindings/base/TimeStateSampler.pypp.hpp"

#include "bindings/base/TimeStateSpace.pypp.hpp"

#include "bindings/base/UniformValidStateSampler.pypp.hpp"

#include "bindings/base/ValidStateSampler.pypp.hpp"

#include "bindings/base/ValidStateSamplerSelector.pypp.hpp"

#include "bindings/base/_base_enumerations.pypp.hpp"

#include "bindings/base/_base_free_functions.pypp.hpp"

#include "bindings/base/mapStringToGenericParam.pypp.hpp"

#include "bindings/base/mapStringToProjectionEvaluator.pypp.hpp"

#include "bindings/base/mapStringToSubstateLocation.pypp.hpp"

#include "bindings/base/mapUintToPlannerDataEdge.pypp.hpp"

#include "bindings/base/vectorConstState.pypp.hpp"

#include "bindings/base/vectorPlannerSolution.pypp.hpp"

#include "bindings/base/vectorState.pypp.hpp"

#include "bindings/base/vectorStateSpacePtr.pypp.hpp"

namespace bp = boost::python;

PYDECLARE_FUNCTION(bool(const ompl::base::GoalLazySamples*, ompl::base::State*),GoalSamplingFn)

PYDECLARE_FUNCTION(void(const ompl::base::State*),NewStateCallbackFn)

PYDECLARE_FUNCTION(ompl::base::PlannerPtr(const ompl::base::SpaceInformationPtr&),PlannerAllocator)

PYDECLARE_FUNCTION(bool(),PlannerTerminationConditionFn)

PYDECLARE_FUNCTION(bool(const ompl::base::State*),StateValidityCheckerFn)

PYDECLARE_FUNCTION(ompl::base::StateSamplerPtr(const ompl::base::StateSpace*),StateSamplerAllocator)

PYDECLARE_FUNCTION(ompl::base::ValidStateSamplerPtr(ompl::base::SpaceInformation const*),ValidStateSamplerAllocator)

PYDECLARE_FUNCTION(double(const ompl::base::PlannerDataVertex&, const ompl::base::PlannerDataVertex&, const ompl::base::PlannerDataEdge&),EdgeWeightFn)

PYDECLARE_FUNCTION(ompl::base::Cost(const ompl::base::State*, const ompl::base::Goal*),CostToGoHeuristic)

PYDECLARE_FUNCTION(std::string(),PlannerProgressProperty)

BOOST_PYTHON_MODULE(_base){
    register_enumerations();

    PyEval_InitThreads();

    register_vectorState_class();

    register_vectorConstState_class();

    register_vectorPlannerSolution_class();

    register_vectorStateSpacePtr_class();

    register_mapUintToPlannerDataEdge_class();

    register_mapStringToSubstateLocation_class();

    register_mapStringToProjectionEvaluator_class();

    register_mapStringToGenericParam_class();

    register_PlannerProgressProperties_class();

    register_EuclideanProjection_class();

    register_StateValidityChecker_class();

    register_AllValidStateValidityChecker_class();

    register_AbstractState_class();

    register_CompoundStateInternal_class();

    register_StateSampler_class();

    register_CompoundStateSampler_class();

    register_StateSpace_class();

    register_CompoundStateSpace_class();

    register_Cost_class();

    register_MotionValidator_class();

    register_DiscreteMotionValidator_class();

    register_DiscreteStateSampler_class();

    register_DiscreteStateSpace_class();

    register_DubinsMotionValidator_class();

    register_SE2StateSpace_class();

    register_DubinsStateSpace_class();

    register_ValidStateSampler_class();

    register_GaussianValidStateSampler_class();

    register_GenericParam_class();

    register_Goal_class();

    register_GoalRegion_class();

    register_GoalSampleableRegion_class();

    register_GoalStates_class();

    register_GoalLazySamples_class();

    register_GoalState_class();

    register_MaximizeClearanceValidStateSampler_class();

    register_OptimizationObjective_class();

    register_MinimaxObjective_class();

    register_MaximizeMinClearanceObjective_class();

    register_MechanicalWorkOptimizationObjective_class();

    register_MultiOptimizationObjective_class();

    register_ObstacleBasedValidStateSampler_class();

    register_ParamSet_class();

    register_Path_class();

    register_PathLengthOptimizationObjective_class();

    register_Planner_class();

    register_PlannerDataEdge_class();

    register_PlannerData_class();

    register_PlannerDataStorage_class();

    register_PlannerDataVertex_class();

    register_PlannerInputStates_class();

    register_PlannerSolution_class();

    register_PlannerSpecs_class();

    register_PlannerStatus_class();

    bp::implicitly_convertible< ompl::base::PlannerStatus, ompl::base::PlannerStatus::StatusType >();

    bp::implicitly_convertible< ompl::base::PlannerStatus, bool >();

    register_PlannerTerminationCondition_class();

    bp::implicitly_convertible< ompl::base::PlannerTerminationCondition, bool >();

    register_PrecomputedStateSampler_class();

    register_ProblemDefinition_class();

    register_ProjectionEvaluator_class();

    register_ProjectionMatrix_class();

    register_RealVectorBounds_class();

    register_RealVectorIdentityProjectionEvaluator_class();

    register_RealVectorLinearProjectionEvaluator_class();

    register_RealVectorOrthogonalProjectionEvaluator_class();

    register_RealVectorRandomLinearProjectionEvaluator_class();

    register_RealVectorStateSampler_class();

    register_RealVectorStateSpace_class();

    register_ReedsSheppMotionValidator_class();

    register_ReedsSheppStateSpace_class();

    register_SE3StateSpace_class();

    register_SO2StateSampler_class();

    register_SO2StateSpace_class();

    register_SO3StateSampler_class();

    register_SO3StateSpace_class();

    register_StateSamplerSelector_class();

    register_ValidStateSamplerSelector_class();

    register_CompoundState_class();

    register_DiscreteState_class();

    register_DubinsState_class();

    register_RealVectorState_class();

    register_ReedsSheppState_class();

    register_SE2State_class();

    register_SE3State_class();

    register_SO2State_class();

    register_SO3State_class();

    register_State_class();

    register_TimeState_class();

    register_SpaceInformation_class();

    register_SpecificParamBool_class();

    register_SpecificParamChar_class();

    register_SpecificParamDouble_class();

    register_SpecificParamFloat_class();

    register_SpecificParamInt_class();

    register_SpecificParamString_class();

    register_SpecificParamUint_class();

    register_StateCostIntegralObjective_class();

    register_StateStorage_class();

    register_StateValidityCheckerSpecs_class();

    register_SubspaceProjectionEvaluator_class();

    register_SubspaceStateSampler_class();

    register_TimeStateSampler_class();

    register_TimeStateSpace_class();

    register_UniformValidStateSampler_class();

    PYREGISTER_FUNCTION(bool(const ompl::base::GoalLazySamples*, ompl::base::State*),GoalSamplingFn,"Goal sampling function")

    PYREGISTER_FUNCTION(void(const ompl::base::State*),NewStateCallbackFn,"New state callback function")

    PYREGISTER_FUNCTION(ompl::base::PlannerPtr(const ompl::base::SpaceInformationPtr&),PlannerAllocator,"Planner allocator")

    PYREGISTER_FUNCTION(bool(),PlannerTerminationConditionFn,"Planner termination condition function")

    PYREGISTER_FUNCTION(bool(const ompl::base::State*),StateValidityCheckerFn,"State validity checker function")

    PYREGISTER_FUNCTION(ompl::base::StateSamplerPtr(const ompl::base::StateSpace*),StateSamplerAllocator,"State sampler allocator")

    PYREGISTER_FUNCTION(ompl::base::ValidStateSamplerPtr(ompl::base::SpaceInformation const*),ValidStateSamplerAllocator,"Valid state allocator function")

    PYREGISTER_FUNCTION(double(const ompl::base::PlannerDataVertex&, const ompl::base::PlannerDataVertex&, const ompl::base::PlannerDataEdge&),EdgeWeightFn,"Edge weight function")

    PYREGISTER_FUNCTION(ompl::base::Cost(const ompl::base::State*, const ompl::base::Goal*),CostToGoHeuristic,"Cost-to-go heuristic for optimizing planners")

    PYREGISTER_FUNCTION(std::string(),PlannerProgressProperty,"Function that returns stringified value of a property while a planner is running")

    register_free_functions();
}

