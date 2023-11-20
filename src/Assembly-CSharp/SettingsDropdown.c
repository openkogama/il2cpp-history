
/* Void Initialize(String, Int32, String[], List`1[System.Int32]) */

void Assembly-CSharp.dll::SettingsDropdown::SettingsDropdown_Initialize
               (SettingsDropdown *this,String *key,int32_t value,String__Array *options,
               List_1_System_Int32_ *possibleWOData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__IndexOf_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>
                   );
    func_?(&TypeInfo__UnityEngine__UI__Dropdown__OptionData);
    func_?(&MethodInfo__SettingsDropdown__ValueChanged_int_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                   );
    cRam_? = '\x01';
  }
  (this->fields).key = key;
  func_?(&(this->fields).key,key);
  (this->fields).possibleWOData = possibleWOData;
  func_?(&(this->fields).possibleWOData,possibleWOData);
  value_00 = (List_1_UnityEngine_UI_Dropdown_OptionData_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>
                            );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)value_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__List__
            );
  uVar1 = 0;
  if (options != (String__Array *)0x0) {
    ppSVar2 = options->vector;
    for (; (int)uVar1 < (int)options->max_length; uVar1 = uVar1 + 1) {
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__UnityEngine__UI__Dropdown__OptionData);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      if (options->max_length <= uVar1) goto code_?;
      if (this_01 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)
      goto code_?;
      pLVar3 = (List_1_System_Object_ *)*ppSVar2;
      (this_01->fields)._._defaultValue_k__BackingField = pLVar3;
      func_?(&this_01->fields,pLVar3);
      if (value_00 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)value_00,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
                );
      ppSVar2 = ppSVar2 + 1;
    }
    pDVar4 = (this->fields).dropdown;
    if (pDVar4 != (Dropdown *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_set_options
                (pDVar4,value_00,(MethodInfo *)0x0);
      if (possibleWOData != (List_1_System_Int32_ *)0x0) {
        value_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                   List_1_System_Int32__IndexOf
                             (possibleWOData,value,
                              MethodInfo__System__Collections__Generic__List<int>__IndexOf_int_);
        pDVar4 = (this->fields).dropdown;
        if (pDVar4 != (Dropdown *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_set_value
                    (pDVar4,value_01,(MethodInfo *)0x0);
          pDVar4 = (this->fields).dropdown;
          if (pDVar4 != (Dropdown *)0x0) {
            this_00 = (UnityEvent_1_UnityEngine_Vector2_ *)(pDVar4->fields).m_OnValueChanged;
            this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_02,(Object *)this,MethodInfo__SettingsDropdown__ValueChanged_int_,
                       (MethodInfo *)0x0);
            if (this_00 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
              UnityEvent_1_UnityEngine_Vector2__AddListener
                        (this_00,(UnityAction_1_UnityEngine_Vector2_ *)this_02,
                         MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsDropdown::SettingsDropdown_Reset
               (SettingsDropdown *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Dropdown_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Dropdown>__
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dropdown *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Dropdown_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Dropdown>__
                     );
  (this->fields).dropdown = pDVar1;
  func_?(&(this->fields).dropdown,pDVar1);
  return;
}


/* Void ValueChanged(Int32) */

void Assembly-CSharp.dll::SettingsDropdown::SettingsDropdown_ValueChanged
               (SettingsDropdown *this,int32_t value,MethodInfo *method)

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
                    MethodInfo__SettingsDropdown____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsDropdown____c__DisplayClass4_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsDropdown____c__DisplayClass4_0;
  value_00 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value_00 != (Object *)0x0) {
    value_00[1].klass = (Object__Class *)this;
    func_?(value_00 + 1,this);
    value_00[1].monitor = (MonitorData *)value;
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
               MethodInfo__SettingsDropdown____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
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

