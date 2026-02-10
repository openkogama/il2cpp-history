
/* Void ExternalCall(String) */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
               (String *functionName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object);
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_args__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  str2 = StringLiteral___to_JSBridge_with_args__;
  pSVar1 = StringLiteral_Would_have_sent_function__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
    if (args == (Object__Array *)0x0) {
      str3 = (String *)0x0;
    }
    else {
      pOVar2 = args->klass;
      uVar3._0_2_ = pOVar2[1]._0.this_arg.attrs;
      uVar3._2_1_ = pOVar2[1]._0.this_arg.type;
      uVar3._3_5_ = *(undefined5 *)&pOVar2[1]._0.this_arg.field_0xb;
      str3 = (String *)(*(code *)pOVar2[1]._0.this_arg.data)(args,uVar3);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_6
                       (pSVar1,functionName,str2,str3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,3,pSVar1);
      return;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = BrowserComm_ToJavaScript_ToNameSpace(functionName,(MethodInfo *)0x0);
  pSVar1 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar1,args,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Attempting_to_use_js_eval_in_non;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar4 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar1);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ExternalCall(String, Object[]) */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
               (String *functionName,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_args__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  str2 = StringLiteral___to_JSBridge_with_args__;
  pSVar1 = StringLiteral_Would_have_sent_function__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
    if (args == (Object__Array *)0x0) {
      str3 = (String *)0x0;
    }
    else {
      pOVar2 = args->klass;
      uVar3._0_2_ = pOVar2[1]._0.this_arg.attrs;
      uVar3._2_1_ = pOVar2[1]._0.this_arg.type;
      uVar3._3_5_ = *(undefined5 *)&pOVar2[1]._0.this_arg.field_0xb;
      str3 = (String *)(*(code *)pOVar2[1]._0.this_arg.data)(args,uVar3);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_6
                       (pSVar1,functionName,str2,str3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,3,pSVar1);
      return;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = BrowserComm_ToJavaScript_ToNameSpace(functionName,(MethodInfo *)0x0);
  pSVar1 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar1,args,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Attempting_to_use_js_eval_in_non;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar4 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar1);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ExternalCall(String, Action`2[Boolean,String]) */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_2
               (String *functionName,Action_2_Boolean_String_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__Callback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_callbackId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_callback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_Would_have_sent_function__;
  pSVar2 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
    if (callback == (Action_2_Boolean_String_ *)0x0) {
      str3 = (String *)0x0;
    }
    else {
      str3 = (String *)
             (*(callback->klass->vtable).ToString.methodPtr)
                       (callback,(callback->klass->vtable).ToString.method);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_6
                       (pSVar1,functionName,pSVar2,str3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = TypeInfo__BrowserComm->static_fields->callbacks;
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
  pOVar3 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
  bVar4 = iRam_? != 0;
  pOVar3[1].klass = (Object__Class *)callback;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
    in_R9 = (ulonglong)(uVar5 & 0x3f);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << in_R9;
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  if (this != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
    uVar9 = CONCAT71((int7)(in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this,key,pOVar3,
               (InsertionBehavior__Enum)uVar9,
               MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
               ->klass->rgctx_data[0x22].method);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar3 = (Object *)FUN_?(uRam_?,aiStackX_20);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)StringLiteral_callbackId,pOVar3,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                         ((Object *)this_00,(MethodInfo *)0x0);
      pSVar1 = BrowserComm_ToJavaScript_ToNameSpace(functionName,(MethodInfo *)0x0);
      args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
      if (args != (Object__Array *)0x0) {
        if ((pSVar2 != (String *)0x0) &&
           (lVar10 = FUN_?(pSVar2,(args->klass->_0).element_class), lVar10 == 0)) {
          uVar9 = FUN_?();
          FUN_?(uVar9,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FUN_?(args,0);
        pSVar2 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar1,args,(MethodInfo *)0x0);
        JSBridge::JSBridge_DoKGMEval(pSVar2,(MethodInfo *)0x0);
        TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
             TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void GetBrowserVersion() */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_GetBrowserVersion
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__get_br);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_get_browser_version);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Would_have_sent_function__get_br;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  args = (Object__Array *)
         System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                   (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
  pSVar1 = JSBridge::JSBridge_BuildInvocationForArguments
                     (StringLiteral_get_browser_version,args,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Attempting_to_use_js_eval_in_non;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToNameSpace(String) */

String * Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                   (String *functionName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if ((functionName != (String *)0x0) && ((functionName->fields)._stringLength != 0)) {
      return functionName;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((functionName == (String *)0x0) || ((functionName->fields)._stringLength == 0)) {
    return pSVar1;
  }
  iVar2 = (pSVar1->fields)._stringLength;
  pSVar3 = (String *)FUN_?((functionName->fields)._stringLength + iVar2,functionName,0);
  if (pSVar3 == (String *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar4)();
    return pSVar1;
  }
  if ((pSVar1->fields)._stringLength <= (pSVar3->fields)._stringLength) {
    puVar5 = &(pSVar3->fields)._firstChar;
    puVar6 = &(pSVar1->fields)._firstChar;
    uVar7 = (pSVar1->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar5 - (longlong)puVar6) < (ulonglong)uVar7) ||
       ((ulonglong)((longlong)puVar6 - (longlong)puVar5) < (ulonglong)uVar7)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar5,(uint8_t *)puVar6,uVar7,(MethodInfo *)0x0);
    }
    if ((functionName->fields)._stringLength <= (pSVar3->fields)._stringLength - iVar2) {
      puVar6 = &(pSVar3->fields)._firstChar + iVar2;
      puVar5 = &(functionName->fields)._firstChar;
      uVar7 = (functionName->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar6 - (longlong)puVar5) < (ulonglong)uVar7) ||
         ((ulonglong)((longlong)puVar5 - (longlong)puVar6) < (ulonglong)uVar7)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar6,(uint8_t *)puVar5,uVar7,(MethodInfo *)0x0);
      }
      return pSVar3;
    }
    uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar9,uVar8);
    pcVar4 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar4)();
    return pSVar1;
  }
  uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar9,(MethodInfo *)0x0);
  uVar8 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar9,uVar8);
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* BrowserComm+ToJavaScript() */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UNITY_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter = 0;
  TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix = StringLiteral_UNITY_;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

