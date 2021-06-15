
/* Void DisplayInsufficientGoldNotification(Int32) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_DisplayInsufficientGoldNotification
               (ThemePreviewSettingsMenu *this,int32_t price,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__ThemePreviewSettingsMenu___DisplayInsufficientGoldNotification_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pSVar1 = TM::TM__(StringLiteral_You_don_t_have_enough_gold__In_o,(MethodInfo *)0x0);
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  arg2 = TM::TM__(StringLiteral_gold,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral__0___1___2__,(Object *)pSVar1,arg1,(Object *)arg2,
                      (MethodInfo *)0x0);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pSVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__ThemePreviewSettingsMenu___DisplayInsufficientGoldNotification_c__AnonStorey2____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DisplayInsufficientLevelNotification(Int32) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_DisplayInsufficientLevelNotification
               (ThemePreviewSettingsMenu *this,int32_t levelReq,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__ThemePreviewSettingsMenu___DisplayInsufficientLevelNotification_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pSVar1 = TM::TM__(StringLiteral_In_order_to_buy_this_theme_you_l,(MethodInfo *)0x0);
  if (args == (Object__Array *)0x0) goto code_?;
  if (pSVar1 == (String *)0x0) {
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32);
    if (pOVar2 != (Object *)0x0) {
      iVar3 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    pSVar1 = TM::TM__(StringLiteral_You_re_currently_level,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pSVar1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
    System.dll::System::Collections::Generic::
    SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
    Single,System::Object]::
    SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
              ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                *)this_02,(MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32);
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (args->max_length < 4) goto code_?;
      args->vector[3] = pOVar2;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar1 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral__0___1___2___3__,args,(MethodInfo *)0x0);
      if (this_00 != (ScaleAnimationBase *)0x0) {
        (this_00->fields)._._._._.m_CachedPtr = pSVar1;
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_00,
                   MethodInfo__ThemePreviewSettingsMenu___DisplayInsufficientLevelNotification_c__AnonStorey1____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      goto code_?;
    }
    iVar3 = func_?(pOVar2,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  else {
    iVar3 = func_?(pSVar1);
    if (iVar3 != 0) goto code_?;
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DisplaySkyboxWarning() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_DisplaySkyboxWarning
               (ThemePreviewSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemePreviewSettingsMenu___DisplaySkyboxWarning_c__AnonStorey3;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    pSVar1 = TM::TM__(StringLiteral_You_will_not_be_able_to_use_skyb,(MethodInfo *)0x0);
    (this_00->fields)._._._._.m_CachedPtr = pSVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__ThemePreviewSettingsMenu___DisplaySkyboxWarning_c__AnonStorey3____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemePreviewSettingsMenu___DisplayThemeSwitchWarning_c__AnonStorey4;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    pSVar1 = TM::TM__(StringLiteral_By_purchasing_a_new_theme__you_a,(MethodInfo *)0x0);
    (this_00->fields)._._._._.m_CachedPtr = pSVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__ThemePreviewSettingsMenu___DisplayThemeSwitchWarning_c__AnonStorey4____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemePreviewSettingsMenu___Initialize_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = data;
    (this_00->fields).state = (int32_t)this;
    pXVar1 = (XpBoostParticlePreviewer *)(this->fields)._.sideBarPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        ThemeSettingsSideBar_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsSideBar>_ThemeSettingsSideBar_
                       );
    (this->fields).sideBar = (ThemeSettingsSideBar *)pXVar1;
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pXVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,(Transform *)(this->fields)._.settingsArea,0,(MethodInfo *)0x0);
        pTVar3 = (this->fields).sideBar;
        if ((pTVar3 != (ThemeSettingsSideBar *)0x0) &&
           (pIVar4 = (pTVar3->fields).closeImage, pIVar4 != (Image *)0x0)) {
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pIVar4,(MethodInfo *)0x0);
          if (pGVar5 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,0,(MethodInfo *)0x0);
            pIVar4 = (pTVar3->fields).backImage;
            if (pIVar4 != (Image *)0x0) {
              pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pIVar4,(MethodInfo *)0x0);
              if (pGVar5 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,1,(MethodInfo *)0x0);
                pTVar3 = (this->fields).sideBar;
                if (pTVar3 != (ThemeSettingsSideBar *)0x0) {
                  pRVar6 = (pTVar3->fields).content;
                  (this->fields)._.theme = theme;
                  (this->fields)._.content = pRVar6;
                  if (theme != (Theme *)0x0) {
                    pSVar7 = (theme->fields)._Settings_k__BackingField;
                    if (pSVar7 != (SettingsWrapper *)0x0) {
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      (pSVar7->fields).menu = (IMenu *)this;
                      func_?(0,TypeInfo__ThemeSettings__IMenu,this);
                      (this->fields).previewTheme = theme;
                      (this->fields)._ThemeData_k__BackingField =
                           (this_00->fields)._._._._.m_CachedPtr;
                      (this->fields).menuController = (ThemeMenuController *)&UNK_?;
                      pvVar8 = (this_00->fields)._._._._.m_CachedPtr;
                      if (pvVar8 != (void *)0x0) {
                        (this->fields).previewID = *(int32_t *)((int)pvVar8 + 8);
                        this_01 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                   *)UnityEngine.CoreModule.dll::UnityEngine::Object::
                                     Object_1_Instantiate_251
                                               ((XpBoostParticlePreviewer *)
                                                (this->fields).switchThemeButtonPrefab,
                                                SwitchThemeButton_MethodInfo__UnityEngine__Object__Instantiate<SwitchThemeButton>_SwitchThemeButton_
                                               );
                        if (this_01 !=
                            (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                             *)0x0) {
                          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_transform
                                             ((Component_1 *)this_01,(MethodInfo *)0x0);
                          if (pTVar2 != (Transform *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_SetParent_1
                                      (pTVar2,(Transform *)(this->fields)._.settingsArea,0,
                                       (MethodInfo *)0x0);
                            pvVar8 = (this_00->fields)._._._._.m_CachedPtr;
                            if (pvVar8 != (void *)0x0) {
                              SwitchThemeButton::SwitchThemeButton_Initialize
                                        ((SwitchThemeButton *)this_01,
                                         *(int32_t *)((int)pvVar8 + 0x14),
                                         *(int32_t *)((int)pvVar8 + 0x10),(MethodInfo *)0x0);
                              this_02 = (HoverCraftMotor *)
                                        System.Core.dll::System::Linq::
                                        Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
                                        Collections::Generic::KeyValuePair`2[System::Object,System::
                                        Object],System::Object]::
                                        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                  (this_01,(MethodInfo *)0x0);
                              if (this_02 != (HoverCraftMotor *)0x0) {
                                this_03 = (UnityEvent *)
                                          HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                                                    (this_02,(MethodInfo *)0x0);
                                this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                           *)func_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction);
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (this_04,(Object *)this_00,
                                           MethodInfo__ThemePreviewSettingsMenu___Initialize_c__AnonStorey0____m__0__
                                           ,(MethodInfo *)0x0);
                                if (this_03 != (UnityEvent *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::
                                  UnityEvent_AddListener
                                            (this_03,(UnityAction *)this_04,(MethodInfo *)0x0);
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
          }
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPurchaseResponse(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_OnPurchaseResponse
               (ThemePreviewSettingsMenu *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?(0);
    pDVar2 = extraout_ECX;
    pAVar3 = extraout_EDX;
code_?:
    func_?(pDVar2,pAVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  source = (pMVar1->fields).PurchaseProductResponseHandler;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this,
             MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,
             MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
            );
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)source,(Delegate *)pUVar4,(MethodInfo *)0x0);
  pDVar5 = (Delegate *)0x0;
  if (pDVar2 != (Delegate *)0x0) {
    if ((Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
         *)pDVar2->klass ==
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
       ) {
      pDVar5 = pDVar2;
    }
    pAVar3 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar5 == (Delegate *)0x0) goto code_?;
  }
  *(Delegate **)(unaff_EBX + 0xb4) = pDVar5;
  this_00 = (this->fields).openPopup;
  if (this_00 == (ConfirmationPopup *)0x0) goto code_?;
  ConfirmationPopup::ConfirmationPopup_Pop(this_00,(MethodInfo *)0x0);
  switch(returnCode) {
  case 0:
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,
                 MethodInfo__ThemePreviewSettingsMenu___OnPurchaseResponse_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar4;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar6,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_01 = (this->fields).menuController;
    this_02 = ThemeRepository::ThemeRepository_get_Instance((MethodInfo *)0x0);
    if (this_02 != (ThemeRepository *)0x0) {
      pTVar7 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_02,(MethodInfo *)0x0);
      if (pTVar7 == (ThemeWorldObject *)0x0) {
        theme = (Theme *)0x0;
      }
      else {
        theme = (pTVar7->fields)._Visualization_k__BackingField;
      }
      if (this_01 != (ThemeMenuController *)0x0) {
        ThemeMenuController::ThemeMenuController_OpenSettings(this_01,theme,(MethodInfo *)0x0);
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache1 ==
            (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)0x0,
                     MethodInfo__ThemePreviewSettingsMenu___OnPurchaseResponse_m__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache1 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar4;
        }
        this_03 = TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache1;
        break;
      }
    }
    goto code_?;
  case 1:
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )this_03,(Object *)this,
               MethodInfo__ThemePreviewSettingsMenu___OnPurchaseResponse_m__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) == 0) ||
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started != 0))
    goto code_?;
    goto code_?;
  case 2:
  case 3:
  case 4:
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache3 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,
                 MethodInfo__ThemePreviewSettingsMenu___OnPurchaseResponse_m__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache3 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar4;
    }
    this_03 = TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache3;
    break;
  default:
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Unexpected_purchase_response_,(MethodInfo *)0x0);
    return;
  case 6:
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache2 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,
                 MethodInfo__ThemePreviewSettingsMenu___OnPurchaseResponse_m__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache2 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar4;
    }
    this_03 = TypeInfo__ThemePreviewSettingsMenu->static_fields->__f__am_cache2;
  }
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
code_?:
    func_?();
  }
code_?:
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar6,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnThemeSwitchWarningResolved(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_OnThemeSwitchWarningResolved
               (ThemePreviewSettingsMenu *this,bool b,ConfirmationPopup *popup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (b == 0) {
    if (popup != (ConfirmationPopup *)0x0) {
      ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    (this->fields).openPopup = popup;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                );
      pAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
      if (pAVar3 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
        if (pAVar3->klass ==
            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
           ) {
          pAVar2 = pAVar3;
        }
        pAVar4 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) goto code_?;
      }
      (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
      pTVar5 = (this->fields).previewTheme;
      themeId = (this->fields).previewID;
      if (pTVar5 != (Theme *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pSVar6 = (pTVar5->fields)._Settings_k__BackingField;
        if ((pSVar6 != (SettingsWrapper *)0x0) &&
           (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseSwitchTheme
                    (this_01,themeId,(pSVar6->fields).settingsData,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pAVar3 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar3,pAVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SwitchThemeButtonClicked(Int32, Int32) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_SwitchThemeButtonClicked
               (ThemePreviewSettingsMenu *this,int32_t themeID,int32_t levelReq,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)this_01,(MethodInfo *)0x0);
      if ((int)pOVar1 < levelReq) {
        ThemePreviewSettingsMenu_DisplayInsufficientLevelNotification
                  ((ThemePreviewSettingsMenu *)0x0,levelReq,(MethodInfo *)0x0);
        return;
      }
      if (iRam_? != 0) {
        if (*(char *)(iRam_? + 0xc) == '\0') {
          ThemePreviewSettingsMenu_DisplayThemeSwitchWarning
                    ((ThemePreviewSettingsMenu *)0x0,(MethodInfo *)0x0);
          return;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__ThemePreviewSettingsMenu___DisplaySkyboxWarning_c__AnonStorey3;
        this_02 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
        if (this_02 != (ScaleAnimationBase *)0x0) {
          (this_02->fields).state = 0;
          pSVar2 = TM::TM__(StringLiteral_You_will_not_be_able_to_use_skyb,(MethodInfo *)0x0);
          (this_02->fields)._._._._.m_CachedPtr = pSVar2;
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)0x0,(MethodInfo *)0x0);
          this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_03,(Object *)this_02,
                     MethodInfo__ThemePreviewSettingsMenu___DisplaySkyboxWarning_c__AnonStorey3____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <OnPurchaseResponse>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu__OnPurchaseResponse_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,4);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPurchaseResponse>m__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu__OnPurchaseResponse_m__1
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Your_theme_is_now_active_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPurchaseResponse>m__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu__OnPurchaseResponse_m__2
               (ThemePreviewSettingsMenu *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._ThemeData_k__BackingField;
  if ((pTVar1 != (ThemeData *)0x0) && (x != (IModalPopupCreator *)0x0)) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,1,
                    (pTVar1->fields).priceGold);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnPurchaseResponse>m__3(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu__OnPurchaseResponse_m__3
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_You_do_not_fulfill_the_level_req,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPurchaseResponse>m__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu__OnPurchaseResponse_m__4
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Something_went_wrong__The_theme_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

