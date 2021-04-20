// -----------------------------------------------------------------------------
//
// (C) 2021 TAS-I
//
// -----------------------------------------------------------------------------
//
// Sub-System    : tasi_sve_dss
//
// File Name     : DssRootSmp.cpp
//
// Author        : UMF
//
// Last Modified : 
//
// Revision      : $Revision$
//
// Generated from: UMF Code Generator
//                 Catalogue: tasi.sve.dss.cat - V1.0.0
//
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------

/// @file /tasi/sve/dss/DssRootSmp.cpp

// -----------------------------------------------------------------------------
// --------------------------------- Includes ----------------------------------
// -----------------------------------------------------------------------------

#include "DssRoot.h"
#include "Mdk/Composite.h"
#include "Mdk/Management/ManagedContainer.h"
#include "Mdk/EntryPoint.h"
#include "Mdk/Management/EntryPointPublisher.h"
#include "tasi/sve/common/IPulseReceiver.h"
#include "Smp/IModel.h"
#include "Smp/SimpleTypes.h"
#include "Smp/Publication/IType.h"
#include "Smp/Publication/IEnumerationType.h"
#include "Smp/Publication/IStructureType.h"
#include "Smp/Publication/IClassType.h"
#include "Smp/Publication/IPublishOperation.h"
#include "Mdk/SimpleTypes.h"

// --OPENING ELEMENT--::tasi::sve::dss::DssRoot/DssRoot::Extra_Includes--
// MARKER: FILE INCLUSION: START
// INSERT HERE #INCLUDE PREPROCESSOR DIRECTIVES
// MARKER: FILE INCLUSION: END

// MARKER: FORWARD DECLARATIONS: START
// INSERT HERE FORWARD DECLARATIONS
// MARKER: FORWARD DECLARATIONS: END
// --CLOSING ELEMENT--::tasi::sve::dss::DssRoot/DssRoot::Extra_Includes--

using namespace ::Smp;
using namespace ::Smp::Publication;


namespace tasi
{
    namespace sve
    {
        namespace dss
        {


            // -----------------------------------------------------------------------------
            // ------------------------------- Static fields -------------------------------
            // -----------------------------------------------------------------------------

            ::Smp::Mdk::Management::RequestContainer<DssRoot>::Map DssRoot::requestHandlers;


            // -----------------------------------------------------------------------------
            // -------------------------- Constructors/Destructor --------------------------
            // -----------------------------------------------------------------------------

// --OPENING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Default_Constructor--
            /// Default constructor.
            DssRoot::DssRoot(void)
            // MARKER: CONSTRUCTOR PRE BODY: START
            // INSERT HERE INITIALISATION LIST
            // MARKER: CONSTRUCTOR PRE BODY: END
            {
                // MARKER: OPERATION BODY: START
                // INSERT HERE OPERATION BODY
                // Initialise private fields
                ::tasi::sve::dss::DssRoot::_Initialise();
                // MARKER: OPERATION BODY: END
            }
// --CLOSING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Default_Constructor--

// --OPENING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Constructor--
            /// Constructor setting name, description and parent.
                DssRoot::DssRoot(
                    ::Smp::String8 name,
                    ::Smp::String8 description,
                    ::Smp::IComposite* parent)
                throw (::Smp::InvalidObjectName)
                : ::Smp::Mdk::Management::ManagedModel(name, description, parent)
            // MARKER: CONSTRUCTOR PRE BODY: START
            // INSERT HERE INITIALISATION LIST
            // MARKER: CONSTRUCTOR PRE BODY: END
            {
                // MARKER: OPERATION BODY: START
                // INSERT HERE OPERATION BODY
                // Initialise private fields
                ::tasi::sve::dss::DssRoot::_Initialise();
                // MARKER: OPERATION BODY: END
            }
// --CLOSING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Constructor--

// --OPENING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Destructor--
            /// Virtual destructor that is called by inherited classes as well.
            DssRoot::~DssRoot(void)
            {
                // MARKER: OPERATION BODY: START
                // INSERT HERE OPERATION BODY
                try
                {
                    // Cleanup private fields
                    ::tasi::sve::dss::DssRoot::_Cleanup();
                }
                catch (...)
                {
                    // Catch all exceptions in destructors.
                }    

                // MARKER: OPERATION BODY: END
            }
// --CLOSING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Destructor--


            // -----------------------------------------------------------------------------
            // ------------------- Implementation of IModel interface ----------------------
            // -----------------------------------------------------------------------------

// --OPENING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Publish--
            /// Publish fields, operations and properties of the model.
            /// @param receiver Publication receiver.
            void DssRoot::Publish(
                ::Smp::IPublication* receiver)
                throw (::Smp::IModel::InvalidModelState)
            {
                // Call base class implementation first
                ::Smp::Mdk::Management::ManagedModel::Publish(receiver);

                // Publish custom fields
                // MARKER: PUBLISH BODY: START
                // INSERT HERE CUSTOMISED PUBLISH SECTION
                // MARKER: PUBLISH BODY: END

                // Populate the request handlers (only once)
                if (requestHandlers.empty())
                {
                    PopulateRequestHandlers<DssRoot>(this, requestHandlers);
                }
                
                //------------------------- Publish Operations -----------------------
                // Declare a publication receiver for an operation.
                {
                    IPublishOperation* operation = NULL;
                    (void)operation; // No-op to avoid warnings in case there are no publishable operations

                    // Operation ReceivePulse is not marked for View
                }
                
                //------------------------ Publish Entry Points --------------------

                // Publish entry point UpdateAllModels
                receiver->PublishOperation("UpdateAllModels", "", ::Smp::Publication::Uuid_Void);
                
                //------------------------ Publish Properties ----------------------

                // Publish property ReceiverId
                receiver->PublishProperty(
                    "ReceiverId",
                    "",
                    ::Smp::Publication::Uuid_String8,
                    ::Smp::AK_ReadOnly );
                
            }
// --CLOSING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Publish--

            // The Configure and Connect methods are defined in the DssRoot.cpp file.

            // -----------------------------------------------------------------------------
            // ---------------- Universally Unique Identifier of Model ---------------------
            // -----------------------------------------------------------------------------

                /// Return the Universally Unique Identifier of the Model.
                /// This is defined on type level, not on instance level.
                /// The purpose of this operation is to allow navigating back from
                /// a Model Instance (at run-time) to Metadata in a Catalogue.
                /// @remarks This method has to be overridden for each Model defined
                ///          in a Catalogue. The default implementation returns an
                ///          empty Uuid.
                /// @return  Universally Unique Identifier of the Model.
                const Smp::Uuid& DssRoot::GetUuid(void) const
                {
                    return Uuid_DssRoot;
                }


            // -----------------------------------------------------------------------------
            // ------------- Implementation of IDynamicInvocation interface ----------------
            // -----------------------------------------------------------------------------

            // ---------------------------------- Invoke -----------------------------------

// --OPENING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Invoke--
            /// Invoke the operation for the given request
            /// @param request Request object to invoke.
            void DssRoot::Invoke(
                ::Smp::IRequest* request)
                throw (
                    ::Smp::IDynamicInvocation::InvalidOperationName,
                    ::Smp::IDynamicInvocation::InvalidParameterCount,
                    ::Smp::IDynamicInvocation::InvalidParameterType)
            {
                if (request == NULL)
                {
                    return;
                }
                auto handler = requestHandlers.find(request->GetOperationName());
                if (handler != requestHandlers.end())
                {
                    handler->second->Execute(*this, request);
                }
                else
                {
                    ::Smp::Bool customInvocationSuccessful = false;
                    // MARKER: INVOKE BODY: START
                    // INSERT HERE CUSTOMISED INVOKE SECTION
                    // If the invocation is handled in the custom section set the
                    // customInvocationSuccessful variable to true.
                    // MARKER: INVOKE BODY: END

                    // If custom invocation did not happen
                    if (customInvocationSuccessful == false)
                    {
                        // request does not match any operation provided by this model
                        throw ::Smp::IDynamicInvocation::InvalidOperationName(request->GetOperationName());
                    }
                }
            }
// --CLOSING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::Invoke--


            // -----------------------------------------------------------------------------
            // -------------------- Initialise and Cleanup Implementation ------------------
            // -----------------------------------------------------------------------------
            //

// --OPENING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::_Initialise--
            /// Initialise
            void DssRoot::_Initialise(void)
            {
                // - - - - - - - Initialise private fields - - - - - - -

                // - - - - - - - - - Setup EntryPoints - - - - - - - - -
                //
                // EntryPoint: UpdateAllModels
                UpdateAllModels
                = new ::Smp::Mdk::EntryPoint("UpdateAllModels",
                                            "",
                                            this,
                                            &DssRoot::_UpdateAllModels);
                // Use existing implementation to manage Entry Points
                this->AddEntryPoint(UpdateAllModels);

                // - - - - - - - - - Setup Composition - - - - - - - - -
                //
                // Container: l3Models
                _l3Models
                = new ::Smp::Mdk::Management::ManagedContainer< ::Smp::IModel>
                    ("l3Models",
                     "",
                     this,
                     0,
                     -1);
                // Cast Mdk ManagedContainer to Smp IManagedContainer
                l3Models = _l3Models;
                // Use existing implementation to manage Containers
                this->AddContainer(l3Models);


                // MARKER: INIT BODY: START
                // INSERT HERE CUSTOMISED INITIALISE SECTION
//                typ_return result;
//                GenericObject::Initialize_All("dss.ini.set",result);
                // MARKER: INIT BODY: END
            }
// --CLOSING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::_Initialise--

// --OPENING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::_Cleanup--
            /// Cleanup
            void DssRoot::_Cleanup(void)
            {
                // MARKER: CLEANUP BODY: START
                // INSERT HERE CUSTOMISED CLEANUP SECTION
                // MARKER: CLEANUP BODY: END

                // EntryPoint: UpdateAllModels
                if (UpdateAllModels != NULL)
                {
                    delete UpdateAllModels;
                }

                // Container: l3Models
                if (_l3Models != NULL)
                {
                    delete _l3Models;
                }
            }
// --CLOSING ELEMENT--::tasi::sve::dss::DssRoot/DssRootSmp.cpp::_Cleanup--

        }
    }
}

// --OPENING ELEMENT--SPR_LOG_SECTION--
// The SPR history contains the description and reference of
// the SPRs closed on the file.
//
// MARKER: SPR_LOG: START
// Insert SPR log here (Including: Date, Author, SPR REF, Description). 
// MARKER: SPR_LOG: END
// --CLOSING ELEMENT--SPR_LOG_SECTION--

