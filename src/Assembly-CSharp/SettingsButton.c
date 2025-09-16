
/* Void Initialize(String, Int32, MVTeam, Boolean) */

void Assembly-CSharp.dll::SettingsButton::SettingsButton_Initialize
               (SettingsButton *this,String *key,int32_t value,MVTeam__Enum team,bool hasTeam,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ColorStyleObject_MethodInfo__UnityEngine__Component__GetComponentInChildren<ColorStyleObject>__
                   );
    func_?(&MethodInfo__SettingsButton__ValueChanged__);
    func_?(&TypeInfo__Styles);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)pBVar1,hasTeam,(MethodInfo *)0x0);
    this_01 = (ColorStyleObject *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                        ((Component *)this,
                         ColorStyleObject_MethodInfo__UnityEngine__Component__GetComponentInChildren<ColorStyleObject>__
                        );
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    colorStyle = Styles::Styles_GetTeamColorStyle(team,hasTeam ^ 1,1,(MethodInfo *)0x0);
    if (this_01 != (ColorStyleObject *)0x0) {
      ColorStyleObject::ColorStyleObject_UpdateColorStyle(this_01,colorStyle,(MethodInfo *)0x0);
      (this->fields).key = (String *)this_01;
      func_?();
      pBVar1 = (this->fields).button;
      (this->fields).value = (int32_t)&(this->fields).key;
      if (pBVar1 != (Button *)0x0) {
        this_00 = (UnityEvent *)(pBVar1->fields).m_OnClick;
        this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__SettingsButton__ValueChanged__,
                   (MethodInfo *)0x0);
        if (this_00 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ValueChanged() */

void Assembly-CSharp.dll::SettingsButton::SettingsButton_ValueChanged
               (SettingsButton *this,MethodInfo *method)

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
                    MethodInfo__SettingsButton___ValueChanged_b__4_0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__SettingsButton___ValueChanged_b__4_0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
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


/* Void <ValueChanged>b__4_0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsButton::SettingsButton__ValueChanged_b__4_0
               (SettingsButton *this,IHandleSettingChanged *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).key;
  this = (SettingsButton *)(this->fields).value;
  uVar2 = func_?(TypeInfo__System__Int32,&this);
  if (handler != (IHandleSettingChanged *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,pSVar1,
                    uVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

