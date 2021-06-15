
/* Void Initialize(ObjectLink) */

void Assembly-CSharp.dll::ObjectLinkObjectScript::ObjectLinkObjectScript_Initialize
               (ObjectLinkObjectScript *this,ObjectLink *link,MethodInfo *method)

{
  (this->fields)._.isObjectLink = 1;
  if (link != (ObjectLink *)0x0) {
    (this->fields)._.linkID = (link->fields).id;
    ObjectLinkObjectScript_UpdateLinkVisual(this,link,(MethodInfo *)0x0);
    this_00 = (this->fields).lineRenderer;
    if (this_00 != (LineRenderer *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_00,(MethodInfo *)0x0);
      pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      if (this_01 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (this_01,*pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateLinkVisual(ObjectLink) */

void Assembly-CSharp.dll::ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
               (ObjectLinkObjectScript *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((link != (ObjectLink *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) &&
     (this_00 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,(link->fields).objectConnectorWOID,(MethodInfo *)0x0),
     this_00 != (MVWorldObjectClient *)0x0)) {
    pVVar2 = MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                        ((Vector3 *)&stack0xffffffa8,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar6 = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar1,(link->fields).objectWOID,(MethodInfo *)0x0),
       pMVar6 != (MVCubeModelBase *)0x0)) {
      pMVar7 = pMVar6->klass;
      bVar8 = (pMVar7->_1).naturalAligment;
      bVar9 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if ((bVar8 < bVar9) ||
         ((MVCubeModelBase__Class *)(pMVar7->_1).typeHierarchy[bVar9 - 1] !=
          TypeInfo__MVCubeModelBase)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      pMVar11 = (MVCubeModelBase *)0x0;
      if (bVar10) {
        pMVar11 = pMVar6;
      }
      if (pMVar11 != (MVCubeModelBase *)0x0) {
        if ((bVar8 < bVar9) ||
           ((MVCubeModelBase__Class *)(pMVar7->_1).typeHierarchy[bVar9 - 1] !=
            TypeInfo__MVCubeModelBase)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pMVar11 = (MVCubeModelBase *)0x0;
        if (bVar10) {
          pMVar11 = pMVar6;
        }
        pVVar2 = MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                            ((Vector3 *)&stack0xffffffa8,pMVar11,(MethodInfo *)0x0);
        newStartPos.y = (float)uVar4;
        newStartPos.x = (float)uVar3;
        newStartPos.z = fVar5;
        bVar12 = LinkObjectBase::LinkObjectBase_UpdatePositions
                           ((LinkObjectBase *)this,newStartPos,*pVVar2,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          return;
        }
        pLVar13 = (this->fields).lineRenderer;
        if (pLVar13 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                    (pLVar13,0,(this->fields)._.startPos,(MethodInfo *)0x0);
          pLVar13 = (this->fields).lineRenderer;
          if (pLVar13 != (LineRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      (pLVar13,1,(this->fields)._.endPos,(MethodInfo *)0x0);
            pBVar14 = (this->fields).boxCollider;
            if ((pBVar14 != (BoxCollider *)0x0) &&
               (pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pBVar14,(MethodInfo *)0x0),
               pGVar15 != (GameObject *)0x0)) {
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar15,(MethodInfo *)0x0);
              fVar17 = (this->fields)._.startPos.z;
              fVar18 = (this->fields)._.endPos.z;
              fVar5 = (this->fields)._.startPos.x;
              fVar19 = (this->fields)._.startPos.y;
              uVar20._0_4_ = (this->fields)._.startPos.x;
              uVar20._4_4_ = (this->fields)._.startPos.y;
              uVar21._0_4_ = (this->fields)._.endPos.x;
              uVar21._4_4_ = (this->fields)._.endPos.y;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              a.z = fVar18;
              a.x = (float)(int)uVar21;
              a.y = (float)(int)((ulonglong)uVar21 >> 0x20);
              b.z = fVar17;
              b.x = (float)(int)uVar20;
              b.y = (float)(int)((ulonglong)uVar20 >> 0x20);
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                  ((Vector3 *)&stack0xffffffdc,a,b,(MethodInfo *)0x0);
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                                  ((Vector3 *)&stack0xffffffdc,*pVVar2,2.0,(MethodInfo *)0x0);
              a_00.y = fVar19;
              a_00.x = fVar5;
              a_00.z = fVar17;
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  ((Vector3 *)&stack0xffffffd0,a_00,*pVVar2,(MethodInfo *)0x0);
              if (pTVar16 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar16,*pVVar2,(MethodInfo *)0x0);
                pBVar14 = (this->fields).boxCollider;
                if ((pBVar14 != (BoxCollider *)0x0) &&
                   (pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_gameObject((Component_1 *)pBVar14,(MethodInfo *)0x0),
                   pGVar15 != (GameObject *)0x0)) {
                  pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar15,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffd0,(this->fields)._.endPos,
                             (this->fields)._.startPos,(MethodInfo *)0x0);
                  puVar22 = (undefined8 *)func_?();
                  uVar20 = *puVar22;
                  fVar5 = *(float *)(puVar22 + 1);
                  fVar19 = (float)((ulonglong)uVar20 >> 0x20);
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?();
                    uVar20 = CONCAT44(fVar19,(float)uVar20);
                  }
                  forward.z = fVar5;
                  forward.x = (float)(int)uVar20;
                  forward.y = (float)(int)((ulonglong)uVar20 >> 0x20);
                  pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_LookRotation_1
                                      ((Quaternion *)&puStack_24,forward,(MethodInfo *)0x0);
                  if (pTVar16 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar16,*pQVar23,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)&stack0xffffffd0,(this->fields)._.endPos,
                               (this->fields)._.startPos,(MethodInfo *)0x0);
                    fVar25 = (float10)func_?();
                    fVar26 = (float10)_UNK_?;
                    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                              ((float)(fVar25 - fVar26),0.2,(MethodInfo *)0x0);
                    pBVar14 = (this->fields).boxCollider;
                    if (pBVar14 != (BoxCollider *)0x0) {
                      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pBVar14,(MethodInfo *)0x0);
                      fVar19 = 0.0;
                      fVar5 = 0.0;
                      uVar20._0_4_ = 0.0;
                      func_?();
                      if (pTVar16 != (Transform *)0x0) {
                        value.y = (float)uVar20;
                        value.x = fVar5;
                        value.z = fVar19;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                  (pTVar16,value,(MethodInfo *)0x0);
                        pLVar13 = (this->fields).lineRenderer;
                        if (pLVar13 != (LineRenderer *)0x0) {
                          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                    Renderer_get_material((Renderer *)pLVar13,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                    ((Vector3 *)&stack0xffffffd0,(this->fields)._.endPos,
                                     (this->fields)._.startPos,(MethodInfo *)0x0);
                          func_?();
                          fVar5 = 0.0;
                          uVar20._0_4_ = 0.0;
                          func_?();
                          if (this_01 != (Material *)0x0) {
                            value_00.y = (float)uVar20;
                            value_00.x = fVar5;
                            UnityEngine.CoreModule.dll::UnityEngine::Material::
                            Material_set_mainTextureScale(this_01,value_00,(MethodInfo *)0x0);
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
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Boolean UpdatePositions(ObjectLink) */

bool Assembly-CSharp.dll::ObjectLinkObjectScript::ObjectLinkObjectScript_UpdatePositions
               (ObjectLinkObjectScript *this,ObjectLink *link,MethodInfo *method)

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
  if ((link != (ObjectLink *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    this_01 = (MVWorldObjectClient *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,(link->fields).objectConnectorWOID,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClient *)0x0) {
      MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        id = (link->fields).objectWOID;
        pMVar2 = (MVCubeModelBase *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,id,(MethodInfo *)0x0);
        if (pMVar2 != (MVCubeModelBase *)0x0) {
          pMVar3 = pMVar2->klass;
          bVar4 = (pMVar3->_1).naturalAligment;
          bVar5 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
          if ((bVar4 < bVar5) ||
             ((MVCubeModelBase__Class *)(pMVar3->_1).typeHierarchy[bVar5 - 1] !=
              TypeInfo__MVCubeModelBase)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pMVar7 = (MVCubeModelBase *)0x0;
          if (bVar6) {
            pMVar7 = pMVar2;
          }
          if (pMVar7 != (MVCubeModelBase *)0x0) {
            if ((bVar4 < bVar5) ||
               ((MVCubeModelBase__Class *)(pMVar3->_1).typeHierarchy[bVar5 - 1] !=
                TypeInfo__MVCubeModelBase)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            pMVar7 = (MVCubeModelBase *)0x0;
            if (bVar6) {
              pMVar7 = pMVar2;
            }
            __return_storage_ptr__ = (Vector3 *)&stack0xffffffe4;
            puVar8 = &UNK_?;
            pVVar9 = MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                                (__return_storage_ptr__,pMVar7,(MethodInfo *)0x0);
            this_00 = pVVar9->y;
            newStartPos.y = (float)puVar8;
            newStartPos.x = (float)id;
            newStartPos.z = (float)__return_storage_ptr__;
            bVar10 = LinkObjectBase::LinkObjectBase_UpdatePositions
                              ((LinkObjectBase *)this_00,newStartPos,*pVVar9,(MethodInfo *)0x0);
            return bVar10;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* ObjectLinkObjectScript() */

void Assembly-CSharp.dll::ObjectLinkObjectScript::ObjectLinkObjectScript__ctor
               (ObjectLinkObjectScript *this,MethodInfo *method)

{
  (this->fields)._.linkID = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

