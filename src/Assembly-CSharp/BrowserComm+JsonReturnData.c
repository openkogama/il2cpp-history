
/* Boolean Validate() */

bool Assembly-CSharp.dll::BrowserComm+JsonReturnData::BrowserComm_JsonReturnData_Validate
               (BrowserComm_JsonReturnData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_package_does_not_contain_callbac);
    func_?(&StringLiteral_package_does_not_contain_data);
    func_?(&StringLiteral_JavaScript_externalCall_error__);
    func_?(&StringLiteral_package_does_not_contain_data_or);
    func_?(&StringLiteral_package_contains_both_data_and_e);
    cRam_? = '\x01';
  }
  if ((this->fields).callbackId == -1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_package_does_not_contain_callbac,(MethodInfo *)0x0);
    return 0;
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty((this->fields).data,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((this->fields).error,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_package_does_not_contain_data_or,(MethodInfo *)0x0);
      return 0;
    }
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty((this->fields).data,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((this->fields).error,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_package_contains_both_data_and_e,(MethodInfo *)0x0);
    }
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty((this->fields).error,(MethodInfo *)0x0)
  ;
  if (bVar1 != 0) {
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((this->fields).data,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 1;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_package_does_not_contain_data,(MethodInfo *)0x0);
    return 0;
  }
  message = mscorlib.dll::System::String::String_Concat_3
                      (StringLiteral_JavaScript_externalCall_error__,(this->fields).error,
                       (MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)message,(MethodInfo *)0x0);
  return 0;
}


/* BrowserComm+JsonReturnData() */

void Assembly-CSharp.dll::BrowserComm+JsonReturnData::BrowserComm_JsonReturnData__ctor
               (BrowserComm_JsonReturnData *this,MethodInfo *method)

{
  (this->fields).callbackId = -1;
  return;
}

