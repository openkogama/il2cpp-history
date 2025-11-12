
/* Void ChangeBackground() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_ChangeBackground
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = false;
  bVar3 = false;
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    bVar3 = (this->fields).tier == 1;
  }
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,bVar3,(MethodInfo *)0x0);
    pGVar1 = (this->fields).backgroundTier2;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = (this->fields).tier == 2;
    }
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar3,(MethodInfo *)0x0);
      pGVar1 = (this->fields).backgroundTier3;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
        bVar2 = (this->fields).tier == 3;
      }
      if (pGVar1 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar2,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,bVar2);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_Initialize
               (ReviveUIHandlerBoosts *this,UnityAction *onContinueClicked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MethodInfo *)0x0;
  pMVar2 = (MVPlayer *)onContinueClicked;
  ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
            ((ReviveUIHandlerBase *)this,onContinueClicked,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
      bVar3 = false;
code_?:
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
        bVar4 = false;
code_?:
        pGVar5 = (this->fields).defaultUI;
        if (pGVar5 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,(bVar3 ^ 1U) & bVar4,(MethodInfo *)0x0);
          pMVar2 = (MVPlayer *)0x1;
          if (bVar3 == false) {
            pMVar2 = (MVPlayer *)(ulonglong)(bVar4 ^ 1);
          }
          pGVar5 = (this->fields).tempClassUI;
          if (pGVar5 != (GameObject *)0x0) {
            pMVar1 = (MethodInfo *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,(bool)pMVar2,(MethodInfo *)0x0);
            MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,pMVar1);
            if ((extraout_RAX_01 != 0) &&
               (onContinueClicked = *(UnityAction **)(extraout_RAX_01 + 0xa0),
               onContinueClicked != (UnityAction *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_00 = (onContinueClicked->fields)._._.method;
              if ((this_00 !=
                   (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0) &&
                 (pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                           UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                     (this_00,
                                      MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                                     ),
                 pDVar6 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                            *)0x0)) {
                uStack_7 = (pDVar6->fields)._dictionary;
                uStack_8 = (undefined4 *)0x0;
                uStack_9 = 0;
                if (iRam_? != 0) {
                  uVar10 = (uint)((ulonglong)&uStack_7 >> 0xc);
                  uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                  do {
                    uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                    puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                    LOCK();
                    bVar14 = uVar12 == *puVar13;
                    if (bVar14) {
                      *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar14);
                }
                if (uStack_7 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) {
                  FUN_?();
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                iStack_16 = (uStack_7->fields)._version;
                bVar14 = false;
                uStack_9 = 0;
                uStack_7._4_4_ = (undefined4)((ulonglong)uStack_7 >> 0x20);
                uStack_17 = (undefined4)uStack_7;
                uStack_18 = uStack_7._4_4_;
                uStack_19 = 0;
                alStack_20[0] = 0;
                uStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0;
                uStack_8 = &uStack_17;
                while (lVar21 = CONCAT44(uStack_18,uStack_17), lVar21 != 0) {
                  if (iStack_16 != *(int *)(lVar21 + 0x2c)) goto code_?;
                  do {
                    if (lVar21 == 0) goto code_?;
                    if (*(uint *)(lVar21 + 0x20) <= uStack_19) {
                      uStack_19 = *(int *)(lVar21 + 0x20) + 1;
                      alStack_20[0] = 0;
                      if ((bVar3 != false) || (bVar4 == false)) {
                        this_02 = (this->fields)._.targetTexture;
                        if ((this_02 == (RawImage *)0x0) ||
                           (onContinueClicked =
                                 (UnityAction *)
                                 UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                 Graphic_get_rectTransform((Graphic *)this_02,(MethodInfo *)0x0),
                           onContinueClicked == (UnityAction *)0x0)) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        uStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                     *)0x0;
                        uStack_8 = (undefined4 *)0x0;
                        pvVar22 = (onContinueClicked->fields)._._.method_ptr;
                        if (pvVar22 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)onContinueClicked,(MethodInfo *)0x0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        pcVar15 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
                        {
                          uVar23 = func_?(&UNK_?);
                          FUN_?(uVar23,0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        pcRam_? = pcVar15;
                        (*pcRam_?)(pvVar22);
                        this_03 = (this->fields).spawnRolePreviewer;
                        if (this_03 == (CurrentSpawnRolePreviewer *)0x0) goto code_?;
                        CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer
                                  (this_03,(int)(float)uStack_8,(int)uStack_8._4_4_,
                                   (MethodInfo *)0x0);
                        pGVar5 = (this->fields).backgroundTier1;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__GamePassesManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        bVar3 = bVar14;
                        if (TypeInfo__GamePassesManager->static_fields->
                            _GamePassesActive_k__BackingField != 0) {
                          bVar3 = (this->fields).tier == 1;
                        }
                        onContinueClicked = (UnityAction *)0x0;
                        if (pGVar5 == (GameObject *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar5,bVar3,(MethodInfo *)0x0);
                        pGVar5 = (this->fields).backgroundTier2;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__GamePassesManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        bVar3 = bVar14;
                        if (TypeInfo__GamePassesManager->static_fields->
                            _GamePassesActive_k__BackingField != 0) {
                          bVar3 = (this->fields).tier == 2;
                        }
                        onContinueClicked = (UnityAction *)0x0;
                        if (pGVar5 == (GameObject *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar5,bVar3,(MethodInfo *)0x0);
                        pGVar5 = (this->fields).backgroundTier3;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__GamePassesManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (TypeInfo__GamePassesManager->static_fields->
                            _GamePassesActive_k__BackingField != 0) {
                          bVar14 = (this->fields).tier == 3;
                        }
                        onContinueClicked = (UnityAction *)0x0;
                        if (pGVar5 == (GameObject *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar5,bVar14,(MethodInfo *)0x0);
                      }
                      return;
                    }
                    lVar24 = *(longlong *)(lVar21 + 0x18);
                    lVar25 = (longlong)(int)uStack_19;
                    uVar10 = uStack_19 + 1;
                    if (lVar24 == 0) goto code_?;
                    bVar26 = *(uint *)(lVar24 + 0x18) <= uStack_19;
                    uStack_19 = uVar10;
                    if (bVar26) goto code_?;
                  } while (*(int *)(lVar24 + 0x20 + lVar25 * 0x18) < 0);
                  alStack_20[0] = *(longlong *)(lVar24 + (lVar25 + 2) * 0x18);
                  func_?(alStack_20);
                  this_01 = (this->fields).boostImageSelector;
                  if (alStack_20[0] == 0) goto code_?;
                  if (this_01 == (BoostImageController *)0x0) goto code_?;
                  original = BoostImageController::BoostImageController_GetBoostVisualization
                                       (this_01,*(BoostType__Enum *)(alStack_20[0] + 0x10),
                                        (MethodInfo *)0x0);
                  onContinueClicked = (UnityAction *)(this->fields).boostContent;
                  if (onContinueClicked == (UnityAction *)0x0) goto code_?;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar22 = (onContinueClicked->fields)._._.method_ptr;
                  if (pvVar22 == (void *)0x0) goto code_?;
                  pcVar15 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
                  goto code_?;
                  pcRam_? = pcVar15;
                  pvVar22 = (void *)(*pcRam_?)(pvVar22);
                  onContinueClicked =
                       (UnityAction *)
                       UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                       Unmarshal_UnmarshalUnityObject
                                 (pvVar22,
                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                 );
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)original,(Transform *)onContinueClicked,0,
                             UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                            );
                }
                goto code_?;
              }
            }
          }
        }
      }
      else {
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,pMVar1);
        if (((extraout_RAX_00 != 0) && (*(longlong *)(extraout_RAX_00 + 200) != 0)) &&
           (lVar21 = *(longlong *)(*(longlong *)(extraout_RAX_00 + 200) + 0xb0), lVar21 != 0)) {
          lVar21 = *(longlong *)(lVar21 + 0x10);
          onContinueClicked = (UnityAction *)0x0;
          if (lVar21 != 0) {
            if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                 ->klass->field_0x135 & 1) == 0) {
              FUN_?();
            }
            bVar27 = *(byte *)(lVar21 + 0x10);
            onContinueClicked = (UnityAction *)(ulonglong)bVar27;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pPVar28 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar28 != (PlayerPlanetData *)0x0) {
              bVar4 = (pPVar28->fields).previewGamePassTier < bVar27;
              goto code_?;
            }
          }
        }
      }
    }
    else {
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,pMVar1);
      if (((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
         (lVar21 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar21 != 0)) {
        lVar21 = *(longlong *)(lVar21 + 0x10);
        onContinueClicked = (UnityAction *)0x0;
        if (lVar21 != 0) {
          if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
               ->klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          bVar27 = *(byte *)(lVar21 + 0x10);
          onContinueClicked = (UnityAction *)(ulonglong)bVar27;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar28 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar28 != (PlayerPlanetData *)0x0) {
            bVar3 = (pPVar28->fields).gamePassTier < bVar27;
            goto code_?;
          }
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar28 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar28 != (PlayerPlanetData *)0x0) {
      (this->fields).tier = (pPVar28->fields).previewGamePassTier;
      goto code_?;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar23 = func_?(&UNK_?);
  FUN_?(uVar23);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)onContinueClicked,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar10 = uStack_19;
code_?:
  uStack_19 = uVar10;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean IsInTempClass() */

bool Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_IsInTempClass
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
    if ((((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar1 != 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      bVar2 = *(byte *)(lVar1 + 0x10);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        return (pPVar3->fields).gamePassTier < bVar2;
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  return 0;
}


/* Boolean IsInTempTier() */

bool Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_IsInTempTier
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
    if ((((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar1 != 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      bVar2 = *(byte *)(lVar1 + 0x10);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        return (pPVar3->fields).previewGamePassTier < bVar2;
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  return 0;
}


/* Void OnAdFinishedContinue() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_OnAdFinishedContinue
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ReviveUIHandlerBoosts____c___OnAdFinishedContinue_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandlerBoosts____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ReviveUIHandlerBoosts____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ReviveUIHandlerBoosts____c);
  }
  this_00 = TypeInfo__ReviveUIHandlerBoosts____c->static_fields->__9__13_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ReviveUIHandlerBoosts____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ReviveUIHandlerBoosts____c);
    }
    object = TypeInfo__ReviveUIHandlerBoosts____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__ReviveUIHandlerBoosts____c___OnAdFinishedContinue_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ReviveUIHandlerBoosts____c->static_fields->__9__13_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__ReviveUIHandlerBoosts____c->static_fields->__9__13_0 >>
                     0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
      (pGVar7 = (pMVar6->fields).GameEventManager, pGVar7 != (GameEventManager *)0x0)) &&
     (pGVar8 = (pGVar7->fields).AvatarCommandsPlayMode,
     pGVar8 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar8->fields).OnEnterPlaymode != (Action *)0x0) {
      pAVar9 = (pGVar8->fields).OnEnterPlaymode;
      (*(pAVar9->fields)._._.invoke_impl)
                ((pAVar9->fields)._._.method_code,(pAVar9->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnRewardedAdWatched(RewardedAdResult) */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_OnRewardedAdWatched
               (ReviveUIHandlerBoosts *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0___OnRewardedAdWatched_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_Ad_Available);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((result != RewardedAdResult__Enum_ErrorClient) &&
     (result != RewardedAdResult__Enum_ErrorInternal)) {
    if (result == RewardedAdResult__Enum_ErrorTimeout) {
      pBVar1 = (this->fields)._.continueButton;
      if ((pBVar1 != (Button *)0x0) &&
         (this_00 = (UnityEvent *)(pBVar1->fields).m_OnClick, this_00 != (UnityEvent *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
                  (this_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (result == RewardedAdResult__Enum_RewardUnlocked) {
      return;
    }
    if (result != RewardedAdResult__Enum_RewardNotUnlocked) {
      return;
    }
  }
  object = (Object *)FUN_?(TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0);
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    original = (this->fields)._.errorNotification;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar7 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar7;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pOVar7 = object[1].klass;
    pIVar8 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar8 != (IAdManager *)0x0) {
      uVar9 = FUN_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar8);
      pSVar10 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
      if ((pOVar7 != (Object__Class *)0x0) &&
         (pIVar11 = (pOVar7->_0).byval_arg.data.array, pIVar11 != (Il2CppArrayType *)0x0)) {
        (**(code **)&pIVar11->etype[0x5e].attrs)(pIVar11,uVar9,pIVar11->etype[0x5f].data.dummy);
        plVar12 = *(longlong **)&(pOVar7->_0).byval_arg.attrs;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x5e8))(plVar12,pSVar10,*(undefined8 *)(*plVar12 + 0x5f0));
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_01,object,
                     MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass17_0___OnRewardedAdWatched_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,this_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts_Update
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].monitor = (MonitorData *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&object[1].monitor >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  *(undefined1 *)&object[1].klass = 0;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,object,
             MethodInfo__ReviveUIHandlerBoosts____c__DisplayClass16_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (*(char *)&object[1].klass == '\0') {
    ReviveUIHandlerBase::ReviveUIHandlerBase_Update((ReviveUIHandlerBase *)this,(MethodInfo *)0x0);
  }
  return;
}


/* Void <OnRewardedAdWatched>b__17_1() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts::ReviveUIHandlerBoosts__OnRewardedAdWatched_b__17_1
               (ReviveUIHandlerBoosts *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._.continueButton;
  if ((pBVar1 == (Button *)0x0) ||
     (this_00 = (pBVar1->fields).m_OnClick, this_00 == (Button_ButtonClickedEvent *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar3 = UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::
           UnityEventBase_PrepareInvoke((UnityEventBase *)this_00,(MethodInfo *)0x0);
  uVar4 = 0;
  if (pLVar3 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar5 = 0x20;
code_?:
  do {
    if ((pLVar3->fields)._size <= (int)uVar4) {
      return;
    }
    if ((uint)(pLVar3->fields)._size <= uVar4) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pBVar6 = (pLVar3->fields)._items;
    if (pBVar6 == (BaseInvokableCall__Array *)0x0) goto code_?;
    if ((uint)pBVar6->max_length <= uVar4) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar7 = *(InvokableCall **)((longlong)pBVar6->vector + lVar5 + -0x20);
    if (pIVar7 != (InvokableCall *)0x0) {
      bVar8 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
      if ((bVar8 <= (pIVar7->klass->_1).naturalAligment) &&
         ((pIVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
          (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  (pIVar7,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
        goto code_?;
      }
    }
    pIVar7 = (InvokableCall *)FUN_?(pLVar3,uVar4);
    if (pIVar7 != (InvokableCall *)0x0) {
      bVar8 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
      if ((bVar8 <= (pIVar7->klass->_1).naturalAligment) &&
         ((pIVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
          (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  (pIVar7,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
        goto code_?;
      }
    }
    plVar9 = (longlong *)FUN_?(pLVar3,uVar4);
    if ((this_00->fields)._.m_InvokeArray == (Object__Array *)0x0) {
      pOVar10 = (Object__Array *)FUN_?(TypeInfo__System__Object,0);
      (this_00->fields)._.m_InvokeArray = pOVar10;
      func_?(&(this_00->fields)._.m_InvokeArray);
    }
    if (plVar9 == (longlong *)0x0) goto code_?;
    (**(code **)(*plVar9 + 0x178))
              (plVar9,(this_00->fields)._.m_InvokeArray,*(undefined8 *)(*plVar9 + 0x180));
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 8;
  } while( true );
}

