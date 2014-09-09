// This file has been generated by Py++.

#include "boost/python.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "bindings/control.h"

#include "bindings/control/CompoundControl.pypp.hpp"

#include "bindings/control/CompoundControlSampler.pypp.hpp"

#include "bindings/control/CompoundControlSpace.pypp.hpp"

#include "bindings/control/Control.pypp.hpp"

#include "bindings/control/ControlSampler.pypp.hpp"

#include "bindings/control/ControlSpace.pypp.hpp"

#include "bindings/control/Decomposition.pypp.hpp"

#include "bindings/control/DirectedControlSampler.pypp.hpp"

#include "bindings/control/DiscreteControlSampler.pypp.hpp"

#include "bindings/control/DiscreteControlSpace.pypp.hpp"

#include "bindings/control/EST.pypp.hpp"

#include "bindings/control/GridDecomposition.pypp.hpp"

#include "bindings/control/KPIECE1.pypp.hpp"

#include "bindings/control/ODEAdaptiveSolver.pypp.hpp"

#include "bindings/control/ODEBasicSolver.pypp.hpp"

#include "bindings/control/ODEErrorSolver.pypp.hpp"

#include "bindings/control/ODESolver.pypp.hpp"

#include "bindings/control/PDST.pypp.hpp"

#include "bindings/control/PathControl.pypp.hpp"

#include "bindings/control/PlannerDataStorage.pypp.hpp"

#include "bindings/control/RRT.pypp.hpp"

#include "bindings/control/RealVectorControlSpace.pypp.hpp"

#include "bindings/control/RealVectorControlUniformSampler.pypp.hpp"

#include "bindings/control/SimpleDirectedControlSampler.pypp.hpp"

#include "bindings/control/SimpleSetup.pypp.hpp"

#include "bindings/control/SpaceInformation.pypp.hpp"

#include "bindings/control/StatePropagator.pypp.hpp"

#include "bindings/control/Syclop.pypp.hpp"

#include "bindings/control/SyclopEST.pypp.hpp"

#include "bindings/control/SyclopRRT.pypp.hpp"

#include "bindings/control/_control_enumerations.pypp.hpp"

#include "bindings/control/_control_free_functions.pypp.hpp"

#include "bindings/control/vectorControlPtr.pypp.hpp"

namespace bp = boost::python;

PYDECLARE_FUNCTION(void(ompl::control::ODESolver::StateType, const ompl::control::Control*, ompl::control::ODESolver::StateType &),ODE)

PYDECLARE_FUNCTION(ompl::control::ControlSamplerPtr(const ompl::control::ControlSpace*),ControlSamplerAllocator)

PYDECLARE_FUNCTION(ompl::control::DirectedControlSamplerPtr(const ompl::control::SpaceInformation*),DirectedControlSamplerAllocator)

PYDECLARE_FUNCTION(void(const ompl::base::State*, const ompl::control::Control*, const double, ompl::base::State*),StatePropagatorFn)

PYDECLARE_FUNCTION(double(int, int),EdgeCostFactorFn)

PYDECLARE_FUNCTION(void(int, int, std::vector<int>&),LeadComputeFn)

BOOST_PYTHON_MODULE(_control){
    register_enumerations();

    PyEval_InitThreads();

    register_vectorControlPtr_class();

    register_Control_class();

    register_CompoundControl_class();

    register_ControlSampler_class();

    register_CompoundControlSampler_class();

    register_ControlSpace_class();

    register_CompoundControlSpace_class();

    register_Decomposition_class();

    register_DirectedControlSampler_class();

    register_DiscreteControlSampler_class();

    register_DiscreteControlSpace_class();

    register_EST_class();

    register_GridDecomposition_class();

    register_KPIECE1_class();

    register_ODESolver_class();

    register_ODEAdaptiveSolver_class();

    register_ODEBasicSolver_class();

    register_ODEErrorSolver_class();

    register_PDST_class();

    register_PathControl_class();

    register_PlannerDataStorage_class();

    register_RRT_class();

    register_RealVectorControlSpace_class();

    register_RealVectorControlUniformSampler_class();

    register_SimpleDirectedControlSampler_class();

    register_SimpleSetup_class();

    register_SpaceInformation_class();

    register_StatePropagator_class();

    register_Syclop_class();

    register_SyclopEST_class();

    register_SyclopRRT_class();

    PYREGISTER_FUNCTION(void(ompl::control::ODESolver::StateType, const ompl::control::Control*, ompl::control::ODESolver::StateType &),ODE,"Ordinary differential equation")

    PYREGISTER_FUNCTION(ompl::control::ControlSamplerPtr(const ompl::control::ControlSpace*),ControlSamplerAllocator,"Control sampler allocator")

    PYREGISTER_FUNCTION(ompl::control::DirectedControlSamplerPtr(const ompl::control::SpaceInformation*),DirectedControlSamplerAllocator,"Directed control sampler allocator")

    PYREGISTER_FUNCTION(void(const ompl::base::State*, const ompl::control::Control*, const double, ompl::base::State*),StatePropagatorFn,"State propagator function")

    PYREGISTER_FUNCTION(double(int, int),EdgeCostFactorFn,"Syclop edge cost factor function")

    PYREGISTER_FUNCTION(void(int, int, std::vector<int>&),LeadComputeFn,"Syclop lead compute function")

    register_free_functions();
}

