
/* Void SendMessage(String) */

void Assembly-CSharp.dll::SentryTest::SentryTest_SendMessage
               (SentryTest *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                   );
    func_?(&TypeInfo__Sentry__SentryEvent);
    func_?(&StringLiteral_Extra_value);
    func_?(&StringLiteral_debug);
    func_?(&StringLiteral_Event_message);
    func_?(&StringLiteral_this_is_a_message2);
    func_?(&StringLiteral_Extra_key);
    func_?(&StringLiteral_Tag_key);
    func_?(&StringLiteral_Tag_value);
    func_?(&StringLiteral_assert);
    func_?(&StringLiteral_exception);
    func_?(&StringLiteral_message);
    func_?(&StringLiteral_event);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (message,StringLiteral_exception,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2 = func_?();
    this_01 = (DivideByZeroException *)func_?(uVar2);
    mscorlib.dll::System::DivideByZeroException::DivideByZeroException__ctor
              (this_01,(MethodInfo *)0x0);
    func_?(&MethodInfo__SentryTest__SendMessage_System__String_);
    func_?();
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (message,StringLiteral_assert,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (message,StringLiteral_message,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                );
      if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)StringLiteral_Extra_key,(Object *)StringLiteral_Extra_value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                  );
        pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                  );
        if (pDVar5 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar5,
                     (Object *)StringLiteral_Tag_key,(Object *)StringLiteral_Tag_value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                    );
          SentrySdk::SentrySdk_CaptureMessage
                    (StringLiteral_this_is_a_message2,
                     (Dictionary_2_System_String_System_Object_ *)pDVar4,
                     (Dictionary_2_System_String_System_String_ *)pDVar5,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (message,StringLiteral_event,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                );
      pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (pDVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                );
      this_00 = (SentryEvent *)func_?();
      Sentry::SentryEvent::SentryEvent__ctor
                (this_00,StringLiteral_Event_message,
                 (Dictionary_2_System_String_System_String_ *)pDVar4,
                 (Dictionary_2_System_String_System_Object_ *)pDVar5,
                 (List_1_Sentry_Breadcrumb_ *)0x0,(MethodInfo *)0x0);
      if (this_00 == (SentryEvent *)0x0) goto code_?;
      (this_00->fields).level = StringLiteral_debug;
      func_?();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pSVar6 = TypeInfo__SentrySdk->static_fields->_instance;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pSVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pSVar6 = TypeInfo__SentrySdk->static_fields->_instance;
        if (pSVar6 == (SentrySdk *)0x0) goto code_?;
        SentrySdk::SentrySdk_DoCaptureEvent(pSVar6,this_00,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SentryTest::SentryTest_Update(SentryTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                   );
    func_?(&StringLiteral_Extra_value);
    func_?(&StringLiteral_Extra_key);
    func_?(&StringLiteral_this_is_a_message_2);
    func_?(&StringLiteral_Tag_key);
    func_?(&StringLiteral_Tag_value);
    func_?(&StringLiteral_Frame_number__);
    cRam_? = '\x01';
  }
  piVar1 = &(this->fields)._counter;
  *piVar1 = *piVar1 + 1;
  if ((this->fields)._counter % 100 == 0) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields)._counter,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Frame_number__,pSVar2,(MethodInfo *)0x0);
    SentrySdk::SentrySdk_AddBreadcrumb(pSVar2,(MethodInfo *)0x0);
  }
  if ((this->fields).SendMessageToSentry == 0) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_Extra_key,(Object *)StringLiteral_Extra_value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_Tag_key,(Object *)StringLiteral_Tag_value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                );
      SentrySdk::SentrySdk_CaptureMessage
                (StringLiteral_this_is_a_message_2,
                 (Dictionary_2_System_String_System_Object_ *)this_00,
                 (Dictionary_2_System_String_System_String_ *)this_01,(MethodInfo *)0x0);
      (this->fields).SendMessageToSentry = 0;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

