
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
                MVar8 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0)
                ;
                bVar9 = MVar8 == MVLocalPlayer_PlanetOwnershipType__Enum_Owner;
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
                                    (pGVar2,bVar10 == 0,(MethodInfo *)0x0);
                          if ((*(Component **)(in_stack_1 + 0x18) != (Component *)0x0) &&
                             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_gameObject
                                                 (*(Component **)(in_stack_1 + 0x18),
                                                  (MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
                          {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar2,bVar10 == 0,(MethodInfo *)0x0);
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      bVar1 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_02,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar2 != MVGameMode__Enum_Edit) {
          return;
        }
        MVar3 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_02,(MethodInfo *)0x0);
        this_00 = TypeInfo__PlayerElementState____c__DisplayClass9_1;
        if (MVar3 != MVLocalPlayer_PlanetOwnershipType__Enum_Owner) {
          return;
        }
        pOVar4 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (pOVar4,ExceptionArgument__Enum_obj,method_00);
        pIVar5 = (this_00->_0).declaringType;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar6 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pIVar5,
                             OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                            );
        if (pOVar4 != (Object *)0x0) {
          pOVar4[1].klass = pOVar6;
          func_?(pOVar4 + 1,pOVar6);
          pIVar5 = (this_00->_0).parent;
          pOVar6 = pOVar4[1].klass;
          if ((pIVar5 != (Il2CppClass *)0x0) &&
             (pSVar7 = (String *)
                        (*(code *)pIVar5->image[0x11].token)
                                  (pIVar5,*(undefined4 *)&pIVar5->image[0x11].dynamic),
             pOVar6 != (Object__Class *)0x0)) {
            if (cRam_? == '\0') {
              func_?(&::StringLiteral__);
              func_?(&StringLiteral_will_be_kicked_and_unable_to_rej);
              cRam_? = '\x01';
            }
            pIVar8 = (pOVar6->_0).byval_arg.data.array;
            if (pIVar8 != (Il2CppArrayType *)0x0) {
              pIVar9 = pIVar8->etype;
              uVar10._0_2_ = pIVar9[99].attrs;
              uVar10._2_1_ = pIVar9[99].type;
              uVar10._3_1_ = pIVar9[99].field_0x7;
              (*(code *)pIVar9[99].data)(pIVar8,pSVar7,uVar10);
              piVar11 = *(int **)&(pOVar6->_0).byval_arg.attrs;
              str2 = TM::TM__(StringLiteral_will_be_kicked_and_unable_to_rej,(MethodInfo *)0x0);
              pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                  (pSVar7,::StringLiteral__,str2,(MethodInfo *)0x0);
              if (piVar11 != (int *)0x0) {
                (**(code **)(*piVar11 + 0x318))(piVar11,pSVar7,*(undefined4 *)(*piVar11 + 0x31c));
                pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                callbackFunction =
                     (ExecuteEvents_EventFunction_1_System_Object_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,pOVar4,
                           MethodInfo__PlayerElementState____c__DisplayClass9_1___OpenUserManagement_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
code_?:
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar12,(BaseEventData *)0x0,callbackFunction,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                return;
              }
            }
          }
        }
      }
      else {
        pOVar4 = (Object *)func_?(TypeInfo__PlayerElementState____c__DisplayClass9_0);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (pOVar4,ExceptionArgument__Enum_obj,method_00);
        original = (this->fields).adminToolsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar6 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                            );
        if (pOVar4 != (Object *)0x0) {
          pOVar4[1].klass = pOVar6;
          func_?(pOVar4 + 1,pOVar6);
          pTVar13 = (this->fields).playerName;
          pOVar6 = pOVar4[1].klass;
          if ((pTVar13 != (Text *)0x0) &&
             (uVar10 = (*(code *)(pTVar13->klass->vtable).get_text.method)
                                 (pTVar13,(pTVar13->klass->vtable).set_text.methodPtr),
             pOVar6 != (Object__Class *)0x0)) {
            if (cRam_? == '\0') {
              func_?(&MethodInfo__AdminToolController__OnDefaultBanDropdownChanged_int_);
              func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
              func_?(&
                              MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                             );
              cRam_? = '\x01';
            }
            pTVar13 = (Text *)(pOVar6->_0).this_arg.data.array;
            if (pTVar13 != (Text *)0x0) {
              (*(code *)(pTVar13->klass->vtable).set_text.method)
                        (pTVar13,uVar10,
                         (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
              pDVar14 = (Dropdown *)(pOVar6->_0).byval_arg.data.array;
              if (pDVar14 != (Dropdown *)0x0) {
                this_04 = (UnityEvent_1_UnityEngine_Vector2_ *)(pDVar14->fields).m_OnValueChanged;
                this_03 = (UnityAction_1_System_Int32Enum_ *)
                          func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
                UnityAction_1_System_Int32Enum___ctor
                          (this_03,(Object *)pOVar6,
                           MethodInfo__AdminToolController__OnDefaultBanDropdownChanged_int_,
                           (MethodInfo *)0x0);
                if (this_04 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::
                  Vector2]::UnityEvent_1_UnityEngine_Vector2__AddListener
                            (this_04,(UnityAction_1_UnityEngine_Vector2_ *)this_03,
                             MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                            );
                  pIVar5 = (pOVar6->_0).castClass;
                  if (pIVar5 != (Il2CppClass *)0x0) {
                    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pIVar5,(MethodInfo *)0x0);
                    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                      ((MethodInfo *)0x0);
                    if (pGVar12 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar12,MVar2 == MVGameMode__Enum_Edit,(MethodInfo *)0x0);
                      AdminToolController::AdminToolController_OnDefaultBanDropdownChanged
                                ((AdminToolController *)pOVar6,0,(MethodInfo *)0x0);
                      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                      callbackFunction =
                           (ExecuteEvents_EventFunction_1_System_Object_ *)
                           func_?(
                                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                          );
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                                 pOVar4,
                                 MethodInfo__PlayerElementState____c__DisplayClass9_0___OpenUserManagement_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      goto code_?;
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
                MVar8 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0)
                ;
                bVar9 = MVar8 == MVLocalPlayer_PlanetOwnershipType__Enum_Owner;
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
                                    (pGVar2,bVar10 == 0,(MethodInfo *)0x0);
                          pBVar1 = (this->fields).acceptFriendRequest;
                          if ((pBVar1 != (Button *)0x0) &&
                             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_gameObject
                                                 ((Component *)pBVar1,(MethodInfo *)0x0),
                             pGVar2 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar2,bVar10 == 0,(MethodInfo *)0x0);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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

