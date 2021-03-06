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

// Signals
public ref class AirPurifierSensorOdorValueChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property int32 NewSensorOdorValue
    {
        int32 get() { return m_interfaceMemberNewSensorOdorValue; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberNewSensorOdorValue = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    int32 m_interfaceMemberNewSensorOdorValue;
};

public ref class AirPurifierSensorDustValueChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property int32 NewSensorDustValue
    {
        int32 get() { return m_interfaceMemberNewSensorDustValue; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberNewSensorDustValue = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    int32 m_interfaceMemberNewSensorDustValue;
};

public ref class AirPurifierSensorAllergenValueChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property int32 NewSensorAllergenValue
    {
        int32 get() { return m_interfaceMemberNewSensorAllergenValue; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberNewSensorAllergenValue = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    int32 m_interfaceMemberNewSensorAllergenValue;
};

public ref class AirPurifierSensorCleanMetalGridValueChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property int32 NewSensorCleanMetalGridValue
    {
        int32 get() { return m_interfaceMemberNewSensorCleanMetalGridValue; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberNewSensorCleanMetalGridValue = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    int32 m_interfaceMemberNewSensorCleanMetalGridValue;
};

public ref class AirPurifierSensorReplaceFilterValueChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property int32 NewSensorReplaceFilterValue
    {
        int32 get() { return m_interfaceMemberNewSensorReplaceFilterValue; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberNewSensorReplaceFilterValue = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    int32 m_interfaceMemberNewSensorReplaceFilterValue;
};

public ref class AirPurifierSensorCleanMonitorValueChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property int32 NewSensorCleanMonitorValue
    {
        int32 get() { return m_interfaceMemberNewSensorCleanMonitorValue; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberNewSensorCleanMonitorValue = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    int32 m_interfaceMemberNewSensorCleanMonitorValue;
};

public ref class AirPurifierPowerStatusChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property int32 NewPowerStatus
    {
        int32 get() { return m_interfaceMemberNewPowerStatus; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberNewPowerStatus = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    int32 m_interfaceMemberNewPowerStatus;
};

public ref class AirPurifierSensorsCleanMetalGridAndReplaceFilterValuesResetReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }


private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

};

public ref class AirPurifierFlowValueChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property int32 NewFlowValue
    {
        int32 get() { return m_interfaceMemberNewFlowValue; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberNewFlowValue = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    int32 m_interfaceMemberNewFlowValue;
};

public ref class AirPurifierTimerValueChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property int32 NewTimerValue
    {
        int32 get() { return m_interfaceMemberNewTimerValue; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberNewTimerValue = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    int32 m_interfaceMemberNewTimerValue;
};


} } } } 
