
/* Void ChangeBackground() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_ChangeBackground
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = (this->fields).tier == 1;
  }
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,bVar2,(MethodInfo *)0x0);
    pGVar1 = (this->fields).backgroundTier2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = (this->fields).tier == 2;
    }
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
      pGVar1 = (this->fields).backgroundTier3;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = (this->fields).tier == 3;
      }
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,bVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_Initialize
               (ReviveUIHandlerBoosts *this,UnityAction *onContinueClicked,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                   );
    func_?(&
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSStack_6 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
            ((ReviveUIHandlerBase *)this,onContinueClicked,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar7 == (PlayerPlanetData *)0x0) goto code_?;
    (this->fields).tier = (pPVar7->fields).previewGamePassTier;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    bVar8 = false;
  }
  else {
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar9 == (MVLocalPlayer *)0x0) ||
       (pSVar10 = (pMVar9->fields).spawnRoleDataMediator, pSVar10 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    pOVar11 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                       ((SpawnRoleVariable_1_System_Object_ *)(pSVar10->fields).tierRequirement,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                       );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar7 == (PlayerPlanetData *)0x0) goto code_?;
    bVar8 = (pPVar7->fields).gamePassTier < (byte)pOVar11;
  }
  uStack_12 = bVar8;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    uStack_13 = false;
  }
  else {
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar9 == (MVLocalPlayer *)0x0) ||
       (pSVar10 = (pMVar9->fields).spawnRoleDataMediator, pSVar10 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    pOVar11 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                       ((SpawnRoleVariable_1_System_Object_ *)(pSVar10->fields).tierRequirement,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                       );
    bStack_14 = (byte)pOVar11;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar7 == (PlayerPlanetData *)0x0) goto code_?;
    uStack_13 = (pPVar7->fields).previewGamePassTier < bStack_14;
  }
  pGVar15 = (this->fields).defaultUI;
  bStack_14 = uStack_13;
  if (pGVar15 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar15,(bVar8 ^ 1U) & uStack_13,(MethodInfo *)0x0);
    bVar16 = 1;
    if (bVar8 == false) {
      bVar16 = bStack_14 ^ 1;
    }
    pGVar15 = (this->fields).tempClassUI;
    if (pGVar15 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar15,bVar16,(MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar9 != (MVLocalPlayer *)0x0) &&
         (this_00 = (pMVar9->fields).boostController, this_00 != (BoostController *)0x0)) {
        this_04 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)BoostController::BoostController_GetActiveBoosts(this_00,(MethodInfo *)0x0);
        if (this_04 !=
            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
             *)0x0) {
          pDVar17 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             (&DStack_18,this_04,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                             );
          pOVar11 = pDVar17->_currentValue;
          DStack_18._version = 0;
          uStack_1 = 1;
          DStack_18._currentValue = (Object *)&stack0xffffffbc;
          while( true ) {
            bVar16 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    Object,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                *)&stack0xffffffbc,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                              );
            if (bVar16 == 0) break;
            this_01 = (this->fields).boostImageSelector;
            if ((pOVar11 == (Object *)0x0) || (this_01 == (BoostImageController *)0x0))
            goto code_?;
            pIStack_19 = BoostImageController::BoostImageController_GetBoostVisualization
                                   (this_01,(BoostType__Enum)pOVar11[1].klass,(MethodInfo *)0x0);
            pGVar15 = (this->fields).boostContent;
            if (pGVar15 == (GameObject *)0x0) goto code_?;
            pTStack_20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar15,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            in_stack_21 = (MethodInfo *)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)pIStack_19,pTStack_20,0,
                       UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                      );
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffbc,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                     ,in_stack_21);
          uStack_1 = 0xffffffff;
          if ((bVar8 == false) && (bStack_14 != 0)) {
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          this_02 = (this->fields)._.targetTexture;
          if (this_02 != (RawImage *)0x0) {
            this_05 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)this_02,(MethodInfo *)0x0);
            if (this_05 != (RectTransform *)0x0) {
              pRVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_rect((Rect *)&stack0xffffff9c,this_05,(MethodInfo *)0x0);
              this_03 = (this->fields).spawnRolePreviewer;
              pSStack_6 = (SubscribableVariableBase_1_System_Single___Class *)pRVar22->m_XMin;
              pIStack_19 = (Image *)SubscribableVariableBase`1[System::Single]::
                                    SubscribableVariableBase_1_System_Single__get_Value
                                              ((SubscribableVariableBase_1_System_Single_ *)
                                               &pSStack_6,(MethodInfo *)0x0);
              fVar23 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                       Int32Enum,System::Single]::
                       Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                                 ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                                   *)&pSStack_6,(MethodInfo *)0x0);
              if (this_03 != (CurrentSpawnRolePreviewer *)0x0) {
                CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer
                          (this_03,(int)(float)pIStack_19,(int)fVar23,(MethodInfo *)0x0);
                pGVar15 = (this->fields).backgroundTier1;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField ==
                    0) {
                  bVar8 = false;
                }
                else {
                  bVar8 = (this->fields).tier == 1;
                }
                if (pGVar15 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar15,bVar8,(MethodInfo *)0x0);
                  pGVar15 = (this->fields).backgroundTier2;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField
                      == 0) {
                    bVar8 = false;
                  }
                  else {
                    bVar8 = (this->fields).tier == 2;
                  }
                  if (pGVar15 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar15,bVar8,(MethodInfo *)0x0);
                    pGVar15 = (this->fields).backgroundTier3;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if (TypeInfo__GamePassesManager->static_fields->
                        _GamePassesActive_k__BackingField == 0) {
                      bVar8 = false;
                    }
                    else {
                      bVar8 = (this->fields).tier == 3;
                    }
                    if (pGVar15 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar15,bVar8,(MethodInfo *)0x0);
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
code_?:
  func_?();
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Boolean IsInTempClass() */

bool Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_IsInTempClass
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) {
      pOVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                         ((SpawnRoleVariable_1_System_Object_ *)(pSVar2->fields).tierRequirement,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                         );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        return (pPVar4->fields).gamePassTier < (byte)pOVar3;
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  return 0;
}


/* Boolean IsInTempTier() */

bool Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_IsInTempTier
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) {
      pOVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                         ((SpawnRoleVariable_1_System_Object_ *)(pSVar2->fields).tierRequirement,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                         );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        return (pPVar4->fields).previewGamePassTier < (byte)pOVar3;
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  return 0;
}


/* Void OnAdFinishedContinue() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_OnAdFinishedContinue
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

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
                    MethodInfo__ReviveUIHandlerBoosts____c___OnAdFinishedContinue_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandlerBoosts____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ReviveUIHandlerBoosts____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ReviveUIHandlerBoosts____c);
  }
  callbackFunction = TypeInfo__ReviveUIHandlerBoosts____c->static_fields->__9__13_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ReviveUIHandlerBoosts____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ReviveUIHandlerBoosts____c);
    }
    object = TypeInfo__ReviveUIHandlerBoosts____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ReviveUIHandlerBoosts____c___OnAdFinishedContinue_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ReviveUIHandlerBoosts____c->static_fields->__9__13_0 = callbackFunction;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     ((pGVar1->fields).AvatarCommandsPlayMode !=
      (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if (*(int *)(in_stack_2 + 0x14) != 0) {
      (**(code **)(*(int *)(in_stack_2 + 0x14) + 0xc))();
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRewardedAdWatched(RewardedAdResult) */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_OnRewardedAdWatched
               (ReviveUIHandlerBoosts *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0___OnRewardedAdWatched_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0);
    func_?(&StringLiteral_No_Ad_Available);
    cRam_? = '\x01';
  }
  switch(result) {
  case RewardedAdResult__Enum_ErrorClient:
  case RewardedAdResult__Enum_ErrorInternal:
  case RewardedAdResult__Enum_RewardNotUnlocked:
    value = (Object *)func_?(TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EBP);
      value[1].monitor = (MonitorData *)this;
      func_?(&value[1].monitor,this);
      original = (this->fields)._.errorNotification;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar1 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                         );
      value[1].klass = pOVar1;
      func_?(value + 1);
      pOVar1 = value[1].klass;
      pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      if (pIVar2 != (IAdManager *)0x0) {
        text = (String *)
               func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar2);
        header = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
        if (pOVar1 != (Object__Class *)0x0) {
          NotificationPopup::NotificationPopup_Initialize
                    ((NotificationPopup *)pOVar1,text,header,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0___OnRewardedAdWatched_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
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
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    pBVar3 = (this->fields)._.continueButton;
    if ((pBVar3 != (Button *)0x0) &&
       (this_00 = (UnityEvent *)(pBVar3->fields).m_OnClick, this_00 != (UnityEvent *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
                (this_00,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    return;
  }
  uVar4 = func_?();
  out((short)((uint6)uVar4 >> 0x20),(uint)uVar4 ^ 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void Update() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_Update
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

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
                    MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    *(undefined1 *)&value[1].klass = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 ,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (*(char *)&value[1].klass == '\0') {
        ReviveUIHandlerBase::ReviveUIHandlerBase_Update
                  ((ReviveUIHandlerBase *)this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnRewardedAdWatched>b__17_1() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts__OnRewardedAdWatched_b__17_1
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._.continueButton;
  if ((pBVar1 != (Button *)0x0) &&
     (this_00 = (pBVar1->fields).m_OnClick, this_00 != (Button_ButtonClickedEvent *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::
              UnityEventBase_PrepareInvoke((UnityEventBase *)this_00,(MethodInfo *)0x0);
    index = 0;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      do {
        while( true ) {
          if ((this_01->fields)._size <= index) {
            return;
          }
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                            );
          if ((((RVar2 == (RegexCharClass_SingleRange)0x0) ||
               (*(byte *)(*(int *)RVar2 + 0xb4) <
                (TypeInfo__UnityEngine__Events__InvokableCall->_1).typeHierarchyDepth)) ||
              (*(InvokableCall__Class **)
                (*(int *)(*(int *)RVar2 + 100) + -4 +
                (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).typeHierarchyDepth * 4) !=
               TypeInfo__UnityEngine__Events__InvokableCall)) ||
             (RVar2 == (RegexCharClass_SingleRange)0x0)) break;
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                    ((InvokableCall *)RVar2,(MethodInfo *)0x0);
          index = index + 1;
        }
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                  (this_01,index,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                  );
        RVar2 = (RegexCharClass_SingleRange)func_?();
        if (RVar2 != (RegexCharClass_SingleRange)0x0) goto code_?;
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                          );
        if ((this_00->fields)._.m_InvokeArray == (Object__Array *)0x0) {
          pOVar3 = (Object__Array *)func_?();
          (this_00->fields)._.m_InvokeArray = pOVar3;
          func_?();
        }
        if (RVar2 == (RegexCharClass_SingleRange)0x0) break;
        func_?();
        index = index + 1;
      } while( true );
    }
  }
  uVar4 = func_?(&stack0xffffffe8);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

