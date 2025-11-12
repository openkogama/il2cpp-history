
/* Void <CreateRequest>b__0(WebResponse) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::SessionLocator+<>c__DisplayClass2_0::
     SessionLocator_c_DisplayClass2_0__CreateRequest_b__0
               (SessionLocator_c_DisplayClass2_0 *this,WebResponse *response,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Portal__Scripts__SessionLocatorResponse_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<UGUI::Portal::Scripts::SessionLocatorResponse>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Got_response__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (response == (WebResponse *)0x0) {
    FUN_?();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Got_response__,(response->fields)._Content_k__BackingField,
                      (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if ((response->fields)._IsOk_k__BackingField == 0) {
    pAVar2 = (this->fields).onError;
    if (pAVar2 != (Action_1_String_ *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(response->fields)._ErrorMessage_k__BackingField,
                 (pAVar2->fields)._._.method);
    }
  }
  else {
    pSVar1 = (response->fields)._Content_k__BackingField;
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar3 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (pSVar1,
                        UGUI__Portal__Scripts__SessionLocatorResponse_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<UGUI::Portal::Scripts::SessionLocatorResponse>_System__String_
                       );
    pAVar4 = (this->fields).onSuccess;
    if (pAVar4 != (Action_1_UGUI_Portal_Scripts_SessionLocatorResponse_ *)0x0) {
      UNRECOVERED_JUMPTABLE = (pAVar4->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                ((pAVar4->fields)._._.method_code,pOVar3,(pAVar4->fields)._._.method,
                 UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}

