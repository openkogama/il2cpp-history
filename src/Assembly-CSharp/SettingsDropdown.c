
/* Void Initialize(String, Int32, String[], List`1[System.Int32]) */

void Assembly-CSharp.dll::SettingsDropdown::SettingsDropdown_Initialize
               (SettingsDropdown *this,String *key,int32_t value,String__Array *options,
               List_1_System_Int32_ *possibleWOData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).key = key;
  (this->fields).possibleWOData = possibleWOData;
  key = (String *)
        func_?(
                       TypeInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>
                       );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)key,
             MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__List__
            );
  uVar1 = 0;
  if (options != (String__Array *)0x0) {
    ppSVar2 = options->vector;
    for (; (int)uVar1 < (int)options->max_length; uVar1 = uVar1 + 1) {
      key = (String *)func_?(TypeInfo__UnityEngine__UI__Dropdown__OptionData);
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)key,(MethodInfo *)0x0);
      if (options->max_length <= uVar1) goto code_?;
      if ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)key ==
          (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) goto code_?;
      value = (int32_t)*ppSVar2;
      this = (SettingsDropdown *)&UNK_?;
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[ColorTween]::
      TweenRunner_1_ColorTween__Init
                ((TweenRunner_1_ColorTween_ *)key,(MonoBehaviour *)value,(MethodInfo *)0x0);
      if ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)key ==
          (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) goto code_?;
      options = (String__Array *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)key,(UIPushOption__Enum)key,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
                );
      ppSVar2 = ppSVar2 + 1;
      possibleWOData = (List_1_System_Int32_ *)key;
    }
    pDVar3 = (this->fields).dropdown;
    if (pDVar3 != (Dropdown *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_set_options
                (pDVar3,(List_1_UnityEngine_UI_Dropdown_OptionData_ *)key,(MethodInfo *)0x0);
      if (possibleWOData != (List_1_System_Int32_ *)0x0) {
        item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__IndexOf_int_;
        item.rgba = value;
        value_00 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__IndexOf
                             ((List_1_UnityEngine_Color32_ *)possibleWOData,item,(MethodInfo *)key);
        pDVar3 = (this->fields).dropdown;
        if (pDVar3 != (Dropdown *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_set_value
                    (pDVar3,value_00,(MethodInfo *)0x0);
          pDVar3 = (this->fields).dropdown;
          if (pDVar3 != (Dropdown *)0x0) {
            this_00 = (UnityEvent_1_System_String_ *)
                      CloudyTheme::CloudyTheme_get_Identifier
                                ((CloudyTheme *)pDVar3,(MethodInfo *)0x0);
            this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_01,(Object *)&UNK_?,
                       MethodInfo__SettingsDropdown__ValueChanged_int_,
                       MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                      );
            if (this_00 != (UnityEvent_1_System_String_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::String]::
              UnityEvent_1_System_String__AddListener
                        (this_00,(UnityAction_1_System_String_ *)this_01,
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsDropdown::SettingsDropdown_Reset
               (SettingsDropdown *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dropdown *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__Dropdown_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Dropdown>__
                     );
  (this->fields).dropdown = pDVar1;
  return;
}


/* Void ValueChanged(Int32) */

void Assembly-CSharp.dll::SettingsDropdown::SettingsDropdown_ValueChanged
               (SettingsDropdown *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsDropdown___ValueChanged_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)value;
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
               MethodInfo__SettingsDropdown___ValueChanged_c__AnonStorey0____m__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
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

