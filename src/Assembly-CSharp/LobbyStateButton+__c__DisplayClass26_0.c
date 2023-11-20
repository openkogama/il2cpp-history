
/* Void <OnPressPlay>b__0(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton+<>c__DisplayClass26_0::
     LobbyStateButton_c_DisplayClass26_0__OnPressPlay_b__0
               (LobbyStateButton_c_DisplayClass26_0 *this,InterstitialAdResult__Enum result,
               MethodInfo *method)

{
  if ((((this->fields).__4__this != (LobbyStateButton *)0x0) &&
      (pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
      pMVar1 != (MVNetworkGame *)0x0)) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if (((pMVar2->fields).currentGameState == 2) && ((this->fields).hasGameWinningCondition == 0)) {
      pLVar3 = (this->fields).__4__this;
      if ((pLVar3 != (LobbyStateButton *)0x0) &&
         ((pLVar3->fields).lobbyStateButton != (Button *)0x0)) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
          func_?(&TypeInfo__UnityEngine__Object);
          func_?(&
                          bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                         );
          cRam_? = '\x01';
        }
        bVar4 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::
                SetPropertyUtility_SetStruct
                          ((bool *)0x9c,0,
                           bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                          );
        if (bVar4 != 0) {
          if (cRam_? == '\0') {
            if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?();
            }
            pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                     EventSystem_get_current((MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)pEVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar5 == (EventSystem *)0x0) {
code_?:
                func_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              x = (pEVar5->fields).m_CurrentSelected;
              y = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)0x0,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                         EventSystem_get_current((MethodInfo *)0x0);
                if (pEVar5 == (EventSystem *)0x0) goto code_?;
                UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                EventSystem_SetSelectedGameObject_1(pEVar5,(GameObject *)0x0,(MethodInfo *)0x0);
              }
            }
          }
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                    ((Selectable *)0x0,(MethodInfo *)0x0);
        }
        return;
      }
    }
    else if ((((this->fields).__4__this != (LobbyStateButton *)0x0) &&
             ((pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
              pMVar1 != (MVNetworkGame *)0x0 &&
              ((pMVar1->fields)._NetworkGameStateListener_k__BackingField !=
               (MVNetworkGameStateListener *)0x0)))) &&
            (pLVar3 = (this->fields).__4__this, pLVar3 != (LobbyStateButton *)0x0)) {
      LobbyStateButton::LobbyStateButton_CreateTeamMenu(pLVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OnPressPlay>b__1(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton+<>c__DisplayClass26_0::
     LobbyStateButton_c_DisplayClass26_0__OnPressPlay_b__1
               (LobbyStateButton_c_DisplayClass26_0 *this,InterstitialAdResult__Enum result,
               MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (this_00 != (LobbyStateButton *)0x0) {
    LobbyStateButton::LobbyStateButton_CreateBriefing
              (this_00,(this->fields).winCon,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

