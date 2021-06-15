
/* Void ExternalCall(String, Object[]) */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
               (String *functionName,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    BrowserComm_ToJavaScript_ToNameSpace(functionName,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this = (MethodInfo *)func_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2
              ((StringBuilder *)this,(MethodInfo *)0x0);
    if (this != (MethodInfo *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                ((StringBuilder *)this,(String *)0x0,(MethodInfo *)0x0);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                ((StringBuilder *)this,0x28,(MethodInfo *)0x0);
      if (in_stack_1 != 0) {
        method = *(MethodInfo **)(in_stack_1 + 0xc);
        iVar2 = 0;
        if (0 < (int)method) {
          do {
            if (iVar2 != 0) {
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                        ((StringBuilder *)this,::StringLiteral___,(MethodInfo *)0x0);
              method = this;
            }
            pOVar3 = (Object *)func_?();
            value = JSBridge::JSBridge_ObjectToJSString(pOVar3,(MethodInfo *)0x0);
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                      ((StringBuilder *)this,value,(MethodInfo *)0x0);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)method);
        }
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  ((StringBuilder *)this,0x29,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  ((StringBuilder *)this,0x3b,(MethodInfo *)0x0);
        pOVar3 = (Object *)
                 (*(code *)(((StringBuilder__Class *)this->methodPointer)->vtable).ToString.method)
                           ();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar3,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Attempting_to_use_js_eval_in_non,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void ExternalCall(String, Action`2[Boolean,String]) */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
               (String *functionName,Action_2_Boolean_String_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
    return;
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  this = TypeInfo__BrowserComm->static_fields->callbacks;
  if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
  method_00 = TypeInfo__BrowserComm__Callback;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields)._._._._.m_CachedPtr = callback;
  if (this == (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this,key,(Object *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
              );
    this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    puStack_1 = (undefined *)TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    value = (CrossPlatformInputManager_VirtualButton *)
            func_?(TypeInfo__System__Int32,&puStack_1);
    if (this_01 ==
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
         *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_01,StringLiteral_callbackId,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar2 = Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                       ((Object *)this_01,(MethodInfo *)0x0);
    functionName_00 = BrowserComm_ToJavaScript_ToNameSpace(functionName,(MethodInfo *)0x0);
    args = (Object__Array *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pSVar2 == (String *)0x0) ||
       (iVar3 = func_?(pSVar2,(args->klass->_0).element_class), iVar3 != 0)) {
      if (args->max_length != 0) {
        args->vector[0] = (Object *)pSVar2;
        JSBridge::JSBridge_ExternalCall(functionName_00,args,(MethodInfo *)0x0);
        TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
             TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
        return;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void GetBrowserVersion() */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_GetBrowserVersion
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    args = (Object__Array *)func_?(TypeInfo__System__Object,0);
    JSBridge::JSBridge_ExternalCall(StringLiteral_get_browser_version,args,(MethodInfo *)0x0);
  }
  return;
}


/* String ToNameSpace(String) */

String * Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                   (String *functionName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  pSVar1 = TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,functionName,(MethodInfo *)0x0);
  return pSVar1;
}


/* BrowserComm+ToJavaScript() */

void Assembly-CSharp.dll::BrowserComm+ToJavaScript::BrowserComm_ToJavaScript__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix = StringLiteral_UNITY_;
  return;
}

