
/* Void <SetupButtons>b__0() */

void Assembly-CSharp.dll::PlayerElementState+<>c__DisplayClass11_0::
     PlayerElementState_c_DisplayClass11_0__SetupButtons_b__0
               (PlayerElementState_c_DisplayClass11_0 *this,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__PlayerElementState____c__DisplayClass11_1___SetupButtons_b__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerElementState____c__DisplayClass11_1);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__PlayerElementState____c__DisplayClass11_1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  pPVar2 = (this->fields).__4__this;
  if (pPVar2 != (PlayerElementState *)0x0) {
    PlayerElementState::PlayerElementState_ValidateFriendRequest(pPVar2,(MethodInfo *)0x0);
    if (value != (Object *)0x0) {
      value[1].klass = (Object__Class *)::StringLiteral__;
      func_?();
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pMVar3 = (this->fields).player;
      if ((pMVar3 != (MVPlayer *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        bVar4 = MVNetworkGame+OperationRequests::
                MVNetworkGame_OperationRequests_RequestFriendShipByID
                          (this_00,(pMVar3->fields)._ProfileID_k__BackingField,
                           (String **)(value + 1),(MethodInfo *)0x0);
        if (bVar4 == 0) {
          pPVar2 = (this->fields).__4__this;
          if (pPVar2 == (PlayerElementState *)0x0) goto code_?;
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPVar2,(MethodInfo *)0x0);
          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__PlayerElementState____c__DisplayClass11_1___SetupButtons_b__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          uVar1 = 0;
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
        }
        *unaff_FS_OFFSET = uVar1;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <SetupButtons>b__1() */

void Assembly-CSharp.dll::PlayerElementState+<>c__DisplayClass11_0::
     PlayerElementState_c_DisplayClass11_0__SetupButtons_b__1
               (PlayerElementState_c_DisplayClass11_0 *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  uStack_3 = 0;
  this_00 = (this->fields).__4__this;
  if (this_00 != (PlayerElementState *)0x0) {
    PlayerElementState::PlayerElementState_ValidateFriendRequest(this_00,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pFVar4 = (this->fields).friend_1;
    if ((pFVar4 != (Friend *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAcceptFriendShip
                (this_01,(pFVar4->fields).friendID,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_2;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <SetupButtons>b__3() */

void Assembly-CSharp.dll::PlayerElementState+<>c__DisplayClass11_0::
     PlayerElementState_c_DisplayClass11_0__SetupButtons_b__3
               (PlayerElementState_c_DisplayClass11_0 *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pFVar1 = (this->fields).friend_1;
  if ((pFVar1 != (Friend *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestRejectFriendShip
              (this_00,(pFVar1->fields).friendID,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

