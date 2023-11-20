
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
  if ((this->fields).avatarBody != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone((this->fields).avatarBody,(MethodInfo *)0x0);
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
  pTVar4 = (this->fields).avatarResetToTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar4 = (this->fields).avatarResetToTransform;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    (this->fields).avatarResetToTransform = (Transform *)0x0;
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
        if (((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment)
           || ((MVAvatarLocal__Class *)
               (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1]
               != TypeInfo__MVAvatarLocal)) goto code_?;
        (this->fields).avatarBody = (MVBody *)pMVar2[3].klass;
        func_?();
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        auVar3._4_8_ = 0;
        auVar3._0_4_ = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                  ((Quaternion *)&stack0xffffffd0,(Vector3)(auVar3 << 0x20),(MethodInfo *)0x0);
        pGVar4 = (this->fields).bodyClone;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           ((Object_1 *)pGVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
code_?:
          pMVar6 = (this->fields).avatarBody;
          if (pMVar6 != (MVBody *)0x0) {
            pGVar4 = MVBody::MVBody_CreateClone(pMVar6,1,1,(MethodInfo *)0x0);
            (this->fields).bodyClone = pGVar4;
            func_?();
            pMVar6 = (this->fields).avatarBody;
            if (pMVar6 != (MVBody *)0x0) {
              MVBody::MVBody_set_AccessoryMoveOverride(pMVar6,0,(MethodInfo *)0x0);
              pAVar7 = (this->fields).previewer;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                 ((Object_1 *)pAVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                pAVar7 = (this->fields).previewer;
                if (pAVar7 == (AvatarPreviewer *)0x0) goto code_?;
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pAVar7,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar4,(MethodInfo *)0x0);
              }
              pTVar8 = (this->fields).avatarResetToTransform;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                 ((Object_1 *)pTVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                pTVar8 = (this->fields).avatarResetToTransform;
                if (pTVar8 == (Transform *)0x0) goto code_?;
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pTVar8,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar4,(MethodInfo *)0x0);
              }
              pGVar4 = (GameObject *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                        (pGVar4,(MethodInfo *)0x0);
              if (pGVar4 != (GameObject *)0x0) {
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
                (this->fields).avatarResetToTransform = pTVar8;
                func_?();
                pRVar9 = (this->fields).previewImage;
                if (pRVar9 != (RawImage *)0x0) {
                  (*(code *)(pRVar9->klass->vtable).set_color.method)
                            (pRVar9,_UNK_?,_UNK_?);
                  pGVar4 = (this->fields).bodyClone;
                  if (pGVar4 != (GameObject *)0x0) {
                    pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponentsInChildren
                                        (pGVar4,
                                         UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                                        );
                    uVar11 = 0;
                    if (pOVar10 != (Object__Array *)0x0) {
                      ppOVar12 = pOVar10->vector;
                      for (; (int)uVar11 < (int)pOVar10->max_length; uVar11 = uVar11 + 1) {
                        if (pOVar10->max_length <= uVar11) goto code_?;
                        if ((Behaviour *)*ppOVar12 == (Behaviour *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)*ppOVar12,0,(MethodInfo *)0x0);
                        ppOVar12 = ppOVar12 + 1;
                      }
                      pGVar4 = (this->fields).bodyClone;
                      if (pGVar4 != (GameObject *)0x0) {
                        pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponentsInChildren
                                            (pGVar4,
                                             PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                            );
                        uVar11 = 0;
                        if (pOVar10 != (Object__Array *)0x0) {
                          ppOVar12 = pOVar10->vector;
                          while( true ) {
                            if ((int)pOVar10->max_length <= (int)uVar11) break;
                            if (pOVar10->max_length <= uVar11) goto code_?;
                            if ((Component *)*ppOVar12 == (Component *)0x0) goto code_?;
                            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)*ppOVar12,(MethodInfo *)0x0);
                            if (pGVar4 == (GameObject *)0x0) goto code_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                            uVar11 = uVar11 + 1;
                            ppOVar12 = ppOVar12 + 1;
                          }
                          pGVar4 = (this->fields).bodyClone;
                          if (pGVar4 != (GameObject *)0x0) {
                            pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponentsInChildren
                                                (pGVar4,
                                                 AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                                );
                            uVar11 = 0;
                            if (pOVar10 != (Object__Array *)0x0) {
                              ppOVar12 = pOVar10->vector;
                              while( true ) {
                                if ((int)pOVar10->max_length <= (int)uVar11) break;
                                if (pOVar10->max_length <= uVar11) goto code_?;
                                if ((Component *)*ppOVar12 == (Component *)0x0)
                                goto code_?;
                                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)*ppOVar12,(MethodInfo *)0x0);
                                if (pGVar4 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                                uVar11 = uVar11 + 1;
                                ppOVar12 = ppOVar12 + 1;
                              }
                              pGVar4 = (this->fields).bodyClone;
                              if (pGVar4 != (GameObject *)0x0) {
                                p_Var16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren_3
                                                    (pGVar4,1,
                                                                                                          
                                                  AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                                  );
                                uVar11 = 0;
                                if (p_Var16 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var17 = p_Var16->vector;
                                  for (; (int)uVar11 < (int)p_Var16->max_length; uVar11 = uVar11 + 1
                                      ) {
                                    if (p_Var16->max_length <= uVar11) goto code_?;
                                    if ((Behaviour *)*pp_Var17 == (Behaviour *)0x0)
                                    goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                    Behaviour_set_enabled
                                              ((Behaviour *)*pp_Var17,1,(MethodInfo *)0x0);
                                    pp_Var17 = pp_Var17 + 1;
                                  }
                                  pGVar4 = (this->fields).bodyClone;
                                  if (pGVar4 != (GameObject *)0x0) {
                                    p_Var16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren_3
                                                        (pGVar4,1,
                                                                                                                  
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                                    uVar11 = 0;
                                    if (p_Var16 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                      pp_Var17 = p_Var16->vector;
                                      for (; (int)uVar11 < (int)p_Var16->max_length;
                                          uVar11 = uVar11 + 1) {
                                        if (p_Var16->max_length <= uVar11) goto code_?;
                                        if ((Behaviour *)*pp_Var17 == (Behaviour *)0x0)
                                        goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                        Behaviour_set_enabled
                                                  ((Behaviour *)*pp_Var17,1,(MethodInfo *)0x0);
                                        pp_Var17 = pp_Var17 + 1;
                                      }
                                      pGVar4 = (this->fields).bodyClone;
                                      if (pGVar4 != (GameObject *)0x0) {
                                        pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponentsInChildren
                                                            (pGVar4,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                        uVar11 = 0;
                                        if (pOVar10 != (Object__Array *)0x0) {
                                          ppOVar12 = pOVar10->vector;
                                          while( true ) {
                                            if ((int)pOVar10->max_length <= (int)uVar11) break;
                                            if (pOVar10->max_length <= uVar11)
                                            goto code_?;
                                            if ((Component *)*ppOVar12 == (Component *)0x0)
                                            goto code_?;
                                            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_gameObject
                                                                ((Component *)*ppOVar12,
                                                                 (MethodInfo *)0x0);
                                            if ((TypeInfo__UnityEngine__Object->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            UnityEngine.CoreModule.dll::UnityEngine::Object::
                                            Object_1_Destroy_1((Object_1 *)pGVar4,(MethodInfo *)0x0
                                                              );
                                            uVar11 = uVar11 + 1;
                                            ppOVar12 = ppOVar12 + 1;
                                          }
                                          pGVar4 = (this->fields).bodyClone;
                                          if (pGVar4 != (GameObject *)0x0) {
                                            this_02 = (Component *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::
                                                      GameObject_GetComponentInChildren_1
                                                                (pGVar4,
                                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                  );
                                            if ((TypeInfo__UnityEngine__Object->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object
                                                     ::Object_1_op_Inequality
                                                               ((Object_1 *)this_02,(Object_1 *)0x0,
                                                                (MethodInfo *)0x0);
                                            if (bVar5 == 0) {
code_?:
                                              if (cRam_? == '\0') {
                                                func_?();
                                                func_?();
                                                cRam_? = '\x01';
                                              }
                                              pGVar4 = (this->fields).bodyClone;
                                              if (pGVar4 != (GameObject *)0x0) {
                                                pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::
                                                          GameObject_GetComponentsInChildren
                                                                    (pGVar4,
                                                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                                  );
                                                uVar11 = 0;
                                                if (pOVar10 != (Object__Array *)0x0) {
                                                  ppOVar12 = pOVar10->vector;
                                                  for (; (int)uVar11 < (int)pOVar10->max_length;
                                                      uVar11 = uVar11 + 1) {
                                                    if (pOVar10->max_length <= uVar11)
                                                    goto code_?;
                                                    pOVar13 = (Object_1 *)*ppOVar12;
                                                    if ((TypeInfo__UnityEngine__Object->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?();
                                                    }
                                                    bVar5 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Object::Object_1_op_Inequality
                                                                       (pOVar13,(Object_1 *)0x0,
                                                                        (MethodInfo *)0x0);
                                                    if (bVar5 != 0) {
                                                      if (pOVar10->max_length <= uVar11)
                                                      goto code_?;
                                                      if ((SkinnedMeshOptimizer *)*ppOVar12 ==
                                                          (SkinnedMeshOptimizer *)0x0)
                                                      goto code_?;
                                                      SkinnedMeshOptimizer::
                                                      SkinnedMeshOptimizer_DisableOptimizer
                                                                ((SkinnedMeshOptimizer *)*ppOVar12,
                                                                 (MethodInfo *)0x0);
                                                      if (pOVar10->max_length <= uVar11)
                                                      goto code_?;
                                                      if ((SkinnedMeshOptimizer *)*ppOVar12 ==
                                                          (SkinnedMeshOptimizer *)0x0)
                                                      goto code_?;
                                                      SkinnedMeshOptimizer::
                                                      SkinnedMeshOptimizer_TurnOffMesh
                                                                ((SkinnedMeshOptimizer *)*ppOVar12,
                                                                 (MethodInfo *)0x0);
                                                      if (pOVar10->max_length <= uVar11)
                                                      goto code_?;
                                                      pOVar13 = (Object_1 *)*ppOVar12;
                                                      if ((TypeInfo__UnityEngine__Object->_1).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Object::Object_1_Destroy_1
                                                                (pOVar13,(MethodInfo *)0x0);
                                                    }
                                                    ppOVar12 = ppOVar12 + 1;
                                                  }
                                                  pGVar4 = (this->fields).bodyClone;
                                                  if (pGVar4 != (GameObject *)0x0) {
                                                    pOVar10 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponentsInChildren
                                                                        (pGVar4,
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                                  uStack_14 = 0;
                                                  if (pOVar10 != (Object__Array *)0x0) {
                                                    ppOVar12 = pOVar10->vector;
                                                    for (; (int)uStack_14 < (int)pOVar10->max_length
                                                        ; uStack_14 = uStack_14 + 1) {
                                                      uVar11 = 0;
                                                      iVar15 = 0x10;
                                                      while( true ) {
                                                        if (pOVar10->max_length <= uStack_14)
                                                        goto code_?;
                                                        if ((Renderer *)*ppOVar12 == (Renderer *)0x0
                                                           ) goto code_?;
                                                        pMVar16 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Renderer::
                                                                  Renderer_get_materials
                                                                            ((Renderer *)*ppOVar12,
                                                                             (MethodInfo *)0x0);
                                                        if (pMVar16 == (Material__Array *)0x0)
                                                        goto code_?;
                                                        if ((int)pMVar16->max_length <= (int)uVar11)
                                                        break;
                                                        if (pOVar10->max_length <= uStack_14)
                                                        goto code_?;
                                                        if ((Renderer *)*ppOVar12 == (Renderer *)0x0
                                                           ) goto code_?;
                                                        pMVar16 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Renderer::
                                                                  Renderer_get_materials
                                                                            ((Renderer *)*ppOVar12,
                                                                             (MethodInfo *)0x0);
                                                        if (pMVar16 == (Material__Array *)0x0)
                                                        goto code_?;
                                                        if (pMVar16->max_length <= uVar11)
                                                        goto code_?;
                                                        pMVar17 = *(Material **)
                                                                  ((int)pMVar16->vector +
                                                                  iVar15 + -0x10);
                                                        if (pMVar17 == (Material *)0x0)
                                                        goto code_?;
                                                        bVar5 = UnityEngine.CoreModule.dll::
                                                                 UnityEngine::Material::
                                                                 Material_HasProperty_1
                                                                           (pMVar17,
                                                  StringLiteral__Color,(MethodInfo *)0x0);
                                                  if (bVar5 != 0) {
                                                    if (pOVar10->max_length <= uStack_14)
                                                    goto code_?;
                                                    if ((Renderer *)*ppOVar12 == (Renderer *)0x0)
                                                    goto code_?;
                                                    pMVar16 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Renderer::
                                                              Renderer_get_materials
                                                                        ((Renderer *)*ppOVar12,
                                                                         (MethodInfo *)0x0);
                                                    if (pMVar16 == (Material__Array *)0x0)
                                                    goto code_?;
                                                    if (pMVar16->max_length <= uVar11)
                                                    goto code_?;
                                                    pMVar17 = *(Material **)
                                                              ((int)pMVar16->vector + iVar15 + -0x10
                                                              );
                                                    if (pMVar17 == (Material *)0x0)
                                                    goto code_?;
                                                    pCVar18 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Material::
                                                              Material_get_color((Color *)&
                                                  stack0xffffffd0,pMVar17,(MethodInfo *)0x0);
                                                  fVar19 = pCVar18->r;
                                                  fVar20 = pCVar18->g;
                                                  fVar21 = pCVar18->b;
                                                  if (pOVar10->max_length <= uStack_14)
                                                  goto code_?;
                                                  if ((Renderer *)*ppOVar12 == (Renderer *)0x0)
                                                  goto code_?;
                                                  pMVar16 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)*ppOVar12,
                                                                       (MethodInfo *)0x0);
                                                  if (pMVar16 == (Material__Array *)0x0)
                                                  goto code_?;
                                                  if (pMVar16->max_length <= uVar11)
                                                  goto code_?;
                                                  pMVar17 = *(Material **)
                                                            ((int)pMVar16->vector + iVar15 + -0x10);
                                                  if (pMVar17 == (Material *)0x0)
                                                  goto code_?;
                                                  value_02.g = fVar20;
                                                  value_02.r = fVar19;
                                                  value_02.b = fVar21;
                                                  value_02.a = 1.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Material
                                                  ::Material_set_color
                                                            (pMVar17,value_02,(MethodInfo *)0x0);
                                                  }
                                                  uVar11 = uVar11 + 1;
                                                  iVar15 = iVar15 + 4;
                                                  }
                                                  ppOVar12 = ppOVar12 + 1;
                                                  }
                                                  pGVar4 = (this->fields).bodyClone;
                                                  if (pGVar4 != (GameObject *)0x0) {
                                                    pAVar22 = (Animation *)
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponentInChildren_1
                                                                        (pGVar4,
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                                  (this->fields).goAnimation = pAVar22;
                                                  ppAVar23 = &(this->fields).goAnimation;
                                                  puVar24 = &UNK_?;
                                                  func_?();
                                                  pAVar7 = (this->fields).previewerPrefab;
                                                  if ((TypeInfo__UnityEngine__Object->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  pAVar7 = (AvatarPreviewer *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Object::Object_1_Instantiate_4
                                                                      ((Object *)pAVar7,
                                                                                                                                              
                                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                                  );
                                                  (this->fields).previewer = pAVar7;
                                                  ppAVar25 = &(this->fields).previewer;
                                                  puVar26 = &UNK_?;
                                                  func_?();
                                                  pAVar7 = (this->fields).previewer;
                                                  pMVar27 = MVGameControllerBase::
                                                            MVGameControllerBase_get_LocalPlayer
                                                                      ((MethodInfo *)0x0);
                                                  if (pMVar27 != (MVLocalPlayer *)0x0) {
                                                    pMVar6 = MVLocalPlayer::MVLocalPlayer_get_Body
                                                                        (pMVar27,(MethodInfo *)0x0);
                                                    if (pMVar6 != (MVBody *)0x0) {
                                                      layersToRender =
                                                           (pMVar6->fields)._._._.previewLayerMask;
                                                      pTVar8 = (this->fields).
                                                                avatarResetToTransform;
                                                      uVar28 = 0xbf00000000000000;
                                                      fVar19 = 100.0;
                                                      fVar20 = 100.0;
                                                      fVar21 = 100.0;
                                                      pMVar27 = MVGameControllerBase::
                                                                MVGameControllerBase_get_LocalPlayer
                                                                          ((MethodInfo *)0x0);
                                                      if (pMVar27 != (MVLocalPlayer *)0x0) {
                                                        pMVar6 = MVLocalPlayer::
                                                                  MVLocalPlayer_get_Body
                                                                            (pMVar27,(MethodInfo *)
                                                                                     0x0);
                                                        if (pAVar7 != (AvatarPreviewer *)0x0) {
                                                          previewPosition.y = fVar20;
                                                          previewPosition.x = fVar19;
                                                          cameraOffset.z = -1.0;
                                                          cameraOffset.x = (float)(int)uVar28;
                                                          cameraOffset.y =
                                                               (float)(int)((ulonglong)uVar28 >>
                                                                           0x20);
                                                          previewPosition.z = fVar21;
                                                          AvatarPreviewer::
                                                          AvatarPreviewer_Initialize
                                                                    (pAVar7,previewDimensionsX,
                                                                     previewDimensionsY,
                                                                     CameraClearFlags__Enum_Color,
                                                                     layersToRender,cameraOffset,
                                                                     pTVar8,previewPosition,
                                                                                                                                          
                                                  StringLiteral_CurrentSpawnRole_preview,
                                                  (MVWorldObjectClient *)pMVar6,
                                                  (this->fields).bodyClone,
                                                  (Vector3)ZEXT812(0x41700000),(MethodInfo *)0x0);
                                                  pAVar7 = (this->fields).previewer;
                                                  if ((pAVar7 != (AvatarPreviewer *)0x0) &&
                                                     (this_00 = (pAVar7->fields).previewCam,
                                                     this_00 != (Camera *)0x0)) {
                                                    pTVar8 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_transform
                                                                        ((Component *)this_00,
                                                                         (MethodInfo *)0x0);
                                                    if (pTVar8 != (Transform *)0x0) {
                                                      pVVar29 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_position
                                                                          ((Vector3 *)
                                                                           &stack0xffffffc0,pTVar8,
                                                                           (MethodInfo *)0x0);
                                                      uVar30 = pVVar29->x;
                                                      uVar31 = pVVar29->y;
                                                      value.y = (float)uVar31 + _UNK_?;
                                                      value.x = (float)uVar30 + 0.0;
                                                      value.z = pVVar29->z + 0.0;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar8,value,(MethodInfo *)0x0);
                                                      pGVar4 = (this->fields).bodyClone;
                                                      if (pGVar4 != (GameObject *)0x0) {
                                                        pTVar8 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar4,(MethodInfo *)
                                                                                     0x0);
                                                        if (pTVar8 != (Transform *)0x0) {
                                                          value_00.y = (float)ppAVar23;
                                                          value_00.x = (float)puVar24;
                                                          value_00.z = (float)puVar26;
                                                          value_00.w = (float)ppAVar25;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_rotation
                                                                    (pTVar8,value_00,
                                                                     (MethodInfo *)0x0);
                                                          pGVar4 = (this->fields).bodyClone;
                                                          layer = LayerUtil::
                                                                  LayerUtil_GetLayerNumber
                                                                            (LayerFlags__Enum_Hidden
                                                                             ,(MethodInfo *)0x0);
                                                          LayerUtil::LayerUtil_SetLayerRecursively_4
                                                                    (pGVar4,layer,(MethodInfo *)0x0
                                                                    );
                                                          pAVar7 = (this->fields).previewer;
                                                          if ((pAVar7 != (AvatarPreviewer *)0x0) &&
                                                             (pRVar9 = (this->fields).previewImage,
                                                             pRVar9 != (RawImage *)0x0)) {
                                                            UnityEngine.UI.dll::UnityEngine::UI::
                                                            RawImage::RawImage_set_texture
                                                                      (pRVar9,(Texture *)
                                                                              (pAVar7->fields).
                                                                              previewTexture,
                                                                       (MethodInfo *)0x0);
                                                            pGVar4 = (GameObject *)
                                                                      UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Object::
                                                                      Object_1_Instantiate_4
                                                                                ((Object *)
                                                                                 (this->fields).
                                                                                 dropShadowPlane,
                                                                                                                                                                  
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  if (pGVar4 != (GameObject *)0x0) {
                                                    pTVar8 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar4,(MethodInfo *)0x0);
                                                    if (pTVar8 != (Transform *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_SetParent
                                                                (pTVar8,(this->fields).
                                                                         avatarResetToTransform,
                                                                 (MethodInfo *)0x0);
                                                      pTVar8 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar4,(MethodInfo *)0x0
                                                                          );
                                                      pAVar7 = (this->fields).previewer;
                                                      if ((pAVar7 != (AvatarPreviewer *)0x0) &&
                                                         (pGVar4 = (pAVar7->fields).
                                                                                                                                        
                                                  _PreviewGameObject_k__BackingField,
                                                  pGVar4 != (GameObject *)0x0)) {
                                                    this_03 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar4,(MethodInfo *)0x0);
                                                    if (this_03 != (Transform *)0x0) {
                                                      pVVar29 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_position
                                                                          ((Vector3 *)
                                                                           &stack0xffffffc0,this_03,
                                                                           (MethodInfo *)0x0);
                                                      uVar32 = pVVar29->x;
                                                      uVar33 = pVVar29->y;
                                                      if (pTVar8 != (Transform *)0x0) {
                                                        value_01.y = (float)uVar33 - _UNK_?;
                                                        value_01.x = (float)uVar32 + 0.0;
                                                        value_01.z = pVVar29->z + 0.0;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_set_position
                                                                  (pTVar8,value_01,
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
                                              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_get_gameObject
                                                                  (this_02,(MethodInfo *)0x0);
                                              if (pGVar4 != (GameObject *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
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
          pGVar4 = (this->fields).bodyClone;
          if (pGVar4 != (GameObject *)0x0) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar4,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffa0,pTVar8,(MethodInfo *)0x0);
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
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}

