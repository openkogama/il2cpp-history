
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
  pMVar1 = this;
  value = 0.0;
  pIVar2 = (this->fields).inputField;
  if (pIVar2 != (InputField *)0x0) {
    pSVar3 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar2,(MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_TryParse_1
              (pSVar3,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
    MouseSensitivitySettings_RoundValue(this,value,(MethodInfo *)0x0);
    pIVar2 = (this->fields).inputField;
    puVar4 = &UNK_?;
    pSVar3 = (String *)func_?();
    if (pIVar2 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar2,pSVar3,(MethodInfo *)0x0);
      pSVar5 = (this->fields).slider;
      if (pSVar5 != (Slider *)0x0) {
        (*(code *)(pSVar5->klass->vtable).set_value.method)
                  (pSVar5,puVar4,(pSVar5->klass->vtable).Rebuild_1.methodPtr);
        pMVar6 = _UNK_?;
        if ((float)puVar4 != _UNK_?) {
          if ((float)puVar4 < _UNK_?) {
            pMVar6 = (MouseSensitivitySettings *)
                     ((float)_UNK_? /
                     (((float)_UNK_? - (float)puVar4 / _UNK_?) *
                      ((this->fields).mouseSensitivityMinModifier - (float)_UNK_?) +
                     (float)_UNK_?));
          }
          else {
            pMVar6 = (MouseSensitivitySettings *)
                     ((((float)puVar4 - _UNK_?) / _UNK_?) *
                      ((this->fields).mouseSensitivityMaxModifier - (float)_UNK_?) +
                     (float)_UNK_?);
          }
        }
        bVar7 = cRam_? == '\0';
        (this->fields).mouseSensitivity = (float)pMVar6;
        if (bVar7) {
          func_?(_UNK_?);
          cRam_? = '\x01';
          pMVar6 = (MouseSensitivitySettings *)(this->fields).mouseSensitivity;
        }
        this = pMVar6;
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVInputWrapper);
        }
        MVInputWrapper::MVInputWrapper_set_MouseSensitivityModifier((float)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetMouseSensitivity
                    (this_00,(pMVar1->fields).mouseSensitivity,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Single RoundValue(Single) */

float Assembly-CSharp.dll::MouseSensitivitySettings::MouseSensitivitySettings_RoundValue
                (MouseSensitivitySettings *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).interval;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = value / fVar1;
  fVar2 = (float10)func_?((double)fVar1,&stack0xfffffff4);
  if (fVar1 < _UNK_?) {
    if ((double)fVar2 == _UNK_?) {
      func_?();
    }
    else {
      func_?((double)(fVar1 - _UNK_?));
    }
  }
  else if ((double)fVar2 == _UNK_?) {
    func_?();
  }
  else {
    func_?((double)(fVar1 + _UNK_?));
  }
  pSVar3 = (this->fields).slider;
  if (pSVar3 != (Slider *)0x0) {
    fVar1 = ThemeSkybox::ThemeSkybox_get_MoonLightIntensity((ThemeSkybox *)pSVar3,(MethodInfo *)0x0)
    ;
    pSVar3 = (this->fields).slider;
    if (pSVar3 != (Slider *)0x0) {
      max = ThemeSkybox::ThemeSkybox_get_CloudsHeight((ThemeSkybox *)pSVar3,(MethodInfo *)0x0);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                        (0.0,fVar1,max,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  fVar2 = (float10)(*pcVar4)();
  return (float)fVar2;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::MouseSensitivitySettings::MouseSensitivitySettings_SliderValueChanged
               (MouseSensitivitySettings *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  pSVar2 = (this->fields).slider;
  if (pSVar2 != (Slider *)0x0) {
    fVar3 = (float10)(*(code *)(pSVar2->klass->vtable).get_value.method)
                               (pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
    fStack_1 = (float)fVar3;
    fStack_1 = MouseSensitivitySettings_RoundValue(this,fStack_1,(MethodInfo *)0x0);
    this_00 = (this->fields).inputField;
    value = (String *)func_?(&fStack_1,0);
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value,(MethodInfo *)0x0);
      if (fStack_1 == _UNK_?) {
        (this->fields).mouseSensitivity = _UNK_?;
        return;
      }
      if (_UNK_? <= fStack_1) {
        (this->fields).mouseSensitivity =
             ((fStack_1 - _UNK_?) / _UNK_?) *
             ((this->fields).mouseSensitivityMaxModifier - _UNK_?) + _UNK_?;
        return;
      }
      (this->fields).mouseSensitivity =
           _UNK_? /
           ((_UNK_? - fStack_1 / _UNK_?) *
            ((this->fields).mouseSensitivityMinModifier - _UNK_?) + _UNK_?);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MouseSensitivitySettings::MouseSensitivitySettings_Start
               (MouseSensitivitySettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar1 = MVInputWrapper::MVInputWrapper_get_MouseSensitivityModifier((MethodInfo *)0x0);
  fVar2 = _UNK_?;
  bVar3 = fVar1 != _UNK_?;
  (this->fields).mouseSensitivity = fVar1;
  value = _UNK_?;
  if (bVar3) {
    if (fVar1 < fVar2) {
      value = (fVar2 - (fVar2 / fVar1 - fVar2) /
                       ((this->fields).mouseSensitivityMinModifier - fVar2)) * _UNK_?;
    }
    else {
      value = ((fVar1 - fVar2) / ((this->fields).mouseSensitivityMaxModifier - fVar2)) *
              _UNK_? + _UNK_?;
    }
  }
  MouseSensitivitySettings_RoundValue(this,value,(MethodInfo *)0x0);
  this_00 = (this->fields).inputField;
  pSStack4 = (String *)func_?(&stack0xfffffff8,0);
  if (this_00 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (this_00,pSStack4,(MethodInfo *)0x0);
    pSVar5 = (this->fields).slider;
    if (pSVar5 != (Slider *)0x0) {
      pSVar6 = pSVar5->klass;
      pIStack7 = (pSVar6->vtable).Rebuild_1.methodPtr;
      (*(code *)(pSVar6->vtable).set_value.method)();
      return;
    }
  }
  pIStack7 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SyncMouseSensitivity() */

void Assembly-CSharp.dll::MouseSensitivitySettings::MouseSensitivitySettings_SyncMouseSensitivity
               (MouseSensitivitySettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).mouseSensitivity;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_set_MouseSensitivityModifier(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetMouseSensitivity
              (this_00,(this->fields).mouseSensitivity,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

