
/* Void CleanupAvatarBodyAfterScreenshot() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_CleanupAvatarBodyAfterScreenshot
               (ReviveUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).bodyClone;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&
                    ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                   );
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
                    AvatarBlobShadowController__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarBlobShadowController>______
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
    func_?(&
                    SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                   );
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    func_?(&StringLiteral__Color);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
         SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                   ((SpawnRoleVariable_1_System_Object_ *)(pSVar1->fields).woId,
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(int32_t)id,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObject *)0x0) {
        bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
           ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__MVAvatarLocal)) goto code_?;
        if (pMVar2[3].klass != (MVWorldObject__Class *)0x0) {
          pGVar4 = MVBody::MVBody_CreateClone((MVBody *)pMVar2[3].klass,0,0,(MethodInfo *)0x0);
          ppGVar5 = &(this->fields).bodyClone;
          *ppGVar5 = pGVar4;
          ppGStack_6 = ppGVar5;
          func_?();
          if (*ppGVar5 != (GameObject *)0x0) {
            pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren
                               (*ppGVar5,
                                UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                               );
            uVar8 = 0;
            if (pOVar7 != (Object__Array *)0x0) {
              ppOVar9 = pOVar7->vector;
              for (; (int)uVar8 < (int)pOVar7->max_length; uVar8 = uVar8 + 1) {
                if (pOVar7->max_length <= uVar8) goto code_?;
                if ((Behaviour *)*ppOVar9 == (Behaviour *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)*ppOVar9,0,(MethodInfo *)0x0);
                ppOVar9 = ppOVar9 + 1;
              }
              if (*ppGStack_6 != (GameObject *)0x0) {
                pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponentsInChildren
                                   (*ppGStack_6,
                                    AvatarBlobShadowController__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarBlobShadowController>______
                                   );
                uVar8 = 0;
                if (pOVar7 != (Object__Array *)0x0) {
                  ppOVar9 = pOVar7->vector;
                  for (; (int)uVar8 < (int)pOVar7->max_length; uVar8 = uVar8 + 1) {
                    if (pOVar7->max_length <= uVar8) goto code_?;
                    if ((Behaviour *)*ppOVar9 == (Behaviour *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)*ppOVar9,1,(MethodInfo *)0x0);
                    ppOVar9 = ppOVar9 + 1;
                  }
                  if (*ppGStack_6 != (GameObject *)0x0) {
                    pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_GetComponentsInChildren
                                       (*ppGStack_6,
                                        PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                       );
                    uVar8 = 0;
                    if (pOVar7 != (Object__Array *)0x0) {
                      ppOVar9 = pOVar7->vector;
                      while( true ) {
                        if ((int)pOVar7->max_length <= (int)uVar8) break;
                        if (pOVar7->max_length <= uVar8) goto code_?;
                        if ((Component *)*ppOVar9 == (Component *)0x0) goto code_?;
                        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)*ppOVar9,(MethodInfo *)0x0);
                        if (pGVar4 == (GameObject *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar4,0,(MethodInfo *)0x0);
                        uVar8 = uVar8 + 1;
                        ppOVar9 = ppOVar9 + 1;
                      }
                      if (*ppGStack_6 != (GameObject *)0x0) {
                        pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_GetComponentsInChildren
                                           (*ppGStack_6,
                                            AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                           );
                        uVar8 = 0;
                        if (pOVar7 != (Object__Array *)0x0) {
                          ppOVar9 = pOVar7->vector;
                          while( true ) {
                            if ((int)pOVar7->max_length <= (int)uVar8) break;
                            if (pOVar7->max_length <= uVar8) goto code_?;
                            if ((Component *)*ppOVar9 == (Component *)0x0) goto code_?;
                            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject
                                               ((Component *)*ppOVar9,(MethodInfo *)0x0);
                            if (pGVar4 == (GameObject *)0x0) goto code_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                            uVar8 = uVar8 + 1;
                            ppOVar9 = ppOVar9 + 1;
                          }
                          if (*ppGStack_6 != (GameObject *)0x0) {
                            p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponentsInChildren_4
                                                (*ppGStack_6,1,
                                                 AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                                );
                            uVar8 = 0;
                            if (p_Var10 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                              pp_Var21 = p_Var10->vector;
                              for (; (int)uVar8 < (int)p_Var10->max_length; uVar8 = uVar8 + 1) {
                                if (p_Var10->max_length <= uVar8) goto code_?;
                                if ((Behaviour *)*pp_Var21 == (Behaviour *)0x0)
                                goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                Behaviour_set_enabled((Behaviour *)*pp_Var21,1,(MethodInfo *)0x0);
                                pp_Var21 = pp_Var21 + 1;
                              }
                              if (*ppGStack_6 != (GameObject *)0x0) {
                                p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren_4
                                                    (*ppGStack_6,1,
                                                                                                          
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                                uVar8 = 0;
                                if (p_Var10 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var21 = p_Var10->vector;
                                  for (; (int)uVar8 < (int)p_Var10->max_length; uVar8 = uVar8 + 1
                                      ) {
                                    if (p_Var10->max_length <= uVar8) goto code_?;
                                    if ((Behaviour *)*pp_Var21 == (Behaviour *)0x0)
                                    goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                    Behaviour_set_enabled
                                              ((Behaviour *)*pp_Var21,1,(MethodInfo *)0x0);
                                    pp_Var21 = pp_Var21 + 1;
                                  }
                                  if (*ppGStack_6 != (GameObject *)0x0) {
                                    pOStack_10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_GetComponentsInChildren
                                                          (*ppGStack_6,
                                                                                                                      
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                    uVar8 = 0;
                                    if (pOStack_10 != (Object__Array *)0x0) {
                                      ppOVar9 = pOStack_10->vector;
                                      while( true ) {
                                        ppGVar5 = ppGStack_6;
                                        if ((int)pOStack_10->max_length <= (int)uVar8) break;
                                        if (pOStack_10->max_length <= uVar8) goto code_?;
                                        if ((Component *)*ppOVar9 == (Component *)0x0)
                                        goto code_?;
                                        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                 ::Component_get_gameObject
                                                           ((Component *)*ppOVar9,(MethodInfo *)0x0
                                                           );
                                        if ((TypeInfo__UnityEngine__Object->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        UnityEngine.CoreModule.dll::UnityEngine::Object::
                                        Object_1_Destroy_1((Object_1 *)pGVar4,(MethodInfo *)0x0);
                                        uVar8 = uVar8 + 1;
                                        ppOVar9 = ppOVar9 + 1;
                                      }
                                      if (*ppGStack_6 != (GameObject *)0x0) {
                                        this_01 = (Component *)
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponentInChildren_1
                                                            (*ppGStack_6,
                                                                                                                          
                                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                  );
                                        if ((TypeInfo__UnityEngine__Object->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                Object_1_op_Inequality
                                                          ((Object_1 *)this_01,(Object_1 *)0x0,
                                                           (MethodInfo *)0x0);
                                        if (bVar11 == 0) {
code_?:
                                          if (*ppGVar5 != (GameObject *)0x0) {
                                            pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                     GameObject::GameObject_GetComponentsInChildren
                                                               (*ppGVar5,
                                                                                                                                
                                                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                                  );
                                            uVar8 = 0;
                                            if (pOVar7 != (Object__Array *)0x0) {
                                              ppOVar9 = pOVar7->vector;
                                              for (; (int)uVar8 < (int)pOVar7->max_length;
                                                  uVar8 = uVar8 + 1) {
                                                if (pOVar7->max_length <= uVar8)
                                                goto code_?;
                                                pOStack_10 = (Object__Array *)*ppOVar9;
                                                if ((TypeInfo__UnityEngine__Object->_1).
                                                    cctor_finished_or_no_cctor == 0) {
                                                  func_?();
                                                }
                                                bVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Object::Object_1_op_Inequality
                                                                  ((Object_1 *)pOStack_10,
                                                                   (Object_1 *)0x0,(MethodInfo *)0x0
                                                                  );
                                                if (bVar11 != 0) {
                                                  if (pOVar7->max_length <= uVar8)
                                                  goto code_?;
                                                  if ((SkinnedMeshOptimizer *)*ppOVar9 ==
                                                      (SkinnedMeshOptimizer *)0x0)
                                                  goto code_?;
                                                  SkinnedMeshOptimizer::
                                                  SkinnedMeshOptimizer_DisableOptimizer
                                                            ((SkinnedMeshOptimizer *)*ppOVar9,
                                                             (MethodInfo *)0x0);
                                                  if (pOVar7->max_length <= uVar8)
                                                  goto code_?;
                                                  if ((SkinnedMeshOptimizer *)*ppOVar9 ==
                                                      (SkinnedMeshOptimizer *)0x0)
                                                  goto code_?;
                                                  SkinnedMeshOptimizer::
                                                  SkinnedMeshOptimizer_TurnOffMesh
                                                            ((SkinnedMeshOptimizer *)*ppOVar9,
                                                             (MethodInfo *)0x0);
                                                  if (pOVar7->max_length <= uVar8)
                                                  goto code_?;
                                                  pOStack_10 = (Object__Array *)*ppOVar9;
                                                  if ((TypeInfo__UnityEngine__Object->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                  Object_1_Destroy_1((Object_1 *)pOStack_10,
                                                                     (MethodInfo *)0x0);
                                                }
                                                ppOVar9 = ppOVar9 + 1;
                                              }
                                              if (*ppGStack_6 != (GameObject *)0x0) {
                                                pOStack_10 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::
                                                            GameObject_GetComponentsInChildren
                                                                      (*ppGStack_6,
                                                                                                                                              
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                                uVar8 = 0;
                                                if (pOStack_10 != (Object__Array *)0x0) {
                                                  ppOStack_12 = pOStack_10->vector;
                                                  while( true ) {
                                                    if ((int)pOStack_10->max_length <= (int)uVar8)
                                                    break;
                                                    uVar13 = 0;
                                                    iVar14 = 0x10;
                                                    while( true ) {
                                                      if (pOStack_10->max_length <= uVar8)
                                                      goto code_?;
                                                      if ((Renderer *)*ppOStack_12 ==
                                                          (Renderer *)0x0) goto code_?;
                                                      pMVar15 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Renderer::
                                                                Renderer_get_materials
                                                                          ((Renderer *)*ppOStack_12,
                                                                           (MethodInfo *)0x0);
                                                      if (pMVar15 == (Material__Array *)0x0)
                                                      goto code_?;
                                                      if ((int)pMVar15->max_length <= (int)uVar13)
                                                      break;
                                                      if (pOStack_10->max_length <= uVar8)
                                                      goto code_?;
                                                      if ((Renderer *)*ppOStack_12 ==
                                                          (Renderer *)0x0) goto code_?;
                                                      pMVar15 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Renderer::
                                                                Renderer_get_materials
                                                                          ((Renderer *)*ppOStack_12,
                                                                           (MethodInfo *)0x0);
                                                      if (pMVar15 == (Material__Array *)0x0)
                                                      goto code_?;
                                                      if (pMVar15->max_length <= uVar13)
                                                      goto code_?;
                                                      pMVar16 = *(Material **)
                                                                ((int)pMVar15->vector +
                                                                iVar14 + -0x10);
                                                      if (pMVar16 == (Material *)0x0)
                                                      goto code_?;
                                                      bVar11 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Material::
                                                              Material_HasProperty_1
                                                                        (pMVar16,StringLiteral__Color
                                                                         ,(MethodInfo *)0x0);
                                                      if (bVar11 != 0) {
                                                        if (pOStack_10->max_length <= uVar8)
                                                        goto code_?;
                                                        if ((Renderer *)*ppOStack_12 ==
                                                            (Renderer *)0x0) goto code_?;
                                                        pMVar15 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Renderer::
                                                                  Renderer_get_materials
                                                                            ((Renderer *)
                                                                             *ppOStack_12,
                                                                             (MethodInfo *)0x0);
                                                        if (pMVar15 == (Material__Array *)0x0)
                                                        goto code_?;
                                                        if (pMVar15->max_length <= uVar13)
                                                        goto code_?;
                                                        pMVar16 = *(Material **)
                                                                  ((int)pMVar15->vector +
                                                                  iVar14 + -0x10);
                                                        if (pMVar16 == (Material *)0x0)
                                                        goto code_?;
                                                        pCVar17 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Material::
                                                                  Material_get_color(&CStack_18,
                                                                                     pMVar16,(
                                                  MethodInfo *)0x0);
                                                  fStack_19 = pCVar17->r;
                                                  uStack_20._0_4_ = pCVar17->g;
                                                  uStack_20._4_4_ = pCVar17->b;
                                                  fStack_21 = pCVar17->a;
                                                  if (pOStack_10->max_length <= uVar8)
                                                  goto code_?;
                                                  if ((Renderer *)*ppOStack_12 == (Renderer *)0x0)
                                                  goto code_?;
                                                  pMVar15 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)*ppOStack_12,
                                                                       (MethodInfo *)0x0);
                                                  if (pMVar15 == (Material__Array *)0x0)
                                                  goto code_?;
                                                  if (pMVar15->max_length <= uVar13)
                                                  goto code_?;
                                                  pMVar16 = *(Material **)
                                                            ((int)pMVar15->vector + iVar14 + -0x10);
                                                  QStack_22.x = fStack_19;
                                                  QStack_22.y = (float)uStack_20;
                                                  QStack_22.z = uStack_20._4_4_;
                                                  QStack_22.w = 1.0;
                                                  if (pMVar16 == (Material *)0x0)
                                                  goto code_?;
                                                  value.g = (float)uStack_20;
                                                  value.r = fStack_19;
                                                  value.b = uStack_20._4_4_;
                                                  value.a = 1.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Material
                                                  ::Material_set_color
                                                            (pMVar16,value,(MethodInfo *)0x0);
                                                  }
                                                  uVar13 = uVar13 + 1;
                                                  iVar14 = iVar14 + 4;
                                                  }
                                                  uVar8 = uVar8 + 1;
                                                  ppOStack_12 = ppOStack_12 + 1;
                                                  }
                                                  if (*ppGStack_6 != (GameObject *)0x0) {
                                                    this_02 = (Animation *)
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponentInChildren_1
                                                                        (*ppGStack_6,
                                                                                                                                                  
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                                  if (this_02 != (Animation *)0x0) {
                                                    UnityEngine.AnimationModule.dll::UnityEngine::
                                                    Animation::Animation_Play_2
                                                              (this_02,StringLiteral_Idle,
                                                               (MethodInfo *)0x0);
                                                    pOVar7 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Component::
                                                             Component_GetComponentsInChildren
                                                                       ((Component *)this_02,
                                                                                                                                                
                                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                                                  );
                                                  uVar8 = 0;
                                                  if (pOVar7 != (Object__Array *)0x0) {
                                                    ppOVar9 = pOVar7->vector;
                                                    while( true ) {
                                                      if ((int)pOVar7->max_length <= (int)uVar8)
                                                      break;
                                                      if (pOVar7->max_length <= uVar8)
                                                      goto code_?;
                                                      if (*ppOVar9 == (Object *)0x0)
                                                      goto code_?;
                                                      (*(code *)(*ppOVar9)->klass[1]._0.namespaze)
                                                                ();
                                                      uVar8 = uVar8 + 1;
                                                      ppOVar9 = ppOVar9 + 1;
                                                    }
                                                    pSVar1 = MVGameControllerBase::
                                                                                                                          
                                                  MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                            ((MethodInfo *)0x0);
                                                  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
                                                     (pWVar23 = (WebCompletionSource_1_System_Object_
                                                                *)(pSVar1->fields).reviveState,
                                                     pWVar23 != (WebCompletionSource_1_System_Object_
                                                                *)0x0)) {
                                                    pTVar24 = System.dll::System::Net::
                                                              WebCompletionSource`1[System::Object]
                                                              ::
                                                  WebCompletionSource_1_System_Object__get_Task
                                                            (pWVar23,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                                  );
                                                  if (pTVar24 != (Task *)0x0) {
                                                    ReviveState::
                                                    ReviveState_GetSafeGroundedDataAtSelectedIndex
                                                              ((SafeSpotData *)&stack0xffffff50,
                                                               (ReviveState *)pTVar24,
                                                               (MethodInfo *)0x0);
                                                    puVar25 = (undefined8 *)func_?();
                                                    CStack_18._4_8_ = *puVar25;
                                                    CStack_18.a = *(float *)(puVar25 + 1);
                                                    puVar25 = (undefined8 *)func_?();
                                                    ppGVar5 = ppGStack_6;
                                                    uStack_20 = *puVar25;
                                                    fStack_21 = *(float *)(puVar25 + 1);
                                                    if (*ppGStack_6 != (GameObject *)0x0) {
                                                      pTVar26 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (*ppGStack_6,
                                                                           (MethodInfo *)0x0);
                                                      pSVar1 = MVGameControllerBase::
                                                                                                                              
                                                  MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                            ((MethodInfo *)0x0);
                                                  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
                                                     (pWVar23 = (WebCompletionSource_1_System_Object_
                                                                *)(pSVar1->fields).reviveState,
                                                     pWVar23 != (WebCompletionSource_1_System_Object_
                                                                *)0x0)) {
                                                    pTVar24 = System.dll::System::Net::
                                                              WebCompletionSource`1[System::Object]
                                                              ::
                                                  WebCompletionSource_1_System_Object__get_Task
                                                            (pWVar23,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                                  );
                                                  if (pTVar24 != (Task *)0x0) {
                                                    pSVar27 = ReviveState::
                                                              ReviveState_get_SafeGroundedData
                                                                        ((SafeSpotData *)
                                                                         &stack0xffffff50,
                                                                         (ReviveState *)pTVar24,
                                                                         (MethodInfo *)0x0);
                                                    if (pTVar26 != (Transform *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar26,pSVar27->Position,
                                                                 (MethodInfo *)0x0);
                                                      pGVar4 = *ppGVar5;
                                                      if (pGVar4 != (GameObject *)0x0) {
                                                        pTVar26 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar4,(MethodInfo *)
                                                                                    0x0);
                                                        fStack_21 = CStack_18.a * _UNK_?;
                                                        euler.y = uStack_20._4_4_ * _UNK_?;
                                                        euler.x = CStack_18.g * _UNK_?;
                                                        euler.z = fStack_21;
                                                        pQVar28 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Quaternion::
                                                                  Quaternion_Internal_FromEulerRad
                                                                            (&QStack_22,euler,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar26 != (Transform *)0x0) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_rotation
                                                                    (pTVar26,*pQVar28,
                                                                     (MethodInfo *)0x0);
                                                          pGVar4 = *ppGVar5;
                                                          layer = LayerUtil::
                                                                  LayerUtil_GetLayerNumber
                                                                            (
                                                  LayerFlags__Enum_Default,(MethodInfo *)0x0);
                                                  LayerUtil::LayerUtil_SetLayerRecursively_4
                                                            (pGVar4,layer,(MethodInfo *)0x0);
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
                                        else if (this_01 != (Component *)0x0) {
                                          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   Component::Component_get_gameObject
                                                             (this_01,(MethodInfo *)0x0);
                                          if (pGVar4 != (GameObject *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
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
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_Initialize
               (ReviveUIHandler *this,UnityAction *onContinueClicked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Byte_[]>);
    func_?(&
                    ReviveScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ReviveScreenshotGenerator>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    func_?(&MethodInfo__ReviveUIHandler__OnGenerateTextureComplete_System__Byte____);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_GenerateTexture);
    func_?(&StringLiteral_Revive_PopupShown);
    cRam_? = '\x01';
  }
  ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
            ((ReviveUIHandlerBase *)this,onContinueClicked,(MethodInfo *)0x0);
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Revive_PopupShown,1,(MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar1->fields).reviveState,
     this_00 != (WebCompletionSource_1_System_Object_ *)0x0)) {
    this_01 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
              WebCompletionSource_1_System_Object__get_Task
                        (this_00,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                        );
    if ((this_01 != (Task *)0x0) && (iVar2 = (this_01->fields).m_taskId, iVar2 != 0)) {
      iVar2 = *(int *)(iVar2 + 0xc) + -1;
      (this->fields).currentSafePointSelected = iVar2;
      ReviveState::ReviveState_SetSafeGroundedDataIndex
                ((ReviveState *)this_01,iVar2,(MethodInfo *)0x0);
      pSVar3 = ReviveState::ReviveState_get_SafeGroundedData
                         ((SafeSpotData *)&stack0xffffff68,(ReviveState *)this_01,(MethodInfo *)0x0)
      ;
      fStack_4 = (pSVar3->Position).x;
      fStack_5 = (pSVar3->Position).y;
      fStack_6 = (pSVar3->Position).z;
      fStack_7 = (pSVar3->Rotation).x;
      SStack_8.Rotation.y = (pSVar3->Rotation).y;
      SStack_8.Rotation.z = (pSVar3->Rotation).z;
      SStack_8.Rotation.w = (pSVar3->Rotation).w;
      SStack_8.CameraPosition.x = (pSVar3->CameraPosition).x;
      SStack_8.CameraPosition.y = (pSVar3->CameraPosition).y;
      SStack_8.CameraPosition.z = (pSVar3->CameraPosition).z;
      SStack_8.CameraRotation.x = (pSVar3->CameraRotation).x;
      SStack_8.CameraRotation.y = (pSVar3->CameraRotation).y;
      SStack_8.CameraRotation.z = (pSVar3->CameraRotation).z;
      SStack_8.CameraRotation.w = (pSVar3->CameraRotation).w;
      pSVar3 = ReviveState::ReviveState_get_SafeGroundedData
                         ((SafeSpotData *)&stack0xffffff68,(ReviveState *)this_01,(MethodInfo *)0x0)
      ;
      SStack_8.Position.x = (pSVar3->Position).x;
      SStack_8.Position.y = (pSVar3->Position).y;
      SStack_8.Position.z = (pSVar3->Position).z;
      SStack_8.Rotation.x = (pSVar3->Rotation).x;
      SStack_8.CameraRotation.z = (pSVar3->CameraRotation).z;
      SStack_8.CameraRotation.w = (pSVar3->CameraRotation).w;
      fVar9 = fStack_4 - (pSVar3->CameraPosition).x;
      fVar10 = fStack_5 - (pSVar3->CameraPosition).y;
      fVar11 = fStack_6 - (pSVar3->CameraPosition).z;
      if (_UNK_? < fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11) {
        ReviveUIHandler_CreateAvatarBodyForScreenshot(this,(MethodInfo *)0x0);
      }
      this_02 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_02,StringLiteral_GenerateTexture,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        this_03 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (this_02,
                             ReviveScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ReviveScreenshotGenerator>__
                            );
        this_04 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)func_?();
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_04,(Object *)this,
                   MethodInfo__ReviveUIHandler__OnGenerateTextureComplete_System__Byte____,
                   (MethodInfo *)0x0);
        pSVar3 = ReviveState::ReviveState_get_SafeGroundedData
                           (&SStack_8,(ReviveState *)this_01,(MethodInfo *)0x0);
        fVar10 = (pSVar3->CameraPosition).x;
        fVar9 = (pSVar3->CameraPosition).y;
        pOVar12 = (Object__Class *)(pSVar3->CameraPosition).z;
        pSVar3 = ReviveState::ReviveState_get_SafeGroundedData
                           ((SafeSpotData *)&stack0xffffff30,(ReviveState *)this_01,
                            (MethodInfo *)0x0);
        SStack_8.Position.x = (pSVar3->Position).x;
        SStack_8.Position.y = (pSVar3->Position).y;
        SStack_8.Position.z = (pSVar3->Position).z;
        SStack_8.Rotation.x = (pSVar3->Rotation).x;
        SStack_8.Rotation.y = (pSVar3->Rotation).y;
        SStack_8.Rotation.z = (pSVar3->Rotation).z;
        SStack_8.Rotation.w = (pSVar3->Rotation).w;
        SStack_8.CameraPosition.x = (pSVar3->CameraPosition).x;
        SStack_8.CameraPosition.y = (pSVar3->CameraPosition).y;
        SStack_8.CameraPosition.z = (pSVar3->CameraPosition).z;
        SStack_8.CameraRotation.x = (pSVar3->CameraRotation).x;
        SStack_8.CameraRotation.y = (pSVar3->CameraRotation).y;
        SStack_8.CameraRotation.z = (pSVar3->CameraRotation).z;
        SStack_8.CameraRotation.w = (pSVar3->CameraRotation).w;
        pRVar13 = (this->fields)._.targetTexture;
        if (pRVar13 != (RawImage *)0x0) {
          pRVar14 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pRVar13,(MethodInfo *)0x0);
          if (pRVar14 != (RectTransform *)0x0) {
            pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                               (&RStack_16,pRVar14,(MethodInfo *)0x0);
            fStack_4 = pRVar15->m_Width;
            pRVar13 = (this->fields)._.targetTexture;
            fStack_5 = fStack_4;
            fStack_6 = fStack_4;
            fStack_7 = fStack_4;
            if (pRVar13 != (RawImage *)0x0) {
              pRVar14 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                 ((Graphic *)pRVar13,(MethodInfo *)0x0);
              if (pRVar14 != (RectTransform *)0x0) {
                pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                         RectTransform_get_rect(&RStack_16,pRVar14,(MethodInfo *)0x0);
                RStack_16.m_XMin = pRVar15->m_XMin;
                RStack_16.m_YMin = pRVar15->m_YMin;
                RStack_16.m_Width = pRVar15->m_Width;
                RStack_16.m_Height = pRVar15->m_Height;
                if (this_03 != (Object__Class *)0x0) {
                  pOVar17 = (Object__Class *)(int)fStack_4;
                  pMStack_18 = (MonitorData *)(int)RStack_16.m_Height;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  method_00 = TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1;
                  value = (Object *)func_?();
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  value[1].klass = (Object__Class *)0x0;
                  value[7].klass = this_03;
                  func_?();
                  value[6].monitor = (MonitorData *)this_04;
                  func_?();
                  value[3].klass = (Object__Class *)fVar10;
                  value[3].monitor = (MonitorData *)fVar9;
                  value[4].klass = pOVar12;
                  value[4].monitor = (MonitorData *)SStack_8.CameraRotation.x;
                  value[5].klass = (Object__Class *)SStack_8.CameraRotation.y;
                  value[5].monitor = (MonitorData *)SStack_8.CameraRotation.z;
                  value[6].klass = (Object__Class *)SStack_8.CameraRotation.w;
                  value[2].klass = pOVar17;
                  value[2].monitor = pMStack_18;
                  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_StartCoroutine_Auto
                            ((MonoBehaviour *)this_03,(IEnumerator *)value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnAdFinishedContinue() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnAdFinishedContinue
               (ReviveUIHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ReviveUIHandler____c___OnAdFinishedContinue_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandler____c);
    cRam_? = '\x01';
  }
  uStack_1._0_1_ = 2;
  uStack_1._1_3_ = 0;
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
  uStack_1 = CONCAT31(uStack_1._1_3_,1);
  pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar4 != (GameEventManager *)0x0) {
    this_00 = (pGVar4->fields).AvatarCommandsPlayMode;
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SpawnAtSafeSpot
                (this_00,(this->fields).currentSafePointSelected,(MethodInfo *)0x0);
      uStack_1 = 0xffffffff;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGenerateTextureComplete(Byte[]) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnGenerateTextureComplete
               (ReviveUIHandler *this,Byte__Array *generatedTexture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._.targetTexture;
  if (pRVar1 != (RawImage *)0x0) {
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pRVar1,(MethodInfo *)0x0);
    if (pRVar2 != (RectTransform *)0x0) {
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffdc,pRVar2,(MethodInfo *)0x0);
      fVar4 = pRVar3->m_Width;
      pRVar1 = (this->fields)._.targetTexture;
      if (pRVar1 != (RawImage *)0x0) {
        pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pRVar1,(MethodInfo *)0x0);
        if (pRVar2 != (RectTransform *)0x0) {
          pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)&stack0xffffffec,pRVar2,(MethodInfo *)0x0);
          fVar5 = pRVar3->m_Height;
          this_00 = (Texture2D *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
                    (this_00,(int)fVar4,(int)fVar5,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
          UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
          ImageConversion_LoadImage_1(this_00,generatedTexture,(MethodInfo *)0x0);
          pRVar1 = (this->fields)._.targetTexture;
          if (pRVar1 != (RawImage *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (pRVar1,(Texture *)this_00,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            obj = (this->fields).bodyClone;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void OnRewardedAdWatched(RewardedAdResult) */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnRewardedAdWatched
               (ReviveUIHandler *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&
                    MethodInfo__ReviveUIHandler____c___OnRewardedAdWatched_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ReviveUIHandler____c__DisplayClass13_0___OnRewardedAdWatched_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandler____c__DisplayClass13_0);
    func_?(&TypeInfo__ReviveUIHandler____c);
    func_?(&StringLiteral_No_Ad_Available);
    func_?(&StringLiteral_Revive_WatchedReviveAd);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Revive_WatchedReviveAd,1,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  uVar2 = (POPCOUNT((uint)pMVar1 & 0xff) & 1U) == 0;
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    unaff_EBX = (Object *)&(pMVar1->fields).OnWinningConditionFulfilled;
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(*(Action_1_IWinningCondition_ **)unaff_EBX);
    uVar2 = (POPCOUNT((uint)this & 0xff) & 1U) == 0;
    if (this == (ReviveUIHandler *)0x0) goto code_?;
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)0x0,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      *(Action_1_IWinningCondition_ **)unaff_EBX = (Action_1_IWinningCondition_ *)0x0;
code_?:
      func_?();
      if ((this->fields).roundEndedWhileWatchingAd != 0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__ReviveUIHandler____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction_00 = TypeInfo__ReviveUIHandler____c->static_fields->__9__13_0;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          if ((TypeInfo__ReviveUIHandler____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__ReviveUIHandler____c->static_fields->__9;
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)object,
                     MethodInfo__ReviveUIHandler____c___OnRewardedAdWatched_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__ReviveUIHandler____c->static_fields->__9__13_0 = callbackFunction_00;
          pGVar4 = (GameObject *)&TypeInfo__ReviveUIHandler____c->static_fields->__9__13_0;
          func_?(pGVar4,callbackFunction_00);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        (this->fields).roundEndedWhileWatchingAd = 0;
        return;
      }
      switch(result) {
      case RewardedAdResult__Enum_ErrorClient:
      case RewardedAdResult__Enum_ErrorInternal:
      case RewardedAdResult__Enum_RewardNotUnlocked:
        unaff_EBX = (Object *)func_?(TypeInfo__ReviveUIHandler____c__DisplayClass13_0);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (unaff_EBX,ExceptionArgument__Enum_obj,method_00);
        uVar2 = (POPCOUNT((uint)unaff_EBX & 0xff) & 1U) == 0;
        if (unaff_EBX != (Object *)0x0) {
          unaff_EBX[1].monitor = (MonitorData *)this;
          func_?(&unaff_EBX[1].monitor,this);
          original = (this->fields)._.errorNotification;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar5 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)original,
                              NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                             );
          pOVar6 = unaff_EBX + 1;
          pOVar6->klass = pOVar5;
          func_?(pOVar6,pOVar5);
          pOVar5 = pOVar6->klass;
          pIVar7 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          uVar2 = (POPCOUNT((uint)pIVar7 & 0xff) & 1U) == 0;
          if (pIVar7 != (IAdManager *)0x0) {
            func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar7);
            header = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
            uVar2 = (POPCOUNT((uint)pOVar5 & 0xff) & 1U) == 0;
            if (pOVar5 != (Object__Class *)0x0) {
              NotificationPopup::NotificationPopup_Initialize
                        ((NotificationPopup *)pOVar5,(String *)0x0,header,(MethodInfo *)0x0);
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,unaff_EBX,
                         MethodInfo__ReviveUIHandler____c__DisplayClass13_0___OnRewardedAdWatched_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar4,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
        break;
      case RewardedAdResult__Enum_ErrorTimeout:
        pBVar8 = (this->fields)._.continueButton;
        uVar2 = (POPCOUNT((uint)pBVar8 & 0xff) & 1U) == 0;
        if (pBVar8 != (Button *)0x0) {
          this_00 = (UnityEvent *)(pBVar8->fields).m_OnClick;
          uVar2 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
          if (this_00 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
                      (this_00,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      case RewardedAdResult__Enum_RewardUnlocked:
        pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        uVar2 = (POPCOUNT((uint)pGVar9 & 0xff) & 1U) == 0;
        if (pGVar9 != (GameEventManager *)0x0) {
          this_01 = (pGVar9->fields).AvatarCommandsPlayMode;
          uVar2 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
          if (this_01 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
            GameEventManager+AvatarCommandsPlayModeManager::
            GameEventManager_AvatarCommandsPlayModeManager_MoveBodyToSafeSpot
                      (this_01,(this->fields).currentSafePointSelected,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      default:
        return;
      }
      goto code_?;
    }
    pAVar10 = (Action_1_IWinningCondition_ *)func_?();
    uVar2 = (POPCOUNT((uint)pAVar10 & 0xff) & 1U) == 0;
    if (pAVar10 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    *(Action_1_IWinningCondition_ **)unaff_EBX = pAVar10;
    uVar11 = func_?();
    uVar2 = (POPCOUNT(uVar11 & 0xff) & 1U) == 0;
    if (uVar11 != 0) goto code_?;
  }
  func_?();
code_?:
  uVar11 = func_?();
  if (!(bool)uVar2) {
    cRam_? = cRam_? + (char)unaff_EBX + (uVar11 < 0x3dc27a10);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void OnSubscriberClicked() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnSubscriberClicked
               (ReviveUIHandler *this,MethodInfo *method)

{
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_MoveBodyToSafeSpot
              (this_00,(this->fields).currentSafePointSelected,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action);
      func_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                     );
      unaff_EDI = &
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      func_?();
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      func_?(&
                      ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&
                      MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__ReviveUIHandlerBase____c__DisplayClass24_0);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__ReviveUIHandlerBase____c__DisplayClass24_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EDI);
    if (value != (Object *)0x0) {
      value[1].monitor = (MonitorData *)this;
      func_?(&value[1].monitor,this);
      original = (this->fields)._.continuePopup;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar2 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                         );
      pOVar3 = value + 1;
      pOVar3->klass = pOVar2;
      func_?(pOVar3,pOVar2);
      pOVar2 = pOVar3->klass;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,(this->klass->vtable).Initialize.methodPtr,(MethodInfo *)0x0
                );
      if (pOVar2 != (Object__Class *)0x0) {
        ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                  ((ContinueButtonLockCursor *)pOVar2,(Action *)0x0,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnWatchAdClicked() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnWatchAdClicked
               (ReviveUIHandler *this,MethodInfo *method)

{
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
  func_?();
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ReviveUIHandler____c__DisplayClass9_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandler____c__DisplayClass9_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ReviveUIHandler____c__DisplayClass9_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    *(undefined1 *)&value[1].klass = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ReviveUIHandler____c__DisplayClass9_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&value[1].klass == '\0') {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
         pMVar2 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      if (((pMVar2->fields).currentGameState == 2) ||
         ((this->fields).roundEndedWhileWatchingAd != 0)) {
        (*(code *)(this->klass->vtable).OnRewardedAdWatched.method)
                  (this,2,(this->klass->vtable).OnAdFinishedContinue.methodPtr);
        return;
      }
      ReviveUIHandlerBase::ReviveUIHandlerBase_Update((ReviveUIHandlerBase *)this,(MethodInfo *)0x0)
      ;
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

