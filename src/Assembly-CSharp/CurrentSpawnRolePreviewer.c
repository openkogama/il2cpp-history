
/* Void ChangeAnimation(String) */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_ChangeAnimation
               (CurrentSpawnRolePreviewer *this,String *NewAnimation,MethodInfo *method)

{
  this_00 = (this->fields).goAnimation;
  if (this_00 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
              (this_00,NewAnimation,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_OnDestroy
               (CurrentSpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).avatarBody != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone((this->fields).avatarBody,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields).previewer;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pAVar1 != (AvatarPreviewer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).previewer;
      if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pTVar3 = (this->fields).avatarResetToTransform;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar3 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar3->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar3 = (this->fields).avatarResetToTransform;
      if (pTVar3 == (Transform *)0x0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar3,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).avatarResetToTransform = (Transform *)0x0;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).avatarResetToTransform >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
    }
  }
  return;
}


/* Void RemoveSkinnedMeshOptimizers() */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::
     CurrentSpawnRolePreviewer_RemoveSkinnedMeshOptimizers
               (CurrentSpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
  ;
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    if ((
        SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                   );
    }
    p_Var4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
    uVar2 = 0;
    if (p_Var4 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var6 = p_Var4->vector;
      do {
        if ((int)p_Var4->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)p_Var4->max_length <= uVar2) goto code_?;
        p_Var1 = *pp_Var6;
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
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (p_Var1 != (_Il2CppFullySharedGenericType *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (p_Var1[1].klass != (_Il2CppFullySharedGenericType__Class *)0x0) {
            if ((uint)p_Var4->max_length <= uVar2) {
code_?:
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((SkinnedMeshOptimizer *)*pp_Var6 == (SkinnedMeshOptimizer *)0x0) break;
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                      ((SkinnedMeshOptimizer *)*pp_Var6,(MethodInfo *)0x0);
            if ((uint)p_Var4->max_length <= uVar2) goto code_?;
            if ((SkinnedMeshOptimizer *)*pp_Var6 == (SkinnedMeshOptimizer *)0x0) break;
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                      ((SkinnedMeshOptimizer *)*pp_Var6,(MethodInfo *)0x0);
            if ((uint)p_Var4->max_length <= uVar2) goto code_?;
            obj = (Object_1 *)*pp_Var6;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      (obj,(MethodInfo *)0x0);
          }
        }
        uVar2 = uVar2 + 1;
        pp_Var6 = pp_Var6 + 1;
      } while( true );
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupPreviewer(Int32, Int32) */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer
               (CurrentSpawnRolePreviewer *this,int32_t previewDimensionsX,
               int32_t previewDimensionsY,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
      (pSVar3 = (pSVar2->fields).woId,
      pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0)) &&
     (pSVar4 = (pSVar3->fields)._.subscribableVariable,
     pSVar4 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar1,(pSVar4->fields)._.value,(MethodInfo *)0x0),
       pMVar5 != (MVWorldObjectClient *)0x0)) {
      method_00 = pMVar5->klass;
      bVar6 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if (((method_00->_1).naturalAligment < bVar6) ||
         ((MVAvatarLocal__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
          TypeInfo__MVAvatarLocal)) {
        FUN_?(pMVar5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->fields).avatarBody = (MVBody *)pMVar5[1].fields.ScaleChanged;
      func_?(&(this->fields).avatarBody);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
      lVar9._0_4_ = (pQVar8->identityQuaternion).x;
      lVar9._4_4_ = (pQVar8->identityQuaternion).y;
      uVar10._0_4_ = (pQVar8->identityQuaternion).z;
      uVar10._4_4_ = (pQVar8->identityQuaternion).w;
      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                          ((Quaternion *)aCStack_12,0.0,_UNK_?,0.0,
                           (MethodInfo *)
                           CONCAT44(in_stack_13,in_stack_14));
      QStack_15.x = pQVar11->x;
      QStack_15.y = pQVar11->y;
      QStack_15.z = pQVar11->z;
      QStack_15.w = pQVar11->w;
      CStack_16._0_8_ = lVar9;
      CStack_16._8_8_ = uVar10;
      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                          ((Quaternion *)aCStack_12,(Quaternion *)&CStack_16,&QStack_15,
                           (MethodInfo *)method_00);
      pGVar17 = (this->fields).bodyClone;
      fVar18 = pQVar11->x;
      fVar19 = pQVar11->y;
      fVar20 = pQVar11->z;
      fVar21 = pQVar11->w;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pGVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar22 != 0) {
        pGVar17 = (this->fields).bodyClone;
        if ((pGVar17 == (GameObject *)0x0) ||
           (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar17,(MethodInfo *)0x0), pTVar23 == (Transform *)0x0))
        goto code_?;
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)aCStack_12,pTVar23,(MethodInfo *)0x0);
        fVar18 = pQVar11->x;
        fVar19 = pQVar11->y;
        fVar20 = pQVar11->z;
        fVar21 = pQVar11->w;
      }
      pMVar24 = (this->fields).avatarBody;
      if (pMVar24 != (MVBody *)0x0) {
        pGVar17 = MVBody::MVBody_CreateClone(pMVar24,1,1,(MethodInfo *)0x0);
        (this->fields).bodyClone = pGVar17;
        func_?(&(this->fields).bodyClone);
        pMVar24 = (this->fields).avatarBody;
        if ((pMVar24 != (MVBody *)0x0) &&
           (this_00 = (pMVar24->fields).bodyAccessoriesController,
           this_00 != (BodyAccessoriesController *)0x0)) {
          BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                    (this_00,0,(MethodInfo *)0x0);
          pAVar25 = (this->fields).previewer;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)pAVar25,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar22 != 0) {
            pAVar25 = (this->fields).previewer;
            if (pAVar25 == (AvatarPreviewer *)0x0) goto code_?;
            pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pAVar25,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar17,(MethodInfo *)0x0);
          }
          pTVar23 = (this->fields).avatarResetToTransform;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)pTVar23,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar22 != 0) {
            pTVar23 = (this->fields).avatarResetToTransform;
            if (pTVar23 == (Transform *)0x0) goto code_?;
            pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar23,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar17,(MethodInfo *)0x0);
          }
          pGVar17 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                    (pGVar17,(MethodInfo *)0x0);
          if (pGVar17 != (GameObject *)0x0) {
            pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar17,(MethodInfo *)0x0);
            (this->fields).avatarResetToTransform = pTVar23;
            func_?(&(this->fields).avatarResetToTransform);
            pRVar26 = (this->fields).previewImage;
            if (pRVar26 != (RawImage *)0x0) {
              QStack_15.x = (float)_UNK_?;
              QStack_15.y = (float)_UNK_?;
              QStack_15.z = _UNK_?;
              QStack_15.w = _UNK_?;
              (*(pRVar26->klass->vtable).set_color.methodPtr)
                        (pRVar26,&QStack_15,(pRVar26->klass->vtable).set_color.method);
              if ((this->fields).bodyClone != (GameObject *)0x0) {
                lVar9 = FUN_?();
                layer = 0;
                if (lVar9 != 0) {
                  puVar27 = (undefined8 *)(lVar9 + 0x20);
                  for (uVar28 = layer;
                      pMVar29 = 
                      PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                      , (int)uVar28 < *(int *)(lVar9 + 0x18); uVar28 = uVar28 + 1) {
                    if (*(uint *)(lVar9 + 0x18) <= uVar28) goto code_?;
                    pOVar30 = (Object *)*puVar27;
                    if (pOVar30 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar31 = pOVar30[1].klass;
                    if (pOVar31 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcVar7 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                      uVar10 = func_?(&UNK_?);
                      FUN_?(uVar10,0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcRam_? = pcVar7;
                    (*pcRam_?)(pOVar31);
                    puVar27 = puVar27 + 1;
                  }
                  pGVar17 = (this->fields).bodyClone;
                  if (pGVar17 != (GameObject *)0x0) {
                    if ((
                        PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                      FUN_?(
                                   PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                   );
                    }
                    p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponentsInChildren_4
                                        (pGVar17,0,((pMVar29->field7_0x38).rgctx_data)->method);
                    if (p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                      pp_Var40 = p_Var27->vector;
                      for (uVar28 = layer;
                          pMVar29 = 
                          AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                          , (int)uVar28 < (int)p_Var27->max_length; uVar28 = uVar28 + 1) {
                        if ((uint)p_Var27->max_length <= uVar28) goto code_?;
                        pOVar30 = (Object *)*pp_Var40;
                        if (pOVar30 == (Object *)0x0) goto code_?;
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
                        pOVar31 = pOVar30[1].klass;
                        if (pOVar31 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcVar7 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)
                           ) {
                          uVar10 = func_?(&UNK_?);
                          FUN_?(uVar10,0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcRam_? = pcVar7;
                        pvVar32 = (void *)(*pcRam_?)(pOVar31);
                        pOVar30 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                  Unmarshal_UnmarshalUnityObject
                                            (pvVar32,
                                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                            );
                        if (pOVar30 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar31 = pOVar30[1].klass;
                        if (pOVar31 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcVar7 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)
                           ) {
                          uVar10 = func_?(&UNK_?);
                          FUN_?(uVar10,0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcRam_? = pcVar7;
                        (*pcRam_?)(pOVar31);
                        pp_Var40 = pp_Var40 + 1;
                      }
                      pGVar17 = (this->fields).bodyClone;
                      if (pGVar17 != (GameObject *)0x0) {
                        if ((
                            AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                          FUN_?(
                                       AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                       );
                        }
                        p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponentsInChildren_4
                                            (pGVar17,0,((pMVar29->field7_0x38).rgctx_data)->method);
                        if (p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                          pp_Var40 = p_Var27->vector;
                          for (uVar28 = layer; (int)uVar28 < (int)p_Var27->max_length;
                              uVar28 = uVar28 + 1) {
                            if ((uint)p_Var27->max_length <= uVar28) goto code_?;
                            pOVar30 = (Object *)*pp_Var40;
                            if (pOVar30 == (Object *)0x0) goto code_?;
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
                            pOVar31 = pOVar30[1].klass;
                            if (pOVar31 == (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            pcVar7 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar7 = (code *)FUN_?(&UNK_?),
                               pcVar7 == (code *)0x0)) {
                              uVar10 = func_?(&UNK_?);
                              FUN_?(uVar10,0);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            pcRam_? = pcVar7;
                            pvVar32 = (void *)(*pcRam_?)(pOVar31);
                            pOVar30 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                      Unmarshal_UnmarshalUnityObject
                                                (pvVar32,
                                                 UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                );
                            if (pOVar30 == (Object *)0x0) goto code_?;
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pOVar31 = pOVar30[1].klass;
                            if (pOVar31 == (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            pcVar7 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar7 = (code *)FUN_?(&UNK_?),
                               pcVar7 == (code *)0x0)) {
                              uVar10 = func_?(&UNK_?);
                              FUN_?(uVar10,0);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            pcRam_? = pcVar7;
                            (*pcRam_?)(pOVar31);
                            pp_Var40 = pp_Var40 + 1;
                          }
                          pGVar17 = (this->fields).bodyClone;
                          if ((pGVar17 != (GameObject *)0x0) &&
                             (p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentsInChildren_4
                                                  (pGVar17,1,
                                                                                                      
                                                  AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                                  ),
                             p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                            pp_Var40 = p_Var27->vector;
                            for (uVar28 = layer; (int)uVar28 < (int)p_Var27->max_length;
                                uVar28 = uVar28 + 1) {
                              if ((uint)p_Var27->max_length <= uVar28) goto code_?;
                              pOVar30 = (Object *)*pp_Var40;
                              if (pOVar30 == (Object *)0x0) goto code_?;
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pOVar31 = pOVar30[1].klass;
                              if (pOVar31 == (Object__Class *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0)
                                ;
                                pcVar7 = (code *)swi(3);
                                (*pcVar7)();
                                return;
                              }
                              pcVar7 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar7 = (code *)FUN_?(&UNK_?),
                                 pcVar7 == (code *)0x0)) {
                                uVar10 = func_?(&UNK_?);
                                FUN_?(uVar10,0);
                                pcVar7 = (code *)swi(3);
                                (*pcVar7)();
                                return;
                              }
                              pcRam_? = pcVar7;
                              (*pcRam_?)(pOVar31);
                              pp_Var40 = pp_Var40 + 1;
                            }
                            pGVar17 = (this->fields).bodyClone;
                            if ((pGVar17 != (GameObject *)0x0) &&
                               (p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren_4
                                                    (pGVar17,1,
                                                                                                          
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  ),
                               p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                              pp_Var40 = p_Var27->vector;
                              for (uVar28 = layer;
                                  pMVar29 = 
                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                  , (int)uVar28 < (int)p_Var27->max_length; uVar28 = uVar28 + 1) {
                                if ((uint)p_Var27->max_length <= uVar28) goto code_?;
                                pOVar30 = (Object *)*pp_Var40;
                                if (pOVar30 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar31 = pOVar30[1].klass;
                                if (pOVar31 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            (pOVar30,(MethodInfo *)0x0);
                                  pcVar7 = (code *)swi(3);
                                  (*pcVar7)();
                                  return;
                                }
                                pcVar7 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar7 = (code *)FUN_?(&UNK_?),
                                   pcVar7 == (code *)0x0)) {
                                  uVar10 = func_?(&UNK_?);
                                  FUN_?(uVar10,0);
                                  pcVar7 = (code *)swi(3);
                                  (*pcVar7)();
                                  return;
                                }
                                pcRam_? = pcVar7;
                                (*pcRam_?)(pOVar31);
                                pp_Var40 = pp_Var40 + 1;
                              }
                              pGVar17 = (this->fields).bodyClone;
                              if (pGVar17 != (GameObject *)0x0) {
                                if ((
                                    SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                  FUN_?(
                                               SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                               );
                                }
                                p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren_4
                                                    (pGVar17,0,
                                                     ((pMVar29->field7_0x38).rgctx_data)->method);
                                if (p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var40 = p_Var27->vector;
                                  for (uVar28 = layer;
                                      pMVar29 = 
                                      InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                      , (int)uVar28 < (int)p_Var27->max_length; uVar28 = uVar28 + 1)
                                  {
                                    if ((uint)p_Var27->max_length <= uVar28) {
code_?:
                                      FUN_?();
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    pOVar30 = (Object *)*pp_Var40;
                                    if (pOVar30 == (Object *)0x0) goto code_?;
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
                                    pOVar31 = pOVar30[1].klass;
                                    if (pOVar31 == (Object__Class *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                (pOVar30,(MethodInfo *)0x0);
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    pcVar7 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar7 = (code *)FUN_?(&UNK_?),
                                       pcVar7 == (code *)0x0)) {
                                      uVar10 = func_?(&UNK_?);
                                      FUN_?(uVar10,0);
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    pcRam_? = pcVar7;
                                    pvVar32 = (void *)(*pcRam_?)(pOVar31);
                                    obj_00 = (Object_1 *)
                                             UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                             Unmarshal::Unmarshal_UnmarshalUnityObject
                                                       (pvVar32,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0
                                       ) {
                                      FUN_?();
                                    }
                                    if (cRam_? == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Object);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0
                                       ) {
                                      FUN_?();
                                    }
                                    UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_Destroy(obj_00,0.0,(MethodInfo *)0x0);
                                    pp_Var40 = pp_Var40 + 1;
                                  }
                                  pGVar17 = (this->fields).bodyClone;
                                  if (pGVar17 != (GameObject *)0x0) {
                                    if ((
                                        InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                      FUN_?(
                                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                  );
                                    }
                                    pOVar30 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentInChildren_3
                                                        (pGVar17,0,
                                                         ((pMVar29->field7_0x38).rgctx_data)->method
                                                        );
                                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0
                                       ) {
                                      FUN_?();
                                    }
                                    if (cRam_? == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Object);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0
                                       ) {
                                      FUN_?();
                                    }
                                    if (cRam_? == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Object);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (pOVar30 != (Object *)0x0) {
                                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c ==
                                          0) {
                                        FUN_?();
                                      }
                                      if (pOVar30[1].klass != (Object__Class *)0x0) {
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
                                        pOVar31 = pOVar30[1].klass;
                                        if (pOVar31 == (Object__Class *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                    (pOVar30,(MethodInfo *)0x0);
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        pcVar7 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar7 = (code *)FUN_?(&UNK_?),
                                           pcVar7 == (code *)0x0)) {
                                          uVar10 = func_?(&UNK_?);
                                          FUN_?(uVar10,0);
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        pcRam_? = pcVar7;
                                        pvVar32 = (void *)(*pcRam_?)(pOVar31);
                                        pOVar30 = UnityEngine.CoreModule.dll::UnityEngine::Bindings
                                                  ::Unmarshal::Unmarshal_UnmarshalUnityObject
                                                            (pvVar32,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                        if (pOVar30 == (Object *)0x0) goto code_?;
                                        if (cRam_? == '\0') {
                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pOVar31 = pOVar30[1].klass;
                                        if (pOVar31 == (Object__Class *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                    (pOVar30,(MethodInfo *)0x0);
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        pcVar7 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar7 = (code *)FUN_?(&UNK_?),
                                           pcVar7 == (code *)0x0)) {
                                          uVar10 = func_?(&UNK_?);
                                          FUN_?(uVar10,0);
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        pcRam_? = pcVar7;
                                        (*pcRam_?)(pOVar31);
                                      }
                                    }
                                    CurrentSpawnRolePreviewer_RemoveSkinnedMeshOptimizers
                                              (this,(MethodInfo *)0x0);
                                    pMVar29 = 
                                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                    ;
                                    pGVar17 = (this->fields).bodyClone;
                                    if (pGVar17 != (GameObject *)0x0) {
                                      if ((
                                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                        FUN_?(
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                      }
                                      p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_GetComponentsInChildren_4
                                                          (pGVar17,0,
                                                           ((pMVar29->field7_0x38).rgctx_data)->
                                                           method);
                                      if (p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                        pp_Var40 = p_Var27->vector;
                                        for (uVar28 = layer;
                                            pMVar29 = 
                                            UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                            , (int)uVar28 < (int)p_Var27->max_length;
                                            uVar28 = uVar28 + 1) {
                                          lVar9 = 0x20;
                                          uVar33 = layer;
                                          while( true ) {
                                            if ((uint)p_Var27->max_length <= uVar28)
                                            goto code_?;
                                            if (((Renderer *)*pp_Var40 == (Renderer *)0x0) ||
                                               (pMVar34 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Renderer::Renderer_get_materials
                                                                    ((Renderer *)*pp_Var40,
                                                                     (MethodInfo *)0x0),
                                               pMVar34 == (Material__Array *)0x0))
                                            goto code_?;
                                            if ((int)pMVar34->max_length <= (int)uVar33) break;
                                            if ((uint)p_Var27->max_length <= uVar28)
                                            goto code_?;
                                            if (((Renderer *)*pp_Var40 == (Renderer *)0x0) ||
                                               (pMVar34 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Renderer::Renderer_get_materials
                                                                    ((Renderer *)*pp_Var40,
                                                                     (MethodInfo *)0x0),
                                               pMVar34 == (Material__Array *)0x0))
                                            goto code_?;
                                            if ((uint)pMVar34->max_length <= uVar33)
                                            goto code_?;
                                            pMVar35 = *(Material **)
                                                      ((longlong)pMVar34->vector + lVar9 + -0x20);
                                            if (pMVar35 == (Material *)0x0)
                                            goto code_?;
                                            bVar22 = UnityEngine.CoreModule.dll::UnityEngine::
                                                     Material::Material_HasProperty_1
                                                               (pMVar35,StringLiteral__Color,
                                                                (MethodInfo *)0x0);
                                            if (bVar22 != 0) {
                                              if ((uint)p_Var27->max_length <= uVar28)
                                              goto code_?;
                                              if (((Renderer *)*pp_Var40 == (Renderer *)0x0) ||
                                                 (pMVar34 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)*pp_Var40,
                                                                       (MethodInfo *)0x0),
                                                 pMVar34 == (Material__Array *)0x0))
                                              goto code_?;
                                              if ((uint)pMVar34->max_length <= uVar33)
                                              goto code_?;
                                              pMVar35 = *(Material **)
                                                        ((longlong)pMVar34->vector + lVar9 + -0x20)
                                              ;
                                              if (pMVar35 == (Material *)0x0)
                                              goto code_?;
                                              pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Material::Material_get_color
                                                                  (aCStack_12,pMVar35,
                                                                   (MethodInfo *)0x0);
                                              lVar37._0_4_ = pCVar36->r;
                                              lVar37._4_4_ = pCVar36->g;
                                              fVar38 = pCVar36->b;
                                              if ((uint)p_Var27->max_length <= uVar28)
                                              goto code_?;
                                              if (((Renderer *)*pp_Var40 == (Renderer *)0x0) ||
                                                 (pMVar34 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)*pp_Var40,
                                                                       (MethodInfo *)0x0),
                                                 pMVar34 == (Material__Array *)0x0))
                                              goto code_?;
                                              if ((uint)pMVar34->max_length <= uVar33)
                                              goto code_?;
                                              pMVar35 = *(Material **)
                                                        ((longlong)pMVar34->vector + lVar9 + -0x20)
                                              ;
                                              QStack_15.w = 1.0;
                                              QStack_15.z = fVar38;
                                              QStack_15._0_8_ = lVar37;
                                              if (pMVar35 == (Material *)0x0)
                                              goto code_?;
                                              CStack_16.b = fVar38;
                                              CStack_16.a = 1.0;
                                              CStack_16._0_8_ = lVar37;
                                              UnityEngine.CoreModule.dll::UnityEngine::Material::
                                              Material_set_color(pMVar35,&CStack_16,(MethodInfo *)0x0
                                                                );
                                            }
                                            uVar33 = uVar33 + 1;
                                            lVar9 = lVar9 + 8;
                                          }
                                          pp_Var40 = pp_Var40 + 1;
                                        }
                                        pGVar17 = (this->fields).bodyClone;
                                        if (pGVar17 != (GameObject *)0x0) {
                                          if ((
                                              UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                            FUN_?(
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                          }
                                          pAVar39 = (Animation *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_GetComponentInChildren_3
                                                              (pGVar17,0,
                                                               ((pMVar29->field7_0x38).rgctx_data)->
                                                               method);
                                          bVar40 = iRam_? != 0;
                                          (this->fields).goAnimation = pAVar39;
                                          if (bVar40) {
                                            uVar28 = (uint)((ulonglong)&(this->fields).goAnimation
                                                           >> 0xc);
                                            uVar41 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
                                            do {
                                              uVar42 = *(ulonglong *)(uVar41 * 8 + 0xADDR);
                                              puVar43 = (ulonglong *)(uVar41 * 8 + 0xADDR);
                                              LOCK();
                                              bVar40 = uVar42 == *puVar43;
                                              if (bVar40) {
                                                *puVar43 = uVar42 | 1L << (uVar28 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar40);
                                          }
                                          pAVar25 = (this->fields).previewerPrefab;
                                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                       field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          pAVar25 = (AvatarPreviewer *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::Object
                                                    ::Object_1_Instantiate_4
                                                              ((Object *)pAVar25,
                                                                                                                              
                                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                                  );
                                          bVar40 = iRam_? != 0;
                                          (this->fields).previewer = pAVar25;
                                          if (bVar40) {
                                            uVar28 = (uint)((ulonglong)&(this->fields).previewer >>
                                                           0xc);
                                            uVar41 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
                                            do {
                                              uVar42 = *(ulonglong *)(uVar41 * 8 + 0xADDR);
                                              puVar43 = (ulonglong *)(uVar41 * 8 + 0xADDR);
                                              LOCK();
                                              bVar40 = uVar42 == *puVar43;
                                              if (bVar40) {
                                                *puVar43 = uVar42 | 1L << (uVar28 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar40);
                                          }
                                          pAVar25 = (this->fields).previewer;
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__MVGameControllerBase);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pMVar44 = TypeInfo__MVGameControllerBase->static_fields->
                                                    instance;
                                          if ((((pMVar44 != (MVGameControllerBase *)0x0) &&
                                               (pMVar45 = (pMVar44->fields).game,
                                               pMVar45 != (MVNetworkGame *)0x0)) &&
                                              (pMVar46 = (pMVar45->fields).playerContainer,
                                              pMVar46 != (MVPlayerContainer *)0x0)) &&
                                             (pMVar47 = MVPlayerContainer::
                                                        MVPlayerContainer_get_LocalPlayer
                                                                  (pMVar46,(MethodInfo *)0x0),
                                             pMVar47 != (MVLocalPlayer *)0x0)) {
                                            if (cRam_? == '\0') {
                                              FUN_?();
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            pMVar1 = MVGameControllerBase::
                                                      MVGameControllerBase_get_WOCM
                                                                ((MethodInfo *)0x0);
                                            if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
                                               (pOVar30 = MVWorldObjectClientManager::
                                                                                                                    
                                                  MVWorldObjectClientManager_GetWorldObjectClient_1
                                                            (pMVar1,(pMVar47->fields).
                                                                     defaultBodyWoId,
                                                                                                                          
                                                  MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                                  ), fVar48 = _UNK_?,
                                               uVar28 = _UNK_?, fVar38 = _UNK_?,
                                               pOVar30 != (Object *)0x0)) {
                                              layersToRender =
                                                   *(LayerFlags__Enum *)&pOVar30[0x12].monitor;
                                              pTVar23 = (this->fields).avatarResetToTransform;
                                              if (cRam_? == '\0') {
                                                FUN_?(&TypeInfo__MVGameControllerBase);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              pMVar44 = TypeInfo__MVGameControllerBase->
                                                        static_fields->instance;
                                              if (((pMVar44 != (MVGameControllerBase *)0x0) &&
                                                  (pMVar45 = (pMVar44->fields).game,
                                                  pMVar45 != (MVNetworkGame *)0x0)) &&
                                                 ((pMVar46 = (pMVar45->fields).playerContainer,
                                                  pMVar46 != (MVPlayerContainer *)0x0 &&
                                                  (pMVar47 = MVPlayerContainer::
                                                             MVPlayerContainer_get_LocalPlayer
                                                                       (pMVar46,(MethodInfo *)0x0),
                                                  pMVar47 != (MVLocalPlayer *)0x0)))) {
                                                if (cRam_? == '\0') {
                                                  FUN_?();
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pMVar1 = MVGameControllerBase::
                                                          MVGameControllerBase_get_WOCM
                                                                    ((MethodInfo *)0x0);
                                                if ((pMVar1 != (MVWorldObjectClientManager *)0x0)
                                                   && (pMVar5 = (MVWorldObjectClient *)
                                                                 MVWorldObjectClientManager::
                                                                                                                                  
                                                  MVWorldObjectClientManager_GetWorldObjectClient_1
                                                            (pMVar1,(pMVar47->fields).
                                                                     defaultBodyWoId,
                                                                                                                          
                                                  MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                                  ), pAVar25 != (AvatarPreviewer *)0x0)) {
                                                  VStack_49._0_8_ = ZEXT48(_UNK_?);
                                                  CStack_16._0_8_ = CONCAT44(fVar38,fVar38);
                                                  QStack_15._0_8_ = (ulonglong)uVar28 << 0x20;
                                                  VStack_49.z = 0.0;
                                                  CStack_16.b = fVar38;
                                                  QStack_15.z = fVar48;
                                                  AvatarPreviewer::AvatarPreviewer_Initialize
                                                            (pAVar25,previewDimensionsX,
                                                             previewDimensionsY,
                                                             CameraClearFlags__Enum_Color,
                                                             layersToRender,(Vector3 *)&QStack_15,
                                                             pTVar23,(Vector3 *)&CStack_16,
                                                             StringLiteral_CurrentSpawnRole_preview,
                                                             pMVar5,(this->fields).bodyClone,
                                                             &VStack_49,(MethodInfo *)0x0);
                                                  pAVar25 = (this->fields).previewer;
                                                  if ((pAVar25 != (AvatarPreviewer *)0x0) &&
                                                     (obj = (pAVar25->fields).previewCam,
                                                     obj != (Camera *)0x0)) {
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
                                                  pvVar32 = (obj->fields)._._._.m_CachedPtr;
                                                  if (pvVar32 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)obj,(MethodInfo *)0x0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  pvVar32 = (void *)(*pcRam_?)
                                                                              (pvVar32);
                                                  pOVar30 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar30 != (Object *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  VStack_49.x = 0.0;
                                                  VStack_49.y = 0.0;
                                                  VStack_49.z = 0.0;
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  (*pcRam_?)(pOVar31);
                                                  QStack_15.x = VStack_49.x + 0.0;
                                                  QStack_15.y = VStack_49.y + _UNK_?;
                                                  QStack_15.z = VStack_49.z + 0.0;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  (*pcRam_?)(pOVar31);
                                                  pGVar17 = (this->fields).bodyClone;
                                                  if (pGVar17 != (GameObject *)0x0) {
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
                                                  pvVar32 = (pGVar17->fields)._.m_CachedPtr;
                                                  if (pvVar32 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar17,(MethodInfo *)0x0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  pvVar32 = (void *)(*pcRam_?)
                                                                              (pvVar32);
                                                  pOVar30 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar30 != (Object *)0x0) {
                                                    aCStack_12[0].r = fVar18;
                                                    aCStack_12[0].g = fVar19;
                                                    aCStack_12[0].b = fVar20;
                                                    aCStack_12[0].a = fVar21;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  (*pcRam_?)(pOVar31,aCStack_12);
                                                  pGVar17 = (this->fields).bodyClone;
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
                                                  uVar28 = 0x40000;
                                                  do {
                                                    layer = layer + 1;
                                                    uVar28 = (int)uVar28 >> 1;
                                                  } while ((uVar28 & 1) == 0);
                                                  LayerUtil::LayerUtil_SetLayerRecursively_4
                                                            (pGVar17,layer,(MethodInfo *)0x0);
                                                  pAVar25 = (this->fields).previewer;
                                                  if ((pAVar25 != (AvatarPreviewer *)0x0) &&
                                                     (pRVar26 = (this->fields).previewImage,
                                                     pRVar26 != (RawImage *)0x0)) {
                                                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                                    RawImage_set_texture
                                                              (pRVar26,(Texture *)
                                                                      (pAVar25->fields).
                                                                      previewTexture,
                                                               (MethodInfo *)0x0);
                                                    pOVar30 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Object::
                                                              Object_1_Instantiate_4
                                                                        ((Object *)
                                                                         (this->fields).
                                                                         dropShadowPlane,
                                                                                                                                                  
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  if (pOVar30 != (Object *)0x0) {
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
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
code_?:
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  pvVar32 = (void *)(*pcRam_?)(pOVar31)
                                                  ;
                                                  pTVar23 = (Transform *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pTVar23 != (Transform *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_SetParent_1
                                                              (pTVar23,(this->fields).
                                                                       avatarResetToTransform,1,
                                                               (MethodInfo *)0x0);
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
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0)
                                                  goto code_?;
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  pvVar32 = (void *)(*pcRam_?)(pOVar31)
                                                  ;
                                                  pOVar30 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  pAVar25 = (this->fields).previewer;
                                                  if ((pAVar25 != (AvatarPreviewer *)0x0) &&
                                                     (pGVar17 = (pAVar25->fields).
                                                                _PreviewGameObject_k__BackingField,
                                                     pGVar17 != (GameObject *)0x0)) {
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
                                                  pvVar32 = (pGVar17->fields)._.m_CachedPtr;
                                                  if (pvVar32 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar17,(MethodInfo *)0x0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  pvVar32 = (void *)(*pcRam_?)
                                                                              (pvVar32);
                                                  obj_01 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           Bindings::Unmarshal::
                                                           Unmarshal_UnmarshalUnityObject
                                                                     (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (obj_01 != (Object *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  VStack_49.x = 0.0;
                                                  VStack_49.y = 0.0;
                                                  VStack_49.z = 0.0;
                                                  pOVar31 = obj_01[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (obj_01,(MethodInfo *)0x0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  (*pcRam_?)(pOVar31);
                                                  uVar50._0_4_ = VStack_49.x + 0.0;
                                                  if (pOVar30 == (Object *)0x0) {
                                                    FUN_?();
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  uVar50._4_4_ = VStack_49.y - _UNK_?;
                                                  CStack_16.b = VStack_49.z + 0.0;
                                                  CStack_16._0_8_ = uVar50;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcVar7 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar7 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar7 == (code *)0x0)) {
                                                    uVar10 = func_?(&UNK_?);
                                                    FUN_?(uVar10,0);
                                                    pcVar7 = (code *)swi(3);
                                                    (*pcVar7)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar7;
                                                  (*pcRam_?)(pOVar31,&CStack_16);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  FUN_?();
                                                  pcVar7 = (code *)swi(3);
                                                  (*pcVar7)();
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

