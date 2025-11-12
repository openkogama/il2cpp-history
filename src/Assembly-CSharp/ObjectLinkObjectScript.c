
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
        CStack_1.r = _UNK_?;
        CStack_1.g = _UNK_?;
        CStack_1.b = _UNK_?;
        CStack_1.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (this_01,&CStack_1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateLinkVisual(ObjectLink) */

void Assembly-CSharp.dll::ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
               (ObjectLinkObjectScript *this,ObjectLink *link,MethodInfo *method)

{
  bVar1 = ObjectLinkObjectScript_UpdatePositions(this,link,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pLVar2 = (this->fields).lineRenderer;
  if (pLVar2 != (LineRenderer *)0x0) {
    uStack_3._0_4_ = (this->fields)._.startPos.x;
    uStack_3._4_4_ = (this->fields)._.startPos.y;
    fStack_4 = (this->fields)._.startPos.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pLVar2->fields)._._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,0,&uStack_3);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 != (LineRenderer *)0x0) {
      uStack_8._0_4_ = (this->fields)._.endPos.x;
      uStack_8._4_4_ = (this->fields)._.endPos.y;
      fStack_9 = (this->fields)._.endPos.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pLVar2->fields)._._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,1,&uStack_8);
      pBVar10 = (this->fields).boxCollider;
      if ((pBVar10 != (BoxCollider *)0x0) &&
         (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar10,(MethodInfo *)0x0), pGVar11 != (GameObject *)0x0
         )) {
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar11,(MethodInfo *)0x0);
        fVar13 = _UNK_?;
        uStack_14._0_4_ = (this->fields)._.startPos.x;
        uStack_14._4_4_ = (this->fields)._.startPos.y;
        uVar15 = (this->fields)._.endPos.x;
        uVar16 = (this->fields)._.endPos.y;
        fVar17 = ((this->fields)._.endPos.z - (this->fields)._.startPos.z) * _UNK_? +
                 (this->fields)._.startPos.z;
        if (pTVar12 != (Transform *)0x0) {
          uStack_14 = CONCAT44(((float)uVar16 - (float)uStack_14._4_4_) * _UNK_? +
                               (float)uStack_14._4_4_,
                               ((float)uVar15 - (float)(undefined4)uStack_14) * _UNK_? +
                               (float)(undefined4)uStack_14);
          fStack_18 = fVar17;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (pTVar12->fields)._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pvVar5);
          pBVar10 = (this->fields).boxCollider;
          if ((pBVar10 != (BoxCollider *)0x0) &&
             (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pBVar10,(MethodInfo *)0x0),
             pGVar11 != (GameObject *)0x0)) {
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar11,(MethodInfo *)0x0);
            uVar19 = (this->fields)._.endPos.x;
            uVar20 = (this->fields)._.endPos.y;
            uVar21 = (this->fields)._.startPos.x;
            uVar22 = (this->fields)._.startPos.y;
            fVar17 = (this->fields)._.endPos.z - (this->fields)._.startPos.z;
            uStack_8 = CONCAT44((float)uVar20 - (float)uVar22,(float)uVar19 - (float)uVar21);
            fStack_9 = fVar17;
            fVar23 = (float)FUN_?(&uStack_8);
            if (_UNK_? < fVar23) {
              fVar17 = fVar17 / fVar23;
              uStack_3 = CONCAT44(((float)uVar20 - (float)uVar22) / fVar23,
                                   ((float)uVar19 - (float)uVar21) / fVar23);
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar24 = TypeInfo__UnityEngine__Vector3->static_fields;
              uStack_3._0_4_ = (pVVar24->zeroVector).x;
              uStack_3._4_4_ = (pVVar24->zeroVector).y;
              fVar17 = (pVVar24->zeroVector).z;
            }
            uVar25 = uStack_3._4_4_;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar24 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_8._0_4_ = (pVVar24->upVector).x;
            uStack_8._4_4_ = (pVVar24->upVector).y;
            fStack_9 = (pVVar24->upVector).z;
            uStack_3 = CONCAT44(uVar25,(undefined4)uStack_3);
            uStack_26 = 0;
            uStack_27 = 0;
            pcVar6 = pcRam_?;
            fStack_4 = fVar17;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(&uStack_3);
            if (pTVar12 == (Transform *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uStack_28 = (undefined4)uStack_26;
            uStack_29 = uStack_26._4_4_;
            uStack_30 = (undefined4)uStack_27;
            uStack_31 = uStack_27._4_4_;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar5 = (pTVar12->fields)._._.m_CachedPtr;
            if (pvVar5 != (void *)0x0) {
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pvVar5);
              uVar32 = (this->fields)._.endPos.x;
              uVar33 = (this->fields)._.endPos.y;
              uStack_14._0_4_ = (this->fields)._.startPos.x;
              uStack_14._4_4_ = (this->fields)._.startPos.y;
              fStack_4 = (this->fields)._.endPos.z - (this->fields)._.startPos.z;
              uStack_3 = CONCAT44((float)uVar33 - (float)uStack_14._4_4_,
                                   (float)uVar32 - (float)(undefined4)uStack_14);
              fVar23 = (float)FUN_?(&uStack_3);
              fVar17 = _UNK_?;
              fVar23 = fVar23 - fVar13;
              if (fVar23 <= _UNK_?) {
                fVar23 = _UNK_?;
              }
              pBVar10 = (this->fields).boxCollider;
              if ((pBVar10 != (BoxCollider *)0x0) &&
                 (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pBVar10,(MethodInfo *)0x0),
                 pTVar12 != (Transform *)0x0)) {
                uStack_14 = CONCAT44(fVar17,fVar17);
                fStack_18 = fVar23;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar5 = (pTVar12->fields)._._.m_CachedPtr;
                if (pvVar5 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcVar6 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar7 = func_?(&UNK_?);
                  FUN_?(uVar7,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcRam_? = pcVar6;
                (*pcRam_?)(pvVar5);
                pLVar2 = (this->fields).lineRenderer;
                if (pLVar2 != (LineRenderer *)0x0) {
                  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                      ((Renderer *)pLVar2,(MethodInfo *)0x0);
                  uVar34 = (this->fields)._.startPos.x;
                  uVar35 = (this->fields)._.startPos.y;
                  uVar36 = (this->fields)._.endPos.x;
                  fStack_4 = (this->fields)._.endPos.z - (this->fields)._.startPos.z;
                  uStack_3 = CONCAT44((this->fields)._.endPos.y - (float)uVar35,
                                       (float)uVar36 - (float)uVar34);
                  fVar17 = (float)FUN_?(&uStack_3);
                  if (this_00 != (Material *)0x0) {
                    value.y = _UNK_?;
                    value.x = fVar17 * fVar13;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
                              (this_00,value,(MethodInfo *)0x0);
                    return;
                  }
                  FUN_?();
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean UpdatePositions(ObjectLink) */

bool Assembly-CSharp.dll::ObjectLinkObjectScript::ObjectLinkObjectScript_UpdatePositions
               (ObjectLinkObjectScript *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((link != (ObjectLink *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) &&
     (this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar1,(link->fields).objectConnectorWOID,(MethodInfo *)0x0),
     this_00 != (MVWorldObjectClient *)0x0)) {
    pVVar2 = MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                       (&VStack_3,this_00,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar2->x;
    uVar4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar6 = (MVCubeModelBase *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar1,(link->fields).objectWOID,(MethodInfo *)0x0),
       pMVar6 != (MVCubeModelBase *)0x0)) {
      bVar7 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if ((bVar7 <= (pMVar6->klass->_1).naturalAligment) &&
         (ppIVar8 = (pMVar6->klass->_1).typeHierarchy,
         (MVCubeModelBase__Class *)ppIVar8[(ulonglong)bVar7 - 1] == TypeInfo__MVCubeModelBase)) {
        this_01 = (MVCubeModelBase *)0x0;
        if ((MVCubeModelBase__Class *)
            ppIVar8[(ulonglong)(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] ==
            TypeInfo__MVCubeModelBase) {
          this_01 = pMVar6;
        }
        obj = (this_01->fields)._.transform;
        pBVar9 = MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_10,this_01,(MethodInfo *)0x0);
        uStack_11._0_4_ = (pBVar9->m_Extents).y;
        uStack_11._4_4_ = (pBVar9->m_Extents).z;
        VStack_3.x = (pBVar9->m_Center).x;
        VStack_3.y = (pBVar9->m_Center).y;
        VStack_3.z = (float)*(undefined8 *)&(pBVar9->m_Center).z;
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_12.x = 0.0;
          VStack_12.y = 0.0;
          VStack_12.z = 0.0;
          pvVar13 = (obj->fields)._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            bVar15 = (*pcVar14)();
            return bVar15;
          }
          pcVar14 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar14 = (code *)swi(3);
            bVar15 = (*pcVar14)();
            return bVar15;
          }
          pcRam_? = pcVar14;
          (*pcRam_?)(pvVar13,&VStack_3,&VStack_12);
          VStack_3.x = VStack_12.x;
          VStack_3.y = VStack_12.y;
          VStack_3.z = VStack_12.z;
          VStack_12._0_8_ = uVar4;
          VStack_12.z = fVar5;
          bVar15 = LinkObjectBase::LinkObjectBase_UpdatePositions
                            ((LinkObjectBase *)this,&VStack_12,&VStack_3,(MethodInfo *)0x0);
          return bVar15;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}

