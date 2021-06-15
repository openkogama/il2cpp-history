
/* Void SendMessage(String) */

void Assembly-CSharp.dll::SentryTest::SentryTest_SendMessage
               (SentryTest *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (message,StringLiteral_exception,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_01 = (DivideByZeroException *)func_?();
    mscorlib.dll::System::DivideByZeroException::DivideByZeroException__ctor
              (this_01,(MethodInfo *)0x0);
    func_?();
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (message,StringLiteral_assert,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (message,StringLiteral_message,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pDVar3 = (Dictionary_2_System_String_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                );
      if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar3,StringLiteral_Extra_key,
                   (CrossPlatformInputManager_VirtualButton *)StringLiteral_Extra_value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                  );
        pDVar4 = (Dictionary_2_System_String_System_String_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                  );
        if (pDVar4 != (Dictionary_2_System_String_System_String_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar4,StringLiteral_Tag_key,
                     (CrossPlatformInputManager_VirtualButton *)StringLiteral_Tag_value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                    );
          if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
            func_?();
          }
          SentrySdk::SentrySdk_CaptureMessage
                    (StringLiteral_this_is_a_message2,pDVar3,pDVar4,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (message,StringLiteral_event,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pDVar4 = (Dictionary_2_System_String_System_String_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                );
      pDVar3 = (Dictionary_2_System_String_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                );
      this_00 = (SentryEvent *)func_?();
      Sentry::SentryEvent::SentryEvent__ctor
                (this_00,StringLiteral_Event_message,pDVar4,pDVar3,(List_1_Sentry_Breadcrumb_ *)0x0,
                 (MethodInfo *)0x0);
      if (this_00 == (SentryEvent *)0x0) goto code_?;
      (this_00->fields).level = StringLiteral_debug;
      if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar5 = TypeInfo__SentrySdk->static_fields->_instance;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pSVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar5 = TypeInfo__SentrySdk->static_fields->_instance;
        if (pSVar5 == (SentrySdk *)0x0) goto code_?;
        SentrySdk::SentrySdk_DoCaptureEvent(pSVar5,this_00,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SentryTest::SentryTest_Update(SentryTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  piVar2 = &(this->fields)._counter;
  *piVar2 = *piVar2 + 1;
  pSVar3 = (SentryTest *)(this->fields)._counter;
  if (pSVar3 == (SentryTest *)(((int)pSVar3 / 100) * 100)) {
    this = pSVar3;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Frame_number__,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
      func_?(TypeInfo__SentrySdk);
    }
    SentrySdk::SentrySdk_AddBreadcrumb(message,(MethodInfo *)0x0);
  }
  if ((pSVar1->fields).SendMessageToSentry == 0) {
    return;
  }
  extraSentryData =
       (Dictionary_2_System_String_System_Object_ *)
       func_?(
                      TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                      );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)extraSentryData,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  if (extraSentryData != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)extraSentryData,StringLiteral_Extra_key,
               (CrossPlatformInputManager_VirtualButton *)StringLiteral_Extra_value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    tags = (Dictionary_2_System_String_System_String_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                          );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)tags,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    if (tags != (Dictionary_2_System_String_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)tags,StringLiteral_Tag_key,
                 (CrossPlatformInputManager_VirtualButton *)StringLiteral_Tag_value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                );
      if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
        method = (MethodInfo *)TypeInfo__SentrySdk;
        this = (SentryTest *)&UNK_?;
        func_?();
      }
      method = (MethodInfo *)0x0;
      this = (SentryTest *)tags;
      SentrySdk::SentrySdk_CaptureMessage
                (StringLiteral_this_is_a_message_2,extraSentryData,tags,(MethodInfo *)0x0);
      (pSVar1->fields).SendMessageToSentry = 0;
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

