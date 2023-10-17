
/* Void ExternalCall(String, Object[]) */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
               (String *functionName,Object__Array *args,MethodInfo *method)

{
  iVar1 = (int)in_stack_2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_Would_have_sent_function__);
    func_?(&StringLiteral___to_JSBridge_with_args__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  str2 = StringLiteral___to_JSBridge_with_args__;
  pSVar3 = StringLiteral_Would_have_sent_function__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
    if (args == (Object__Array *)0x0) {
      str3 = (String *)0x0;
    }
    else {
      pOVar4 = args->klass;
      uVar5._0_2_ = pOVar4[1]._0.this_arg.attrs;
      uVar5._2_1_ = pOVar4[1]._0.this_arg.type;
      uVar5._3_1_ = pOVar4[1]._0.this_arg.field_0x7;
      str3 = (String *)(*(code *)pOVar4[1]._0.this_arg.data)(args,uVar5);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar3,functionName,str2,str3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  mscorlib.dll::System::String::String_Concat_3
            (TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix,functionName,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this,(String *)in_stack_6,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x28,(MethodInfo *)0x0);
    if (in_stack_2 != (String *)0x0) {
      uVar7 = 0;
      if (0 < (int)*(String **)((int)in_stack_2 + 0xc)) {
        in_stack_6 = (StringBuilder *)((int)in_stack_2 + 0x10);
        in_stack_2 = *(String **)((int)in_stack_2 + 0xc);
        do {
          if (uVar7 != 0) {
            in_stack_2 = ::StringLiteral___;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (this,::StringLiteral___,(MethodInfo *)0x0);
            in_stack_6 = this;
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar7) goto code_?;
          pSVar3 = JSBridge::JSBridge_ObjectToJSString
                             ((Object *)in_stack_6->klass,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,pSVar3,(MethodInfo *)0x0);
          uVar7 = uVar7 + 1;
          in_stack_6 = (StringBuilder *)&in_stack_6->monitor;
        } while ((int)uVar7 < (int)in_stack_2);
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x29,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x3b,(MethodInfo *)0x0)
      ;
      message = (Object *)(*(this->klass->vtable).ToString.methodPtr)();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Attempting_to_use_js_eval_in_non,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ExternalCall(String, Action`2[Boolean,String]) */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
               (String *functionName,Action_2_Boolean_String_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    func_?(&TypeInfo__BrowserComm__Callback);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_Would_have_sent_function__);
    func_?(&StringLiteral_callbackId);
    func_?(&StringLiteral___to_JSBridge_with_callback__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  pSVar1 = StringLiteral___to_JSBridge_with_callback__;
  pSVar2 = StringLiteral_Would_have_sent_function__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
    if (callback == (Action_2_Boolean_String_ *)0x0) {
      str3 = (String *)0x0;
    }
    else {
      str3 = (String *)
             (*(callback->klass->vtable).ToString.methodPtr)
                       (callback,(callback->klass->vtable).ToString.method);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar2,functionName,pSVar1,str3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
           TypeInfo__BrowserComm->static_fields->callbacks;
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  pOVar4 = (Object *)TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
  value = (Object *)func_?(TypeInfo__BrowserComm__Callback);
  if (value == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  value[1].klass = (Object__Class *)callback;
  func_?(value + 1,callback);
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (pDVar3,pOVar4,value,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
            );
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
            ((ParameterOverride_1_System_Object_ *)pDVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (pDVar3,(Object *)StringLiteral_callbackId,pOVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
            );
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar2 = Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                     ((Object *)pDVar3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    functionName = (String *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    functionName = (String *)&UNK_?;
    func_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix,functionName,
                      (MethodInfo *)0x0);
  args = (Object__Array *)func_?();
  if (args == (Object__Array *)0x0) goto code_?;
  if (pSVar2 == (String *)0x0) {
code_?:
    if (args->max_length != 0) {
      args->vector[0] = (Object *)pSVar2;
      func_?(args->vector,pSVar2);
      JSBridge::JSBridge_ExternalCall(pSVar1,args,(MethodInfo *)0x0);
      TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
           TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
      return;
    }
  }
  else {
    iVar5 = func_?(pSVar2,(args->klass->_0).element_class);
    if (iVar5 != 0) goto code_?;
    uVar6 = func_?(0);
    func_?(uVar6);
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void GetBrowserVersion() */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_GetBrowserVersion
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__BrowserComm);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Would_have_sent_function__get_br);
    func_?(&StringLiteral_get_browser_version);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  pMVar1 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Would_have_sent_function__get_br,(MethodInfo *)0x0);
    return;
  }
  iVar2 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                  field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
    iVar2 = func_?(iVar2);
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_?(iVar2);
  }
  iVar2 = *(int *)(pMVar1->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
    iVar2 = func_?(iVar2);
  }
  JSBridge::JSBridge_ExternalCall
            (StringLiteral_get_browser_version,(Object__Array *)**(undefined4 **)(iVar2 + 0x5c),
             (MethodInfo *)0x0);
  return;
}


/* String ToNameSpace(String) */

String * Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                   (String *functionName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix,functionName,
                      (MethodInfo *)0x0);
  return pSVar1;
}


/* BrowserComm+ToJavaScript() */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_UNITY_);
    cRam_? = '\x01';
  }
  TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter = 0;
  TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix = StringLiteral_UNITY_;
  func_?(&TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix,StringLiteral_UNITY_);
  return;
}

