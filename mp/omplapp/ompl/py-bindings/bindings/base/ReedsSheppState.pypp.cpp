// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "ReedsSheppState.pypp.hpp"

namespace bp = boost::python;

double __getitem(::ompl::base::ScopedState<ompl::base::ReedsSheppStateSpace>* obj, unsigned int i)
{
    return (*obj)[i];
}

void __setitem(::ompl::base::ScopedState<ompl::base::ReedsSheppStateSpace>* obj, unsigned int i, double val)
{
    (*obj)[i] = val;
}

std::string __str__(::ompl::base::ScopedState<ompl::base::ReedsSheppStateSpace>* obj)
{
    std::ostringstream s;
    obj->print(s);
    return s.str();
}

void register_ReedsSheppState_class(){

    { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >
        typedef bp::class_< ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > > ReedsSheppState_exposer_t;
        ReedsSheppState_exposer_t ReedsSheppState_exposer = ReedsSheppState_exposer_t( "ReedsSheppState", bp::init< boost::shared_ptr< ompl::base::SpaceInformation > const & >(( bp::arg("si") )) );
        bp::scope ReedsSheppState_scope( ReedsSheppState_exposer );
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::SpaceInformation > const &, ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > >();
        ReedsSheppState_exposer.def( bp::init< boost::shared_ptr< ompl::base::StateSpace > const & >(( bp::arg("space") )) );
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::StateSpace > const &, ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > >();
        ReedsSheppState_exposer.def( bp::init< ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > const & >(( bp::arg("other") )) );
        ReedsSheppState_exposer.def( bp::init< boost::shared_ptr< ompl::base::StateSpace > const &, ompl::base::State const * >(( bp::arg("space"), bp::arg("state") )) );
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::distance
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef double ( exported_class_t::*distance_function_type)( ::ompl::base::State const * ) const;
            
            ReedsSheppState_exposer.def( 
                "distance"
                , distance_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::distance )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::enforceBounds
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef void ( exported_class_t::*enforceBounds_function_type)(  ) ;
            
            ReedsSheppState_exposer.def( 
                "enforceBounds"
                , enforceBounds_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::enforceBounds ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::get
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef ::ompl::base::SE2StateSpace::StateType * ( exported_class_t::*get_function_type)(  ) ;
            
            ReedsSheppState_exposer.def( 
                "get"
                , get_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::get )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::get
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef ::ompl::base::SE2StateSpace::StateType const * ( exported_class_t::*get_function_type)(  ) const;
            
            ReedsSheppState_exposer.def( 
                "get"
                , get_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::get )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::getSpace
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef ::boost::shared_ptr< ompl::base::StateSpace > const & ( exported_class_t::*getSpace_function_type)(  ) const;
            
            ReedsSheppState_exposer.def( 
                "getSpace"
                , getSpace_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::getSpace )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator()
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef ::ompl::base::SE2StateSpace::StateType * ( exported_class_t::*__call___function_type)(  ) const;
            
            ReedsSheppState_exposer.def( 
                "__call__"
                , __call___function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator() )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > & ( exported_class_t::*assign_function_type)( ::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > const & ) ;
            
            ReedsSheppState_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator= )
                , ( bp::arg("other") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > & ( exported_class_t::*assign_function_type)( ::ompl::base::State const * ) ;
            
            ReedsSheppState_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator= )
                , ( bp::arg("other") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > & ( exported_class_t::*assign_function_type)( ::std::vector< double > const & ) ;
            
            ReedsSheppState_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator= )
                , ( bp::arg("reals") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > & ( exported_class_t::*assign_function_type)( double const ) ;
            
            ReedsSheppState_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::operator= )
                , ( bp::arg("value") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::random
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef void ( exported_class_t::*random_function_type)(  ) ;
            
            ReedsSheppState_exposer.def( 
                "random"
                , random_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::random ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::reals
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef ::std::vector< double > ( exported_class_t::*reals_function_type)(  ) const;
            
            ReedsSheppState_exposer.def( 
                "reals"
                , reals_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::reals ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::satisfiesBounds
        
            typedef ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace > exported_class_t;
            typedef bool ( exported_class_t::*satisfiesBounds_function_type)(  ) const;
            
            ReedsSheppState_exposer.def( 
                "satisfiesBounds"
                , satisfiesBounds_function_type( &::ompl::base::ScopedState< ompl::base::ReedsSheppStateSpace >::satisfiesBounds ) );
        
        }
        ReedsSheppState_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::StateSpace> const &>(( bp::arg("other") )));
        ReedsSheppState_exposer.def("__getitem__", &__getitem);
        ReedsSheppState_exposer.def("__setitem__", &__setitem);
        ReedsSheppState_exposer.def("__str__", &__str__);
    }

}
