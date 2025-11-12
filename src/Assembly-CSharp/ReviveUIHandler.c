
/* Void CleanupAvatarBodyAfterScreenshot() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_CleanupAvatarBodyAfterScreenshot
               (ReviveUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).bodyClone;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pGVar1 != (GameObject *)0x0) {
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void CreateAvatarBodyForScreenshot() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_CreateAvatarBodyForScreenshot
               (ReviveUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarBlobShadowController__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarBlobShadowController>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
      (pSVar2 = (pSVar1->fields).woId,
      pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0)) &&
     (pSVar3 = (pSVar2->fields)._.subscribableVariable,
     pSVar3 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_01,(pSVar3->fields)._.value,(MethodInfo *)0x0),
       pMVar4 != (MVWorldObjectClient *)0x0)) {
      bVar5 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if (((pMVar4->klass->_1).naturalAligment < bVar5) ||
         ((MVAvatarLocal__Class *)(pMVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
          TypeInfo__MVAvatarLocal)) {
        FUN_?(pMVar4);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = (MVBody *)pMVar4[1].fields.ScaleChanged;
      if (this_00 != (MVBody *)0x0) {
        pGVar7 = MVBody::MVBody_CreateClone(this_00,0,0,(MethodInfo *)0x0);
        bVar8 = iRam_? != 0;
        (this->fields).bodyClone = pGVar7;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)&(this->fields).bodyClone >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        pMVar13 = 
        UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
        ;
        pGVar7 = (this->fields).bodyClone;
        if (pGVar7 != (GameObject *)0x0) {
          if ((
              UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                         );
          }
          p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_4
                              (pGVar7,0,((pMVar13->field7_0x38).rgctx_data)->method);
          uVar9 = 0;
          if (p_Var23 != (_Il2CppFullySharedGenericType__Array *)0x0) {
            pp_Var39 = p_Var23->vector;
            for (uVar14 = uVar9;
                pMVar13 = 
                AvatarBlobShadowController__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarBlobShadowController>______
                , (int)uVar14 < (int)p_Var23->max_length; uVar14 = uVar14 + 1) {
              if ((uint)p_Var23->max_length <= uVar14) goto code_?;
              pOVar15 = (Object *)*pp_Var39;
              if (pOVar15 == (Object *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar16 = pOVar15[1].klass;
              if (pOVar16 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pOVar16);
              pp_Var39 = pp_Var39 + 1;
            }
            pGVar7 = (this->fields).bodyClone;
            if (pGVar7 != (GameObject *)0x0) {
              if ((
                  AvatarBlobShadowController__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarBlobShadowController>______
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             AvatarBlobShadowController__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarBlobShadowController>______
                             );
              }
              p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_4
                                  (pGVar7,0,((pMVar13->field7_0x38).rgctx_data)->method);
              if (p_Var23 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                pp_Var39 = p_Var23->vector;
                for (uVar14 = uVar9;
                    pMVar13 = 
                    PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                    , (int)uVar14 < (int)p_Var23->max_length; uVar14 = uVar14 + 1) {
                  if ((uint)p_Var23->max_length <= uVar14) goto code_?;
                  pOVar15 = (Object *)*pp_Var39;
                  if (pOVar15 == (Object *)0x0) goto code_?;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pOVar16 = pOVar15[1].klass;
                  if (pOVar16 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcVar6 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar17 = func_?(&UNK_?);
                    FUN_?(uVar17,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  (*pcRam_?)(pOVar16);
                  pp_Var39 = pp_Var39 + 1;
                }
                pGVar7 = (this->fields).bodyClone;
                if (pGVar7 != (GameObject *)0x0) {
                  if ((
                      PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?(
                                 PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                 );
                  }
                  p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentsInChildren_4
                                      (pGVar7,0,((pMVar13->field7_0x38).rgctx_data)->method);
                  if (p_Var23 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                    pp_Var39 = p_Var23->vector;
                    for (uVar14 = uVar9;
                        pMVar13 = 
                        AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                        , (int)uVar14 < (int)p_Var23->max_length; uVar14 = uVar14 + 1) {
                      if ((uint)p_Var23->max_length <= uVar14) goto code_?;
                      pOVar15 = (Object *)*pp_Var39;
                      if (pOVar15 == (Object *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar16 = pOVar15[1].klass;
                      if (pOVar16 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcVar6 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                      {
                        uVar17 = func_?(&UNK_?);
                        FUN_?(uVar17,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcRam_? = pcVar6;
                      pvVar18 = (void *)(*pcRam_?)(pOVar16);
                      pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                Unmarshal_UnmarshalUnityObject
                                          (pvVar18,
                                           UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                          );
                      if (pOVar15 == (Object *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar16 = pOVar15[1].klass;
                      if (pOVar16 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcVar6 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                      {
                        uVar17 = func_?(&UNK_?);
                        FUN_?(uVar17,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcRam_? = pcVar6;
                      (*pcRam_?)(pOVar16);
                      pp_Var39 = pp_Var39 + 1;
                    }
                    pGVar7 = (this->fields).bodyClone;
                    if (pGVar7 != (GameObject *)0x0) {
                      if ((
                          AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                        FUN_?(
                                     AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                     );
                      }
                      p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentsInChildren_4
                                          (pGVar7,0,((pMVar13->field7_0x38).rgctx_data)->method);
                      if (p_Var23 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                        pp_Var39 = p_Var23->vector;
                        for (uVar14 = uVar9; (int)uVar14 < (int)p_Var23->max_length;
                            uVar14 = uVar14 + 1) {
                          if ((uint)p_Var23->max_length <= uVar14) goto code_?;
                          pOVar15 = (Object *)*pp_Var39;
                          if (pOVar15 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar16 = pOVar15[1].klass;
                          if (pOVar16 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          pcVar6 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar6 = (code *)FUN_?(&UNK_?),
                             pcVar6 == (code *)0x0)) {
                            uVar17 = func_?(&UNK_?);
                            FUN_?(uVar17,0);
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          pcRam_? = pcVar6;
                          pvVar18 = (void *)(*pcRam_?)(pOVar16);
                          pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar18,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar15 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar16 = pOVar15[1].klass;
                          if (pOVar16 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          pcVar6 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar6 = (code *)FUN_?(&UNK_?),
                             pcVar6 == (code *)0x0)) {
                            uVar17 = func_?(&UNK_?);
                            FUN_?(uVar17,0);
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          pcRam_? = pcVar6;
                          (*pcRam_?)(pOVar16);
                          pp_Var39 = pp_Var39 + 1;
                        }
                        pGVar7 = (this->fields).bodyClone;
                        if ((pGVar7 != (GameObject *)0x0) &&
                           (p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponentsInChildren_4
                                                (pGVar7,1,
                                                 AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                                ),
                           p_Var23 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                          pp_Var39 = p_Var23->vector;
                          for (uVar14 = uVar9; (int)uVar14 < (int)p_Var23->max_length;
                              uVar14 = uVar14 + 1) {
                            if ((uint)p_Var23->max_length <= uVar14) goto code_?;
                            pOVar15 = (Object *)*pp_Var39;
                            if (pOVar15 == (Object *)0x0) goto code_?;
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pOVar16 = pOVar15[1].klass;
                            if (pOVar16 == (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                            pcVar6 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar6 = (code *)FUN_?(&UNK_?),
                               pcVar6 == (code *)0x0)) {
                              uVar17 = func_?(&UNK_?);
                              FUN_?(uVar17,0);
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                            pcRam_? = pcVar6;
                            (*pcRam_?)(pOVar16);
                            pp_Var39 = pp_Var39 + 1;
                          }
                          pGVar7 = (this->fields).bodyClone;
                          if ((pGVar7 != (GameObject *)0x0) &&
                             (p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentsInChildren_4
                                                  (pGVar7,1,
                                                                                                      
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  ),
                             p_Var23 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                            pp_Var39 = p_Var23->vector;
                            for (uVar14 = uVar9;
                                pMVar13 = 
                                SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                , (int)uVar14 < (int)p_Var23->max_length; uVar14 = uVar14 + 1) {
                              if ((uint)p_Var23->max_length <= uVar14) goto code_?;
                              pOVar15 = (Object *)*pp_Var39;
                              if (pOVar15 == (Object *)0x0) goto code_?;
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pOVar16 = pOVar15[1].klass;
                              if (pOVar16 == (Object__Class *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0)
                                ;
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pcVar6 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar6 = (code *)FUN_?(&UNK_?),
                                 pcVar6 == (code *)0x0)) {
                                uVar17 = func_?(&UNK_?);
                                FUN_?(uVar17,0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pcRam_? = pcVar6;
                              (*pcRam_?)(pOVar16);
                              pp_Var39 = pp_Var39 + 1;
                            }
                            pGVar7 = (this->fields).bodyClone;
                            if (pGVar7 != (GameObject *)0x0) {
                              if ((
                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                FUN_?(
                                             SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                             );
                              }
                              p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentsInChildren_4
                                                  (pGVar7,0,
                                                   ((pMVar13->field7_0x38).rgctx_data)->method);
                              if (p_Var23 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                pp_Var39 = p_Var23->vector;
                                for (uVar14 = uVar9;
                                    pMVar13 = 
                                    InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                    , (int)uVar14 < (int)p_Var23->max_length; uVar14 = uVar14 + 1) {
                                  if ((uint)p_Var23->max_length <= uVar14)
                                  goto code_?;
                                  pOVar15 = (Object *)*pp_Var39;
                                  if (pOVar15 == (Object *)0x0) goto code_?;
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    FUN_?(&
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar16 = pOVar15[1].klass;
                                  if (pOVar16 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              (pOVar15,(MethodInfo *)0x0);
                                    pcVar6 = (code *)swi(3);
                                    (*pcVar6)();
                                    return;
                                  }
                                  pcVar6 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar6 = (code *)FUN_?(&UNK_?),
                                     pcVar6 == (code *)0x0)) {
                                    uVar17 = func_?(&UNK_?);
                                    FUN_?(uVar17,0);
                                    pcVar6 = (code *)swi(3);
                                    (*pcVar6)();
                                    return;
                                  }
                                  pcRam_? = pcVar6;
                                  pvVar18 = (void *)(*pcRam_?)(pOVar16);
                                  pOVar19 = (Object_1 *)
                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                            Unmarshal::Unmarshal_UnmarshalUnityObject
                                                      (pvVar18,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0)
                                  {
                                    FUN_?();
                                  }
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__UnityEngine__Object);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0)
                                  {
                                    FUN_?();
                                  }
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                                            (pOVar19,0.0,(MethodInfo *)0x0);
                                  pp_Var39 = pp_Var39 + 1;
                                }
                                pGVar7 = (this->fields).bodyClone;
                                if (pGVar7 != (GameObject *)0x0) {
                                  if ((
                                      InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                    FUN_?(
                                                 InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                 );
                                  }
                                  pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_GetComponentInChildren_3
                                                      (pGVar7,0,
                                                       ((pMVar13->field7_0x38).rgctx_data)->method);
                                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0)
                                  {
                                    FUN_?();
                                  }
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__UnityEngine__Object);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0)
                                  {
                                    FUN_?();
                                  }
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__UnityEngine__Object);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  if (pOVar15 != (Object *)0x0) {
                                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0
                                       ) {
                                      FUN_?();
                                    }
                                    if (pOVar15[1].klass != (Object__Class *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pOVar16 = pOVar15[1].klass;
                                      if (pOVar16 == (Object__Class *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                        ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                  (pOVar15,(MethodInfo *)0x0);
                                        pcVar6 = (code *)swi(3);
                                        (*pcVar6)();
                                        return;
                                      }
                                      pcVar6 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar6 = (code *)FUN_?(&UNK_?),
                                         pcVar6 == (code *)0x0)) {
                                        uVar17 = func_?(&UNK_?);
                                        FUN_?(uVar17,0);
                                        pcVar6 = (code *)swi(3);
                                        (*pcVar6)();
                                        return;
                                      }
                                      pcRam_? = pcVar6;
                                      pvVar18 = (void *)(*pcRam_?)(pOVar16);
                                      pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                                Unmarshal::Unmarshal_UnmarshalUnityObject
                                                          (pvVar18,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                      if (pOVar15 == (Object *)0x0) goto code_?;
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pOVar16 = pOVar15[1].klass;
                                      if (pOVar16 == (Object__Class *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                        ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                  (pOVar15,(MethodInfo *)0x0);
                                        pcVar6 = (code *)swi(3);
                                        (*pcVar6)();
                                        return;
                                      }
                                      pcVar6 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar6 = (code *)FUN_?(&UNK_?),
                                         pcVar6 == (code *)0x0)) {
                                        uVar17 = func_?(&UNK_?);
                                        FUN_?(uVar17,0);
                                        pcVar6 = (code *)swi(3);
                                        (*pcVar6)();
                                        return;
                                      }
                                      pcRam_? = pcVar6;
                                      (*pcRam_?)(pOVar16);
                                    }
                                  }
                                  pMVar13 = 
                                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                  ;
                                  pGVar7 = (this->fields).bodyClone;
                                  if (pGVar7 != (GameObject *)0x0) {
                                    if ((
                                        SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                      FUN_?(
                                                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                                  );
                                    }
                                    p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren_4
                                                        (pGVar7,0,
                                                         ((pMVar13->field7_0x38).rgctx_data)->method
                                                        );
                                    if (p_Var23 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                      pp_Var39 = p_Var23->vector;
                                      for (uVar14 = uVar9;
                                          pMVar13 = 
                                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                          , (int)uVar14 < (int)p_Var23->max_length;
                                          uVar14 = uVar14 + 1) {
                                        if ((uint)p_Var23->max_length <= uVar14)
                                        goto code_?;
                                        p_Var9 = *pp_Var39;
                                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c
                                            == 0) {
                                          FUN_?();
                                        }
                                        if (cRam_? == '\0') {
                                          FUN_?(&TypeInfo__UnityEngine__Object);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c
                                            == 0) {
                                          FUN_?();
                                        }
                                        if (cRam_? == '\0') {
                                          FUN_?(&TypeInfo__UnityEngine__Object);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        if (p_Var9 != (_Il2CppFullySharedGenericType *)0x0) {
                                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                       field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          if (p_Var9[1].klass !=
                                              (_Il2CppFullySharedGenericType__Class *)0x0) {
                                            if ((uint)p_Var23->max_length <= uVar14)
                                            goto code_?;
                                            if ((SkinnedMeshOptimizer *)*pp_Var39 ==
                                                (SkinnedMeshOptimizer *)0x0)
                                            goto code_?;
                                            SkinnedMeshOptimizer::
                                            SkinnedMeshOptimizer_DisableOptimizer
                                                      ((SkinnedMeshOptimizer *)*pp_Var39,
                                                       (MethodInfo *)0x0);
                                            if ((uint)p_Var23->max_length <= uVar14)
                                            goto code_?;
                                            if ((SkinnedMeshOptimizer *)*pp_Var39 ==
                                                (SkinnedMeshOptimizer *)0x0)
                                            goto code_?;
                                            SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                                                      ((SkinnedMeshOptimizer *)*pp_Var39,
                                                       (MethodInfo *)0x0);
                                            if ((uint)p_Var23->max_length <= uVar14)
                                            goto code_?;
                                            pOVar19 = (Object_1 *)*pp_Var39;
                                            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                         field_0x1c == 0) {
                                              FUN_?();
                                            }
                                            UnityEngine.CoreModule.dll::UnityEngine::Object::
                                            Object_1_Destroy_1(pOVar19,(MethodInfo *)0x0);
                                          }
                                        }
                                        pp_Var39 = pp_Var39 + 1;
                                      }
                                      pGVar7 = (this->fields).bodyClone;
                                      if (pGVar7 != (GameObject *)0x0) {
                                        if ((
                                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                          FUN_?(
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                        }
                                        p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponentsInChildren_4
                                                            (pGVar7,0,
                                                             ((pMVar13->field7_0x38).rgctx_data)->
                                                             method);
                                        if (p_Var23 != (_Il2CppFullySharedGenericType__Array *)0x0)
                                        {
                                          pp_Var39 = p_Var23->vector;
                                          for (uVar14 = uVar9;
                                              pMVar13 = 
                                              UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                              , (int)uVar14 < (int)p_Var23->max_length;
                                              uVar14 = uVar14 + 1) {
                                            lVar20 = 0x20;
                                            uVar21 = uVar9;
                                            while( true ) {
                                              if ((uint)p_Var23->max_length <= uVar14)
                                              goto code_?;
                                              if (((Renderer *)*pp_Var39 == (Renderer *)0x0) ||
                                                 (pMVar22 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)*pp_Var39,
                                                                       (MethodInfo *)0x0),
                                                 pMVar22 == (Material__Array *)0x0))
                                              goto code_?;
                                              if ((int)pMVar22->max_length <= (int)uVar21) break;
                                              if ((uint)p_Var23->max_length <= uVar14)
                                              goto code_?;
                                              if (((Renderer *)*pp_Var39 == (Renderer *)0x0) ||
                                                 (pMVar22 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)*pp_Var39,
                                                                       (MethodInfo *)0x0),
                                                 pMVar22 == (Material__Array *)0x0))
                                              goto code_?;
                                              if ((uint)pMVar22->max_length <= uVar21)
                                              goto code_?;
                                              pMVar23 = *(Material **)
                                                         ((longlong)pMVar22->vector + lVar20 + -0x20
                                                         );
                                              if (pMVar23 == (Material *)0x0)
                                              goto code_?;
                                              bVar24 = UnityEngine.CoreModule.dll::UnityEngine::
                                                       Material::Material_HasProperty_1
                                                                 (pMVar23,StringLiteral__Color,
                                                                  (MethodInfo *)0x0);
                                              if (bVar24 != 0) {
                                                if ((uint)p_Var23->max_length <= uVar14)
                                                goto code_?;
                                                if (((Renderer *)*pp_Var39 == (Renderer *)0x0) ||
                                                   (pMVar22 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Renderer::
                                                              Renderer_get_materials
                                                                        ((Renderer *)*pp_Var39,
                                                                         (MethodInfo *)0x0),
                                                   pMVar22 == (Material__Array *)0x0))
                                                goto code_?;
                                                if ((uint)pMVar22->max_length <= uVar21)
                                                goto code_?;
                                                pMVar23 = *(Material **)
                                                           ((longlong)pMVar22->vector +
                                                           lVar20 + -0x20);
                                                if (pMVar23 == (Material *)0x0)
                                                goto code_?;
                                                pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Material::Material_get_color
                                                                    (&CStack_26,pMVar23,
                                                                     (MethodInfo *)0x0);
                                                uVar17._0_4_ = pCVar25->r;
                                                uVar17._4_4_ = pCVar25->g;
                                                fVar27 = pCVar25->b;
                                                if ((uint)p_Var23->max_length <= uVar14)
                                                goto code_?;
                                                if (((Renderer *)*pp_Var39 == (Renderer *)0x0) ||
                                                   (pMVar22 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Renderer::
                                                              Renderer_get_materials
                                                                        ((Renderer *)*pp_Var39,
                                                                         (MethodInfo *)0x0),
                                                   pMVar22 == (Material__Array *)0x0))
                                                goto code_?;
                                                if ((uint)pMVar22->max_length <= uVar21)
                                                goto code_?;
                                                pMVar23 = *(Material **)
                                                           ((longlong)pMVar22->vector +
                                                           lVar20 + -0x20);
                                                if (pMVar23 == (Material *)0x0)
                                                goto code_?;
                                                CStack_28.b = fVar27;
                                                CStack_28.a = 1.0;
                                                CStack_28._0_8_ = uVar17;
                                                UnityEngine.CoreModule.dll::UnityEngine::Material::
                                                Material_set_color(pMVar23,&CStack_28,
                                                                   (MethodInfo *)0x0);
                                              }
                                              uVar21 = uVar21 + 1;
                                              lVar20 = lVar20 + 8;
                                            }
                                            pp_Var39 = pp_Var39 + 1;
                                          }
                                          pGVar7 = (this->fields).bodyClone;
                                          if (pGVar7 != (GameObject *)0x0) {
                                            if ((
                                                UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0)
                                            {
                                              FUN_?(
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                            }
                                            this_02 = (Animation *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::
                                                      GameObject_GetComponentInChildren_3
                                                                (pGVar7,0,
                                                                 ((pMVar13->field7_0x38).rgctx_data)
                                                                 ->method);
                                            if (this_02 != (Animation *)0x0) {
                                              UnityEngine.AnimationModule.dll::UnityEngine::
                                              Animation::Animation_Play_3
                                                        (this_02,StringLiteral_Idle,
                                                         PlayMode__Enum_StopSameLayer,
                                                         (MethodInfo *)0x0);
                                              pOVar29 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_GetComponentsInChildren
                                                                  ((Component *)this_02,
                                                                                                                                      
                                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                                                  );
                                              if (pOVar29 != (Object__Array *)0x0) {
                                                ppOVar30 = pOVar29->vector;
                                                for (; (int)uVar9 < (int)pOVar29->max_length;
                                                    uVar9 = uVar9 + 1) {
                                                  if ((uint)pOVar29->max_length <= uVar9) {
code_?:
                                                    FUN_?();
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  if (*ppOVar30 == (Object *)0x0)
                                                  goto code_?;
                                                  (*(code *)(*ppOVar30)->klass[1]._0.name)();
                                                  ppOVar30 = ppOVar30 + 1;
                                                }
                                                if (cRam_? == '\0') {
                                                  FUN_?(&TypeInfo__MVGameControllerBase);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pMVar31 = TypeInfo__MVGameControllerBase->
                                                          static_fields->instance;
                                                if (((((pMVar31 != (MVGameControllerBase *)0x0) &&
                                                      (pMVar32 = (pMVar31->fields).game,
                                                      pMVar32 != (MVNetworkGame *)0x0)) &&
                                                     (pMVar33 = (pMVar32->fields).playerContainer,
                                                     pMVar33 != (MVPlayerContainer *)0x0)) &&
                                                    ((pMVar34 = MVPlayerContainer::
                                                                MVPlayerContainer_get_LocalPlayer
                                                                          (pMVar33,(MethodInfo *)0x0
                                                                          ),
                                                     pMVar34 != (MVLocalPlayer *)0x0 &&
                                                     (pSVar1 = (pMVar34->fields).
                                                                spawnRoleDataMediator,
                                                     pSVar1 != (SpawnRoleDataMediator *)0x0)))) &&
                                                   ((pSVar35 = (pSVar1->fields).reviveState,
                                                    pSVar35 !=
                                                    (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_
                                                  *)0x0 && ((pSVar36 = (pSVar35->fields)._.
                                                                       subscribableVariable,
                                                            pSVar36 !=
                                                            (SubscribableVariable_1_ReviveState_ *)
                                                            0x0 && (pRVar37 = (pSVar36->fields)._.
                                                                              value,
                                                                   pRVar37 != (ReviveState *)0x0))))
                                                  )) {
                                                  pMVar13 = (MethodInfo *)0x0;
                                                  pSVar38 = ReviveState::
                                                                                                                        
                                                  ReviveState_GetSafeGroundedDataAtSelectedIndex
                                                            (&SStack_39,pRVar37,(MethodInfo *)0x0);
                                                  uStack_40._0_4_ = (pSVar38->Position).x;
                                                  uStack_40._4_4_ = (pSVar38->Position).y;
                                                  auStack_41 = *(undefined1 (*) [8])
                                                                &(pSVar38->Position).z;
                                                  uStack_42._0_4_ = (pSVar38->Rotation).y;
                                                  uStack_42._4_4_ = (pSVar38->Rotation).z;
                                                  uStack_43 = *(undefined8 *)&(pSVar38->Rotation).w;
                                                  uStack_44._0_4_ = (pSVar38->CameraPosition).y;
                                                  uStack_44._4_4_ = (pSVar38->CameraPosition).z;
                                                  QStack_45.x = (pSVar38->CameraRotation).x;
                                                  QStack_45.y = (pSVar38->CameraRotation).y;
                                                  QStack_45.z = (pSVar38->CameraRotation).z;
                                                  QStack_45.w = (pSVar38->CameraRotation).w;
                                                  pVVar46 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Quaternion::Quaternion_get_eulerAngles
                                                                      ((Vector3 *)&CStack_28,
                                                                       (Quaternion *)
                                                                       (auStack_41 + 4),pMVar13);
                                                  uVar47 = pVVar46->x;
                                                  fVar27 = pVVar46->z;
                                                  pVVar46 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Quaternion::Quaternion_get_eulerAngles
                                                                      (&VStack_48,&QStack_45,pMVar13
                                                                      );
                                                  pGVar7 = (this->fields).bodyClone;
                                                  CStack_28.r = pVVar46->x;
                                                  CStack_28.g = pVVar46->y;
                                                  CStack_28.b = pVVar46->z;
                                                  if (pGVar7 != (GameObject *)0x0) {
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
                                                  pvVar18 = (pGVar7->fields)._.m_CachedPtr;
                                                  if (pvVar18 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar7,(MethodInfo *)0x0);
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  pcVar6 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar6 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar6 == (code *)0x0)) {
                                                    uVar17 = func_?(&UNK_?);
                                                    FUN_?(uVar17,0);
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar6;
                                                  pvVar18 = (void *)(*pcRam_?)
                                                                              (pvVar18);
                                                  pOVar15 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar18,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar31 = TypeInfo__MVGameControllerBase->
                                                            static_fields->instance;
                                                  if ((((pMVar31 != (MVGameControllerBase *)0x0) &&
                                                       (pMVar32 = (pMVar31->fields).game,
                                                       pMVar32 != (MVNetworkGame *)0x0)) &&
                                                      (pMVar33 = (pMVar32->fields).playerContainer,
                                                      pMVar33 != (MVPlayerContainer *)0x0)) &&
                                                     (((pMVar34 = MVPlayerContainer::
                                                                  MVPlayerContainer_get_LocalPlayer
                                                                            (pMVar33,(MethodInfo *)
                                                                                     0x0),
                                                       pMVar34 != (MVLocalPlayer *)0x0 &&
                                                       (pSVar1 = (pMVar34->fields).
                                                                  spawnRoleDataMediator,
                                                       pSVar1 != (SpawnRoleDataMediator *)0x0)) &&
                                                      ((pSVar35 = (pSVar1->fields).reviveState,
                                                       pSVar35 !=
                                                       (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_
                                                  *)0x0 && ((pSVar36 = (pSVar35->fields)._.
                                                                       subscribableVariable,
                                                            pSVar36 !=
                                                            (SubscribableVariable_1_ReviveState_ *)
                                                            0x0 && (pRVar37 = (pSVar36->fields)._.
                                                                              value,
                                                                   pRVar37 != (ReviveState *)0x0))))
                                                  )))) {
                                                    pSVar38 = ReviveState::
                                                              ReviveState_get_SafeGroundedData
                                                                        (&SStack_39,pRVar37,
                                                                         (MethodInfo *)0x0);
                                                    uVar49._0_4_ = (pSVar38->Position).x;
                                                    uVar49._4_4_ = (pSVar38->Position).y;
                                                    fVar50 = (float)*(undefined8 *)
                                                                     &(pSVar38->Position).z;
                                                    if (pOVar15 != (Object *)0x0) {
                                                      VStack_48._0_8_ = uVar49;
                                                      VStack_48.z = fVar50;
                                                      if (cRam_? == '\0') {
                                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar16 = pOVar15[1].klass;
                                                  if (pOVar16 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar15,(MethodInfo *)0x0);
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  pcVar6 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar6 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar6 == (code *)0x0)) {
                                                    uVar17 = func_?(&UNK_?);
                                                    FUN_?(uVar17,0);
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar6;
                                                  (*pcRam_?)(pOVar16);
                                                  pGVar7 = (this->fields).bodyClone;
                                                  if (pGVar7 != (GameObject *)0x0) {
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
                                                  pvVar18 = (pGVar7->fields)._.m_CachedPtr;
                                                  if (pvVar18 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar7,(MethodInfo *)0x0);
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  pcVar6 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar6 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar6 == (code *)0x0)) {
                                                    uVar17 = func_?(&UNK_?);
                                                    FUN_?(uVar17,0);
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar6;
                                                  pvVar18 = (void *)(*pcRam_?)
                                                                              (pvVar18);
                                                  pOVar15 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar18,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  CStack_28.b = fVar27 * _UNK_?;
                                                  CStack_28.g = CStack_28.g * _UNK_?;
                                                  CStack_28.r = (float)uVar47 * _UNK_?;
                                                  pcVar6 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar6 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar6 == (code *)0x0)) {
                                                    uVar17 = func_?(&UNK_?);
                                                    FUN_?(uVar17,0);
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar6;
                                                  (*pcRam_?)(&CStack_28);
                                                  if (pOVar15 == (Object *)0x0) {
                                                    FUN_?();
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  CStack_26.r = 0.0;
                                                  CStack_26.g = 0.0;
                                                  CStack_26.b = 0.0;
                                                  CStack_26.a = 0.0;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar16 = pOVar15[1].klass;
                                                  if (pOVar16 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar15,(MethodInfo *)0x0);
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  pcVar6 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar6 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar6 == (code *)0x0)) {
                                                    uVar17 = func_?(&UNK_?);
                                                    FUN_?(uVar17,0);
                                                    pcVar6 = (code *)swi(3);
                                                    (*pcVar6)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar6;
                                                  (*pcRam_?)(pOVar16);
                                                  pGVar7 = (this->fields).bodyClone;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__UnityEngine__Debug);
                                                    LOCK();
                                                    UNLOCK();
                                                    FUN_?(&
                                                  StringLiteral_layer_parameter_constant_should_);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  LayerUtil::LayerUtil_SetLayerRecursively_4
                                                            (pGVar7,0,(MethodInfo *)0x0);
                                                  return;
                                                  }
                                                  }
                                                  FUN_?();
                                                  pcVar6 = (code *)swi(3);
                                                  (*pcVar6)();
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
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_Initialize
               (ReviveUIHandler *this,UnityAction *onContinueClicked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Byte_[]>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ReviveScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ReviveScreenshotGenerator>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ReviveUIHandler__OnGenerateTextureComplete_System__Byte____);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GenerateTexture);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Revive_PopupShown);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
            ((ReviveUIHandlerBase *)this,onContinueClicked,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Revive_PopupShown,1,(MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
       (pSVar2 = (pSVar1->fields).reviveState,
       pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)0x0)) &&
      (pSVar3 = (pSVar2->fields)._.subscribableVariable,
      pSVar3 != (SubscribableVariable_1_ReviveState_ *)0x0)) &&
     ((this_00 = (pSVar3->fields)._.value, this_00 != (ReviveState *)0x0 &&
      (pLVar4 = (this_00->fields).safePositions, pLVar4 != (List_1_SafeSpotData_ *)0x0)))) {
    iVar5 = (pLVar4->fields)._size + -1;
    (this->fields).currentSafePointSelected = iVar5;
    ReviveState::ReviveState_SetSafeGroundedDataIndex(this_00,iVar5,(MethodInfo *)0x0);
    pSVar6 = ReviveState::ReviveState_get_SafeGroundedData(&SStack_7,this_00,(MethodInfo *)0x0);
    SStack_8.Rotation.y = (pSVar6->Rotation).y;
    SStack_8.Rotation.z = (pSVar6->Rotation).z;
    SStack_8._24_8_ = *(undefined8 *)&(pSVar6->Rotation).w;
    SStack_8.CameraPosition.y = (pSVar6->CameraPosition).y;
    SStack_8.CameraPosition.z = (pSVar6->CameraPosition).z;
    SStack_8.CameraRotation.x = (pSVar6->CameraRotation).x;
    SStack_8.CameraRotation.y = (pSVar6->CameraRotation).y;
    fVar9 = (pSVar6->Position).x;
    fVar10 = (pSVar6->Position).y;
    fVar11 = (pSVar6->Position).z;
    SStack_8.CameraRotation.z = (pSVar6->CameraRotation).z;
    SStack_8.CameraRotation.w = (pSVar6->CameraRotation).w;
    pSVar6 = ReviveState::ReviveState_get_SafeGroundedData(&SStack_7,this_00,(MethodInfo *)0x0);
    SStack_8.Position.x = (pSVar6->Position).x;
    SStack_8.Position.y = (pSVar6->Position).y;
    SStack_8._8_8_ = *(undefined8 *)&(pSVar6->Position).z;
    fVar9 = fVar9 - (pSVar6->CameraPosition).x;
    SStack_8.CameraRotation.z = (pSVar6->CameraRotation).z;
    SStack_8.CameraRotation.w = (pSVar6->CameraRotation).w;
    fVar10 = fVar10 - (pSVar6->CameraPosition).y;
    fVar11 = fVar11 - (pSVar6->CameraPosition).z;
    if (_UNK_? < fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11) {
      ReviveUIHandler_CreateAvatarBodyForScreenshot(this,(MethodInfo *)0x0);
    }
    self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    pSVar12 = StringLiteral_GenerateTexture;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (self,pSVar12,(MethodInfo *)0x0);
    if (self != (GameObject *)0x0) {
      obj = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                      (self,
                       ReviveScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ReviveScreenshotGenerator>__
                      );
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<System::Byte_[]>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__ReviveUIHandler__OnGenerateTextureComplete_System__Byte____,
                 (MethodInfo *)0x0);
      pSVar6 = ReviveState::ReviveState_get_SafeGroundedData(&SStack_8,this_00,(MethodInfo *)0x0);
      SStack_7.Position.x = (pSVar6->Position).x;
      SStack_7.Position.y = (pSVar6->Position).y;
      SStack_7._8_8_ = *(undefined8 *)&(pSVar6->Position).z;
      SStack_7.Rotation.y = (pSVar6->Rotation).y;
      SStack_7.Rotation.z = (pSVar6->Rotation).z;
      uVar13 = *(undefined8 *)&(pSVar6->Rotation).w;
      SStack_7.CameraPosition.y = (pSVar6->CameraPosition).y;
      fVar9 = (pSVar6->CameraPosition).z;
      SStack_7.CameraRotation.x = (pSVar6->CameraRotation).x;
      SStack_7.CameraRotation.y = (pSVar6->CameraRotation).y;
      SStack_7.CameraRotation.z = (pSVar6->CameraRotation).z;
      SStack_7.CameraRotation.w = (pSVar6->CameraRotation).w;
      SStack_7.Rotation.w = (float)uVar13;
      SStack_7.CameraPosition.x = (float)((ulonglong)uVar13 >> 0x20);
      SStack_7.CameraPosition.z = fVar9;
      pSVar6 = ReviveState::ReviveState_get_SafeGroundedData(&SStack_14,this_00,(MethodInfo *)0x0);
      pRVar15 = (this->fields)._.targetTexture;
      SStack_8.Position.x = (pSVar6->Position).x;
      SStack_8.Position.y = (pSVar6->Position).y;
      SStack_8._8_8_ = *(undefined8 *)&(pSVar6->Position).z;
      SStack_8.Rotation.y = (pSVar6->Rotation).y;
      SStack_8.Rotation.z = (pSVar6->Rotation).z;
      SStack_8._24_8_ = *(undefined8 *)&(pSVar6->Rotation).w;
      SStack_8.CameraPosition.y = (pSVar6->CameraPosition).y;
      SStack_8.CameraPosition.z = (pSVar6->CameraPosition).z;
      SStack_8.CameraRotation.x = (pSVar6->CameraRotation).x;
      SStack_8.CameraRotation.y = (pSVar6->CameraRotation).y;
      SStack_8.CameraRotation.z = (pSVar6->CameraRotation).z;
      SStack_8.CameraRotation.w = (pSVar6->CameraRotation).w;
      if ((pRVar15 != (RawImage *)0x0) &&
         (pRVar16 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pRVar15,(MethodInfo *)0x0), pRVar16 != (RectTransform *)0x0
         )) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_17 = 0;
        uStack_18 = 0;
        pvVar19 = (pRVar16->fields)._._._.m_CachedPtr;
        if (pvVar19 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar16,(MethodInfo *)0x0);
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        pcVar20 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        pcRam_? = pcVar20;
        (*pcRam_?)(pvVar19);
        pRVar15 = (this->fields)._.targetTexture;
        if ((pRVar15 != (RawImage *)0x0) &&
           (pRVar16 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pRVar15,(MethodInfo *)0x0),
           pRVar16 != (RectTransform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_21 = 0;
          uStack_22 = 0;
          pvVar19 = (pRVar16->fields)._._._.m_CachedPtr;
          if (pvVar19 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar16,(MethodInfo *)0x0);
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          pcVar20 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          pcRam_? = pcVar20;
          (*pcRam_?)(pvVar19,&uStack_21);
          if (obj != (Object_1 *)0x0) {
            iVar5 = (int)(float)uStack_18;
            iVar23 = (int)uStack_22._4_4_;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            lVar24 = FUN_?(TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1);
            *(undefined4 *)(lVar24 + 0x10) = 0;
            *(Object_1 **)(lVar24 + 0x50) = obj;
            if (iRam_? != 0) {
              uVar25 = (uint)(lVar24 + 0x50U >> 0xc);
              uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
              do {
                uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
                puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
                LOCK();
                bVar29 = uVar27 == *puVar28;
                if (bVar29) {
                  *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
                }
                UNLOCK();
              } while (!bVar29);
            }
            iVar30 = iRam_?;
            *(UnityAction_1_System_Object_ **)(lVar24 + 0x48) = this_01;
            if (iVar30 != 0) {
              uVar25 = (uint)(lVar24 + 0x48U >> 0xc);
              uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
              do {
                uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
                puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
                LOCK();
                bVar29 = uVar27 == *puVar28;
                if (bVar29) {
                  *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
                }
                UNLOCK();
              } while (!bVar29);
            }
            *(ulonglong *)(lVar24 + 0x28) =
                 CONCAT44(SStack_7.CameraPosition.y,SStack_7.CameraPosition.x);
            *(int *)(lVar24 + 0x20) = iVar5;
            *(float *)(lVar24 + 0x34) = SStack_8.CameraRotation.x;
            *(float *)(lVar24 + 0x38) = SStack_8.CameraRotation.y;
            *(float *)(lVar24 + 0x3c) = SStack_8.CameraRotation.z;
            *(float *)(lVar24 + 0x40) = SStack_8.CameraRotation.w;
            *(int *)(lVar24 + 0x24) = iVar23;
            *(float *)(lVar24 + 0x30) = fVar9;
            if (lVar24 == 0) {
              uVar13 = func_?(&TypeInfo__System__NullReferenceException);
              this_02 = (NullReferenceException *)func_?(uVar13);
              pSVar12 = (String *)func_?(&StringLiteral_routine_is_null);
              mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                        (this_02,pSVar12,(MethodInfo *)0x0);
              uVar13 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              FUN_?(this_02,uVar13);
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            bVar31 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_IsObjectMonoBehaviour(obj,(MethodInfo *)0x0);
            if (bVar31 == 0) {
              uVar13 = func_?(&TypeInfo__System__ArgumentException);
              this_03 = (InvalidEnumArgumentException *)func_?(uVar13);
              pSVar12 = (String *)
                        func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
              System.dll::System::ComponentModel::InvalidEnumArgumentException::
              InvalidEnumArgumentException__ctor_1(this_03,pSVar12,(MethodInfo *)0x0);
              uVar13 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              FUN_?(this_03,uVar13);
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj == (Object_1 *)0x0) {
              FUN_?();
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            pvVar19 = (obj->fields).m_CachedPtr;
            if (pvVar19 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            pcVar20 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar20 = (code *)FUN_?(&UNK_?);
              if (pcVar20 == (code *)0x0) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
            }
            pcRam_? = pcVar20;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar19,lVar24);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnAdFinishedContinue() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnAdFinishedContinue
               (ReviveUIHandler *this,MethodInfo *method)

{
  apRStackX_8[0] = this;
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
                  MethodInfo__ReviveUIHandler____c___OnAdFinishedContinue_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_18 = 0;
  uStackX_20 = 0;
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  auStack_4[0] = 0;
  ppRStack_5 = apRStackX_8;
  puStack_6 = &uStackX_18;
  puStack_7 = &uStackX_20;
  puStack_8 = &uStack_1;
  puStack_9 = &uStack_2;
  puStack_10 = &uStack_3;
  puStack_11 = auStack_4;
  uStack_12 = 0;
  ppRStack_13 = ppRStack_5;
  puStack_14 = puStack_6;
  puStack_15 = puStack_7;
  puStack_16 = puStack_8;
  puStack_17 = puStack_11;
  puStack_18 = puStack_9;
  puStack_19 = puStack_10;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar20 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if (pMVar20 != (MVGameControllerDesktop *)0x0) {
      pIVar21 = (pMVar20->fields).lockCursorManager;
      if (pIVar21 != (ILockCursorManager *)0x0) {
        FUN_?(1,TypeInfo__ILockCursorManager,pIVar21,1);
        goto code_?;
      }
code_?:
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
  }
  else {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar22 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar22 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar23 = (pMVar22->fields).game;
    if (pMVar23 != (MVNetworkGame *)0x0) {
      pGVar24 = (pMVar23->fields).GameEventManager;
      if (pGVar24 != (GameEventManager *)0x0) {
        pGVar25 = (pGVar24->fields).AvatarCommandsPlayMode;
        iVar26 = (apRStackX_8[0]->fields).currentSafePointSelected;
        if (pGVar25 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
          if ((pGVar25->fields).OnSpawnAtSafeSpot != (Action_1_Int32_ *)0x0) {
            pAVar27 = (pGVar25->fields).OnSpawnAtSafeSpot;
            (*(pAVar27->fields)._._.invoke_impl)
                      ((pAVar27->fields)._._.method_code,iVar26,(pAVar27->fields)._._.method);
          }
          FUN_?(&ppRStack_13);
          return;
        }
        FUN_?(0,iVar26);
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void OnGenerateTextureComplete(Byte[]) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnGenerateTextureComplete
               (ReviveUIHandler *this,Byte__Array *generatedTexture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._.targetTexture;
  if ((pRVar1 != (RawImage *)0x0) &&
     (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pRVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5);
    pRVar1 = (this->fields)._.targetTexture;
    if ((pRVar1 != (RawImage *)0x0) &&
       (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pRVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_8._0_8_ = 0;
      auStack_8._8_8_ = (String *)0x0;
      pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,auStack_8);
      this_00 = (Texture2D *)FUN_?();
      height = (int)(float)auStack_8._12_4_;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_8._0_8_ = 0;
      auStack_8._8_8_ = (String *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor
                (this_00,(int)(float)uStack_4,height,TextureFormat__Enum_ARGB32,1,0,(void *)0x0,0,
                 (MipmapLimitDescriptor *)auStack_8,(MethodInfo *)0x0);
      UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
      ImageConversion_LoadImage_1(this_00,generatedTexture,(MethodInfo *)0x0);
      pRVar1 = (this->fields)._.targetTexture;
      if (pRVar1 != (RawImage *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (pRVar1,(Texture *)this_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar9 = (this->fields).bodyClone;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
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
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                        ,0,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        pvVar5 = (void *)0x0;
        if (pGVar9 != (GameObject *)0x0) {
          pvVar5 = (pGVar9->fields)._.m_CachedPtr;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnRewardedAdWatched(RewardedAdResult) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnRewardedAdWatched
               (ReviveUIHandler *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ReviveUIHandler____c___OnRewardedAdWatched_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ReviveUIHandler____c__DisplayClass13_0___OnRewardedAdWatched_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandler____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandler____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_Ad_Available);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Revive_WatchedReviveAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Revive_WatchedReviveAd,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<IWinningCondition>);
    if (this != (ReviveUIHandler *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,(this->klass->vtable).RoundEnded.method,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar5 = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar4 == (Delegate *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar3 = (Action_1_IWinningCondition_ *)
                  FUN_?(pDVar4,TypeInfo__System__Action<IWinningCondition>);
        if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) {
          FUN_?(pDVar4,pAVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
        pAVar5 = TypeInfo__System__Action<IWinningCondition>;
        lVar7 = FUN_?();
        if (lVar7 == 0) {
          FUN_?(pDVar4,pAVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnWinningConditionFulfilled >> 0xc);
        lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar10 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      if ((this->fields).roundEndedWhileWatchingAd != 0) {
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__ReviveUIHandler____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ReviveUIHandler____c);
        }
        this_03 = TypeInfo__ReviveUIHandler____c->static_fields->__9__13_0;
        if (this_03 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          if (*(int *)&(TypeInfo__ReviveUIHandler____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ReviveUIHandler____c);
          }
          object = TypeInfo__ReviveUIHandler____c->static_fields->__9;
          this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                     MethodInfo__ReviveUIHandler____c___OnRewardedAdWatched_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__ReviveUIHandler____c->static_fields->__9__13_0 = this_03;
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)&TypeInfo__ReviveUIHandler____c->static_fields->__9__13_0 >>
                           0xc);
            lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar10 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar12,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        (this->fields).roundEndedWhileWatchingAd = 0;
        return;
      }
      if ((result != RewardedAdResult__Enum_ErrorClient) &&
         (result != RewardedAdResult__Enum_ErrorInternal)) {
        if (result == RewardedAdResult__Enum_ErrorTimeout) {
          pBVar13 = (this->fields)._.continueButton;
          if ((pBVar13 != (Button *)0x0) &&
             (this_00 = (UnityEvent *)(pBVar13->fields).m_OnClick, this_00 != (UnityEvent *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if (result == RewardedAdResult__Enum_RewardUnlocked) {
          pGVar14 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                              ((MethodInfo *)0x0);
          if ((pGVar14 != (GameEventManager *)0x0) &&
             (pGVar15 = (pGVar14->fields).AvatarCommandsPlayMode,
             pGVar15 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
            if ((pGVar15->fields).OnMoveBodyToSafeSpot == (Action_1_Int32_ *)0x0) {
              return;
            }
            pAVar16 = (pGVar15->fields).OnMoveBodyToSafeSpot;
            (*(pAVar16->fields)._._.invoke_impl)
                      ((pAVar16->fields)._._.method_code,(this->fields).currentSafePointSelected,
                       (pAVar16->fields)._._.method);
            return;
          }
          goto code_?;
        }
        if (result != RewardedAdResult__Enum_RewardNotUnlocked) {
          return;
        }
      }
      object_00 = (Object *)FUN_?(TypeInfo__ReviveUIHandler____c__DisplayClass13_0);
      if (object_00 != (Object *)0x0) {
        bVar11 = iRam_? != 0;
        object_00[1].monitor = (MonitorData *)this;
        if (bVar11) {
          uVar8 = (uint)((ulonglong)&object_00[1].monitor >> 0xc);
          lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar10 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        original = (this->fields)._.errorNotification;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar17 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                            );
        bVar11 = iRam_? != 0;
        object_00[1].klass = pOVar17;
        if (bVar11) {
          uVar8 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
          lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar10 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pOVar17 = object_00[1].klass;
        pIVar18 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        if (pIVar18 != (IAdManager *)0x0) {
          text = (String *)
                 FUN_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar18);
          header = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
          if (pOVar17 != (Object__Class *)0x0) {
            NotificationPopup::NotificationPopup_Initialize
                      ((NotificationPopup *)pOVar17,text,header,(MethodInfo *)0x0);
            pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_02,object_00,
                       MethodInfo__ReviveUIHandler____c__DisplayClass13_0___OnRewardedAdWatched_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar12,(BaseEventData *)0x0,this_02,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSubscriberClicked() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnSubscriberClicked
               (ReviveUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 == (GameEventManager *)0x0)) ||
     (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
     pGVar4 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pGVar4->fields).OnMoveBodyToSafeSpot != (Action_1_Int32_ *)0x0) {
    pAVar6 = (pGVar4->fields).OnMoveBodyToSafeSpot;
    (*(pAVar6->fields)._._.invoke_impl)
              ((pAVar6->fields)._._.method_code,(this->fields).currentSafePointSelected,
               (pAVar6->fields)._._.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action,0);
    LOCK();
    UNLOCK();
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
                  ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandlerBase____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ReviveUIHandlerBase____c__DisplayClass24_0);
  if (object != (Object *)0x0) {
    bVar7 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    original = (this->fields)._.continuePopup;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar12 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                        );
    bVar7 = iRam_? != 0;
    object[1].klass = pOVar12;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pOVar12 = object[1].klass;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,(this->klass->vtable).OnAdFinishedContinue.method,
               (MethodInfo *)0x0);
    if (pOVar12 != (Object__Class *)0x0) {
      ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                ((ContinueButtonLockCursor *)pOVar12,(Action *)this_01,(MethodInfo *)0x0);
      pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object,
                 MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar14 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar14->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar14);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar13,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar15 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar15->fields)._size;
        uVar8 = 0;
        if (0 < lVar9) {
          lVar16 = 0;
          lVar17 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar15 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar15->fields)._size <= uVar8) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar18 = (pLVar15->fields)._items;
            if (pTVar18 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar18->max_length <= uVar8) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar18->vector + lVar17 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                     ExecuteEvents_Execute_18
                               (pGVar13,(BaseEventData *)0x0,this_02,
                                (pMVar14->field7_0x38).rgctx_data[1].method);
            if (bVar19 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar8 = uVar8 + 1;
            lVar16 = lVar16 + 1;
            lVar17 = lVar17 + 8;
          } while (lVar16 < lVar9);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnWatchAdClicked() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnWatchAdClicked
               (ReviveUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 == (GameEventManager *)0x0)) ||
     (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
     pGVar4 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pGVar4->fields).OnMoveBodyToSafeSpot != (Action_1_Int32_ *)0x0) {
    pAVar6 = (pGVar4->fields).OnMoveBodyToSafeSpot;
    (*(pAVar6->fields)._._.invoke_impl)
              ((pAVar6->fields)._._.method_code,(this->fields).currentSafePointSelected,
               (pAVar6->fields)._._.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
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
                  ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ReviveUIHandlerBase____c__DisplayClass23_0___OnWatchAdClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandlerBase____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ReviveUIHandlerBase____c__DisplayClass23_0);
  if (object != (Object *)0x0) {
    bVar7 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      pAVar12 = (pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<IWinningCondition>);
      if (this != (ReviveUIHandler *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,(Object *)this,(this->klass->vtable).RoundEnded.method,(MethodInfo *)0x0)
        ;
        pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar12,(Delegate *)this_00,(MethodInfo *)0x0);
        pAVar14 = TypeInfo__System__Action<IWinningCondition>;
        if (pDVar13 == (Delegate *)0x0) {
          (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        }
        else {
          pAVar12 = (Action_1_IWinningCondition_ *)
                    FUN_?(pDVar13,TypeInfo__System__Action<IWinningCondition>);
          if (pAVar12 == (Action_1_IWinningCondition_ *)0x0) {
            FUN_?(pDVar13,pAVar14);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (pMVar2->fields).OnWinningConditionFulfilled = pAVar12;
          pAVar14 = TypeInfo__System__Action<IWinningCondition>;
          lVar9 = FUN_?(pDVar13,TypeInfo__System__Action<IWinningCondition>);
          if (lVar9 == 0) {
            FUN_?(pDVar13,pAVar14);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnWinningConditionFulfilled >> 0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        bVar7 = cRam_? == '\0';
        (this->fields)._.watchAdClicked = 1;
        if (bVar7) {
          FUN_?(&TypeInfo__ILockCursorManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          pMVar15 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0)
          ;
          if ((pMVar15 == (MVGameControllerDesktop *)0x0) ||
             ((pMVar15->fields).lockCursorManager == (ILockCursorManager *)0x0))
          goto code_?;
          FUN_?(1,TypeInfo__ILockCursorManager);
        }
        original = (this->fields)._.continuePopup;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar16 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                            );
        bVar7 = iRam_? != 0;
        object[1].klass = pOVar16;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pOVar16 = object[1].klass;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,(this->klass->vtable).OnAdFinishedContinue.method,
                   (MethodInfo *)0x0);
        if (pOVar16 != (Object__Class *)0x0) {
          ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                    ((ContinueButtonLockCursor *)pOVar16,(Action *)this_01,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,object,
                     MethodInfo__ReviveUIHandlerBase____c__DisplayClass23_0___OnWatchAdClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,this_02,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
              (IEditModeUI *)0x0) {
            pIVar17 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            this_03 = (UnityAction_1_System_Int32Enum_ *)
                      FUN_?(
                                   TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_03,(Object *)this,(this->klass->vtable).OnRewardedAdWatched.method,
                       (MethodInfo *)0x0);
            (*(this->klass->vtable).get_AdContext.methodPtr)
                      (this,(this->klass->vtable).get_AdContext.method);
            if (pIVar17 == (IAdManager *)0x0) goto code_?;
            FUN_?();
          }
          else {
            (*(this->klass->vtable).OnRewardedAdWatched.methodPtr)
                      (this,3,(this->klass->vtable).OnRewardedAdWatched.method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RoundEnded(IWinningCondition) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_RoundEnded
               (ReviveUIHandler *this,IWinningCondition *condition,MethodInfo *method)

{
  (this->fields).roundEndedWhileWatchingAd = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_Update
               (ReviveUIHandler *this,MethodInfo *method)

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
                  MethodInfo__ReviveUIHandler____c__DisplayClass9_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandler____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ReviveUIHandler____c__DisplayClass9_0);
  if (object == (Object *)0x0) {
code_?:
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
             MethodInfo__ReviveUIHandler____c__DisplayClass9_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (*(char *)&object[1].klass == '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar7 == (MVGameControllerBase *)0x0) ||
        (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
       (pMVar9 = (pMVar8->fields)._NetworkGameStateListener_k__BackingField,
       pMVar9 == (MVNetworkGameStateListener *)0x0)) goto code_?;
    if (((pMVar9->fields).currentGameState == 2) || ((this->fields).roundEndedWhileWatchingAd != 0))
    {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).OnRewardedAdWatched.methodPtr)
                (this,2,(this->klass->vtable).OnRewardedAdWatched.method);
      return;
    }
    ReviveUIHandlerBase::ReviveUIHandlerBase_Update((ReviveUIHandlerBase *)this,(MethodInfo *)0x0);
  }
  return;
}

