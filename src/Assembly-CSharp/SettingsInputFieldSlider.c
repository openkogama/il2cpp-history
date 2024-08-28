
/* String ConvertFloatToString(Single) */

String * Assembly-CSharp.dll::SettingsInputFieldSlider::
         SettingsInputFieldSlider_ConvertFloatToString(float inputFieldValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Single::Single_ToString_1
                     ((Single *)&inputFieldValue,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* Single ConvertStringToFloat(String) */

float Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertStringToFloat
                (SettingsInputFieldSlider *this,String *inputFieldText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (inputFieldText != (String *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_Contains
                      (inputFieldText,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      inputFieldText =
           mscorlib.dll::System::String::String_Replace_1
                     (inputFieldText,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar2 = mscorlib.dll::System::Convert::Convert_ToSingle_13
                      (inputFieldText,(IFormatProvider *)provider,(MethodInfo *)0x0);
    return fVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single GetInputFieldValue(Single) */

float Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                (SettingsInputFieldSlider *this,float value,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsSlider;
  if ((this->fields).round == 0) {
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
  }
  else {
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
    fVar2 = (float10)func_?(value / (pSVar1->fields).interval);
    pSVar1 = (this->fields).settingsSlider;
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
    value = (pSVar1->fields).interval * (float)fVar2;
  }
  pSVar3 = (pSVar1->fields).slider;
  if ((pSVar3 != (Slider *)0x0) && (pSVar1 != (SettingsSlider *)0x0)) {
    pSVar4 = (SettingsInputFieldSlider *)(pSVar3->fields).m_MinValue;
    if ((value < (float)pSVar4) ||
       (pSVar4 = (SettingsInputFieldSlider *)(((pSVar1->fields).slider)->fields).m_MaxValue,
       this = (SettingsInputFieldSlider *)value, (float)pSVar4 < value)) {
      this = pSVar4;
    }
    return (float)this;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar2 = (float10)(*pcVar5)();
  return (float)fVar2;
}


/* Void Initialize(String, Single) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
               (SettingsInputFieldSlider *this,String *key,float value,MethodInfo *method)

{
  pSVar1 = this;
  ppSVar2 = &(this->fields).key;
  *ppSVar2 = key;
  func_?(ppSVar2,key);
  pSVar3 = (pSVar1->fields).settingsSlider;
  if ((pSVar1->fields).round == 0) {
    pSVar4 = (SettingsInputFieldSlider *)value;
    if (pSVar3 == (SettingsSlider *)0x0) goto code_?;
  }
  else {
    if (pSVar3 == (SettingsSlider *)0x0) goto code_?;
    fVar5 = (float10)func_?(value / (pSVar3->fields).interval);
    pSVar3 = (pSVar1->fields).settingsSlider;
    this = (SettingsInputFieldSlider *)(float)fVar5;
    if (pSVar3 == (SettingsSlider *)0x0) goto code_?;
    pSVar4 = (SettingsInputFieldSlider *)((pSVar3->fields).interval * (float)this);
  }
  pSVar6 = (pSVar3->fields).slider;
  if ((pSVar6 != (Slider *)0x0) && (pSVar3 != (SettingsSlider *)0x0)) {
    pSVar7 = (SettingsInputFieldSlider *)(pSVar6->fields).m_MinValue;
    if (((float)pSVar4 < (float)pSVar7) ||
       (pSVar7 = (SettingsInputFieldSlider *)(((pSVar3->fields).slider)->fields).m_MaxValue,
       (float)pSVar7 < (float)pSVar4)) {
      pSVar4 = pSVar7;
    }
    this = pSVar4;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Globalization__CultureInfo);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    value_00 = mscorlib.dll::System::Single::Single_ToString_1
                         ((Single *)&this,(IFormatProvider *)provider,(MethodInfo *)0x0);
    this_00 = (pSVar1->fields).inputField;
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(String, Int32) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
               (SettingsInputFieldSlider *this,String *key,int32_t value,MethodInfo *method)

{
  pSVar1 = this;
  ppSVar2 = &(this->fields).key;
  *ppSVar2 = key;
  func_?(ppSVar2,key);
  pSVar3 = (pSVar1->fields).settingsSlider;
  pSVar4 = (SettingsInputFieldSlider *)(float)value;
  if ((pSVar1->fields).round == 0) {
    if (pSVar3 == (SettingsSlider *)0x0) goto code_?;
  }
  else {
    if (pSVar3 == (SettingsSlider *)0x0) goto code_?;
    fVar5 = (float10)func_?((float)pSVar4 / (pSVar3->fields).interval);
    pSVar3 = (pSVar1->fields).settingsSlider;
    this = (SettingsInputFieldSlider *)(float)fVar5;
    if (pSVar3 == (SettingsSlider *)0x0) goto code_?;
    pSVar4 = (SettingsInputFieldSlider *)((pSVar3->fields).interval * (float)this);
  }
  pSVar6 = (pSVar3->fields).slider;
  if ((pSVar6 != (Slider *)0x0) && (pSVar3 != (SettingsSlider *)0x0)) {
    pSVar7 = (SettingsInputFieldSlider *)(pSVar6->fields).m_MinValue;
    if (((float)pSVar4 < (float)pSVar7) ||
       (pSVar7 = (SettingsInputFieldSlider *)(((pSVar3->fields).slider)->fields).m_MaxValue,
       this = pSVar4, (float)pSVar7 < (float)pSVar4)) {
      this = pSVar7;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Globalization__CultureInfo);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    value_00 = mscorlib.dll::System::Single::Single_ToString_1
                         ((Single *)&this,(IFormatProvider *)provider,(MethodInfo *)0x0);
    this_00 = (pSVar1->fields).inputField;
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InputFieldValueChanged() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_InputFieldValueChanged
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  pSVar1 = (SettingsInputFieldSlider *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields).inputField;
  if ((pIVar2 == (InputField *)0x0) || (pSVar3 = (pIVar2->fields).m_Text, pSVar3 == (String *)0x0))
  goto code_?;
  bVar4 = mscorlib.dll::System::String::String_EndsWith(pSVar3,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    bVar4 = mscorlib.dll::System::String::String_EndsWith
                      (pSVar3,::StringLiteral__,(MethodInfo *)0x0);
    if ((bVar4 == 0) && ((pSVar3->fields)._stringLength != 0)) {
      fVar5 = SettingsInputFieldSlider_ConvertStringToFloat(this,pSVar3,(MethodInfo *)0x0);
      if ((uint)ABS(fVar5) < 0x7f800001) {
        pSVar1 = this;
        fVar5 = SettingsInputFieldSlider_GetInputFieldValue(this,fVar5,(MethodInfo *)0x0);
        pSVar3 = SettingsInputFieldSlider_ConvertFloatToString(fVar5,(MethodInfo *)0x0);
        pIVar2 = (this->fields).inputField;
        if (pIVar2 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar2,pSVar3,(MethodInfo *)0x0);
          pIVar2 = (this->fields).inputField;
          if (pIVar2 != (InputField *)0x0) {
            SettingsInputFieldSlider_ValueChanged(this,(pIVar2->fields).m_Text,(MethodInfo *)0x0);
            goto code_?;
          }
        }
code_?:
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
code_?:
  *unaff_FS_OFFSET = pSVar1;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Reset
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (InputField *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                     );
  (this->fields).inputField = pIVar1;
  func_?();
  return;
}


/* Void SetText(String) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
               (SettingsInputFieldSlider *this,String *text,MethodInfo *method)

{
  this_00 = (this->fields).inputField;
  if (this_00 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_contentType
              (this_00,InputField_ContentType__Enum_Standard,(MethodInfo *)0x0);
    if ((this->fields).inputField != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                (in_stack_1,in_stack_2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_SliderValueChanged
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  this_00 = this;
  pSVar1 = (this->fields).settingsSlider;
  if ((pSVar1 == (SettingsSlider *)0x0) ||
     (pSVar2 = (pSVar1->fields).slider, pSVar2 == (Slider *)0x0)) goto code_?;
  this = (SettingsInputFieldSlider *)(pSVar2->klass->vtable).get_value.method;
  fVar3 = (float10)(*(code *)this)(pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
  pSVar1 = (this_00->fields).settingsSlider;
  pSVar4 = (SettingsInputFieldSlider *)(float)fVar3;
  this = pSVar4;
  if ((this_00->fields).round == 0) {
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
  }
  else {
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
    fVar3 = (float10)func_?((float)pSVar4 / (pSVar1->fields).interval);
    pSVar1 = (this_00->fields).settingsSlider;
    this = (SettingsInputFieldSlider *)(float)fVar3;
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
    pSVar4 = (SettingsInputFieldSlider *)((pSVar1->fields).interval * (float)this);
  }
  pSVar2 = (pSVar1->fields).slider;
  if ((pSVar2 != (Slider *)0x0) && (pSVar1 != (SettingsSlider *)0x0)) {
    pSVar5 = (SettingsInputFieldSlider *)(pSVar2->fields).m_MinValue;
    if (((float)pSVar4 < (float)pSVar5) ||
       (pSVar5 = (SettingsInputFieldSlider *)(((pSVar1->fields).slider)->fields).m_MaxValue,
       (float)pSVar5 < (float)pSVar4)) {
      pSVar4 = pSVar5;
    }
    pIVar6 = (this_00->fields).inputField;
    this = pSVar4;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Globalization__CultureInfo);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    value = mscorlib.dll::System::Single::Single_ToString_1
                      ((Single *)&this,(IFormatProvider *)provider,(MethodInfo *)0x0);
    if (pIVar6 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar6,value,(MethodInfo *)0x0);
      pIVar6 = (this_00->fields).inputField;
      if (pIVar6 != (InputField *)0x0) {
        SettingsInputFieldSlider_ValueChanged(this_00,(pIVar6->fields).m_Text,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Update
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inputField;
  if (pIVar1 != (InputField *)0x0) {
    if ((pIVar1->fields).m_AllowInput != 0) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
    }
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ValueChanged(String) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_ValueChanged
               (SettingsInputFieldSlider *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__SettingsInputFieldSlider____c__DisplayClass16_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsInputFieldSlider____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsInputFieldSlider____c__DisplayClass16_0;
  value_00 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value_00 != (Object *)0x0) {
    value_00[1].klass = (Object__Class *)this;
    func_?(value_00 + 1,this);
    pMVar1 = (MonitorData *)
             SettingsInputFieldSlider_ConvertStringToFloat(this,value,(MethodInfo *)0x0);
    value_00[1].monitor = pMVar1;
    if ((value != (String *)0x0) &&
       (pIVar2 = (this->fields).inputField, pIVar2 != (InputField *)0x0)) {
      if ((pIVar2->fields).m_CharacterLimit < (value->fields)._stringLength) {
        value = mscorlib.dll::System::String::String_Remove_1
                          (value,(pIVar2->fields).m_CharacterLimit,(MethodInfo *)0x0);
      }
      pIVar2 = (this->fields).inputField;
      if (pIVar2 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar2,value,(MethodInfo *)0x0);
        pSVar3 = (this->fields).settingsSlider;
        if ((pSVar3 != (SettingsSlider *)0x0) &&
           (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
          (*(code *)(pSVar4->klass->vtable).set_value.method)
                    (pSVar4,value_00[1].monitor,
                     (pSVar4->klass->vtable).SetValueWithoutNotify.methodPtr);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value_00,
                     MethodInfo__SettingsInputFieldSlider____c__DisplayClass16_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SettingsInputFieldSlider() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider__ctor
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  (this->fields).round = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

