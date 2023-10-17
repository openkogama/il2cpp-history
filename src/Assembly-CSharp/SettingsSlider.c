
/* Void Initialize(String, Single, Single, Single) */

void Assembly-CSharp.dll::SettingsSlider::SettingsSlider_Initialize
               (SettingsSlider *this,String *key,float value,float minValue,float maxValue,
               MethodInfo *method)

{
  (this->fields).key = key;
  func_?(&(this->fields).key,key);
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
              (pSVar1,maxValue,(MethodInfo *)0x0);
    pSVar1 = (this->fields).slider;
    if (pSVar1 != (Slider *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                (pSVar1,minValue,(MethodInfo *)0x0);
      pSVar1 = (this->fields).slider;
      if (pSVar1 != (Slider *)0x0) {
        (*(pSVar1->klass->vtable).set_value.methodPtr)();
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(String, Int32, Int32, Int32) */

void Assembly-CSharp.dll::SettingsSlider::SettingsSlider_Initialize_1
               (SettingsSlider *this,String *key,int32_t value,int32_t minValue,int32_t maxValue,
               MethodInfo *method)

{
  (this->fields).key = key;
  func_?(&(this->fields).key,key);
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
              (pSVar1,(float)maxValue,(MethodInfo *)0x0);
    pSVar1 = (this->fields).slider;
    if (pSVar1 != (Slider *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                (pSVar1,(float)minValue,(MethodInfo *)0x0);
      pSVar1 = (this->fields).slider;
      if (pSVar1 != (Slider *)0x0) {
        (*(pSVar1->klass->vtable).set_value.methodPtr)();
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsSlider::SettingsSlider_Reset
               (SettingsSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Slider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Slider>__
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (Slider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Slider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Slider>__
                     );
  (this->fields).slider = pSVar1;
  func_?(&(this->fields).slider,pSVar1);
  return;
}


/* Void ValueChanged() */

void Assembly-CSharp.dll::SettingsSlider::SettingsSlider_ValueChanged
               (SettingsSlider *this,MethodInfo *method)

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
                    MethodInfo__SettingsSlider____c__DisplayClass8_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsSlider____c__DisplayClass8_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__SettingsSlider____c__DisplayClass8_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    pSVar1 = (this->fields).slider;
    if (pSVar1 != (Slider *)0x0) {
      fVar2 = (float10)(*(pSVar1->klass->vtable).get_value.methodPtr)
                                 (pSVar1,(pSVar1->klass->vtable).get_value.method);
      value[1].monitor = (MonitorData *)(float)fVar2;
      if ((this->fields).round != 0) {
        pSVar1 = (this->fields).slider;
        if (pSVar1 == (Slider *)0x0) goto code_?;
        fVar2 = (float10)(*(pSVar1->klass->vtable).get_value.methodPtr)
                                   (pSVar1,(pSVar1->klass->vtable).get_value.method);
        fVar2 = (float10)func_?((float)fVar2 / (this->fields).interval);
        pMVar3 = (MonitorData *)((float)fVar2 * (this->fields).interval);
        value[1].monitor = pMVar3;
        pSVar1 = (this->fields).slider;
        if (pSVar1 == (Slider *)0x0) goto code_?;
        (*(pSVar1->klass->vtable).set_value.methodPtr)
                  (pSVar1,pMVar3,(pSVar1->klass->vtable).set_value.method);
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                          );
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__SettingsSlider____c__DisplayClass8_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SettingsSlider() */

void Assembly-CSharp.dll::SettingsSlider::SettingsSlider__ctor
               (SettingsSlider *this,MethodInfo *method)

{
  (this->fields).interval = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::SettingsSlider::SettingsSlider_get_Value
                (SettingsSlider *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pSStack_2 = (this->fields).slider;
  if (pSStack_2 != (Slider *)0x0) {
    pMStack_1 = (pSStack_2->klass->vtable).get_value.method;
    fVar3 = (float10)(*(pSStack_2->klass->vtable).get_value.methodPtr)();
    return (float)fVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar3 = (float10)(*pcVar6)();
  return (float)fVar3;
}

