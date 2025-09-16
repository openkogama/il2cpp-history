
/* Boolean CanSpawnInTeam(MVTeam) */

bool Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_CanSpawnInTeam
               (ContinueTierBoostPopup *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) &&
     (pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(pMVar2,(MethodInfo *)0x0),
     pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
    if ((pLVar3->fields)._size < 2) {
      return 1;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
      bVar4 = MVTeamManager::MVTeamManager_TeamHasSpawnPoints(pMVar2,team,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 1;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVTeamManager::MVTeamManager_GetSpawnPointsForTeam(pMVar2,team,(MethodInfo *)0x0);
        index = 0;
        pLVar5 = this_00;
        if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          do {
            if ((this_00->fields)._size <= index) {
              return 0;
            }
            RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,index,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              );
            if (((RVar6 != (RegexCharClass_SingleRange)0x0) &&
                ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <=
                 *(byte *)(*(int *)RVar6 + 0xb8))) &&
               (*(MVAvatarSpawnRoleCreator__Class **)
                 (*(int *)(*(int *)RVar6 + 100) + -4 +
                 (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) ==
                TypeInfo__MVAvatarSpawnRoleCreator)) {
              RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_00,index,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                );
              if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
              iVar7 = func_?();
              if ((iVar7 == 0) ||
                 (this_01 = (MVAvatarSpawnRoleCreator *)func_?(),
                 this_01 == (MVAvatarSpawnRoleCreator *)0x0)) goto code_?;
              GVar8 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                                (this_01,(MethodInfo *)0x0);
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                  ((MethodInfo *)0x0);
              if ((pMVar9 == (MVLocalPlayer *)0x0) ||
                 (pSVar10 = (pMVar9->fields).spawnRoleDataMediator,
                 pSVar10 == (SpawnRoleDataMediator *)0x0)) break;
              this_00 = pLVar5;
              BVar11 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                       SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
                       SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                                 ((SpawnRoleVariable_1_System_ByteEnum_ *)
                                  (pSVar10->fields).tierRequirement,
                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                                 );
              pLVar5 = this_00;
              if ((byte)GVar8 < (byte)BVar11) {
                return 1;
              }
            }
            index = index + 1;
          } while( true );
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar4 = (*pcVar12)();
  return bVar4;
}


/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_ChangeBackground
               (ContinueTierBoostPopup *this,GamePassTier__Enum tier,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = (undefined1)tier == GamePassTier__Enum_Tier1;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if ((bool)bVar3 != ((undefined1)tier == GamePassTier__Enum_Tier1)) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar1,(MethodInfo *)0x0);
      if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier2)) {
        pGVar1 = (this->fields).backgroundTier2;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0x92,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar1,(MethodInfo *)0x0);
        if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier3)) {
          pGVar1 = (this->fields).backgroundTier3;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ExitContinuePopup() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_ExitContinuePopup
               (ContinueTierBoostPopup *this,MethodInfo *method)

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
                    MethodInfo__ContinueTierBoostPopup____c___ExitContinuePopup_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c___ExitContinuePopup_b__36_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pGVar2 = pGVar1;
  if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContinueTierBoostPopup____c);
  }
  pEVar3 = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__36_0;
  if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pGVar1 = pGVar2;
    if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContinueTierBoostPopup____c);
      pGVar1 = pGVar2;
    }
    pCVar4 = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9;
    pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pCVar4,
               MethodInfo__ContinueTierBoostPopup____c___ExitContinuePopup_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__36_0 = pEVar3;
    func_?(&TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__36_0,pEVar3);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  bVar5 = ContinueTierBoostPopup_IsInTempClass(this,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pGVar2 = pGVar1;
  if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pEVar3 = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__36_1;
  if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pGVar1 = pGVar2;
    if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      pGVar1 = pGVar2;
    }
    pCVar4 = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9;
    pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pCVar4,
               MethodInfo__ContinueTierBoostPopup____c___ExitContinuePopup_b__36_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__36_1 = pEVar3;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar6 != (MVLocalPlayer *)0x0) {
    bVar5 = ContinueTierBoostPopup_CanSpawnInTeam
                      (this,(pMVar6->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        in_stack_7 = (MethodInfo *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pOVar8 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar8,ExceptionArgument__Enum_obj,in_stack_7);
      original = (this->fields).teamMenuPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar9 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_)
      ;
      if (pOVar8 != (Object *)0x0) {
        pOVar8[1].klass = pOVar9;
        func_?();
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar10,pOVar8,
                   MethodInfo__ContinueTierBoostPopup____c__DisplayClass31_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,pEVar10,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (pOVar8[1].klass != (Object__Class *)0x0) {
          TeamMenu::TeamMenu_UpdateBackButtonVisibility
                    ((TeamMenu *)pOVar8[1].klass,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        in_stack_7 = (MethodInfo *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pOVar8 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar8,ExceptionArgument__Enum_obj,in_stack_7);
      original_00 = (this->fields).spawnRoleSelectionMenuPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar9 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original_00,
                          SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                         );
      if (pOVar8 != (Object *)0x0) {
        pOVar8[1].klass = pOVar9;
        func_?();
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar10,pOVar8,
                   MethodInfo__ContinueTierBoostPopup____c__DisplayClass30_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,pEVar10,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar9 = pOVar8[1].klass;
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pMVar6 != (MVLocalPlayer *)0x0) && (pOVar9 != (Object__Class *)0x0)) {
          SpawnRoleMenu::SpawnRoleMenu_Initialize
                    ((SpawnRoleMenu *)pOVar9,(pMVar6->fields)._._Team_k__BackingField,
                     (MethodInfo *)0x0);
          if (pOVar8[1].klass != (Object__Class *)0x0) {
            SpawnRoleMenu::SpawnRoleMenu_HideBackButton
                      ((SpawnRoleMenu *)pOVar8[1].klass,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_Initialize
               (ContinueTierBoostPopup *this,int32_t tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Keep_playing_as_Tier__0__);
    cRam_? = '\x01';
  }
  this_01 = this;
  pTVar1 = (this->fields).tierNumber;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&tier,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this_01->fields).continueRewardDescriptionText;
    pSVar2 = TM::TM__(StringLiteral_Keep_playing_as_Tier__0__,(MethodInfo *)0x0);
    this = (ContinueTierBoostPopup *)tier;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    pSVar2 = mscorlib.dll::System::String::String_Format(pSVar2,pOVar3,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar1 = (this_01->fields).tempClassContinueRewardDescriptionText;
      pSVar2 = TM::TM__(StringLiteral_Keep_playing_as_Tier__0__,(MethodInfo *)0x0);
      iStack_4 = tier;
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
      pSVar2 = mscorlib.dll::System::String::String_Format(pSVar2,pOVar3,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        bVar5 = ContinueTierBoostPopup_IsInTempClass(this_01,(MethodInfo *)0x0);
        pGVar6 = (this_01->fields).defaultUI;
        if (pGVar6 != (GameObject *)0x0) {
          bVar7 = bVar5;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,bVar5 ^ 1,(MethodInfo *)0x0);
          pGVar6 = (this_01->fields).tempClassUI;
          if (pGVar6 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,bVar7,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              return;
            }
            this_00 = (this_01->fields).spawnRolePreviewer;
            if (this_00 != (CurrentSpawnRolePreviewer *)0x0) {
              CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer
                        (this_00,0x133,0x266,(MethodInfo *)0x0);
              cVar8 = (char)tier;
              pGVar6 = (this_01->fields).backgroundTier1;
              this = (ContinueTierBoostPopup *)CONCAT31(this._1_3_,cVar8 == '\x03');
              iStack_4 = CONCAT31(iStack_4._1_3_,cVar8 == '\x02');
              if (pGVar6 != (GameObject *)0x0) {
                bVar5 = cVar8 == '\x01';
                bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar6,(MethodInfo *)0x0);
                if ((bool)bVar7 != (cVar8 == '\x01')) {
                  pGVar6 = (this_01->fields).backgroundTier1;
                  if (pGVar6 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar6,bVar5,(MethodInfo *)0x0);
                }
                pGVar6 = (this_01->fields).backgroundTier2;
                if (pGVar6 != (GameObject *)0x0) {
                  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeSelf(pGVar6,(MethodInfo *)0x0);
                  if ((bool)bVar5 != (cVar8 == '\x02')) {
                    pGVar6 = (this_01->fields).backgroundTier2;
                    if (pGVar6 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar6,(bool)iStack_4,(MethodInfo *)0x0);
                  }
                  pGVar6 = (this_01->fields).backgroundTier3;
                  if (pGVar6 != (GameObject *)0x0) {
                    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_activeSelf(pGVar6,(MethodInfo *)0x0);
                    if (bVar5 != (bool)this) {
                      pGVar6 = (this_01->fields).backgroundTier3;
                      if (pGVar6 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar6,(bool)this,(MethodInfo *)0x0);
                    }
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
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsInTempClass() */

bool Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_IsInTempClass
               (ContinueTierBoostPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 != (MVLocalPlayer *)0x0) &&
     (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) {
    BVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::ByteEnum]::SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                      ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar2->fields).tierRequirement,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                      );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 != (PlayerPlanetData *)0x0) {
      return (pPVar4->fields).gamePassTier < (byte)BVar3;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void OnClickSubscriber() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_OnClickSubscriber
               (ContinueTierBoostPopup *this,MethodInfo *method)

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
                    MethodInfo__ContinueTierBoostPopup____c___OnClickSubscriber_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c);
    cRam_? = '\x01';
  }
  (this->fields).shouldUpdate = 0;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContinueTierBoostPopup____c);
  }
  callbackFunction = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__24_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContinueTierBoostPopup____c);
    }
    object = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContinueTierBoostPopup____c___OnClickSubscriber_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__24_0 = callbackFunction;
    func_?(&TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__24_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void OnDeclinePressed() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_OnDeclinePressed
               (ContinueTierBoostPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__ContinueTierBoostPopup__OnPlayerPlanetDataUpdated__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c___StopPreviewTier_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
    func_?();
  }
  else {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_00,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__ContinueTierBoostPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__34_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__ContinueTierBoostPopup____c___StopPreviewTier_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__34_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      (this->fields).isWaitingForFreeTryTier = 1;
      return;
    }
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_OnPlayerPlanetDataUpdated
               (ContinueTierBoostPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__ContinueTierBoostPopup__OnPlayerPlanetDataUpdated__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c___OnPlayerPlanetDataUpdated_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) {
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    if ((this->fields).previousPreviewTier <= (pPVar1->fields).previewGamePassTier) {
      return;
    }
    if ((this->fields).isWaitingForFreeTryTier != 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      pGVar4 = root;
      if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ContinueTierBoostPopup____c);
      }
      callbackFunction = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__35_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        root = pGVar4;
        if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__ContinueTierBoostPopup____c);
          root = pGVar4;
        }
        object = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__ContinueTierBoostPopup____c___OnPlayerPlanetDataUpdated_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__35_0 = callbackFunction;
        func_?(&TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__35_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      (this->fields).isWaitingForFreeTryTier = 0;
    }
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__ContinueTierBoostPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
    pAStack2 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAStack2 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
      pAVar5 = (Action *)0x0;
code_?:
      pAStack2 =
           (Action *)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pAStack3 = (Action__Class *)pAVar5;
      func_?();
      ContinueTierBoostPopup_ExitContinuePopup(this,(MethodInfo *)0x0);
      return;
    }
    pAVar5 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar5 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar5 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
    pAVar5 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar5 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar5 != (Action *)0x0) goto code_?;
  }
  pAStack3 = (Action__Class *)func_?();
  pAStack2 = extraout_ECX_00;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_RewardedAdCallback
               (ContinueTierBoostPopup *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c___RewardedAdCallback_b__33_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c___RewardedAdCallback_b__33_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c___RewardedAdCallback_b__33_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  RVar1 = RewardedAdResult__Enum_RewardUnlocked;
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
    RVar1 = result;
  }
  switch(RVar1) {
  case RewardedAdResult__Enum_ErrorClient:
  case RewardedAdResult__Enum_ErrorInternal:
  case RewardedAdResult__Enum_ErrorTimeout:
    result = (RewardedAdResult__Enum)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContinueTierBoostPopup____c);
    }
    callbackFunction_00 = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__33_2;
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ContinueTierBoostPopup____c);
      }
      pCVar2 = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9;
      callbackFunction_00 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pCVar2,
                 MethodInfo__ContinueTierBoostPopup____c___RewardedAdCallback_b__33_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__33_2 = callbackFunction_00;
      ppEVar3 = &TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__33_2;
code_?:
      func_?(ppEVar3,callbackFunction_00);
    }
    break;
  case RewardedAdResult__Enum_RewardUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContinueTierBoostPopup____c);
    }
    callbackFunction = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__33_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ContinueTierBoostPopup____c);
      }
      pCVar2 = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pCVar2,
                 MethodInfo__ContinueTierBoostPopup____c___RewardedAdCallback_b__33_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__33_0 = callbackFunction;
      func_?(&TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__33_0,
                      callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    result = (RewardedAdResult__Enum)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContinueTierBoostPopup____c);
    }
    callbackFunction_00 = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__33_1;
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ContinueTierBoostPopup____c);
      }
      pCVar2 = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9;
      callbackFunction_00 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pCVar2,
                 MethodInfo__ContinueTierBoostPopup____c___RewardedAdCallback_b__33_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__33_1 = callbackFunction_00;
      ppEVar3 = &TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__33_1;
      goto code_?;
    }
    break;
  default:
    goto code_?;
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            ((GameObject *)result,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  (this->fields).shouldUpdate = 1;
code_?:
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_ShowAd
               (ContinueTierBoostPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    MethodInfo__ContinueTierBoostPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    cRam_? = '\x01';
  }
  (this->fields).shouldUpdate = 0;
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  this_00 = (UnityAction_1_System_Int32Enum_ *)
            func_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_00,(Object *)this,
             MethodInfo__ContinueTierBoostPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
             ,(MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    func_?(6,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowSpawnRoleSelectionMenu() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_ShowSpawnRoleSelectionMenu
               (ContinueTierBoostPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&
                    SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c__DisplayClass30_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c__DisplayClass30_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContinueTierBoostPopup____c__DisplayClass30_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).spawnRoleSelectionMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?();
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ContinueTierBoostPopup____c__DisplayClass30_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = value[1].klass;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) && (pOVar1 != (Object__Class *)0x0)) {
      SpawnRoleMenu::SpawnRoleMenu_Initialize
                ((SpawnRoleMenu *)pOVar1,(pMVar2->fields)._._Team_k__BackingField,(MethodInfo *)0x0)
      ;
      if ((value[1].klass != (Object__Class *)0x0) &&
         (this_00 = ((value[1].klass)->_0).events, this_00 != (EventInfo *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowTeamSelectionMenu() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_ShowTeamSelectionMenu
               (ContinueTierBoostPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c__DisplayClass31_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c__DisplayClass31_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContinueTierBoostPopup____c__DisplayClass31_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).teamMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (value == (Object *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  value[1].klass = pOVar1;
  pOVar3 = value + 1;
  func_?(pOVar3,pOVar1);
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
             MethodInfo__ContinueTierBoostPopup____c__DisplayClass31_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar4,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar4 = pGRam00000038;
  if (value[1].klass == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                    ,pOVar3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager,pOVar3);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
code_?:
    method._0_1_ = true;
  }
  else {
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar5 == (MVLocalPlayer *)0x0) ||
       (pSVar6 = (pMVar5->fields).spawnRoleDataMediator, pSVar6 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    BVar7 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::ByteEnum]::SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                      ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar6->fields).tierRequirement,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                      );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar8 == (PlayerPlanetData *)0x0) goto code_?;
    bVar9 = (pPVar8->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar8 == (PlayerPlanetData *)0x0) goto code_?;
    if ((byte)BVar7 <= bVar9) goto code_?;
    method._0_1_ = (byte)BVar7 <= (pPVar8->fields).previewGamePassTier;
  }
  if (pGVar4 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,method._0_1_,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowTierUnlock(Boolean, Boolean) */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_ShowTierUnlock
               (ContinueTierBoostPopup *this,bool wasPurchased,bool wasTempUnlocked,
               MethodInfo *method)

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
                    TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c__DisplayClass29_0___ShowTierUnlock_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c__DisplayClass29_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContinueTierBoostPopup____c__DisplayClass29_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).TierUnlockedPopupControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ContinueTierBoostPopup____c__DisplayClass29_0___ShowTierUnlock_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (value[1].klass != (Object__Class *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                ((TierUnlockedPopupController *)value[1].klass,
                 (uint)(this->fields).previousPreviewTier,wasPurchased,wasTempUnlocked,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_Start
               (ContinueTierBoostPopup *this,MethodInfo *method)

{
  (this->fields).timeLeft = (this->fields).countDownDuration;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    (this->fields).previousPreviewTier = (pPVar1->fields).previewGamePassTier;
    bVar2 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
    (this->fields).isSubscriber = bVar2;
    if (bVar2 == 0) {
      this_00 = (this->fields).buttonIcon;
      pTVar3 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
      if ((pTVar3 != (TogglePreviewState *)0x0) && (this_00 != (Image *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,(pTVar3->fields).freeTry == 0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      this_01 = (this->fields).countdownGameObject;
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StopPreviewTier() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_StopPreviewTier
               (ContinueTierBoostPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__ContinueTierBoostPopup__OnPlayerPlanetDataUpdated__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__ContinueTierBoostPopup____c___StopPreviewTier_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
    func_?();
  }
  else {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_00,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__ContinueTierBoostPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__34_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__ContinueTierBoostPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__ContinueTierBoostPopup____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__ContinueTierBoostPopup____c___StopPreviewTier_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ContinueTierBoostPopup____c->static_fields->__9__34_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      (this->fields).isWaitingForFreeTryTier = 1;
      return;
    }
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup_Update
               (ContinueTierBoostPopup *this,MethodInfo *method)

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
                    MethodInfo__ContinueTierBoostPopup____c__DisplayClass28_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContinueTierBoostPopup____c__DisplayClass28_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContinueTierBoostPopup____c__DisplayClass28_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    *(undefined1 *)&value[1].klass = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ContinueTierBoostPopup____c__DisplayClass28_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((this->fields).isSubscriber == 0) {
      bVar1 = (this->fields).shouldUpdate == 0;
    }
    else {
      bVar1 = true;
    }
    if (*(char *)&value[1].klass != '\0' || bVar1) {
      return;
    }
    fVar2 = (this->fields).timeLeft;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    this_00 = (this->fields).countdownFillImage;
    (this->fields).timeLeft = fVar2 - fVar3;
    if (this_00 != (Image *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                (this_00,(fVar2 - fVar3) / (this->fields).countDownDuration,(MethodInfo *)0x0);
      pfVar4 = &(this->fields).timeLeft;
      if (*pfVar4 <= 0.0 && *pfVar4 != 0.0) {
        ContinueTierBoostPopup_StopPreviewTier(this,(MethodInfo *)0x0);
        (this->fields).timeLeft = 0.0;
      }
      pTVar5 = (this->fields).countdownText;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar6 = (float10)func_?();
      uVar7 = CONCAT44((int)fVar6,SUB84((double)fVar6,0));
      pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
      if (pTVar5 != (Text *)0x0) {
        (*(code *)(pTVar5->klass->vtable).set_text.method)
                  (pTVar5,pSVar8,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr,
                   uVar7);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* ContinueTierBoostPopup() */

void Assembly-CSharp.dll::ContinueTierBoostPopup::ContinueTierBoostPopup__ctor
               (ContinueTierBoostPopup *this,MethodInfo *method)

{
  (this->fields).timeLeft = 100.0;
  (this->fields).shouldUpdate = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

