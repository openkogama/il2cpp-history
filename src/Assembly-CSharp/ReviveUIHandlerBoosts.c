
/* Void ChangeBackground() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_ChangeBackground
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,(this->fields).tier == 1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(this->fields).tier == 2,(MethodInfo *)0x0);
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,(this->fields).tier == 3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMVar6 = (MethodInfo *)0x0;
  pMVar7 = (MethodInfo *)0x0;
  SStack_8.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_8.monitor = (MonitorData *)0x0;
  SStack_8.fields.value = 0.0;
  SStack_8.fields.OnChange = (Action_1_Single_ *)0x0;
  auStack_9._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  auStack_9._4_4_ = (MonitorData *)0x0;
  auStack_9._8_4_ = (String *)0x0;
  auStack_9._12_4_ = 0.0;
  func_?();
  method_01 = (MethodInfo *)0x0;
  method_00 = this;
  puStack_10 = (undefined4 *)&stack0xffffff7c;
  puStack_4 = &stack0xffffff7c;
  ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
            ((ReviveUIHandlerBase *)this,onContinueClicked,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar11 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar11 != (PlayerPlanetData *)0x0) {
    bVar12 = cRam_? == '\0';
    (this->fields).tier = (pPVar11->fields).previewGamePassTier;
    if (bVar12) {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar13 = (PrefabPool *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pPVar13 != (PrefabPool *)0x0) &&
       (pPVar13 = (PrefabPool *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar13,(MethodInfo *)0x0),
       pPVar13 != (PrefabPool *)0x0)) {
      pOVar14 = PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar13,pMVar6);
      pMVar6 = 
      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
      ;
      SVar15 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
              SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                        ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)pOVar14,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                        );
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar11 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar11 != (PlayerPlanetData *)0x0) {
        bVar12 = (byte)SVar15 <= (pPVar11->fields).gamePassTier;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pPVar13 = (PrefabPool *)
                 MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pPVar13 != (PrefabPool *)0x0) &&
           (pPVar13 = (PrefabPool *)
                     PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar13,(MethodInfo *)0x0),
           pPVar13 != (PrefabPool *)0x0)) {
          pOVar14 = PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar13,pMVar6);
          SVar15 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
                  SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                            ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)pOVar14,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                            );
          bStack_16 = (byte)SVar15;
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar11 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if (pPVar11 != (PlayerPlanetData *)0x0) {
            pGVar17 = (this->fields).defaultUI;
            bStack_16 = (pPVar11->fields).previewGamePassTier < bStack_16;
            if (pGVar17 != (GameObject *)0x0) {
              method_02 = (Image *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar17,bVar12 && (bool)bStack_16,(MethodInfo *)0x0);
              pGVar17 = (this->fields).tempClassUI;
              pMVar6 = (MethodInfo *)0x1;
              if (bVar12) {
                pMVar6 = (MethodInfo *)(uint)(bStack_16 ^ 1);
              }
              if (pGVar17 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar17,(bool)pMVar6,pMVar7);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pPVar13 = (PrefabPool *)
                         MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                   ((MethodInfo *)0x0);
                if (pPVar13 != (PrefabPool *)0x0) {
                  pMVar7 = (MethodInfo *)&UNK_?;
                  this_00 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                      (pPVar13,(MethodInfo *)0x0);
                  if ((this_00 != (ObjectiveArrow *)0x0) &&
                     (this_01 = BoostController::BoostController_GetActiveBoosts
                                          ((BoostController *)this_00,pMVar6),
                     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                                *)auStack_18,
                               (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_
                                *)this_01,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                              );
                    uStack_1 = 0;
                    while (cVar19 = func_?(), cVar19 != '\0') {
                      this_02 = (Collection_1_VoxelHit_ *)func_?();
                      unaff_EDI = (Image *)(this->fields).boostImageSelector;
                      if ((this_02 == (Collection_1_VoxelHit_ *)0x0) ||
                         (in_stack_20 =
                               (MethodInfo *)
                               mscorlib.dll::System::Collections::ObjectModel::
                               Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                         (this_02,(MethodInfo *)in_stack_21),
                         unaff_EDI == (Image *)0x0)) goto code_?;
                      in_stack_21 = unaff_EDI;
                      unaff_EDI = BoostImageController::BoostImageController_GetBoostVisualization
                                            ((BoostImageController *)unaff_EDI,
                                             (BoostType__Enum)in_stack_20,in_stack_22);
                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_Instantiate_251
                                          ((XpBoostParticlePreviewer *)unaff_EDI,
                                           UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                          );
                      if (this_03 == (XpBoostParticlePreviewer *)0x0) goto code_?;
                      method_00 = (ReviveUIHandlerBoosts *)&UNK_?;
                      unaff_EDI = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Component::
                                           Component_1_get_transform
                                                     ((Component_1 *)this_03,method_01);
                      pGVar17 = (this->fields).boostContent;
                      if ((pGVar17 == (GameObject *)0x0) ||
                         (pMVar7 = (MethodInfo *)
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar17,pMVar7),
                         unaff_EDI == (Image *)0x0)) goto code_?;
                      method_01 = (MethodInfo *)&UNK_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                                ((Transform *)unaff_EDI,(Transform *)pMVar7,0,(MethodInfo *)0x0);
                      method_02 = unaff_EDI;
                    }
                    *puStack_10 = 0xca;
                    uStack_1 = 0xffffffff;
                    func_?();
                    if ((bVar12) && (bStack_16 != 0)) {
code_?:
                      *unaff_FS_OFFSET = uStack_3;
                      return;
                    }
                    pRVar23 = (this->fields)._.targetTexture;
                    unaff_EDI = (Image *)(this->fields).spawnRolePreviewer;
                    if ((pRVar23 != (RawImage *)0x0) &&
                       (pRVar24 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                  Graphic_get_rectTransform((Graphic *)pRVar23,in_stack_25),
                       pRVar24 != (RectTransform *)0x0)) {
                      pRVar26 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                RectTransform_get_rect
                                          ((Rect *)(auStack_18 + 4),pRVar24,in_stack_27);
                      SStack_8.klass =
                           (SubscribableVariableBase_1_System_Single___Class *)pRVar26->m_XMin;
                      SStack_8.monitor = (MonitorData *)pRVar26->m_YMin;
                      SStack_8.fields.value = pRVar26->m_Width;
                      SStack_8.fields.OnChange = (Action_1_Single_ *)pRVar26->m_Height;
                      puStack_10 = (undefined4 *)
                                   SubscribableVariableBase`1[System::Single]::
                                   SubscribableVariableBase_1_System_Single__get_Value
                                             (&SStack_8,(MethodInfo *)0x0);
                      pRVar23 = (this->fields)._.targetTexture;
                      if ((pRVar23 != (RawImage *)0x0) &&
                         (pRVar24 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                    Graphic_get_rectTransform((Graphic *)pRVar23,in_stack_28),
                         pRVar24 != (RectTransform *)0x0)) {
                        pRVar26 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                  RectTransform_get_rect
                                            ((Rect *)&puStack_29,pRVar24,in_stack_30);
                        auStack_9._0_4_ = pRVar26->m_XMin;
                        auStack_9._4_4_ = pRVar26->m_YMin;
                        auStack_9._8_4_ = pRVar26->m_Width;
                        auStack_9._12_4_ = pRVar26->m_Height;
                        fVar31 = UnityStandardAssets::CrossPlatformInput::
                                 CrossPlatformInputManager+VirtualAxis::
                                 CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                                           ((CrossPlatformInputManager_VirtualAxis *)auStack_9,
                                            (MethodInfo *)0x0);
                        if (unaff_EDI != (Image *)0x0) {
                          CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer
                                    ((CurrentSpawnRolePreviewer *)unaff_EDI,(int)(float)puStack_10,
                                     (int)fVar31,in_stack_20);
                          pGVar17 = (this->fields).backgroundTier1;
                          if (pGVar17 != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive
                                      (pGVar17,(this->fields).tier == 1,(MethodInfo *)method_00);
                            pGVar17 = (this->fields).backgroundTier2;
                            if (pGVar17 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive
                                        (pGVar17,(this->fields).tier == 2,(MethodInfo *)method_02);
                              pGVar17 = (this->fields).backgroundTier3;
                              if (pGVar17 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive
                                          (pGVar17,(this->fields).tier == 3,(MethodInfo *)0x0);
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
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?(unaff_EDI,0,0);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Boolean IsInTempClass() */

bool Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_IsInTempClass
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pPVar1 = (PrefabPool *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      s = PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar1,(MethodInfo *)0x0);
      SVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
              SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                        ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)s,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                        );
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        return (pPVar3->fields).gamePassTier < (byte)SVar2;
      }
    }
  }
  uStack4 = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsInTempTier() */

bool Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_IsInTempTier
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pPVar1 = (PrefabPool *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      s = PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar1,(MethodInfo *)0x0);
      SVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
              SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                        ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)s,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                        );
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        return (pPVar3->fields).previewGamePassTier < (byte)SVar2;
      }
    }
  }
  uStack4 = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void OnAdFinishedContinue() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_OnAdFinishedContinue
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ReviveUIHandlerBoosts->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ReviveUIHandlerBoosts___OnAdFinishedContinue_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ReviveUIHandlerBoosts->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ReviveUIHandlerBoosts->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 == (GameEventManager *)0x0) ||
     ((pGVar1->fields).AvatarCommandsPlayMode ==
      (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    iStack2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = *(int *)(in_stack_5 + 0x14);
  if (iVar4 == 0) {
    return;
  }
  uStack6 = 0;
  if (*(JumpState_OnWallJumpDelegate **)(iVar4 + 0x2c) != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
              (*(JumpState_OnWallJumpDelegate **)(iVar4 + 0x2c),(MethodInfo *)0x0);
  }
  method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(iVar4 + 0x14);
  pcVar3 = *(code **)(iVar4 + 8);
  piVar7 = *(int **)(iVar4 + 0x10);
  if ((short)method_00[5].key == -1) {
    func_?();
  }
  cVar8 = func_?();
  if (cVar8 == '\0') {
    if (*(char *)((int)&method_00[5].key + 2) == '\0') {
      (*pcVar3)();
      return;
    }
  }
  else if (((short)method_00[5].key != -1) &&
          (((piVar7 == (int *)0x0 || ((*(uint *)(*piVar7 + 0xa0) & 0x100) == 0)) &&
           (*(int *)(iVar4 + 0xc) != 0)))) {
    cVar8 = func_?();
    if (cVar8 != '\0') {
      return;
    }
    cVar8 = func_?();
    mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::Object]
    ::KeyValuePair_2_WinningConditionType_System_Object__get_Value
              (method_00,(MethodInfo *)method_00);
    cVar9 = func_?();
    if (cVar8 == '\0') {
      if (cVar9 != '\0') {
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
        Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                  (method_00,(MethodInfo *)method_00);
        func_?();
        return;
      }
      (**(code **)(*piVar7 + 0xc0 + (uint)(ushort)method_00[5].key * 8))();
      return;
    }
    if (cVar9 == '\0') {
      puVar10 = (undefined4 *)func_?();
      (*(code *)*puVar10)();
      return;
    }
    iStack2 = *piVar7;
    uVar11 = 0;
    if (*(ushort *)(iStack2 + 0xb6) != 0) {
      do {
        if (*(Object **)(*(int *)(iStack2 + 0x58) + (uint)uVar11 * 8) == method_00[1].value)
        goto code_?;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(iStack2 + 0xb6));
    }
    func_?();
code_?:
    puVar10 = (undefined4 *)func_?();
    (*(code *)*puVar10)();
    return;
  }
  (*pcVar3)();
  return;
}


/* Void OnRewardedAdWatched(RewardedAdResult) */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_OnRewardedAdWatched
               (ReviveUIHandlerBoosts *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult,&result
                                 );
  this_01 = (ScaleAnimationBase *)0x0;
  if (piVar1 != (int *)0x0) {
    unaff_EDI = (ReviveUIHandlerBoosts *)
                (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pRVar2 = (RewardedAdResult__Enum *)func_?(piVar1);
    result = *pRVar2;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    this_01 = (ScaleAnimationBase *)
              mscorlib.dll::System::String::String_Concat_2
                        (StringLiteral_RESULT_OF_REBOOST__,(String *)unaff_EDI,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)this_01,(MethodInfo *)0x0)
    ;
    switch(result) {
    case RewardedAdResult__Enum_ErrorClient:
    case RewardedAdResult__Enum_ErrorInternal:
    case RewardedAdResult__Enum_RewardNotUnlocked:
      this_01 = (ScaleAnimationBase *)
                func_?(TypeInfo__ReviveUIHandlerBoosts___OnRewardedAdWatched_c__AnonStorey1
                               );
      ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
      if (this_01 != (ScaleAnimationBase *)0x0) {
        (this_01->fields).state = (int32_t)this;
        pXVar3 = (XpBoostParticlePreviewer *)(this->fields)._.errorNotification;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar3,
                            NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                           );
        (this_01->fields)._._._._.m_CachedPtr = pXVar3;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        unaff_EDI = this;
        if (pIVar4 != (IAdManager *)0x0) {
          text = (String *)
                 func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar4);
          header = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
          if (pXVar3 != (XpBoostParticlePreviewer *)0x0) {
            NotificationPopup::NotificationPopup_Initialize
                      ((NotificationPopup *)pXVar3,text,header,(MethodInfo *)0x0);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
            this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_03,(Object *)this_01,
                       MethodInfo__ReviveUIHandlerBoosts___OnRewardedAdWatched_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            method = (MethodInfo *)0x0;
            result = (RewardedAdResult__Enum)root;
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
      break;
    case RewardedAdResult__Enum_ErrorTimeout:
      this_00 = (HoverCraftMotor *)(this->fields)._.continueButton;
      if ((this_00 != (HoverCraftMotor *)0x0) &&
         (this_02 = (UnityEvent *)
                    HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0),
         this_02 != (UnityEvent *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
                  (this_02,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      return;
    }
  }
  uVar5 = func_?(0);
  uVar6 = (undefined2)((uint6)uVar5 >> 0x20);
  pcVar7 = (char *)uVar5;
  uVar8 = in(uVar6);
  *(undefined1 *)&unaff_EDI->klass = uVar8;
  uVar9 = in(uVar6);
  *(undefined4 *)((int)&unaff_EDI->klass + 1) = uVar9;
  cVar10 = (char)((uint6)uVar5 >> 0x20);
  *pcVar7 = *pcVar7 - cVar10;
  uVar8 = in(uVar6);
  *(undefined1 *)((int)&unaff_EDI->monitor + 1) = uVar8;
  uVar9 = in(uVar6);
  *(undefined4 *)((int)&unaff_EDI->monitor + 2) = uVar9;
  *pcVar7 = *pcVar7 - cVar10;
  pcVar11 = (char *)((int)&this_01[2].fields.target + 1);
  *pcVar11 = *pcVar11 + (char)((uint6)uVar5 >> 8) + (extraout_CH < in_stack_12);
  *pcVar7 = *pcVar7 - cVar10;
  uVar8 = in(uVar6);
  *(undefined1 *)((int)&(unaff_EDI->fields)._._._._._.m_CachedPtr + 2) = uVar8;
  uVar9 = in(uVar6);
  *(undefined4 *)((int)&(unaff_EDI->fields)._._._._._.m_CachedPtr + 3) = uVar9;
  *pcVar7 = *pcVar7 - cVar10;
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_Update
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ReviveUIHandlerBoosts___Update_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    *(undefined1 *)&(this_00->fields)._._._._.m_CachedPtr = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__ReviveUIHandlerBoosts___Update_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&(this_00->fields)._._._._.m_CachedPtr == '\0') {
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


/* Void <OnAdFinishedContinue>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts__OnAdFinishedContinue_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

