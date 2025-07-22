
/* Void OpenSelection() */

void Assembly-CSharp.dll::ThemeMenuController::ThemeMenuController_OpenSelection
               (ThemeMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ThemeMenuController____c__DisplayClass4_0___OpenSelection_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemeMenuController____c__DisplayClass4_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeMenuController____c__DisplayClass4_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).selectionPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    if ((pOVar1 != (Object__Class *)0x0) &&
       (pIVar2 = (pOVar1->_0).castClass, pIVar2 != (Il2CppClass *)0x0)) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar2,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pIVar2 = (pOVar1->_0).declaringType;
        if (pIVar2 != (Il2CppClass *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar2,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0);
            (pOVar1->_0).generic_class = (Il2CppGenericClass *)this;
            func_?(&(pOVar1->_0).generic_class,this);
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__ThemeMenuController____c__DisplayClass4_0___OpenSelection_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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


/* Void OpenSettings(Theme) */

void Assembly-CSharp.dll::ThemeMenuController::ThemeMenuController_OpenSettings
               (ThemeMenuController *this,Theme *theme,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ThemeSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsMenu>_ThemeSettingsMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__0__);
    func_?(&
                    MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemeMenuController____c__DisplayClass5_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeMenuController____c__DisplayClass5_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)theme;
    func_?(value + 1,theme);
    original = (this->fields).settingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ThemeSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsMenu>_ThemeSettingsMenu_
                       );
    value[1].monitor = (MonitorData *)pOVar1;
    func_?(&value[1].monitor,pOVar1);
    if ((ThemeSettingsMenu *)value[1].monitor != (ThemeSettingsMenu *)0x0) {
      ThemeSettingsMenu::ThemeSettingsMenu_Initialize
                ((ThemeSettingsMenu *)value[1].monitor,this,(Theme *)value[1].klass,
                 (MethodInfo *)0x0);
      this_00 = (Object__Class *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)this_00,value,
                 MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__0__,
                 (MethodInfo *)0x0);
      value[2].klass = this_00;
      func_?(value + 2,this_00);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OpenSettingsForPreview(Theme, ThemeData) */

void Assembly-CSharp.dll::ThemeMenuController::ThemeMenuController_OpenSettingsForPreview
               (ThemeMenuController *this,Theme *theme,ThemeData *entry,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ThemePreviewSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemePreviewSettingsMenu>_ThemePreviewSettingsMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemeMenuController____c__DisplayClass6_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeMenuController____c__DisplayClass6_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)theme;
    func_?(&value[1].monitor,theme);
    original = (this->fields).previewSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ThemePreviewSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemePreviewSettingsMenu>_ThemePreviewSettingsMenu_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    if (value[1].klass != (Object__Class *)0x0) {
      ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_Initialize
                ((ThemePreviewSettingsMenu *)value[1].klass,(Theme *)value[1].monitor,entry,this,
                 (MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OpenThemesMenu() */

void Assembly-CSharp.dll::ThemeMenuController::ThemeMenuController_OpenThemesMenu
               (ThemeMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                   );
    in_stack_1 = &TypeInfo__UnityEngine__Object;
    func_?();
    func_?(&
                    MethodInfo__ThemeMenuController____c__DisplayClass3_0___OpenThemesMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemeMenuController____c__DisplayClass3_0);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeRepository);
    cRam_? = '\x01';
  }
  pTVar2 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  if (pTVar2 != (ThemeRepository *)0x0) {
    pTVar3 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar2,(MethodInfo *)0x0);
    if (pTVar3 == (ThemeWorldObject *)0x0) {
      value = (Object *)func_?(TypeInfo__ThemeMenuController____c__DisplayClass3_0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
      original = (this->fields).selectionPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar4 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                         );
      if (value != (Object *)0x0) {
        value[1].klass = pOVar4;
        func_?(value + 1,pOVar4);
        pOVar4 = value[1].klass;
        if (pOVar4 != (Object__Class *)0x0) {
          (pOVar4->_0).generic_class = (Il2CppGenericClass *)this;
          func_?(&(pOVar4->_0).generic_class,this);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__ThemeMenuController____c__DisplayClass3_0___OpenThemesMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pTVar2 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
      if (pTVar2 != (ThemeRepository *)0x0) {
        pTVar3 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar2,(MethodInfo *)0x0);
        if (pTVar3 != (ThemeWorldObject *)0x0) {
          ThemeMenuController_OpenSettings
                    (this,(pTVar3->fields)._Visualization_k__BackingField,(MethodInfo *)0x0);
          return;
        }
        ThemeMenuController_OpenSettings(this,(Theme *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

