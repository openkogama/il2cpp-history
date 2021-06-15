
/* ProxyLogHandler+LogFormatData(LogType, Object, String, Object[]) */

void Assembly-CSharp.dll::ProxyLogHandler+LogFormatData::ProxyLogHandler_LogFormatData__ctor
               (ProxyLogHandler_LogFormatData *this,LogType__Enum logType,Object_1 *context,
               String *format,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__EventArgs);
  }
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields).LogType = logType;
  (this->fields).context = context;
  (this->fields).format = format;
  (this->fields).args = args;
  return;
}


/* String get_Message() */

String * Assembly-CSharp.dll::ProxyLogHandler+LogFormatData::
         ProxyLogHandler_LogFormatData_get_Message
                   (ProxyLogHandler_LogFormatData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).format;
  args = (this->fields).args;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_3(pSVar1,args,(MethodInfo *)0x0);
  return pSVar1;
}

