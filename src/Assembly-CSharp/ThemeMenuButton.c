
/* Void Awake() */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_Awake
               (ThemeMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  if (pTVar1 != (ThemeRepository *)0x0) {
    if ((pTVar1->fields)._ThemesEnabled_k__BackingField == 0) {
      pBVar2 = (this->fields).button;
      if (pBVar2 != (Button *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pBVar2,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if (this_02 != (MVLocalPlayer *)0x0) {
          MVar3 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_02,(MethodInfo *)0x0);
          this = unaff_ESI;
          if (cRam_? == '\0') {
            this = _UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          pBVar2 = (this->fields).button;
          if (MVar3 == MVLocalPlayer_PlanetOwnershipType__Enum_Owner) {
            if (pBVar2 != (Button *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                        ((Selectable *)pBVar2,1,(MethodInfo *)0x0);
              pTVar4 = (this->fields).toolTip;
              if ((((uint)(TypeInfo__ThemeMenuButton->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__ThemeMenuButton->_1).cctor_started == 0)) {
                func_?();
              }
              if (pTVar4 != (ToolTip *)0x0) {
                ToolTip::ToolTip_SetText
                          (pTVar4,TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled
                           ,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else if (pBVar2 != (Button *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                      ((Selectable *)pBVar2,0,(MethodInfo *)0x0);
            pTVar4 = (this->fields).toolTip;
            if ((((uint)(TypeInfo__ThemeMenuButton->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__ThemeMenuButton->_1).cctor_started == 0)) {
              func_?();
            }
            if (pTVar4 != (ToolTip *)0x0) {
              ToolTip::ToolTip_SetText
                        (pTVar4,TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonDisabled,
                         (MethodInfo *)0x0);
              return;
            }
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


/* Void OnClick() */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_OnClick
               (ThemeMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__ThemeMenuButton->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ThemeMenuButton->_1).cctor_started == 0)) {
    func_?(TypeInfo__ThemeMenuButton);
  }
  if (TypeInfo__ThemeMenuButton->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_ThemeMenuButton_IClickHandler_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ThemeMenuButton___OnClick_m__0_ThemeMenuButton__IClickHandler__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__ThemeMenuButton->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__ThemeMenuButton->_1).cctor_started == 0)) {
      func_?(TypeInfo__ThemeMenuButton);
    }
    TypeInfo__ThemeMenuButton->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_ThemeMenuButton_IClickHandler_ *)this_00;
  }
  if ((((uint)(TypeInfo__ThemeMenuButton->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ThemeMenuButton->_1).cctor_started == 0)) {
    func_?(TypeInfo__ThemeMenuButton);
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ThemeMenuButton->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ThemeMenuButton::IClickHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>_
            );
  return;
}


/* Void SetButtonAvailability(MVLocalPlayer+PlanetOwnershipType) */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_SetButtonAvailability
               (ThemeMenuButton *this,MVLocalPlayer_PlanetOwnershipType__Enum planetOwnership,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).button;
  if (planetOwnership == MVLocalPlayer_PlanetOwnershipType__Enum_Owner) {
    if (this_00 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,1,(MethodInfo *)0x0);
      pTVar1 = (this->fields).toolTip;
      if ((((uint)(TypeInfo__ThemeMenuButton->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__ThemeMenuButton->_1).cctor_started == 0)) {
        func_?();
      }
      if (pTVar1 != (ToolTip *)0x0) {
        ToolTip::ToolTip_SetText
                  (pTVar1,TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,0,(MethodInfo *)0x0);
    pTVar1 = (this->fields).toolTip;
    if ((((uint)(TypeInfo__ThemeMenuButton->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__ThemeMenuButton->_1).cctor_started == 0)) {
      func_?();
    }
    if (pTVar1 != (ToolTip *)0x0) {
      ToolTip::ToolTip_SetText
                (pTVar1,TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonDisabled,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnClick>m__0(ThemeMenuButton+IClickHandler, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton__OnClick_m__0
               (ThemeMenuButton_IClickHandler *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (ThemeMenuButton_IClickHandler *)0x0) {
    func_?(0,TypeInfo__ThemeMenuButton__IClickHandler,handler);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ThemeMenuButton() */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Themes_can_only_be_changed_by_th,(MethodInfo *)0x0);
  TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonDisabled = pSVar1;
  pSVar1 = TM::TM__(StringLiteral_Theme_options,(MethodInfo *)0x0);
  TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled = pSVar1;
  return;
}

