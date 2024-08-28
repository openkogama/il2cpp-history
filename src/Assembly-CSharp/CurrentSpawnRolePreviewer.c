
/* Void ChangeAnimation(String) */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_ChangeAnimation(CurrentSpawnRolePreviewer *this,String *NewAnimation,MethodInfo *method)

{
  if ((this->fields).goAnimation != (Animation *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)();
    return;
  }
  puStack_1 = &stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_OnDestroy(CurrentSpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarBody;
  if (this_00 != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone(this_00,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields).previewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).previewer;
    if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pAVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  ppTVar4 = &(this->fields).avatarResetToTransform;
  x = *ppTVar4;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*ppTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*ppTVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
    *ppTVar4 = (Transform *)0x0;
    func_?();
  }
  return;
}


/* Void RemoveSkinnedMeshOptimizers() */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_RemoveSkinnedMeshOptimizers(CurrentSpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(this_00,SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
    uVar2 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar3 = pOVar1->vector;
code_?:
      if ((int)pOVar1->max_length <= (int)uVar2) {
        return;
      }
      if (uVar2 < pOVar1->max_length) {
        pOVar4 = (Object_1 *)*ppOVar3;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality(pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
code_?:
          uVar2 = uVar2 + 1;
          ppOVar3 = ppOVar3 + 1;
          goto code_?;
        }
        if (uVar2 < pOVar1->max_length) {
          if ((SkinnedMeshOptimizer *)*ppOVar3 == (SkinnedMeshOptimizer *)0x0) goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer((SkinnedMeshOptimizer *)*ppOVar3,(MethodInfo *)0x0);
          if (uVar2 < pOVar1->max_length) {
            if ((SkinnedMeshOptimizer *)*ppOVar3 != (SkinnedMeshOptimizer *)0x0) {
              SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh((SkinnedMeshOptimizer *)*ppOVar3,(MethodInfo *)0x0);
              if (uVar2 < pOVar1->max_length) {
                pOVar4 = (Object_1 *)*ppOVar3;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar4,(MethodInfo *)0x0);
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
        }
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupPreviewer(Int32, Int32) */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer(CurrentSpawnRolePreviewer *this,int32_t previewDimensionsX,int32_t previewDimensionsY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
    func_?(&InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
    func_?(&AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____);
    func_?(&AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____);
    func_?(&AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
    func_?(&UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
    func_?(&UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______);
    func_?(&PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
    func_?(&SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
    func_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_);
    func_?(&StringLiteral__Color);
    func_?(&StringLiteral_CurrentSpawnRole_preview);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit((SpawnRoleVariable_1_System_Object_ *)(pSVar1->fields).woId,MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject(this_01,(int32_t)id,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObject *)0x0) {
        bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) || ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] != TypeInfo__MVAvatarLocal)) goto code_?;
        ppMVar4 = &(this->fields).avatarBody;
        *ppMVar4 = (MVBody *)pMVar2[3].klass;
        func_?();
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffc8,(Vector3)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0);
        ppGVar5 = &(this->fields).bodyClone;
        pGVar6 = *ppGVar5;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar7 == 0) {
code_?:
          if (*ppMVar4 != (MVBody *)0x0) {
            pGVar6 = MVBody::MVBody_CreateClone(*ppMVar4,1,1,(MethodInfo *)0x0);
            *ppGVar5 = pGVar6;
            func_?();
            if (*ppMVar4 != (MVBody *)0x0) {
              MVBody::MVBody_set_AccessoryMoveOverride(*ppMVar4,0,(MethodInfo *)0x0);
              ppAVar8 = &(this->fields).previewer;
              pAVar9 = *ppAVar8;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pAVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar7 != 0) {
                if (*ppAVar8 == (AvatarPreviewer *)0x0) goto code_?;
                pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*ppAVar8,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar6,(MethodInfo *)0x0);
              }
              ppTVar10 = &(this->fields).avatarResetToTransform;
              pTVar11 = *ppTVar10;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pTVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar7 != 0) {
                if (*ppTVar10 == (Transform *)0x0) goto code_?;
                pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*ppTVar10,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar6,(MethodInfo *)0x0);
              }
              pGVar6 = (GameObject *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar6,(MethodInfo *)0x0);
              if (pGVar6 != (GameObject *)0x0) {
                pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
                *ppTVar10 = pTVar11;
                func_?();
                pRVar12 = (this->fields).previewImage;
                if (pRVar12 != (RawImage *)0x0) {
                  (*(code *)(pRVar12->klass->vtable).set_color.method)(pRVar12,0x3f800000,0x3f800000);
                  if (*ppGVar5 != (GameObject *)0x0) {
                    pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(*ppGVar5,UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______);
                    uVar14 = 0;
                    if (pOVar13 != (Object__Array *)0x0) {
                      ppOVar15 = pOVar13->vector;
                      for (; (int)uVar14 < (int)pOVar13->max_length; uVar14 = uVar14 + 1) {
                        if (pOVar13->max_length <= uVar14) goto code_?;
                        if ((Behaviour *)*ppOVar15 == (Behaviour *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*ppOVar15,0,(MethodInfo *)0x0);
                        ppOVar15 = ppOVar15 + 1;
                      }
                      pGVar6 = (this->fields).bodyClone;
                      if (pGVar6 != (GameObject *)0x0) {
                        pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar6,PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
                        uVar14 = 0;
                        if (pOVar13 != (Object__Array *)0x0) {
                          ppOVar15 = pOVar13->vector;
                          while( true ) {
                            if ((int)pOVar13->max_length <= (int)uVar14) break;
                            if (pOVar13->max_length <= uVar14) goto code_?;
                            if ((Component *)*ppOVar15 == (Component *)0x0) goto code_?;
                            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*ppOVar15,(MethodInfo *)0x0);
                            if (pGVar6 == (GameObject *)0x0) goto code_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar6,0,(MethodInfo *)0x0);
                            uVar14 = uVar14 + 1;
                            ppOVar15 = ppOVar15 + 1;
                          }
                          pGVar6 = (this->fields).bodyClone;
                          if (pGVar6 != (GameObject *)0x0) {
                            pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar6,AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
                            uVar14 = 0;
                            if (pOVar13 != (Object__Array *)0x0) {
                              ppOVar15 = pOVar13->vector;
                              while( true ) {
                                if ((int)pOVar13->max_length <= (int)uVar14) break;
                                if (pOVar13->max_length <= uVar14) goto code_?;
                                if ((Component *)*ppOVar15 == (Component *)0x0) goto code_?;
                                pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*ppOVar15,(MethodInfo *)0x0);
                                if (pGVar6 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar6,0,(MethodInfo *)0x0);
                                uVar14 = uVar14 + 1;
                                ppOVar15 = ppOVar15 + 1;
                              }
                              pGVar6 = (this->fields).bodyClone;
                              if (pGVar6 != (GameObject *)0x0) {
                                p_Var21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_3(pGVar6,1,AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____);
                                uVar14 = 0;
                                if (p_Var21 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var31 = p_Var21->vector;
                                  for (; (int)uVar14 < (int)p_Var21->max_length; uVar14 = uVar14 + 1) {
                                    if (p_Var21->max_length <= uVar14) goto code_?;
                                    if ((Behaviour *)*pp_Var31 == (Behaviour *)0x0) goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*pp_Var31,1,(MethodInfo *)0x0);
                                    pp_Var31 = pp_Var31 + 1;
                                  }
                                  pGVar6 = (this->fields).bodyClone;
                                  if (pGVar6 != (GameObject *)0x0) {
                                    p_Var21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_3(pGVar6,1,AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____);
                                    uVar14 = 0;
                                    if (p_Var21 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                      pp_Var31 = p_Var21->vector;
                                      for (; (int)uVar14 < (int)p_Var21->max_length; uVar14 = uVar14 + 1) {
                                        if (p_Var21->max_length <= uVar14) goto code_?;
                                        if ((Behaviour *)*pp_Var31 == (Behaviour *)0x0) goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*pp_Var31,1,(MethodInfo *)0x0);
                                        pp_Var31 = pp_Var31 + 1;
                                      }
                                      pGVar6 = (this->fields).bodyClone;
                                      if (pGVar6 != (GameObject *)0x0) {
                                        pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar6,SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
                                        uVar14 = 0;
                                        if (pOVar13 != (Object__Array *)0x0) {
                                          ppOVar15 = pOVar13->vector;
                                          while( true ) {
                                            if ((int)pOVar13->max_length <= (int)uVar14) break;
                                            if (pOVar13->max_length <= uVar14) goto code_?;
                                            if ((Component *)*ppOVar15 == (Component *)0x0) goto code_?;
                                            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*ppOVar15,(MethodInfo *)0x0);
                                            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar6,(MethodInfo *)0x0);
                                            uVar14 = uVar14 + 1;
                                            ppOVar15 = ppOVar15 + 1;
                                          }
                                          pGVar6 = (this->fields).bodyClone;
                                          if (pGVar6 != (GameObject *)0x0) {
                                            this_02 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_1(pGVar6,InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
                                            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
                                            if (bVar7 == 0) {
code_?:
                                              if (cRam_? == '\0') {
                                                func_?();
                                                func_?();
                                                cRam_? = '\x01';
                                              }
                                              pGVar6 = (this->fields).bodyClone;
                                              if (pGVar6 != (GameObject *)0x0) {
                                                pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar6,SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
                                                uVar14 = 0;
                                                if (pOVar13 != (Object__Array *)0x0) {
                                                  ppOVar15 = pOVar13->vector;
                                                  for (; (int)uVar14 < (int)pOVar13->max_length; uVar14 = uVar14 + 1) {
                                                    if (pOVar13->max_length <= uVar14) goto code_?;
                                                    pOVar16 = (Object_1 *)*ppOVar15;
                                                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                      func_?();
                                                    }
                                                    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality(pOVar16,(Object_1 *)0x0,(MethodInfo *)0x0);
                                                    if (bVar7 != 0) {
                                                      if (pOVar13->max_length <= uVar14) goto code_?;
                                                      if ((SkinnedMeshOptimizer *)*ppOVar15 == (SkinnedMeshOptimizer *)0x0) goto code_?;
                                                      SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer((SkinnedMeshOptimizer *)*ppOVar15,(MethodInfo *)0x0);
                                                      if (pOVar13->max_length <= uVar14) goto code_?;
                                                      if ((SkinnedMeshOptimizer *)*ppOVar15 == (SkinnedMeshOptimizer *)0x0) goto code_?;
                                                      SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh((SkinnedMeshOptimizer *)*ppOVar15,(MethodInfo *)0x0);
                                                      if (pOVar13->max_length <= uVar14) goto code_?;
                                                      pOVar16 = (Object_1 *)*ppOVar15;
                                                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar16,(MethodInfo *)0x0);
                                                    }
                                                    ppOVar15 = ppOVar15 + 1;
                                                  }
                                                  pGVar6 = (this->fields).bodyClone;
                                                  if (pGVar6 != (GameObject *)0x0) {
                                                    pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar6,UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
                                                    uStack_17 = 0;
                                                    if (pOVar13 != (Object__Array *)0x0) {
                                                      ppOVar15 = pOVar13->vector;
                                                      for (; (int)uStack_17 < (int)pOVar13->max_length; uStack_17 = uStack_17 + 1) {
                                                        uVar14 = 0;
                                                        iVar18 = 0x10;
                                                        while( true ) {
                                                          if (pOVar13->max_length <= uStack_17) goto code_?;
                                                          if ((Renderer *)*ppOVar15 == (Renderer *)0x0) goto code_?;
                                                          pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*ppOVar15,(MethodInfo *)0x0);
                                                          if (pMVar19 == (Material__Array *)0x0) goto code_?;
                                                          if ((int)pMVar19->max_length <= (int)uVar14) break;
                                                          if (pOVar13->max_length <= uStack_17) goto code_?;
                                                          if ((Renderer *)*ppOVar15 == (Renderer *)0x0) goto code_?;
                                                          pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*ppOVar15,(MethodInfo *)0x0);
                                                          if (pMVar19 == (Material__Array *)0x0) goto code_?;
                                                          if (pMVar19->max_length <= uVar14) goto code_?;
                                                          pMVar20 = *(Material **)((int)pMVar19->vector + iVar18 + -0x10);
                                                          if (pMVar20 == (Material *)0x0) goto code_?;
                                                          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1(pMVar20,StringLiteral__Color,(MethodInfo *)0x0);
                                                          if (bVar7 != 0) {
                                                            if (pOVar13->max_length <= uStack_17) goto code_?;
                                                            if ((Renderer *)*ppOVar15 == (Renderer *)0x0) goto code_?;
                                                            pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*ppOVar15,(MethodInfo *)0x0);
                                                            if (pMVar19 == (Material__Array *)0x0) goto code_?;
                                                            if (pMVar19->max_length <= uVar14) goto code_?;
                                                            pMVar20 = *(Material **)((int)pMVar19->vector + iVar18 + -0x10);
                                                            if (pMVar20 == (Material *)0x0) goto code_?;
                                                            pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color((Color *)&stack0xffffffc8,pMVar20,(MethodInfo *)0x0);
                                                            fVar22 = pCVar21->r;
                                                            fVar23 = pCVar21->g;
                                                            if (pOVar13->max_length <= uStack_17) goto code_?;
                                                            if ((Renderer *)*ppOVar15 == (Renderer *)0x0) goto code_?;
                                                            puVar24 = &UNK_?;
                                                            pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*ppOVar15,(MethodInfo *)0x0);
                                                            if (pMVar19 == (Material__Array *)0x0) goto code_?;
                                                            if (pMVar19->max_length <= uVar14) goto code_?;
                                                            pMVar20 = *(Material **)((int)pMVar19->vector + iVar18 + -0x10);
                                                            if (pMVar20 == (Material *)0x0) goto code_?;
                                                            value_02.g = fVar23;
                                                            value_02.r = fVar22;
                                                            value_02.b = (float)puVar24;
                                                            value_02.a = 1.0;
                                                            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color(pMVar20,value_02,(MethodInfo *)0x0);
                                                          }
                                                          uVar14 = uVar14 + 1;
                                                          iVar18 = iVar18 + 4;
                                                        }
                                                        ppOVar15 = ppOVar15 + 1;
                                                      }
                                                      pGVar6 = (this->fields).bodyClone;
                                                      if (pGVar6 != (GameObject *)0x0) {
                                                        pAVar25 = (Animation *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_1(pGVar6,UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
                                                        ppAVar26 = &(this->fields).goAnimation;
                                                        *ppAVar26 = pAVar25;
                                                        puVar24 = &UNK_?;
                                                        func_?();
                                                        pAVar9 = (this->fields).previewerPrefab;
                                                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                          func_?();
                                                        }
                                                        pAVar9 = (AvatarPreviewer *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pAVar9,AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
                                                        ppAVar27 = &(this->fields).previewer;
                                                        *ppAVar27 = pAVar9;
                                                        puVar28 = &UNK_?;
                                                        ppAVar29 = ppAVar27;
                                                        func_?();
                                                        pAVar9 = *ppAVar27;
                                                        pMVar30 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
                                                        if (pMVar30 != (MVLocalPlayer *)0x0) {
                                                          pMVar31 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar30,(MethodInfo *)0x0);
                                                          if (pMVar31 != (MVBody *)0x0) {
                                                            layersToRender = (pMVar31->fields)._._._.previewLayerMask;
                                                            uVar32 = 0xbf00000000000000;
                                                            pTVar11 = *ppTVar10;
                                                            fVar22 = 100.0;
                                                            fVar23 = 100.0;
                                                            fVar33 = 100.0;
                                                            pMVar30 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
                                                            if (pMVar30 != (MVLocalPlayer *)0x0) {
                                                              pMVar31 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar30,(MethodInfo *)0x0);
                                                              if (pAVar9 != (AvatarPreviewer *)0x0) {
                                                                previewPosition.y = fVar23;
                                                                previewPosition.x = fVar22;
                                                                cameraOffset.z = -1.0;
                                                                cameraOffset.x = (float)(int)uVar32;
                                                                cameraOffset.y = (float)(int)((ulonglong)uVar32 >> 0x20);
                                                                previewPosition.z = fVar33;
                                                                AvatarPreviewer::AvatarPreviewer_Initialize(pAVar9,previewDimensionsX,previewDimensionsY,CameraClearFlags__Enum_Color,layersToRender,cameraOffset,pTVar11,previewPosition,StringLiteral_CurrentSpawnRole_preview,(MVWorldObjectClient *)pMVar31,(this->fields).bodyClone,(Vector3)ZEXT812(0x41700000),(MethodInfo *)0x0);
                                                                if ((*ppAVar8 != (AvatarPreviewer *)0x0) && (this_00 = ((*ppAVar8)->fields).previewCam, this_00 != (Camera *)0x0)) {
                                                                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                                                                  if (pTVar11 != (Transform *)0x0) {
                                                                    pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb8,pTVar11,(MethodInfo *)0x0);
                                                                    uVar35 = pVVar34->x;
                                                                    uVar36 = pVVar34->y;
                                                                    value.y = (float)uVar36 + 1.22;
                                                                    value.x = (float)uVar35 + 0.0;
                                                                    value.z = pVVar34->z + 0.0;
                                                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar11,value,(MethodInfo *)0x0);
                                                                    pGVar6 = (this->fields).bodyClone;
                                                                    if (pGVar6 != (GameObject *)0x0) {
                                                                      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
                                                                      if (pTVar11 != (Transform *)0x0) {
                                                                        value_00.y = (float)ppAVar26;
                                                                        value_00.x = (float)puVar24;
                                                                        value_00.z = (float)puVar28;
                                                                        value_00.w = (float)ppAVar29;
                                                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar11,value_00,(MethodInfo *)0x0);
                                                                        pGVar6 = (this->fields).bodyClone;
                                                                        layer = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Hidden,(MethodInfo *)0x0);
                                                                        LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar6,layer,(MethodInfo *)0x0);
                                                                        pAVar9 = (this->fields).previewer;
                                                                        if ((pAVar9 != (AvatarPreviewer *)0x0) && (pRVar12 = (this->fields).previewImage, pRVar12 != (RawImage *)0x0)) {
                                                                          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture(pRVar12,(Texture *)(pAVar9->fields).previewTexture,(MethodInfo *)0x0);
                                                                          pGVar6 = (GameObject *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)(this->fields).dropShadowPlane,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                          if (pGVar6 != (GameObject *)0x0) {
                                                                            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
                                                                            if (pTVar11 != (Transform *)0x0) {
                                                                              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent(pTVar11,(this->fields).avatarResetToTransform,(MethodInfo *)0x0);
                                                                              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
                                                                              pAVar9 = (this->fields).previewer;
                                                                              if ((pAVar9 != (AvatarPreviewer *)0x0) && (pGVar6 = (pAVar9->fields)._PreviewGameObject_k__BackingField, pGVar6 != (GameObject *)0x0)) {
                                                                                this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
                                                                                if (this_03 != (Transform *)0x0) {
                                                                                  pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb8,this_03,(MethodInfo *)0x0);
                                                                                  uVar37 = pVVar34->x;
                                                                                  uVar38 = pVVar34->y;
                                                                                  if (pTVar11 != (Transform *)0x0) {
                                                                                    value_01.y = (float)uVar38 - 0.1;
                                                                                    value_01.x = (float)uVar37 + 0.0;
                                                                                    value_01.z = pVVar34->z + 0.0;
                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar11,value_01,(MethodInfo *)0x0);
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
                                            else if (this_02 != (Component *)0x0) {
                                              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(this_02,(MethodInfo *)0x0);
                                              if (pGVar6 != (GameObject *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar6,0,(MethodInfo *)0x0);
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
                }
              }
            }
          }
        }
        else if (*ppGVar5 != (GameObject *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(*ppGVar5,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation((Quaternion *)&stack0xffffff90,pTVar11,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}

