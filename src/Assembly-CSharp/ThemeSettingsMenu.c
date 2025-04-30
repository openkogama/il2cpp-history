
/* Void Initialize(ThemeMenuController, Theme) */

void Assembly-CSharp.dll::ThemeSettingsMenu::ThemeSettingsMenu_Initialize
               (ThemeSettingsMenu *this,ThemeMenuController *menuController,Theme *theme,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TextButton_MethodInfo__UnityEngine__Object__Instantiate<TextButton>_TextButton__UnityEngine__Transform__bool_
                   );
    func_?(&
                    ThemeSettingsSideBar_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsSideBar>_ThemeSettingsSideBar__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__ThemeSettingsMenu____c__DisplayClass2_0___Initialize_b__0__);
    func_?(&TypeInfo__ThemeSettingsMenu____c__DisplayClass2_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeSettingsMenu____c__DisplayClass2_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)menuController;
    func_?(value + 1,menuController);
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
    ppTVar2 = &(this->fields).sideBar;
    *ppTVar2 = pTVar1;
    func_?(ppTVar2,pTVar1);
    if (*ppTVar2 != (ThemeSettingsSideBar *)0x0) {
      ppTVar3 = &(this->fields)._.theme;
      pRVar4 = ((*ppTVar2)->fields).content;
      *ppTVar3 = theme;
      func_?(ppTVar3,theme);
      ppRVar5 = &(this->fields)._.content;
      *ppRVar5 = pRVar4;
      func_?(ppRVar5,pRVar4);
      if ((theme != (Theme *)0x0) &&
         (this_00 = (theme->fields)._Settings_k__BackingField, this_00 != (SettingsWrapper *)0x0)) {
        ThemeSettings::SettingsWrapper::SettingsWrapper_SubscribeToSettingsUI
                  (this_00,(IMenu *)this,(MethodInfo *)0x0);
        ppTVar6 = &(this->fields).browseThemesButton;
        pTVar7 = (TextButton *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           ((Object *)*ppTVar6,(Transform *)(this->fields)._.settingsArea,0,
                            TextButton_MethodInfo__UnityEngine__Object__Instantiate<TextButton>_TextButton__UnityEngine__Transform__bool_
                           );
        *ppTVar6 = pTVar7;
        func_?(ppTVar6,pTVar7);
        if ((*ppTVar6 != (TextButton *)0x0) &&
           (pBVar8 = ((*ppTVar6)->fields).button, pBVar8 != (Button *)0x0)) {
          this_01 = (UnityEvent *)(pBVar8->fields).m_OnClick;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)
                    func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,value,
                     MethodInfo__ThemeSettingsMenu____c__DisplayClass2_0___Initialize_b__0__,
                     (MethodInfo *)0x0);
          if (this_01 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_01,(UnityAction *)this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

