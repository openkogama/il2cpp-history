
/* Void <Initialize>b__0() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c__DisplayClass12_0::
     ThemePreviewSettingsMenu_c_DisplayClass12_0__Initialize_b__0
               (ThemePreviewSettingsMenu_c_DisplayClass12_0 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (((this->fields).data != (ThemeData *)0x0) &&
     (levelReq = (((this->fields).data)->fields).levelRequirement,
     this_00 != (ThemePreviewSettingsMenu *)0x0)) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      method_00 = (ExecuteEvents__Class **)0x0;
      pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (pMVar1 != (MVLocalPlayer *)0x0) {
        if ((pMVar1->fields)._.level < levelReq) {
          ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_DisplayInsufficientLevelNotification
                    (this_00,levelReq,(MethodInfo *)0x0);
          return;
        }
        pTVar2 = (this_00->fields).previewTheme;
        if (pTVar2 != (Theme *)0x0) {
          if ((pTVar2->fields).overrideSkyboxManager == 0) {
            ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_DisplayThemeSwitchWarning
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          if (cRam_? == '\0') {
            func_?(&
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
            func_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                           );
            method_00 = &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
            func_?();
            func_?(&
                            MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                           );
            func_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0);
            func_?(&StringLiteral_You_will_not_be_able_to_use_skyb);
            cRam_? = '\x01';
          }
          value = (Object *)
                  func_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
          if (value != (Object *)0x0) {
            value[1].monitor = (MonitorData *)this_00;
            func_?(&value[1].monitor,this_00);
            pOVar3 = (Object__Class *)
                     TM::TM__(StringLiteral_You_will_not_be_able_to_use_skyb,(MethodInfo *)0x0);
            value[1].klass = pOVar3;
            func_?(value + 1,pOVar3);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

