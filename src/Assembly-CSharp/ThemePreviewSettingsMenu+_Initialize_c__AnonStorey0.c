
/* Void <>m__0() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<Initialize>c__AnonStorey0::
     ThemePreviewSettingsMenu_Initialize_c_AnonStorey0___m__0
               (ThemePreviewSettingsMenu_Initialize_c_AnonStorey0 *this,MethodInfo *method)

{
  this_00 = (this->fields)._this;
  pTVar1 = (this->fields).data;
  if ((pTVar1 != (ThemeData *)0x0) &&
     (levelReq = (pTVar1->fields).levelRequirement, this_00 != (ThemePreviewSettingsMenu *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pOVar2 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)this_02,(MethodInfo *)0x0);
        if ((int)pOVar2 < levelReq) {
          ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_DisplayInsufficientLevelNotification
                    (this_00,levelReq,(MethodInfo *)0x0);
          return;
        }
        pTVar3 = (this_00->fields).previewTheme;
        if (pTVar3 != (Theme *)0x0) {
          if ((pTVar3->fields).overrideSkyboxManager == 0) {
            ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_DisplayThemeSwitchWarning
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          this_03 = (ScaleAnimationBase *)
                    func_?(
                                   TypeInfo__ThemePreviewSettingsMenu___DisplaySkyboxWarning_c__AnonStorey3
                                   );
          ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,method_00);
          if (this_03 != (ScaleAnimationBase *)0x0) {
            (this_03->fields).state = (int32_t)this_00;
            pSVar4 = TM::TM__(StringLiteral_You_will_not_be_able_to_use_skyb,(MethodInfo *)0x0);
            (this_03->fields)._._._._.m_CachedPtr = pSVar4;
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this_00,(MethodInfo *)0x0);
            this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_04,(Object *)this_03,
                       MethodInfo__ThemePreviewSettingsMenu___DisplaySkyboxWarning_c__AnonStorey3____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_04,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

