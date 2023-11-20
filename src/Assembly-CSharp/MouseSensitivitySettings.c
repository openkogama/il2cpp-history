
/* Single CalculateMouseSensitivityValueFromValue(Single) */

float Assembly-CSharp.dll::MouseSensitivitySettings::
      MouseSensitivitySettings_CalculateMouseSensitivityValueFromValue
                (MouseSensitivitySettings *this,float value,MethodInfo *method)

{
  if (value == _UNK_?) {
    return 1.0;
  }
  if (_UNK_? <= value) {
    return ((value - _UNK_?) / _UNK_?) *
           ((this->fields).mouseSensitivityMaxModifier - _UNK_?) + _UNK_?;
  }
  return _UNK_? /
         ((_UNK_? - value / _UNK_?) *
          ((this->fields).mouseSensitivityMinModifier - _UNK_?) + _UNK_?);
}


/* Single CalculateSliderValueFromMouseSensitivityValue() */

float Assembly-CSharp.dll::MouseSensitivitySettings::
      MouseSensitivitySettings_CalculateSliderValueFromMouseSensitivityValue
                (MouseSensitivitySettings *this,MethodInfo *method)

{
  fVar1 = (this->fields).mouseSensitivity;
  if (fVar1 == _UNK_?) {
    return 50.0;
  }
  if (_UNK_? <= fVar1) {
    return ((fVar1 - _UNK_?) / ((this->fields).mouseSensitivityMaxModifier - _UNK_?))
           * _UNK_? + _UNK_?;
  }
  return (_UNK_? -
         (_UNK_? / fVar1 - _UNK_?) /
         ((this->fields).mouseSensitivityMinModifier - _UNK_?)) * _UNK_?;
}


/* Void InputFieldValueChanged() */

void Assembly-CSharp.dll::MouseSensitivitySettings::MouseSensitivitySettings_InputFieldValueChanged
               (MouseSensitivitySettings *this,MethodInfo *method)

{
  SVar1.m_value = 0.0;
  pIVar2 = (this->fields).inputField;
  if (pIVar2 != (InputField *)0x0) {
    mscorlib.dll::System::Single::Single_TryParse
              ((pIVar2->fields).m_Text,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
    SVar1.m_value = MouseSensitivitySettings_RoundValue(this,SVar1.m_value,(MethodInfo *)0x0);
    pIVar2 = (this->fields).inputField;
    value = mscorlib.dll::System::Single::Single_ToString
                      ((Single *)&stack0xfffffff8,(MethodInfo *)SVar1.m_value);
    if (pIVar2 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar2,value,(MethodInfo *)0x0);
      pSVar3 = (this->fields).slider;
      if (pSVar3 != (Slider *)0x0) {
        (*(code *)(pSVar3->klass->vtable).set_value.method)();
        fVar4 = _UNK_?;
        if (SVar1.m_value != _UNK_?) {
          if (SVar1.m_value < _UNK_?) {
            fVar4 = _UNK_? /
                    ((_UNK_? - SVar1.m_value / _UNK_?) *
                     ((this->fields).mouseSensitivityMinModifier - _UNK_?) + _UNK_?);
          }
          else {
            fVar4 = ((SVar1.m_value - _UNK_?) / _UNK_?) *
                    ((this->fields).mouseSensitivityMaxModifier - _UNK_?) + _UNK_?;
          }
        }
        bVar5 = cRam_? == '\0';
        (this->fields).mouseSensitivity = fVar4;
        if (bVar5) {
          func_?();
          cRam_? = '\x01';
        }
        fVar4 = (this->fields).mouseSensitivity;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = fVar4;
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetMouseSensitivity
                    (this_00,(this->fields).mouseSensitivity,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single RoundValue(Single) */

float Assembly-CSharp.dll::MouseSensitivitySettings::MouseSensitivitySettings_RoundValue
                (MouseSensitivitySettings *this,float value,MethodInfo *method)

{
  fVar1 = value / (this->fields).interval;
  if (fVar1 < _UNK_?) {
    fVar2 = (float10)func_?((double)fVar1,&dStack_3);
    if ((double)fVar2 == _UNK_?) {
      uVar4 = func_?();
      fVar1 = (float)dStack_3;
      if ((uVar4 & 1) != 0) {
        fVar1 = fVar1 - _UNK_?;
      }
      goto code_?;
    }
    fVar2 = (float10)func_?((double)(fVar1 - _UNK_?));
  }
  else {
    fVar2 = (float10)func_?((double)fVar1,&dStack_3);
    if ((double)fVar2 == _UNK_?) {
      uVar4 = func_?();
      fVar1 = (float)dStack_3;
      if ((uVar4 & 1) != 0) {
        fVar1 = fVar1 + _UNK_?;
      }
      goto code_?;
    }
    fVar2 = (float10)func_?((double)(fVar1 + _UNK_?));
  }
  fVar1 = (float)fVar2;
code_?:
  pSVar5 = (this->fields).slider;
  if (pSVar5 != (Slider *)0x0) {
    value = fVar1 * (this->fields).interval;
    fVar1 = (pSVar5->fields).m_MinValue;
    if ((value < fVar1) || (fVar1 = (pSVar5->fields).m_MaxValue, fVar1 < value)) {
      value = fVar1;
    }
    return value;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  fVar2 = (float10)(*pcVar6)();
  return (float)fVar2;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::MouseSensitivitySettings::MouseSensitivitySettings_SliderValueChanged
               (MouseSensitivitySettings *this,MethodInfo *method)

{
  this_01 = this;
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    this = (MouseSensitivitySettings *)(float)fVar2;
    this = (MouseSensitivitySettings *)
           MouseSensitivitySettings_RoundValue(this_01,(float)this,(MethodInfo *)0x0);
    this_00 = (this_01->fields).inputField;
    value = mscorlib.dll::System::Single::Single_ToString((Single *)&this,(MethodInfo *)0x0);
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value,(MethodInfo *)0x0);
      if ((float)this == _UNK_?) {
        (this_01->fields).mouseSensitivity = _UNK_?;
        return;
      }
      if (_UNK_? <= (float)this) {
        (this_01->fields).mouseSensitivity =
             (((float)this - _UNK_?) / _UNK_?) *
             ((this_01->fields).mouseSensitivityMaxModifier - _UNK_?) + _UNK_?;
        return;
      }
      (this_01->fields).mouseSensitivity =
           _UNK_? /
           ((_UNK_? - (float)this / _UNK_?) *
            ((this_01->fields).mouseSensitivityMinModifier - _UNK_?) + _UNK_?);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MouseSensitivitySettings::MouseSensitivitySettings_Start
               (MouseSensitivitySettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar1 = _UNK_?;
  fVar2 = TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier;
  bVar3 = fVar2 != _UNK_?;
  (this->fields).mouseSensitivity = fVar2;
  value_00 = _UNK_?;
  if (bVar3) {
    if (fVar2 < fVar1) {
      value_00 = (fVar1 - (fVar1 / fVar2 - fVar1) /
                          ((this->fields).mouseSensitivityMinModifier - fVar1)) * _UNK_?;
    }
    else {
      value_00 = ((fVar2 - fVar1) / ((this->fields).mouseSensitivityMaxModifier - fVar1)) *
                 _UNK_? + _UNK_?;
    }
  }
  MouseSensitivitySettings_RoundValue(this,value_00,(MethodInfo *)0x0);
  this_00 = (this->fields).inputField;
  value = mscorlib.dll::System::Single::Single_ToString
                    ((Single *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (this_00 != (InputField *)0x0) {
    SStack4.m_value = (float)this_00;
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (this_00,value,(MethodInfo *)0x0);
    pSStack5 = (this->fields).slider;
    if (pSStack5 != (Slider *)0x0) {
      pIStack6 = (pSStack5->klass->vtable).SetValueWithoutNotify.methodPtr;
      (*(code *)(pSStack5->klass->vtable).set_value.method)();
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SyncMouseSensitivity() */

void Assembly-CSharp.dll::MouseSensitivitySettings::MouseSensitivitySettings_SyncMouseSensitivity
               (MouseSensitivitySettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).mouseSensitivity;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = fVar1;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetMouseSensitivity
              (this_00,(this->fields).mouseSensitivity,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

