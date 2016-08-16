/*~--------------------------------------------------------------------------~*
 * Copyright (c) 2015 Los Alamos National Security, LLC
 * All rights reserved.
 *~--------------------------------------------------------------------------~*/

#ifndef flecsi_runtime_data_policy_h
#define flecsi_runtime_data_policy_h

/*!
 * \file flecsi_runtime_policy.h
 * \authors bergen
 * \date Initial file creation: Aug 01, 2016
 */

/*
  This section works with the build system to select the correct runtime
  implemenation for the task model. If you add to the possible runtimes,
  remember to edit config/packages.cmake to include a definition using
  the same convention, e.g., -DFLECSI_RUNTIME_MODEL_new_runtime.
  
 */

/* Serial Policy */
//#if FLECSI_RUNTIME_MODEL_serial

  #include "flecsi/data/default_user_meta_data.h"
  #include "flecsi/data/serial/storage_policy.h"
  #define flecsi_user_meta_data_policy_t default_user_meta_data_t
  #define flecsi_storage_policy_t serial_storage_policy_t

/* Legion Policy */
//#elif FLECSI_RUNTIME_MODEL_legion

/* MPI+Legion Policy */
//#elif FLECSI_RUNTIME_MODEL_mpilegion

/* MPI+Legion Policy */
//#elif FLECSI_RUNTIME_MODEL_mpi

//#endif

#endif // flecsi_runtime_data_policy_h

/*~-------------------------------------------------------------------------~-*
 * Formatting options for vim.
 * vim: set tabstop=2 shiftwidth=2 expandtab :
 *~-------------------------------------------------------------------------~-*/