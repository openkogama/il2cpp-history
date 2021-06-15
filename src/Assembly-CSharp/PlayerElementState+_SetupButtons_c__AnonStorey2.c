
/* Void <>m__0() */

void Assembly-CSharp.dll::PlayerElementState+<SetupButtons>c__AnonStorey2::
     PlayerElementState_SetupButtons_c_AnonStorey2___m__0
               (PlayerElementState_SetupButtons_c_AnonStorey2 *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_01 = (ScaleAnimationBase *)
            func_?(
                           TypeInfo__PlayerElementState__SetupButtons_c__AnonStorey2___SetupButtons_c__AnonStorey3
                           );
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,unaff_EDI);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields).state = (int32_t)this;
    pPVar3 = (this->fields)._this;
    if (pPVar3 != (PlayerElementState *)0x0) {
      PlayerElementState::PlayerElementState_ValidateFriendRequest(pPVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      (this_01->fields)._._._._.m_CachedPtr = TypeInfo__System__String->static_fields->Empty;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      this_00 = (this->fields).player;
      if (this_00 != (MVPlayer *)0x0) {
        id = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_00,(MethodInfo *)0x0);
        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
          bVar4 = MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_RequestFriendShipByID
                            (this_02,(int32_t)id,(String **)&this_01->fields,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            pPVar3 = (this->fields)._this;
            if (pPVar3 == (PlayerElementState *)0x0) goto code_?;
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pPVar3,(MethodInfo *)0x0);
            this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_03,(Object *)this_01,
                       MethodInfo__PlayerElementState__SetupButtons_c__AnonStorey2___SetupButtons_c__AnonStorey3____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
          }
          *unaff_FS_OFFSET = uStack_2;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <>m__1() */

void Assembly-CSharp.dll::PlayerElementState+<SetupButtons>c__AnonStorey2::
     PlayerElementState_SetupButtons_c_AnonStorey2___m__1
               (PlayerElementState_SetupButtons_c_AnonStorey2 *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  this_00 = (this->fields)._this;
  if (this_00 != (PlayerElementState *)0x0) {
    PlayerElementState::PlayerElementState_ValidateFriendRequest(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pFVar4 = (this->fields).friend_1;
    if ((pFVar4 != (Friend *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAcceptFriendShip
                (this_01,(pFVar4->fields).friendID,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <>m__2() */

void Assembly-CSharp.dll::PlayerElementState+<SetupButtons>c__AnonStorey2::
     PlayerElementState_SetupButtons_c_AnonStorey2___m__2
               (PlayerElementState_SetupButtons_c_AnonStorey2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pFVar1 = (this->fields).friend_1;
  if ((pFVar1 != (Friend *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestRejectFriendShip
              (this_00,(pFVar1->fields).friendID,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__3() */

void Assembly-CSharp.dll::PlayerElementState+<SetupButtons>c__AnonStorey2::
     PlayerElementState_SetupButtons_c_AnonStorey2___m__3
               (PlayerElementState_SetupButtons_c_AnonStorey2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pFVar1 = (this->fields).friend_1;
  if ((pFVar1 != (Friend *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestRejectFriendShip
              (this_00,(pFVar1->fields).friendID,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

