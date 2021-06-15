
/* Void Log(String, String) */

void Assembly-CSharp.dll::UnityLogAppender::UnityLogAppender_Log
               (UnityLogAppender *this,String *loggerName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message_00 = mscorlib.dll::System::String::String_Concat_4
                         (::StringLiteral__,loggerName,::StringLiteral___,message,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)message_00,(MethodInfo *)0x0);
  return;
}

