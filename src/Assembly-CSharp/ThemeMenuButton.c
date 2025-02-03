
/* Void Awake() */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_Awake
               (ThemeMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeRepository);
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  if (pTVar1 != (ThemeRepository *)0x0) {
    if ((pTVar1->fields)._ThemesEnabled_k__BackingField == 0) {
      pBVar2 = (this->fields).button;
      if (pBVar2 != (Button *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar2,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if (this_02 != (MVLocalPlayer *)0x0) {
          PVar3 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_02,(MethodInfo *)0x0);
          this = unaff_EBX;
          if (cRam_? == '\0') {
            this = (ThemeMenuButton *)&TypeInfo__ThemeMenuButton;
            func_?();
            cRam_? = '\x01';
          }
          pBVar2 = (this->fields).button;
          if ((char)PVar3 == '\x02') {
            if (pBVar2 != (Button *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                        ((Selectable *)pBVar2,1,(MethodInfo *)0x0);
              pTVar4 = (this->fields).toolTip;
              if ((TypeInfo__ThemeMenuButton->_1).cctor_finished_or_no_cctor == 0) {
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
            if ((TypeInfo__ThemeMenuButton->_1).cctor_finished_or_no_cctor == 0) {
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_OnClick
               (ThemeMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ThemeMenuButton::IClickHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ThemeMenuButton____c___OnClick_b__6_0_ThemeMenuButton__IClickHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemeMenuButton____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ThemeMenuButton____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ThemeMenuButton____c);
  }
  callbackFunction = TypeInfo__ThemeMenuButton____c->static_fields->__9__6_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_ThemeMenuButton_IClickHandler_ *)0x0) {
    if ((TypeInfo__ThemeMenuButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ThemeMenuButton____c);
    }
    object = TypeInfo__ThemeMenuButton____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_ThemeMenuButton_IClickHandler_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ThemeMenuButton____c___OnClick_b__6_0_ThemeMenuButton__IClickHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ThemeMenuButton____c->static_fields->__9__6_0 = callbackFunction;
    func_?(&TypeInfo__ThemeMenuButton____c->static_fields->__9__6_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ThemeMenuButton::IClickHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>_
            );
  return;
}


/* Void SetButtonAvailability(PlanetOwnershipType) */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_SetButtonAvailability
               (ThemeMenuButton *this,PlanetOwnershipType__Enum planetOwnership,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeMenuButton);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).button;
  if ((undefined1)planetOwnership == PlanetOwnershipType__Enum_Owner) {
    if (this_00 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,1,(MethodInfo *)0x0);
      pTVar1 = (this->fields).toolTip;
      if ((TypeInfo__ThemeMenuButton->_1).cctor_finished_or_no_cctor == 0) {
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
    if ((TypeInfo__ThemeMenuButton->_1).cctor_finished_or_no_cctor == 0) {
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


/* ThemeMenuButton() */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeMenuButton);
    func_?(&StringLiteral_Themes_can_only_be_changed_by_th);
    func_?(&StringLiteral_Theme_options);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Themes_can_only_be_changed_by_th,(MethodInfo *)0x0);
  TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonDisabled = pSVar1;
  func_?(TypeInfo__ThemeMenuButton->static_fields,pSVar1);
  pSVar1 = TM::TM__(StringLiteral_Theme_options,(MethodInfo *)0x0);
  TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled = pSVar1;
  func_?(&TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled,pSVar1);
  return;
}

