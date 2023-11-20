
/* Void Log(String, String) */

void Assembly-CSharp.dll::UnityLogAppender::UnityLogAppender_Log
               (UnityLogAppender *this,String *loggerName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&::StringLiteral___);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  message_00 = mscorlib.dll::System::String::String_Concat_5
                         (::StringLiteral__,loggerName,::StringLiteral___,message,(MethodInfo *)0x0)
  ;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)message_00,(MethodInfo *)0x0);
  return;
}

