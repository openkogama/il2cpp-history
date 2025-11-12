
/* Void ChangeAnimation(String) */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_ChangeAnimation(CurrentSpawnRolePreviewer *this,String *NewAnimation,MethodInfo *method)

{
  this_00 = (this->fields).goAnimation;
  if (this_00 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3(this_00,NewAnimation,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_OnDestroy(CurrentSpawnRolePreviewer *this,MethodInfo *method)

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
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pAVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
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
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar3,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_RemoveSkinnedMeshOptimizers(CurrentSpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______;
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    if ((SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
    }
    p_Var4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
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
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer((SkinnedMeshOptimizer *)*pp_Var6,(MethodInfo *)0x0);
            if ((uint)p_Var4->max_length <= uVar2) goto code_?;
            if ((SkinnedMeshOptimizer *)*pp_Var6 == (SkinnedMeshOptimizer *)0x0) break;
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh((SkinnedMeshOptimizer *)*pp_Var6,(MethodInfo *)0x0);
            if ((uint)p_Var4->max_length <= uVar2) goto code_?;
            obj = (Object_1 *)*pp_Var6;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer(CurrentSpawnRolePreviewer *this,int32_t previewDimensionsX,int32_t previewDimensionsY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
    LOCK();
    UNLOCK();
    FUN_?(&InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
    LOCK();
    UNLOCK();
    FUN_?(&AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____);
    LOCK();
    UNLOCK();
    FUN_?(&AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____);
    LOCK();
    UNLOCK();
    FUN_?(&AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______);
    LOCK();
    UNLOCK();
    FUN_?(&PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
    LOCK();
    UNLOCK();
    FUN_?(&SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_);
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
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
  if (((pSVar2 != (SpawnRoleDataMediator *)0x0) && (pSVar3 = (pSVar2->fields).woId, pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0)) && (pSVar4 = (pSVar3->fields)._.subscribableVariable, pSVar4 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if ((pMVar1 != (MVWorldObjectClientManager *)0x0) && (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(pMVar1,(pSVar4->fields)._.value,(MethodInfo *)0x0), pMVar5 != (MVWorldObjectClient *)0x0)) {
      method_00 = pMVar5->klass;
      bVar6 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if (((method_00->_1).naturalAligment < bVar6) || ((MVAvatarLocal__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar6 - 1] != TypeInfo__MVAvatarLocal)) {
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
      uVar9._0_4_ = (pQVar8->identityQuaternion).x;
      uVar9._4_4_ = (pQVar8->identityQuaternion).y;
      uVar10._0_4_ = (pQVar8->identityQuaternion).z;
      uVar10._4_4_ = (pQVar8->identityQuaternion).w;
      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler((Quaternion *)aCStack_12,0.0,180.0,0.0,(MethodInfo *)CONCAT44(in_stack_13,in_stack_14));
      CStack_15.r = pQVar11->x;
      CStack_15.g = pQVar11->y;
      CStack_15.b = pQVar11->z;
      CStack_15.a = pQVar11->w;
      CStack_16._0_8_ = uVar9;
      CStack_16._8_8_ = uVar10;
      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply((Quaternion *)aCStack_12,(Quaternion *)&CStack_16,(Quaternion *)&CStack_15,(MethodInfo *)method_00);
      pGVar17 = (this->fields).bodyClone;
      fVar18 = pQVar11->x;
      fVar19 = pQVar11->y;
      fVar20 = pQVar11->z;
      fVar21 = pQVar11->w;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pGVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar22 != 0) {
        pGVar17 = (this->fields).bodyClone;
        if ((pGVar17 == (GameObject *)0x0) || (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar17,(MethodInfo *)0x0), pTVar23 == (Transform *)0x0)) goto code_?;
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation((Quaternion *)aCStack_12,pTVar23,(MethodInfo *)0x0);
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
        if ((pMVar24 != (MVBody *)0x0) && (this_00 = (pMVar24->fields).bodyAccessoriesController, this_00 != (BodyAccessoriesController *)0x0)) {
          BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride(this_00,0,(MethodInfo *)0x0);
          pAVar25 = (this->fields).previewer;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pAVar25,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar22 != 0) {
            pAVar25 = (this->fields).previewer;
            if (pAVar25 == (AvatarPreviewer *)0x0) goto code_?;
            pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pAVar25,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar17,(MethodInfo *)0x0);
          }
          pTVar23 = (this->fields).avatarResetToTransform;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pTVar23,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar22 != 0) {
            pTVar23 = (this->fields).avatarResetToTransform;
            if (pTVar23 == (Transform *)0x0) goto code_?;
            pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar23,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar17,(MethodInfo *)0x0);
          }
          pGVar17 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar17,(MethodInfo *)0x0);
          if (pGVar17 != (GameObject *)0x0) {
            pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar17,(MethodInfo *)0x0);
            (this->fields).avatarResetToTransform = pTVar23;
            func_?(&(this->fields).avatarResetToTransform);
            pRVar26 = (this->fields).previewImage;
            if (pRVar26 != (RawImage *)0x0) {
              CStack_15.r = 1.0;
              CStack_15.g = 1.0;
              CStack_15.b = 1.0;
              CStack_15.a = 1.0;
              (*(pRVar26->klass->vtable).set_color.methodPtr)(pRVar26,&CStack_15,(pRVar26->klass->vtable).set_color.method);
              if ((this->fields).bodyClone != (GameObject *)0x0) {
                lVar27 = FUN_?();
                layer = 0;
                if (lVar27 != 0) {
                  puVar28 = (undefined8 *)(lVar27 + 0x20);
                  for (uVar29 = layer; pMVar30 = PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______, (int)uVar29 < *(int *)(lVar27 + 0x18); uVar29 = uVar29 + 1) {
                    if (*(uint *)(lVar27 + 0x18) <= uVar29) goto code_?;
                    pOVar31 = (Object *)*puVar28;
                    if (pOVar31 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar32 = pOVar31[1].klass;
                    if (pOVar32 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcVar7 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                      uVar9 = func_?(&UNK_?);
                      FUN_?(uVar9,0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcRam_? = pcVar7;
                    (*pcRam_?)(pOVar32);
                    puVar28 = puVar28 + 1;
                  }
                  pGVar17 = (this->fields).bodyClone;
                  if (pGVar17 != (GameObject *)0x0) {
                    if ((PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                      FUN_?(PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
                    }
                    p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar17,0,((pMVar30->field7_0x38).rgctx_data)->method);
                    if (p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                      pp_Var40 = p_Var27->vector;
                      for (uVar29 = layer; pMVar30 = AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______, (int)uVar29 < (int)p_Var27->max_length; uVar29 = uVar29 + 1) {
                        if ((uint)p_Var27->max_length <= uVar29) goto code_?;
                        pOVar31 = (Object *)*pp_Var40;
                        if (pOVar31 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                          LOCK();
                          UNLOCK();
                          FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar32 = pOVar31[1].klass;
                        if (pOVar32 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcVar7 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                          uVar9 = func_?(&UNK_?);
                          FUN_?(uVar9,0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcRam_? = pcVar7;
                        pvVar33 = (void *)(*pcRam_?)(pOVar32);
                        pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                        if (pOVar31 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar32 = pOVar31[1].klass;
                        if (pOVar32 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcVar7 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                          uVar9 = func_?(&UNK_?);
                          FUN_?(uVar9,0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcRam_? = pcVar7;
                        (*pcRam_?)(pOVar32);
                        pp_Var40 = pp_Var40 + 1;
                      }
                      pGVar17 = (this->fields).bodyClone;
                      if (pGVar17 != (GameObject *)0x0) {
                        if ((AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                          FUN_?(AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
                        }
                        p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar17,0,((pMVar30->field7_0x38).rgctx_data)->method);
                        if (p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                          pp_Var40 = p_Var27->vector;
                          for (uVar29 = layer; (int)uVar29 < (int)p_Var27->max_length; uVar29 = uVar29 + 1) {
                            if ((uint)p_Var27->max_length <= uVar29) goto code_?;
                            pOVar31 = (Object *)*pp_Var40;
                            if (pOVar31 == (Object *)0x0) goto code_?;
                            if (cRam_? == '\0') {
                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                              LOCK();
                              UNLOCK();
                              FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pOVar32 = pOVar31[1].klass;
                            if (pOVar32 == (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            pcVar7 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                              uVar9 = func_?(&UNK_?);
                              FUN_?(uVar9,0);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            pcRam_? = pcVar7;
                            pvVar33 = (void *)(*pcRam_?)(pOVar32);
                            pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                            if (pOVar31 == (Object *)0x0) goto code_?;
                            if (cRam_? == '\0') {
                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pOVar32 = pOVar31[1].klass;
                            if (pOVar32 == (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            pcVar7 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                              uVar9 = func_?(&UNK_?);
                              FUN_?(uVar9,0);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            pcRam_? = pcVar7;
                            (*pcRam_?)(pOVar32);
                            pp_Var40 = pp_Var40 + 1;
                          }
                          pGVar17 = (this->fields).bodyClone;
                          if ((pGVar17 != (GameObject *)0x0) && (p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar17,1,AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____), p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                            pp_Var40 = p_Var27->vector;
                            for (uVar29 = layer; (int)uVar29 < (int)p_Var27->max_length; uVar29 = uVar29 + 1) {
                              if ((uint)p_Var27->max_length <= uVar29) goto code_?;
                              pOVar31 = (Object *)*pp_Var40;
                              if (pOVar31 == (Object *)0x0) goto code_?;
                              if (cRam_? == '\0') {
                                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pOVar32 = pOVar31[1].klass;
                              if (pOVar32 == (Object__Class *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                pcVar7 = (code *)swi(3);
                                (*pcVar7)();
                                return;
                              }
                              pcVar7 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                uVar9 = func_?(&UNK_?);
                                FUN_?(uVar9,0);
                                pcVar7 = (code *)swi(3);
                                (*pcVar7)();
                                return;
                              }
                              pcRam_? = pcVar7;
                              (*pcRam_?)(pOVar32);
                              pp_Var40 = pp_Var40 + 1;
                            }
                            pGVar17 = (this->fields).bodyClone;
                            if ((pGVar17 != (GameObject *)0x0) && (p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar17,1,AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____), p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                              pp_Var40 = p_Var27->vector;
                              for (uVar29 = layer; pMVar30 = SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______, (int)uVar29 < (int)p_Var27->max_length; uVar29 = uVar29 + 1) {
                                if ((uint)p_Var27->max_length <= uVar29) goto code_?;
                                pOVar31 = (Object *)*pp_Var40;
                                if (pOVar31 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar32 = pOVar31[1].klass;
                                if (pOVar32 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                  pcVar7 = (code *)swi(3);
                                  (*pcVar7)();
                                  return;
                                }
                                pcVar7 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                  uVar9 = func_?(&UNK_?);
                                  FUN_?(uVar9,0);
                                  pcVar7 = (code *)swi(3);
                                  (*pcVar7)();
                                  return;
                                }
                                pcRam_? = pcVar7;
                                (*pcRam_?)(pOVar32);
                                pp_Var40 = pp_Var40 + 1;
                              }
                              pGVar17 = (this->fields).bodyClone;
                              if (pGVar17 != (GameObject *)0x0) {
                                if ((SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                  FUN_?(SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
                                }
                                p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar17,0,((pMVar30->field7_0x38).rgctx_data)->method);
                                if (p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var40 = p_Var27->vector;
                                  for (uVar29 = layer; pMVar30 = InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__, (int)uVar29 < (int)p_Var27->max_length; uVar29 = uVar29 + 1) {
                                    if ((uint)p_Var27->max_length <= uVar29) {
code_?:
                                      FUN_?();
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    pOVar31 = (Object *)*pp_Var40;
                                    if (pOVar31 == (Object *)0x0) goto code_?;
                                    if (cRam_? == '\0') {
                                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                                      LOCK();
                                      UNLOCK();
                                      FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pOVar32 = pOVar31[1].klass;
                                    if (pOVar32 == (Object__Class *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    pcVar7 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                      uVar9 = func_?(&UNK_?);
                                      FUN_?(uVar9,0);
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    pcRam_? = pcVar7;
                                    pvVar33 = (void *)(*pcRam_?)(pOVar32);
                                    obj_00 = (Object_1 *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
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
                                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj_00,0.0,(MethodInfo *)0x0);
                                    pp_Var40 = pp_Var40 + 1;
                                  }
                                  pGVar17 = (this->fields).bodyClone;
                                  if (pGVar17 != (GameObject *)0x0) {
                                    if ((InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                      FUN_?(InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
                                    }
                                    pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3(pGVar17,0,((pMVar30->field7_0x38).rgctx_data)->method);
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
                                    if (pOVar31 != (Object *)0x0) {
                                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                        FUN_?();
                                      }
                                      if (pOVar31[1].klass != (Object__Class *)0x0) {
                                        if (cRam_? == '\0') {
                                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                                          LOCK();
                                          UNLOCK();
                                          FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pOVar32 = pOVar31[1].klass;
                                        if (pOVar32 == (Object__Class *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        pcVar7 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                          uVar9 = func_?(&UNK_?);
                                          FUN_?(uVar9,0);
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        pcRam_? = pcVar7;
                                        pvVar33 = (void *)(*pcRam_?)(pOVar32);
                                        pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                                        if (pOVar31 == (Object *)0x0) goto code_?;
                                        if (cRam_? == '\0') {
                                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pOVar32 = pOVar31[1].klass;
                                        if (pOVar32 == (Object__Class *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        pcVar7 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                          uVar9 = func_?(&UNK_?);
                                          FUN_?(uVar9,0);
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        pcRam_? = pcVar7;
                                        (*pcRam_?)(pOVar32);
                                      }
                                    }
                                    CurrentSpawnRolePreviewer_RemoveSkinnedMeshOptimizers(this,(MethodInfo *)0x0);
                                    pMVar30 = UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______;
                                    pGVar17 = (this->fields).bodyClone;
                                    if (pGVar17 != (GameObject *)0x0) {
                                      if ((UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                        FUN_?(UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
                                      }
                                      p_Var27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar17,0,((pMVar30->field7_0x38).rgctx_data)->method);
                                      if (p_Var27 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                        pp_Var40 = p_Var27->vector;
                                        for (uVar29 = layer; pMVar30 = UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__, (int)uVar29 < (int)p_Var27->max_length; uVar29 = uVar29 + 1) {
                                          lVar27 = 0x20;
                                          uVar34 = layer;
                                          while( true ) {
                                            if ((uint)p_Var27->max_length <= uVar29) goto code_?;
                                            if (((Renderer *)*pp_Var40 == (Renderer *)0x0) || (pMVar35 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var40,(MethodInfo *)0x0), pMVar35 == (Material__Array *)0x0)) goto code_?;
                                            if ((int)pMVar35->max_length <= (int)uVar34) break;
                                            if ((uint)p_Var27->max_length <= uVar29) goto code_?;
                                            if (((Renderer *)*pp_Var40 == (Renderer *)0x0) || (pMVar35 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var40,(MethodInfo *)0x0), pMVar35 == (Material__Array *)0x0)) goto code_?;
                                            if ((uint)pMVar35->max_length <= uVar34) goto code_?;
                                            pMVar36 = *(Material **)((longlong)pMVar35->vector + lVar27 + -0x20);
                                            if (pMVar36 == (Material *)0x0) goto code_?;
                                            bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1(pMVar36,StringLiteral__Color,(MethodInfo *)0x0);
                                            if (bVar22 != 0) {
                                              if ((uint)p_Var27->max_length <= uVar29) goto code_?;
                                              if (((Renderer *)*pp_Var40 == (Renderer *)0x0) || (pMVar35 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var40,(MethodInfo *)0x0), pMVar35 == (Material__Array *)0x0)) goto code_?;
                                              if ((uint)pMVar35->max_length <= uVar34) goto code_?;
                                              pMVar36 = *(Material **)((longlong)pMVar35->vector + lVar27 + -0x20);
                                              if (pMVar36 == (Material *)0x0) goto code_?;
                                              pCVar37 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color(aCStack_12,pMVar36,(MethodInfo *)0x0);
                                              uVar38._0_4_ = pCVar37->r;
                                              uVar38._4_4_ = pCVar37->g;
                                              fVar39 = pCVar37->b;
                                              if ((uint)p_Var27->max_length <= uVar29) goto code_?;
                                              if (((Renderer *)*pp_Var40 == (Renderer *)0x0) || (pMVar35 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var40,(MethodInfo *)0x0), pMVar35 == (Material__Array *)0x0)) goto code_?;
                                              if ((uint)pMVar35->max_length <= uVar34) goto code_?;
                                              pMVar36 = *(Material **)((longlong)pMVar35->vector + lVar27 + -0x20);
                                              CStack_15.a = 1.0;
                                              CStack_15.b = fVar39;
                                              CStack_15._0_8_ = uVar38;
                                              if (pMVar36 == (Material *)0x0) goto code_?;
                                              CStack_16.b = fVar39;
                                              CStack_16.a = 1.0;
                                              CStack_16._0_8_ = uVar38;
                                              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color(pMVar36,&CStack_16,(MethodInfo *)0x0);
                                            }
                                            uVar34 = uVar34 + 1;
                                            lVar27 = lVar27 + 8;
                                          }
                                          pp_Var40 = pp_Var40 + 1;
                                        }
                                        pGVar17 = (this->fields).bodyClone;
                                        if (pGVar17 != (GameObject *)0x0) {
                                          if ((UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                            FUN_?(UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
                                          }
                                          pAVar40 = (Animation *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3(pGVar17,0,((pMVar30->field7_0x38).rgctx_data)->method);
                                          bVar41 = iRam_? != 0;
                                          (this->fields).goAnimation = pAVar40;
                                          if (bVar41) {
                                            uVar29 = (uint)((ulonglong)&(this->fields).goAnimation >> 0xc);
                                            uVar42 = (ulonglong)((uVar29 & 0x1fffff) >> 6);
                                            do {
                                              uVar43 = *(ulonglong *)(uVar42 * 8 + 0xADDR);
                                              puVar44 = (ulonglong *)(uVar42 * 8 + 0xADDR);
                                              LOCK();
                                              bVar41 = uVar43 == *puVar44;
                                              if (bVar41) {
                                                *puVar44 = uVar43 | 1L << (uVar29 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar41);
                                          }
                                          pAVar25 = (this->fields).previewerPrefab;
                                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          pAVar25 = (AvatarPreviewer *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pAVar25,AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
                                          bVar41 = iRam_? != 0;
                                          (this->fields).previewer = pAVar25;
                                          if (bVar41) {
                                            uVar29 = (uint)((ulonglong)&(this->fields).previewer >> 0xc);
                                            uVar42 = (ulonglong)((uVar29 & 0x1fffff) >> 6);
                                            do {
                                              uVar43 = *(ulonglong *)(uVar42 * 8 + 0xADDR);
                                              puVar44 = (ulonglong *)(uVar42 * 8 + 0xADDR);
                                              LOCK();
                                              bVar41 = uVar43 == *puVar44;
                                              if (bVar41) {
                                                *puVar44 = uVar43 | 1L << (uVar29 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar41);
                                          }
                                          pAVar25 = (this->fields).previewer;
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__MVGameControllerBase);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pMVar45 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                          if ((((pMVar45 != (MVGameControllerBase *)0x0) && (pMVar46 = (pMVar45->fields).game, pMVar46 != (MVNetworkGame *)0x0)) && (pMVar47 = (pMVar46->fields).playerContainer, pMVar47 != (MVPlayerContainer *)0x0)) && (pMVar48 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar47,(MethodInfo *)0x0), pMVar48 != (MVLocalPlayer *)0x0)) {
                                            if (cRam_? == '\0') {
                                              FUN_?();
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                                            if ((pMVar1 != (MVWorldObjectClientManager *)0x0) && (pOVar31 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar1,(pMVar48->fields).defaultBodyWoId,MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_), pOVar31 != (Object *)0x0)) {
                                              layersToRender = *(LayerFlags__Enum *)&pOVar31[0x12].monitor;
                                              pTVar23 = (this->fields).avatarResetToTransform;
                                              if (cRam_? == '\0') {
                                                FUN_?(&TypeInfo__MVGameControllerBase);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              pMVar45 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                              if (((pMVar45 != (MVGameControllerBase *)0x0) && (pMVar46 = (pMVar45->fields).game, pMVar46 != (MVNetworkGame *)0x0)) && ((pMVar47 = (pMVar46->fields).playerContainer, pMVar47 != (MVPlayerContainer *)0x0 && (pMVar48 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar47,(MethodInfo *)0x0), pMVar48 != (MVLocalPlayer *)0x0)))) {
                                                if (cRam_? == '\0') {
                                                  FUN_?();
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                                                if ((pMVar1 != (MVWorldObjectClientManager *)0x0) && (pMVar5 = (MVWorldObjectClient *)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar1,(pMVar48->fields).defaultBodyWoId,MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_), pAVar25 != (AvatarPreviewer *)0x0)) {
                                                  VStack_49.x = 15.0;
                                                  VStack_49.y = 0.0;
                                                  CStack_16.r = 100.0;
                                                  CStack_16.g = 100.0;
                                                  VStack_49.z = 0.0;
                                                  CStack_16.b = 100.0;
                                                  CStack_15.b = -1.0;
                                                  CStack_15.r = 0.0;
                                                  CStack_15.g = -0.5;
                                                  AvatarPreviewer::AvatarPreviewer_Initialize(pAVar25,previewDimensionsX,previewDimensionsY,CameraClearFlags__Enum_Color,layersToRender,(Vector3 *)&CStack_15,pTVar23,(Vector3 *)&CStack_16,StringLiteral_CurrentSpawnRole_preview,pMVar5,(this->fields).bodyClone,&VStack_49,(MethodInfo *)0x0);
                                                  pAVar25 = (this->fields).previewer;
                                                  if ((pAVar25 != (AvatarPreviewer *)0x0) && (obj = (pAVar25->fields).previewCam, obj != (Camera *)0x0)) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                                                      LOCK();
                                                      UNLOCK();
                                                      FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pvVar33 = (obj->fields)._._._.m_CachedPtr;
                                                    if (pvVar33 == (void *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                                                      pcVar7 = (code *)swi(3);
                                                      (*pcVar7)();
                                                      return;
                                                    }
                                                    pcVar7 = pcRam_?;
                                                    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                      uVar9 = func_?(&UNK_?);
                                                      FUN_?(uVar9,0);
                                                      pcVar7 = (code *)swi(3);
                                                      (*pcVar7)();
                                                      return;
                                                    }
                                                    pcRam_? = pcVar7;
                                                    pvVar33 = (void *)(*pcRam_?)(pvVar33);
                                                    pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                    if (pOVar31 != (Object *)0x0) {
                                                      if (cRam_? == '\0') {
                                                        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                        LOCK();
                                                        UNLOCK();
                                                        cRam_? = '\x01';
                                                      }
                                                      VStack_49.x = 0.0;
                                                      VStack_49.y = 0.0;
                                                      VStack_49.z = 0.0;
                                                      pOVar32 = pOVar31[1].klass;
                                                      if (pOVar32 == (Object__Class *)0x0) {
                                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                        pcVar7 = (code *)swi(3);
                                                        (*pcVar7)();
                                                        return;
                                                      }
                                                      pcVar7 = pcRam_?;
                                                      if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                        uVar9 = func_?(&UNK_?);
                                                        FUN_?(uVar9,0);
                                                        pcVar7 = (code *)swi(3);
                                                        (*pcVar7)();
                                                        return;
                                                      }
                                                      pcRam_? = pcVar7;
                                                      (*pcRam_?)(pOVar32);
                                                      CStack_15.r = VStack_49.x + 0.0;
                                                      CStack_15.g = VStack_49.y + 1.22;
                                                      CStack_15.b = VStack_49.z + 0.0;
                                                      if (cRam_? == '\0') {
                                                        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                        LOCK();
                                                        UNLOCK();
                                                        cRam_? = '\x01';
                                                      }
                                                      pOVar32 = pOVar31[1].klass;
                                                      if (pOVar32 == (Object__Class *)0x0) {
                                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                        pcVar7 = (code *)swi(3);
                                                        (*pcVar7)();
                                                        return;
                                                      }
                                                      pcVar7 = pcRam_?;
                                                      if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                        uVar9 = func_?(&UNK_?);
                                                        FUN_?(uVar9,0);
                                                        pcVar7 = (code *)swi(3);
                                                        (*pcVar7)();
                                                        return;
                                                      }
                                                      pcRam_? = pcVar7;
                                                      (*pcRam_?)(pOVar32);
                                                      pGVar17 = (this->fields).bodyClone;
                                                      if (pGVar17 != (GameObject *)0x0) {
                                                        if (cRam_? == '\0') {
                                                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                          LOCK();
                                                          UNLOCK();
                                                          FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                          LOCK();
                                                          UNLOCK();
                                                          cRam_? = '\x01';
                                                        }
                                                        pvVar33 = (pGVar17->fields)._.m_CachedPtr;
                                                        if (pvVar33 == (void *)0x0) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar17,(MethodInfo *)0x0);
                                                          pcVar7 = (code *)swi(3);
                                                          (*pcVar7)();
                                                          return;
                                                        }
                                                        pcVar7 = pcRam_?;
                                                        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                          uVar9 = func_?(&UNK_?);
                                                          FUN_?(uVar9,0);
                                                          pcVar7 = (code *)swi(3);
                                                          (*pcVar7)();
                                                          return;
                                                        }
                                                        pcRam_? = pcVar7;
                                                        pvVar33 = (void *)(*pcRam_?)(pvVar33);
                                                        pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                        if (pOVar31 != (Object *)0x0) {
                                                          aCStack_12[0].r = fVar18;
                                                          aCStack_12[0].g = fVar19;
                                                          aCStack_12[0].b = fVar20;
                                                          aCStack_12[0].a = fVar21;
                                                          if (cRam_? == '\0') {
                                                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                            LOCK();
                                                            UNLOCK();
                                                            cRam_? = '\x01';
                                                          }
                                                          pOVar32 = pOVar31[1].klass;
                                                          if (pOVar32 == (Object__Class *)0x0) {
                                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                            pcVar7 = (code *)swi(3);
                                                            (*pcVar7)();
                                                            return;
                                                          }
                                                          pcVar7 = pcRam_?;
                                                          if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                            uVar9 = func_?(&UNK_?);
                                                            FUN_?(uVar9,0);
                                                            pcVar7 = (code *)swi(3);
                                                            (*pcVar7)();
                                                            return;
                                                          }
                                                          pcRam_? = pcVar7;
                                                          (*pcRam_?)(pOVar32,aCStack_12);
                                                          pGVar17 = (this->fields).bodyClone;
                                                          if (cRam_? == '\0') {
                                                            FUN_?(&TypeInfo__UnityEngine__Debug);
                                                            LOCK();
                                                            UNLOCK();
                                                            FUN_?(&StringLiteral_layer_parameter_constant_should_);
                                                            LOCK();
                                                            UNLOCK();
                                                            cRam_? = '\x01';
                                                          }
                                                          uVar29 = 0x40000;
                                                          do {
                                                            layer = layer + 1;
                                                            uVar29 = (int)uVar29 >> 1;
                                                          } while ((uVar29 & 1) == 0);
                                                          LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar17,layer,(MethodInfo *)0x0);
                                                          pAVar25 = (this->fields).previewer;
                                                          if ((pAVar25 != (AvatarPreviewer *)0x0) && (pRVar26 = (this->fields).previewImage, pRVar26 != (RawImage *)0x0)) {
                                                            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture(pRVar26,(Texture *)(pAVar25->fields).previewTexture,(MethodInfo *)0x0);
                                                            pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)(this->fields).dropShadowPlane,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                            if (pOVar31 != (Object *)0x0) {
                                                              if (cRam_? == '\0') {
                                                                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                LOCK();
                                                                UNLOCK();
                                                                FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                LOCK();
                                                                UNLOCK();
                                                                cRam_? = '\x01';
                                                              }
                                                              pOVar32 = pOVar31[1].klass;
                                                              if (pOVar32 == (Object__Class *)0x0) {
code_?:
                                                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                                pcVar7 = (code *)swi(3);
                                                                (*pcVar7)();
                                                                return;
                                                              }
                                                              pcVar7 = pcRam_?;
                                                              if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                                uVar9 = func_?(&UNK_?);
                                                                FUN_?(uVar9,0);
                                                                pcVar7 = (code *)swi(3);
                                                                (*pcVar7)();
                                                                return;
                                                              }
                                                              pcRam_? = pcVar7;
                                                              pvVar33 = (void *)(*pcRam_?)(pOVar32);
                                                              pTVar23 = (Transform *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                              if (pTVar23 != (Transform *)0x0) {
                                                                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar23,(this->fields).avatarResetToTransform,1,(MethodInfo *)0x0);
                                                                if (cRam_? == '\0') {
                                                                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                  LOCK();
                                                                  UNLOCK();
                                                                  FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                  LOCK();
                                                                  UNLOCK();
                                                                  cRam_? = '\x01';
                                                                }
                                                                pOVar32 = pOVar31[1].klass;
                                                                if (pOVar32 == (Object__Class *)0x0) goto code_?;
                                                                pcVar7 = pcRam_?;
                                                                if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                                  uVar9 = func_?(&UNK_?);
                                                                  FUN_?(uVar9,0);
                                                                  pcVar7 = (code *)swi(3);
                                                                  (*pcVar7)();
                                                                  return;
                                                                }
                                                                pcRam_? = pcVar7;
                                                                pvVar33 = (void *)(*pcRam_?)(pOVar32);
                                                                pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                pAVar25 = (this->fields).previewer;
                                                                if ((pAVar25 != (AvatarPreviewer *)0x0) && (pGVar17 = (pAVar25->fields)._PreviewGameObject_k__BackingField, pGVar17 != (GameObject *)0x0)) {
                                                                  if (cRam_? == '\0') {
                                                                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                    LOCK();
                                                                    UNLOCK();
                                                                    FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                    LOCK();
                                                                    UNLOCK();
                                                                    cRam_? = '\x01';
                                                                  }
                                                                  pvVar33 = (pGVar17->fields)._.m_CachedPtr;
                                                                  if (pvVar33 == (void *)0x0) {
                                                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar17,(MethodInfo *)0x0);
                                                                    pcVar7 = (code *)swi(3);
                                                                    (*pcVar7)();
                                                                    return;
                                                                  }
                                                                  pcVar7 = pcRam_?;
                                                                  if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                                    uVar9 = func_?(&UNK_?);
                                                                    FUN_?(uVar9,0);
                                                                    pcVar7 = (code *)swi(3);
                                                                    (*pcVar7)();
                                                                    return;
                                                                  }
                                                                  pcRam_? = pcVar7;
                                                                  pvVar33 = (void *)(*pcRam_?)(pvVar33);
                                                                  obj_01 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                  if (obj_01 != (Object *)0x0) {
                                                                    if (cRam_? == '\0') {
                                                                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                                      LOCK();
                                                                      UNLOCK();
                                                                      cRam_? = '\x01';
                                                                    }
                                                                    VStack_49.x = 0.0;
                                                                    VStack_49.y = 0.0;
                                                                    VStack_49.z = 0.0;
                                                                    pOVar32 = obj_01[1].klass;
                                                                    if (pOVar32 == (Object__Class *)0x0) {
                                                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(obj_01,(MethodInfo *)0x0);
                                                                      pcVar7 = (code *)swi(3);
                                                                      (*pcVar7)();
                                                                      return;
                                                                    }
                                                                    pcVar7 = pcRam_?;
                                                                    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                                      uVar9 = func_?(&UNK_?);
                                                                      FUN_?(uVar9,0);
                                                                      pcVar7 = (code *)swi(3);
                                                                      (*pcVar7)();
                                                                      return;
                                                                    }
                                                                    pcRam_? = pcVar7;
                                                                    (*pcRam_?)(pOVar32);
                                                                    uVar50._0_4_ = VStack_49.x + 0.0;
                                                                    if (pOVar31 == (Object *)0x0) {
                                                                      FUN_?();
                                                                      pcVar7 = (code *)swi(3);
                                                                      (*pcVar7)();
                                                                      return;
                                                                    }
                                                                    uVar50._4_4_ = VStack_49.y - 0.1;
                                                                    CStack_16.b = VStack_49.z + 0.0;
                                                                    CStack_16._0_8_ = uVar50;
                                                                    if (cRam_? == '\0') {
                                                                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                                      LOCK();
                                                                      UNLOCK();
                                                                      cRam_? = '\x01';
                                                                    }
                                                                    pOVar32 = pOVar31[1].klass;
                                                                    if (pOVar32 == (Object__Class *)0x0) {
                                                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                                      pcVar7 = (code *)swi(3);
                                                                      (*pcVar7)();
                                                                      return;
                                                                    }
                                                                    pcVar7 = pcRam_?;
                                                                    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                                                                      uVar9 = func_?(&UNK_?);
                                                                      FUN_?(uVar9,0);
                                                                      pcVar7 = (code *)swi(3);
                                                                      (*pcVar7)();
                                                                      return;
                                                                    }
                                                                    pcRam_? = pcVar7;
                                                                    (*pcRam_?)(pOVar32,&CStack_16);
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

