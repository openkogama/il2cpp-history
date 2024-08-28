
/* Void ChangeAnimation(String) */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_ChangeAnimation
               (CurrentSpawnRolePreviewer *this,String *NewAnimation,MethodInfo *method)

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

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_OnDestroy
               (CurrentSpawnRolePreviewer *this,MethodInfo *method)

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
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).previewer;
    if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pAVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  ppTVar4 = &(this->fields).avatarResetToTransform;
  x = *ppTVar4;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*ppTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)*ppTVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    *ppTVar4 = (Transform *)0x0;
    func_?();
  }
  return;
}


/* Void RemoveSkinnedMeshOptimizers() */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::
     CurrentSpawnRolePreviewer_RemoveSkinnedMeshOptimizers
               (CurrentSpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                       );
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
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
code_?:
          uVar2 = uVar2 + 1;
          ppOVar3 = ppOVar3 + 1;
          goto code_?;
        }
        if (uVar2 < pOVar1->max_length) {
          if ((SkinnedMeshOptimizer *)*ppOVar3 == (SkinnedMeshOptimizer *)0x0)
          goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                    ((SkinnedMeshOptimizer *)*ppOVar3,(MethodInfo *)0x0);
          if (uVar2 < pOVar1->max_length) {
            if ((SkinnedMeshOptimizer *)*ppOVar3 != (SkinnedMeshOptimizer *)0x0) {
              SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                        ((SkinnedMeshOptimizer *)*ppOVar3,(MethodInfo *)0x0);
              if (uVar2 < pOVar1->max_length) {
                pOVar4 = (Object_1 *)*ppOVar3;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          (pOVar4,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer
               (CurrentSpawnRolePreviewer *this,int32_t previewDimensionsX,
               int32_t previewDimensionsY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                   );
    func_?(&
                    InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                   );
    func_?(&
                    AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                   );
    func_?(&
                    AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                   );
    func_?(&
                    AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                   );
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    func_?(&
                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                   );
    func_?(&
                    PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                   );
    func_?(&
                    SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&
                    AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    func_?(&StringLiteral__Color);
    func_?(&StringLiteral_CurrentSpawnRole_preview);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
         SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                   ((SpawnRoleVariable_1_System_Object_ *)(pSVar1->fields).woId,
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,(int32_t)id,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObject *)0x0) {
        bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
           ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__MVAvatarLocal)) goto code_?;
        ppMVar4 = &(this->fields).avatarBody;
        *ppMVar4 = (MVBody *)pMVar2[3].klass;
        func_?();
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        auVar5._4_8_ = 0;
        auVar5._0_4_ = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                  ((Quaternion *)&stack0xffffffc8,(Vector3)(auVar5 << 0x20),(MethodInfo *)0x0);
        ppGVar6 = &(this->fields).bodyClone;
        pGVar7 = *ppGVar6;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           ((Object_1 *)pGVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar8 == 0) {
code_?:
          if (*ppMVar4 != (MVBody *)0x0) {
            pGVar7 = MVBody::MVBody_CreateClone(*ppMVar4,1,1,(MethodInfo *)0x0);
            *ppGVar6 = pGVar7;
            func_?();
            if (*ppMVar4 != (MVBody *)0x0) {
              MVBody::MVBody_set_AccessoryMoveOverride(*ppMVar4,0,(MethodInfo *)0x0);
              ppAVar9 = &(this->fields).previewer;
              pAVar10 = *ppAVar9;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                 ((Object_1 *)pAVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar8 != 0) {
                if (*ppAVar9 == (AvatarPreviewer *)0x0) goto code_?;
                pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)*ppAVar9,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar7,(MethodInfo *)0x0);
              }
              ppTVar11 = &(this->fields).avatarResetToTransform;
              pTVar12 = *ppTVar11;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                 ((Object_1 *)pTVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar8 != 0) {
                if (*ppTVar11 == (Transform *)0x0) goto code_?;
                pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)*ppTVar11,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar7,(MethodInfo *)0x0);
              }
              pGVar7 = (GameObject *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                        (pGVar7,(MethodInfo *)0x0);
              if (pGVar7 != (GameObject *)0x0) {
                pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                *ppTVar11 = pTVar12;
                func_?();
                pRVar13 = (this->fields).previewImage;
                if (pRVar13 != (RawImage *)0x0) {
                  (*(code *)(pRVar13->klass->vtable).set_color.method)
                            (pRVar13,_UNK_?,_UNK_?);
                  if (*ppGVar6 != (GameObject *)0x0) {
                    pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponentsInChildren
                                        (*ppGVar6,
                                         UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                                        );
                    uVar15 = 0;
                    if (pOVar14 != (Object__Array *)0x0) {
                      ppOVar16 = pOVar14->vector;
                      for (; (int)uVar15 < (int)pOVar14->max_length; uVar15 = uVar15 + 1) {
                        if (pOVar14->max_length <= uVar15) goto code_?;
                        if ((Behaviour *)*ppOVar16 == (Behaviour *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)*ppOVar16,0,(MethodInfo *)0x0);
                        ppOVar16 = ppOVar16 + 1;
                      }
                      pGVar7 = (this->fields).bodyClone;
                      if (pGVar7 != (GameObject *)0x0) {
                        pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponentsInChildren
                                            (pGVar7,
                                             PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                            );
                        uVar15 = 0;
                        if (pOVar14 != (Object__Array *)0x0) {
                          ppOVar16 = pOVar14->vector;
                          while( true ) {
                            if ((int)pOVar14->max_length <= (int)uVar15) break;
                            if (pOVar14->max_length <= uVar15) goto code_?;
                            if ((Component *)*ppOVar16 == (Component *)0x0) goto code_?;
                            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)*ppOVar16,(MethodInfo *)0x0);
                            if (pGVar7 == (GameObject *)0x0) goto code_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar7,0,(MethodInfo *)0x0);
                            uVar15 = uVar15 + 1;
                            ppOVar16 = ppOVar16 + 1;
                          }
                          pGVar7 = (this->fields).bodyClone;
                          if (pGVar7 != (GameObject *)0x0) {
                            pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponentsInChildren
                                                (pGVar7,
                                                 AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                                );
                            uVar15 = 0;
                            if (pOVar14 != (Object__Array *)0x0) {
                              ppOVar16 = pOVar14->vector;
                              while( true ) {
                                if ((int)pOVar14->max_length <= (int)uVar15) break;
                                if (pOVar14->max_length <= uVar15) goto code_?;
                                if ((Component *)*ppOVar16 == (Component *)0x0)
                                goto code_?;
                                pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)*ppOVar16,(MethodInfo *)0x0);
                                if (pGVar7 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar7,0,(MethodInfo *)0x0);
                                uVar15 = uVar15 + 1;
                                ppOVar16 = ppOVar16 + 1;
                              }
                              pGVar7 = (this->fields).bodyClone;
                              if (pGVar7 != (GameObject *)0x0) {
                                p_Var22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren_3
                                                    (pGVar7,1,
                                                                                                          
                                                  AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                                  );
                                uVar15 = 0;
                                if (p_Var22 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var32 = p_Var22->vector;
                                  for (; (int)uVar15 < (int)p_Var22->max_length; uVar15 = uVar15 + 1
                                      ) {
                                    if (p_Var22->max_length <= uVar15) goto code_?;
                                    if ((Behaviour *)*pp_Var32 == (Behaviour *)0x0)
                                    goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                    Behaviour_set_enabled
                                              ((Behaviour *)*pp_Var32,1,(MethodInfo *)0x0);
                                    pp_Var32 = pp_Var32 + 1;
                                  }
                                  pGVar7 = (this->fields).bodyClone;
                                  if (pGVar7 != (GameObject *)0x0) {
                                    p_Var22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren_3
                                                        (pGVar7,1,
                                                                                                                  
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                                    uVar15 = 0;
                                    if (p_Var22 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                      pp_Var32 = p_Var22->vector;
                                      for (; (int)uVar15 < (int)p_Var22->max_length;
                                          uVar15 = uVar15 + 1) {
                                        if (p_Var22->max_length <= uVar15) goto code_?;
                                        if ((Behaviour *)*pp_Var32 == (Behaviour *)0x0)
                                        goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                        Behaviour_set_enabled
                                                  ((Behaviour *)*pp_Var32,1,(MethodInfo *)0x0);
                                        pp_Var32 = pp_Var32 + 1;
                                      }
                                      pGVar7 = (this->fields).bodyClone;
                                      if (pGVar7 != (GameObject *)0x0) {
                                        pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponentsInChildren
                                                            (pGVar7,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                        uVar15 = 0;
                                        if (pOVar14 != (Object__Array *)0x0) {
                                          ppOVar16 = pOVar14->vector;
                                          while( true ) {
                                            if ((int)pOVar14->max_length <= (int)uVar15) break;
                                            if (pOVar14->max_length <= uVar15)
                                            goto code_?;
                                            if ((Component *)*ppOVar16 == (Component *)0x0)
                                            goto code_?;
                                            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_gameObject
                                                                ((Component *)*ppOVar16,
                                                                 (MethodInfo *)0x0);
                                            if ((TypeInfo__UnityEngine__Object->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            UnityEngine.CoreModule.dll::UnityEngine::Object::
                                            Object_1_Destroy_1((Object_1 *)pGVar7,(MethodInfo *)0x0
                                                              );
                                            uVar15 = uVar15 + 1;
                                            ppOVar16 = ppOVar16 + 1;
                                          }
                                          pGVar7 = (this->fields).bodyClone;
                                          if (pGVar7 != (GameObject *)0x0) {
                                            this_02 = (Component *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::
                                                      GameObject_GetComponentInChildren_1
                                                                (pGVar7,
                                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                  );
                                            if ((TypeInfo__UnityEngine__Object->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object
                                                     ::Object_1_op_Inequality
                                                               ((Object_1 *)this_02,(Object_1 *)0x0,
                                                                (MethodInfo *)0x0);
                                            if (bVar8 == 0) {
code_?:
                                              if (cRam_? == '\0') {
                                                func_?();
                                                func_?();
                                                cRam_? = '\x01';
                                              }
                                              pGVar7 = (this->fields).bodyClone;
                                              if (pGVar7 != (GameObject *)0x0) {
                                                pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::
                                                          GameObject_GetComponentsInChildren
                                                                    (pGVar7,
                                                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                                  );
                                                uVar15 = 0;
                                                if (pOVar14 != (Object__Array *)0x0) {
                                                  ppOVar16 = pOVar14->vector;
                                                  for (; (int)uVar15 < (int)pOVar14->max_length;
                                                      uVar15 = uVar15 + 1) {
                                                    if (pOVar14->max_length <= uVar15)
                                                    goto code_?;
                                                    pOVar17 = (Object_1 *)*ppOVar16;
                                                    if ((TypeInfo__UnityEngine__Object->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?();
                                                    }
                                                    bVar8 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Object::Object_1_op_Inequality
                                                                       (pOVar17,(Object_1 *)0x0,
                                                                        (MethodInfo *)0x0);
                                                    if (bVar8 != 0) {
                                                      if (pOVar14->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((SkinnedMeshOptimizer *)*ppOVar16 ==
                                                          (SkinnedMeshOptimizer *)0x0)
                                                      goto code_?;
                                                      SkinnedMeshOptimizer::
                                                      SkinnedMeshOptimizer_DisableOptimizer
                                                                ((SkinnedMeshOptimizer *)*ppOVar16,
                                                                 (MethodInfo *)0x0);
                                                      if (pOVar14->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((SkinnedMeshOptimizer *)*ppOVar16 ==
                                                          (SkinnedMeshOptimizer *)0x0)
                                                      goto code_?;
                                                      SkinnedMeshOptimizer::
                                                      SkinnedMeshOptimizer_TurnOffMesh
                                                                ((SkinnedMeshOptimizer *)*ppOVar16,
                                                                 (MethodInfo *)0x0);
                                                      if (pOVar14->max_length <= uVar15)
                                                      goto code_?;
                                                      pOVar17 = (Object_1 *)*ppOVar16;
                                                      if ((TypeInfo__UnityEngine__Object->_1).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Object::Object_1_Destroy_1
                                                                (pOVar17,(MethodInfo *)0x0);
                                                    }
                                                    ppOVar16 = ppOVar16 + 1;
                                                  }
                                                  pGVar7 = (this->fields).bodyClone;
                                                  if (pGVar7 != (GameObject *)0x0) {
                                                    pOVar14 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponentsInChildren
                                                                        (pGVar7,
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                                  uStack_18 = 0;
                                                  if (pOVar14 != (Object__Array *)0x0) {
                                                    ppOVar16 = pOVar14->vector;
                                                    for (; (int)uStack_18 < (int)pOVar14->max_length
                                                        ; uStack_18 = uStack_18 + 1) {
                                                      uVar15 = 0;
                                                      iVar19 = 0x10;
                                                      while( true ) {
                                                        if (pOVar14->max_length <= uStack_18)
                                                        goto code_?;
                                                        if ((Renderer *)*ppOVar16 == (Renderer *)0x0
                                                           ) goto code_?;
                                                        pMVar20 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Renderer::
                                                                  Renderer_get_materials
                                                                            ((Renderer *)*ppOVar16,
                                                                             (MethodInfo *)0x0);
                                                        if (pMVar20 == (Material__Array *)0x0)
                                                        goto code_?;
                                                        if ((int)pMVar20->max_length <= (int)uVar15)
                                                        break;
                                                        if (pOVar14->max_length <= uStack_18)
                                                        goto code_?;
                                                        if ((Renderer *)*ppOVar16 == (Renderer *)0x0
                                                           ) goto code_?;
                                                        pMVar20 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Renderer::
                                                                  Renderer_get_materials
                                                                            ((Renderer *)*ppOVar16,
                                                                             (MethodInfo *)0x0);
                                                        if (pMVar20 == (Material__Array *)0x0)
                                                        goto code_?;
                                                        if (pMVar20->max_length <= uVar15)
                                                        goto code_?;
                                                        pMVar21 = *(Material **)
                                                                   ((int)pMVar20->vector +
                                                                   iVar19 + -0x10);
                                                        if (pMVar21 == (Material *)0x0)
                                                        goto code_?;
                                                        bVar8 = UnityEngine.CoreModule.dll::
                                                                 UnityEngine::Material::
                                                                 Material_HasProperty_1
                                                                           (pMVar21,
                                                  StringLiteral__Color,(MethodInfo *)0x0);
                                                  if (bVar8 != 0) {
                                                    if (pOVar14->max_length <= uStack_18)
                                                    goto code_?;
                                                    if ((Renderer *)*ppOVar16 == (Renderer *)0x0)
                                                    goto code_?;
                                                    pMVar20 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Renderer::
                                                              Renderer_get_materials
                                                                        ((Renderer *)*ppOVar16,
                                                                         (MethodInfo *)0x0);
                                                    if (pMVar20 == (Material__Array *)0x0)
                                                    goto code_?;
                                                    if (pMVar20->max_length <= uVar15)
                                                    goto code_?;
                                                    pMVar21 = *(Material **)
                                                               ((int)pMVar20->vector +
                                                               iVar19 + -0x10);
                                                    if (pMVar21 == (Material *)0x0)
                                                    goto code_?;
                                                    pCVar22 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Material::
                                                              Material_get_color((Color *)&
                                                  stack0xffffffc8,pMVar21,(MethodInfo *)0x0);
                                                  fVar23 = pCVar22->r;
                                                  fVar24 = pCVar22->g;
                                                  if (pOVar14->max_length <= uStack_18)
                                                  goto code_?;
                                                  if ((Renderer *)*ppOVar16 == (Renderer *)0x0)
                                                  goto code_?;
                                                  puVar25 = &UNK_?;
                                                  pMVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)*ppOVar16,
                                                                       (MethodInfo *)0x0);
                                                  if (pMVar20 == (Material__Array *)0x0)
                                                  goto code_?;
                                                  if (pMVar20->max_length <= uVar15)
                                                  goto code_?;
                                                  pMVar21 = *(Material **)
                                                             ((int)pMVar20->vector + iVar19 + -0x10)
                                                  ;
                                                  if (pMVar21 == (Material *)0x0)
                                                  goto code_?;
                                                  value_02.g = fVar24;
                                                  value_02.r = fVar23;
                                                  value_02.b = (float)puVar25;
                                                  value_02.a = 1.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Material
                                                  ::Material_set_color
                                                            (pMVar21,value_02,(MethodInfo *)0x0);
                                                  }
                                                  uVar15 = uVar15 + 1;
                                                  iVar19 = iVar19 + 4;
                                                  }
                                                  ppOVar16 = ppOVar16 + 1;
                                                  }
                                                  pGVar7 = (this->fields).bodyClone;
                                                  if (pGVar7 != (GameObject *)0x0) {
                                                    pAVar26 = (Animation *)
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponentInChildren_1
                                                                        (pGVar7,
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                                  ppAVar27 = &(this->fields).goAnimation;
                                                  *ppAVar27 = pAVar26;
                                                  puVar25 = &UNK_?;
                                                  func_?();
                                                  pAVar10 = (this->fields).previewerPrefab;
                                                  if ((TypeInfo__UnityEngine__Object->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  pAVar10 = (AvatarPreviewer *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Object::Object_1_Instantiate_4
                                                                      ((Object *)pAVar10,
                                                                                                                                              
                                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                                  );
                                                  ppAVar28 = &(this->fields).previewer;
                                                  *ppAVar28 = pAVar10;
                                                  puVar29 = &UNK_?;
                                                  ppAVar30 = ppAVar28;
                                                  func_?();
                                                  pAVar10 = *ppAVar28;
                                                  pMVar31 = MVGameControllerBase::
                                                            MVGameControllerBase_get_LocalPlayer
                                                                      ((MethodInfo *)0x0);
                                                  if (pMVar31 != (MVLocalPlayer *)0x0) {
                                                    pMVar32 = MVLocalPlayer::MVLocalPlayer_get_Body
                                                                        (pMVar31,(MethodInfo *)0x0);
                                                    if (pMVar32 != (MVBody *)0x0) {
                                                      layersToRender =
                                                           (pMVar32->fields)._._._.previewLayerMask;
                                                      uVar33 = 0xbf00000000000000;
                                                      pTVar12 = *ppTVar11;
                                                      fVar23 = 100.0;
                                                      fVar24 = 100.0;
                                                      fVar34 = 100.0;
                                                      pMVar31 = MVGameControllerBase::
                                                                MVGameControllerBase_get_LocalPlayer
                                                                          ((MethodInfo *)0x0);
                                                      if (pMVar31 != (MVLocalPlayer *)0x0) {
                                                        pMVar32 = MVLocalPlayer::
                                                                  MVLocalPlayer_get_Body
                                                                            (pMVar31,(MethodInfo *)
                                                                                     0x0);
                                                        if (pAVar10 != (AvatarPreviewer *)0x0) {
                                                          previewPosition.y = fVar24;
                                                          previewPosition.x = fVar23;
                                                          cameraOffset.z = -1.0;
                                                          cameraOffset.x = (float)(int)uVar33;
                                                          cameraOffset.y =
                                                               (float)(int)((ulonglong)uVar33 >>
                                                                           0x20);
                                                          previewPosition.z = fVar34;
                                                          AvatarPreviewer::
                                                          AvatarPreviewer_Initialize
                                                                    (pAVar10,previewDimensionsX,
                                                                     previewDimensionsY,
                                                                     CameraClearFlags__Enum_Color,
                                                                     layersToRender,cameraOffset,
                                                                     pTVar12,previewPosition,
                                                                                                                                          
                                                  StringLiteral_CurrentSpawnRole_preview,
                                                  (MVWorldObjectClient *)pMVar32,
                                                  (this->fields).bodyClone,
                                                  (Vector3)ZEXT812(0x41700000),(MethodInfo *)0x0);
                                                  if ((*ppAVar9 != (AvatarPreviewer *)0x0) &&
                                                     (this_00 = ((*ppAVar9)->fields).previewCam,
                                                     this_00 != (Camera *)0x0)) {
                                                    pTVar12 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_transform
                                                                        ((Component *)this_00,
                                                                         (MethodInfo *)0x0);
                                                    if (pTVar12 != (Transform *)0x0) {
                                                      pVVar35 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_position
                                                                          ((Vector3 *)
                                                                           &stack0xffffffb8,pTVar12,
                                                                           (MethodInfo *)0x0);
                                                      uVar36 = pVVar35->x;
                                                      uVar37 = pVVar35->y;
                                                      value.y = (float)uVar37 + _UNK_?;
                                                      value.x = (float)uVar36 + 0.0;
                                                      value.z = pVVar35->z + 0.0;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar12,value,(MethodInfo *)0x0);
                                                      pGVar7 = (this->fields).bodyClone;
                                                      if (pGVar7 != (GameObject *)0x0) {
                                                        pTVar12 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar7,(MethodInfo *)
                                                                                     0x0);
                                                        if (pTVar12 != (Transform *)0x0) {
                                                          value_00.y = (float)ppAVar27;
                                                          value_00.x = (float)puVar25;
                                                          value_00.z = (float)puVar29;
                                                          value_00.w = (float)ppAVar30;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_rotation
                                                                    (pTVar12,value_00,
                                                                     (MethodInfo *)0x0);
                                                          pGVar7 = (this->fields).bodyClone;
                                                          layer = LayerUtil::
                                                                  LayerUtil_GetLayerNumber
                                                                            (LayerFlags__Enum_Hidden
                                                                             ,(MethodInfo *)0x0);
                                                          LayerUtil::LayerUtil_SetLayerRecursively_4
                                                                    (pGVar7,layer,(MethodInfo *)0x0
                                                                    );
                                                          pAVar10 = (this->fields).previewer;
                                                          if ((pAVar10 != (AvatarPreviewer *)0x0) &&
                                                             (pRVar13 = (this->fields).previewImage,
                                                             pRVar13 != (RawImage *)0x0)) {
                                                            UnityEngine.UI.dll::UnityEngine::UI::
                                                            RawImage::RawImage_set_texture
                                                                      (pRVar13,(Texture *)
                                                                              (pAVar10->fields).
                                                                              previewTexture,
                                                                       (MethodInfo *)0x0);
                                                            pGVar7 = (GameObject *)
                                                                      UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Object::
                                                                      Object_1_Instantiate_4
                                                                                ((Object *)
                                                                                 (this->fields).
                                                                                 dropShadowPlane,
                                                                                                                                                                  
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  if (pGVar7 != (GameObject *)0x0) {
                                                    pTVar12 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar7,(MethodInfo *)0x0);
                                                    if (pTVar12 != (Transform *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_SetParent
                                                                (pTVar12,(this->fields).
                                                                         avatarResetToTransform,
                                                                 (MethodInfo *)0x0);
                                                      pTVar12 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar7,(MethodInfo *)0x0
                                                                          );
                                                      pAVar10 = (this->fields).previewer;
                                                      if ((pAVar10 != (AvatarPreviewer *)0x0) &&
                                                         (pGVar7 = (pAVar10->fields).
                                                                                                                                        
                                                  _PreviewGameObject_k__BackingField,
                                                  pGVar7 != (GameObject *)0x0)) {
                                                    this_03 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar7,(MethodInfo *)0x0);
                                                    if (this_03 != (Transform *)0x0) {
                                                      pVVar35 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_position
                                                                          ((Vector3 *)
                                                                           &stack0xffffffb8,this_03,
                                                                           (MethodInfo *)0x0);
                                                      uVar38 = pVVar35->x;
                                                      uVar39 = pVVar35->y;
                                                      if (pTVar12 != (Transform *)0x0) {
                                                        value_01.y = (float)uVar39 - _UNK_?;
                                                        value_01.x = (float)uVar38 + 0.0;
                                                        value_01.z = pVVar35->z + 0.0;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_set_position
                                                                  (pTVar12,value_01,
                                                                   (MethodInfo *)0x0);
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
                                              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_get_gameObject
                                                                  (this_02,(MethodInfo *)0x0);
                                              if (pGVar7 != (GameObject *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_SetActive(pGVar7,0,(MethodInfo *)0x0);
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
        else if (*ppGVar6 != (GameObject *)0x0) {
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (*ppGVar6,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                      ((Quaternion *)&stack0xffffff90,pTVar12,(MethodInfo *)0x0);
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
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}

