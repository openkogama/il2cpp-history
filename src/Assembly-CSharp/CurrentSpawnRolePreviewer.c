
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
  source = (this->fields).bodyClone;
  if (source != (GameObject *)0x0) {
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
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
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pIVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
code_?:
          pMVar2 = pMVar2 + 1;
          pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
          goto code_?;
        }
        if (pMVar2 < pIVar1[1].monitor) {
          if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer((SkinnedMeshOptimizer *)pIVar3->klass,(MethodInfo *)0x0);
          if (pMVar2 < pIVar1[1].monitor) {
            if (pIVar3->klass != (IEnumerable_1_System_Object___Class *)0x0) {
              SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh((SkinnedMeshOptimizer *)pIVar3->klass,(MethodInfo *)0x0);
              if (pMVar2 < pIVar1[1].monitor) {
                pIVar4 = pIVar3->klass;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pIVar4,(MethodInfo *)0x0);
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
        if (((pMVar2->klass->_1).typeHierarchyDepth < (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) || ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] != TypeInfo__MVAvatarLocal)) goto code_?;
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
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar3,(MethodInfo *)0x0);
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                (this->fields).avatarResetToTransform = pTVar7;
                func_?();
                pRVar8 = (this->fields).previewImage;
                if (pRVar8 != (RawImage *)0x0) {
                  (*(pRVar8->klass->vtable).set_color.methodPtr)(pRVar8,0x3f800000,0x3f800000);
                  pGVar3 = (this->fields).bodyClone;
                  if (pGVar3 != (GameObject *)0x0) {
                    pIVar9 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______);
                    pMVar10 = (MonitorData *)0x0;
                    if (pIVar9 != (IEnumerable_1_System_Object_ *)0x0) {
                      pIVar11 = pIVar9 + 2;
                      for (; (int)pMVar10 < (int)pIVar9[1].monitor; pMVar10 = pMVar10 + 1) {
                        if (pIVar9[1].monitor <= pMVar10) goto code_?;
                        if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar11->klass,0,(MethodInfo *)0x0);
                        pIVar11 = (IEnumerable_1_System_Object_ *)&pIVar11->monitor;
                      }
                      pGVar3 = (this->fields).bodyClone;
                      if (pGVar3 != (GameObject *)0x0) {
                        pIVar9 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
                        pMVar10 = (MonitorData *)0x0;
                        if (pIVar9 != (IEnumerable_1_System_Object_ *)0x0) {
                          pIVar11 = pIVar9 + 2;
                          while( true ) {
                            if ((int)pIVar9[1].monitor <= (int)pMVar10) break;
                            if (pIVar9[1].monitor <= pMVar10) goto code_?;
                            if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar11->klass,(MethodInfo *)0x0);
                            if (pGVar3 == (GameObject *)0x0) goto code_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                            pMVar10 = pMVar10 + 1;
                            pIVar11 = (IEnumerable_1_System_Object_ *)&pIVar11->monitor;
                          }
                          pGVar3 = (this->fields).bodyClone;
                          if (pGVar3 != (GameObject *)0x0) {
                            pIVar9 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
                            pMVar10 = (MonitorData *)0x0;
                            if (pIVar9 != (IEnumerable_1_System_Object_ *)0x0) {
                              pIVar11 = pIVar9 + 2;
                              while( true ) {
                                if ((int)pIVar9[1].monitor <= (int)pMVar10) break;
                                if (pIVar9[1].monitor <= pMVar10) goto code_?;
                                if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar11->klass,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                pMVar10 = pMVar10 + 1;
                                pIVar11 = (IEnumerable_1_System_Object_ *)&pIVar11->monitor;
                              }
                              pGVar3 = (this->fields).bodyClone;
                              if (pGVar3 != (GameObject *)0x0) {
                                pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_1(pGVar3,1,AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____);
                                uVar13 = 0;
                                if (pOVar12 != (Object__Array *)0x0) {
                                  ppOVar14 = pOVar12->vector;
                                  for (; (int)uVar13 < (int)pOVar12->max_length; uVar13 = uVar13 + 1) {
                                    if (pOVar12->max_length <= uVar13) goto code_?;
                                    if ((Behaviour *)*ppOVar14 == (Behaviour *)0x0) goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*ppOVar14,1,(MethodInfo *)0x0);
                                    ppOVar14 = ppOVar14 + 1;
                                  }
                                  pGVar3 = (this->fields).bodyClone;
                                  if (pGVar3 != (GameObject *)0x0) {
                                    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_1(pGVar3,1,AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____);
                                    uVar13 = 0;
                                    if (pOVar12 != (Object__Array *)0x0) {
                                      ppOVar14 = pOVar12->vector;
                                      for (; (int)uVar13 < (int)pOVar12->max_length; uVar13 = uVar13 + 1) {
                                        if (pOVar12->max_length <= uVar13) goto code_?;
                                        if ((Behaviour *)*ppOVar14 == (Behaviour *)0x0) goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*ppOVar14,1,(MethodInfo *)0x0);
                                        ppOVar14 = ppOVar14 + 1;
                                      }
                                      pGVar3 = (this->fields).bodyClone;
                                      if (pGVar3 != (GameObject *)0x0) {
                                        pIVar9 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
                                        pMVar10 = (MonitorData *)0x0;
                                        if (pIVar9 != (IEnumerable_1_System_Object_ *)0x0) {
                                          pIVar11 = pIVar9 + 2;
                                          while( true ) {
                                            if ((int)pIVar9[1].monitor <= (int)pMVar10) break;
                                            if (pIVar9[1].monitor <= pMVar10) goto code_?;
                                            if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                                            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar11->klass,(MethodInfo *)0x0);
                                            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
                                            pMVar10 = pMVar10 + 1;
                                            pIVar11 = (IEnumerable_1_System_Object_ *)&pIVar11->monitor;
                                          }
                                          pGVar3 = (this->fields).bodyClone;
                                          if (pGVar3 != (GameObject *)0x0) {
                                            this_02 = (Component *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
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
                                                pIVar9 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
                                                pMVar10 = (MonitorData *)0x0;
                                                if (pIVar9 != (IEnumerable_1_System_Object_ *)0x0) {
                                                  pIVar11 = pIVar9 + 2;
                                                  for (; (int)pMVar10 < (int)pIVar9[1].monitor; pMVar10 = pMVar10 + 1) {
                                                    if (pIVar9[1].monitor <= pMVar10) goto code_?;
                                                    pIVar15 = pIVar11->klass;
                                                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                      func_?();
                                                    }
                                                    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pIVar15,(Object_1 *)0x0,(MethodInfo *)0x0);
                                                    if (bVar4 != 0) {
                                                      if (pIVar9[1].monitor <= pMVar10) goto code_?;
                                                      if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                                                      SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer((SkinnedMeshOptimizer *)pIVar11->klass,(MethodInfo *)0x0);
                                                      if (pIVar9[1].monitor <= pMVar10) goto code_?;
                                                      if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                                                      SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh((SkinnedMeshOptimizer *)pIVar11->klass,(MethodInfo *)0x0);
                                                      if (pIVar9[1].monitor <= pMVar10) goto code_?;
                                                      pIVar15 = pIVar11->klass;
                                                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pIVar15,(MethodInfo *)0x0);
                                                    }
                                                    pIVar11 = (IEnumerable_1_System_Object_ *)&pIVar11->monitor;
                                                  }
                                                  pGVar3 = (this->fields).bodyClone;
                                                  if (pGVar3 != (GameObject *)0x0) {
                                                    pIVar9 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
                                                    pMStack_16 = (MonitorData *)0x0;
                                                    if (pIVar9 != (IEnumerable_1_System_Object_ *)0x0) {
                                                      pIVar11 = pIVar9 + 2;
                                                      for (; (int)pMStack_16 < (int)pIVar9[1].monitor; pMStack_16 = pMStack_16 + 1) {
                                                        uVar13 = 0;
                                                        iVar17 = 0x10;
                                                        while( true ) {
                                                          if (pIVar9[1].monitor <= pMStack_16) goto code_?;
                                                          if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                                                          pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)pIVar11->klass,(MethodInfo *)0x0);
                                                          if (pMVar18 == (Material__Array *)0x0) goto code_?;
                                                          if ((int)pMVar18->max_length <= (int)uVar13) break;
                                                          if (pIVar9[1].monitor <= pMStack_16) goto code_?;
                                                          if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                                                          pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)pIVar11->klass,(MethodInfo *)0x0);
                                                          if (pMVar18 == (Material__Array *)0x0) goto code_?;
                                                          if (pMVar18->max_length <= uVar13) goto code_?;
                                                          pMVar19 = *(Material **)((int)pMVar18->vector + iVar17 + -0x10);
                                                          if (pMVar19 == (Material *)0x0) goto code_?;
                                                          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1(pMVar19,StringLiteral__Color,(MethodInfo *)0x0);
                                                          if (bVar4 != 0) {
                                                            if (pIVar9[1].monitor <= pMStack_16) goto code_?;
                                                            if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                                                            pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)pIVar11->klass,(MethodInfo *)0x0);
                                                            if (pMVar18 == (Material__Array *)0x0) goto code_?;
                                                            if (pMVar18->max_length <= uVar13) goto code_?;
                                                            pMVar19 = *(Material **)((int)pMVar18->vector + iVar17 + -0x10);
                                                            if (pMVar19 == (Material *)0x0) goto code_?;
                                                            pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color((Color *)&stack0xffffffd0,pMVar19,(MethodInfo *)0x0);
                                                            fVar21 = pCVar20->r;
                                                            fVar22 = pCVar20->g;
                                                            fVar23 = pCVar20->b;
                                                            if (pIVar9[1].monitor <= pMStack_16) goto code_?;
                                                            if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                                                            pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)pIVar11->klass,(MethodInfo *)0x0);
                                                            if (pMVar18 == (Material__Array *)0x0) goto code_?;
                                                            if (pMVar18->max_length <= uVar13) goto code_?;
                                                            pMVar19 = *(Material **)((int)pMVar18->vector + iVar17 + -0x10);
                                                            if (pMVar19 == (Material *)0x0) goto code_?;
                                                            value_02.g = fVar22;
                                                            value_02.r = fVar21;
                                                            value_02.b = fVar23;
                                                            value_02.a = 1.0;
                                                            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color(pMVar19,value_02,(MethodInfo *)0x0);
                                                          }
                                                          uVar13 = uVar13 + 1;
                                                          iVar17 = iVar17 + 4;
                                                        }
                                                        pIVar11 = (IEnumerable_1_System_Object_ *)&pIVar11->monitor;
                                                      }
                                                      pGVar3 = (this->fields).bodyClone;
                                                      if (pGVar3 != (GameObject *)0x0) {
                                                        pAVar24 = (Animation *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
                                                        (this->fields).goAnimation = pAVar24;
                                                        ppAVar25 = &(this->fields).goAnimation;
                                                        puVar26 = &UNK_?;
                                                        func_?();
                                                        pAVar6 = (this->fields).previewerPrefab;
                                                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                          func_?();
                                                        }
                                                        pAVar6 = (AvatarPreviewer *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pAVar6,AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
                                                        (this->fields).previewer = pAVar6;
                                                        ppAVar27 = &(this->fields).previewer;
                                                        puVar28 = &UNK_?;
                                                        func_?();
                                                        pAVar6 = (this->fields).previewer;
                                                        pMVar29 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
                                                        if (pMVar29 != (MVLocalPlayer *)0x0) {
                                                          pMVar5 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar29,(MethodInfo *)0x0);
                                                          if (pMVar5 != (MVBody *)0x0) {
                                                            layersToRender = (pMVar5->fields)._._._.previewLayerMask;
                                                            pTVar7 = (this->fields).avatarResetToTransform;
                                                            uVar30 = 0xbf00000000000000;
                                                            fVar21 = 100.0;
                                                            fVar22 = 100.0;
                                                            fVar23 = 100.0;
                                                            pMVar29 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
                                                            if (pMVar29 != (MVLocalPlayer *)0x0) {
                                                              pMVar5 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar29,(MethodInfo *)0x0);
                                                              if (pAVar6 != (AvatarPreviewer *)0x0) {
                                                                previewPosition.y = fVar22;
                                                                previewPosition.x = fVar21;
                                                                cameraOffset.z = -1.0;
                                                                cameraOffset.x = (float)(int)uVar30;
                                                                cameraOffset.y = (float)(int)((ulonglong)uVar30 >> 0x20);
                                                                previewPosition.z = fVar23;
                                                                AvatarPreviewer::AvatarPreviewer_Initialize(pAVar6,previewDimensionsX,previewDimensionsY,CameraClearFlags__Enum_Color,layersToRender,cameraOffset,pTVar7,previewPosition,StringLiteral_CurrentSpawnRole_preview,(MVWorldObjectClient *)pMVar5,(this->fields).bodyClone,(Vector3)ZEXT812(0x41700000),(MethodInfo *)0x0);
                                                                pAVar6 = (this->fields).previewer;
                                                                if ((pAVar6 != (AvatarPreviewer *)0x0) && (this_00 = (pAVar6->fields).previewCam, this_00 != (Camera *)0x0)) {
                                                                  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                                                                  if (pTVar7 != (Transform *)0x0) {
                                                                    pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc0,pTVar7,(MethodInfo *)0x0);
                                                                    uVar32 = pVVar31->x;
                                                                    uVar33 = pVVar31->y;
                                                                    value.y = (float)uVar33 + 1.22;
                                                                    value.x = (float)uVar32 + 0.0;
                                                                    value.z = pVVar31->z + 0.0;
                                                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar7,value,(MethodInfo *)0x0);
                                                                    pGVar3 = (this->fields).bodyClone;
                                                                    if (pGVar3 != (GameObject *)0x0) {
                                                                      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                                                                      if (pTVar7 != (Transform *)0x0) {
                                                                        value_00.y = (float)ppAVar25;
                                                                        value_00.x = (float)puVar26;
                                                                        value_00.z = (float)puVar28;
                                                                        value_00.w = (float)ppAVar27;
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
                                                                                  pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc0,this_03,(MethodInfo *)0x0);
                                                                                  uVar34 = pVVar31->x;
                                                                                  uVar35 = pVVar31->y;
                                                                                  if (pTVar7 != (Transform *)0x0) {
                                                                                    value_01.y = (float)uVar35 - 0.1;
                                                                                    value_01.x = (float)uVar34 + 0.0;
                                                                                    value_01.z = pVVar31->z + 0.0;
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
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}

