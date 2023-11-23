
/* Vector3 CalculateUnconnectedLinkPos(Vector3) */

Vector3 * Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_CalculateUnconnectedLinkPos
                    (Vector3 *__return_storage_ptr__,LinkObjectScript *this,Vector3 connectedPos,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Physics);
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
                        (&RStack_3.m_Direction,(MethodInfo *)0x0);
    if (this_00 != (Camera *)0x0) {
      pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                          (&RStack_3,this_00,*pVVar2,(MethodInfo *)0x0);
      fVar5 = (pRVar4->m_Origin).x;
      RStack_6._options = (int32_t)(pRVar4->m_Origin).y;
      RStack_6._cultureKey = (String *)(pRVar4->m_Origin).z;
      RStack_6._pattern = (String *)(pRVar4->m_Direction).x;
      uVar7._0_4_ = (pRVar4->m_Direction).y;
      uVar7._4_4_ = (pRVar4->m_Direction).z;
      fStack_8 = (float)(undefined4)uVar7;
      fStack_9 = (float)uVar7._4_4_;
      if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        uVar7 = CONCAT44(fStack_9,fStack_8);
      }
      ray.m_Origin.y = (float)RStack_6._options;
      ray.m_Origin.x = fVar5;
      ray.m_Origin.z = (float)RStack_6._cultureKey;
      ray.m_Direction.x = (float)RStack_6._pattern;
      ray.m_Direction.y = (float)(int)uVar7;
      ray.m_Direction.z = (float)(int)((ulonglong)uVar7 >> 0x20);
      bVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_14
                         (ray,(RaycastHit *)&stack0xffffff94,INFINITY,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        pRVar11 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            (&RStack_6,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&stack0xffffff94,(MethodInfo *)0x0);
code_?:
        pSVar12 = pRVar11->_cultureKey;
        pSVar13 = pRVar11->_pattern;
        __return_storage_ptr__->x = (float)pRVar11->_options;
        __return_storage_ptr__->y = (float)pSVar12;
        __return_storage_ptr__->z = (float)pSVar13;
        return __return_storage_ptr__;
      }
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar14 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&RStack_3.m_Direction,pTVar14,(MethodInfo *)0x0);
        uVar15 = pVVar2->x;
        uVar16 = pVVar2->y;
        fStack_17 = connectedPos.x - (float)uVar15;
        fStack_18 = connectedPos.y - (float)uVar16;
        fStack_9 = connectedPos.z - pVVar2->z;
        fStack_19 = (float)uVar15;
        fStack_8 = (float)uVar16;
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar14 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)&RStack_6,pTVar14,(MethodInfo *)0x0);
          RStack_3.m_Direction.x = pVVar2->x;
          RStack_3.m_Direction.y = pVVar2->y;
          RStack_3.m_Direction.z = pVVar2->z;
          fStack_17 = (RStack_3.m_Direction.x * fStack_17 + RStack_3.m_Direction.y * fStack_18 +
                     RStack_3.m_Direction.z * fStack_9) - _UNK_?;
          fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                                (this_00,(MethodInfo *)0x0);
          fStack_9 = fStack_9 + _UNK_?;
          if (fStack_17 <= fStack_9) {
            fStack_17 = fStack_9;
          }
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                              ((Vector3 *)&RStack_6,(MethodInfo *)0x0);
          RStack_3.m_Direction.x = pVVar2->x;
          RStack_3.m_Direction.y = pVVar2->y;
          RStack_3.m_Direction.z = pVVar2->z;
          pVVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                              ((Vector3 *)&RStack_6,(MethodInfo *)0x0);
          RStack_3.m_Direction.z = fStack_17;
          uVar20 = pVVar2->x;
          uVar21 = pVVar2->y;
          position.y = (float)uVar21;
          position.x = RStack_3.m_Direction.x;
          position.z = fStack_17;
          fStack_19 = (float)uVar20;
          fStack_8 = (float)uVar21;
          pRVar11 = (Regex_CachedCodeEntryKey *)
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                              ((Vector3 *)&RStack_6,this_00,position,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar22)();
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
    uVar13 = (this->fields)._.endPos.x;
    uVar14 = (this->fields)._.endPos.y;
    uVar15 = (this->fields)._.startPos.x;
    uVar16 = (this->fields)._.startPos.y;
    value_00.y = (float)uVar14 - (float)uVar16;
    value_00.x = (float)uVar13 - (float)uVar15;
    value_00.z = (this->fields)._.endPos.z - (this->fields)._.startPos.z;
    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffd8,value_00,(MethodInfo *)0x0);
    pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffd4,*pVVar17,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar5,*pQVar18,(MethodInfo *)0x0);
    fVar19 = (float10)func_?();
    fVar8 = (float)(fVar19 - (float10)_UNK_?);
    if ((float)(fVar19 - (float10)_UNK_?) <= _UNK_?) {
      fVar8 = _UNK_?;
    }
    pBVar3 = (this->fields).boxCollider;
    if ((pBVar3 == (BoxCollider *)0x0) ||
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pBVar3,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0))
    goto code_?;
    value_01.z = fVar8;
    value_01.x = 0.2;
    value_01.y = 0.2;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar5,value_01,(MethodInfo *)0x0);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pLVar2,(MethodInfo *)0x0);
    fVar19 = (float10)func_?();
    if (pMVar20 == (Material *)0x0) goto code_?;
    VVar21.y = 1.0;
    VVar21.x = (float)(fVar19 * (float10)_UNK_?);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
              (pMVar20,VVar21,(MethodInfo *)0x0);
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
           (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)pLVar2,(MethodInfo *)0x0), pMVar20 != (Material *)0x0)
           ) {
          value_02.g = (float)_UNK_?;
          value_02.r = (float)_UNK_?;
          value_02.b = (float)_UNK_?;
          value_02.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar20,value_02,(MethodInfo *)0x0);
          return;
        }
      }
      else if ((pLVar2 != (LineRenderer *)0x0) &&
              (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   ((Renderer *)pLVar2,(MethodInfo *)0x0),
              pMVar20 != (Material *)0x0)) {
        value_03.g = (float)_UNK_?;
        value_03.r = (float)_UNK_?;
        value_03.b = (float)_UNK_?;
        value_03.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar20,value_03,(MethodInfo *)0x0);
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
            (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 (this_00,(MethodInfo *)0x0), pMVar20 != (Material *)0x0)))) {
          VVar21 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTextureOffset
                             (pMVar20,(MethodInfo *)0x0);
          fStack_22 = VVar21.x;
          fStack_23 = VVar21.y;
          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar8 = fVar8 * _UNK_?;
          pLVar2 = (this->fields).lineRenderer;
          if ((pLVar2 != (LineRenderer *)0x0) &&
             (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pLVar2,(MethodInfo *)0x0),
             pMVar20 != (Material *)0x0)) {
            value_04.y = fStack_23;
            value_04.x = fStack_22 - fVar8;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                      (pMVar20,value_04,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
    uVar13 = (this->fields)._.endPos.x;
    uVar14 = (this->fields)._.endPos.y;
    uVar15 = (this->fields)._.startPos.x;
    uVar16 = (this->fields)._.startPos.y;
    value_00.y = (float)uVar14 - (float)uVar16;
    value_00.x = (float)uVar13 - (float)uVar15;
    value_00.z = (this->fields)._.endPos.z - (this->fields)._.startPos.z;
    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffd8,value_00,(MethodInfo *)0x0);
    pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffd4,*pVVar17,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar5,*pQVar18,(MethodInfo *)0x0);
    fVar19 = (float10)func_?();
    fVar8 = (float)(fVar19 - (float10)_UNK_?);
    if ((float)(fVar19 - (float10)_UNK_?) <= _UNK_?) {
      fVar8 = _UNK_?;
    }
    pBVar3 = (this->fields).boxCollider;
    if ((pBVar3 == (BoxCollider *)0x0) ||
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pBVar3,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0))
    goto code_?;
    value_01.z = fVar8;
    value_01.x = 0.2;
    value_01.y = 0.2;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar5,value_01,(MethodInfo *)0x0);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pLVar2,(MethodInfo *)0x0);
    fVar19 = (float10)func_?();
    if (pMVar20 == (Material *)0x0) goto code_?;
    VVar21.y = 1.0;
    VVar21.x = (float)(fVar19 * (float10)_UNK_?);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
              (pMVar20,VVar21,(MethodInfo *)0x0);
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
           (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)pLVar2,(MethodInfo *)0x0), pMVar20 != (Material *)0x0)
           ) {
          value_02.g = (float)_UNK_?;
          value_02.r = (float)_UNK_?;
          value_02.b = (float)_UNK_?;
          value_02.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar20,value_02,(MethodInfo *)0x0);
          return;
        }
      }
      else if ((pLVar2 != (LineRenderer *)0x0) &&
              (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   ((Renderer *)pLVar2,(MethodInfo *)0x0),
              pMVar20 != (Material *)0x0)) {
        value_03.g = (float)_UNK_?;
        value_03.r = (float)_UNK_?;
        value_03.b = (float)_UNK_?;
        value_03.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar20,value_03,(MethodInfo *)0x0);
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
            (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 (this_00,(MethodInfo *)0x0), pMVar20 != (Material *)0x0)))) {
          VVar21 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTextureOffset
                             (pMVar20,(MethodInfo *)0x0);
          fStack_22 = VVar21.x;
          fStack_23 = VVar21.y;
          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar8 = fVar8 * _UNK_?;
          pLVar2 = (this->fields).lineRenderer;
          if ((pLVar2 != (LineRenderer *)0x0) &&
             (pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pLVar2,(MethodInfo *)0x0),
             pMVar20 != (Material *)0x0)) {
            value_04.y = fStack_23;
            value_04.x = fStack_22 - fVar8;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                      (pMVar20,value_04,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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

