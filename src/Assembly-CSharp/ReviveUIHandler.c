
/* Void CleanupAvatarBodyAfterScreenshot() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_CleanupAvatarBodyAfterScreenshot
               (ReviveUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).bodyClone;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void CreateAvatarBodyForScreenshot() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_CreateAvatarBodyForScreenshot
               (ReviveUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&pSStack_1,0,0x38);
  uStack_2 = 0;
  fStack_3 = 0.0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_01 != (SpawnRoleDataMediator *)0x0) {
    s = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)
        System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]
        ::
        Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                  ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                   (MethodInfo *)0x0);
    id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
         SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
         SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                   (s,
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar4 = (MVAvatar *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,id,(MethodInfo *)0x0), pMVar4 != (MVAvatar *)0x0)) {
      pMVar5 = pMVar4->klass;
      bVar6 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      bStack_7 = (pMVar5->_1).naturalAligment;
      if ((bStack_7 < bVar6) ||
         ((MVAvatarLocal__Class *)(pMVar5->_1).typeHierarchy[bVar6 - 1] != TypeInfo__MVAvatarLocal))
      {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      pMVar9 = (MVAvatar *)0x0;
      if (bVar8) {
        pMVar9 = pMVar4;
      }
      if (pMVar9 == (MVAvatar *)0x0) goto code_?;
      if ((bStack_7 < bVar6) ||
         ((MVAvatarLocal__Class *)(pMVar5->_1).typeHierarchy[bVar6 - 1] != TypeInfo__MVAvatarLocal))
      {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      pMVar9 = (MVAvatar *)0x0;
      if (bVar8) {
        pMVar9 = pMVar4;
      }
      if (pMVar9 == (MVAvatar *)0x0) goto code_?;
      this_02 = MVAvatar::MVAvatar_get_Body(pMVar9,(MethodInfo *)0x0);
      if (this_02 != (MVBody *)0x0) {
        pGVar10 = MVBody::MVBody_CreateClone(this_02,(MethodInfo *)0x0);
        (this->fields).bodyClone = pGVar10;
        if (pGVar10 != (GameObject *)0x0) {
          pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_29
                              (pGVar10,
                               UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                              );
          uVar12 = 0;
          if (pUVar11 != (UseInteratorVisualization__Array *)0x0) {
            ppUVar13 = pUVar11->vector;
            for (; (int)uVar12 < (int)pUVar11->max_length; uVar12 = uVar12 + 1) {
              if (pUVar11->max_length <= uVar12) goto code_?;
              if (*ppUVar13 == (UseInteratorVisualization *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)*ppUVar13,0,(MethodInfo *)0x0);
              ppUVar13 = ppUVar13 + 1;
            }
            pGVar10 = (this->fields).bodyClone;
            if (pGVar10 != (GameObject *)0x0) {
              pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_29
                                  (pGVar10,
                                   AvatarBlobShadowController__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarBlobShadowController>______
                                  );
              uVar12 = 0;
              if (pUVar11 != (UseInteratorVisualization__Array *)0x0) {
                ppUVar13 = pUVar11->vector;
                for (; (int)uVar12 < (int)pUVar11->max_length; uVar12 = uVar12 + 1) {
                  if (pUVar11->max_length <= uVar12) goto code_?;
                  if (*ppUVar13 == (UseInteratorVisualization *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)*ppUVar13,1,(MethodInfo *)0x0);
                  ppUVar13 = ppUVar13 + 1;
                }
                pGVar10 = (this->fields).bodyClone;
                if (pGVar10 != (GameObject *)0x0) {
                  pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentsInChildren_29
                                      (pGVar10,
                                       PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                      );
                  uVar12 = 0;
                  if (pUVar11 != (UseInteratorVisualization__Array *)0x0) {
                    ppUVar13 = pUVar11->vector;
                    for (; (int)uVar12 < (int)pUVar11->max_length; uVar12 = uVar12 + 1) {
                      if (pUVar11->max_length <= uVar12) goto code_?;
                      if ((*ppUVar13 == (UseInteratorVisualization *)0x0) ||
                         (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)*ppUVar13,(MethodInfo *)0x0),
                         pGVar10 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar10,0,(MethodInfo *)0x0);
                      ppUVar13 = ppUVar13 + 1;
                    }
                    pGVar10 = (this->fields).bodyClone;
                    if (pGVar10 != (GameObject *)0x0) {
                      pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentsInChildren_29
                                          (pGVar10,
                                           AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                          );
                      uVar12 = 0;
                      if (pUVar11 != (UseInteratorVisualization__Array *)0x0) {
                        ppUVar13 = pUVar11->vector;
                        for (; (int)uVar12 < (int)pUVar11->max_length; uVar12 = uVar12 + 1) {
                          if (pUVar11->max_length <= uVar12) goto code_?;
                          if ((*ppUVar13 == (UseInteratorVisualization *)0x0) ||
                             (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_1_get_gameObject
                                                 ((Component_1 *)*ppUVar13,(MethodInfo *)0x0),
                             pGVar10 == (GameObject *)0x0)) goto code_?;
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar10,0,(MethodInfo *)0x0);
                          ppUVar13 = ppUVar13 + 1;
                        }
                        pGVar10 = (this->fields).bodyClone;
                        if (pGVar10 != (GameObject *)0x0) {
                          pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_20
                                              (pGVar10,1,
                                               AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                              );
                          uVar12 = 0;
                          if (pCVar14 != (CFX_LightIntensityFade__Array *)0x0) {
                            ppCVar15 = pCVar14->vector;
                            for (; (int)uVar12 < (int)pCVar14->max_length; uVar12 = uVar12 + 1) {
                              if (pCVar14->max_length <= uVar12) goto code_?;
                              if (*ppCVar15 == (CFX_LightIntensityFade *)0x0) goto code_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                              Behaviour_set_enabled((Behaviour *)*ppCVar15,1,(MethodInfo *)0x0);
                              ppCVar15 = ppCVar15 + 1;
                            }
                            pGVar10 = (this->fields).bodyClone;
                            if (pGVar10 != (GameObject *)0x0) {
                              pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentsInChildren_20
                                                  (pGVar10,1,
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                              uVar12 = 0;
                              if (pCVar14 != (CFX_LightIntensityFade__Array *)0x0) {
                                ppCVar15 = pCVar14->vector;
                                for (; (int)uVar12 < (int)pCVar14->max_length; uVar12 = uVar12 + 1)
                                {
                                  if (pCVar14->max_length <= uVar12) goto code_?;
                                  if (*ppCVar15 == (CFX_LightIntensityFade *)0x0)
                                  goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                  Behaviour_set_enabled((Behaviour *)*ppCVar15,1,(MethodInfo *)0x0);
                                  ppCVar15 = ppCVar15 + 1;
                                }
                                pGVar10 = (this->fields).bodyClone;
                                if (pGVar10 != (GameObject *)0x0) {
                                  CStack_16.a = (float)UnityEngine.CoreModule.dll::UnityEngine::
                                                       GameObject::
                                                       GameObject_GetComponentsInChildren_29
                                                                 (pGVar10,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                  uVar12 = 0;
                                  if ((UseInteratorVisualization__Array *)CStack_16.a !=
                                      (UseInteratorVisualization__Array *)0x0) {
                                    ppUVar13 = ((UseInteratorVisualization__Array *)CStack_16.a)->
                                               vector;
                                    for (; (int)uVar12 <
                                           (int)*(il2cpp_array_size_t *)((int)CStack_16.a + 0xc);
                                        uVar12 = uVar12 + 1) {
                                      if (*(il2cpp_array_size_t *)((int)CStack_16.a + 0xc) <= uVar12
                                         ) goto code_?;
                                      if (*ppUVar13 == (UseInteratorVisualization *)0x0)
                                      goto code_?;
                                      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                               Component_1_get_gameObject
                                                         ((Component_1 *)*ppUVar13,(MethodInfo *)0x0
                                                         );
                                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.
                                                  methodPtr & 0x2000000) != 0) &&
                                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                                        func_?();
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_Destroy_1((Object_1 *)pGVar10,(MethodInfo *)0x0);
                                      ppUVar13 = ppUVar13 + 1;
                                    }
                                    pGVar10 = (this->fields).bodyClone;
                                    if (pGVar10 != (GameObject *)0x0) {
                                      pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_GetComponentsInChildren_29
                                                          (pGVar10,
                                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                  );
                                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.
                                                  methodPtr & 0x2000000) != 0) &&
                                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                                        func_?();
                                      }
                                      bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                              Object_1_op_Inequality
                                                        ((Object_1 *)pUVar11,(Object_1 *)0x0,
                                                         (MethodInfo *)0x0);
                                      if (bVar17 != 0) {
                                        if ((pUVar11 == (UseInteratorVisualization__Array *)0x0) ||
                                           (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                     Component::Component_1_get_gameObject
                                                               ((Component_1 *)pUVar11,
                                                                (MethodInfo *)0x0),
                                           pGVar10 == (GameObject *)0x0)) goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar10,0,(MethodInfo *)0x0);
                                      }
                                      pGVar10 = (this->fields).bodyClone;
                                      if (pGVar10 != (GameObject *)0x0) {
                                        pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponentsInChildren_29
                                                            (pGVar10,
                                                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                                  );
                                        pSVar18 = (SafeSpotData *)0x0;
                                        if (pUVar11 != (UseInteratorVisualization__Array *)0x0) {
                                          ppUVar13 = pUVar11->vector;
                                          for (; (int)pSVar18 < (int)pUVar11->max_length;
                                              pSVar18 = (SafeSpotData *)
                                                        ((int)&(pSVar18->Position).x + 1)) {
                                            if ((SafeSpotData *)pUVar11->max_length <= pSVar18)
                                            goto code_?;
                                            CStack_16.a = (float)*ppUVar13;
                                            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).
                                                        Equals.methodPtr & 0x2000000) != 0) &&
                                               ((TypeInfo__UnityEngine__Object->_1).cctor_started ==
                                                0)) {
                                              func_?();
                                            }
                                            bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object
                                                    ::Object_1_op_Inequality
                                                              ((Object_1 *)CStack_16.a,
                                                               (Object_1 *)0x0,(MethodInfo *)0x0);
                                            if (bVar17 != 0) {
                                              pSStack_1 = pSVar18;
                                              pSVar19 = (SkinnedMeshOptimizer *)func_?();
                                              if (pSVar19 == (SkinnedMeshOptimizer *)0x0)
                                              goto code_?;
                                              SkinnedMeshOptimizer::
                                              SkinnedMeshOptimizer_DisableOptimizer
                                                        (pSVar19,(MethodInfo *)0x0);
                                              pSVar19 = (SkinnedMeshOptimizer *)func_?();
                                              if (pSVar19 == (SkinnedMeshOptimizer *)0x0)
                                              goto code_?;
                                              SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                                                        (pSVar19,(MethodInfo *)0x0);
                                              CStack_16.a = (float)func_?();
                                              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).
                                                          Equals.methodPtr & 0x2000000) != 0) &&
                                                 ((TypeInfo__UnityEngine__Object->_1).cctor_started
                                                  == 0)) {
                                                func_?();
                                              }
                                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                                              Object_1_Destroy_1((Object_1 *)CStack_16.a,
                                                                 (MethodInfo *)0x0);
                                            }
                                            ppUVar13 = ppUVar13 + 1;
                                          }
                                          pGVar10 = (this->fields).bodyClone;
                                          if (pGVar10 != (GameObject *)0x0) {
                                            pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::
                                                      GameObject_GetComponentsInChildren_29
                                                                (pGVar10,
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                            pSVar18 = (SafeSpotData *)0x0;
                                            if (pUVar11 != (UseInteratorVisualization__Array *)0x0)
                                            {
                                              for (; (int)pSVar18 < (int)pUVar11->max_length;
                                                  pSVar18 = (SafeSpotData *)
                                                            ((int)&(pSVar18->Position).x + 1)) {
                                                iVar20 = 0;
                                                while( true ) {
                                                  pRVar21 = (Renderer *)func_?();
                                                  if ((pRVar21 == (Renderer *)0x0) ||
                                                     (pMVar22 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Renderer::
                                                                Renderer_get_materials
                                                                          (pRVar21,(MethodInfo *)0x0
                                                                          ),
                                                     pMVar22 == (Material__Array *)0x0))
                                                  goto code_?;
                                                  if ((int)pMVar22->max_length <= iVar20) break;
                                                  pRVar21 = (Renderer *)func_?();
                                                  if (((pRVar21 == (Renderer *)0x0) ||
                                                      (pMVar22 = UnityEngine.CoreModule.dll::
                                                                 UnityEngine::Renderer::
                                                                 Renderer_get_materials
                                                                           (pRVar21,(MethodInfo *)
                                                                                    0x0),
                                                      pMVar22 == (Material__Array *)0x0)) ||
                                                     (pMVar23 = (Material *)func_?(),
                                                     pMVar23 == (Material *)0x0))
                                                  goto code_?;
                                                  bVar17 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Material::Material_HasProperty_1
                                                                    (pMVar23,StringLiteral__Color,
                                                                     (MethodInfo *)0x0);
                                                  if (bVar17 != 0) {
                                                    pSStack_1 = pSVar18;
                                                    pRVar21 = (Renderer *)func_?();
                                                    if (((pRVar21 == (Renderer *)0x0) ||
                                                        (pMVar22 = UnityEngine.CoreModule.dll::
                                                                   UnityEngine::Renderer::
                                                                   Renderer_get_materials
                                                                             (pRVar21,(MethodInfo *)
                                                                                      0x0),
                                                        pMVar22 == (Material__Array *)0x0)) ||
                                                       (pMVar23 = (Material *)func_?(),
                                                       pMVar23 == (Material *)0x0))
                                                    goto code_?;
                                                    pCVar24 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Material::
                                                              Material_get_color(&CStack_16,pMVar23,
                                                                                 (MethodInfo *)0x0);
                                                    fStack_25 = pCVar24->r;
                                                    uStack_26._0_4_ = pCVar24->g;
                                                    uStack_26._4_4_ = pCVar24->b;
                                                    fStack_27 = pCVar24->a;
                                                    pSStack_1 = pSVar18;
                                                    pRVar21 = (Renderer *)func_?();
                                                    if ((pRVar21 == (Renderer *)0x0) ||
                                                       (pMVar22 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Renderer::
                                                                  Renderer_get_materials
                                                                            (pRVar21,(MethodInfo *)
                                                                                     0x0),
                                                       pMVar22 == (Material__Array *)0x0))
                                                    goto code_?;
                                                    pMVar23 = (Material *)func_?();
                                                    QStack_28.x = fStack_25;
                                                    QStack_28.y = (float)uStack_26;
                                                    QStack_28.z = uStack_26._4_4_;
                                                    QStack_28.w = 1.0;
                                                    if (pMVar23 == (Material *)0x0)
                                                    goto code_?;
                                                    value.g = (float)uStack_26;
                                                    value.r = fStack_25;
                                                    value.b = uStack_26._4_4_;
                                                    value.a = 1.0;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Material::Material_set_color
                                                              (pMVar23,value,(MethodInfo *)0x0);
                                                  }
                                                  iVar20 = iVar20 + 1;
                                                }
                                              }
                                              pGVar10 = (this->fields).bodyClone;
                                              if ((pGVar10 != (GameObject *)0x0) &&
                                                 (pUVar11 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::
                                                            GameObject_GetComponentsInChildren_29
                                                                      (pGVar10,
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  ), pUVar11 !=
                                                     (UseInteratorVisualization__Array *)0x0)) {
                                                UnityEngine.AnimationModule.dll::UnityEngine::
                                                Animation::Animation_Play_3
                                                          ((Animation *)pUVar11,StringLiteral_Idle,
                                                           (MethodInfo *)0x0);
                                                pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::
                                                          GameObject_GetComponentsInChildren_29
                                                                    ((GameObject *)pUVar11,
                                                                                                                                          
                                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                                                  );
                                                uVar12 = 0;
                                                if (pUVar11 !=
                                                    (UseInteratorVisualization__Array *)0x0) {
                                                  ppUVar13 = pUVar11->vector;
                                                  for (; (int)uVar12 < (int)pUVar11->max_length;
                                                      uVar12 = uVar12 + 1) {
                                                    if (pUVar11->max_length <= uVar12)
                                                    goto code_?;
                                                    if (*ppUVar13 ==
                                                        (UseInteratorVisualization *)0x0)
                                                    goto code_?;
                                                    (*(code *)(*ppUVar13)->klass[1]._0.namespaze)();
                                                    ppUVar13 = ppUVar13 + 1;
                                                  }
                                                  if ((((uint)(TypeInfo__MVGameControllerBase->
                                                              vtable).Equals.methodPtr & 0x2000000)
                                                       != 0) &&
                                                     ((TypeInfo__MVGameControllerBase->_1).
                                                      cctor_started == 0)) {
                                                    func_?();
                                                  }
                                                  pEVar29 = (
                                                  Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                                  *)MVGameControllerBase::
                                                                                                        
                                                  MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                            ((MethodInfo *)0x0);
                                                  if (((pEVar29 !=
                                                        (
                                                  Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                                  *)0x0) && (pDVar30 = (
                                                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                                  *)System.Core.dll::System::Linq::
                                                                                                        
                                                  Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
                                                  ::Object,System::Object]::
                                                  Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                            (pEVar29,(MethodInfo *)0x0),
                                                  pDVar30 !=
                                                  (
                                                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                                  *)0x0)) &&
                                                  (iVar31 = mscorlib.dll::System::Collections::
                                                            Generic::
                                                  Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System
                                                  ::Object]::
                                                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                                                            (pDVar30,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                                  ), iVar31 != 0)) {
                                                    if (cRam_? == '\0') {
                                                      func_?();
                                                      cRam_? = '\x01';
                                                    }
                                                    if (*(
                                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                  **)(iVar31 + 8) !=
                                                  (
                                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                  *)0x0) {
                                                    pOVar32 = mscorlib.dll::System::Collections::
                                                              ObjectModel::Collection`1[Newtonsoft::
                                                              Json::Serialization::JsonProperty]::
                                                                                                                            
                                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                                            (*(
                                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                  **)(iVar31 + 8),
                                                  MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__
                                                  );
                                                  pUVar11 = *(UseInteratorVisualization__Array **)
                                                             (iVar31 + 0x1c);
                                                  if ((int)pUVar11 < (int)pOVar32) {
                                                    if (*(List_1_SafeSpotData_ **)(iVar31 + 8) ==
                                                        (List_1_SafeSpotData_ *)0x0)
                                                    goto code_?;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    List`1[SafeSpotData]::
                                                    List_1_SafeSpotData__get_Item
                                                              (&SStack_33,
                                                               *(List_1_SafeSpotData_ **)
                                                                (iVar31 + 8),(int32_t)pUVar11,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_
                                                  );
                                                  }
                                                  else {
                                                    CStack_16.a = (float)pUVar11;
                                                    pOVar32 = (Object *)func_?();
                                                    if ((((uint)(TypeInfo__System__String->vtable).
                                                                Equals.methodPtr & 0x2000000) != 0)
                                                       && ((TypeInfo__System__String->_1).
                                                           cctor_started == 0)) {
                                                      func_?();
                                                    }
                                                    message = mscorlib.dll::System::String::
                                                              String_Concat((Object *)
                                                                                                                                                        
                                                  StringLiteral_GetSafeGroundedPosition__,pOVar32,
                                                  (MethodInfo *)0x0);
                                                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable)
                                                              .Equals.methodPtr & 0x2000000) != 0)
                                                     && ((TypeInfo__UnityEngine__Debug->_1).
                                                         cctor_started == 0)) {
                                                    func_?();
                                                  }
                                                  UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                                  Debug_1_Log((Object *)message,(MethodInfo *)0x0);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                                  Debug_1_LogError((Object *)
                                                                                                                                      
                                                  StringLiteral_Safe_position_non_existent_,
                                                  (MethodInfo *)0x0);
                                                  pSStack_1 = &SStack_33;
                                                  func_?();
                                                  }
                                                  puVar34 = (undefined8 *)func_?();
                                                  pSStack_1 = (SafeSpotData *)0x0;
                                                  CStack_16.a = *(float *)(puVar34 + 1);
                                                  CStack_16.g = (float)*puVar34;
                                                  CStack_16.b = (float)((ulonglong)*puVar34 >> 0x20)
                                                  ;
                                                  puVar34 = (undefined8 *)func_?();
                                                  uStack_26 = *puVar34;
                                                  pSStack_1 = (SafeSpotData *)CStack_16.g;
                                                  func_?();
                                                  pGVar10 = (this->fields).bodyClone;
                                                  if (pGVar10 != (GameObject *)0x0) {
                                                    pTVar35 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar10,(MethodInfo *)0x0);
                                                    pEVar29 = (
                                                  Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                                  *)MVGameControllerBase::
                                                                                                        
                                                  MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                            ((MethodInfo *)0x0);
                                                  if (((pEVar29 !=
                                                        (
                                                  Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                                  *)0x0) && (pDVar30 = (
                                                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                                  *)System.Core.dll::System::Linq::
                                                                                                        
                                                  Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
                                                  ::Object,System::Object]::
                                                  Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                            (pEVar29,(MethodInfo *)0x0),
                                                  pDVar30 !=
                                                  (
                                                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                                  *)0x0)) &&
                                                  (this_03 = (ReviveState *)
                                                             mscorlib.dll::System::Collections::
                                                             Generic::
                                                  Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System
                                                  ::Object]::
                                                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                                                            (pDVar30,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                                  ), this_03 != (ReviveState *)0x0)) {
                                                    pSVar18 = ReviveState::
                                                              ReviveState_get_SafeGroundedData
                                                                        ((SafeSpotData *)
                                                                         &stack0xffffff14,this_03,
                                                                         (MethodInfo *)0x0);
                                                    SStack_33.Position.x = (pSVar18->Position).x;
                                                    SStack_33.Position.y = (pSVar18->Position).y;
                                                    SStack_33.Position.z = (pSVar18->Position).z;
                                                    SStack_33.Rotation.x = (pSVar18->Rotation).x;
                                                    SStack_33.Rotation.y = (pSVar18->Rotation).y;
                                                    SStack_33.Rotation.z = (pSVar18->Rotation).z;
                                                    SStack_33.Rotation.w = (pSVar18->Rotation).w;
                                                    SStack_33.CameraPosition.x =
                                                         (pSVar18->CameraPosition).x;
                                                    SStack_33.CameraPosition.y =
                                                         (pSVar18->CameraPosition).y;
                                                    SStack_33.CameraPosition.z =
                                                         (pSVar18->CameraPosition).z;
                                                    SStack_33.CameraRotation.x =
                                                         (pSVar18->CameraRotation).x;
                                                    SStack_33.CameraRotation.y =
                                                         (pSVar18->CameraRotation).y;
                                                    SStack_33.CameraRotation.z =
                                                         (pSVar18->CameraRotation).z;
                                                    SStack_33.CameraRotation.w =
                                                         (pSVar18->CameraRotation).w;
                                                    if (pTVar35 != (Transform *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar35,pSVar18->Position,
                                                                 (MethodInfo *)0x0);
                                                      pGVar10 = (this->fields).bodyClone;
                                                      if (pGVar10 != (GameObject *)0x0) {
                                                        pTVar35 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar10,(MethodInfo *)
                                                                                    0x0);
                                                        fVar36 = fStack_3;
                                                        CStack_16.b = (float)uStack_2;
                                                        CStack_16.a = (float)((ulonglong)uStack_2
                                                                             >> 0x20);
                                                        uVar37 = uStack_2;
                                                        if ((((uint)(
                                                  TypeInfo__UnityEngine__Quaternion->vtable).Equals.
                                                  methodPtr & 0x2000000) != 0) &&
                                                  ((TypeInfo__UnityEngine__Quaternion->_1).
                                                   cctor_started == 0)) {
                                                    func_?();
                                                    uVar37 = CONCAT44(CStack_16.a,CStack_16.b);
                                                  }
                                                  euler.z = fVar36;
                                                  euler.x = (float)(int)uVar37;
                                                  euler.y = (float)(int)((ulonglong)uVar37 >> 0x20);
                                                  pQVar38 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Quaternion::Quaternion_Euler_1
                                                                      (&QStack_28,euler,
                                                                       (MethodInfo *)0x0);
                                                  if (pTVar35 != (Transform *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_rotation
                                                              (pTVar35,*pQVar38,(MethodInfo *)0x0);
                                                    pGVar10 = (this->fields).bodyClone;
                                                    iVar31 = LayerUtil::LayerUtil_GetLayerNumber
                                                                       (LayerFlags__Enum_Default,
                                                                        (MethodInfo *)0x0);
                                                    LayerUtil::LayerUtil_SetLayerRecursively_4
                                                              (pGVar10,iVar31,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_Initialize
               (ReviveUIHandler *this,UnityAction *onContinueClicked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
            ((ReviveUIHandlerBase *)this,onContinueClicked,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Revive_PopupShown,1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
            MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_01 != (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
  {
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
              System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
              ::Object,System::Object]::
              Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                        (this_01,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
      this_03 = (ReviveState *)
                mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                          (this_02,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                          );
      if ((this_03 != (ReviveState *)0x0) &&
         (this_00 = (this_03->fields).safePositions, this_00 != (List_1_SafeSpotData_ *)0x0)) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__
                           );
        index = (undefined1 *)((int)&pOVar3[-1].monitor + 3);
        (this->fields).currentSafePointSelected = (int32_t)index;
        ReviveState::ReviveState_SetSafeGroundedDataIndex(this_03,(int32_t)index,(MethodInfo *)0x0);
        pSVar4 = ReviveState::ReviveState_get_SafeGroundedData(&SStack_5,this_03,(MethodInfo *)0x0)
        ;
        fVar6 = (pSVar4->Position).x;
        fVar7 = (pSVar4->Position).y;
        fVar8 = (pSVar4->Position).z;
        pSVar4 = ReviveState::ReviveState_get_SafeGroundedData
                           ((SafeSpotData *)&stack0xffffff10,this_03,(MethodInfo *)0x0);
        SStack_5.Position.x = (pSVar4->Position).x;
        SStack_5.Position.y = (pSVar4->Position).y;
        SStack_5.Position.z = (pSVar4->Position).z;
        SStack_5.Rotation.x = (pSVar4->Rotation).x;
        SStack_5.Rotation.y = (pSVar4->Rotation).y;
        SStack_5.Rotation.z = (pSVar4->Rotation).z;
        SStack_5.Rotation.w = (pSVar4->Rotation).w;
        SStack_5.CameraPosition.x = (pSVar4->CameraPosition).x;
        SStack_5.CameraPosition.y = (pSVar4->CameraPosition).y;
        SStack_5.CameraPosition.z = (pSVar4->CameraPosition).z;
        SStack_5.CameraRotation.x = (pSVar4->CameraRotation).x;
        SStack_5.CameraRotation.y = (pSVar4->CameraRotation).y;
        SStack_5.CameraRotation.z = (pSVar4->CameraRotation).z;
        SStack_5.CameraRotation.w = (pSVar4->CameraRotation).w;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.y = fVar7;
        a.x = fVar6;
        a.z = fVar8;
        b.y = SStack_5.CameraPosition.y;
        b.x = SStack_5.CameraPosition.x;
        b.z = SStack_5.CameraPosition.z;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&stack0xffffff6c,a,b,(MethodInfo *)0x0);
        uStack_1._0_4_ = pVVar9->x;
        uStack_1._4_4_ = pVVar9->y;
        fStack_2 = pVVar9->z;
        fVar10 = (float10)func_?();
        if (_UNK_? < (float)fVar10) {
          ReviveUIHandler_CreateAvatarBodyForScreenshot(this,(MethodInfo *)0x0);
        }
        this_04 = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_04,StringLiteral_GenerateTexture,(MethodInfo *)0x0);
        if (this_04 != (GameObject *)0x0) {
          method_00 = (MethodInfo *)&UNK_?;
          this_05 = (Transform *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                              (this_04,
                               ReviveScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ReviveScreenshotGenerator>__
                              );
          pUStack_11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUStack_11,(Object *)this,
                     MethodInfo__ReviveUIHandler__OnGenerateTextureComplete_System__Byte____,
                     MethodInfo__System__Action<System::Byte_[]>__Action_System__Object__void__);
          pSVar4 = ReviveState::ReviveState_get_SafeGroundedData
                             ((SafeSpotData *)&stack0xffffff10,this_03,(MethodInfo *)0x0);
          fVar6 = (pSVar4->CameraPosition).x;
          fVar7 = (pSVar4->CameraPosition).y;
          pTVar12 = (Transform *)(pSVar4->CameraPosition).z;
          pSVar4 = ReviveState::ReviveState_get_SafeGroundedData
                             ((SafeSpotData *)&stack0xffffff10,this_03,(MethodInfo *)0x0);
          SStack_5.Position.x = (pSVar4->Position).x;
          SStack_5.Position.y = (pSVar4->Position).y;
          SStack_5.Position.z = (pSVar4->Position).z;
          SStack_5.Rotation.x = (pSVar4->Rotation).x;
          SStack_5.Rotation.y = (pSVar4->Rotation).y;
          SStack_5.Rotation.z = (pSVar4->Rotation).z;
          SStack_5.Rotation.w = (pSVar4->Rotation).w;
          SStack_5.CameraPosition.x = (pSVar4->CameraPosition).x;
          SStack_5.CameraPosition.y = (pSVar4->CameraPosition).y;
          SStack_5.CameraPosition.z = (pSVar4->CameraPosition).z;
          SStack_5.CameraRotation.x = (pSVar4->CameraRotation).x;
          SStack_5.CameraRotation.y = (pSVar4->CameraRotation).y;
          SStack_5.CameraRotation.z = (pSVar4->CameraRotation).z;
          SStack_5.CameraRotation.w = (pSVar4->CameraRotation).w;
          pRVar13 = (this->fields)._.targetTexture;
          if (pRVar13 != (RawImage *)0x0) {
            pRVar14 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pRVar13,(MethodInfo *)0x0);
            if (pRVar14 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                        ((Rect *)&stack0xffffff68,pRVar14,(MethodInfo *)0x0);
              fVar8 = SubscribableVariableBase`1[System::Single]::
                       SubscribableVariableBase_1_System_Single__get_Value
                                 ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffff58,
                                  (MethodInfo *)0x0);
              pRVar13 = (this->fields)._.targetTexture;
              if (pRVar13 != (RawImage *)0x0) {
                pRVar14 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pRVar13,(MethodInfo *)0x0);
                if (pRVar14 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            ((Rect *)&stack0xffffff68,pRVar14,(MethodInfo *)0x0);
                  fStack_15 = UnityStandardAssets::CrossPlatformInput::
                             CrossPlatformInputManager+VirtualAxis::
                             CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                                       ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffff48,
                                        (MethodInfo *)0x0);
                  if (this_05 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    this_06 = (ScaleAnimationBase *)func_?();
                    ScaleAnimationBase::ScaleAnimationBase_Play(this_06,0.0,method_00);
                    if (this_06 != (ScaleAnimationBase *)0x0) {
                      this_06[1].monitor = (MonitorData *)(int)fVar8;
                      this_06[2].fields.target = this_05;
                      this_06[1].fields.originalScale.y = fVar6;
                      this_06[1].fields.originalScale.z = fVar7;
                      this_06[1].fields._._._._.m_CachedPtr = (void *)(int)fStack_15;
                      this_06[1].fields.target = pTVar12;
                      this_06[1].fields.testState = (int32_t)SStack_5.CameraRotation.x;
                      this_06[1].fields.OnScaleAnimationStopped =
                           (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                           SStack_5.CameraRotation.y;
                      this_06[2].klass = (ScaleAnimationBase__Class *)SStack_5.CameraRotation.z;
                      this_06[2].monitor = (MonitorData *)SStack_5.CameraRotation.w;
                      this_06[2].fields.originalScale.z = (float)pUStack_11;
                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                      MonoBehaviour_StartCoroutine_Auto
                                ((MonoBehaviour *)this_05,(IEnumerator *)this_06,(MethodInfo *)0x0);
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
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnAdFinishedContinue() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnAdFinishedContinue
               (ReviveUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager,pIVar1,1);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar2 != (GameEventManager *)0x0) &&
       (this_00 = (pGVar2->fields).AvatarCommandsPlayMode,
       this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SpawnAtSafeSpot
                (this_00,(this->fields).currentSafePointSelected,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__ReviveUIHandler->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__ReviveUIHandler___OnAdFinishedContinue_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__ReviveUIHandler->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__ReviveUIHandler->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGenerateTextureComplete(Byte[]) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnGenerateTextureComplete
               (ReviveUIHandler *this,Byte__Array *generatedTexture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  pMStack_2 = (MonitorData *)0x0;
  pRVar3 = (this->fields)._.targetTexture;
  if (pRVar3 != (RawImage *)0x0) {
    pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pRVar3,(MethodInfo *)0x0);
    if (pRVar4 != (RectTransform *)0x0) {
      pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffc8,pRVar4,(MethodInfo *)0x0);
      pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)pRVar5->m_XMin;
      pMStack_2 = (MonitorData *)pRVar5->m_YMin;
      fVar6 = SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&pSStack_1,(MethodInfo *)0x0)
      ;
      pRVar3 = (this->fields)._.targetTexture;
      if (pRVar3 != (RawImage *)0x0) {
        pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pRVar3,(MethodInfo *)0x0);
        if (pRVar4 != (RectTransform *)0x0) {
          pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)&stack0xffffffc8,pRVar4,(MethodInfo *)0x0);
          fVar7 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
                  CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                            ((CrossPlatformInputManager_VirtualAxis *)pRVar5->m_YMin,
                             (MethodInfo *)pRVar5->m_Width);
          this_00 = (Texture2D *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_1
                    (this_00,(int)fVar6,(int)fVar7,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
          UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
          ImageConversion_LoadImage_1(this_00,generatedTexture,(MethodInfo *)0x0);
          pRVar3 = (this->fields)._.targetTexture;
          if (pRVar3 != (RawImage *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (pRVar3,(Texture *)this_00,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            obj = (this->fields).bodyClone;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnRewardedAdWatched(RewardedAdResult) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnRewardedAdWatched
               (ReviveUIHandler *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult,&result
                                 );
  bVar2 = (int)piVar1 < 0;
  bVar3 = piVar1 == (int *)0x0;
  bVar4 = (POPCOUNT((uint)piVar1 & 0xff) & 1U) == 0;
  if (!(bool)bVar3) {
    pSVar5 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pRVar6 = (RewardedAdResult__Enum *)func_?(piVar1);
    result = *pRVar6;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_RESULT_OF_REVIVE__,pSVar5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_Revive_WatchedReviveAd,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar2 = (int)pMVar7 < 0;
    bVar3 = pMVar7 == (MVNetworkGame *)0x0;
    bVar4 = (POPCOUNT((uint)pMVar7 & 0xff) & 1U) == 0;
    if (!(bool)bVar3) {
      pAVar8 = (pMVar7->fields).OnWinningConditionFulfilled;
      pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      bVar2 = (int)this < 0;
      bVar3 = this == (ReviveUIHandler *)0x0;
      bVar4 = (POPCOUNT((uint)this & 0xff) & 1U) == 0;
      if (!(bool)bVar3) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar9,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
                   MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
        pAVar10 = (Action_1_IWinningCondition_ *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
        pAVar8 = (Action_1_IWinningCondition_ *)0x0;
        if (pAVar10 != (Action_1_IWinningCondition_ *)0x0) {
          if (pAVar10->klass == TypeInfo__System__Action<IWinningCondition>) {
            pAVar8 = pAVar10;
          }
          bVar11 = 0;
          bVar12 = 0;
          bVar2 = (int)pAVar8 < 0;
          bVar4 = (POPCOUNT((uint)pAVar8 & 0xff) & 1U) == 0;
          bVar3 = 1;
          pAVar13 = TypeInfo__System__Action<IWinningCondition>;
          if (pAVar8 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
        }
        (pMVar7->fields).OnWinningConditionFulfilled = pAVar8;
        if ((this->fields).roundEndedWhileWatchingAd != 0) {
          pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__ReviveUIHandler->static_fields->__f__am_cache1 ==
              (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
            pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar9,(Object *)0x0,
                       MethodInfo__ReviveUIHandler___OnRewardedAdWatched_m__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                      );
            TypeInfo__ReviveUIHandler->static_fields->__f__am_cache1 =
                 (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar9;
          }
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__ReviveUIHandler->static_fields->__f__am_cache1;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar14,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          (this->fields).roundEndedWhileWatchingAd = 0;
          return;
        }
        switch(result) {
        case RewardedAdResult__Enum_ErrorClient:
        case RewardedAdResult__Enum_ErrorInternal:
        case RewardedAdResult__Enum_RewardNotUnlocked:
          method_00 = TypeInfo__ReviveUIHandler___OnRewardedAdWatched_c__AnonStorey1;
          this_02 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
          bVar2 = (int)this_02 < 0;
          bVar3 = this_02 == (ScaleAnimationBase *)0x0;
          bVar4 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
          if (!(bool)bVar3) {
            (this_02->fields).state = (int32_t)this;
            pXVar15 = (XpBoostParticlePreviewer *)(this->fields)._.errorNotification;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pXVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                (pXVar15,
                                 NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                                );
            (this_02->fields)._._._._.m_CachedPtr = pXVar15;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pIVar16 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            bVar2 = (int)pIVar16 < 0;
            bVar3 = pIVar16 == (IAdManager *)0x0;
            bVar4 = (POPCOUNT((uint)pIVar16 & 0xff) & 1U) == 0;
            if (!(bool)bVar3) {
              pSVar5 = (String *)
                       func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,
                                       pIVar16);
              header = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
              bVar2 = (int)pXVar15 < 0;
              bVar3 = pXVar15 == (XpBoostParticlePreviewer *)0x0;
              bVar4 = (POPCOUNT((uint)pXVar15 & 0xff) & 1U) == 0;
              if (!(bool)bVar3) {
                NotificationPopup::NotificationPopup_Initialize
                          ((NotificationPopup *)pXVar15,pSVar5,header,(MethodInfo *)0x0);
                pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(
                                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                            );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar9,(Object *)this_02,
                           MethodInfo__ReviveUIHandler___OnRewardedAdWatched_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  method = (MethodInfo *)&UNK_?;
                  func_?();
                }
                result = RewardedAdResult__Enum_ErrorClient;
                method = (MethodInfo *)pUVar9;
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          (pGVar14,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar9,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                return;
              }
            }
          }
          break;
        case RewardedAdResult__Enum_ErrorTimeout:
          this_00 = (HoverCraftMotor *)(this->fields)._.continueButton;
          bVar2 = (int)this_00 < 0;
          bVar3 = this_00 == (HoverCraftMotor *)0x0;
          bVar4 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
          if (!(bool)bVar3) {
            this_01 = (UnityEvent *)
                      HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
            bVar2 = (int)this_01 < 0;
            bVar3 = this_01 == (UnityEvent *)0x0;
            bVar4 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
            if (!(bool)bVar3) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
                        (this_01,(MethodInfo *)0x0);
              return;
            }
          }
          break;
        case RewardedAdResult__Enum_RewardUnlocked:
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pGVar17 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                              ((MethodInfo *)0x0);
          bVar2 = (int)pGVar17 < 0;
          bVar3 = pGVar17 == (GameEventManager *)0x0;
          bVar4 = (POPCOUNT((uint)pGVar17 & 0xff) & 1U) == 0;
          if (!(bool)bVar3) {
            pGVar18 = (pGVar17->fields).AvatarCommandsPlayMode;
            bVar2 = (int)pGVar18 < 0;
            bVar3 = pGVar18 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0;
            bVar4 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
            if (!(bool)bVar3) {
              GameEventManager+AvatarCommandsPlayModeManager::
              GameEventManager_AvatarCommandsPlayModeManager_MoveBodyToSafeSpot
                        (pGVar18,(this->fields).currentSafePointSelected,(MethodInfo *)0x0);
              return;
            }
          }
          break;
        default:
          return;
        }
      }
    }
  }
  bVar12 = 0;
  bVar11 = 0;
  func_?(0);
  pAVar10 = extraout_ECX;
  pAVar13 = extraout_EDX;
code_?:
  puVar19 = (uint *)func_?(pAVar10,pAVar13);
  uVar20 = *puVar19;
  uVar21 = *puVar19;
  *puVar19 = *puVar19 - 0x10;
  this_03 = (ReviveUIHandlerBase *)
            ((uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4(uVar21,0x10) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((int)*puVar19 < 0) * 0x80 | (uint)(*puVar19 == 0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*puVar19 & 0xff) & 1U) == 0) * 4 |
             (uint)(uVar20 < 0x10) | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
             (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
  uVar20 = *puVar19;
  *puVar19 = *puVar19 - 0x10;
  puVar19 = (uint *)((int)puVar19 + (-0x4d102883 - (uint)(uVar20 < 0x10)));
  uVar20 = *puVar19;
  uVar21 = *puVar19;
  *puVar19 = *puVar19 - 0x10;
  uVar22 = *puVar19;
  uVar23 = *puVar19;
  uVar24 = *puVar19;
  *puVar19 = *puVar19 - 0x10;
  if (cRam_? == '\0') {
    func_?(_UNK_?,&stack0xfffffffc,
                    (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4(uVar21,0x10) * 0x800 |
                    (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                    (uint)((int)uVar22 < 0) * 0x80 | (uint)(uVar23 == 0) * 0x40 |
                    (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(uVar24 & 0xff) & 1U) == 0) * 4 |
                    (uint)(uVar20 < 0x10) | (uint)(in_ID & 1) * 0x200000 |
                    (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
                    (uint)(in_AC & 1) * 0x40000,this_03,
                    (uint)(in_NT & 1) * 0x4000 | (uint)(bVar12 & 1) * 0x800 |
                    (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                    (uint)(bVar2 & 1) * 0x80 | (uint)(bVar3 & 1) * 0x40 | (uint)(in_AF & 1) * 0x10
                    | (uint)(bVar4 & 1) * 4 | (uint)(bVar11 & 1) | (uint)(in_ID & 1) * 0x200000 |
                    (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
                    (uint)(in_AC & 1) * 0x40000);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar17 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar17 != (GameEventManager *)0x0) &&
     (pGVar18 = (pGVar17->fields).AvatarCommandsPlayMode,
     pGVar18 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_MoveBodyToSafeSpot
              (pGVar18,(int32_t)this_03[1].monitor,(MethodInfo *)0x0);
    ReviveUIHandlerBase::ReviveUIHandlerBase_OnWatchAdClicked(this_03,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void OnWatchAdClicked() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnWatchAdClicked
               (ReviveUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_MoveBodyToSafeSpot
              (this_00,(this->fields).currentSafePointSelected,(MethodInfo *)0x0);
    ReviveUIHandlerBase::ReviveUIHandlerBase_OnWatchAdClicked
              ((ReviveUIHandlerBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ReviveUIHandler___Update_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    *(undefined1 *)&(this_00->fields)._._._._.m_CachedPtr = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__ReviveUIHandler___Update_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&(this_00->fields)._._._._.m_CachedPtr != '\0') {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_02 != (MVNetworkGame *)0x0) &&
       (this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                               ((InventoryItemPreviewer *)this_02,(MethodInfo *)0x0),
       this_03 !=
       (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
        *)0x0)) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_03,(MethodInfo *)0x0);
      if ((pOVar1 != (Object *)0x2) && ((this->fields).roundEndedWhileWatchingAd == 0)) {
        ReviveUIHandlerBase::ReviveUIHandlerBase_Update
                  ((ReviveUIHandlerBase *)this,(MethodInfo *)0x0);
        return;
      }
      (*(code *)(this->klass->vtable).OnRewardedAdWatched.method)
                (this,2,(this->klass->vtable).OnAdFinishedContinue.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnAdFinishedContinue>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler__OnAdFinishedContinue_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnRewardedAdWatched>m__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler__OnRewardedAdWatched_m__1
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Game_ended_while_you_were_busy__,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  if (x == (IModalPopupCreator *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar6 = &(&(x->klass->vtable).Create_3)[pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
  (*(code *)*ppMVar6)(x,unaff_ESI,pSVar1,ppMVar6[1]);
  return;
}


/* AdContext get_AdContext() */

AdContext__Enum
Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_get_AdContext
          (ReviveUIHandler *this,MethodInfo *method)

{
  return AdContext__Enum_Revive;
}

