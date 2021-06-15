
/* Void Initialize(ThemeMenuController, Theme) */

void Assembly-CSharp.dll::ThemeSettingsMenu::ThemeSettingsMenu_Initialize
               (ThemeSettingsMenu *this,ThemeMenuController *menuController,Theme *theme,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeSettingsMenu___Initialize_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = menuController;
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
        if (pTVar3 != (ThemeSettingsSideBar *)0x0) {
          pRVar4 = (pTVar3->fields).content;
          (this->fields)._.theme = theme;
          (this->fields)._.content = pRVar4;
          if ((theme != (Theme *)0x0) &&
             (pSVar5 = (theme->fields)._Settings_k__BackingField, pSVar5 != (SettingsWrapper *)0x0))
          {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            (pSVar5->fields).menu = (IMenu *)this;
            func_?(0,TypeInfo__ThemeSettings__IMenu,this);
            pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)(this->fields).browseThemesButton,
                                TextButton_MethodInfo__UnityEngine__Object__Instantiate<TextButton>_TextButton_
                               );
            (this->fields).browseThemesButton = (TextButton *)pXVar1;
            if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pXVar1,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar2,(Transform *)(this->fields)._.settingsArea,0,(MethodInfo *)0x0);
                pTVar6 = (this->fields).browseThemesButton;
                if ((pTVar6 != (TextButton *)0x0) &&
                   (this_00 = (HoverCraftMotor *)(pTVar6->fields).button,
                   this_00 != (HoverCraftMotor *)0x0)) {
                  this_02 = (UnityEvent *)
                            HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                                      (this_00,(MethodInfo *)0x0);
                  this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_03,(Object *)this_01,
                             MethodInfo__ThemeSettingsMenu___Initialize_c__AnonStorey0____m__0__,
                             (MethodInfo *)0x0);
                  if (this_02 != (UnityEvent *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::
                    UnityEvent_AddListener(this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

