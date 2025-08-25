
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
  }
  pOStack_4 = (Object__Class *)0x0;
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
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    (this->fields).tier = (pPVar5->fields).previewGamePassTier;
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
    bVar6 = false;
  }
  else {
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar7 == (MVLocalPlayer *)0x0) ||
       (pSVar8 = (pMVar7->fields).spawnRoleDataMediator, pSVar8 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    BVar9 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::ByteEnum]::SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                      ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar8->fields).tierRequirement,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                      );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    bVar6 = (pPVar5->fields).gamePassTier < (byte)BVar9;
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
    bVar10 = false;
  }
  else {
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar7 == (MVLocalPlayer *)0x0) ||
       (pSVar8 = (pMVar7->fields).spawnRoleDataMediator, pSVar8 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    BVar9 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::ByteEnum]::SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                      ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar8->fields).tierRequirement,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                      );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    bVar10 = (pPVar5->fields).previewGamePassTier < (byte)BVar9;
  }
  pGVar11 = (this->fields).defaultUI;
  if (pGVar11 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,(bVar6 ^ 1U) & bVar10,(MethodInfo *)0x0);
    bVar12 = 1;
    if (bVar6 == false) {
      bVar12 = bVar10 ^ 1;
    }
    pGVar11 = (this->fields).tempClassUI;
    if (pGVar11 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar11,bVar12,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar7 != (MVLocalPlayer *)0x0) &&
         (this_00 = (pMVar7->fields).boostController, this_00 != (BoostController *)0x0)) {
        this_04 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)BoostController::BoostController_GetActiveBoosts(this_00,(MethodInfo *)0x0);
        if (this_04 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pDVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)&stack0xffffffcc,this_04,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                             );
          pOStack_4 = (Object__Class *)pDVar13->_dictionary;
          pOVar14 = pDVar13->_currentValue;
          uStack_1 = 1;
          while( true ) {
            bVar12 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&pOStack_4,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                              );
            if (bVar12 == 0) break;
            this_01 = (this->fields).boostImageSelector;
            if ((pOVar14 == (Object *)0x0) || (this_01 == (BoostImageController *)0x0))
            goto code_?;
            original = BoostImageController::BoostImageController_GetBoostVisualization
                                 (this_01,(BoostType__Enum)pOVar14[1].klass,(MethodInfo *)0x0);
            pGVar11 = (this->fields).boostContent;
            if (pGVar11 == (GameObject *)0x0) goto code_?;
            parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar11,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            in_stack_15 = (MethodInfo *)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)original,parent,0,
                       UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                      );
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pOStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                     ,in_stack_15);
          uStack_1 = 0xffffffff;
          if ((bVar6 == false) && (bVar10 != false)) {
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          this_02 = (this->fields)._.targetTexture;
          if (this_02 != (RawImage *)0x0) {
            this_05 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)this_02,(MethodInfo *)0x0);
            if (this_05 != (RectTransform *)0x0) {
              pRVar16 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                       RectTransform_get_rect((Rect *)&stack0xffffffac,this_05,(MethodInfo *)0x0);
              this_03 = (this->fields).spawnRolePreviewer;
              if (this_03 != (CurrentSpawnRolePreviewer *)0x0) {
                CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer
                          (this_03,(int)pRVar16->m_Width,(int)pRVar16->m_Height,(MethodInfo *)0x0);
                pGVar11 = (this->fields).backgroundTier1;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField ==
                    0) {
                  bVar6 = false;
                }
                else {
                  bVar6 = (this->fields).tier == 1;
                }
                if (pGVar11 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,bVar6,(MethodInfo *)0x0);
                  pGVar11 = (this->fields).backgroundTier2;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField
                      == 0) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = (this->fields).tier == 2;
                  }
                  if (pGVar11 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar11,bVar6,(MethodInfo *)0x0);
                    pGVar11 = (this->fields).backgroundTier3;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if (TypeInfo__GamePassesManager->static_fields->
                        _GamePassesActive_k__BackingField == 0) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = (this->fields).tier == 3;
                    }
                    if (pGVar11 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar11,bVar6,(MethodInfo *)0x0);
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
      BVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::ByteEnum]::
              SpawnRoleVariable_1_System_ByteEnum__op_Implicit
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
      BVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::ByteEnum]::
              SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                        ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar2->fields).tierRequirement,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                        );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        return (pPVar4->fields).previewGamePassTier < (byte)BVar3;
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
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ReviveUIHandlerBoosts____c___OnAdFinishedContinue_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ReviveUIHandlerBoosts____c->static_fields->__9__13_0 = callbackFunction;
    func_?(&TypeInfo__ReviveUIHandlerBoosts____c->static_fields->__9__13_0,callbackFunction
                   );
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
      iVar3 = *(int *)(in_stack_2 + 0x14);
      puStack4 = *(undefined **)(iVar3 + 0x14);
      uStack5 = *(undefined4 *)(iVar3 + 0x20);
      (**(code **)(iVar3 + 0xc))();
    }
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    unaff_ESI = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(unaff_ESI,(MethodInfo *)0x0);
    if (unaff_ESI != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      unaff_ESI[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)this;
      func_?(unaff_ESI + 1,this);
      original = (this->fields)._.errorNotification;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pLVar1 = (List_1_System_Object_ *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                         );
      (unaff_ESI->fields)._._defaultValue_k__BackingField = pLVar1;
      func_?(&unaff_ESI->fields,pLVar1);
      unaff_EBX = (NotificationPopup *)(unaff_ESI->fields)._._defaultValue_k__BackingField;
      pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      unaff_EDI = this;
      if (pIVar2 != (IAdManager *)0x0) {
        text = (String *)
               func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar2);
        header = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
        if (unaff_EBX != (NotificationPopup *)0x0) {
          NotificationPopup::NotificationPopup_Initialize(unaff_EBX,text,header,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                     (Object *)unaff_ESI,
                     MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0___OnRewardedAdWatched_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
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
  bVar4 = 0;
  pcVar5 = (char *)func_?();
  bVar6 = *(byte *)&unaff_EDI->klass;
  bVar7 = *(char *)&unaff_EDI->klass - extraout_DH;
  *(byte *)&unaff_EDI->klass = bVar7 - bVar4;
  *pcVar5 = *pcVar5 + (char)unaff_EBX + (bVar6 < extraout_DH || bVar7 < bVar4);
  in_AF = 9 < ((byte)pcVar5 & 0xf) | in_AF;
  bVar7 = (byte)pcVar5 + in_AF * '\x06' & 0xf;
  bVar6 = (byte)((uint)unaff_EBX >> 8);
  *(char *)&unaff_ESI->klass =
       *(char *)&unaff_ESI->klass + extraout_DL +
       (CARRY1(bVar6,extraout_CH) || CARRY1(bVar6 + extraout_CH,in_AF));
  bVar6 = 9 < bVar7 | in_AF;
  uVar8 = CONCAT31((int3)((uint)pcVar5 >> 8),bVar7 + bVar6 * '\x06') & 0xffff000f;
  pcVar5 = (char *)CONCAT22((short)(uVar8 >> 0x10),
                            CONCAT11((char)((uint)pcVar5 >> 8) + in_AF + bVar6,(char)uVar8));
  *pcVar5 = *pcVar5 + (char)unaff_EBX + bVar6;
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
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
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    this_00[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)this;
    func_?(this_00 + 1,this);
    *(undefined1 *)&(this_00->fields)._._defaultValue_k__BackingField = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
               MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&(this_00->fields)._._defaultValue_k__BackingField == '\0') {
      ReviveUIHandlerBase::ReviveUIHandlerBase_Update((ReviveUIHandlerBase *)this,(MethodInfo *)0x0)
      ;
    }
    return;
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
     (unityEventBase = (pBVar1->fields).m_OnClick,
     unityEventBase != (Button_ButtonClickedEvent *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&TypeInfo__System__Object);
      cRam_? = '\x01';
    }
    if ((unityEventBase->fields)._._.m_CallsDirty != 0) {
      this_00 = (unityEventBase->fields)._._.m_PersistentCalls;
      if (this_00 == (PersistentCallGroup *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
      PersistentCallGroup_Initialize
                (this_00,(unityEventBase->fields)._._.m_Calls,(UnityEventBase *)unityEventBase,
                 (MethodInfo *)0x0);
      (unityEventBase->fields)._._.m_CallsDirty = 0;
    }
    pIVar2 = (unityEventBase->fields)._._.m_Calls;
    if (pIVar2 != (InvokableCallList *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((pIVar2->fields).m_NeedsUpdate != 0) {
        pLVar3 = (pIVar2->fields).m_ExecutingCalls;
        if (pLVar3 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) goto code_?;
        iVar4 = (pLVar3->fields)._size;
        piVar5 = &(pLVar3->fields)._version;
        *piVar5 = *piVar5 + 1;
        (pLVar3->fields)._size = 0;
        if (0 < iVar4) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar3->fields)._items,0,iVar4,(MethodInfo *)0x0);
        }
        pLVar6 = (List_1_System_Object_ *)(pIVar2->fields).m_ExecutingCalls;
        if (pLVar6 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar6,(IEnumerable_1_System_Object_ *)(pIVar2->fields).m_PersistentCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        pLVar6 = (List_1_System_Object_ *)(pIVar2->fields).m_ExecutingCalls;
        if (pLVar6 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar6,(IEnumerable_1_System_Object_ *)(pIVar2->fields).m_RuntimeCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        (pIVar2->fields).m_NeedsUpdate = 0;
      }
      RVar7 = (RegexCharClass_SingleRange)(pIVar2->fields).m_ExecutingCalls;
      iVar4 = 0;
      this = (ReviveUIHandlerBoosts *)RVar7;
      if (RVar7 != (RegexCharClass_SingleRange)0x0) {
code_?:
        do {
          while( true ) {
            if (*(int *)((int)RVar7 + 0xc) <= iVar4) {
              return;
            }
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               RVar7,iVar4,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                              );
            if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
            if ((*(byte *)(*(int *)RVar8 + 0xb8) <
                 (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment) ||
               (*(InvokableCall__Class **)
                 (*(int *)(*(int *)RVar8 + 100) + -4 +
                 (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment * 4) !=
                TypeInfo__UnityEngine__Events__InvokableCall)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            this_01.First = 0;
            this_01.Last = 0;
            if (bVar9) {
              this_01 = RVar8;
            }
            RVar7 = (RegexCharClass_SingleRange)this;
            if (this_01 == (RegexCharClass_SingleRange)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                      ((InvokableCall *)this_01,(MethodInfo *)0x0);
            iVar4 = iVar4 + 1;
            RVar7 = this_01;
            this = (ReviveUIHandlerBoosts *)this_01;
          }
          this = (ReviveUIHandlerBoosts *)
                 mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            RVar7,iVar4,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                           );
          this_02 = (InvokableCall *)func_?();
          if (this_02 == (InvokableCall *)0x0) {
            RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )RVar7,iVar4,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                               );
            if ((unityEventBase->fields)._.m_InvokeArray == (Object__Array *)0x0) {
              pOVar10 = (Object__Array *)func_?();
              (unityEventBase->fields)._.m_InvokeArray = pOVar10;
              func_?();
            }
            if (RVar7 == (RegexCharClass_SingleRange)0x0) break;
            func_?();
            iVar4 = iVar4 + 1;
            RVar7 = (RegexCharClass_SingleRange)this;
            goto code_?;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                    (this_02,(MethodInfo *)0x0);
          iVar4 = iVar4 + 1;
        } while( true );
      }
    }
  }
code_?:
  uVar11 = func_?(&stack0xfffffff0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

