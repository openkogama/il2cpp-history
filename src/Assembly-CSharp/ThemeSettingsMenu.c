
/* Void Initialize(ThemeMenuController, Theme) */

void Assembly-CSharp.dll::ThemeSettingsMenu::ThemeSettingsMenu_Initialize
               (ThemeSettingsMenu *this,ThemeMenuController *menuController,Theme *theme,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TextButton_MethodInfo__UnityEngine__Object__Instantiate<TextButton>_TextButton__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ThemeSettingsSideBar_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsSideBar>_ThemeSettingsSideBar__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeSettingsMenu____c__DisplayClass2_0___Initialize_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSettingsMenu____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemeSettingsMenu____c__DisplayClass2_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)menuController;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pTVar6 = (this->fields)._.sideBarPrefab;
    parent = (Transform *)(this->fields)._.settingsArea;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pTVar6 = (ThemeSettingsSideBar *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pTVar6,parent,0,
                        ThemeSettingsSideBar_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsSideBar>_ThemeSettingsSideBar__UnityEngine__Transform__bool_
                       );
    bVar1 = iRam_? != 0;
    (this->fields).sideBar = pTVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).sideBar >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pTVar6 = (this->fields).sideBar;
    if (pTVar6 != (ThemeSettingsSideBar *)0x0) {
      ThemeSettingsMenuBase::ThemeSettingsMenuBase_Initialize
                ((ThemeSettingsMenuBase *)this,theme,(pTVar6->fields).content,(MethodInfo *)0x0);
      pTVar7 = (TextButton *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)(this->fields).browseThemesButton,
                           (Transform *)(this->fields)._.settingsArea,0,
                           TextButton_MethodInfo__UnityEngine__Object__Instantiate<TextButton>_TextButton__UnityEngine__Transform__bool_
                          );
      bVar1 = iRam_? != 0;
      (this->fields).browseThemesButton = pTVar7;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).browseThemesButton >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pTVar7 = (this->fields).browseThemesButton;
      if ((pTVar7 != (TextButton *)0x0) &&
         (pBVar8 = (pTVar7->fields).button, pBVar8 != (Button *)0x0)) {
        pBVar9 = (pBVar8->fields).m_OnClick;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,object,
                   MethodInfo__ThemeSettingsMenu____c__DisplayClass2_0___Initialize_b__0__,
                   (MethodInfo *)0x0);
        if (pBVar9 != (Button_ButtonClickedEvent *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (InvokableCall *)FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_add_Delegate
                    (this_01,(UnityAction *)this_00,(MethodInfo *)0x0);
          pIVar10 = (pBVar9->fields)._._.m_Calls;
          if (pIVar10 != (InvokableCallList *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar11 = (pIVar10->fields).m_RuntimeCalls;
            if (pLVar11 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
              FUN_?(pLVar11,this_01);
              (pIVar10->fields).m_NeedsUpdate = 1;
              return;
            }
          }
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

