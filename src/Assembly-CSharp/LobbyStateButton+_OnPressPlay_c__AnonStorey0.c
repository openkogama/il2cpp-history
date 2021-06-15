
/* Void <>m__0(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton+<OnPressPlay>c__AnonStorey0::
     LobbyStateButton_OnPressPlay_c_AnonStorey0___m__0
               (LobbyStateButton_OnPressPlay_c_AnonStorey0 *this,InterstitialAdResult__Enum result,
               MethodInfo *method)

{
  pLVar1 = (this->fields)._this;
  if (pLVar1 == (LobbyStateButton *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = LobbyStateButton::LobbyStateButton_get_IsRoundEnded(pLVar1,(MethodInfo *)0x0);
  if ((bVar3 == 0) || ((this->fields).hasGameWinningCondition != 0)) {
    pLVar1 = (this->fields)._this;
    if (pLVar1 != (LobbyStateButton *)0x0) {
      LobbyStateButton::LobbyStateButton_get_IsRoundEnded(pLVar1,(MethodInfo *)0x0);
      pLVar1 = (this->fields)._this;
      if (pLVar1 != (LobbyStateButton *)0x0) {
        LobbyStateButton::LobbyStateButton_CreateTeamMenu(pLVar1,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  }
  pLVar1 = (this->fields)._this;
  if ((pLVar1 == (LobbyStateButton *)0x0) || ((pLVar1->fields).lobbyStateButton == (Button *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  bVar3 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::SetPropertyUtility_SetStruct_4
                    ((bool *)0x7c,in_stack_4,
                     bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                    );
  if (bVar3 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
      func_?();
    }
    pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pEVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
        func_?();
      }
      pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                         ((MethodInfo *)0x0);
      if (pEVar5 == (EventSystem *)0x0) {
code_?:
        func_?(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      x = (Object_1 *)
          System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
          Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
          Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                    ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                      *)pEVar5,(MethodInfo *)0x0);
      y = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)0x0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)y,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
          func_?();
        }
        pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
        if (pEVar5 == (EventSystem *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
        EventSystem_SetSelectedGameObject_1(pEVar5,(GameObject *)0x0,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') goto code_?;
  }
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_UpdateSelectionState
            ((Selectable *)0x0,(BaseEventData *)0x0,(MethodInfo *)0x0);
code_?:
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
            ((Selectable *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void <>m__1(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton+<OnPressPlay>c__AnonStorey0::
     LobbyStateButton_OnPressPlay_c_AnonStorey0___m__1
               (LobbyStateButton_OnPressPlay_c_AnonStorey0 *this,InterstitialAdResult__Enum result,
               MethodInfo *method)

{
  this_00 = (this->fields)._this;
  if (this_00 != (LobbyStateButton *)0x0) {
    LobbyStateButton::LobbyStateButton_CreateBriefing
              (this_00,(this->fields).winCon,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

