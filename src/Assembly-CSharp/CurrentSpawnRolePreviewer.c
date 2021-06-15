
/* Void ChangeAnimation(String) */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_ChangeAnimation
               (CurrentSpawnRolePreviewer *this,String *NewAnimation,MethodInfo *method)

{
  if ((this->fields).goAnimation == (Animation *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_OnDestroy
               (CurrentSpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarBody;
  if (this_00 != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone(this_00,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields).previewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).previewer;
    if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pAVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pTVar4 = (this->fields).avatarResetToTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    (this->fields).avatarResetToTransform = (Transform *)0x0;
  }
  return;
}


/* Void RemoveSkinnedMeshOptimizers() */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::
     CurrentSpawnRolePreviewer_RemoveSkinnedMeshOptimizers
               (CurrentSpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (this_00,
                        SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                       );
    uVar2 = 0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pUVar1->max_length <= uVar2) break;
        x = *ppUVar3;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pSVar5 = (SkinnedMeshOptimizer *)func_?();
          if (pSVar5 == (SkinnedMeshOptimizer *)0x0) goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer(pSVar5,(MethodInfo *)0x0);
          pSVar5 = (SkinnedMeshOptimizer *)func_?();
          if (pSVar5 == (SkinnedMeshOptimizer *)0x0) goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh(pSVar5,(MethodInfo *)0x0);
          obj = (Object_1 *)func_?();
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0)
          ;
        }
        uVar2 = uVar2 + 1;
        ppUVar3 = ppUVar3 + 1;
      }
      uVar6 = func_?(0,0);
      func_?(uVar6);
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupPreviewer(Int32, Int32) */

void Assembly-CSharp.dll::CurrentSpawnRolePreviewer::CurrentSpawnRolePreviewer_SetupPreviewer
               (CurrentSpawnRolePreviewer *this,int32_t previewDimensionsX,
               int32_t previewDimensionsY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_02 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_02 != (SpawnRoleDataMediator *)0x0) {
    s = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)
        System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]
        ::
        Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                  ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_02,
                   (MethodInfo *)0x0);
    id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
         SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
         SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                   (s,
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar1 = (MVAvatar *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_01,id,(MethodInfo *)0x0), pMVar1 != (MVAvatar *)0x0)) {
      pMVar2 = pMVar1->klass;
      bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      bVar4 = (pMVar2->_1).naturalAligment;
      if ((bVar4 < bVar3) ||
         ((MVAvatarLocal__Class *)(pMVar2->_1).typeHierarchy[bVar3 - 1] != TypeInfo__MVAvatarLocal))
      {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVAvatar *)0x0;
      if (bVar5) {
        pMVar6 = pMVar1;
      }
      if (pMVar6 != (MVAvatar *)0x0) {
        if ((bVar4 < bVar3) ||
           ((MVAvatarLocal__Class *)(pMVar2->_1).typeHierarchy[bVar3 - 1] != TypeInfo__MVAvatarLocal
           )) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pMVar6 = (MVAvatar *)0x0;
        if (bVar5) {
          pMVar6 = pMVar1;
        }
        if (pMVar6 != (MVAvatar *)0x0) {
          pMVar7 = MVAvatar::MVAvatar_get_Body(pMVar6,(MethodInfo *)0x0);
          (this->fields).avatarBody = pMVar7;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                              ((Quaternion *)&stack0xffffff88,(MethodInfo *)0x0);
          fVar9 = pQVar8->x;
          fVar10 = pQVar8->y;
          fVar11 = pQVar8->z;
          fVar12 = pQVar8->w;
          pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                              ((Quaternion *)&stack0xffffff98,0.0,180.0,0.0,(MethodInfo *)0x0);
          lhs.y = fVar10;
          lhs.x = fVar9;
          lhs.z = fVar11;
          lhs.w = fVar12;
          UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                    ((Quaternion *)&stack0xffffff88,lhs,*pQVar8,(MethodInfo *)0x0);
          pGVar13 = (this->fields).bodyClone;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pGVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar14 != 0) {
            pGVar13 = (this->fields).bodyClone;
            if ((pGVar13 == (GameObject *)0x0) ||
               (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar13,(MethodInfo *)0x0),
               pTVar15 == (Transform *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                      ((Quaternion *)&stack0xffffff88,pTVar15,(MethodInfo *)0x0);
          }
          pMVar7 = (this->fields).avatarBody;
          if (pMVar7 != (MVBody *)0x0) {
            pGVar13 = MVBody::MVBody_CreateClone(pMVar7,(MethodInfo *)0x0);
            (this->fields).bodyClone = pGVar13;
            pMVar7 = (this->fields).avatarBody;
            if (pMVar7 != (MVBody *)0x0) {
              MVBody::MVBody_set_AccessoryMoveOverride(pMVar7,0,(MethodInfo *)0x0);
              pAVar16 = (this->fields).previewer;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)pAVar16,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar14 != 0) {
                pAVar16 = (this->fields).previewer;
                if (pAVar16 == (AvatarPreviewer *)0x0) goto code_?;
                pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pAVar16,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar13,(MethodInfo *)0x0);
              }
              pTVar15 = (this->fields).avatarResetToTransform;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)pTVar15,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar14 != 0) {
                pTVar15 = (this->fields).avatarResetToTransform;
                if (pTVar15 == (Transform *)0x0) goto code_?;
                pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pTVar15,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar13,(MethodInfo *)0x0);
              }
              pGVar13 = (GameObject *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                        (pGVar13,(MethodInfo *)0x0);
              if (pGVar13 != (GameObject *)0x0) {
                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar13,(MethodInfo *)0x0);
                pRVar17 = (this->fields).previewImage;
                (this->fields).avatarResetToTransform = pTVar15;
                pCVar18 = (CurrentSpawnRolePreviewer *)0x0;
                func_?();
                if (pRVar17 != (RawImage *)0x0) {
                  (*(code *)(pRVar17->klass->vtable).set_color.method)();
                  pGVar13 = (this->fields).bodyClone;
                  if (pGVar13 != (GameObject *)0x0) {
                    pUVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponentsInChildren_29
                                        (pGVar13,
                                         UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                                        );
                    uVar20 = 0;
                    if (pUVar19 != (UseInteratorVisualization__Array *)0x0) {
                      ppUVar21 = pUVar19->vector;
                      this = pCVar18;
                      for (; (int)uVar20 < (int)pUVar19->max_length; uVar20 = uVar20 + 1) {
                        if (pUVar19->max_length <= uVar20) goto code_?;
                        if (*ppUVar21 == (UseInteratorVisualization *)0x0) goto code_?;
                        this = (CurrentSpawnRolePreviewer *)0x0;
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)*ppUVar21,0,(MethodInfo *)0x0);
                        ppUVar21 = ppUVar21 + 1;
                      }
                      pGVar13 = (this->fields).bodyClone;
                      if (pGVar13 != (GameObject *)0x0) {
                        pUVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponentsInChildren_29
                                            (pGVar13,
                                             PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                            );
                        uVar20 = 0;
                        if (pUVar19 != (UseInteratorVisualization__Array *)0x0) {
                          ppUVar21 = pUVar19->vector;
                          for (; (int)uVar20 < (int)pUVar19->max_length; uVar20 = uVar20 + 1) {
                            if (pUVar19->max_length <= uVar20) goto code_?;
                            if ((*ppUVar21 == (UseInteratorVisualization *)0x0) ||
                               (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_get_gameObject
                                                    ((Component_1 *)*ppUVar21,(MethodInfo *)0x0),
                               pGVar22 == (GameObject *)0x0)) goto code_?;
                            pGVar13 = (GameObject *)&UNK_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar22,0,(MethodInfo *)0x0);
                            ppUVar21 = ppUVar21 + 1;
                          }
                          pGVar13 = pGVar13[2].fields._.m_CachedPtr;
                          if (pGVar13 != (GameObject *)0x0) {
                            pUVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponentsInChildren_29
                                                (pGVar13,
                                                 AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                                );
                            uVar20 = 0;
                            if (pUVar19 != (UseInteratorVisualization__Array *)0x0) {
                              ppUVar21 = pUVar19->vector;
                              for (; (int)uVar20 < (int)pUVar19->max_length; uVar20 = uVar20 + 1) {
                                if (pUVar19->max_length <= uVar20) goto code_?;
                                if ((*ppUVar21 == (UseInteratorVisualization *)0x0) ||
                                   (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_1_get_gameObject
                                                        ((Component_1 *)*ppUVar21,(MethodInfo *)0x0)
                                   , pGVar22 == (GameObject *)0x0)) goto code_?;
                                pGVar13 = (GameObject *)&UNK_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar22,0,(MethodInfo *)0x0);
                                ppUVar21 = ppUVar21 + 1;
                              }
                              pGVar13 = pGVar13[2].fields._.m_CachedPtr;
                              if (pGVar13 != (GameObject *)0x0) {
                                pCVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren_20
                                                    (pGVar13,1,
                                                                                                          
                                                  AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                                  );
                                uVar20 = 0;
                                if (pCVar23 != (CFX_LightIntensityFade__Array *)0x0) {
                                  ppCVar24 = pCVar23->vector;
                                  for (; (int)uVar20 < (int)pCVar23->max_length; uVar20 = uVar20 + 1
                                      ) {
                                    if (pCVar23->max_length <= uVar20) goto code_?;
                                    if (*ppCVar24 == (CFX_LightIntensityFade *)0x0)
                                    goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                    Behaviour_set_enabled
                                              ((Behaviour *)*ppCVar24,1,(MethodInfo *)0x0);
                                    ppCVar24 = ppCVar24 + 1;
                                  }
                                  if (pURam00000021 != (UseInteratorVisualization *)0x0) {
                                    pCVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren_20
                                                        ((GameObject *)pURam00000021,1,
                                                                                                                  
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                                    uVar20 = 0;
                                    if (pCVar23 != (CFX_LightIntensityFade__Array *)0x0) {
                                      ppCVar24 = pCVar23->vector;
                                      for (; pUVar25 = pURam00000021,
                                          (int)uVar20 < (int)pCVar23->max_length;
                                          uVar20 = uVar20 + 1) {
                                        if (pCVar23->max_length <= uVar20) goto code_?;
                                        if (*ppCVar24 == (CFX_LightIntensityFade *)0x0)
                                        goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                        Behaviour_set_enabled
                                                  ((Behaviour *)*ppCVar24,1,(MethodInfo *)0x0);
                                        ppCVar24 = ppCVar24 + 1;
                                      }
                                      if (pURam00000021 != (UseInteratorVisualization *)0x0) {
                                        pUVar19 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponentsInChildren_29
                                                            ((GameObject *)pURam00000021,
                                                                                                                          
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                        uVar20 = 0;
                                        if (pUVar19 != (UseInteratorVisualization__Array *)0x0) {
                                          ppUVar21 = pUVar19->vector;
                                          for (; (int)uVar20 < (int)pUVar19->max_length;
                                              uVar20 = uVar20 + 1) {
                                            if (pUVar19->max_length <= uVar20)
                                            goto code_?;
                                            pUVar25 = *ppUVar21;
                                            if (pUVar25 == (UseInteratorVisualization *)0x0)
                                            goto code_?;
                                            pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_1_get_gameObject
                                                                ((Component_1 *)pUVar25,
                                                                 (MethodInfo *)0x0);
                                            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).
                                                        Equals.methodPtr & 0x2000000) != 0) &&
                                               ((TypeInfo__UnityEngine__Object->_1).cctor_started ==
                                                0)) {
                                              func_?();
                                            }
                                            UnityEngine.CoreModule.dll::UnityEngine::Object::
                                            Object_1_Destroy_1((Object_1 *)pGVar13,(MethodInfo *)0x0
                                                              );
                                            ppUVar21 = ppUVar21 + 1;
                                          }
                                          pGVar13 = (GameObject *)(pUVar25->fields).dist;
                                          if (pGVar13 != (GameObject *)0x0) {
                                            pUVar19 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::
                                                      GameObject_GetComponentsInChildren_29
                                                                (pGVar13,
                                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                  );
                                            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).
                                                        Equals.methodPtr & 0x2000000) != 0) &&
                                               ((TypeInfo__UnityEngine__Object->_1).cctor_started ==
                                                0)) {
                                              func_?();
                                            }
                                            bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object
                                                    ::Object_1_op_Inequality
                                                              ((Object_1 *)pUVar19,(Object_1 *)0x0,
                                                               (MethodInfo *)0x0);
                                            if (bVar14 != 0) {
                                              if ((pUVar19 ==
                                                   (UseInteratorVisualization__Array *)0x0) ||
                                                 (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::Component_1_get_gameObject
                                                                      ((Component_1 *)pUVar19,
                                                                       (MethodInfo *)0x0),
                                                 pGVar13 == (GameObject *)0x0))
                                              goto code_?;
                                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_SetActive(pGVar13,0,(MethodInfo *)0x0);
                                            }
                                            if (cRam_? == '\0') {
                                              func_?();
                                              cRam_? = '\x01';
                                            }
                                            pSVar26 = (SkinnedMeshOptimizer *)(pUVar25->fields).dist
                                            ;
                                            if (pSVar26 != (SkinnedMeshOptimizer *)0x0) {
                                              pUVar19 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::
                                                        GameObject_GetComponentsInChildren_29
                                                                  ((GameObject *)pSVar26,
                                                                                                                                      
                                                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                                  );
                                              uVar20 = 0;
                                              if (pUVar19 != (UseInteratorVisualization__Array *)0x0
                                                 ) {
                                                ppUVar21 = pUVar19->vector;
                                                for (; (int)uVar20 < (int)pUVar19->max_length;
                                                    uVar20 = uVar20 + 1) {
                                                  if (pUVar19->max_length <= uVar20)
                                                  goto code_?;
                                                  pUVar25 = *ppUVar21;
                                                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable
                                                              ).Equals.methodPtr & 0x2000000) != 0)
                                                     && ((TypeInfo__UnityEngine__Object->_1).
                                                         cctor_started == 0)) {
                                                    func_?();
                                                  }
                                                  pSVar26 = (SkinnedMeshOptimizer *)0x0;
                                                  bVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Object::Object_1_op_Inequality
                                                                    ((Object_1 *)pUVar25,
                                                                     (Object_1 *)0x0,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar14 != 0) {
                                                    pSVar26 = (SkinnedMeshOptimizer *)
                                                              func_?();
                                                    if (pSVar26 == (SkinnedMeshOptimizer *)0x0)
                                                    goto code_?;
                                                    SkinnedMeshOptimizer::
                                                    SkinnedMeshOptimizer_DisableOptimizer
                                                              (pSVar26,(MethodInfo *)0x0);
                                                    pSVar26 = (SkinnedMeshOptimizer *)
                                                              func_?();
                                                    if (pSVar26 == (SkinnedMeshOptimizer *)0x0)
                                                    goto code_?;
                                                    SkinnedMeshOptimizer::
                                                    SkinnedMeshOptimizer_TurnOffMesh
                                                              (pSVar26,(MethodInfo *)0x0);
                                                    obj = (Object_1 *)func_?();
                                                    if ((((uint)(TypeInfo__UnityEngine__Object->
                                                                vtable).Equals.methodPtr & 0x2000000
                                                         ) != 0) &&
                                                       ((TypeInfo__UnityEngine__Object->_1).
                                                        cctor_started == 0)) {
                                                      func_?();
                                                    }
                                                    UnityEngine.CoreModule.dll::UnityEngine::Object
                                                    ::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
                                                  }
                                                  ppUVar21 = ppUVar21 + 1;
                                                }
                                                pRVar27 = (((GameObject__Fields *)
                                                           &pSVar26[1].monitor)->_).m_CachedPtr;
                                                if (pRVar27 != (Renderer *)0x0) {
                                                  pUVar19 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::
                                                            GameObject_GetComponentsInChildren_29
                                                                      ((GameObject *)pRVar27,
                                                                                                                                              
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                                  iVar28 = 0;
                                                  if (pUVar19 !=
                                                      (UseInteratorVisualization__Array *)0x0) {
                                                    for (; iVar28 < (int)pUVar19->max_length;
                                                        iVar28 = iVar28 + 1) {
                                                      iVar29 = 0;
                                                      while( true ) {
                                                        pRVar27 = (Renderer *)func_?();
                                                        if ((pRVar27 == (Renderer *)0x0) ||
                                                           (pMVar30 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Renderer::
                                                                      Renderer_get_materials
                                                                                (pRVar27,(MethodInfo
                                                                                          *)0x0),
                                                           pMVar30 == (Material__Array *)0x0))
                                                        goto code_?;
                                                        if ((int)pMVar30->max_length <= iVar29)
                                                        break;
                                                        pRVar27 = (Renderer *)func_?();
                                                        if (((pRVar27 == (Renderer *)0x0) ||
                                                            (pMVar30 = UnityEngine.CoreModule.dll::
                                                                       UnityEngine::Renderer::
                                                                       Renderer_get_materials
                                                                                 (pRVar27,(
                                                  MethodInfo *)0x0),
                                                  pMVar30 == (Material__Array *)0x0)) ||
                                                  (pMVar31 = (Material *)func_?(),
                                                  pMVar31 == (Material *)0x0))
                                                  goto code_?;
                                                  bVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Material::Material_HasProperty_1
                                                                    (pMVar31,StringLiteral__Color,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar14 != 0) {
                                                    pRVar27 = (Renderer *)func_?();
                                                    if (((pRVar27 == (Renderer *)0x0) ||
                                                        (pMVar30 = UnityEngine.CoreModule.dll::
                                                                   UnityEngine::Renderer::
                                                                   Renderer_get_materials
                                                                             (pRVar27,(MethodInfo *)
                                                                                      0x0),
                                                        pMVar30 == (Material__Array *)0x0)) ||
                                                       (pMVar31 = (Material *)func_?(),
                                                       pMVar31 == (Material *)0x0))
                                                    goto code_?;
                                                    pCVar32 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Material::
                                                              Material_get_color((Color *)&
                                                  stack0xffffffb8,pMVar31,(MethodInfo *)0x0);
                                                  fVar9 = pCVar32->r;
                                                  fVar10 = pCVar32->g;
                                                  fVar11 = pCVar32->b;
                                                  pRVar27 = (Renderer *)func_?();
                                                  if (((pRVar27 == (Renderer *)0x0) ||
                                                      (pMVar30 = UnityEngine.CoreModule.dll::
                                                                 UnityEngine::Renderer::
                                                                 Renderer_get_materials
                                                                           (pRVar27,(MethodInfo *)
                                                                                    0x0),
                                                      pMVar30 == (Material__Array *)0x0)) ||
                                                     (pMVar31 = (Material *)func_?(),
                                                     pMVar31 == (Material *)0x0))
                                                  goto code_?;
                                                  fVar33 = fVar10;
                                                  fVar34 = fVar9;
                                                  uVar35 = CONCAT44(fVar33,fVar34);
                                                  this = (CurrentSpawnRolePreviewer *)0x3f800000;
                                                  fVar36 = fVar11;
                                                  value_01 = (Color)CONCAT88(uVar37,uVar35);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Material
                                                  ::Material_set_color
                                                            (pMVar31,value_01,(MethodInfo *)0x0);
                                                  }
                                                  iVar29 = iVar29 + 1;
                                                  }
                                                  }
                                                  pGVar13 = pRVar27[2].fields._._.m_CachedPtr;
                                                  if (pGVar13 != (GameObject *)0x0) {
                                                    pGVar38 = (GameObject__Class *)
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponentsInChildren_29
                                                                        (pGVar13,
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                                  pXVar39 = (XpBoostParticlePreviewer *)
                                                            pRVar27[1].monitor;
                                                  pRVar27[3].klass = (Renderer__Class *)pGVar38;
                                                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable
                                                              ).Equals.methodPtr & 0x2000000) != 0)
                                                     && ((TypeInfo__UnityEngine__Object->_1).
                                                         cctor_started == 0)) {
                                                    func_?();
                                                  }
                                                  pAVar16 = (AvatarPreviewer *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Object::Object_1_Instantiate_251
                                                                      (pXVar39,
                                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                                  );
                                                  pRVar27[3].monitor = (MonitorData *)pAVar16;
                                                  if ((((uint)(TypeInfo__MVGameControllerBase->
                                                              vtable).Equals.methodPtr & 0x2000000)
                                                       != 0) &&
                                                     ((TypeInfo__MVGameControllerBase->_1).
                                                      cctor_started == 0)) {
                                                    func_?();
                                                  }
                                                  pMVar40 = MVGameControllerBase::
                                                            MVGameControllerBase_get_LocalPlayer
                                                                      ((MethodInfo *)0x0);
                                                  if ((pMVar40 != (MVLocalPlayer *)0x0) &&
                                                     (this_03 = (PrefabPool *)
                                                                MVLocalPlayer::
                                                                MVLocalPlayer_get_Body
                                                                          (pMVar40,(MethodInfo *)0x0
                                                                          ),
                                                     this_03 != (PrefabPool *)0x0)) {
                                                    PrefabPool::
                                                    PrefabPool_get_MVSpawnPointYellowPrefab
                                                              (this_03,(MethodInfo *)0x0);
                                                    fVar11 = 0.0;
                                                    uVar41 = 0;
                                                    func_?();
                                                    pGVar38 = (GameObject__Class *)pRVar27[2].klass;
                                                    fVar9 = 0.0;
                                                    fVar10 = 0.0;
                                                    fVar12 = 0.0;
                                                    func_?();
                                                    layersToRender = 0;
                                                    pMVar40 = MVGameControllerBase::
                                                              MVGameControllerBase_get_LocalPlayer
                                                                        ((MethodInfo *)0x0);
                                                    if (pMVar40 != (MVLocalPlayer *)0x0) {
                                                      pMVar7 = MVLocalPlayer::
                                                                MVLocalPlayer_get_Body
                                                                          (pMVar40,(MethodInfo *)0x0
                                                                          );
                                                      pGVar13 = pRVar27[2].fields._._.m_CachedPtr;
                                                      fVar42 = 0.0;
                                                      uVar43 = 0;
                                                      uVar44 = 0;
                                                      func_?();
                                                      if ((((pAVar16 != (AvatarPreviewer *)0x0) &&
                                                           (VVar45.z = fVar11,
                                                           VVar45.x = (float)(int)uVar41,
                                                           VVar45.y = (float)(int)((ulonglong)uVar41
                                                                                  >> 0x20),
                                                           previewPosition.y = fVar10,
                                                           previewPosition.x = fVar9,
                                                           previewPosition.z = fVar12,
                                                           additionalCameraRotation.y =
                                                                (float)uVar44,
                                                           additionalCameraRotation.x =
                                                                (float)uVar43,
                                                           additionalCameraRotation.z = fVar42,
                                                           AvatarPreviewer::
                                                           AvatarPreviewer_Initialize
                                                                     (pAVar16,0,0,
                                                                      CameraClearFlags__Enum_Color,
                                                                      layersToRender,VVar45,
                                                                      (Transform *)pGVar38,
                                                                      previewPosition,
                                                                                                                                            
                                                  StringLiteral_CurrentSpawnRole_preview,
                                                  (MVWorldObjectClient *)pMVar7,pGVar13,
                                                  additionalCameraRotation,(MethodInfo *)0x0),
                                                  pARam41700028 !=
                                                  (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0))
                                                  && (this_00 = (pARam41700028->fields).
                                                                _textValue___0,
                                                     this_00 != (String *)0x0)) &&
                                                  (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Component::Component_1_get_transform
                                                                       ((Component_1 *)this_00,
                                                                        (MethodInfo *)0x0),
                                                  pTVar15 != (Transform *)0x0)) {
                                                    pVVar46 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffff9c
                                                                         ,pTVar15,(MethodInfo *)0x0)
                                                    ;
                                                    uVar41._0_4_ = pVVar46->x;
                                                    uVar41._4_4_ = pVVar46->y;
                                                    fVar11 = pVVar46->z;
                                                    fVar47 = 0.0;
                                                    fVar12 = 0.0;
                                                    fVar42 = 0.0;
                                                    func_?();
                                                    if ((((uint)(TypeInfo__UnityEngine__Vector3->
                                                                vtable).Equals.methodPtr & 0x2000000
                                                         ) != 0) &&
                                                       ((TypeInfo__UnityEngine__Vector3->_1).
                                                        cctor_started == 0)) {
                                                      func_?(TypeInfo__UnityEngine__Vector3
                                                                     );
                                                    }
                                                    b.y = fVar42;
                                                    b.x = fVar12;
                                                    a.z = fVar11;
                                                    a.x = (float)(int)uVar41;
                                                    a.y = (float)(int)((ulonglong)uVar41 >> 0x20);
                                                    b.z = fVar47;
                                                    pVVar46 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Vector3::
                                                              Vector3_op_Addition((Vector3 *)
                                                                                  &stack0xffffff9c,a
                                                                                  ,b,(MethodInfo *)
                                                                                     0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_position
                                                              (pTVar15,*pVVar46,(MethodInfo *)0x0);
                                                    if (pGRam41700020 != (GameObject *)0x0) {
                                                      fVar11 = 0.0;
                                                      pGVar13 = pGRam41700020;
                                                      pTVar15 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGRam41700020,
                                                                           (MethodInfo *)0x0);
                                                      if (pTVar15 != (Transform *)0x0) {
                                                        value.y = fVar11;
                                                        value.x = (float)pGVar13;
                                                        value.z = fVar9;
                                                        value.w = fVar10;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_set_rotation
                                                                  (pTVar15,value,(MethodInfo *)0x0);
                                                        pGVar13 = pGRam41700020;
                                                        layer = LayerUtil::LayerUtil_GetLayerNumber
                                                                          (LayerFlags__Enum_Hidden,
                                                                           (MethodInfo *)0x0);
                                                        LayerUtil::LayerUtil_SetLayerRecursively_4
                                                                  (pGVar13,layer,(MethodInfo *)0x0);
                                                        pRVar17 = pRRam4170000c;
                                                        if ((pARam41700028 !=
                                                             (
                                                  AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) &&
                                                  (value_00 = (Texture *)
                                                              System.Core.dll::System::Linq::
                                                                                                                            
                                                  Enumerable+<CreateSelectIterator>c__Iterator10`2[System
                                                  ::Collections::Generic::KeyValuePair`2[System::
                                                  Object,System::Object],System::Object]::
                                                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                            ((
                                                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                                  *)pARam41700028,(MethodInfo *)0x0),
                                                  pRVar17 != (RawImage *)0x0)) {
                                                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                                    RawImage_set_texture
                                                              (pRVar17,value_00,(MethodInfo *)0x0);
                                                    pXVar39 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Object::
                                                              Object_1_Instantiate_251
                                                                        (pXRam41700014,
                                                                                                                                                  
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  if ((pXVar39 != (XpBoostParticlePreviewer *)0x0)
                                                     && (pTVar15 = UnityEngine.CoreModule.dll::
                                                                   UnityEngine::GameObject::
                                                                   GameObject_get_transform
                                                                             ((GameObject *)pXVar39,
                                                                              (MethodInfo *)0x0),
                                                        pTVar15 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_SetParent
                                                              (pTVar15,pTRam41700018,
                                                               (MethodInfo *)0x0);
                                                    pTVar15 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        ((GameObject *)pXVar39,
                                                                         (MethodInfo *)0x0);
                                                    if (((pARam41700028 !=
                                                          (AddDotsToTruncatedText_Start_c_Iterator0
                                                           *)0x0) &&
                                                        (pGVar13 = (GameObject *)
                                                                                                                                      
                                                  AddDotsToTruncatedText+<Start>c__Iterator0::
                                                  AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                            (pARam41700028,(MethodInfo *)0x0),
                                                  pGVar13 != (GameObject *)0x0)) &&
                                                  (this_04 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::GameObject::GameObject_get_transform
                                                                       (pGVar13,(MethodInfo *)0x0),
                                                  this_04 != (Transform *)0x0)) {
                                                    pVVar46 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffff9c
                                                                         ,this_04,(MethodInfo *)0x0)
                                                    ;
                                                    uVar48._0_4_ = pVVar46->x;
                                                    uVar48._4_4_ = pVVar46->y;
                                                    fVar9 = pVVar46->z;
                                                    fVar10 = 0.0;
                                                    uVar43 = 0;
                                                    uVar44 = 0;
                                                    func_?();
                                                    a_00.z = fVar9;
                                                    a_00.x = (float)(int)uVar48;
                                                    a_00.y = (float)(int)((ulonglong)uVar48 >> 0x20)
                                                    ;
                                                    b_00.y = (float)uVar44;
                                                    b_00.x = (float)uVar43;
                                                    b_00.z = fVar10;
                                                    pVVar46 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Vector3::
                                                              Vector3_op_Addition((Vector3 *)
                                                                                  &stack0xffffff9c,
                                                                                  a_00,b_00,
                                                                                  (MethodInfo *)0x0)
                                                    ;
                                                    if (pTVar15 != (Transform *)0x0) {
                                                      uVar49 = pVVar46->x;
                                                      uVar50 = pVVar46->y;
                                                      this = (CurrentSpawnRolePreviewer *)pVVar46->z
                                                      ;
                                                      fVar36 = (float)uVar50;
                                                      fVar51 = (float)uVar49;
                                                      VVar45 = (Vector3)CONCAT84(uVar37,fVar51);
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar15,VVar45,(MethodInfo *)0x0);
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
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
      func_?();
code_?:
      func_?();
      func_?();
    }
  }
code_?:
  func_?();
  pcVar52 = (code *)swi(3);
  (*pcVar52)();
  return;
}

