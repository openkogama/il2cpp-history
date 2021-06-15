
/* Void Initialize(String, String) */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_Initialize
               (SettingsInputField *this,String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).key = key;
  this_00 = (this->fields).inputField;
  if (this_00 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (this_00,value,(MethodInfo *)0x0);
    this_01 = (PrefabPool *)(this->fields).inputField;
    if (this_01 != (PrefabPool *)0x0) {
      this_02 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(this_01,(MethodInfo *)0x0);
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,(Object *)this,MethodInfo__SettingsInputField__ValueChanged_System__String_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<System::String>__UnityAction_System__Object__void__
                );
      if (this_02 != (MVTextMsgObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::String]::
        UnityEvent_1_System_String__AddListener
                  ((UnityEvent_1_System_String_ *)this_02,(UnityAction_1_System_String_ *)this_03,
                   MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_Reset
               (SettingsInputField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (InputField *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                     );
  (this->fields).inputField = pIVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_Update
               (SettingsInputField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inputField;
  if (this_00 != (InputField *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_isFocused
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ValueChanged(String) */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_ValueChanged
               (SettingsInputField *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsInputField___ValueChanged_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = value;
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
               MethodInfo__SettingsInputField___ValueChanged_c__AnonStorey0____m__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
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

