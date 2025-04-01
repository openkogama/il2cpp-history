
/* Void Initialize(String, Boolean) */

void Assembly-CSharp.dll::SettingsToggle::SettingsToggle_Initialize
               (SettingsToggle *this,String *key,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__SettingsToggle__ValueChanged_bool_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                   );
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).key;
  *ppSVar1 = key;
  func_?(ppSVar1,key);
  pTVar2 = (this->fields).toggle;
  if (pTVar2 != (Toggle *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn(pTVar2,value,(MethodInfo *)0x0);
    pTVar2 = (this->fields).toggle;
    if (pTVar2 != (Toggle *)0x0) {
      this_00 = (UnityEvent_1_UnityEngine_Vector2_ *)(pTVar2->fields).onValueChanged;
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,MethodInfo__SettingsToggle__ValueChanged_bool_,
                 (MethodInfo *)0x0);
      if (this_00 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
        UnityEvent_1_UnityEngine_Vector2__AddListener
                  (this_00,(UnityAction_1_UnityEngine_Vector2_ *)this_01,
                   MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsSet() */

bool Assembly-CSharp.dll::SettingsToggle::SettingsToggle_IsSet
               (SettingsToggle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pTVar2 = (this->fields).toggle;
  if (pTVar2 != (Toggle *)0x0) {
    return (pTVar2->fields).m_IsOn;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void ValueChanged(Boolean) */

void Assembly-CSharp.dll::SettingsToggle::SettingsToggle_ValueChanged
               (SettingsToggle *this,bool value,MethodInfo *method)

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
                    MethodInfo__SettingsToggle____c__DisplayClass3_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsToggle____c__DisplayClass3_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsToggle____c__DisplayClass3_0;
  value_00 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value_00 != (Object *)0x0) {
    value_00[1].klass = (Object__Class *)this;
    func_?(value_00 + 1,this);
    *(bool *)&value_00[1].monitor = value;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value_00,
               MethodInfo__SettingsToggle____c__DisplayClass3_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

