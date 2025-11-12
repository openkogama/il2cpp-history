
/* Void OnAvatarModeChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_OnAvatarModeChange
               (BoostIconActivationEffectManager *this,SpawnRoleModeType__Enum newMode,
               MethodInfo *method)

{
  if ((((this->fields).previousMode == 4) || ((this->fields).previousMode == 2)) &&
     (newMode == SpawnRoleModeType__Enum_Playing)) {
    bVar1 = cRam_? == '\0';
    (this->fields).nextActiveBoostEffect = 0;
    if (bVar1) {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (this->fields).boostIconEffects;
    if (pLVar2 != (List_1_BoostIconActivationEffectController_ *)0x0) {
      uVar3 = (this->fields).nextActiveBoostEffect;
      if ((pLVar2->fields)._size <= (int)uVar3) goto code_?;
      pLVar2 = (this->fields).boostIconEffects;
      (this->fields).nextActiveBoostEffect = uVar3 + 1;
      if (pLVar2 != (List_1_BoostIconActivationEffectController_ *)0x0) {
        if ((uint)(pLVar2->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pBVar5 = (pLVar2->fields)._items;
        if (pBVar5 != (BoostIconActivationEffectController__Array *)0x0) {
          if ((uint)pBVar5->max_length <= uVar3) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (pBVar5->vector[(int)uVar3] != (BoostIconActivationEffectController *)0x0) {
            BoostIconActivationEffectController::BoostIconActivationEffectController_Activate
                      (pBVar5->vector[(int)uVar3],(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  (this->fields).previousMode = newMode;
  return;
}


/* Void OnAvatarSpawn() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_OnAvatarSpawn
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).nextActiveBoostEffect = 0;
  if (bVar1) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).boostIconEffects;
  if (pLVar2 != (List_1_BoostIconActivationEffectController_ *)0x0) {
    uVar3 = (this->fields).nextActiveBoostEffect;
    if ((pLVar2->fields)._size <= (int)uVar3) {
      return;
    }
    pLVar2 = (this->fields).boostIconEffects;
    (this->fields).nextActiveBoostEffect = uVar3 + 1;
    if (pLVar2 != (List_1_BoostIconActivationEffectController_ *)0x0) {
      if ((uint)(pLVar2->fields)._size <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pBVar5 = (pLVar2->fields)._items;
      if (pBVar5 != (BoostIconActivationEffectController__Array *)0x0) {
        if ((uint)pBVar5->max_length <= uVar3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = pBVar5->vector[(int)uVar3];
        if (this_01 != (BoostIconActivationEffectController *)0x0) {
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)0x0,in_R8);
          if ((extraout_RAX != 0) &&
             (*(BoostController **)(extraout_RAX + 0xa0) != (BoostController *)0x0)) {
            bVar6 = BoostController::BoostController_IsBoostActive
                              (*(BoostController **)(extraout_RAX + 0xa0),
                               (this_01->fields).boostType,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              pUVar7 = (this_01->fields).startNewEffect;
              if (pUVar7 != (UnityAction *)0x0) {
                (**(void **)((longlong)&(pUVar7->fields)._._ + 8))
                          (*(void **)((longlong)&(pUVar7->fields)._._ + 0x30),
                           *(void **)((longlong)&(pUVar7->fields)._._ + 0x18));
                return;
              }
            }
            else {
              this_00 = (this_01->fields).canvasGroup;
              if (this_00 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (this_00,_UNK_?,(MethodInfo *)0x0);
                pcVar4 = pcRam_?;
                (this_01->fields).currentState = 1;
                pcVar8 = pcRam_?;
                if ((pcVar4 == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar8 = pcVar4,
                   pcVar4 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar8;
                fVar10 = (float)(*pcVar4)();
                (this_01->fields).stateStartTime = fVar10;
                (this_01->fields).haveStartedNewEffect = 0;
                obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_01,(MethodInfo *)0x0);
                obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this_01,(MethodInfo *)0x0);
                pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this_01,(MethodInfo *)0x0);
                if (pTVar11 != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar12 = (pTVar11->fields)._._.m_CachedPtr;
                  if (pvVar12 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcVar4 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcRam_? = pcVar4;
                  (*pcRam_?)(pvVar12);
                  fVar10 = (this_01->fields).originalYPosition;
                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                  if (pTVar11 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar12 = (pTVar11->fields)._._.m_CachedPtr;
                    if (pvVar12 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pcVar4 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                      uVar9 = func_?(&UNK_?);
                      FUN_?(uVar9,0);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pcRam_? = pcVar4;
                    (*pcRam_?)(pvVar12);
                    if (obj_00 != (Transform *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar12 = (obj_00->fields)._._.m_CachedPtr;
                      if (pvVar12 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)obj_00,(MethodInfo *)0x0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                        uVar9 = func_?(&UNK_?);
                        FUN_?(uVar9,0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcRam_? = pcVar4;
                      (*pcRam_?)(pvVar12);
                      if (obj != (Transform *)0x0) {
                        lStack_13 = (ulonglong)(uint)fVar10 << 0x20;
                        uStack_14 = 0;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar12 = (obj->fields)._._.m_CachedPtr;
                        if (pvVar12 != (void *)0x0) {
                          pcVar4 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)
                             ) {
                            uVar9 = func_?(&UNK_?);
                            FUN_?(uVar9,0);
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          pcRam_? = pcVar4;
                          (*pcRam_?)(pvVar12,&lStack_13);
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                    }
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_OnDestroy
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((CONCAT71(extraout_var,extraout_AL) != 0) &&
     (lVar2 = *(longlong *)(CONCAT71(extraout_var,extraout_AL) + 200), lVar2 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x38);
    uVar3 = FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                         );
    FUN_?(uVar3,this,
                  MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 );
    if (lVar2 != 0) {
      FUN_?(lVar2,uVar3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::BoostIconActivationEffectManager_Start
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BoostIconActivationEffectManager__StartBoostIconEffect__);
    LOCK();
    UNLOCK();
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
                  MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__Add_BoostIconActivationEffectController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  BoostIconActivationEffectController_MethodInfo__UnityEngine__Object__Instantiate<BoostIconActivationEffectController>_BoostIconActivationEffectController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0x38);
    uVar2 = FUN_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                          );
    FUN_?(uVar2,this,
                  MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 );
    if (lVar1 != 0) {
      FUN_?(lVar1);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((((pMVar3 != (MVGameControllerBase *)0x0) &&
            (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
           (this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
          ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0 &&
           (this_01 = (pMVar5->fields).boostController, this_01 != (BoostController *)0x0)))) &&
         (pDVar6 = BoostController::BoostController_GetAllBoosts(this_01,(MethodInfo *)0x0),
         pDVar6 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)) {
        pDStack_7 = (pDVar6->fields)._dictionary;
        ppDStack_8 = (Dictionary_2_BoostType_Boost_ **)0x0;
        uStack_9 = 0;
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&pDStack_11 >> 0xc);
          lVar1 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar1 + 0xADDR);
            puVar13 = (ulonglong *)(lVar1 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        if (pDStack_7 == (Dictionary_2_BoostType_Boost_ *)0x0) {
          pDStack_11 = pDStack_7;
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iStack_16 = (pDStack_7->fields)._version;
        uStack_9 = 0;
        uStack_17 = 0;
        apBStack_18[0] = (Boost *)0x0;
        pDStack_11 = (Dictionary_2_BoostType_Boost_ *)0x0;
        ppDStack_8 = &pDStack_7;
        do {
          if (pDStack_7 == (Dictionary_2_BoostType_Boost_ *)0x0) {
code_?:
            FUN_?();
            FUN_?();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          if (iStack_16 != (pDStack_7->fields)._version) {
code_?:
            mscorlib.dll::System::ThrowHelper::
            ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                      ((MethodInfo *)0x0);
            goto code_?;
          }
          do {
            if (pDStack_7 == (Dictionary_2_BoostType_Boost_ *)0x0) goto code_?;
            if ((uint)(pDStack_7->fields)._count <= uStack_17) {
              return;
            }
            pDVar19 = (pDStack_7->fields)._entries;
            lVar1 = (longlong)(int)uStack_17;
            uVar10 = uStack_17 + 1;
            if (pDVar19 == (Dictionary_2_TKey_TValue_Entry_BoostType_Boost___Array *)0x0)
            goto code_?;
            if ((uint)pDVar19->max_length <= uStack_17) {
              uStack_17 = uVar10;
              FUN_?();
              goto code_?;
            }
            uStack_17 = uVar10;
          } while (pDVar19->vector[lVar1].hashCode < 0);
          apBStack_18[0] = pDVar19->vector[lVar1].value;
          func_?(apBStack_18);
          pBVar20 = apBStack_18[0];
          original = (this->fields).boostIconEffectPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          unaff_R14 = (BoostIconActivationEffectController *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original,
                                 BoostIconActivationEffectController_MethodInfo__UnityEngine__Object__Instantiate<BoostIconActivationEffectController>_BoostIconActivationEffectController_
                                );
          if (unaff_R14 == (BoostIconActivationEffectController *)0x0) {
code_?:
            FUN_?();
            uVar10 = uStack_17;
code_?:
            uStack_17 = uVar10;
            FUN_?();
code_?:
            FUN_?();
            goto code_?;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
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
          pvVar21 = (unaff_R14->fields)._._._._.m_CachedPtr;
          if (pvVar21 == (void *)0x0) {
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_R14,(MethodInfo *)0x0);
            goto code_?;
          }
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
code_?:
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2);
code_?:
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2);
code_?:
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2);
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(unaff_RSI,(MethodInfo *)0x0);
code_?:
            FUN_?();
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            goto code_?;
          }
          pcRam_? = pcVar15;
          pvVar21 = (void *)(*pcRam_?)(pvVar21);
          unaff_RSI = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                      Unmarshal_UnmarshalUnityObject
                                (pvVar21,
                                 UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                );
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
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
          pvVar21 = (this->fields)._._._._.m_CachedPtr;
          if (pvVar21 == (void *)0x0) goto code_?;
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar15;
          pvVar21 = (void *)(*pcRam_?)(pvVar21);
          pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar21,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (unaff_RSI == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar23 = unaff_RSI[1].klass;
          if (pOVar23 == (Object__Class *)0x0) goto code_?;
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pOVar24 = (Object__Class *)0x0;
          if (pOVar22 != (Object *)0x0) {
            pOVar24 = pOVar22[1].klass;
          }
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar15;
          (*pcRam_?)(pOVar23,pOVar24,0);
          if (pBVar20 == (Boost *)0x0) goto code_?;
          type = (pBVar20->fields)._Type_k__BackingField;
          startNewEffect = (UnityAction *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          pMVar25 = MethodInfo__BoostIconActivationEffectManager__StartBoostIconEffect__;
          (startNewEffect->fields)._._.method_ptr =
               MethodInfo__BoostIconActivationEffectManager__StartBoostIconEffect__->
               virtualMethodPointer;
          (startNewEffect->fields)._._.method = pMVar25;
          (startNewEffect->fields)._._.m_target = (Object *)this;
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)&(startNewEffect->fields)._._.m_target >> 0xc);
            lVar1 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar1 + 0xADDR);
              puVar13 = (ulonglong *)(lVar1 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          uVar26 = pMVar25->parameters_count;
          (startNewEffect->fields)._._.method_code = startNewEffect;
          if (((pMVar25->flags & 0x10) == 0) || (uVar26 != 0)) {
            (startNewEffect->fields)._._.method_code = (startNewEffect->fields)._._.m_target;
            puVar27 = (startNewEffect->fields)._._.method_ptr;
          }
          else {
            puVar27 = &UNK_?;
          }
          (startNewEffect->fields)._._.invoke_impl = puVar27;
          (startNewEffect->fields)._._.extra_arg = FUN_?;
          BoostIconActivationEffectController::BoostIconActivationEffectController_Initialize
                    (unaff_R14,type,startNewEffect,(MethodInfo *)0x0);
          pMVar25 = 
          MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__Add_BoostIconActivationEffectController_
          ;
          this_02 = (this->fields).boostIconEffects;
          if (this_02 == (List_1_BoostIconActivationEffectController_ *)0x0)
          goto code_?;
          piVar28 = &(this_02->fields)._version;
          *piVar28 = *piVar28 + 1;
          pBVar29 = (this_02->fields)._items;
          uVar10 = (this_02->fields)._size;
          if (pBVar29 == (BoostIconActivationEffectController__Array *)0x0)
          goto code_?;
          if (uVar10 < (uint)pBVar29->max_length) {
            (this_02->fields)._size = uVar10 + 1;
            FUN_?(pBVar29,(longlong)(int)uVar10,unaff_R14);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_02,(Object *)unaff_R14,
                       pMVar25->klass->rgctx_data[0xe].method);
          }
        } while( true );
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void StartBoostIconEffect() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_StartBoostIconEffect
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boostIconEffects;
  if (pLVar1 != (List_1_BoostIconActivationEffectController_ *)0x0) {
    uVar2 = (this->fields).nextActiveBoostEffect;
    if ((pLVar1->fields)._size <= (int)uVar2) {
      return;
    }
    pLVar1 = (this->fields).boostIconEffects;
    (this->fields).nextActiveBoostEffect = uVar2 + 1;
    if (pLVar1 != (List_1_BoostIconActivationEffectController_ *)0x0) {
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pBVar4 = (pLVar1->fields)._items;
      if (pBVar4 != (BoostIconActivationEffectController__Array *)0x0) {
        if ((uint)pBVar4->max_length <= uVar2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = pBVar4->vector[(int)uVar2];
        if (this_01 != (BoostIconActivationEffectController *)0x0) {
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)0x0,in_R8);
          if ((extraout_RAX != 0) &&
             (*(BoostController **)(extraout_RAX + 0xa0) != (BoostController *)0x0)) {
            bVar5 = BoostController::BoostController_IsBoostActive
                              (*(BoostController **)(extraout_RAX + 0xa0),
                               (this_01->fields).boostType,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              pUVar6 = (this_01->fields).startNewEffect;
              if (pUVar6 != (UnityAction *)0x0) {
                (**(void **)((longlong)&(pUVar6->fields)._._ + 8))
                          (*(void **)((longlong)&(pUVar6->fields)._._ + 0x30),
                           *(void **)((longlong)&(pUVar6->fields)._._ + 0x18));
                return;
              }
            }
            else {
              this_00 = (this_01->fields).canvasGroup;
              if (this_00 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (this_00,_UNK_?,(MethodInfo *)0x0);
                pcVar3 = pcRam_?;
                (this_01->fields).currentState = 1;
                pcVar7 = pcRam_?;
                if ((pcVar3 == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar3,
                   pcVar3 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar7;
                fVar9 = (float)(*pcVar3)();
                (this_01->fields).stateStartTime = fVar9;
                (this_01->fields).haveStartedNewEffect = 0;
                obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_01,(MethodInfo *)0x0);
                obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this_01,(MethodInfo *)0x0);
                pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this_01,(MethodInfo *)0x0);
                if (pTVar10 != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar11 = (pTVar10->fields)._._.m_CachedPtr;
                  if (pvVar11 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcVar3 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcRam_? = pcVar3;
                  (*pcRam_?)(pvVar11);
                  fVar9 = (this_01->fields).originalYPosition;
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                  if (pTVar10 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar11 = (pTVar10->fields)._._.m_CachedPtr;
                    if (pvVar11 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pcVar3 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                      uVar8 = func_?(&UNK_?);
                      FUN_?(uVar8,0);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pcRam_? = pcVar3;
                    (*pcRam_?)(pvVar11);
                    if (obj_00 != (Transform *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar11 = (obj_00->fields)._._.m_CachedPtr;
                      if (pvVar11 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)obj_00,(MethodInfo *)0x0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcVar3 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcRam_? = pcVar3;
                      (*pcRam_?)(pvVar11);
                      if (obj != (Transform *)0x0) {
                        lStack_12 = (ulonglong)(uint)fVar9 << 0x20;
                        uStack_13 = 0;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar11 = (obj->fields)._._.m_CachedPtr;
                        if (pvVar11 != (void *)0x0) {
                          pcVar3 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)
                             ) {
                            uVar8 = func_?(&UNK_?);
                            FUN_?(uVar8,0);
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          pcRam_? = pcVar3;
                          (*pcRam_?)(pvVar11,&lStack_12);
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                    }
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* BoostIconActivationEffectManager() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::BoostIconActivationEffectManager__ctor
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<BoostIconActivationEffectController>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_BoostIconActivationEffectController_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<BoostIconActivationEffectController>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).boostIconEffects = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).boostIconEffects >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

