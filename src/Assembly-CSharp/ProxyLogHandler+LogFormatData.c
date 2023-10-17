
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
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
  TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
  (this->fields).LogType = logType;
  (this->fields).context = context;
  func_?(&(this->fields).context,context);
  (this->fields).format = format;
  func_?(&(this->fields).format,format);
  (this->fields).args = args;
  func_?(&(this->fields).args,args);
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

