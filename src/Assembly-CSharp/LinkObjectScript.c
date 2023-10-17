
/* Vector3 CalculateUnconnectedLinkPos(Vector3) */

Vector3 * Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_CalculateUnconnectedLinkPos
                    (Vector3 *__return_storage_ptr__,LinkObjectScript *this,Vector3 connectedPos,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff94,0,0x2c);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    this_00 = (pMVar1->fields).mainCamera;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                        ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    if (this_00 != (Camera *)0x0) {
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                          ((Ray *)&stack0xffffffc0,this_00,*pVVar2,(MethodInfo *)0x0);
      bVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_14
                         (*pRVar3,(RaycastHit *)&stack0xffffff94,INFINITY,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pRVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            ((Regex_CachedCodeEntryKey *)&stack0xffffffcc,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&stack0xffffff94,(MethodInfo *)0x0);
code_?:
        pSVar6 = pRVar5->_cultureKey;
        pSVar7 = pRVar5->_pattern;
        __return_storage_ptr__->x = (float)pRVar5->_options;
        __return_storage_ptr__->y = (float)pSVar6;
        __return_storage_ptr__->z = (float)pSVar7;
        return __return_storage_ptr__;
      }
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd8,pTVar8,(MethodInfo *)0x0);
        uVar9 = pVVar2->x;
        uVar10 = pVVar2->y;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)&stack0xffffffd8,pTVar8,(MethodInfo *)0x0);
          uVar11 = pVVar2->x;
          uVar12 = pVVar2->y;
          fVar13 = ((float)uVar12 * (connectedPos.y - (float)uVar10) +
                    (float)uVar11 * (connectedPos.x - (float)uVar9) + (float)this_00 * 0.0) -
                   _UNK_?;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                             (this_00,(MethodInfo *)0x0);
          if (fVar13 <= fVar14 + _UNK_?) {
            fVar13 = fVar14 + _UNK_?;
          }
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                              ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
          uVar15 = pVVar2->x;
          pVVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                              ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
          uVar16 = pVVar2->y;
          position.y = (float)uVar16;
          position.x = (float)uVar15;
          position.z = fVar13;
          pRVar5 = (Regex_CachedCodeEntryKey *)
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                              ((Vector3 *)&stack0xffffffcc,this_00,position,(MethodInfo *)0x0);
          __return_storage_ptr__ = (Vector3 *)this_00;
          goto code_?;
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar17)();
  return pVVar2;
}


/* Void Initialize(Link) */

void Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_Initialize
               (LinkObjectScript *this,Link *link,MethodInfo *method)

{
  (this->fields)._.isObjectLink = 0;
  if (link == (Link *)0x0) goto code_?;
  (this->fields)._.linkID = (link->fields).id;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                   );
    cRam_? = '\x01';
  }
  bVar1 = LinkObjectScript_UpdatePositions(this,link,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar2,0,(this->fields)._.startPos,(MethodInfo *)0x0);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar2,1,(this->fields)._.endPos,(MethodInfo *)0x0);
    pBVar3 = (this->fields).boxCollider;
    if ((pBVar3 == (BoxCollider *)0x0) ||
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar3,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0))
    goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar4,(MethodInfo *)0x0);
    uVar6 = (this->fields)._.startPos.x;
    uVar7 = (this->fields)._.startPos.y;
    fVar8 = (this->fields)._.startPos.z;
    uVar9 = (this->fields)._.endPos.x;
    uVar10 = (this->fields)._.endPos.y;
    uVar11 = (this->fields)._.startPos.x;
    uVar12 = (this->fields)._.startPos.y;
    if (pTVar5 == (Transform *)0x0) goto code_?;
    value.y = (float)uVar7 + ((float)uVar10 - (float)uVar12) * _UNK_?;
    value.x = (float)uVar6 + ((float)uVar9 - (float)uVar11) * _UNK_?;
    value.z = fVar8 + ((this->fields)._.endPos.z - fVar8) * _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar5,value,(MethodInfo *)0x0);
    pBVar3 = (this->fields).boxCollider;
    if ((pBVar3 == (BoxCollider *)0x0) ||
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar3,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0))
    goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar4,(MethodInfo *)0x0);
    pVVar13 = (Vector3 *)func_?();
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffd4,*pVVar13,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar5,*pQVar14,(MethodInfo *)0x0);
    func_?();
    pBVar3 = (this->fields).boxCollider;
    if ((pBVar3 == (BoxCollider *)0x0) ||
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pBVar3,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0))
    goto code_?;
    value_00.z = (float)&UNK_?;
    value_00.x = 0.2;
    value_00.y = 0.2;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar5,value_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pLVar2,(MethodInfo *)0x0);
    fVar16 = (float10)func_?();
    if (pMVar15 == (Material *)0x0) goto code_?;
    VVar17.y = 1.0;
    VVar17.x = (float)(fVar16 * (float10)_UNK_?);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
              (pMVar15,VVar17,(MethodInfo *)0x0);
  }
  pLVar2 = (this->fields).lineRenderer;
  if (pLVar2 != (LineRenderer *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                       ((Renderer *)pLVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (link != (Link *)0x0) {
      pLVar2 = (this->fields).lineRenderer;
      if ((link->fields).isSet == 0) {
        if ((pLVar2 != (LineRenderer *)0x0) &&
           (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)pLVar2,(MethodInfo *)0x0), pMVar15 != (Material *)0x0))
        {
          value_01.g = (float)_UNK_?;
          value_01.r = (float)_UNK_?;
          value_01.b = (float)_UNK_?;
          value_01.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar15,value_01,(MethodInfo *)0x0);
          return;
        }
      }
      else if ((pLVar2 != (LineRenderer *)0x0) &&
              (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   ((Renderer *)pLVar2,(MethodInfo *)0x0),
              pMVar15 != (Material *)0x0)) {
        value_02.g = (float)_UNK_?;
        value_02.r = (float)_UNK_?;
        value_02.b = (float)_UNK_?;
        value_02.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar15,value_02,(MethodInfo *)0x0);
        pBVar3 = (this->fields).boxCollider;
        if ((pBVar3 != (BoxCollider *)0x0) &&
           (((pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pBVar3,(MethodInfo *)0x0),
             pGVar4 != (GameObject *)0x0 &&
             (this_00 = (Renderer *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar4,
                                   UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                  ), this_00 != (Renderer *)0x0)) &&
            (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 (this_00,(MethodInfo *)0x0), pMVar15 != (Material *)0x0)))) {
          VVar17 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTextureOffset
                             (pMVar15,(MethodInfo *)0x0);
          fStack_18 = VVar17.x;
          fStack_19 = VVar17.y;
          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar8 = fVar8 * _UNK_?;
          pLVar2 = (this->fields).lineRenderer;
          if ((pLVar2 != (LineRenderer *)0x0) &&
             (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pLVar2,(MethodInfo *)0x0), pMVar15 != (Material *)0x0
             )) {
            value_03.y = fStack_19;
            value_03.x = fStack_18 - fVar8;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                      (pMVar15,value_03,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void UpdateLinkVisual(Link) */

void Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_UpdateLinkVisual
               (LinkObjectScript *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                   );
    cRam_? = '\x01';
  }
  bVar1 = LinkObjectScript_UpdatePositions(this,link,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar2,0,(this->fields)._.startPos,(MethodInfo *)0x0);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar2,1,(this->fields)._.endPos,(MethodInfo *)0x0);
    pBVar3 = (this->fields).boxCollider;
    if ((pBVar3 == (BoxCollider *)0x0) ||
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar3,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0))
    goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar4,(MethodInfo *)0x0);
    uVar6 = (this->fields)._.startPos.x;
    uVar7 = (this->fields)._.startPos.y;
    fVar8 = (this->fields)._.startPos.z;
    uVar9 = (this->fields)._.endPos.x;
    uVar10 = (this->fields)._.endPos.y;
    uVar11 = (this->fields)._.startPos.x;
    uVar12 = (this->fields)._.startPos.y;
    if (pTVar5 == (Transform *)0x0) goto code_?;
    value.y = (float)uVar7 + ((float)uVar10 - (float)uVar12) * _UNK_?;
    value.x = (float)uVar6 + ((float)uVar9 - (float)uVar11) * _UNK_?;
    value.z = fVar8 + ((this->fields)._.endPos.z - fVar8) * _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar5,value,(MethodInfo *)0x0);
    pBVar3 = (this->fields).boxCollider;
    if ((pBVar3 == (BoxCollider *)0x0) ||
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar3,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0))
    goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar4,(MethodInfo *)0x0);
    pVVar13 = (Vector3 *)func_?();
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffd4,*pVVar13,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar5,*pQVar14,(MethodInfo *)0x0);
    func_?();
    pBVar3 = (this->fields).boxCollider;
    if ((pBVar3 == (BoxCollider *)0x0) ||
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pBVar3,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0))
    goto code_?;
    value_00.z = (float)&UNK_?;
    value_00.x = 0.2;
    value_00.y = 0.2;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar5,value_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pLVar2,(MethodInfo *)0x0);
    fVar16 = (float10)func_?();
    if (pMVar15 == (Material *)0x0) goto code_?;
    VVar17.y = 1.0;
    VVar17.x = (float)(fVar16 * (float10)_UNK_?);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
              (pMVar15,VVar17,(MethodInfo *)0x0);
  }
  pLVar2 = (this->fields).lineRenderer;
  if (pLVar2 != (LineRenderer *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                       ((Renderer *)pLVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (link != (Link *)0x0) {
      pLVar2 = (this->fields).lineRenderer;
      if ((link->fields).isSet == 0) {
        if ((pLVar2 != (LineRenderer *)0x0) &&
           (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)pLVar2,(MethodInfo *)0x0), pMVar15 != (Material *)0x0))
        {
          value_01.g = (float)_UNK_?;
          value_01.r = (float)_UNK_?;
          value_01.b = (float)_UNK_?;
          value_01.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar15,value_01,(MethodInfo *)0x0);
          return;
        }
      }
      else if ((pLVar2 != (LineRenderer *)0x0) &&
              (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   ((Renderer *)pLVar2,(MethodInfo *)0x0),
              pMVar15 != (Material *)0x0)) {
        value_02.g = (float)_UNK_?;
        value_02.r = (float)_UNK_?;
        value_02.b = (float)_UNK_?;
        value_02.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar15,value_02,(MethodInfo *)0x0);
        pBVar3 = (this->fields).boxCollider;
        if ((pBVar3 != (BoxCollider *)0x0) &&
           (((pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pBVar3,(MethodInfo *)0x0),
             pGVar4 != (GameObject *)0x0 &&
             (this_00 = (Renderer *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar4,
                                   UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                  ), this_00 != (Renderer *)0x0)) &&
            (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 (this_00,(MethodInfo *)0x0), pMVar15 != (Material *)0x0)))) {
          VVar17 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTextureOffset
                             (pMVar15,(MethodInfo *)0x0);
          fStack_18 = VVar17.x;
          fStack_19 = VVar17.y;
          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar8 = fVar8 * _UNK_?;
          pLVar2 = (this->fields).lineRenderer;
          if ((pLVar2 != (LineRenderer *)0x0) &&
             (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pLVar2,(MethodInfo *)0x0), pMVar15 != (Material *)0x0
             )) {
            value_03.y = fStack_19;
            value_03.x = fStack_18 - fVar8;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                      (pMVar15,value_03,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Boolean UpdatePositions(Link) */

bool Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_UpdatePositions
               (LinkObjectScript *this,Link *link,MethodInfo *method)

{
  if (link == (Link *)0x0) goto code_?;
  iVar1 = (link->fields).outputWOID;
  if (iVar1 < 1) {
    if ((link->fields).inputWOID < 1) {
      return 0;
    }
    iVar1 = (link->fields).outputWOID;
  }
  if (iVar1 < 1) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar3 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,(link->fields).inputWOID,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
    pVVar4 = MVWorldObjectClient::MVWorldObjectClient_GetInputConnectorPos
                       ((Vector3 *)&stack0xfffffff0,pMVar3,(MethodInfo *)0x0);
    pVVar4 = LinkObjectScript_CalculateUnconnectedLinkPos
                       ((Vector3 *)&stack0xffffffe4,this,*pVVar4,(MethodInfo *)0x0);
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar3 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,(link->fields).outputWOID,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
    pVVar4 = MVWorldObjectClient::MVWorldObjectClient_GetOutputConnectorPos
                       ((Vector3 *)&stack0xffffffe4,pMVar3,(MethodInfo *)0x0);
  }
  fVar5 = pVVar4->z;
  if ((link->fields).inputWOID < 1) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar2,(link->fields).outputWOID,(MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        pVVar6 = MVWorldObjectClient::MVWorldObjectClient_GetOutputConnectorPos
                           ((Vector3 *)&stack0xffffffe4,pMVar3,(MethodInfo *)0x0);
        pVVar4 = (Vector3 *)&stack0xffffffe4;
        puVar7 = &UNK_?;
        pVVar6 = LinkObjectScript_CalculateUnconnectedLinkPos(pVVar4,this,*pVVar6,(MethodInfo *)0x0)
        ;
code_?:
        newStartPos.y = (float)pVVar4;
        newStartPos.x = (float)puVar7;
        newStartPos.z = fVar5;
        bVar8 = LinkObjectBase::LinkObjectBase_UpdatePositions
                          ((LinkObjectBase *)this,newStartPos,*pVVar6,(MethodInfo *)0x0);
        return bVar8;
      }
    }
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar2,(link->fields).inputWOID,(MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        pVVar4 = (Vector3 *)&stack0xffffffe4;
        puVar7 = &UNK_?;
        pVVar6 = MVWorldObjectClient::MVWorldObjectClient_GetInputConnectorPos
                           (pVVar4,pMVar3,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}

