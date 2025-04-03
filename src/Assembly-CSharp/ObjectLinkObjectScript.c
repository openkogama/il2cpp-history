
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
      if (this_01 != (Material *)0x0) {
        fVar1 = (float)_UNK_?;
        fVar2 = (float)_UNK_?;
        uVar3 = CONCAT44(fVar1,fVar2);
        this = (ObjectLinkObjectScript *)_UNK_?;
        fVar4 = (float)_UNK_?;
        value = (Color)CONCAT88(uVar5,uVar3);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateLinkVisual(ObjectLink) */

void Assembly-CSharp.dll::ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
               (ObjectLinkObjectScript *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((link != (ObjectLink *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) &&
     (this_00 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,(link->fields).objectConnectorWOID,(MethodInfo *)0x0),
     this_00 != (MVWorldObjectClient *)0x0)) {
    pVVar2 = MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                        ((Vector3 *)&puStack_3,this_00,(MethodInfo *)0x0);
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      stack0xffffffdc = (float)pMVar1;
      pMVar6 = (MVCubeModelBase *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,(link->fields).objectWOID,(MethodInfo *)0x0);
      if (pMVar6 != (MVCubeModelBase *)0x0) {
        bVar7 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
        if ((bVar7 <= (pMVar6->klass->_1).naturalAligment) &&
           (ppIVar8 = (pMVar6->klass->_1).typeHierarchy,
           (MVCubeModelBase__Class *)ppIVar8[bVar7 - 1] == TypeInfo__MVCubeModelBase)) {
          this_02 = (MVCubeModelBase *)0x0;
          if ((MVCubeModelBase__Class *)ppIVar8[bVar7 - 1] == TypeInfo__MVCubeModelBase) {
            this_02 = pMVar6;
          }
          pVVar2 = MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                              ((Vector3 *)&puStack_3,this_02,(MethodInfo *)0x0);
          uVar9 = pVVar2->y;
          stack0xffffffdc = (float)&UNK_?;
          newStartPos.y = (float)uVar4;
          newStartPos.x = (float)uVar9;
          newStartPos.z = fVar5;
          bVar10 = LinkObjectBase::LinkObjectBase_UpdatePositions
                             ((LinkObjectBase *)this,newStartPos,*pVVar2,(MethodInfo *)0x0);
          if (bVar10 == 0) {
            return;
          }
          pLVar11 = (this->fields).lineRenderer;
          if (pLVar11 != (LineRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      (pLVar11,0,(this->fields)._.startPos,(MethodInfo *)0x0);
            pLVar11 = (this->fields).lineRenderer;
            if (pLVar11 != (LineRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                        (pLVar11,1,(this->fields)._.endPos,(MethodInfo *)0x0);
              pBVar12 = (this->fields).boxCollider;
              if ((pBVar12 != (BoxCollider *)0x0) &&
                 (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pBVar12,(MethodInfo *)0x0),
                 pGVar13 != (GameObject *)0x0)) {
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar13,(MethodInfo *)0x0);
                puStack_3 = (undefined *)(this->fields)._.startPos.x;
                unique0x0000a404 = (this->fields)._.startPos.y;
                uVar15 = (this->fields)._.endPos.x;
                uVar16 = (this->fields)._.endPos.y;
                uVar17 = (this->fields)._.startPos.x;
                uVar18 = (this->fields)._.startPos.y;
                if (pTVar14 != (Transform *)0x0) {
                  value.y = unique0x0000a404 + ((float)uVar16 - (float)uVar18) * _UNK_?;
                  value.x = (float)puStack_3 + ((float)uVar15 - (float)uVar17) * _UNK_?;
                  value.z = (this->fields)._.startPos.z +
                            ((this->fields)._.endPos.z - (this->fields)._.startPos.z) *
                            _UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar14,value,(MethodInfo *)0x0);
                  pBVar12 = (this->fields).boxCollider;
                  if ((pBVar12 != (BoxCollider *)0x0) &&
                     (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pBVar12,(MethodInfo *)0x0),
                     pGVar13 != (GameObject *)0x0)) {
                    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar13,(MethodInfo *)0x0);
                    puStack_3 = (undefined *)(this->fields)._.endPos.x;
                    unique0x0000a404 = (this->fields)._.endPos.y;
                    pVVar2 = (Vector3 *)func_?();
                    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_LookRotation_1
                                        ((Quaternion *)&stack0xffffffd4,*pVVar2,(MethodInfo *)0x0);
                    if (pTVar14 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                (pTVar14,*pQVar19,(MethodInfo *)0x0);
                      puStack_3 = (undefined *)(this->fields)._.endPos.x;
                      unique0x0000a404 = (this->fields)._.endPos.y;
                      fVar20 = (float10)func_?();
                      fVar5 = (float)(fVar20 - (float10)_UNK_?);
                      if ((float)(fVar20 - (float10)_UNK_?) <= _UNK_?) {
                        fVar5 = _UNK_?;
                      }
                      pBVar12 = (this->fields).boxCollider;
                      if (pBVar12 != (BoxCollider *)0x0) {
                        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pBVar12,(MethodInfo *)0x0);
                        puStack_3 = (undefined *)0x3e4ccccd;
                        stack0xffffffdc = 0.2;
                        if (pTVar14 != (Transform *)0x0) {
                          value_00.z = fVar5;
                          value_00.x = 0.2;
                          value_00.y = 0.2;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localScale(pTVar14,value_00,(MethodInfo *)0x0);
                          pLVar11 = (this->fields).lineRenderer;
                          if (pLVar11 != (LineRenderer *)0x0) {
                            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                      Renderer_get_material((Renderer *)pLVar11,(MethodInfo *)0x0);
                            puStack_3 = (undefined *)(this->fields)._.endPos.x;
                            unique0x0000a404 = (this->fields)._.endPos.y;
                            fVar20 = (float10)func_?();
                            if (this_01 != (Material *)0x0) {
                              value_01.y = 1.0;
                              value_01.x = (float)(fVar20 * (float10)_UNK_?);
                              UnityEngine.CoreModule.dll::UnityEngine::Material::
                              Material_set_mainTextureScale(this_01,value_01,(MethodInfo *)0x0);
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
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean UpdatePositions(ObjectLink) */

bool Assembly-CSharp.dll::ObjectLinkObjectScript::ObjectLinkObjectScript_UpdatePositions
               (ObjectLinkObjectScript *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((link != (ObjectLink *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    this_01 = (MVWorldObjectClient *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,(link->fields).objectConnectorWOID,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClient *)0x0) {
      MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        id = (link->fields).objectWOID;
        pMVar2 = (MVCubeModelBase *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,id,(MethodInfo *)0x0);
        if (pMVar2 != (MVCubeModelBase *)0x0) {
          bVar3 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
          if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
             (ppIVar4 = (pMVar2->klass->_1).typeHierarchy,
             (MVCubeModelBase__Class *)ppIVar4[bVar3 - 1] == TypeInfo__MVCubeModelBase)) {
            this_02 = (MVCubeModelBase *)0x0;
            if ((MVCubeModelBase__Class *)ppIVar4[bVar3 - 1] == TypeInfo__MVCubeModelBase) {
              this_02 = pMVar2;
            }
            puVar5 = &UNK_?;
            pVVar6 = MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                               ((Vector3 *)&stack0xffffffe8,this_02,(MethodInfo *)0x0);
            this_00 = pVVar6->x;
            uVar7 = pVVar6->y;
            newStartPos.y = (float)puVar5;
            newStartPos.x = (float)id;
            newStartPos.z = (float)uVar7;
            bVar8 = LinkObjectBase::LinkObjectBase_UpdatePositions
                              ((LinkObjectBase *)this_00,newStartPos,*pVVar6,(MethodInfo *)0x0);
            return bVar8;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}

