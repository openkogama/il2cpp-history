
/* Void Initialize(String, Single, Single, Single) */

void Assembly-CSharp.dll::SettingsSlider::SettingsSlider_Initialize
               (SettingsSlider *this,String *key,float value,float minValue,float maxValue,
               MethodInfo *method)

{
  (this->fields).key = key;
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
        (*(code *)(pSVar1->klass->vtable).set_value.method)();
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
        (*(code *)(pSVar1->klass->vtable).set_value.method)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (Slider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__Slider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Slider>__
                     );
  (this->fields).slider = pSVar1;
  return;
}


/* Void ValueChanged() */

void Assembly-CSharp.dll::SettingsSlider::SettingsSlider_ValueChanged
               (SettingsSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsSlider___ValueChanged_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    pSVar1 = (this->fields).slider;
    if (pSVar1 != (Slider *)0x0) {
      fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                                 (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
      (this_00->fields)._._._._.m_CachedPtr = (void *)(float)fVar2;
      if ((this->fields).round == 0) {
code_?:
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__SettingsSlider___ValueChanged_c__AnonStorey0____m__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                  );
        return;
      }
      pSVar1 = (this->fields).slider;
      if (pSVar1 != (Slider *)0x0) {
        fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                                   (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
        fVar3 = (this->fields).interval;
        fVar4 = (float)fVar2;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar2 = (float10)func_?(fVar4 / fVar3);
        pvVar5 = (void *)((float)fVar2 * (this->fields).interval);
        (this_00->fields)._._._._.m_CachedPtr = pvVar5;
        pSVar1 = (this->fields).slider;
        if (pSVar1 != (Slider *)0x0) {
          (*(code *)(pSVar1->klass->vtable).set_value.method)
                    (pSVar1,pvVar5,(pSVar1->klass->vtable).Rebuild_1.methodPtr);
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SettingsSlider() */

void Assembly-CSharp.dll::SettingsSlider::SettingsSlider__ctor
               (SettingsSlider *this,MethodInfo *method)

{
  (this->fields).interval = 1.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::SettingsSlider::SettingsSlider_get_Value
                (SettingsSlider *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    return (float)fVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}

