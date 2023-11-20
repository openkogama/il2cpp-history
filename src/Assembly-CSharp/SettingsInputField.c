
/* Void Initialize(String, String) */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_Initialize
               (SettingsInputField *this,String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__SettingsInputField__ValueChanged_System__String_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                   );
    cRam_? = '\x01';
  }
  (this->fields).key = key;
  func_?(&(this->fields).key,key);
  pIVar1 = (this->fields).inputField;
  if (pIVar1 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (pIVar1,value,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inputField;
    if (pIVar1 != (InputField *)0x0) {
      this_00 = (UnityEvent_1_UnityEngine_Vector2_ *)(pIVar1->fields).m_OnValueChanged;
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,MethodInfo__SettingsInputField__ValueChanged_System__String_
                 ,(MethodInfo *)0x0);
      if (this_00 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
        UnityEvent_1_UnityEngine_Vector2__AddListener
                  (this_00,(UnityAction_1_UnityEngine_Vector2_ *)this_01,
                   MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                  );
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

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_Reset
               (SettingsInputField *this,MethodInfo *method)

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
  func_?(&(this->fields).inputField,pIVar1);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_Update
               (SettingsInputField *this,MethodInfo *method)

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

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_ValueChanged
               (SettingsInputField *this,String *value,MethodInfo *method)

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
                    MethodInfo__SettingsInputField____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsInputField____c__DisplayClass4_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsInputField____c__DisplayClass4_0;
  value_00 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value_00 != (Object *)0x0) {
    value_00[1].klass = (Object__Class *)this;
    func_?(value_00 + 1,this);
    value_00[1].monitor = (MonitorData *)value;
    func_?(&value_00[1].monitor,value);
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
               MethodInfo__SettingsInputField____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
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

