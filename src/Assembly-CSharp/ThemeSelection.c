
/* Void Awake() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_Awake
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<MV::WorldObject::ThemesData::ThemeData_[]>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__ThemeSelection__CreateThemeButtons_MV__WorldObject__ThemesData__ThemeData____
             ,
             MethodInfo__System__Action<MV::WorldObject::ThemesData::ThemeData_[]>__Action_System__Object__void__
            );
  TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived =
       (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)pUVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetThemesData
              (this_00,(MethodInfo *)0x0);
    pTVar2 = (this->fields).themeDescription;
    pSStack3 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      pIStack4 = (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      pTStack5 = pTVar2;
      (*(code *)(pTVar2->klass->vtable).set_text.method)();
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this,MethodInfo__ThemeSelection__LocalizeAndSetDescriptionText__,
                 (MethodInfo *)0x0);
      TM::TM_LanguageChanged((Action *)pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  pIStack4 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CreateThemeButtons(ThemeData[]) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_CreateThemeButtons
               (ThemeSelection *this,ThemeData__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).themeRepo;
  if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
  pMVar2 = (MethodInfo *)0x0;
  pTVar3 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar1,(MethodInfo *)0x0);
  if (pTVar3 != (ThemeWorldObject *)0x0) {
    original = (this->fields).themeRemovalButtonPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_00 = (HoverCraftMotor *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)original,
                         UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                        );
    if (this_00 == (HoverCraftMotor *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar4,(Transform *)(this->fields).themeButtonContainer,0,(MethodInfo *)0x0);
    pMVar2 = (MethodInfo *)
              HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,MethodInfo__ThemeSelection___CreateThemeButtons_m__0__,
               (MethodInfo *)0x0);
    if (pMVar2 == (MethodInfo *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
              ((UnityEvent *)pMVar2,(UnityAction *)pUVar5,(MethodInfo *)0x0);
  }
  puVar6 = (undefined1 *)0x0;
  if (data != (ThemeData__Array *)0x0) {
    ppTVar7 = data->vector;
    while( true ) {
      if ((int)data->max_length <= (int)puVar6) {
        return;
      }
      if ((undefined1 *)data->max_length <= puVar6) break;
      pTVar8 = *ppTVar7;
      this_01 = (ScaleAnimationBase *)
                func_?(TypeInfo__ThemeSelection___CreateThemeButtons_c__AnonStorey0);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,pMVar2);
      if (this_01 == (ScaleAnimationBase *)0x0) goto code_?;
      (this_01->fields).state = (int32_t)this;
      pTVar9 = (this->fields).buttonPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          ((XpBoostParticlePreviewer *)pTVar9,
                           ThemeSelectionButton_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelectionButton>_ThemeSelectionButton_
                          );
      (this_01->fields)._._._._.m_CachedPtr = this_02;
      if (this_02 == (XpBoostParticlePreviewer *)0x0) goto code_?;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_02,(MethodInfo *)0x0);
      if (pTVar4 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar4,(Transform *)(this->fields).themeButtonContainer,0,(MethodInfo *)0x0);
      pTVar1 = (this->fields).themeRepo;
      if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
      pMVar2 = (MethodInfo *)
                ThemeRepository::ThemeRepository_get_CurrentThemeIdentifier
                          (pTVar1,(MethodInfo *)0x0);
      if (pTVar8 == (ThemeData *)0x0) goto code_?;
      b = (pTVar8->fields).themeIdentifier;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar10 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)pMVar2,b,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        puVar11 = &UNK_?;
        pUVar12 = (UnityAction__Class *)TypeInfo__ThemeSelection___CreateThemeButtons_c__AnonStorey1
        ;
        this_03 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,pMVar2);
        if (this_03 == (ScaleAnimationBase *)0x0) goto code_?;
        (this_03->fields).originalScale.x = (float)this_01;
        (this_03->fields)._._._._.m_CachedPtr = (pTVar8->fields).themeIdentifier;
        (this_03->fields).state = (int32_t)pTVar8;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this_03,
                   MethodInfo__ThemeSelection___CreateThemeButtons_c__AnonStorey1____m__0__,
                   (MethodInfo *)0x0);
        pTVar1 = (this->fields).themeRepo;
        pTVar9 = (this_01->fields)._._._._.m_CachedPtr;
        if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
        themePrefab = ThemeRepository::ThemeRepository_GetThemePrefab
                                (pTVar1,(pTVar8->fields).themeIdentifier,(MethodInfo *)0x0);
        if (pTVar9 == (ThemeSelectionButton *)0x0) goto code_?;
        bStack_13 = 0;
      }
      else {
        puVar11 = &UNK_?;
        pUVar12 = TypeInfo__UnityEngine__Events__UnityAction;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this_01,
                   MethodInfo__ThemeSelection___CreateThemeButtons_c__AnonStorey0____m__0__,
                   (MethodInfo *)0x0);
        pTVar1 = (this->fields).themeRepo;
        pTVar9 = (this_01->fields)._._._._.m_CachedPtr;
        if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
        themePrefab = ThemeRepository::ThemeRepository_GetThemePrefab
                                (pTVar1,(pTVar8->fields).themeIdentifier,(MethodInfo *)0x0);
        if (pTVar9 == (ThemeSelectionButton *)0x0) goto code_?;
        bStack_13 = 1;
      }
      pMVar2 = (MethodInfo *)(pTVar8->fields).levelRequirement;
      ThemeSelectionButton::ThemeSelectionButton_Initialize
                (pTVar9,this,themePrefab,(UnityAction *)pUVar5,(pTVar8->fields).priceGold,
                 (int32_t)pMVar2,bStack_13,(MethodInfo *)0x0);
      puVar6 = (undefined1 *)((int)&(pUVar12->_0).image + 1);
      ppTVar7 = (ThemeData **)(puVar11 + 4);
    }
    uVar14 = func_?(0,0);
    func_?(uVar14);
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void GoBackToSettings() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_GoBackToSettings
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ThemeSelection->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ThemeSelection___GoBackToSettings_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ThemeSelection->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ThemeSelection->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void Initialize(ThemeMenuController) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_Initialize
               (ThemeSelection *this,ThemeMenuController *menuController,MethodInfo *method)

{
  (this->fields).menuController = menuController;
  return;
}


/* Void InitializeWithBackButton(ThemeMenuController) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_InitializeWithBackButton
               (ThemeSelection *this,ThemeMenuController *menuController,MethodInfo *method)

{
  pIVar1 = (this->fields).close;
  if (pIVar1 != (Image *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pIVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      pIVar1 = (this->fields).back;
      if (pIVar1 != (Image *)0x0) {
        this_01 = (ThemeMenuController *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pIVar1,(MethodInfo *)0x0);
        if (this_01 != (ThemeMenuController *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,1,(MethodInfo *)0x0);
          (this->fields).menuController = this_01;
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LoadTheme(String, ThemeData) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_LoadTheme
               (ThemeSelection *this,String *identifier,ThemeData *data,MethodInfo *method)

{
  this_00 = (this->fields).themeRepo;
  if (this_00 != (ThemeRepository *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Preview_theme_created,(MethodInfo *)0x0);
    pTVar1 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
    if (pTVar1 == (ThemeWorldObject *)0x0) {
      pTVar2 = (Theme *)0x0;
    }
    else {
      pTVar2 = (pTVar1->fields)._Visualization_k__BackingField;
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pTVar1 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
      if ((pTVar1 == (ThemeWorldObject *)0x0) ||
         (pTVar2 = (pTVar1->fields)._Visualization_k__BackingField, pTVar2 == (Theme *)0x0))
      goto code_?;
      Theme::Theme_Deactivate(pTVar2,(MethodInfo *)0x0);
    }
    pXVar4 = (XpBoostParticlePreviewer *)
             ThemeRepository::ThemeRepository_GetThemePrefab(this_00,identifier,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar4,Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
      Theme::Theme_InitializeForPreview((Theme *)pXVar4,(MethodInfo *)0x0);
      Theme::Theme_Activate((Theme *)pXVar4,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pTVar2 = (this->fields).previewTheme;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pTVar2 = (this->fields).previewTheme;
        if (pTVar2 == (Theme *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        in_stack_6 = (MethodInfo *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar5,(MethodInfo *)0x0);
      }
      menuController = (this->fields).menuController;
      (this->fields).previewTheme = (Theme *)pXVar4;
      if (menuController != (ThemeMenuController *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_01 = (ScaleAnimationBase *)
                  func_?(
                                 TypeInfo__ThemeMenuController___OpenSettingsForPreview_c__AnonStorey3
                                 );
        ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_6);
        if (this_01 != (ScaleAnimationBase *)0x0) {
          (this_01->fields).state = (int32_t)pXVar4;
          pTVar7 = (menuController->fields).previewSettingsPrefab;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pTVar7 = (ThemePreviewSettingsMenu *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             ((XpBoostParticlePreviewer *)pTVar7,
                              ThemePreviewSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemePreviewSettingsMenu>_ThemePreviewSettingsMenu_
                             );
          (this_01->fields)._._._._.m_CachedPtr = pTVar7;
          if (pTVar7 != (ThemePreviewSettingsMenu *)0x0) {
            ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_Initialize
                      (pTVar7,(Theme *)(this_01->fields).state,data,menuController,(MethodInfo *)0x0
                      );
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)menuController,(MethodInfo *)0x0);
            this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_02,(Object *)this_01,
                       MethodInfo__ThemeMenuController___OpenSettingsForPreview_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar5,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void LocalizeAndSetDescriptionText() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_LocalizeAndSetDescriptionText
               (ThemeSelection *this,MethodInfo *method)

{
  pTVar1 = (this->fields).themeDescription;
  pSVar2 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_OnDestroy
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived =
       (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0;
  return;
}


/* Void OnThemeRemovalWarningResolved(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_OnThemeRemovalWarningResolved
               (ThemeSelection *this,bool answer,ConfirmationPopup *popup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (answer != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__ThemeSelection->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__ThemeSelection___OnThemeRemovalWarningResolved_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__ThemeSelection->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__ThemeSelection->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
    if (this_00 == (ThemeRepository *)0x0) goto code_?;
    pTVar1 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
    if (pTVar1 == (ThemeWorldObject *)0x0) {
      worldObjectID = (IList_1_VoxelHit_ *)0xffffffff;
    }
    else {
      pTVar1 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
      if (pTVar1 == (ThemeWorldObject *)0x0) goto code_?;
      worldObjectID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pTVar1,(MethodInfo *)0x0);
    }
    if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    popup = (ConfirmationPopup *)0x0;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnregisterWorldObject
              (this_02,(int32_t)worldObjectID,(MethodInfo *)0x0);
  }
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <CreateThemeButtons>m__0() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__CreateThemeButtons_m__0
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeSelection___ShowThemeRemovalWarning_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    pSVar1 = TM::TM__(StringLiteral_This_will_remove_the_current_the,(MethodInfo *)0x0);
    arg1 = TM::TM__(StringLiteral_Are_you_sure_you_want_to_do_this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0_u000A_1_,(Object *)pSVar1,(Object *)arg1,(MethodInfo *)0x0)
    ;
    (this_00->fields)._._._._.m_CachedPtr = pSVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__ThemeSelection___ShowThemeRemovalWarning_c__AnonStorey2____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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


/* Void <GoBackToSettings>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__GoBackToSettings_m__2
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


/* Void <OnThemeRemovalWarningResolved>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__OnThemeRemovalWarningResolved_m__1
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


/* ThemeSelection() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__ctor
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentDescription = StringLiteral____Hover_over_a_theme_to_know_mo;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void set_PreviewTheme(Theme) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_set_PreviewTheme
               (ThemeSelection *this,Theme *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewTheme;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewTheme;
    if (pTVar1 == (Theme *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  (this->fields).previewTheme = value;
  return;
}


/* Void set_ThemeDescription(String) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_set_ThemeDescription
               (ThemeSelection *this,String *value,MethodInfo *method)

{
  pTVar1 = (this->fields).themeDescription;
  (this->fields).currentDescription = value;
  pSVar2 = TM::TM__(value,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

