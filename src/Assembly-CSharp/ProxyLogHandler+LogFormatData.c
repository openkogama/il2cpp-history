
/* ProxyLogHandler+LogFormatData(LogType, Object, String, Object[]) */

void Assembly-CSharp.dll::ProxyLogHandler+LogFormatData::ProxyLogHandler_LogFormatData__ctor
               (ProxyLogHandler_LogFormatData *this,LogType__Enum logType,Object_1 *context,
               String *format,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__EventArgs);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  ppOVar1 = &(this->fields).context;
  (this->fields).LogType = logType;
  *ppOVar1 = context;
  func_?(ppOVar1,context);
  ppSVar2 = &(this->fields).format;
  *ppSVar2 = format;
  func_?(ppSVar2,format);
  ppOVar3 = &(this->fields).args;
  *ppOVar3 = args;
  func_?(ppOVar3,args);
  return;
}


/* String get_Message() */

String * Assembly-CSharp.dll::ProxyLogHandler+LogFormatData::
         ProxyLogHandler_LogFormatData_get_Message
                   (ProxyLogHandler_LogFormatData *this,MethodInfo *method)

{
  pSVar1 = mscorlib.dll::System::String::String_Format_3
                     ((this->fields).format,(this->fields).args,(MethodInfo *)0x0);
  return pSVar1;
}

