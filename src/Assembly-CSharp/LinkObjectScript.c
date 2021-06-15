
/* Void Initialize(Link) */

void Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_Initialize
               (LinkObjectScript *this,Link_1 *link,MethodInfo *method)

{
  (this->fields)._.isObjectLink = 0;
  if (link == (Link_1 *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields)._.linkID = (link->fields).id;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar2 = LinkObjectScript_UpdatePositions(this,link,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pLVar3 = (this->fields).lineRenderer;
    if (pLVar3 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar3,0,(this->fields)._.startPos,(MethodInfo *)0x0);
    pLVar3 = (this->fields).lineRenderer;
    if (pLVar3 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar3,1,(this->fields)._.endPos,(MethodInfo *)0x0);
    pBVar4 = (this->fields).boxCollider;
    if ((pBVar4 == (BoxCollider *)0x0) ||
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pBVar4,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0))
    goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar5,(MethodInfo *)0x0);
    uVar7._0_4_ = (this->fields)._.startPos.x;
    fStack_8 = (this->fields)._.startPos.y;
    fVar9 = (this->fields)._.startPos.z;
    uVar10._0_4_ = (this->fields)._.startPos.x;
    uVar10._4_4_ = (this->fields)._.startPos.y;
    fVar11 = (this->fields)._.endPos.z;
    fVar12 = (this->fields)._.startPos.z;
    uVar13._0_4_ = (this->fields)._.endPos.x;
    uVar13._4_4_ = (this->fields)._.endPos.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      uVar7 = CONCAT44(fStack_8,TypeInfo__UnityEngine__Vector3);
      func_?();
    }
    uVar7 = uVar7 & 0xffffffff00000000;
    VVar14.z = fVar11;
    VVar14.x = (float)(int)uVar13;
    VVar14.y = (float)(int)((ulonglong)uVar13 >> 0x20);
    b.z = fVar12;
    b.x = (float)(int)uVar10;
    b.y = (float)(int)((ulonglong)uVar10 >> 0x20);
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&puStack_16,VVar14,b,(MethodInfo *)0x0);
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                        ((Vector3 *)&puStack_16,*pVVar15,2.0,(MethodInfo *)0x0);
    a.z = fVar9;
    fStack_8 = (float)(uVar7 >> 0x20);
    a.x = (float)(undefined4)uVar7;
    a.y = fStack_8;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffc8,a,*pVVar15,(MethodInfo *)0x0);
    if (pTVar6 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar6,*pVVar15,(MethodInfo *)0x0);
    pBVar4 = (this->fields).boxCollider;
    if ((pBVar4 == (BoxCollider *)0x0) ||
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pBVar4,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0))
    goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffc8,(this->fields)._.endPos,(this->fields)._.startPos,
               (MethodInfo *)0x0);
    pVVar15 = (Vector3 *)func_?();
    VVar14 = *pVVar15;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffc4,VVar14,(MethodInfo *)0x0);
    if (pTVar6 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar6,*pQVar17,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffc8,(this->fields)._.endPos,(this->fields)._.startPos,
               (MethodInfo *)0x0);
    fVar18 = (float10)func_?();
    fVar19 = (float10)_UNK_?;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
              ((float)(fVar18 - fVar19),0.2,(MethodInfo *)0x0);
    pBVar4 = (this->fields).boxCollider;
    if (pBVar4 == (BoxCollider *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pBVar4,(MethodInfo *)0x0);
    uVar10._0_4_ = 0.0;
    uVar10._4_4_ = 0.0;
    func_?();
    if (pTVar6 == (Transform *)0x0) goto code_?;
    value.y = uVar10._4_4_;
    value.x = (float)uVar10;
    value.z = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar6,value,(MethodInfo *)0x0);
    pLVar3 = (this->fields).lineRenderer;
    if (pLVar3 == (LineRenderer *)0x0) goto code_?;
    pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pLVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffc8,(this->fields)._.endPos,(this->fields)._.startPos,
               (MethodInfo *)0x0);
    func_?();
    uVar10._0_4_ = 0.0;
    uVar10._4_4_ = 0.0;
    func_?();
    if (pMVar20 == (Material *)0x0) goto code_?;
    VVar21.y = uVar10._4_4_;
    VVar21.x = (float)uVar10;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
              (pMVar20,VVar21,(MethodInfo *)0x0);
  }
  pLVar3 = (this->fields).lineRenderer;
  if (pLVar3 != (LineRenderer *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                      ((Renderer *)pLVar3,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (link != (Link_1 *)0x0) {
      pLVar3 = (this->fields).lineRenderer;
      if ((link->fields).isSet == 0) {
        if (pLVar3 != (LineRenderer *)0x0) {
          pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              ((Renderer *)pLVar3,(MethodInfo *)0x0);
          pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                              ((Color *)&stack0xffffff9c,(MethodInfo *)0x0);
          if (pMVar20 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (pMVar20,*pCVar22,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (pLVar3 != (LineRenderer *)0x0) {
        pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar3,(MethodInfo *)0x0);
        pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                            ((Color *)&stack0xffffff9c,(MethodInfo *)0x0);
        if (pMVar20 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar20,*pCVar22,(MethodInfo *)0x0);
          pBVar4 = (this->fields).boxCollider;
          if ((((pBVar4 != (BoxCollider *)0x0) &&
               (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pBVar4,(MethodInfo *)0x0),
               pGVar5 != (GameObject *)0x0)) &&
              (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_47
                                   (pGVar5,
                                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                   ), this_00 != (UseInteractorHandler *)0x0)) &&
             (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)this_00,(MethodInfo *)0x0),
             pMVar20 != (Material *)0x0)) {
            VVar21 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                     Material_get_mainTextureOffset(pMVar20,(MethodInfo *)0x0);
            uVar10._4_4_ = VVar21.x;
            fVar9 = VVar21.y;
            uVar10._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
            uVar10._0_4_ = (float)uVar10 * _UNK_?;
            pLVar3 = (this->fields).lineRenderer;
            if ((pLVar3 != (LineRenderer *)0x0) &&
               (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                    ((Renderer *)pLVar3,(MethodInfo *)0x0),
               pMVar20 != (Material *)0x0)) {
              value_00.y = fVar9;
              value_00.x = uVar10._4_4_ - (float)uVar10;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                        (pMVar20,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateLinkVisual(Link) */

void Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_UpdateLinkVisual
               (LinkObjectScript *this,Link_1 *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pBVar3,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0))
    goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar4,(MethodInfo *)0x0);
    uVar6._0_4_ = (this->fields)._.startPos.x;
    fStack_7 = (this->fields)._.startPos.y;
    fVar8 = (this->fields)._.startPos.z;
    uVar9._0_4_ = (this->fields)._.startPos.x;
    uVar9._4_4_ = (this->fields)._.startPos.y;
    fVar10 = (this->fields)._.endPos.z;
    fVar11 = (this->fields)._.startPos.z;
    uVar12._0_4_ = (this->fields)._.endPos.x;
    uVar12._4_4_ = (this->fields)._.endPos.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      uVar6 = CONCAT44(fStack_7,TypeInfo__UnityEngine__Vector3);
      func_?();
    }
    uVar6 = uVar6 & 0xffffffff00000000;
    VVar13.z = fVar10;
    VVar13.x = (float)(int)uVar12;
    VVar13.y = (float)(int)((ulonglong)uVar12 >> 0x20);
    b.z = fVar11;
    b.x = (float)(int)uVar9;
    b.y = (float)(int)((ulonglong)uVar9 >> 0x20);
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&puStack_15,VVar13,b,(MethodInfo *)0x0);
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                        ((Vector3 *)&puStack_15,*pVVar14,2.0,(MethodInfo *)0x0);
    a.z = fVar8;
    fStack_7 = (float)(uVar6 >> 0x20);
    a.x = (float)(undefined4)uVar6;
    a.y = fStack_7;
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffc8,a,*pVVar14,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar5,*pVVar14,(MethodInfo *)0x0);
    pBVar3 = (this->fields).boxCollider;
    if ((pBVar3 == (BoxCollider *)0x0) ||
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pBVar3,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0))
    goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffc8,(this->fields)._.endPos,(this->fields)._.startPos,
               (MethodInfo *)0x0);
    pVVar14 = (Vector3 *)func_?();
    VVar13 = *pVVar14;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffc4,VVar13,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar5,*pQVar16,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffc8,(this->fields)._.endPos,(this->fields)._.startPos,
               (MethodInfo *)0x0);
    fVar17 = (float10)func_?();
    fVar18 = (float10)_UNK_?;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
              ((float)(fVar17 - fVar18),0.2,(MethodInfo *)0x0);
    pBVar3 = (this->fields).boxCollider;
    if (pBVar3 == (BoxCollider *)0x0) goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pBVar3,(MethodInfo *)0x0);
    uVar9._0_4_ = 0.0;
    uVar9._4_4_ = 0.0;
    func_?();
    if (pTVar5 == (Transform *)0x0) goto code_?;
    value.y = uVar9._4_4_;
    value.x = (float)uVar9;
    value.z = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar5,value,(MethodInfo *)0x0);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pLVar2,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffc8,(this->fields)._.endPos,(this->fields)._.startPos,
               (MethodInfo *)0x0);
    func_?();
    uVar9._0_4_ = 0.0;
    uVar9._4_4_ = 0.0;
    func_?();
    if (pMVar19 == (Material *)0x0) goto code_?;
    VVar20.y = uVar9._4_4_;
    VVar20.x = (float)uVar9;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
              (pMVar19,VVar20,(MethodInfo *)0x0);
  }
  pLVar2 = (this->fields).lineRenderer;
  if (pLVar2 != (LineRenderer *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                      ((Renderer *)pLVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (link != (Link_1 *)0x0) {
      pLVar2 = (this->fields).lineRenderer;
      if ((link->fields).isSet == 0) {
        if (pLVar2 != (LineRenderer *)0x0) {
          pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              ((Renderer *)pLVar2,(MethodInfo *)0x0);
          pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                              ((Color *)&stack0xffffff9c,(MethodInfo *)0x0);
          if (pMVar19 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (pMVar19,*pCVar21,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (pLVar2 != (LineRenderer *)0x0) {
        pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar2,(MethodInfo *)0x0);
        pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                            ((Color *)&stack0xffffff9c,(MethodInfo *)0x0);
        if (pMVar19 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar19,*pCVar21,(MethodInfo *)0x0);
          pBVar3 = (this->fields).boxCollider;
          if ((((pBVar3 != (BoxCollider *)0x0) &&
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pBVar3,(MethodInfo *)0x0),
               pGVar4 != (GameObject *)0x0)) &&
              (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_47
                                   (pGVar4,
                                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                   ), this_00 != (UseInteractorHandler *)0x0)) &&
             (pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)this_00,(MethodInfo *)0x0),
             pMVar19 != (Material *)0x0)) {
            VVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                     Material_get_mainTextureOffset(pMVar19,(MethodInfo *)0x0);
            uVar9._4_4_ = VVar20.x;
            fVar8 = VVar20.y;
            uVar9._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
            uVar9._0_4_ = (float)uVar9 * _UNK_?;
            pLVar2 = (this->fields).lineRenderer;
            if ((pLVar2 != (LineRenderer *)0x0) &&
               (pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                    ((Renderer *)pLVar2,(MethodInfo *)0x0),
               pMVar19 != (Material *)0x0)) {
              value_00.y = fVar8;
              value_00.x = uVar9._4_4_ - (float)uVar9;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                        (pMVar19,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Boolean UpdatePositions(Link) */

bool Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_UpdatePositions
               (LinkObjectScript *this,Link_1 *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((link != (Link_1 *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = (MVWorldObjectClient *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,(link->fields).outputWOID,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      pVVar3 = MVWorldObjectClient::MVWorldObjectClient_GetOutputConnectorPos
                          ((Vector3 *)&stack0xffffffc4,pMVar2,(MethodInfo *)0x0);
      uVar4 = pVVar3->x;
      uVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = (MVWorldObjectClient *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar1,(link->fields).inputWOID,(MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          pVVar3 = MVWorldObjectClient::MVWorldObjectClient_GetInputConnectorPos
                              ((Vector3 *)&stack0xffffffc4,pMVar2,(MethodInfo *)0x0);
          uVar7 = pVVar3->x;
          uVar8 = pVVar3->y;
          b.y = (float)uVar8;
          b.x = (float)uVar7;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          fVar9 = (this->fields)._.startPos.z;
          uVar10 = (this->fields)._.startPos.y;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          auVar11._4_4_ = fVar9;
          auVar11._0_4_ = uVar10;
          auVar11._8_4_ = 0;
          b_00.y = (float)uVar5;
          b_00.x = (float)uVar4;
          b_00.z = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    ((Vector3 *)&stack0xffffffb8,(Vector3)(auVar11 << 0x20),b_00,(MethodInfo *)0x0);
          fVar12 = (float10)func_?();
          fVar9 = (float)fVar12;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          puVar13 = &UNK_?;
          bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Approximately
                             (fVar9,0.0,(MethodInfo *)0x0);
          if (bVar14 == 0) {
            (this->fields)._.startPos.x = (float)uVar4;
            (this->fields)._.startPos.y = (float)puVar13;
            (this->fields)._.startPos.z = fVar6;
          }
          link = (Link_1 *)(this->fields)._.endPos.z;
          uVar15 = (this->fields)._.endPos.x;
          uVar16 = (this->fields)._.endPos.y;
          a.y = (float)uVar16;
          a.x = (float)uVar15;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            link = (Link_1 *)&UNK_?;
            func_?();
          }
          a.z = (float)link;
          b.z = fVar9;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    ((Vector3 *)&stack0xffffffdc,a,b,(MethodInfo *)0x0);
          fVar12 = (float10)func_?();
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Approximately
                             ((float)fVar12,0.0,(MethodInfo *)0x0);
          if (bVar17 == 0) {
            (this->fields)._.endPos.x = (float)uVar7;
            (this->fields)._.endPos.y = (float)&UNK_?;
            (this->fields)._.endPos.z = fVar9;
          }
          return bVar17 == 0 || bVar14 == 0;
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  bVar14 = (*pcVar18)();
  return bVar14;
}

