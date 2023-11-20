
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
  if ((this->fields).avatarBody != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone((this->fields).avatarBody,(MethodInfo *)0x0);
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
  pTVar4 = (this->fields).avatarResetToTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar4 = (this->fields).avatarResetToTransform;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
    (this->fields).avatarResetToTransform = (Transform *)0x0;
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
        if (((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment) || ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] != TypeInfo__MVAvatarLocal)) goto code_?;
        (this->fields).avatarBody = (MVBody *)pMVar2[3].klass;
        func_?();
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffd0,(Vector3)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0);
        pGVar3 = (this->fields).bodyClone;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 == 0) {
code_?:
          pMVar5 = (this->fields).avatarBody;
          if (pMVar5 != (MVBody *)0x0) {
            pGVar3 = MVBody::MVBody_CreateClone(pMVar5,1,1,(MethodInfo *)0x0);
            (this->fields).bodyClone = pGVar3;
            func_?();
            pMVar5 = (this->fields).avatarBody;
            if (pMVar5 != (MVBody *)0x0) {
              MVBody::MVBody_set_AccessoryMoveOverride(pMVar5,0,(MethodInfo *)0x0);
              pAVar6 = (this->fields).previewer;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pAVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                pAVar6 = (this->fields).previewer;
                if (pAVar6 == (AvatarPreviewer *)0x0) goto code_?;
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pAVar6,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
              }
              pTVar7 = (this->fields).avatarResetToTransform;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pTVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                pTVar7 = (this->fields).avatarResetToTransform;
                if (pTVar7 == (Transform *)0x0) goto code_?;
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar7,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
              }
              pGVar3 = (GameObject *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar3,(MethodInfo *)0x0);
              if (pGVar3 != (GameObject *)0x0) {
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                (this->fields).avatarResetToTransform = pTVar7;
                func_?();
                pRVar8 = (this->fields).previewImage;
                if (pRVar8 != (RawImage *)0x0) {
                  (*(code *)(pRVar8->klass->vtable).set_color.method)(pRVar8,0x3f800000,0x3f800000);
                  pGVar3 = (this->fields).bodyClone;
                  if (pGVar3 != (GameObject *)0x0) {
                    pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar3,UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______);
                    uVar10 = 0;
                    if (pOVar9 != (Object__Array *)0x0) {
                      ppOVar11 = pOVar9->vector;
                      for (; (int)uVar10 < (int)pOVar9->max_length; uVar10 = uVar10 + 1) {
                        if (pOVar9->max_length <= uVar10) goto code_?;
                        if ((Behaviour *)*ppOVar11 == (Behaviour *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*ppOVar11,0,(MethodInfo *)0x0);
                        ppOVar11 = ppOVar11 + 1;
                      }
                      pGVar3 = (this->fields).bodyClone;
                      if (pGVar3 != (GameObject *)0x0) {
                        pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar3,PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
                        uVar10 = 0;
                        if (pOVar9 != (Object__Array *)0x0) {
                          ppOVar11 = pOVar9->vector;
                          while( true ) {
                            if ((int)pOVar9->max_length <= (int)uVar10) break;
                            if (pOVar9->max_length <= uVar10) goto code_?;
                            if ((Component *)*ppOVar11 == (Component *)0x0) goto code_?;
                            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*ppOVar11,(MethodInfo *)0x0);
                            if (pGVar3 == (GameObject *)0x0) goto code_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                            uVar10 = uVar10 + 1;
                            ppOVar11 = ppOVar11 + 1;
                          }
                          pGVar3 = (this->fields).bodyClone;
                          if (pGVar3 != (GameObject *)0x0) {
                            pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar3,AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
                            uVar10 = 0;
                            if (pOVar9 != (Object__Array *)0x0) {
                              ppOVar11 = pOVar9->vector;
                              while( true ) {
                                if ((int)pOVar9->max_length <= (int)uVar10) break;
                                if (pOVar9->max_length <= uVar10) goto code_?;
                                if ((Component *)*ppOVar11 == (Component *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*ppOVar11,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                uVar10 = uVar10 + 1;
                                ppOVar11 = ppOVar11 + 1;
                              }
                              pGVar3 = (this->fields).bodyClone;
                              if (pGVar3 != (GameObject *)0x0) {
                                p_Var15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_3(pGVar3,1,AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____);
                                uVar10 = 0;
                                if (p_Var15 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var16 = p_Var15->vector;
                                  for (; (int)uVar10 < (int)p_Var15->max_length; uVar10 = uVar10 + 1) {
                                    if (p_Var15->max_length <= uVar10) goto code_?;
                                    if ((Behaviour *)*pp_Var16 == (Behaviour *)0x0) goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*pp_Var16,1,(MethodInfo *)0x0);
                                    pp_Var16 = pp_Var16 + 1;
                                  }
                                  pGVar3 = (this->fields).bodyClone;
                                  if (pGVar3 != (GameObject *)0x0) {
                                    p_Var15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_3(pGVar3,1,AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____);
                                    uVar10 = 0;
                                    if (p_Var15 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                      pp_Var16 = p_Var15->vector;
                                      for (; (int)uVar10 < (int)p_Var15->max_length; uVar10 = uVar10 + 1) {
                                        if (p_Var15->max_length <= uVar10) goto code_?;
                                        if ((Behaviour *)*pp_Var16 == (Behaviour *)0x0) goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*pp_Var16,1,(MethodInfo *)0x0);
                                        pp_Var16 = pp_Var16 + 1;
                                      }
                                      pGVar3 = (this->fields).bodyClone;
                                      if (pGVar3 != (GameObject *)0x0) {
                                        pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar3,SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
                                        uVar10 = 0;
                                        if (pOVar9 != (Object__Array *)0x0) {
                                          ppOVar11 = pOVar9->vector;
                                          while( true ) {
                                            if ((int)pOVar9->max_length <= (int)uVar10) break;
                                            if (pOVar9->max_length <= uVar10) goto code_?;
                                            if ((Component *)*ppOVar11 == (Component *)0x0) goto code_?;
                                            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*ppOVar11,(MethodInfo *)0x0);
                                            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
                                            uVar10 = uVar10 + 1;
                                            ppOVar11 = ppOVar11 + 1;
                                          }
                                          pGVar3 = (this->fields).bodyClone;
                                          if (pGVar3 != (GameObject *)0x0) {
                                            this_02 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_1(pGVar3,InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
                                            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
                                            if (bVar4 == 0) {
code_?:
                                              if (cRam_? == '\0') {
                                                func_?();
                                                func_?();
                                                cRam_? = '\x01';
                                              }
                                              pGVar3 = (this->fields).bodyClone;
                                              if (pGVar3 != (GameObject *)0x0) {
                                                pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar3,SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
                                                uVar10 = 0;
                                                if (pOVar9 != (Object__Array *)0x0) {
                                                  ppOVar11 = pOVar9->vector;
                                                  for (; (int)uVar10 < (int)pOVar9->max_length; uVar10 = uVar10 + 1) {
                                                    if (pOVar9->max_length <= uVar10) goto code_?;
                                                    pOVar12 = (Object_1 *)*ppOVar11;
                                                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                      func_?();
                                                    }
                                                    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality(pOVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
                                                    if (bVar4 != 0) {
                                                      if (pOVar9->max_length <= uVar10) goto code_?;
                                                      if ((SkinnedMeshOptimizer *)*ppOVar11 == (SkinnedMeshOptimizer *)0x0) goto code_?;
                                                      SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer((SkinnedMeshOptimizer *)*ppOVar11,(MethodInfo *)0x0);
                                                      if (pOVar9->max_length <= uVar10) goto code_?;
                                                      if ((SkinnedMeshOptimizer *)*ppOVar11 == (SkinnedMeshOptimizer *)0x0) goto code_?;
                                                      SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh((SkinnedMeshOptimizer *)*ppOVar11,(MethodInfo *)0x0);
                                                      if (pOVar9->max_length <= uVar10) goto code_?;
                                                      pOVar12 = (Object_1 *)*ppOVar11;
                                                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar12,(MethodInfo *)0x0);
                                                    }
                                                    ppOVar11 = ppOVar11 + 1;
                                                  }
                                                  pGVar3 = (this->fields).bodyClone;
                                                  if (pGVar3 != (GameObject *)0x0) {
                                                    pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar3,UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
                                                    uStack_13 = 0;
                                                    if (pOVar9 != (Object__Array *)0x0) {
                                                      ppOVar11 = pOVar9->vector;
                                                      for (; (int)uStack_13 < (int)pOVar9->max_length; uStack_13 = uStack_13 + 1) {
                                                        uVar10 = 0;
                                                        iVar14 = 0x10;
                                                        while( true ) {
                                                          if (pOVar9->max_length <= uStack_13) goto code_?;
                                                          if ((Renderer *)*ppOVar11 == (Renderer *)0x0) goto code_?;
                                                          pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*ppOVar11,(MethodInfo *)0x0);
                                                          if (pMVar15 == (Material__Array *)0x0) goto code_?;
                                                          if ((int)pMVar15->max_length <= (int)uVar10) break;
                                                          if (pOVar9->max_length <= uStack_13) goto code_?;
                                                          if ((Renderer *)*ppOVar11 == (Renderer *)0x0) goto code_?;
                                                          pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*ppOVar11,(MethodInfo *)0x0);
                                                          if (pMVar15 == (Material__Array *)0x0) goto code_?;
                                                          if (pMVar15->max_length <= uVar10) goto code_?;
                                                          pMVar16 = *(Material **)((int)pMVar15->vector + iVar14 + -0x10);
                                                          if (pMVar16 == (Material *)0x0) goto code_?;
                                                          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1(pMVar16,StringLiteral__Color,(MethodInfo *)0x0);
                                                          if (bVar4 != 0) {
                                                            if (pOVar9->max_length <= uStack_13) goto code_?;
                                                            if ((Renderer *)*ppOVar11 == (Renderer *)0x0) goto code_?;
                                                            pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*ppOVar11,(MethodInfo *)0x0);
                                                            if (pMVar15 == (Material__Array *)0x0) goto code_?;
                                                            if (pMVar15->max_length <= uVar10) goto code_?;
                                                            pMVar16 = *(Material **)((int)pMVar15->vector + iVar14 + -0x10);
                                                            if (pMVar16 == (Material *)0x0) goto code_?;
                                                            pCVar17 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color((Color *)&stack0xffffffd0,pMVar16,(MethodInfo *)0x0);
                                                            fVar18 = pCVar17->r;
                                                            fVar19 = pCVar17->g;
                                                            fVar20 = pCVar17->b;
                                                            if (pOVar9->max_length <= uStack_13) goto code_?;
                                                            if ((Renderer *)*ppOVar11 == (Renderer *)0x0) goto code_?;
                                                            pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*ppOVar11,(MethodInfo *)0x0);
                                                            if (pMVar15 == (Material__Array *)0x0) goto code_?;
                                                            if (pMVar15->max_length <= uVar10) goto code_?;
                                                            pMVar16 = *(Material **)((int)pMVar15->vector + iVar14 + -0x10);
                                                            if (pMVar16 == (Material *)0x0) goto code_?;
                                                            value_02.g = fVar19;
                                                            value_02.r = fVar18;
                                                            value_02.b = fVar20;
                                                            value_02.a = 1.0;
                                                            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color(pMVar16,value_02,(MethodInfo *)0x0);
                                                          }
                                                          uVar10 = uVar10 + 1;
                                                          iVar14 = iVar14 + 4;
                                                        }
                                                        ppOVar11 = ppOVar11 + 1;
                                                      }
                                                      pGVar3 = (this->fields).bodyClone;
                                                      if (pGVar3 != (GameObject *)0x0) {
                                                        pAVar21 = (Animation *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_1(pGVar3,UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
                                                        (this->fields).goAnimation = pAVar21;
                                                        ppAVar22 = &(this->fields).goAnimation;
                                                        puVar23 = &UNK_?;
                                                        func_?();
                                                        pAVar6 = (this->fields).previewerPrefab;
                                                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                          func_?();
                                                        }
                                                        pAVar6 = (AvatarPreviewer *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pAVar6,AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
                                                        (this->fields).previewer = pAVar6;
                                                        ppAVar24 = &(this->fields).previewer;
                                                        puVar25 = &UNK_?;
                                                        func_?();
                                                        pAVar6 = (this->fields).previewer;
                                                        pMVar26 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
                                                        if (pMVar26 != (MVLocalPlayer *)0x0) {
                                                          pMVar5 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar26,(MethodInfo *)0x0);
                                                          if (pMVar5 != (MVBody *)0x0) {
                                                            layersToRender = (pMVar5->fields)._._._.previewLayerMask;
                                                            pTVar7 = (this->fields).avatarResetToTransform;
                                                            uVar27 = 0xbf00000000000000;
                                                            fVar18 = 100.0;
                                                            fVar19 = 100.0;
                                                            fVar20 = 100.0;
                                                            pMVar26 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
                                                            if (pMVar26 != (MVLocalPlayer *)0x0) {
                                                              pMVar5 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar26,(MethodInfo *)0x0);
                                                              if (pAVar6 != (AvatarPreviewer *)0x0) {
                                                                previewPosition.y = fVar19;
                                                                previewPosition.x = fVar18;
                                                                cameraOffset.z = -1.0;
                                                                cameraOffset.x = (float)(int)uVar27;
                                                                cameraOffset.y = (float)(int)((ulonglong)uVar27 >> 0x20);
                                                                previewPosition.z = fVar20;
                                                                AvatarPreviewer::AvatarPreviewer_Initialize(pAVar6,previewDimensionsX,previewDimensionsY,CameraClearFlags__Enum_Color,layersToRender,cameraOffset,pTVar7,previewPosition,StringLiteral_CurrentSpawnRole_preview,(MVWorldObjectClient *)pMVar5,(this->fields).bodyClone,(Vector3)ZEXT812(0x41700000),(MethodInfo *)0x0);
                                                                pAVar6 = (this->fields).previewer;
                                                                if ((pAVar6 != (AvatarPreviewer *)0x0) && (this_00 = (pAVar6->fields).previewCam, this_00 != (Camera *)0x0)) {
                                                                  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                                                                  if (pTVar7 != (Transform *)0x0) {
                                                                    pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc0,pTVar7,(MethodInfo *)0x0);
                                                                    uVar29 = pVVar28->x;
                                                                    uVar30 = pVVar28->y;
                                                                    value.y = (float)uVar30 + 1.22;
                                                                    value.x = (float)uVar29 + 0.0;
                                                                    value.z = pVVar28->z + 0.0;
                                                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar7,value,(MethodInfo *)0x0);
                                                                    pGVar3 = (this->fields).bodyClone;
                                                                    if (pGVar3 != (GameObject *)0x0) {
                                                                      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                                                                      if (pTVar7 != (Transform *)0x0) {
                                                                        value_00.y = (float)ppAVar22;
                                                                        value_00.x = (float)puVar23;
                                                                        value_00.z = (float)puVar25;
                                                                        value_00.w = (float)ppAVar24;
                                                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar7,value_00,(MethodInfo *)0x0);
                                                                        pGVar3 = (this->fields).bodyClone;
                                                                        layer = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Hidden,(MethodInfo *)0x0);
                                                                        LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar3,layer,(MethodInfo *)0x0);
                                                                        pAVar6 = (this->fields).previewer;
                                                                        if ((pAVar6 != (AvatarPreviewer *)0x0) && (pRVar8 = (this->fields).previewImage, pRVar8 != (RawImage *)0x0)) {
                                                                          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture(pRVar8,(Texture *)(pAVar6->fields).previewTexture,(MethodInfo *)0x0);
                                                                          pGVar3 = (GameObject *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)(this->fields).dropShadowPlane,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                          if (pGVar3 != (GameObject *)0x0) {
                                                                            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                                                                            if (pTVar7 != (Transform *)0x0) {
                                                                              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent(pTVar7,(this->fields).avatarResetToTransform,(MethodInfo *)0x0);
                                                                              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                                                                              pAVar6 = (this->fields).previewer;
                                                                              if ((pAVar6 != (AvatarPreviewer *)0x0) && (pGVar3 = (pAVar6->fields)._PreviewGameObject_k__BackingField, pGVar3 != (GameObject *)0x0)) {
                                                                                this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                                                                                if (this_03 != (Transform *)0x0) {
                                                                                  pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc0,this_03,(MethodInfo *)0x0);
                                                                                  uVar31 = pVVar28->x;
                                                                                  uVar32 = pVVar28->y;
                                                                                  if (pTVar7 != (Transform *)0x0) {
                                                                                    value_01.y = (float)uVar32 - 0.1;
                                                                                    value_01.x = (float)uVar31 + 0.0;
                                                                                    value_01.z = pVVar28->z + 0.0;
                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar7,value_01,(MethodInfo *)0x0);
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
                                              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(this_02,(MethodInfo *)0x0);
                                              if (pGVar3 != (GameObject *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
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
        else {
          pGVar3 = (this->fields).bodyClone;
          if (pGVar3 != (GameObject *)0x0) {
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation((Quaternion *)&stack0xffffffa0,pTVar7,(MethodInfo *)0x0);
              goto code_?;
            }
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
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}

