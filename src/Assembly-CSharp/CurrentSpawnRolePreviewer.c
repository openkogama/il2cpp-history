
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
  source = (this->fields).bodyClone;
  if (source != (GameObject *)0x0) {
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                        SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                       );
    pMVar2 = (MonitorData *)0x0;
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar3 = pIVar1 + 2;
code_?:
      if ((int)pIVar1[1].monitor <= (int)pMVar2) {
        return;
      }
      if (pMVar2 < pIVar1[1].monitor) {
        pIVar4 = pIVar3->klass;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pIVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
code_?:
          pMVar2 = pMVar2 + 1;
          pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
          goto code_?;
        }
        if (pMVar2 < pIVar1[1].monitor) {
          if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                    ((SkinnedMeshOptimizer *)pIVar3->klass,(MethodInfo *)0x0);
          if (pMVar2 < pIVar1[1].monitor) {
            if (pIVar3->klass != (IEnumerable_1_System_Object___Class *)0x0) {
              SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                        ((SkinnedMeshOptimizer *)pIVar3->klass,(MethodInfo *)0x0);
              if (pMVar2 < pIVar1[1].monitor) {
                pIVar4 = pIVar3->klass;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pIVar4,(MethodInfo *)0x0);
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
        if (((pMVar2->klass->_1).typeHierarchyDepth <
             (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) ||
           ((MVAvatarLocal__Class *)
            (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1]
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
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                          (pGVar4,(MethodInfo *)0x0);
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
                (this->fields).avatarResetToTransform = pTVar8;
                func_?();
                pRVar9 = (this->fields).previewImage;
                if (pRVar9 != (RawImage *)0x0) {
                  (*(pRVar9->klass->vtable).set_color.methodPtr)(pRVar9,_UNK_?,_UNK_?)
                  ;
                  pGVar4 = (this->fields).bodyClone;
                  if (pGVar4 != (GameObject *)0x0) {
                    pIVar10 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                        ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar4,
                                         UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                                        );
                    pMVar11 = (MonitorData *)0x0;
                    if (pIVar10 != (IEnumerable_1_System_Object_ *)0x0) {
                      pIVar12 = pIVar10 + 2;
                      for (; (int)pMVar11 < (int)pIVar10[1].monitor; pMVar11 = pMVar11 + 1) {
                        if (pIVar10[1].monitor <= pMVar11) goto code_?;
                        if (pIVar12->klass == (IEnumerable_1_System_Object___Class *)0x0)
                        goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)pIVar12->klass,0,(MethodInfo *)0x0);
                        pIVar12 = (IEnumerable_1_System_Object_ *)&pIVar12->monitor;
                      }
                      pGVar4 = (this->fields).bodyClone;
                      if (pGVar4 != (GameObject *)0x0) {
                        pIVar10 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                            ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar4,
                                             PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                            );
                        pMVar11 = (MonitorData *)0x0;
                        if (pIVar10 != (IEnumerable_1_System_Object_ *)0x0) {
                          pIVar12 = pIVar10 + 2;
                          while( true ) {
                            if ((int)pIVar10[1].monitor <= (int)pMVar11) break;
                            if (pIVar10[1].monitor <= pMVar11) goto code_?;
                            if (pIVar12->klass == (IEnumerable_1_System_Object___Class *)0x0)
                            goto code_?;
                            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)pIVar12->klass,(MethodInfo *)0x0);
                            if (pGVar4 == (GameObject *)0x0) goto code_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                            pMVar11 = pMVar11 + 1;
                            pIVar12 = (IEnumerable_1_System_Object_ *)&pIVar12->monitor;
                          }
                          pGVar4 = (this->fields).bodyClone;
                          if (pGVar4 != (GameObject *)0x0) {
                            pIVar10 = Newtonsoft::Json::Linq::LinqExtensions::
                                      LinqExtensions_Values_2
                                                ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                 pGVar4,
                                                 AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                                );
                            pMVar11 = (MonitorData *)0x0;
                            if (pIVar10 != (IEnumerable_1_System_Object_ *)0x0) {
                              pIVar12 = pIVar10 + 2;
                              while( true ) {
                                if ((int)pIVar10[1].monitor <= (int)pMVar11) break;
                                if (pIVar10[1].monitor <= pMVar11) goto code_?;
                                if (pIVar12->klass == (IEnumerable_1_System_Object___Class *)0x0)
                                goto code_?;
                                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)pIVar12->klass,(MethodInfo *)0x0);
                                if (pGVar4 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                                pMVar11 = pMVar11 + 1;
                                pIVar12 = (IEnumerable_1_System_Object_ *)&pIVar12->monitor;
                              }
                              pGVar4 = (this->fields).bodyClone;
                              if (pGVar4 != (GameObject *)0x0) {
                                pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren_1
                                                    (pGVar4,1,
                                                                                                          
                                                  AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                                  );
                                uVar14 = 0;
                                if (pOVar13 != (Object__Array *)0x0) {
                                  ppOVar15 = pOVar13->vector;
                                  for (; (int)uVar14 < (int)pOVar13->max_length; uVar14 = uVar14 + 1
                                      ) {
                                    if (pOVar13->max_length <= uVar14) goto code_?;
                                    if ((Behaviour *)*ppOVar15 == (Behaviour *)0x0)
                                    goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                    Behaviour_set_enabled
                                              ((Behaviour *)*ppOVar15,1,(MethodInfo *)0x0);
                                    ppOVar15 = ppOVar15 + 1;
                                  }
                                  pGVar4 = (this->fields).bodyClone;
                                  if (pGVar4 != (GameObject *)0x0) {
                                    pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren_1
                                                        (pGVar4,1,
                                                                                                                  
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                                    uVar14 = 0;
                                    if (pOVar13 != (Object__Array *)0x0) {
                                      ppOVar15 = pOVar13->vector;
                                      for (; (int)uVar14 < (int)pOVar13->max_length;
                                          uVar14 = uVar14 + 1) {
                                        if (pOVar13->max_length <= uVar14) goto code_?;
                                        if ((Behaviour *)*ppOVar15 == (Behaviour *)0x0)
                                        goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                        Behaviour_set_enabled
                                                  ((Behaviour *)*ppOVar15,1,(MethodInfo *)0x0);
                                        ppOVar15 = ppOVar15 + 1;
                                      }
                                      pGVar4 = (this->fields).bodyClone;
                                      if (pGVar4 != (GameObject *)0x0) {
                                        pIVar10 = Newtonsoft::Json::Linq::LinqExtensions::
                                                  LinqExtensions_Values_2
                                                            ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  pGVar4,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                        pMVar11 = (MonitorData *)0x0;
                                        if (pIVar10 != (IEnumerable_1_System_Object_ *)0x0) {
                                          pIVar12 = pIVar10 + 2;
                                          while( true ) {
                                            if ((int)pIVar10[1].monitor <= (int)pMVar11) break;
                                            if (pIVar10[1].monitor <= pMVar11)
                                            goto code_?;
                                            if (pIVar12->klass ==
                                                (IEnumerable_1_System_Object___Class *)0x0)
                                            goto code_?;
                                            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_gameObject
                                                                ((Component *)pIVar12->klass,
                                                                 (MethodInfo *)0x0);
                                            if ((TypeInfo__UnityEngine__Object->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            UnityEngine.CoreModule.dll::UnityEngine::Object::
                                            Object_1_Destroy_1((Object_1 *)pGVar4,(MethodInfo *)0x0
                                                              );
                                            pMVar11 = pMVar11 + 1;
                                            pIVar12 = (IEnumerable_1_System_Object_ *)
                                                      &pIVar12->monitor;
                                          }
                                          pGVar4 = (this->fields).bodyClone;
                                          if (pGVar4 != (GameObject *)0x0) {
                                            this_02 = (Component *)
                                                      Newtonsoft::Json::Linq::LinqExtensions::
                                                      LinqExtensions_Values_2
                                                                ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  pGVar4,
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
                                                pIVar10 = Newtonsoft::Json::Linq::LinqExtensions::
                                                          LinqExtensions_Values_2
                                                                    ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  pGVar4,
                                                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                                  );
                                                pMVar11 = (MonitorData *)0x0;
                                                if (pIVar10 != (IEnumerable_1_System_Object_ *)0x0)
                                                {
                                                  pIVar12 = pIVar10 + 2;
                                                  for (; (int)pMVar11 < (int)pIVar10[1].monitor;
                                                      pMVar11 = pMVar11 + 1) {
                                                    if (pIVar10[1].monitor <= pMVar11)
                                                    goto code_?;
                                                    pIVar16 = pIVar12->klass;
                                                    if ((TypeInfo__UnityEngine__Object->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?();
                                                    }
                                                    bVar5 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Object::Object_1_op_Inequality
                                                                       ((Object_1 *)pIVar16,
                                                                        (Object_1 *)0x0,
                                                                        (MethodInfo *)0x0);
                                                    if (bVar5 != 0) {
                                                      if (pIVar10[1].monitor <= pMVar11)
                                                      goto code_?;
                                                      if (pIVar12->klass ==
                                                          (IEnumerable_1_System_Object___Class *)0x0
                                                         ) goto code_?;
                                                      SkinnedMeshOptimizer::
                                                      SkinnedMeshOptimizer_DisableOptimizer
                                                                ((SkinnedMeshOptimizer *)
                                                                 pIVar12->klass,(MethodInfo *)0x0);
                                                      if (pIVar10[1].monitor <= pMVar11)
                                                      goto code_?;
                                                      if (pIVar12->klass ==
                                                          (IEnumerable_1_System_Object___Class *)0x0
                                                         ) goto code_?;
                                                      SkinnedMeshOptimizer::
                                                      SkinnedMeshOptimizer_TurnOffMesh
                                                                ((SkinnedMeshOptimizer *)
                                                                 pIVar12->klass,(MethodInfo *)0x0);
                                                      if (pIVar10[1].monitor <= pMVar11)
                                                      goto code_?;
                                                      pIVar16 = pIVar12->klass;
                                                      if ((TypeInfo__UnityEngine__Object->_1).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Object::Object_1_Destroy_1
                                                                ((Object_1 *)pIVar16,
                                                                 (MethodInfo *)0x0);
                                                    }
                                                    pIVar12 = (IEnumerable_1_System_Object_ *)
                                                              &pIVar12->monitor;
                                                  }
                                                  pGVar4 = (this->fields).bodyClone;
                                                  if (pGVar4 != (GameObject *)0x0) {
                                                    pIVar10 = Newtonsoft::Json::Linq::LinqExtensions
                                                              ::LinqExtensions_Values_2
                                                                        ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  pGVar4,
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                                  pMStack_17 = (MonitorData *)0x0;
                                                  if (pIVar10 != (IEnumerable_1_System_Object_ *)0x0
                                                     ) {
                                                    pIVar12 = pIVar10 + 2;
                                                    for (; (int)pMStack_17 < (int)pIVar10[1].monitor
                                                        ; pMStack_17 = pMStack_17 + 1) {
                                                      uVar14 = 0;
                                                      iVar18 = 0x10;
                                                      while( true ) {
                                                        if (pIVar10[1].monitor <= pMStack_17)
                                                        goto code_?;
                                                        if (pIVar12->klass ==
                                                            (IEnumerable_1_System_Object___Class *)
                                                            0x0) goto code_?;
                                                        pMVar19 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Renderer::
                                                                  Renderer_get_materials
                                                                            ((Renderer *)
                                                                             pIVar12->klass,
                                                                             (MethodInfo *)0x0);
                                                        if (pMVar19 == (Material__Array *)0x0)
                                                        goto code_?;
                                                        if ((int)pMVar19->max_length <= (int)uVar14)
                                                        break;
                                                        if (pIVar10[1].monitor <= pMStack_17)
                                                        goto code_?;
                                                        if (pIVar12->klass ==
                                                            (IEnumerable_1_System_Object___Class *)
                                                            0x0) goto code_?;
                                                        pMVar19 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Renderer::
                                                                  Renderer_get_materials
                                                                            ((Renderer *)
                                                                             pIVar12->klass,
                                                                             (MethodInfo *)0x0);
                                                        if (pMVar19 == (Material__Array *)0x0)
                                                        goto code_?;
                                                        if (pMVar19->max_length <= uVar14)
                                                        goto code_?;
                                                        pMVar20 = *(Material **)
                                                                  ((int)pMVar19->vector +
                                                                  iVar18 + -0x10);
                                                        if (pMVar20 == (Material *)0x0)
                                                        goto code_?;
                                                        bVar5 = UnityEngine.CoreModule.dll::
                                                                 UnityEngine::Material::
                                                                 Material_HasProperty_1
                                                                           (pMVar20,
                                                  StringLiteral__Color,(MethodInfo *)0x0);
                                                  if (bVar5 != 0) {
                                                    if (pIVar10[1].monitor <= pMStack_17)
                                                    goto code_?;
                                                    if (pIVar12->klass ==
                                                        (IEnumerable_1_System_Object___Class *)0x0)
                                                    goto code_?;
                                                    pMVar19 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Renderer::
                                                              Renderer_get_materials
                                                                        ((Renderer *)pIVar12->klass,
                                                                         (MethodInfo *)0x0);
                                                    if (pMVar19 == (Material__Array *)0x0)
                                                    goto code_?;
                                                    if (pMVar19->max_length <= uVar14)
                                                    goto code_?;
                                                    pMVar20 = *(Material **)
                                                              ((int)pMVar19->vector + iVar18 + -0x10
                                                              );
                                                    if (pMVar20 == (Material *)0x0)
                                                    goto code_?;
                                                    pCVar21 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Material::
                                                              Material_get_color((Color *)&
                                                  stack0xffffffd0,pMVar20,(MethodInfo *)0x0);
                                                  fVar22 = pCVar21->r;
                                                  fVar23 = pCVar21->g;
                                                  fVar24 = pCVar21->b;
                                                  if (pIVar10[1].monitor <= pMStack_17)
                                                  goto code_?;
                                                  if (pIVar12->klass ==
                                                      (IEnumerable_1_System_Object___Class *)0x0)
                                                  goto code_?;
                                                  pMVar19 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)pIVar12->klass,
                                                                       (MethodInfo *)0x0);
                                                  if (pMVar19 == (Material__Array *)0x0)
                                                  goto code_?;
                                                  if (pMVar19->max_length <= uVar14)
                                                  goto code_?;
                                                  pMVar20 = *(Material **)
                                                            ((int)pMVar19->vector + iVar18 + -0x10);
                                                  if (pMVar20 == (Material *)0x0)
                                                  goto code_?;
                                                  value_02.g = fVar23;
                                                  value_02.r = fVar22;
                                                  value_02.b = fVar24;
                                                  value_02.a = 1.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Material
                                                  ::Material_set_color
                                                            (pMVar20,value_02,(MethodInfo *)0x0);
                                                  }
                                                  uVar14 = uVar14 + 1;
                                                  iVar18 = iVar18 + 4;
                                                  }
                                                  pIVar12 = (IEnumerable_1_System_Object_ *)
                                                            &pIVar12->monitor;
                                                  }
                                                  pGVar4 = (this->fields).bodyClone;
                                                  if (pGVar4 != (GameObject *)0x0) {
                                                    pAVar25 = (Animation *)
                                                              Newtonsoft::Json::Linq::LinqExtensions
                                                              ::LinqExtensions_Values_2
                                                                        ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  pGVar4,
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                                  (this->fields).goAnimation = pAVar25;
                                                  ppAVar26 = &(this->fields).goAnimation;
                                                  puVar27 = &UNK_?;
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
                                                  ppAVar28 = &(this->fields).previewer;
                                                  puVar29 = &UNK_?;
                                                  func_?();
                                                  pAVar7 = (this->fields).previewer;
                                                  pMVar30 = MVGameControllerBase::
                                                            MVGameControllerBase_get_LocalPlayer
                                                                      ((MethodInfo *)0x0);
                                                  if (pMVar30 != (MVLocalPlayer *)0x0) {
                                                    pMVar6 = MVLocalPlayer::MVLocalPlayer_get_Body
                                                                        (pMVar30,(MethodInfo *)0x0);
                                                    if (pMVar6 != (MVBody *)0x0) {
                                                      layersToRender =
                                                           (pMVar6->fields)._._._.previewLayerMask;
                                                      pTVar8 = (this->fields).
                                                                avatarResetToTransform;
                                                      uVar31 = 0xbf00000000000000;
                                                      fVar22 = 100.0;
                                                      fVar23 = 100.0;
                                                      fVar24 = 100.0;
                                                      pMVar30 = MVGameControllerBase::
                                                                MVGameControllerBase_get_LocalPlayer
                                                                          ((MethodInfo *)0x0);
                                                      if (pMVar30 != (MVLocalPlayer *)0x0) {
                                                        pMVar6 = MVLocalPlayer::
                                                                  MVLocalPlayer_get_Body
                                                                            (pMVar30,(MethodInfo *)
                                                                                     0x0);
                                                        if (pAVar7 != (AvatarPreviewer *)0x0) {
                                                          previewPosition.y = fVar23;
                                                          previewPosition.x = fVar22;
                                                          cameraOffset.z = -1.0;
                                                          cameraOffset.x = (float)(int)uVar31;
                                                          cameraOffset.y =
                                                               (float)(int)((ulonglong)uVar31 >>
                                                                           0x20);
                                                          previewPosition.z = fVar24;
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
                                                      pVVar32 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_position
                                                                          ((Vector3 *)
                                                                           &stack0xffffffc0,pTVar8,
                                                                           (MethodInfo *)0x0);
                                                      uVar33 = pVVar32->x;
                                                      uVar34 = pVVar32->y;
                                                      value.y = (float)uVar34 + _UNK_?;
                                                      value.x = (float)uVar33 + 0.0;
                                                      value.z = pVVar32->z + 0.0;
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
                                                          value_00.y = (float)ppAVar26;
                                                          value_00.x = (float)puVar27;
                                                          value_00.z = (float)puVar29;
                                                          value_00.w = (float)ppAVar28;
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
                                                      pVVar32 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_position
                                                                          ((Vector3 *)
                                                                           &stack0xffffffc0,this_03,
                                                                           (MethodInfo *)0x0);
                                                      uVar35 = pVVar32->x;
                                                      uVar36 = pVVar32->y;
                                                      if (pTVar8 != (Transform *)0x0) {
                                                        value_01.y = (float)uVar36 - _UNK_?;
                                                        value_01.x = (float)uVar35 + 0.0;
                                                        value_01.z = pVVar32->z + 0.0;
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
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}

