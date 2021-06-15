
/* Void Initialize(GamePassTier, Boolean, UnityAction`1[MV.Common.GamePassTier]) */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_Initialize
               (SpawnRoleTierSettings *this,GamePassTier__Enum currentTier,bool canSelectTier0,
               UnityAction_1_MV_Common_GamePassTier_ *OnChangeTierCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierSelectedEffectObjects;
  (this->fields).canSelectTier0 = canSelectTier0;
  (this->fields).OnChangeTierCallback = OnChangeTierCallback;
  if (this_00 != (List_1_UnityEngine_GameObject_ *)0x0) {
    pGVar1 = (GameObject *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                        currentTier & 0xff,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                       );
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pGVar1 = (this->fields).tierZero;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,canSelectTier0,(MethodInfo *)0x0);
        pGVar1 = (this->fields).tierZeroGray;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,canSelectTier0 ^ 1,(MethodInfo *)0x0);
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


/* Void OnSelectTier0() */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_OnSelectTier0
               (SpawnRoleTierSettings *this,MethodInfo *method)

{
  if ((this->fields).canSelectTier0 != 0) {
    SpawnRoleTierSettings_SelectTier(this,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnSelectTier1() */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_OnSelectTier1
               (SpawnRoleTierSettings *this,MethodInfo *method)

{
  SpawnRoleTierSettings_SelectTier(this,GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  return;
}


/* Void OnSelectTier2() */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_OnSelectTier2
               (SpawnRoleTierSettings *this,MethodInfo *method)

{
  SpawnRoleTierSettings_SelectTier(this,GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
  return;
}


/* Void OnSelectTier3() */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_OnSelectTier3
               (SpawnRoleTierSettings *this,MethodInfo *method)

{
  SpawnRoleTierSettings_SelectTier(this,GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
  return;
}


/* Void SelectTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_SelectTier
               (SpawnRoleTierSettings *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnChangeTierCallback;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,newTier,
               MethodInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>__Invoke_MV__Common__GamePassTier_
              );
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SpawnRoleTierSettings->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__SpawnRoleTierSettings___SelectTier_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__SpawnRoleTierSettings->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__SpawnRoleTierSettings->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SelectTier>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings__SelectTier_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

