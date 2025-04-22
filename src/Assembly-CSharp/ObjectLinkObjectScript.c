
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
                        ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar2->z;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar4 = (MVCubeModelBase *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar1,(link->fields).objectWOID,(MethodInfo *)0x0),
        pMVar4 != (MVCubeModelBase *)0x0)) &&
       (((TypeInfo__MVCubeModelBase->_1).naturalAligment <= (pMVar4->klass->_1).naturalAligment &&
        ((MVCubeModelBase__Class *)
         (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] ==
         TypeInfo__MVCubeModelBase)))) {
      this_02 = (MVCubeModelBase *)0x0;
      if ((MVCubeModelBase__Class *)
          (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] ==
          TypeInfo__MVCubeModelBase) {
        this_02 = pMVar4;
      }
      pVVar2 = MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                          ((Vector3 *)&stack0xffffffd8,this_02,(MethodInfo *)0x0);
      uVar5 = pVVar2->x;
      uVar6 = pVVar2->y;
      newStartPos.y = (float)uVar6;
      newStartPos.x = (float)uVar5;
      newStartPos.z = fVar3;
      bVar7 = LinkObjectBase::LinkObjectBase_UpdatePositions
                         ((LinkObjectBase *)this,newStartPos,*pVVar2,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        return;
      }
      pLVar8 = (this->fields).lineRenderer;
      if (pLVar8 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                  (pLVar8,0,(this->fields)._.startPos,(MethodInfo *)0x0);
        pLVar8 = (this->fields).lineRenderer;
        if (pLVar8 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                    (pLVar8,1,(this->fields)._.endPos,(MethodInfo *)0x0);
          pBVar9 = (this->fields).boxCollider;
          if ((pBVar9 != (BoxCollider *)0x0) &&
             (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pBVar9,(MethodInfo *)0x0),
             pGVar10 != (GameObject *)0x0)) {
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar10,(MethodInfo *)0x0);
            uVar12 = (this->fields)._.startPos.x;
            uVar13 = (this->fields)._.startPos.y;
            fVar3 = (this->fields)._.startPos.z;
            uVar14 = (this->fields)._.endPos.x;
            uVar15 = (this->fields)._.endPos.y;
            uVar16 = (this->fields)._.startPos.x;
            uVar17 = (this->fields)._.startPos.y;
            if (pTVar11 != (Transform *)0x0) {
              value.y = (float)uVar13 + ((float)uVar15 - (float)uVar17) * _UNK_?;
              value.x = (float)uVar12 + ((float)uVar14 - (float)uVar16) * _UNK_?;
              value.z = fVar3 + ((this->fields)._.endPos.z - fVar3) * _UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar11,value,(MethodInfo *)0x0);
              pBVar9 = (this->fields).boxCollider;
              if ((pBVar9 != (BoxCollider *)0x0) &&
                 (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pBVar9,(MethodInfo *)0x0),
                 pGVar10 != (GameObject *)0x0)) {
                pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar10,(MethodInfo *)0x0);
                pVVar2 = (Vector3 *)func_?();
                pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_LookRotation_1
                                    ((Quaternion *)&stack0xffffffd4,*pVVar2,(MethodInfo *)0x0);
                if (pTVar11 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar11,*pQVar18,(MethodInfo *)0x0);
                  fVar19 = (float10)func_?();
                  fVar3 = (float)(fVar19 - (float10)_UNK_?);
                  if ((float)(fVar19 - (float10)_UNK_?) <= _UNK_?) {
                    fVar3 = _UNK_?;
                  }
                  pBVar9 = (this->fields).boxCollider;
                  if ((pBVar9 != (BoxCollider *)0x0) &&
                     (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pBVar9,(MethodInfo *)0x0),
                     pTVar11 != (Transform *)0x0)) {
                    value_00.z = fVar3;
                    value_00.x = 0.2;
                    value_00.y = 0.2;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                              (pTVar11,value_00,(MethodInfo *)0x0);
                    pLVar8 = (this->fields).lineRenderer;
                    if (pLVar8 != (LineRenderer *)0x0) {
                      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                Renderer_get_material((Renderer *)pLVar8,(MethodInfo *)0x0);
                      fVar19 = (float10)func_?();
                      if (this_01 != (Material *)0x0) {
                        value_01.y = 1.0;
                        value_01.x = (float)(fVar19 * (float10)_UNK_?);
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
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
    this_00 = (MVWorldObjectClient *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,(link->fields).objectConnectorWOID,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClient *)0x0) {
      pVVar2 = MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                         ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
      this = (ObjectLinkObjectScript *)pVVar2->z;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        id = (link->fields).objectWOID;
        uVar3 = CONCAT44(id,pMVar1);
        pMVar4 = (MVCubeModelBase *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,id,(MethodInfo *)0x0);
        if (pMVar4 != (MVCubeModelBase *)0x0) {
          if (((TypeInfo__MVCubeModelBase->_1).naturalAligment <=
               (pMVar4->klass->_1).naturalAligment) &&
             ((MVCubeModelBase__Class *)
              (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1]
              == TypeInfo__MVCubeModelBase)) {
            this_01 = (MVCubeModelBase *)0x0;
            if ((MVCubeModelBase__Class *)
                (pMVar4->klass->_1).typeHierarchy
                [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] == TypeInfo__MVCubeModelBase)
            {
              this_01 = pMVar4;
            }
            pVVar2 = MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                               ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
            fStack5 = pVVar2->z;
            fVar6 = (float)uVar3;
            fVar7 = (float)(int)((ulonglong)uVar3 >> 0x20);
            newStartPos = (Vector3)CONCAT84(uVar8,fVar6);
            bVar9 = LinkObjectBase::LinkObjectBase_UpdatePositions
                              ((LinkObjectBase *)this_01,newStartPos,*pVVar2,(MethodInfo *)0x0);
            return bVar9;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}

