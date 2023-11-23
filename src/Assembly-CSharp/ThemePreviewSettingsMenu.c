
/* Void DisplayInsufficientGoldNotification(Int32) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_DisplayInsufficientGoldNotification
               (ThemePreviewSettingsMenu *this,int32_t price,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass15_0___DisplayInsufficientGoldNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass15_0);
    func_?(&StringLiteral__0___1___2__);
    func_?(&StringLiteral_You_don_t_have_enough_gold__In_o);
    func_?(&StringLiteral_gold);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass15_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  arg0 = TM::TM__(StringLiteral_You_don_t_have_enough_gold__In_o,(MethodInfo *)0x0);
  puStack_1 = (undefined *)price;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&puStack_1);
  arg2 = TM::TM__(StringLiteral_gold,(MethodInfo *)0x0);
  pOStack2 =
       (Object__Class *)
       mscorlib.dll::System::String::String_Format_2
                 (StringLiteral__0___1___2__,(Object *)arg0,arg1,(Object *)arg2,(MethodInfo *)0x0);
  if (value != (Object *)0x0) {
    value[1].klass = pOStack2;
    pOStack3 = value + 1;
    func_?();
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass15_0___DisplayInsufficientGoldNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DisplayInsufficientLevelNotification(Int32) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_DisplayInsufficientLevelNotification
               (ThemePreviewSettingsMenu *this,int32_t levelReq,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0___DisplayInsufficientLevelNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0);
    func_?(&StringLiteral__0___1___2___3__);
    func_?(&StringLiteral_In_order_to_buy_this_theme_you_l);
    func_?(&StringLiteral_You_re_currently_level);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pIVar1 = (Il2CppClass *)TM::TM__(StringLiteral_In_order_to_buy_this_theme_you_l,(MethodInfo *)0x0)
  ;
  if (args == (Object__Array *)0x0) goto code_?;
  if (pIVar1 == (Il2CppClass *)0x0) {
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pIVar1;
    pIStack_2 = pIVar1;
    func_?(args->vector);
    iStack_3 = levelReq;
    pIVar1 = (Il2CppClass *)func_?(TypeInfo__System__Int32,&iStack_3);
    if (pIVar1 != (Il2CppClass *)0x0) {
      pIStack_2 = (args->klass->_0).element_class;
      iVar4 = func_?(pIVar1);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pIVar1;
    pIStack_2 = pIVar1;
    func_?(args->vector + 1);
    pIVar1 = (Il2CppClass *)TM::TM__(StringLiteral_You_re_currently_level,(MethodInfo *)0x0);
    if (pIVar1 != (Il2CppClass *)0x0) {
      pIStack_2 = (args->klass->_0).element_class;
      iVar4 = func_?(pIVar1);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pIVar1;
    pIStack_2 = pIVar1;
    func_?(args->vector + 2);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    pIStack_2 = (Il2CppClass *)&pIStack_2;
    pIVar1 = (Il2CppClass *)func_?(TypeInfo__System__Int32);
    if (pIVar1 == (Il2CppClass *)0x0) {
code_?:
      if (args->max_length < 4) goto code_?;
      args->vector[3] = (Object *)pIVar1;
      pIStack_2 = pIVar1;
      func_?(args->vector + 3);
      pIStack_2 = (Il2CppClass *)
                  mscorlib.dll::System::String::String_Format_3
                            (StringLiteral__0___1___2___3__,args,(MethodInfo *)0x0);
      if (value != (Object *)0x0) {
        value[1].klass = (Object__Class *)pIStack_2;
        func_?(value + 1);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0___DisplayInsufficientLevelNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      goto code_?;
    }
    pIStack_2 = (args->klass->_0).element_class;
    iVar4 = func_?(pIVar1);
    if (iVar4 != 0) goto code_?;
  }
  else {
    pIStack_2 = (args->klass->_0).element_class;
    iVar4 = func_?(pIVar1);
    if (iVar4 != 0) goto code_?;
code_?:
    pIStack_2 = (Il2CppClass *)0x0;
    uVar6 = func_?();
    func_?(uVar6);
code_?:
    pIStack_2 = (Il2CppClass *)0x0;
    uVar6 = func_?();
    func_?(uVar6);
code_?:
    pIStack_2 = (Il2CppClass *)0x0;
    uVar6 = func_?();
    func_?(uVar6);
  }
  pIStack_2 = (Il2CppClass *)0x0;
  uVar6 = func_?();
  func_?(uVar6);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void DisplaySkyboxWarning() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_DisplaySkyboxWarning
               (ThemePreviewSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0);
    func_?(&StringLiteral_You_will_not_be_able_to_use_skyb);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pOVar1 = (Object__Class *)
             TM::TM__(StringLiteral_You_will_not_be_able_to_use_skyb,(MethodInfo *)0x0);
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DisplayThemeSwitchWarning() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_DisplayThemeSwitchWarning
               (ThemePreviewSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0___DisplayThemeSwitchWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0);
    func_?(&StringLiteral_By_purchasing_a_new_theme__you_a);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pOVar1 = (Object__Class *)
             TM::TM__(StringLiteral_By_purchasing_a_new_theme__you_a,(MethodInfo *)0x0);
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0___DisplayThemeSwitchWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Theme, ThemeData, ThemeMenuController) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_Initialize
               (ThemePreviewSettingsMenu *this,Theme *theme,ThemeData *data,
               ThemeMenuController *menuController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SwitchThemeButton_MethodInfo__UnityEngine__Object__Instantiate<SwitchThemeButton>_SwitchThemeButton__UnityEngine__Transform__bool_
                   );
    func_?(&
                    ThemeSettingsSideBar_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsSideBar>_ThemeSettingsSideBar__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass12_0___Initialize_b__0__
                   );
    func_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass12_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass12_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)data;
    func_?(&value[1].monitor,data);
    parent = (Transform *)(this->fields)._.settingsArea;
    pTVar1 = (this->fields)._.sideBarPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar1 = (ThemeSettingsSideBar *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pTVar1,parent,0,
                        ThemeSettingsSideBar_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsSideBar>_ThemeSettingsSideBar__UnityEngine__Transform__bool_
                       );
    (this->fields).sideBar = pTVar1;
    func_?(&(this->fields).sideBar,pTVar1);
    pTVar1 = (this->fields).sideBar;
    if ((pTVar1 != (ThemeSettingsSideBar *)0x0) &&
       (pIVar2 = (pTVar1->fields).closeImage, pIVar2 != (Image *)0x0)) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar2,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pIVar2 = (pTVar1->fields).backImage;
        if (pIVar2 != (Image *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar2,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0);
            pTVar1 = (this->fields).sideBar;
            if (pTVar1 != (ThemeSettingsSideBar *)0x0) {
              pRVar4 = (pTVar1->fields).content;
              (this->fields)._.theme = theme;
              func_?(&(this->fields)._.theme,theme);
              (this->fields)._.content = pRVar4;
              func_?(&(this->fields)._.content,pRVar4);
              if ((theme != (Theme *)0x0) &&
                 (this_00 = (theme->fields)._Settings_k__BackingField,
                 this_00 != (SettingsWrapper *)0x0)) {
                ThemeSettings::SettingsWrapper::SettingsWrapper_SubscribeToSettingsUI
                          (this_00,(IMenu *)this,(MethodInfo *)0x0);
                (this->fields).previewTheme = theme;
                func_?(&(this->fields).previewTheme,theme);
                pTVar5 = (ThemeData *)value[1].monitor;
                (this->fields)._ThemeData_k__BackingField = pTVar5;
                func_?(&(this->fields)._ThemeData_k__BackingField,pTVar5);
                (this->fields).menuController = menuController;
                func_?(&(this->fields).menuController,menuController);
                if (value[1].monitor != (MonitorData *)0x0) {
                  (this->fields).previewID = *(int32_t *)(value[1].monitor + 8);
                  this_02 = (SwitchThemeButton *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                      ((Object *)(this->fields).switchThemeButtonPrefab,
                                       (Transform *)(this->fields)._.settingsArea,0,
                                       SwitchThemeButton_MethodInfo__UnityEngine__Object__Instantiate<SwitchThemeButton>_SwitchThemeButton__UnityEngine__Transform__bool_
                                      );
                  pMVar6 = value[1].monitor;
                  if ((pMVar6 != (MonitorData *)0x0) && (this_02 != (SwitchThemeButton *)0x0)) {
                    SwitchThemeButton::SwitchThemeButton_Initialize
                              (this_02,*(int32_t *)(pMVar6 + 0x14),*(int32_t *)(pMVar6 + 0x10),
                               (MethodInfo *)0x0);
                    pBVar7 = (this_02->fields).button;
                    if (pBVar7 != (Button *)0x0) {
                      this_01 = (UnityEvent *)(pBVar7->fields).m_OnClick;
                      this_03 = (NavMesh_OnNavMeshPreUpdate *)
                                func_?(TypeInfo__UnityEngine__Events__UnityAction);
                      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                      NavMesh_OnNavMeshPreUpdate__ctor
                                (this_03,value,
                                 MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass12_0___Initialize_b__0__
                                 ,(MethodInfo *)0x0);
                      if (this_01 != (UnityEvent *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::
                        UnityEvent_AddListener(this_01,(UnityAction *)this_03,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPurchaseResponse(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_OnPurchaseResponse
               (ThemePreviewSettingsMenu *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu___OnPurchaseResponse_b__20_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemePreviewSettingsMenu____c);
    func_?(&StringLiteral_Unexpected_purchase_response_);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  source = (pMVar1->fields).PurchaseProductResponseHandler;
  this_02 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_02,(Object *)this,
             MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)source,(Delegate *)this_02,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    unaff_EBX[2].fields.topArea = (RectTransform *)0x0;
    iVar3 = 0;
code_?:
    func_?();
    this_00 = (this->fields).openPopup;
    unaff_EBX = this;
    if (this_00 != (ConfirmationPopup *)0x0) {
      ConfirmationPopup::ConfirmationPopup_Pop(this_00,(MethodInfo *)0x0);
      switch(iVar3) {
      case 0:
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__ThemePreviewSettingsMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__ThemePreviewSettingsMenu____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar5 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          pGVar4 = (GameObject *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pTVar5
                     ,
                     MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_0 = callbackFunction;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        this_01 = (this->fields).menuController;
        this_03 = (ThemeRepository *)func_?();
        if (this_03 != (ThemeRepository *)0x0) {
          pTVar6 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_03,(MethodInfo *)0x0);
          if (pTVar6 == (ThemeWorldObject *)0x0) {
            theme = (Theme *)0x0;
          }
          else {
            theme = (pTVar6->fields)._Visualization_k__BackingField;
          }
          if (this_01 != (ThemeMenuController *)0x0) {
            ThemeMenuController::ThemeMenuController_OpenSettings(this_01,theme,(MethodInfo *)0x0);
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__ThemePreviewSettingsMenu____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction_01 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_1;
            if (callbackFunction_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
            goto code_?;
            if ((TypeInfo__ThemePreviewSettingsMenu____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar5 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9;
            callbackFunction_01 =
                 (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,
                       (Object *)pTVar5,
                       MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_1 = callbackFunction_01;
            break;
          }
        }
        goto code_?;
      case 1:
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
                   MethodInfo__ThemePreviewSettingsMenu___OnPurchaseResponse_b__20_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      case 2:
      case 3:
      case 4:
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__ThemePreviewSettingsMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction_01 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_4;
        if (callbackFunction_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
        goto code_?;
        if ((TypeInfo__ThemePreviewSettingsMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar5 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9;
        callbackFunction_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?()
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,
                   (Object *)pTVar5,
                   MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_4 = callbackFunction_01;
        break;
      default:
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Unexpected_purchase_response_,(MethodInfo *)0x0);
        return;
      case 6:
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__ThemePreviewSettingsMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction_01 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_3;
        if (callbackFunction_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
        goto code_?;
        if ((TypeInfo__ThemePreviewSettingsMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar5 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9;
        callbackFunction_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?()
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,
                   (Object *)pTVar5,
                   MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_3 = callbackFunction_01;
      }
      func_?();
code_?:
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar4,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
code_?:
    func_?();
  }
  else {
    pTVar7 = unaff_EBX;
    pRVar8 = (RectTransform *)func_?();
    unaff_EBX = this;
    if (pRVar8 == (RectTransform *)0x0) goto code_?;
    pTVar7[2].fields.topArea = pRVar8;
    iVar3 = func_?();
    if (iVar3 != 0) goto code_?;
  }
  func_?();
code_?:
  cVar9 = func_?();
  pcVar10 = (char *)((int)&unaff_EBX[-0xf51bb2].fields._._.m_CancellationTokenSource + 1);
  *pcVar10 = *pcVar10 + (char)((uint)unaff_EBX >> 8);
  *(char *)(extraout_EDX + -2) = *(char *)(extraout_EDX + -2) + cVar9;
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnSkyboxWarningResolved(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_OnSkyboxWarningResolved
               (ThemePreviewSettingsMenu *this,bool b,ConfirmationPopup *popup,MethodInfo *method)

{
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    if (b != 0) {
      ThemePreviewSettingsMenu_DisplayThemeSwitchWarning(this,(MethodInfo *)0x0);
    }
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnThemeSwitchWarningResolved(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_OnThemeSwitchWarningResolved
               (ThemePreviewSettingsMenu *this,bool b,ConfirmationPopup *popup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    cRam_? = '\x01';
  }
  if (b == 0) {
    if (popup != (ConfirmationPopup *)0x0) {
      ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
  }
  else {
    (this->fields).openPopup = popup;
    func_?(&(this->fields).openPopup,popup);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
code_?:
      func_?();
      pTVar4 = (this->fields).previewTheme;
      themeId = (this->fields).previewID;
      if (pTVar4 != (Theme *)0x0) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pSVar5 = (pTVar4->fields)._Settings_k__BackingField;
        if ((pSVar5 != (SettingsWrapper *)0x0) &&
           (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseSwitchTheme
                    (this_01,themeId,(pSVar5->fields).settingsData,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?();
    if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) goto code_?;
    (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
    iVar6 = func_?();
    if (iVar6 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SwitchThemeButtonClicked(Int32, Int32) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_SwitchThemeButtonClicked
               (ThemePreviewSettingsMenu *this,int32_t themeID,int32_t levelReq,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      if ((pMVar1->fields)._.level < levelReq) {
        ThemePreviewSettingsMenu_DisplayInsufficientLevelNotification
                  ((ThemePreviewSettingsMenu *)0x0,levelReq,(MethodInfo *)0x0);
        return;
      }
      pTVar2 = (unaff_EDI->fields).previewTheme;
      if (pTVar2 != (Theme *)0x0) {
        if ((pTVar2->fields).overrideSkyboxManager == 0) {
          ThemePreviewSettingsMenu_DisplayThemeSwitchWarning(unaff_EDI,(MethodInfo *)0x0);
          return;
        }
        if (cRam_? == '\0') {
          func_?();
          func_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                         );
          func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          func_?(&
                          MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         );
          func_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0);
          func_?(&StringLiteral_You_will_not_be_able_to_use_skyb);
          cRam_? = '\x01';
        }
        method_00 = (MethodInfo *)&UNK_?;
        value = (Object *)func_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0)
        ;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value,ExceptionArgument__Enum_obj,method_00);
        if (value != (Object *)0x0) {
          value[1].monitor = (MonitorData *)unaff_EDI;
          func_?(&value[1].monitor);
          pOVar3 = (Object__Class *)
                   TM::TM__(StringLiteral_You_will_not_be_able_to_use_skyb,(MethodInfo *)0x0);
          value[1].klass = pOVar3;
          func_?(value + 1,pOVar3);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)unaff_EDI,(MethodInfo *)0x0);
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
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <OnPurchaseResponse>b__20_2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu__OnPurchaseResponse_b__20_2
               (ThemePreviewSettingsMenu *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._ThemeData_k__BackingField;
  if (pTVar1 != (ThemeData *)0x0) {
    iVar2 = (pTVar1->fields).priceGold;
    if (x != (IModalPopupCreator *)0x0) {
      pIVar3 = x->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
            ppMVar6 = &(&(x->klass->vtable).Create)[x->klass->interfaceOffsets[uVar4].offset].method
            ;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,0);
code_?:
      (*(code *)*ppMVar6)(x,1,iVar2,ppMVar6[1]);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

