
/* Void Initialize(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_Initialize
               (PlayerElementState *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  PlayerElementState_SetupButtons(this,player,friend_1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((*(Component **)(in_stack_1 + 0x14) != (Component *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (*(Component **)(in_stack_1 + 0x14),(MethodInfo *)0x0),
     pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    if ((*(Component **)(in_stack_1 + 0x1c) != (Component *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (*(Component **)(in_stack_1 + 0x1c),(MethodInfo *)0x0),
       pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      if ((*(Component **)(in_stack_1 + 0x18) != (Component *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(in_stack_1 + 0x18),(MethodInfo *)0x0),
         pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        if ((*(Component **)(in_stack_1 + 0x10) != (Component *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (*(Component **)(in_stack_1 + 0x10),(MethodInfo *)0x0),
           pGVar3 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          if ((*(Component **)(in_stack_1 + 0x20) != (Component *)0x0) &&
             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (*(Component **)(in_stack_1 + 0x20),(MethodInfo *)0x0),
             pGVar3 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar4 != (MVNetworkGame *)0x0) &&
               (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
               iVar5 = _UNK_?, this_01 != (MVLocalPlayer *)0x0)) {
              iVar6 = (this_01->fields)._._ActorNr_k__BackingField;
              MVar7 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              if (MVar7 == MVGameMode__Enum_Edit) {
                PVar8 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0)
                ;
                bVar9 = (char)PVar8 == '\x02';
              }
              else {
                bVar9 = false;
              }
              if (*(Component **)(in_stack_1 + 0x20) != (Component *)0x0) {
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject
                                   (*(Component **)(in_stack_1 + 0x20),(MethodInfo *)0x0);
                bVar10 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_01,(MethodInfo *)0x0);
                if ((bVar10 == 0) &&
                   (bVar10 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_01,(MethodInfo *)0x0),
                   bVar10 != 0 || bVar9)) {
                  bVar9 = iVar5 != iVar6;
                }
                else {
                  bVar9 = false;
                }
                if (pGVar3 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,bVar9,(MethodInfo *)0x0);
                  bVar10 = MVPlayer::MVPlayer_get_IsTourist
                                    ((MVPlayer *)&UNK_?,(MethodInfo *)0x0);
                  if (((bVar10 != 0) ||
                      (bVar10 = MVPlayer::MVPlayer_get_IsTourist
                                         ((MVPlayer *)this_01,(MethodInfo *)0x0), bVar10 != 0)) ||
                     (iVar5 == iVar6)) {
                    return;
                  }
                  if ((*(Component **)(in_stack_1 + 0x10) != (Component *)0x0) &&
                     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject
                                         (*(Component **)(in_stack_1 + 0x10),
                                          (MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar3,pGVar2 == (GameObject *)0x0,(MethodInfo *)0x0);
                    if (pGVar2 == (GameObject *)0x0) {
                      return;
                    }
                    if (pGVar2[1].monitor != (MonitorData *)0x1) {
                      return;
                    }
                    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (((pMVar4 != (MVNetworkGame *)0x0) &&
                        (pFVar11 = (pMVar4->fields)._Friends_k__BackingField,
                        pFVar11 != (FriendList *)0x0)) &&
                       (this_00 = (Dictionary_2_System_UInt32_System_Object_ *)
                                  (pFVar11->fields).friends,
                       this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0)) {
                      bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              UInt32,System::Object]::
                              Dictionary_2_System_UInt32_System_Object__ContainsValue
                                        (this_00,(Object *)pGVar2,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                        );
                      if ((*(Component **)(in_stack_1 + 0x14) != (Component *)0x0) &&
                         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject
                                             (*(Component **)(in_stack_1 + 0x14),
                                              (MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar2,bVar10,(MethodInfo *)0x0);
                        if ((*(Component **)(in_stack_1 + 0x1c) != (Component *)0x0) &&
                           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject
                                               (*(Component **)(in_stack_1 + 0x1c),
                                                (MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar2,bVar10 ^ 1,(MethodInfo *)0x0);
                          if ((*(Component **)(in_stack_1 + 0x18) != (Component *)0x0) &&
                             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_gameObject
                                                 (*(Component **)(in_stack_1 + 0x18),
                                                  (MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
                          {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar2,bVar10 ^ 1,(MethodInfo *)0x0);
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
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OpenUserManagement() */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_OpenUserManagement
               (PlayerElementState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                   );
    func_?(&
                    OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PlayerElementState____c__DisplayClass9_0___OpenUserManagement_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerElementState____c__DisplayClass9_0);
    func_?(&
                    MethodInfo__PlayerElementState____c__DisplayClass9_1___OpenUserManagement_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerElementState____c__DisplayClass9_1);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = (MethodInfo *)&UNK_?;
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar2 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_01,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar3 != MVGameMode__Enum_Edit) {
          return;
        }
        PVar4 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
        if ((char)PVar4 != '\x02') {
          return;
        }
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,pMVar1);
        original_00 = _UNK_?;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar5 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            (original_00,
                             OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                            );
        if (value != (Object *)0x0) {
          value[1].klass = pOVar5;
          func_?(value + 1,pOVar5);
          pOVar5 = value[1].klass;
          if ((_UNK_? != (int *)0x0) &&
             (pSVar6 = (String *)
                        (**(code **)(*_UNK_? + 0x310))
                                  (_UNK_?,*(undefined4 *)(*_UNK_? + 0x314)),
             pOVar5 != (Object__Class *)0x0)) {
            if (cRam_? == '\0') {
              func_?(&::StringLiteral__);
              func_?(&StringLiteral_will_be_kicked_and_unable_to_rej);
              cRam_? = '\x01';
            }
            pIVar7 = (pOVar5->_0).byval_arg.data.array;
            if (pIVar7 != (Il2CppArrayType *)0x0) {
              pIVar8 = pIVar7->etype;
              uVar9._0_2_ = pIVar8[99].attrs;
              uVar9._2_1_ = pIVar8[99].type;
              uVar9._3_1_ = pIVar8[99].field_0x7;
              (*(code *)pIVar8[99].data)(pIVar7,pSVar6,uVar9);
              piVar10 = *(int **)&(pOVar5->_0).byval_arg.attrs;
              str2 = TM::TM__(StringLiteral_will_be_kicked_and_unable_to_rej,(MethodInfo *)0x0);
              pSVar6 = mscorlib.dll::System::String::String_Concat_4
                                  (pSVar6,::StringLiteral__,str2,(MethodInfo *)0x0);
              if (piVar10 != (int *)0x0) {
                (**(code **)(*piVar10 + 0x318))(piVar10,pSVar6,*(undefined4 *)(*piVar10 + 0x31c));
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)&UNK_?,(MethodInfo *)0x0);
                callbackFunction =
                     (ExecuteEvents_EventFunction_1_System_Object_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
                pMVar1 = 
                MethodInfo__PlayerElementState____c__DisplayClass9_1___OpenUserManagement_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                ;
                goto code_?;
              }
            }
          }
        }
      }
      else {
        value = (Object *)func_?(TypeInfo__PlayerElementState____c__DisplayClass9_0);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,pMVar1);
        original = (this->fields).adminToolsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar5 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                            );
        if (value != (Object *)0x0) {
          value[1].klass = pOVar5;
          func_?(value + 1,pOVar5);
          pTVar11 = (this->fields).playerName;
          pOVar5 = value[1].klass;
          if ((pTVar11 != (Text *)0x0) &&
             (pSVar6 = (String *)
                        (*(code *)(pTVar11->klass->vtable).get_text.method)
                                  (pTVar11,(pTVar11->klass->vtable).set_text.methodPtr),
             pOVar5 != (Object__Class *)0x0)) {
            AdminToolController::AdminToolController_Initialize
                      ((AdminToolController *)pOVar5,pSVar6,(MethodInfo *)0x0);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            pMVar1 = 
            MethodInfo__PlayerElementState____c__DisplayClass9_0___OpenUserManagement_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
            ;
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,pMVar1,
                       (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetButtonVisibility(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_SetButtonVisibility
               (PlayerElementState *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                   );
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).pendingFriendship;
  if ((pBVar1 != (Button *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pBVar1 = (this->fields).cancel;
    if ((pBVar1 != (Button *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pBVar1 = (this->fields).acceptFriendRequest;
      if ((pBVar1 != (Button *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pBVar1 = (this->fields).requestFriendship;
        if ((pBVar1 != (Button *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pBVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pBVar1 = (this->fields).manageUserButton;
          if ((pBVar1 != (Button *)0x0) &&
             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pBVar1,(MethodInfo *)0x0),
             pGVar3 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar4 != (MVNetworkGame *)0x0) &&
               (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
               iVar5 = _UNK_?, this_01 != (MVLocalPlayer *)0x0)) {
              iVar6 = (this_01->fields)._._ActorNr_k__BackingField;
              MVar7 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              if (MVar7 == MVGameMode__Enum_Edit) {
                PVar8 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0)
                ;
                bVar9 = (char)PVar8 == '\x02';
              }
              else {
                bVar9 = false;
              }
              pBVar1 = (this->fields).manageUserButton;
              if (pBVar1 != (Button *)0x0) {
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pBVar1,(MethodInfo *)0x0);
                bVar10 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_01,(MethodInfo *)0x0);
                if ((bVar10 == 0) &&
                   (bVar10 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_01,(MethodInfo *)0x0),
                   bVar10 != 0 || bVar9)) {
                  bVar9 = iVar5 != iVar6;
                }
                else {
                  bVar9 = false;
                }
                if (pGVar3 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,bVar9,(MethodInfo *)0x0);
                  bVar10 = MVPlayer::MVPlayer_get_IsTourist
                                    ((MVPlayer *)&UNK_?,(MethodInfo *)0x0);
                  if (((bVar10 != 0) ||
                      (bVar10 = MVPlayer::MVPlayer_get_IsTourist
                                         ((MVPlayer *)this_01,(MethodInfo *)0x0), bVar10 != 0)) ||
                     (iVar5 == iVar6)) {
                    return;
                  }
                  pBVar1 = (this->fields).requestFriendship;
                  if ((pBVar1 != (Button *)0x0) &&
                     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pBVar1,(MethodInfo *)0x0),
                     pGVar3 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar3,pGVar2 == (GameObject *)0x0,(MethodInfo *)0x0);
                    if (pGVar2 == (GameObject *)0x0) {
                      return;
                    }
                    if (pGVar2[1].monitor != (MonitorData *)0x1) {
                      return;
                    }
                    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (((pMVar4 != (MVNetworkGame *)0x0) &&
                        (pFVar11 = (pMVar4->fields)._Friends_k__BackingField,
                        pFVar11 != (FriendList *)0x0)) &&
                       (this_00 = (Dictionary_2_System_UInt32_System_Object_ *)
                                  (pFVar11->fields).friends,
                       this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0)) {
                      bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              UInt32,System::Object]::
                              Dictionary_2_System_UInt32_System_Object__ContainsValue
                                        (this_00,(Object *)pGVar2,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                        );
                      pBVar1 = (this->fields).pendingFriendship;
                      if ((pBVar1 != (Button *)0x0) &&
                         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pBVar1,(MethodInfo *)0x0),
                         pGVar2 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar2,bVar10,(MethodInfo *)0x0);
                        pBVar1 = (this->fields).cancel;
                        if ((pBVar1 != (Button *)0x0) &&
                           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject((Component *)pBVar1,(MethodInfo *)0x0)
                           , pGVar2 != (GameObject *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar2,bVar10 ^ 1,(MethodInfo *)0x0);
                          pBVar1 = (this->fields).acceptFriendRequest;
                          if ((pBVar1 != (Button *)0x0) &&
                             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_gameObject
                                                 ((Component *)pBVar1,(MethodInfo *)0x0),
                             pGVar2 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar2,bVar10 ^ 1,(MethodInfo *)0x0);
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
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetupButtons(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_SetupButtons
               (PlayerElementState *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__0__);
    func_?(&MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__1__);
    func_?(&MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__2__);
    func_?(&MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__3__);
    func_?(&TypeInfo__PlayerElementState____c__DisplayClass11_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerElementState____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)player;
    func_?(&value[1].monitor,player);
    value[2].klass = (Object__Class *)friend_1;
    func_?(value + 2,friend_1);
    pBVar1 = (this->fields).requestFriendship;
    if (pBVar1 != (Button *)0x0) {
      pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
               func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,value,
                 MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__0__,
                 (MethodInfo *)0x0);
      if (pUVar2 != (UnityEvent *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                  (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
        pBVar1 = (this->fields).acceptFriendRequest;
        if (pBVar1 != (Button *)0x0) {
          pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
          pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                   func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar3,value,
                     MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__1__,
                     (MethodInfo *)0x0);
          if (pUVar2 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
            pBVar1 = (this->fields).cancel;
            if (pBVar1 != (Button *)0x0) {
              pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
              pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                       func_?(TypeInfo__UnityEngine__Events__UnityAction);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar3,value,
                         MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__2__
                         ,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEvent *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                          (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
                pBVar1 = (this->fields).pendingFriendship;
                if (pBVar1 != (Button *)0x0) {
                  pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
                  pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                           func_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar3,value,
                             MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__3__
                             ,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEvent *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::
                    UnityEvent_AddListener(pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ValidateFriendRequest() */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_ValidateFriendRequest
               (PlayerElementState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BadgeManager);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__)
    ;
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      iVar3 = (pMVar2->fields)._.level;
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BadgeManager);
      }
      iVar3 = BadgeManager::BadgeManager_GetFriendsLimit(iVar3,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 != (MVNetworkGame *)0x0) &&
          (pFVar4 = (pMVar1->fields)._Friends_k__BackingField, pFVar4 != (FriendList *)0x0)) &&
         (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)(pFVar4->fields).friends,
         this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__
                          );
        if (iVar5 < iVar3) {
          return;
        }
        iVar3 = func_?();
        func_?();
        func_?();
        BadgeManager::BadgeManager_GetFriendsLimit(iVar3,(MethodInfo *)0x0);
        pMVar6 = (MethodInfo *)0x0;
        pSVar7 = (String *)func_?();
        TM::TM__(pSVar7,pMVar6);
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        args = (Object__Array *)func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?(args);
        func_?();
        func_?();
        uVar8 = func_?();
        func_?(args);
        func_?(args,uVar8);
        func_?();
        pSVar7 = mscorlib.dll::System::String::String_Format_3((String *)0x0,args,(MethodInfo *)0x0)
        ;
        pMVar6 = (MethodInfo *)0x0;
        pSVar9 = (String *)func_?();
        pSVar9 = TM::TM__(pSVar9,pMVar6);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar9,(MethodInfo *)0x0);
        func_?();
        this_01 = (Exception *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar7,(MethodInfo *)0x0);
        func_?();
        func_?();
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

