//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace concurrency;
using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace org::alljoyn::ControlPanel::AirPurifier;
namespace org { namespace alljoyn { namespace ControlPanel { namespace AirPurifier {

// Methods
AirPurifierPowerONCalledEventArgs::AirPurifierPowerONCalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierPowerONResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierPowerONCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierPowerONCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierPowerONCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierPowerONCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierPowerONCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for PowerONCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierPowerOFFCalledEventArgs::AirPurifierPowerOFFCalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierPowerOFFResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierPowerOFFCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierPowerOFFCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierPowerOFFCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierPowerOFFCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierPowerOFFCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for PowerOFFCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierResetCalledEventArgs::AirPurifierResetCalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierResetResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierResetCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierResetCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierResetCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierResetCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierResetCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for ResetCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierSendSoftwareUpgradeFileCalledEventArgs::AirPurifierSendSoftwareUpgradeFileCalledEventArgs(
    _In_ AllJoynMessageInfo^ info,
    _In_ uint32 interfaceMemberCurrentIndex,
    _In_ Windows::Foundation::Collections::IVectorView<byte>^ interfaceMemberFileData)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info),
    m_interfaceMemberCurrentIndex(interfaceMemberCurrentIndex),
    m_interfaceMemberFileData(interfaceMemberFileData)
{
	m_result = AirPurifierSendSoftwareUpgradeFileResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierSendSoftwareUpgradeFileCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierSendSoftwareUpgradeFileCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierSendSoftwareUpgradeFileCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierSendSoftwareUpgradeFileCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierSendSoftwareUpgradeFileCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SendSoftwareUpgradeFileCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

// Readable Properties
AirPurifierGetPowerStatusRequestedEventArgs::AirPurifierGetPowerStatusRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierGetPowerStatusResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierGetPowerStatusRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierGetPowerStatusRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierGetPowerStatusRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetPowerStatusRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetPowerStatusRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetPowerStatusRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierGetFlowValueRequestedEventArgs::AirPurifierGetFlowValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierGetFlowValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierGetFlowValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierGetFlowValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierGetFlowValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetFlowValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetFlowValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetFlowValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierGetTimerValueRequestedEventArgs::AirPurifierGetTimerValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierGetTimerValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierGetTimerValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierGetTimerValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierGetTimerValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetTimerValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetTimerValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetTimerValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierGetSensorOdorValueRequestedEventArgs::AirPurifierGetSensorOdorValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierGetSensorOdorValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierGetSensorOdorValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierGetSensorOdorValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierGetSensorOdorValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorOdorValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorOdorValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetSensorOdorValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierGetSensorDustValueRequestedEventArgs::AirPurifierGetSensorDustValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierGetSensorDustValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierGetSensorDustValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierGetSensorDustValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierGetSensorDustValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorDustValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorDustValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetSensorDustValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierGetSensorAllergenValueRequestedEventArgs::AirPurifierGetSensorAllergenValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierGetSensorAllergenValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierGetSensorAllergenValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierGetSensorAllergenValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierGetSensorAllergenValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorAllergenValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorAllergenValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetSensorAllergenValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierGetSensorCleanMetalGridValueRequestedEventArgs::AirPurifierGetSensorCleanMetalGridValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierGetSensorCleanMetalGridValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierGetSensorCleanMetalGridValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierGetSensorCleanMetalGridValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierGetSensorCleanMetalGridValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorCleanMetalGridValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorCleanMetalGridValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetSensorCleanMetalGridValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierGetSensorReplaceFilterValueRequestedEventArgs::AirPurifierGetSensorReplaceFilterValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierGetSensorReplaceFilterValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierGetSensorReplaceFilterValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierGetSensorReplaceFilterValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierGetSensorReplaceFilterValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorReplaceFilterValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorReplaceFilterValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetSensorReplaceFilterValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierGetSensorCleanMonitorValueRequestedEventArgs::AirPurifierGetSensorCleanMonitorValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = AirPurifierGetSensorCleanMonitorValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierGetSensorCleanMonitorValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierGetSensorCleanMonitorValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierGetSensorCleanMonitorValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorCleanMonitorValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierGetSensorCleanMonitorValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetSensorCleanMonitorValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

// Writable Properties
AirPurifierSetPowerStatusRequestedEventArgs::AirPurifierSetPowerStatusRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info,
    _In_ int32 value)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info),
    m_value(value)
{
	m_result = AirPurifierSetPowerStatusResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierSetPowerStatusRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierSetPowerStatusRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierSetPowerStatusRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierSetPowerStatusRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierSetPowerStatusRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetPowerStatusRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierSetFlowValueRequestedEventArgs::AirPurifierSetFlowValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info,
    _In_ int32 value)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info),
    m_value(value)
{
	m_result = AirPurifierSetFlowValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierSetFlowValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierSetFlowValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierSetFlowValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierSetFlowValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierSetFlowValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetFlowValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

AirPurifierSetTimerValueRequestedEventArgs::AirPurifierSetTimerValueRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info,
    _In_ int32 value)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info),
    m_value(value)
{
	m_result = AirPurifierSetTimerValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ AirPurifierSetTimerValueRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &AirPurifierSetTimerValueRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void AirPurifierSetTimerValueRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierSetTimerValueRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void AirPurifierSetTimerValueRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetTimerValueRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

} } } } 
