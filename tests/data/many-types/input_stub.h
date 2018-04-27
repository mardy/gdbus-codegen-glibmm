#pragma once
#include <string>
#include <glibmm.h>
#include <giomm.h>
#include "OUTPUT_DIR/input_common.h"

namespace org {
namespace gdbus {
namespace codegen {
namespace glibmm {

class Test {
public:
    Test();
    virtual ~Test();

    guint register_object(const Glib::RefPtr<Gio::DBus::Connection> &connection,
                          const Glib::ustring &object_path);

    // deprecated:
    void connect(Gio::DBus::BusType, std::string);

    bool TestPropReadByteStringArray_set(const std::vector<std::string> & value);
    bool TestPropReadObjectPathArray_set(const std::vector<Glib::DBusObjectPathString> & value);
    bool TestPropReadStringArray_set(const std::vector<Glib::ustring> & value);
    bool TestPropReadByteString_set(const std::string & value);
    bool TestPropReadSignature_set(const Glib::DBusSignatureString & value);
    bool TestPropReadObjectPath_set(const Glib::DBusObjectPathString & value);
    bool TestPropReadString_set(const Glib::ustring & value);
    bool TestPropReadDouble_set(double value);
    bool TestPropReadUInt64_set(guint64 value);
    bool TestPropReadInt64_set(gint64 value);
    bool TestPropReadUInt_set(guint32 value);
    bool TestPropReadInt_set(gint32 value);
    bool TestPropReadUInt16_set(guint16 value);
    bool TestPropReadInt16_set(gint16 value);
    bool TestPropReadChar_set(guchar value);
    bool TestPropReadBoolean_set(bool value);
    bool TestPropInternalReadPropertyChange_set(gint32 value);
    bool TestPropWriteByteStringArray_set(const std::vector<std::string> & value);
    bool TestPropWriteObjectPathArray_set(const std::vector<Glib::DBusObjectPathString> & value);
    bool TestPropWriteStringArray_set(const std::vector<Glib::ustring> & value);
    bool TestPropWriteByteString_set(const std::string & value);
    bool TestPropWriteSignature_set(const Glib::DBusSignatureString & value);
    bool TestPropWriteObjectPath_set(const Glib::DBusObjectPathString & value);
    bool TestPropWriteString_set(const Glib::ustring & value);
    bool TestPropWriteDouble_set(double value);
    bool TestPropWriteUInt64_set(guint64 value);
    bool TestPropWriteInt64_set(gint64 value);
    bool TestPropWriteUInt_set(guint32 value);
    bool TestPropWriteInt_set(gint32 value);
    bool TestPropWriteUInt16_set(guint16 value);
    bool TestPropWriteInt16_set(gint16 value);
    bool TestPropWriteChar_set(guchar value);
    bool TestPropWriteBoolean_set(bool value);
    bool TestPropReadWriteByteStringArray_set(const std::vector<std::string> & value);
    bool TestPropReadWriteObjectPathArray_set(const std::vector<Glib::DBusObjectPathString> & value);
    bool TestPropReadWriteStringArray_set(const std::vector<Glib::ustring> & value);
    bool TestPropReadWriteByteString_set(const std::string & value);
    bool TestPropReadWriteSignature_set(const Glib::DBusSignatureString & value);
    bool TestPropReadWriteObjectPath_set(const Glib::DBusObjectPathString & value);
    bool TestPropReadWriteString_set(const Glib::ustring & value);
    bool TestPropReadWriteDouble_set(double value);
    bool TestPropReadWriteUInt64_set(guint64 value);
    bool TestPropReadWriteInt64_set(gint64 value);
    bool TestPropReadWriteUInt_set(guint32 value);
    bool TestPropReadWriteInt_set(gint32 value);
    bool TestPropReadWriteUInt16_set(guint16 value);
    bool TestPropReadWriteInt16_set(gint16 value);
    bool TestPropReadWriteChar_set(guchar value);
    bool TestPropReadWriteBoolean_set(bool value);
    bool TestPropInternalReadWritePropertyChange_set(gint32 value);

protected:
    virtual void TestStringVariantDict(
        const std::map<Glib::ustring,Glib::VariantBase> & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestStringStringDict(
        const std::map<Glib::ustring,Glib::ustring> & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestUintIntDict(
        const std::map<guint32,gint32> & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestVariant(
        const Glib::VariantBase & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestByteStringArray(
        const std::vector<std::string> & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestObjectPathArray(
        const std::vector<Glib::DBusObjectPathString> & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestStringArray(
        const std::vector<Glib::ustring> & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestByteString(
        const std::string & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestStruct(
        const std::tuple<Glib::ustring,Glib::ustring> & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestStructArray(
        const std::vector<std::tuple<guint32,Glib::ustring,gint32>> & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestDictStructArray(
        const std::vector<std::tuple<Glib::ustring,std::map<Glib::ustring,Glib::VariantBase>>> & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestSignature(
        const Glib::DBusSignatureString & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestObjectPath(
        const Glib::DBusObjectPathString & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestString(
        const Glib::ustring & Param1,
        TestMessageHelper msg) = 0;
    virtual void TestDouble(
        double Param1,
        TestMessageHelper msg) = 0;
    virtual void TestUInt64(
        guint64 Param1,
        TestMessageHelper msg) = 0;
    virtual void TestInt64(
        gint64 Param1,
        TestMessageHelper msg) = 0;
    virtual void TestUInt(
        guint32 Param1,
        TestMessageHelper msg) = 0;
    virtual void TestInt(
        gint32 Param1,
        TestMessageHelper msg) = 0;
    virtual void TestUInt16(
        guint16 Param1,
        TestMessageHelper msg) = 0;
    virtual void TestInt16(
        gint16 Param1,
        TestMessageHelper msg) = 0;
    virtual void TestChar(
        guchar Param1,
        TestMessageHelper msg) = 0;
    virtual void TestBoolean(
        bool Param1,
        TestMessageHelper msg) = 0;
    virtual void TestAll(
        const std::vector<std::string> & in_Param1,
        const std::vector<Glib::DBusObjectPathString> & in_Param2,
        const std::vector<Glib::ustring> & in_Param3,
        const std::string & in_Param4,
        const Glib::DBusSignatureString & in_Param5,
        const Glib::DBusObjectPathString & in_Param6,
        const Glib::ustring & in_Param7,
        double in_Param8,
        guint64 in_Param9,
        gint64 in_Param10,
        guint32 in_Param11,
        gint32 in_Param12,
        guint16 in_Param13,
        gint16 in_Param14,
        guchar in_Param15,
        bool in_Param16,
        TestMessageHelper msg) = 0;
    virtual void TestTriggerInternalPropertyChange(
        gint32 NewPropertyValue,
        TestMessageHelper msg) = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadByteStringArray_setHandler(const std::vector<std::string> & value) = 0;
    virtual std::vector<std::string> TestPropReadByteStringArray_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadObjectPathArray_setHandler(const std::vector<Glib::DBusObjectPathString> & value) = 0;
    virtual std::vector<Glib::DBusObjectPathString> TestPropReadObjectPathArray_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadStringArray_setHandler(const std::vector<Glib::ustring> & value) = 0;
    virtual std::vector<Glib::ustring> TestPropReadStringArray_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadByteString_setHandler(const std::string & value) = 0;
    virtual std::string TestPropReadByteString_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadSignature_setHandler(const Glib::DBusSignatureString & value) = 0;
    virtual Glib::DBusSignatureString TestPropReadSignature_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadObjectPath_setHandler(const Glib::DBusObjectPathString & value) = 0;
    virtual Glib::DBusObjectPathString TestPropReadObjectPath_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadString_setHandler(const Glib::ustring & value) = 0;
    virtual Glib::ustring TestPropReadString_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadDouble_setHandler(double value) = 0;
    virtual double TestPropReadDouble_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadUInt64_setHandler(guint64 value) = 0;
    virtual guint64 TestPropReadUInt64_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadInt64_setHandler(gint64 value) = 0;
    virtual gint64 TestPropReadInt64_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadUInt_setHandler(guint32 value) = 0;
    virtual guint32 TestPropReadUInt_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadInt_setHandler(gint32 value) = 0;
    virtual gint32 TestPropReadInt_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadUInt16_setHandler(guint16 value) = 0;
    virtual guint16 TestPropReadUInt16_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadInt16_setHandler(gint16 value) = 0;
    virtual gint16 TestPropReadInt16_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadChar_setHandler(guchar value) = 0;
    virtual guchar TestPropReadChar_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadBoolean_setHandler(bool value) = 0;
    virtual bool TestPropReadBoolean_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropInternalReadPropertyChange_setHandler(gint32 value) = 0;
    virtual gint32 TestPropInternalReadPropertyChange_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteByteStringArray_setHandler(const std::vector<std::string> & value) = 0;
    virtual std::vector<std::string> TestPropWriteByteStringArray_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteObjectPathArray_setHandler(const std::vector<Glib::DBusObjectPathString> & value) = 0;
    virtual std::vector<Glib::DBusObjectPathString> TestPropWriteObjectPathArray_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteStringArray_setHandler(const std::vector<Glib::ustring> & value) = 0;
    virtual std::vector<Glib::ustring> TestPropWriteStringArray_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteByteString_setHandler(const std::string & value) = 0;
    virtual std::string TestPropWriteByteString_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteSignature_setHandler(const Glib::DBusSignatureString & value) = 0;
    virtual Glib::DBusSignatureString TestPropWriteSignature_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteObjectPath_setHandler(const Glib::DBusObjectPathString & value) = 0;
    virtual Glib::DBusObjectPathString TestPropWriteObjectPath_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteString_setHandler(const Glib::ustring & value) = 0;
    virtual Glib::ustring TestPropWriteString_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteDouble_setHandler(double value) = 0;
    virtual double TestPropWriteDouble_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteUInt64_setHandler(guint64 value) = 0;
    virtual guint64 TestPropWriteUInt64_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteInt64_setHandler(gint64 value) = 0;
    virtual gint64 TestPropWriteInt64_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteUInt_setHandler(guint32 value) = 0;
    virtual guint32 TestPropWriteUInt_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteInt_setHandler(gint32 value) = 0;
    virtual gint32 TestPropWriteInt_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteUInt16_setHandler(guint16 value) = 0;
    virtual guint16 TestPropWriteUInt16_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteInt16_setHandler(gint16 value) = 0;
    virtual gint16 TestPropWriteInt16_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteChar_setHandler(guchar value) = 0;
    virtual guchar TestPropWriteChar_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropWriteBoolean_setHandler(bool value) = 0;
    virtual bool TestPropWriteBoolean_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteByteStringArray_setHandler(const std::vector<std::string> & value) = 0;
    virtual std::vector<std::string> TestPropReadWriteByteStringArray_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteObjectPathArray_setHandler(const std::vector<Glib::DBusObjectPathString> & value) = 0;
    virtual std::vector<Glib::DBusObjectPathString> TestPropReadWriteObjectPathArray_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteStringArray_setHandler(const std::vector<Glib::ustring> & value) = 0;
    virtual std::vector<Glib::ustring> TestPropReadWriteStringArray_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteByteString_setHandler(const std::string & value) = 0;
    virtual std::string TestPropReadWriteByteString_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteSignature_setHandler(const Glib::DBusSignatureString & value) = 0;
    virtual Glib::DBusSignatureString TestPropReadWriteSignature_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteObjectPath_setHandler(const Glib::DBusObjectPathString & value) = 0;
    virtual Glib::DBusObjectPathString TestPropReadWriteObjectPath_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteString_setHandler(const Glib::ustring & value) = 0;
    virtual Glib::ustring TestPropReadWriteString_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteDouble_setHandler(double value) = 0;
    virtual double TestPropReadWriteDouble_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteUInt64_setHandler(guint64 value) = 0;
    virtual guint64 TestPropReadWriteUInt64_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteInt64_setHandler(gint64 value) = 0;
    virtual gint64 TestPropReadWriteInt64_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteUInt_setHandler(guint32 value) = 0;
    virtual guint32 TestPropReadWriteUInt_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteInt_setHandler(gint32 value) = 0;
    virtual gint32 TestPropReadWriteInt_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteUInt16_setHandler(guint16 value) = 0;
    virtual guint16 TestPropReadWriteUInt16_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteInt16_setHandler(gint16 value) = 0;
    virtual gint16 TestPropReadWriteInt16_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteChar_setHandler(guchar value) = 0;
    virtual guchar TestPropReadWriteChar_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropReadWriteBoolean_setHandler(bool value) = 0;
    virtual bool TestPropReadWriteBoolean_get() = 0;

    /* Handle the setting of a property
     * This method will be called as a result of a call to <PropName>_set
     * and should implement the actual setting of the property value.
     * Should return true on success and false otherwise.
     */
    virtual bool TestPropInternalReadWritePropertyChange_setHandler(gint32 value) = 0;
    virtual gint32 TestPropInternalReadWritePropertyChange_get() = 0;

    void TestSignalByteStringArray_emitter(std::vector<std::string>);
    sigc::signal<void, std::vector<std::string>> TestSignalByteStringArray_signal;

    void TestSignalObjectPathArray_emitter(std::vector<Glib::DBusObjectPathString>);
    sigc::signal<void, std::vector<Glib::DBusObjectPathString>> TestSignalObjectPathArray_signal;

    void TestSignalStringArray_emitter(std::vector<Glib::ustring>);
    sigc::signal<void, std::vector<Glib::ustring>> TestSignalStringArray_signal;

    void TestSignalByteString_emitter(std::string);
    sigc::signal<void, std::string> TestSignalByteString_signal;

    void TestSignalSignature_emitter(Glib::DBusSignatureString);
    sigc::signal<void, Glib::DBusSignatureString> TestSignalSignature_signal;

    void TestSignalObjectPath_emitter(Glib::DBusObjectPathString);
    sigc::signal<void, Glib::DBusObjectPathString> TestSignalObjectPath_signal;

    void TestSignalString_emitter(Glib::ustring);
    sigc::signal<void, Glib::ustring> TestSignalString_signal;

    void TestSignalDouble_emitter(double);
    sigc::signal<void, double> TestSignalDouble_signal;

    void TestSignalUInt64_emitter(guint64);
    sigc::signal<void, guint64> TestSignalUInt64_signal;

    void TestSignalInt64_emitter(gint64);
    sigc::signal<void, gint64> TestSignalInt64_signal;

    void TestSignalUInt_emitter(guint32);
    sigc::signal<void, guint32> TestSignalUInt_signal;

    void TestSignalInt_emitter(gint32);
    sigc::signal<void, gint32> TestSignalInt_signal;

    void TestSignalUInt16_emitter(guint16);
    sigc::signal<void, guint16> TestSignalUInt16_signal;

    void TestSignalInt16_emitter(gint16);
    sigc::signal<void, gint16> TestSignalInt16_signal;

    void TestSignalChar_emitter(guchar);
    sigc::signal<void, guchar> TestSignalChar_signal;

    void TestSignalBoolean_emitter(bool);
    sigc::signal<void, bool> TestSignalBoolean_signal;

    void on_bus_acquired(const Glib::RefPtr<Gio::DBus::Connection> &connection,
                         const Glib::ustring &name);

    void on_name_acquired(const Glib::RefPtr<Gio::DBus::Connection> &connection,
                          const Glib::ustring &name);

    void on_name_lost(const Glib::RefPtr<Gio::DBus::Connection> &connection,
                      const Glib::ustring &name);

    void on_method_call(const Glib::RefPtr<Gio::DBus::Connection> &connection,
                        const Glib::ustring &sender,
                        const Glib::ustring &object_path,
                        const Glib::ustring &interface_name,
                        const Glib::ustring &method_name,
                        const Glib::VariantContainerBase &parameters,
                        const Glib::RefPtr<Gio::DBus::MethodInvocation> &invocation);

    void on_interface_get_property(Glib::VariantBase& property,
                                   const Glib::RefPtr<Gio::DBus::Connection> &connection,
                                   const Glib::ustring &sender,
                                   const Glib::ustring &object_path,
                                   const Glib::ustring &interface_name,
                                   const Glib::ustring &property_name);

    bool on_interface_set_property(
        const Glib::RefPtr<Gio::DBus::Connection> &connection,
        const Glib::ustring &sender,
        const Glib::ustring &object_path,
        const Glib::ustring &interface_name,
        const Glib::ustring &property_name,
        const Glib::VariantBase &value);

private:
    bool emitSignal(const std::string &propName, Glib::VariantBase &value);

    guint connectionId, registeredId;
    Glib::RefPtr<Gio::DBus::NodeInfo> introspection_data;
    Glib::RefPtr<Gio::DBus::Connection> m_connection;
    std::string m_objectPath;
    std::string m_interfaceName;
};

} // glibmm
} // codegen
} // gdbus
} // org

