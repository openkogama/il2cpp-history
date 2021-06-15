
/* Void Execute(Boolean, String) */

void Assembly-CSharp.dll::BrowserComm+Callback::BrowserComm_Callback_Execute
               (BrowserComm_Callback *this,bool success,String *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)(this->fields).callbackFunction;
  if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object__Invoke
              (this_00,success,(Object *)data,
               MethodInfo__System__Action<bool,_System::String>__Invoke_bool__System__String_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

