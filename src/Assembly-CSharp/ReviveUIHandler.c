
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
        if (((pMVar2->klass->_1).typeHierarchyDepth <
             (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) ||
           ((MVAvatarLocal__Class *)
            (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1]
            != TypeInfo__MVAvatarLocal)) goto code_?;
        if (pMVar2[3].klass != (MVWorldObject__Class *)0x0) {
          pGVar3 = MVBody::MVBody_CreateClone((MVBody *)pMVar2[3].klass,0,0,(MethodInfo *)0x0);
          (this->fields).bodyClone = pGVar3;
          func_?();
          pGVar3 = (this->fields).bodyClone;
          if (pGVar3 != (GameObject *)0x0) {
            pIVar4 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                               ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,
                                UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                               );
            pMVar5 = (MonitorData *)0x0;
            if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0) {
              pIVar6 = pIVar4 + 2;
              for (; (int)pMVar5 < (int)pIVar4[1].monitor; pMVar5 = pMVar5 + 1) {
                if (pIVar4[1].monitor <= pMVar5) goto code_?;
                if (pIVar6->klass == (IEnumerable_1_System_Object___Class *)0x0)
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)pIVar6->klass,0,(MethodInfo *)0x0);
                pIVar6 = (IEnumerable_1_System_Object_ *)&pIVar6->monitor;
              }
              pGVar3 = (this->fields).bodyClone;
              if (pGVar3 != (GameObject *)0x0) {
                pIVar4 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                   ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,
                                    AvatarBlobShadowController__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarBlobShadowController>______
                                   );
                pMVar5 = (MonitorData *)0x0;
                if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0) {
                  pIVar6 = pIVar4 + 2;
                  for (; (int)pMVar5 < (int)pIVar4[1].monitor; pMVar5 = pMVar5 + 1) {
                    if (pIVar4[1].monitor <= pMVar5) goto code_?;
                    if (pIVar6->klass == (IEnumerable_1_System_Object___Class *)0x0)
                    goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pIVar6->klass,1,(MethodInfo *)0x0);
                    pIVar6 = (IEnumerable_1_System_Object_ *)&pIVar6->monitor;
                  }
                  pGVar3 = (this->fields).bodyClone;
                  if (pGVar3 != (GameObject *)0x0) {
                    pIVar4 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,
                                        PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                       );
                    pMVar5 = (MonitorData *)0x0;
                    if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0) {
                      pIVar6 = pIVar4 + 2;
                      for (; (int)pMVar5 < (int)pIVar4[1].monitor; pMVar5 = pMVar5 + 1) {
                        if (pIVar4[1].monitor <= pMVar5) goto code_?;
                        if (pIVar6->klass == (IEnumerable_1_System_Object___Class *)0x0)
                        goto code_?;
                        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject
                                           ((Component *)pIVar6->klass,(MethodInfo *)0x0);
                        if (pGVar3 == (GameObject *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar3,0,(MethodInfo *)0x0);
                        pIVar6 = (IEnumerable_1_System_Object_ *)&pIVar6->monitor;
                      }
                      pGVar3 = (this->fields).bodyClone;
                      if (pGVar3 != (GameObject *)0x0) {
                        pIVar4 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                           ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,
                                            AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                           );
                        pMVar5 = (MonitorData *)0x0;
                        if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0) {
                          pIVar6 = pIVar4 + 2;
                          for (; (int)pMVar5 < (int)pIVar4[1].monitor; pMVar5 = pMVar5 + 1) {
                            if (pIVar4[1].monitor <= pMVar5) goto code_?;
                            if (pIVar6->klass == (IEnumerable_1_System_Object___Class *)0x0)
                            goto code_?;
                            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject
                                               ((Component *)pIVar6->klass,(MethodInfo *)0x0);
                            if (pGVar3 == (GameObject *)0x0) goto code_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                            pIVar6 = (IEnumerable_1_System_Object_ *)&pIVar6->monitor;
                          }
                          pGVar3 = (this->fields).bodyClone;
                          if (pGVar3 != (GameObject *)0x0) {
                            pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_GetComponentsInChildren_1
                                               (pGVar3,1,
                                                AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                               );
                            uVar8 = 0;
                            if (pOVar7 != (Object__Array *)0x0) {
                              ppOVar9 = pOVar7->vector;
                              for (; (int)uVar8 < (int)pOVar7->max_length; uVar8 = uVar8 + 1) {
                                if (pOVar7->max_length <= uVar8) goto code_?;
                                if ((Behaviour *)*ppOVar9 == (Behaviour *)0x0)
                                goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                Behaviour_set_enabled((Behaviour *)*ppOVar9,1,(MethodInfo *)0x0);
                                ppOVar9 = ppOVar9 + 1;
                              }
                              pGVar3 = (this->fields).bodyClone;
                              if (pGVar3 != (GameObject *)0x0) {
                                pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                         GameObject_GetComponentsInChildren_1
                                                   (pGVar3,1,
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                                uVar8 = 0;
                                if (pOVar7 != (Object__Array *)0x0) {
                                  ppOVar9 = pOVar7->vector;
                                  for (; (int)uVar8 < (int)pOVar7->max_length; uVar8 = uVar8 + 1)
                                  {
                                    if (pOVar7->max_length <= uVar8) goto code_?;
                                    if ((Behaviour *)*ppOVar9 == (Behaviour *)0x0)
                                    goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                    Behaviour_set_enabled
                                              ((Behaviour *)*ppOVar9,1,(MethodInfo *)0x0);
                                    ppOVar9 = ppOVar9 + 1;
                                  }
                                  pGVar3 = (this->fields).bodyClone;
                                  if (pGVar3 != (GameObject *)0x0) {
                                    pIVar4 = Newtonsoft::Json::Linq::LinqExtensions::
                                             LinqExtensions_Values_2
                                                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_
                                                         *)pGVar3,
                                                                                                                
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                    pMVar5 = (MonitorData *)0x0;
                                    if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0) {
                                      pIVar6 = pIVar4 + 2;
                                      for (; (int)pMVar5 < (int)pIVar4[1].monitor;
                                          pMVar5 = pMVar5 + 1) {
                                        if (pIVar4[1].monitor <= pMVar5) goto code_?;
                                        if (pIVar6->klass ==
                                            (IEnumerable_1_System_Object___Class *)0x0)
                                        goto code_?;
                                        pIStack_10 = (IEnumerable_1_System_Object___Class *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_gameObject
                                                              ((Component *)pIVar6->klass,
                                                               (MethodInfo *)0x0);
                                        if ((TypeInfo__UnityEngine__Object->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        UnityEngine.CoreModule.dll::UnityEngine::Object::
                                        Object_1_Destroy_1((Object_1 *)pIStack_10,(MethodInfo *)0x0);
                                        pIVar6 = (IEnumerable_1_System_Object_ *)&pIVar6->monitor;
                                      }
                                      pGVar3 = (this->fields).bodyClone;
                                      if (pGVar3 != (GameObject *)0x0) {
                                        this_01 = (Component *)
                                                  Newtonsoft::Json::Linq::LinqExtensions::
                                                  LinqExtensions_Values_2
                                                            ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  pGVar3,
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
                                          pGVar3 = (this->fields).bodyClone;
                                          if (pGVar3 != (GameObject *)0x0) {
                                            pIVar4 = Newtonsoft::Json::Linq::LinqExtensions::
                                                     LinqExtensions_Values_2
                                                               ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  pGVar3,
                                                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                                  );
                                            pMVar5 = (MonitorData *)0x0;
                                            if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0) {
                                              pIVar6 = pIVar4 + 2;
                                              for (; (int)pMVar5 < (int)pIVar4[1].monitor;
                                                  pMVar5 = pMVar5 + 1) {
                                                if (pIVar4[1].monitor <= pMVar5)
                                                goto code_?;
                                                pIStack_10 = pIVar6->klass;
                                                if ((TypeInfo__UnityEngine__Object->_1).
                                                    cctor_finished_or_no_cctor == 0) {
                                                  func_?();
                                                }
                                                bVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Object::Object_1_op_Inequality
                                                                  ((Object_1 *)pIStack_10,
                                                                   (Object_1 *)0x0,(MethodInfo *)0x0
                                                                  );
                                                if (bVar11 != 0) {
                                                  if (pIVar4[1].monitor <= pMVar5)
                                                  goto code_?;
                                                  if (pIVar6->klass ==
                                                      (IEnumerable_1_System_Object___Class *)0x0)
                                                  goto code_?;
                                                  SkinnedMeshOptimizer::
                                                  SkinnedMeshOptimizer_DisableOptimizer
                                                            ((SkinnedMeshOptimizer *)pIVar6->klass,
                                                             (MethodInfo *)0x0);
                                                  if (pIVar4[1].monitor <= pMVar5)
                                                  goto code_?;
                                                  if (pIVar6->klass ==
                                                      (IEnumerable_1_System_Object___Class *)0x0)
                                                  goto code_?;
                                                  SkinnedMeshOptimizer::
                                                  SkinnedMeshOptimizer_TurnOffMesh
                                                            ((SkinnedMeshOptimizer *)pIVar6->klass,
                                                             (MethodInfo *)0x0);
                                                  if (pIVar4[1].monitor <= pMVar5)
                                                  goto code_?;
                                                  pIStack_10 = pIVar6->klass;
                                                  if ((TypeInfo__UnityEngine__Object->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                  Object_1_Destroy_1((Object_1 *)pIStack_10,
                                                                     (MethodInfo *)0x0);
                                                }
                                                pIVar6 = (IEnumerable_1_System_Object_ *)
                                                          &pIVar6->monitor;
                                              }
                                              pGVar3 = (this->fields).bodyClone;
                                              if (pGVar3 != (GameObject *)0x0) {
                                                pIStack_10 = (IEnumerable_1_System_Object___Class *)
                                                            Newtonsoft::Json::Linq::LinqExtensions::
                                                            LinqExtensions_Values_2
                                                                      ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  pGVar3,
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                                pcVar12 = (char *)0x0;
                                                if (pIStack_10 !=
                                                    (IEnumerable_1_System_Object___Class *)0x0) {
                                                  pIStack_13 = &(pIStack_10->_0).byval_arg;
                                                  while( true ) {
                                                    if ((int)(pIStack_10->_0).namespaze <=
                                                        (int)pcVar12) break;
                                                    uVar8 = 0;
                                                    iVar14 = 0x10;
                                                    while( true ) {
                                                      if ((pIStack_10->_0).namespaze <= pcVar12)
                                                      goto code_?;
                                                      if ((Renderer *)(pIStack_13->data).typeHandle
                                                          == (Renderer *)0x0) goto code_?;
                                                      pMVar15 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Renderer::
                                                                Renderer_get_materials
                                                                          ((Renderer *)
                                                                           (pIStack_13->data).
                                                                           typeHandle,
                                                                           (MethodInfo *)0x0);
                                                      if (pMVar15 == (Material__Array *)0x0)
                                                      goto code_?;
                                                      if ((int)pMVar15->max_length <= (int)uVar8)
                                                      break;
                                                      if ((pIStack_10->_0).namespaze <= pcVar12)
                                                      goto code_?;
                                                      if ((Renderer *)(pIStack_13->data).typeHandle
                                                          == (Renderer *)0x0) goto code_?;
                                                      pMVar15 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Renderer::
                                                                Renderer_get_materials
                                                                          ((Renderer *)
                                                                           (pIStack_13->data).
                                                                           typeHandle,
                                                                           (MethodInfo *)0x0);
                                                      if (pMVar15 == (Material__Array *)0x0)
                                                      goto code_?;
                                                      if (pMVar15->max_length <= uVar8)
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
                                                        if ((pIStack_10->_0).namespaze <= pcVar12)
                                                        goto code_?;
                                                        if ((Renderer *)(pIStack_13->data).typeHandle
                                                            == (Renderer *)0x0)
                                                        goto code_?;
                                                        pMVar15 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Renderer::
                                                                  Renderer_get_materials
                                                                            ((Renderer *)
                                                                             (pIStack_13->data).
                                                                             typeHandle,
                                                                             (MethodInfo *)0x0);
                                                        if (pMVar15 == (Material__Array *)0x0)
                                                        goto code_?;
                                                        if (pMVar15->max_length <= uVar8)
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
                                                  if ((pIStack_10->_0).namespaze <= pcVar12)
                                                  goto code_?;
                                                  if ((Renderer *)(pIStack_13->data).typeHandle ==
                                                      (Renderer *)0x0) goto code_?;
                                                  pMVar15 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)
                                                                       (pIStack_13->data).typeHandle,
                                                                       (MethodInfo *)0x0);
                                                  if (pMVar15 == (Material__Array *)0x0)
                                                  goto code_?;
                                                  if (pMVar15->max_length <= uVar8)
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
                                                  uVar8 = uVar8 + 1;
                                                  iVar14 = iVar14 + 4;
                                                  }
                                                  pcVar12 = pcVar12 + 1;
                                                  pIStack_13 = (Il2CppType *)&pIStack_13->attrs;
                                                  }
                                                  pGVar3 = (this->fields).bodyClone;
                                                  if (pGVar3 != (GameObject *)0x0) {
                                                    this_02 = (Animation *)
                                                              Newtonsoft::Json::Linq::LinqExtensions
                                                              ::LinqExtensions_Values_2
                                                                        ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  pGVar3,
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                                  if (this_02 != (Animation *)0x0) {
                                                    UnityEngine.AnimationModule.dll::UnityEngine::
                                                    Animation::Animation_Play_2
                                                              (this_02,StringLiteral_Idle,
                                                               (MethodInfo *)0x0);
                                                    pIVar4 = Newtonsoft::Json::Linq::LinqExtensions
                                                             ::LinqExtensions_Values_2
                                                                       ((
                                                  IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                  this_02,
                                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                                                  );
                                                  pMVar5 = (MonitorData *)0x0;
                                                  if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0)
                                                  {
                                                    pIVar6 = pIVar4 + 2;
                                                    for (; (int)pMVar5 < (int)pIVar4[1].monitor;
                                                        pMVar5 = pMVar5 + 1) {
                                                      if (pIVar4[1].monitor <= pMVar5)
                                                      goto code_?;
                                                      if (pIVar6->klass ==
                                                          (IEnumerable_1_System_Object___Class *)0x0
                                                         ) goto code_?;
                                                      (*(code *)(pIVar6->klass->_0).image[5].
                                                                assembly)();
                                                      pIVar6 = (IEnumerable_1_System_Object_ *)
                                                                &pIVar6->monitor;
                                                    }
                                                    pSVar1 = MVGameControllerBase::
                                                                                                                          
                                                  MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                            ((MethodInfo *)0x0);
                                                  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
                                                     (pSVar23 = (SpawnRoleVariable_1_System_Object_ *
                                                               )(pSVar1->fields).reviveState,
                                                     pSVar23 != (SpawnRoleVariable_1_System_Object_ *
                                                               )0x0)) {
                                                    pRVar24 = (ReviveState *)
                                                              Assets::Scripts::Network::Player::
                                                              SpawnRoles::SpawnRoleData::
                                                              SpawnRoleVariableTypes::
                                                              SpawnRoleVariable`1[System::Object]::
                                                                                                                            
                                                  SpawnRoleVariable_1_System_Object__get_Value
                                                            (pSVar23,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                                  );
                                                  if (pRVar24 != (ReviveState *)0x0) {
                                                    ReviveState::
                                                    ReviveState_GetSafeGroundedDataAtSelectedIndex
                                                              ((SafeSpotData *)&stack0xffffff54,
                                                               pRVar24,(MethodInfo *)0x0);
                                                    puVar25 = (undefined8 *)func_?();
                                                    CStack_18._4_8_ = *puVar25;
                                                    CStack_18.a = *(float *)(puVar25 + 1);
                                                    puVar25 = (undefined8 *)func_?();
                                                    uStack_20 = *puVar25;
                                                    fStack_21 = *(float *)(puVar25 + 1);
                                                    pGVar3 = (this->fields).bodyClone;
                                                    if (pGVar3 != (GameObject *)0x0) {
                                                      pTVar26 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar3,(MethodInfo *)0x0)
                                                      ;
                                                      pSVar1 = MVGameControllerBase::
                                                                                                                              
                                                  MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                            ((MethodInfo *)0x0);
                                                  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
                                                     (pSVar23 = (SpawnRoleVariable_1_System_Object_ *
                                                               )(pSVar1->fields).reviveState,
                                                     pSVar23 != (SpawnRoleVariable_1_System_Object_ *
                                                               )0x0)) {
                                                    pRVar24 = (ReviveState *)
                                                              Assets::Scripts::Network::Player::
                                                              SpawnRoles::SpawnRoleData::
                                                              SpawnRoleVariableTypes::
                                                              SpawnRoleVariable`1[System::Object]::
                                                                                                                            
                                                  SpawnRoleVariable_1_System_Object__get_Value
                                                            (pSVar23,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                                  );
                                                  if (pRVar24 != (ReviveState *)0x0) {
                                                    pSVar27 = ReviveState::
                                                              ReviveState_get_SafeGroundedData
                                                                        ((SafeSpotData *)
                                                                         &stack0xffffff54,pRVar24,
                                                                         (MethodInfo *)0x0);
                                                    if (pTVar26 != (Transform *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar26,pSVar27->Position,
                                                                 (MethodInfo *)0x0);
                                                      pGVar3 = (this->fields).bodyClone;
                                                      if (pGVar3 != (GameObject *)0x0) {
                                                        pTVar26 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar3,(MethodInfo *)
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
                                                          pGVar3 = (this->fields).bodyClone;
                                                          layer = LayerUtil::
                                                                  LayerUtil_GetLayerNumber
                                                                            (
                                                  LayerFlags__Enum_Default,(MethodInfo *)0x0);
                                                  LayerUtil::LayerUtil_SetLayerRecursively_4
                                                            (pGVar3,layer,(MethodInfo *)0x0);
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
                                          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   Component::Component_get_gameObject
                                                             (this_01,(MethodInfo *)0x0);
                                          if (pGVar3 != (GameObject *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
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
  DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentValue = 0.0;
  ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
            ((ReviveUIHandlerBase *)this,onContinueClicked,(MethodInfo *)0x0);
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Revive_PopupShown,1,(MethodInfo *)0x0);
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
     (this_00 = (SpawnRoleVariable_1_System_Object_ *)(pSVar2->fields).reviveState,
     this_00 != (SpawnRoleVariable_1_System_Object_ *)0x0)) {
    this_01 = (ReviveState *)
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__get_Value
                        (this_00,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                        );
    if ((this_01 != (ReviveState *)0x0) &&
       (pLVar3 = (this_01->fields).safePositions, pLVar3 != (List_1_SafeSpotData_ *)0x0)) {
      index = (pLVar3->fields)._size + -1;
      (this->fields).currentSafePointSelected = index;
      ReviveState::ReviveState_SetSafeGroundedDataIndex(this_01,index,(MethodInfo *)0x0);
      pSVar4 = ReviveState::ReviveState_get_SafeGroundedData
                         ((SafeSpotData *)&stack0xffffff64,this_01,(MethodInfo *)0x0);
      RStack_5.m_XMin = (pSVar4->Position).x;
      RStack_5.m_YMin = (pSVar4->Position).y;
      RStack_5.m_Width = (pSVar4->Position).z;
      RStack_5.m_Height = (pSVar4->Rotation).x;
      SStack_6.Rotation.y = (pSVar4->Rotation).y;
      SStack_6.Rotation.z = (pSVar4->Rotation).z;
      SStack_6.Rotation.w = (pSVar4->Rotation).w;
      SStack_6.CameraPosition.x = (pSVar4->CameraPosition).x;
      SStack_6.CameraPosition.y = (pSVar4->CameraPosition).y;
      SStack_6.CameraPosition.z = (pSVar4->CameraPosition).z;
      SStack_6.CameraRotation.x = (pSVar4->CameraRotation).x;
      SStack_6.CameraRotation.y = (pSVar4->CameraRotation).y;
      SStack_6.CameraRotation.z = (pSVar4->CameraRotation).z;
      SStack_6.CameraRotation.w = (pSVar4->CameraRotation).w;
      pSVar4 = ReviveState::ReviveState_get_SafeGroundedData
                         ((SafeSpotData *)&stack0xffffff64,this_01,(MethodInfo *)0x0);
      SStack_6.Position.x = (pSVar4->Position).x;
      SStack_6.Position.y = (pSVar4->Position).y;
      SStack_6.Position.z = (pSVar4->Position).z;
      SStack_6.Rotation.x = (pSVar4->Rotation).x;
      SStack_6.CameraRotation.z = (pSVar4->CameraRotation).z;
      SStack_6.CameraRotation.w = (pSVar4->CameraRotation).w;
      fVar7 = RStack_5.m_XMin - (pSVar4->CameraPosition).x;
      fVar8 = RStack_5.m_YMin - (pSVar4->CameraPosition).y;
      fVar9 = RStack_5.m_Width - (pSVar4->CameraPosition).z;
      if (_UNK_? < fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9) {
        ReviveUIHandler_CreateAvatarBodyForScreenshot(this,(MethodInfo *)0x0);
      }
      this_02 = (GameObject *)func_?();
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_02,StringLiteral_GenerateTexture,(MethodInfo *)0x0);
        this_03 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (this_02,
                             ReviveScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ReviveScreenshotGenerator>__
                            );
        pAStack_10 = (Action_1_Object_ *)func_?();
        if (pAStack_10 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (pAStack_10,(Object *)this,
                     MethodInfo__ReviveUIHandler__OnGenerateTextureComplete_System__Byte____,
                     (MethodInfo *)0x0);
          pSVar4 = ReviveState::ReviveState_get_SafeGroundedData
                             (&SStack_6,this_01,(MethodInfo *)0x0);
          fVar8 = (pSVar4->CameraPosition).x;
          fVar7 = (pSVar4->CameraPosition).y;
          pOVar11 = (Object__Class *)(pSVar4->CameraPosition).z;
          pSVar4 = ReviveState::ReviveState_get_SafeGroundedData
                             ((SafeSpotData *)&stack0xffffff2c,this_01,(MethodInfo *)0x0);
          SStack_6.Position.x = (pSVar4->Position).x;
          SStack_6.Position.y = (pSVar4->Position).y;
          SStack_6.Position.z = (pSVar4->Position).z;
          SStack_6.Rotation.x = (pSVar4->Rotation).x;
          SStack_6.Rotation.y = (pSVar4->Rotation).y;
          SStack_6.Rotation.z = (pSVar4->Rotation).z;
          SStack_6.Rotation.w = (pSVar4->Rotation).w;
          SStack_6.CameraPosition.x = (pSVar4->CameraPosition).x;
          SStack_6.CameraPosition.y = (pSVar4->CameraPosition).y;
          SStack_6.CameraPosition.z = (pSVar4->CameraPosition).z;
          SStack_6.CameraRotation.x = (pSVar4->CameraRotation).x;
          SStack_6.CameraRotation.y = (pSVar4->CameraRotation).y;
          SStack_6.CameraRotation.z = (pSVar4->CameraRotation).z;
          SStack_6.CameraRotation.w = (pSVar4->CameraRotation).w;
          pRVar12 = (this->fields)._.targetTexture;
          if (pRVar12 != (RawImage *)0x0) {
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pRVar12,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                       RectTransform_get_rect(&RStack_5,pRVar13,(MethodInfo *)0x0);
              DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pRVar14->m_XMin
              ;
              DStack_1._index = (int32_t)pRVar14->m_YMin;
              DStack_1._version = (int32_t)pRVar14->m_Width;
              DStack_1._currentValue = pRVar14->m_Height;
              fVar9 = SubscribableVariableBase`1[System::Single]::
                       SubscribableVariableBase_1_System_Single__get_Value
                                 ((SubscribableVariableBase_1_System_Single_ *)&DStack_1,
                                  (MethodInfo *)0x0);
              pRVar12 = (this->fields)._.targetTexture;
              if (pRVar12 != (RawImage *)0x0) {
                pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pRVar12,(MethodInfo *)0x0);
                if (pRVar13 != (RectTransform *)0x0) {
                  pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                           RectTransform_get_rect(&RStack_5,pRVar13,(MethodInfo *)0x0);
                  DStack_1._dictionary =
                       (Dictionary_2_System_Int32Enum_System_Single_ *)pRVar14->m_XMin;
                  DStack_1._index = (int32_t)pRVar14->m_YMin;
                  DStack_1._version = (int32_t)pRVar14->m_Width;
                  DStack_1._currentValue = pRVar14->m_Height;
                  fStack_15 = mscorlib.dll::System::Collections::Generic::
                             Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                             ::Int32Enum,System::Single]::
                             Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                                       (&DStack_1,(MethodInfo *)0x0);
                  if (this_03 != (Object__Class *)0x0) {
                    pMVar16 = (MonitorData *)(int)fStack_15;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    value = (Object *)func_?();
                    if (value != (Object *)0x0) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                (value,ExceptionArgument__Enum_obj,in_stack_17);
                      value[1].klass = (Object__Class *)0x0;
                      value[7].klass = this_03;
                      func_?();
                      value[6].monitor = (MonitorData *)pAStack_10;
                      func_?();
                      value[3].klass = (Object__Class *)fVar8;
                      value[3].monitor = (MonitorData *)fVar7;
                      value[4].klass = pOVar11;
                      value[4].monitor = (MonitorData *)SStack_6.CameraRotation.x;
                      value[5].klass = (Object__Class *)SStack_6.CameraRotation.y;
                      value[5].monitor = (MonitorData *)SStack_6.CameraRotation.z;
                      value[6].klass = (Object__Class *)SStack_6.CameraRotation.w;
                      value[2].klass = (Object__Class *)(int)fVar9;
                      value[2].monitor = pMVar16;
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
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnAdFinishedContinue() */

void Assembly-CSharp.dll::ReviveUIHandler::ReviveUIHandler_OnAdFinishedContinue
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
                    MethodInfo__ReviveUIHandler____c___OnAdFinishedContinue_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandler____c);
    cRam_? = '\x01';
  }
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_SpawnAtSafeSpot
              (this_00,(this->fields).currentSafePointSelected,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ReviveUIHandler____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__ReviveUIHandler____c->static_fields->__9__12_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ReviveUIHandler____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__ReviveUIHandler____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ReviveUIHandler____c___OnAdFinishedContinue_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ReviveUIHandler____c->static_fields->__9__12_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffd8,pRVar2,(MethodInfo *)0x0);
      fVar3 = SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe8,
                         (MethodInfo *)0x0);
      pRVar1 = (this->fields)._.targetTexture;
      if (pRVar1 != (RawImage *)0x0) {
        pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pRVar1,(MethodInfo *)0x0);
        if (pRVar2 != (RectTransform *)0x0) {
          pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)&stack0xffffffd8,pRVar2,(MethodInfo *)0x0);
          fVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Int32Enum,System::Single]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                              *)pRVar4->m_YMin,(MethodInfo *)pRVar4->m_Width);
          this_00 = (Texture2D *)func_?();
          if (this_00 != (Texture2D *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_2
                      (this_00,(int)fVar3,(int)fVar5,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0)
            ;
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
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


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
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (this_02 = (Action_1_Object_ *)func_?((pMVar1->fields).OnWinningConditionFulfilled),
      this_02 != (Action_1_Object_ *)0x0)) && (this != (ReviveUIHandler *)0x0)) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_02,(Object *)this,(this->klass->vtable).RoundEnded.method,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)0x0,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar3 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      (pMVar1->fields).OnWinningConditionFulfilled = pAVar3;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    if ((this->fields).roundEndedWhileWatchingAd == 0) {
      switch(result) {
      case RewardedAdResult__Enum_ErrorClient:
      case RewardedAdResult__Enum_ErrorInternal:
      case RewardedAdResult__Enum_RewardNotUnlocked:
        value = (Object *)func_?(TypeInfo__ReviveUIHandler____c__DisplayClass13_0);
        if (value != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,unaff_EBP);
          value[1].monitor = (MonitorData *)this;
          func_?(&value[1].monitor,this);
          original = (this->fields)._.errorNotification;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar5 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)original,
                              NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                             );
          value[1].klass = pOVar5;
          func_?(value + 1);
          pOVar5 = value[1].klass;
          pIVar6 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          if (pIVar6 != (IAdManager *)0x0) {
            func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar6);
            header = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
            if (pOVar5 != (Object__Class *)0x0) {
              NotificationPopup::NotificationPopup_Initialize
                        ((NotificationPopup *)pOVar5,(String *)0x0,header,(MethodInfo *)0x0);
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                           MethodInfo__ReviveUIHandler____c__DisplayClass13_0___OnRewardedAdWatched_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar7,(BaseEventData *)0x0,callbackFunction,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                return;
              }
            }
          }
        }
        break;
      case RewardedAdResult__Enum_ErrorTimeout:
        pBVar8 = (this->fields)._.continueButton;
        if ((pBVar8 != (Button *)0x0) &&
           (this_00 = (UnityEvent *)(pBVar8->fields).m_OnClick, this_00 != (UnityEvent *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        break;
      case RewardedAdResult__Enum_RewardUnlocked:
        pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar9 != (GameEventManager *)0x0) &&
           (this_01 = (pGVar9->fields).AvatarCommandsPlayMode,
           this_01 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_MoveBodyToSafeSpot
                    (this_01,(this->fields).currentSafePointSelected,(MethodInfo *)0x0);
          return;
        }
        break;
      default:
        return;
      }
    }
    else {
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__ReviveUIHandler____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction_00 = TypeInfo__ReviveUIHandler____c->static_fields->__9__13_0;
      if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
code_?:
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar7,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        (this->fields).roundEndedWhileWatchingAd = 0;
        return;
      }
      if ((TypeInfo__ReviveUIHandler____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)0x0,
                   MethodInfo__ReviveUIHandler____c___OnRewardedAdWatched_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ReviveUIHandler____c->static_fields->__9__13_0 = callbackFunction_00;
        func_?(&TypeInfo__ReviveUIHandler____c->static_fields->__9__13_0,
                        callbackFunction_00);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
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
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                     );
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
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EBP);
      value[1].monitor = (MonitorData *)this;
      func_?(&value[1].monitor,this);
      original = (this->fields)._.continuePopup;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar2 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                         );
      value[1].klass = pOVar2;
      func_?(value + 1);
      pOVar2 = value[1].klass;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,(this->klass->vtable).OnAdFinishedContinue.method,
                   (MethodInfo *)0x0);
        if (pOVar2 != (Object__Class *)0x0) {
          ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                    ((ContinueButtonLockCursor *)pOVar2,(Action *)this_01,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  value = (Object *)func_?(TypeInfo__ReviveUIHandler____c__DisplayClass9_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
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
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__ReviveUIHandler____c__DisplayClass9_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
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
          (*(this->klass->vtable).OnRewardedAdWatched.methodPtr)
                    (this,2,(this->klass->vtable).OnRewardedAdWatched.method);
          return;
        }
        ReviveUIHandlerBase::ReviveUIHandlerBase_Update
                  ((ReviveUIHandlerBase *)this,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

