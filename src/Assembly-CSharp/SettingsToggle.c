
/* Void Initialize(String, Boolean) */

void Assembly-CSharp.dll::SettingsToggle::SettingsToggle_Initialize
               (SettingsToggle *this,String *key,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).key = key;
  pTVar1 = (this->fields).toggle;
  if (pTVar1 != (Toggle *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (this->fields).toggle;
    if (pTVar1 != (Toggle *)0x0) {
      this_00 = (UnityEvent_1_System_String_ *)(pTVar1->fields).onValueChanged;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,MethodInfo__SettingsToggle__ValueChanged_bool_,
                 MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
                );
      if (this_00 != (UnityEvent_1_System_String_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::String]::
        UnityEvent_1_System_String__AddListener
                  (this_00,(UnityAction_1_System_String_ *)this_01,
                   MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsSet() */

bool Assembly-CSharp.dll::SettingsToggle::SettingsToggle_IsSet
               (SettingsToggle *this,MethodInfo *method)

{
  pTVar1 = (this->fields).toggle;
  if (pTVar1 != (Toggle *)0x0) {
    return (pTVar1->fields).m_IsOn;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void ValueChanged(Boolean) */

void Assembly-CSharp.dll::SettingsToggle::SettingsToggle_ValueChanged
               (SettingsToggle *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsToggle___ValueChanged_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    *(bool *)&(this_00->fields)._._._._.m_CachedPtr = value;
    (this_00->fields).state = (int32_t)this;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__SettingsToggle___ValueChanged_c__AnonStorey0____m__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

