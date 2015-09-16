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
#pragma once

namespace org { namespace alljoyn { namespace ControlPanel { namespace AirPurifier {

public interface class IAirPurifierService
{
public:
    // Implement this function to handle calls to the PowerON method.
    Windows::Foundation::IAsyncOperation<AirPurifierPowerONResult^>^ PowerONAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the PowerOFF method.
    Windows::Foundation::IAsyncOperation<AirPurifierPowerOFFResult^>^ PowerOFFAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the Reset method.
    Windows::Foundation::IAsyncOperation<AirPurifierResetResult^>^ ResetAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the SendSoftwareUpgradeFile method.
    Windows::Foundation::IAsyncOperation<AirPurifierSendSoftwareUpgradeFileResult^>^ SendSoftwareUpgradeFileAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ uint32 interfaceMemberCurrentIndex, _In_ Windows::Foundation::Collections::IVectorView<byte>^ interfaceMemberFileData);

    // Implement this function to handle requests for the value of the powerStatus property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierGetPowerStatusResult^>^ GetPowerStatusAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the powerStatus property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierSetPowerStatusResult^>^ SetPowerStatusAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, int32 value);

    // Implement this function to handle requests for the value of the flowValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierGetFlowValueResult^>^ GetFlowValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the flowValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierSetFlowValueResult^>^ SetFlowValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, int32 value);

    // Implement this function to handle requests for the value of the timerValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierGetTimerValueResult^>^ GetTimerValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the timerValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierSetTimerValueResult^>^ SetTimerValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, int32 value);

    // Implement this function to handle requests for the value of the sensorOdorValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierGetSensorOdorValueResult^>^ GetSensorOdorValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the sensorDustValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierGetSensorDustValueResult^>^ GetSensorDustValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the sensorAllergenValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierGetSensorAllergenValueResult^>^ GetSensorAllergenValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the sensorCleanMetalGridValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierGetSensorCleanMetalGridValueResult^>^ GetSensorCleanMetalGridValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the sensorReplaceFilterValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierGetSensorReplaceFilterValueResult^>^ GetSensorReplaceFilterValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the sensorCleanMonitorValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<AirPurifierGetSensorCleanMonitorValueResult^>^ GetSensorCleanMonitorValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

};

} } } } 