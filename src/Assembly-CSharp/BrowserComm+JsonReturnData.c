
/* Boolean Validate() */

bool Assembly-CSharp.dll::BrowserComm+JsonReturnData::BrowserComm_JsonReturnData_Validate
               (BrowserComm_JsonReturnData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_package_does_not_contain_callbac);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_package_does_not_contain_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JavaScript_externalCall_error__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_package_does_not_contain_data_or);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_package_contains_both_data_and_e);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).callbackId == -1) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_package_does_not_contain_callbac,(MethodInfo *)0x0);
    return 0;
  }
  pSVar1 = (this->fields).data;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    pSVar1 = (this->fields).error;
    if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_package_does_not_contain_data_or,(MethodInfo *)0x0);
      return 0;
    }
    pSVar1 = (this->fields).data;
    if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0))
    goto code_?;
  }
  pSVar1 = (this->fields).error;
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_package_contains_both_data_and_e,(MethodInfo *)0x0);
  }
code_?:
  pSVar1 = (this->fields).error;
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_JavaScript_externalCall_error__,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return 0;
  }
  pSVar1 = (this->fields).data;
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    return 1;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_package_does_not_contain_data,(MethodInfo *)0x0);
  return 0;
}

