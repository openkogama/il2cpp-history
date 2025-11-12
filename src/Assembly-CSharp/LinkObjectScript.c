
/* Vector3 CalculateUnconnectedLinkPos(Vector3) */

Vector3 * Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_CalculateUnconnectedLinkPos
                    (Vector3 *__return_storage_ptr__,LinkObjectScript *this,Vector3 *connectedPos,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aRStack_1[0].m_Point.x = 0.0;
  aRStack_1[0].m_Point.y = 0.0;
  aRStack_1[0].m_Point.z = 0.0;
  aRStack_1[0].m_Normal.x = 0.0;
  aRStack_1[0].m_UV.x = 0.0;
  aRStack_1[0].m_UV.y = 0.0;
  aRStack_1[0].m_Normal.y = 0.0;
  aRStack_1[0].m_Normal.z = 0.0;
  aRStack_1[0].m_FaceID = 0;
  aRStack_1[0].m_Distance = 0.0;
  aRStack_1[0].m_Collider = 0;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar2 != (MainCameraManager *)0x0) {
    this_00 = (pMVar2->fields).mainCamera;
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar4)();
      return pVVar6;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)((PhysicsScene *)&VStack_3);
    if (this_00 != (Camera *)0x0) {
      PStackX_8.m_index = (int32_t)VStack_3.x;
      PStackX_8.m_version = (int32_t)VStack_3.y;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_7.x = 0.0;
      VStack_7.y = 0.0;
      VStack_7.z = 0.0;
      fStack_8 = 0.0;
      fStack_9 = 0.0;
      fStack_10 = 0.0;
      pvVar11 = (this_00->fields)._._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pVVar6 = (Vector3 *)(*pcVar4)();
        return pVVar6;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        pVVar6 = (Vector3 *)(*pcVar4)();
        return pVVar6;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar11,&PStackX_8,2,(PhysicsScene *)&VStack_7);
      if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Physics);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
        FUN_?();
      }
      PStackX_8.m_index = 0;
      PStackX_8.m_version = 1;
      VStack_12.y = fStack_9;
      VStack_12.x = fStack_8;
      VStack_12.z = fStack_10;
      VStack_3.x = VStack_7.x;
      VStack_3.y = VStack_7.y;
      VStack_3.z = VStack_7.z;
      bVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::PhysicsScene::PhysicsScene_Raycast_1
                        (&PStackX_8,&VStack_3,&VStack_12,aRStack_1,_UNK_?,-5,
                         QueryTriggerInteraction__Enum_UseGlobal,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        __return_storage_ptr__->x = aRStack_1[0].m_Point.x;
        __return_storage_ptr__->y = aRStack_1[0].m_Point.y;
        __return_storage_ptr__->z = aRStack_1[0].m_Point.z;
        return __return_storage_ptr__;
      }
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar14 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pvVar11 = (pTVar14->fields)._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pVVar6 = (Vector3 *)(*pcVar4)();
          return pVVar6;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          pVVar6 = (Vector3 *)(*pcVar4)();
          return pVVar6;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar11);
        VStack_7.x = connectedPos->x;
        VStack_7.y = connectedPos->y;
        fVar15 = connectedPos->z - VStack_3.z;
        fVar16 = VStack_7.y - VStack_3.y;
        fVar17 = VStack_7.x - VStack_3.x;
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar14 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (&VStack_7,pTVar14,(MethodInfo *)0x0);
          VStack_12.x = pVVar6->x;
          VStack_12.y = pVVar6->y;
          fVar16 = (VStack_12.x * fVar17 + VStack_12.y * fVar16 + pVVar6->z * fVar15) - _UNK_?;
          fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                            (this_00,(MethodInfo *)0x0);
          if (fVar16 <= fVar17 + _UNK_?) {
            fVar16 = fVar17 + _UNK_?;
          }
          if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          VStack_3.x = 0.0;
          VStack_3.y = 0.0;
          VStack_3.z = 0.0;
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            pVVar6 = (Vector3 *)(*pcVar4)();
            return pVVar6;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)((PhysicsScene *)&VStack_3);
          VStack_12.x = 0.0;
          VStack_12.y = 0.0;
          VStack_12.z = 0.0;
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            pVVar6 = (Vector3 *)(*pcVar4)();
            return pVVar6;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(&VStack_12);
          VStack_7.y = VStack_12.y;
          VStack_7.x = VStack_3.x;
          VStack_7.z = fVar16;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_3.x = 0.0;
          VStack_3.y = 0.0;
          VStack_3.z = 0.0;
          pvVar11 = (this_00->fields)._._._.m_CachedPtr;
          if (pvVar11 != (void *)0x0) {
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar4 = (code *)swi(3);
              pVVar6 = (Vector3 *)(*pcVar4)();
              return pVVar6;
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar11,(PhysicsScene *)&VStack_7,2,(PhysicsScene *)&VStack_3)
            ;
            __return_storage_ptr__->x = VStack_3.x;
            __return_storage_ptr__->y = VStack_3.y;
            __return_storage_ptr__->z = VStack_3.z;
            return __return_storage_ptr__;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pVVar6 = (Vector3 *)(*pcVar4)();
          return pVVar6;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar4)();
  return pVVar6;
}


/* Void Initialize(Link) */

void Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_Initialize
               (LinkObjectScript *this,Link *link,MethodInfo *method)

{
  (this->fields)._.isObjectLink = 0;
  if (link == (Link *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields)._.linkID = (link->fields).id;
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = LinkObjectScript_UpdatePositions(this,link,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pLVar3 = (this->fields).lineRenderer;
    if (pLVar3 == (LineRenderer *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uStack_4._0_4_ = (this->fields)._.startPos.x;
    uStack_4._4_4_ = (this->fields)._.startPos.y;
    fStack_5 = (this->fields)._.startPos.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar6,0,&uStack_4);
    pLVar3 = (this->fields).lineRenderer;
    if (pLVar3 == (LineRenderer *)0x0) goto code_?;
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
    pvVar6 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar6,1,&uStack_8);
    pBVar10 = (this->fields).boxCollider;
    if ((pBVar10 == (BoxCollider *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0))
    goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar11,(MethodInfo *)0x0);
    fVar13 = _UNK_?;
    uStack_14._0_4_ = (this->fields)._.startPos.x;
    uStack_14._4_4_ = (this->fields)._.startPos.y;
    uVar15 = (this->fields)._.endPos.x;
    uVar16 = (this->fields)._.endPos.y;
    fVar17 = ((this->fields)._.endPos.z - (this->fields)._.startPos.z) * _UNK_? +
             (this->fields)._.startPos.z;
    if (pTVar12 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
    pvVar6 = (pTVar12->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar6);
    pBVar10 = (this->fields).boxCollider;
    if ((pBVar10 == (BoxCollider *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0))
    goto code_?;
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
      uStack_4 = CONCAT44(((float)uVar20 - (float)uVar22) / fVar23,
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
      uStack_4._0_4_ = (pVVar24->zeroVector).x;
      uStack_4._4_4_ = (pVVar24->zeroVector).y;
      fVar17 = (pVVar24->zeroVector).z;
    }
    uVar25 = uStack_4._4_4_;
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
    uStack_4 = CONCAT44(uVar25,(undefined4)uStack_4);
    CStack_26.r = 0.0;
    CStack_26.g = 0.0;
    CStack_26.b = 0.0;
    CStack_26.a = 0.0;
    pcVar1 = pcRam_?;
    fStack_5 = fVar17;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(&uStack_4);
    if (pTVar12 == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    aCStack_27[0].r = CStack_26.r;
    aCStack_27[0].g = CStack_26.g;
    aCStack_27[0].b = CStack_26.b;
    aCStack_27[0].a = CStack_26.a;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pTVar12->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar6);
    uVar28 = (this->fields)._.endPos.x;
    uVar29 = (this->fields)._.endPos.y;
    uStack_14._0_4_ = (this->fields)._.startPos.x;
    uStack_14._4_4_ = (this->fields)._.startPos.y;
    fStack_5 = (this->fields)._.endPos.z - (this->fields)._.startPos.z;
    uStack_4 = CONCAT44((float)uVar29 - (float)uStack_14._4_4_,
                         (float)uVar28 - (float)(undefined4)uStack_14);
    fVar23 = (float)FUN_?(&uStack_4);
    fVar17 = _UNK_?;
    fVar23 = fVar23 - fVar13;
    if (fVar23 <= _UNK_?) {
      fVar23 = _UNK_?;
    }
    pBVar10 = (this->fields).boxCollider;
    if ((pBVar10 == (BoxCollider *)0x0) ||
       (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pBVar10,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
    {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
    pvVar6 = (pTVar12->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar6);
    pLVar3 = (this->fields).lineRenderer;
    if (pLVar3 == (LineRenderer *)0x0) goto code_?;
    pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pLVar3,(MethodInfo *)0x0);
    uVar31 = (this->fields)._.endPos.x;
    uVar32 = (this->fields)._.endPos.y;
    uStack_8._0_4_ = (this->fields)._.startPos.x;
    uStack_8._4_4_ = (this->fields)._.startPos.y;
    fStack_5 = (this->fields)._.endPos.z - (this->fields)._.startPos.z;
    uStack_4 = CONCAT44((float)uVar32 - (float)uStack_8._4_4_,
                         (float)uVar31 - (float)(undefined4)uStack_8);
    fVar17 = (float)FUN_?(&uStack_4);
    VVar33.x = fVar17 * fVar13;
    if (pMVar30 == (Material *)0x0) goto code_?;
    VVar33.y = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
              (pMVar30,VVar33,(MethodInfo *)0x0);
  }
  pLVar3 = (this->fields).lineRenderer;
  if (pLVar3 != (LineRenderer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    cVar34 = (*pcRam_?)(pvVar6);
    if (cVar34 == '\0') {
      return;
    }
    if ((link != (Link *)0x0) &&
       (pLVar3 = (this->fields).lineRenderer, pLVar3 != (LineRenderer *)0x0)) {
      if ((link->fields).isSet == 0) {
        pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar3,(MethodInfo *)0x0);
        if (pMVar30 != (Material *)0x0) {
          aCStack_27[0].r = _UNK_?;
          aCStack_27[0].g = _UNK_?;
          aCStack_27[0].b = _UNK_?;
          aCStack_27[0].a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar30,aCStack_27,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar3,(MethodInfo *)0x0);
        if (pMVar30 != (Material *)0x0) {
          aCStack_27[0].r = _UNK_?;
          aCStack_27[0].g = _UNK_?;
          aCStack_27[0].b = _UNK_?;
          aCStack_27[0].a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar30,aCStack_27,(MethodInfo *)0x0);
          pBVar10 = (this->fields).boxCollider;
          if ((((pBVar10 != (BoxCollider *)0x0) &&
               (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pBVar10,(MethodInfo *)0x0),
               pGVar11 != (GameObject *)0x0)) &&
              (this_00 = (Renderer *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   (pGVar11,
                                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                   ), this_00 != (Renderer *)0x0)) &&
             (pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  (this_00,(MethodInfo *)0x0), pMVar30 != (Material *)0x0)) {
            VVar33 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                     Material_get_mainTextureOffset(pMVar30,(MethodInfo *)0x0);
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            fVar13 = (float)(*pcRam_?)();
            fVar13 = fVar13 * _UNK_?;
            pLVar3 = (this->fields).lineRenderer;
            fStackX_10 = VVar33.x;
            if (pLVar3 != (LineRenderer *)0x0) {
              pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pLVar3,(MethodInfo *)0x0);
              fStackX_14 = VVar33.y;
              if (pMVar30 != (Material *)0x0) {
                value.y = fStackX_14;
                value.x = fStackX_10 - fVar13;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                          (pMVar30,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateLinkVisual(Link) */

void Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_UpdateLinkVisual
               (LinkObjectScript *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = LinkObjectScript_UpdatePositions(this,link,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_4._0_4_ = (this->fields)._.startPos.x;
    uStack_4._4_4_ = (this->fields)._.startPos.y;
    fStack_5 = (this->fields)._.startPos.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pLVar2->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar6,0,&uStack_4);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
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
    pvVar6 = (pLVar2->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar6,1,&uStack_8);
    pBVar10 = (this->fields).boxCollider;
    if ((pBVar10 == (BoxCollider *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0))
    goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar11,(MethodInfo *)0x0);
    fVar13 = _UNK_?;
    uStack_14._0_4_ = (this->fields)._.startPos.x;
    uStack_14._4_4_ = (this->fields)._.startPos.y;
    uVar15 = (this->fields)._.endPos.x;
    uVar16 = (this->fields)._.endPos.y;
    fVar17 = ((this->fields)._.endPos.z - (this->fields)._.startPos.z) * _UNK_? +
             (this->fields)._.startPos.z;
    if (pTVar12 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
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
    pvVar6 = (pTVar12->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar6);
    pBVar10 = (this->fields).boxCollider;
    if ((pBVar10 == (BoxCollider *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0))
    goto code_?;
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
      uStack_4 = CONCAT44(((float)uVar20 - (float)uVar22) / fVar23,
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
      uStack_4._0_4_ = (pVVar24->zeroVector).x;
      uStack_4._4_4_ = (pVVar24->zeroVector).y;
      fVar17 = (pVVar24->zeroVector).z;
    }
    uVar25 = uStack_4._4_4_;
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
    uStack_4 = CONCAT44(uVar25,(undefined4)uStack_4);
    CStack_26.r = 0.0;
    CStack_26.g = 0.0;
    CStack_26.b = 0.0;
    CStack_26.a = 0.0;
    pcVar3 = pcRam_?;
    fStack_5 = fVar17;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(&uStack_4);
    if (pTVar12 == (Transform *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    aCStack_27[0].r = CStack_26.r;
    aCStack_27[0].g = CStack_26.g;
    aCStack_27[0].b = CStack_26.b;
    aCStack_27[0].a = CStack_26.a;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pTVar12->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar6);
    uVar28 = (this->fields)._.endPos.x;
    uVar29 = (this->fields)._.endPos.y;
    uStack_14._0_4_ = (this->fields)._.startPos.x;
    uStack_14._4_4_ = (this->fields)._.startPos.y;
    fStack_5 = (this->fields)._.endPos.z - (this->fields)._.startPos.z;
    uStack_4 = CONCAT44((float)uVar29 - (float)uStack_14._4_4_,
                         (float)uVar28 - (float)(undefined4)uStack_14);
    fVar23 = (float)FUN_?(&uStack_4);
    fVar17 = _UNK_?;
    fVar23 = fVar23 - fVar13;
    if (fVar23 <= _UNK_?) {
      fVar23 = _UNK_?;
    }
    pBVar10 = (this->fields).boxCollider;
    if ((pBVar10 == (BoxCollider *)0x0) ||
       (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pBVar10,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
    {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
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
    pvVar6 = (pTVar12->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar6);
    pLVar2 = (this->fields).lineRenderer;
    if (pLVar2 == (LineRenderer *)0x0) goto code_?;
    pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pLVar2,(MethodInfo *)0x0);
    uVar31 = (this->fields)._.endPos.x;
    uVar32 = (this->fields)._.endPos.y;
    uStack_8._0_4_ = (this->fields)._.startPos.x;
    uStack_8._4_4_ = (this->fields)._.startPos.y;
    fStack_5 = (this->fields)._.endPos.z - (this->fields)._.startPos.z;
    uStack_4 = CONCAT44((float)uVar32 - (float)uStack_8._4_4_,
                         (float)uVar31 - (float)(undefined4)uStack_8);
    fVar17 = (float)FUN_?(&uStack_4);
    VVar33.x = fVar17 * fVar13;
    if (pMVar30 == (Material *)0x0) goto code_?;
    VVar33.y = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
              (pMVar30,VVar33,(MethodInfo *)0x0);
  }
  pLVar2 = (this->fields).lineRenderer;
  if (pLVar2 != (LineRenderer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pLVar2->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    cVar34 = (*pcRam_?)(pvVar6);
    if (cVar34 == '\0') {
      return;
    }
    if ((link != (Link *)0x0) &&
       (pLVar2 = (this->fields).lineRenderer, pLVar2 != (LineRenderer *)0x0)) {
      if ((link->fields).isSet == 0) {
        pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar2,(MethodInfo *)0x0);
        if (pMVar30 != (Material *)0x0) {
          aCStack_27[0].r = _UNK_?;
          aCStack_27[0].g = _UNK_?;
          aCStack_27[0].b = _UNK_?;
          aCStack_27[0].a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar30,aCStack_27,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar2,(MethodInfo *)0x0);
        if (pMVar30 != (Material *)0x0) {
          aCStack_27[0].r = _UNK_?;
          aCStack_27[0].g = _UNK_?;
          aCStack_27[0].b = _UNK_?;
          aCStack_27[0].a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar30,aCStack_27,(MethodInfo *)0x0);
          pBVar10 = (this->fields).boxCollider;
          if ((((pBVar10 != (BoxCollider *)0x0) &&
               (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pBVar10,(MethodInfo *)0x0),
               pGVar11 != (GameObject *)0x0)) &&
              (this_00 = (Renderer *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   (pGVar11,
                                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                   ), this_00 != (Renderer *)0x0)) &&
             (pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  (this_00,(MethodInfo *)0x0), pMVar30 != (Material *)0x0)) {
            VVar33 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                     Material_get_mainTextureOffset(pMVar30,(MethodInfo *)0x0);
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            fVar13 = (float)(*pcRam_?)();
            fVar13 = fVar13 * _UNK_?;
            pLVar2 = (this->fields).lineRenderer;
            fStackX_10 = VVar33.x;
            if (pLVar2 != (LineRenderer *)0x0) {
              pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pLVar2,(MethodInfo *)0x0);
              fStackX_14 = VVar33.y;
              if (pMVar30 != (Material *)0x0) {
                value.y = fStackX_14;
                value.x = fStackX_10 - fVar13;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                          (pMVar30,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean UpdatePositions(Link) */

bool Assembly-CSharp.dll::LinkObjectScript::LinkObjectScript_UpdatePositions
               (LinkObjectScript *this,Link *link,MethodInfo *method)

{
  if (link == (Link *)0x0) goto code_?;
  if ((link->fields).outputWOID < 1) {
    if ((link->fields).inputWOID < 1) {
      return 0;
    }
    if (0 < (link->fields).outputWOID) goto code_?;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,(link->fields).inputWOID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    pVVar3 = MVWorldObjectClient::MVWorldObjectClient_GetInputConnectorPos
                       (&VStack_4,pMVar2,(MethodInfo *)0x0);
    VStack_5.x = pVVar3->x;
    VStack_5.y = pVVar3->y;
    VStack_5.z = pVVar3->z;
    pVVar3 = LinkObjectScript_CalculateUnconnectedLinkPos
                       (&VStack_4,this,&VStack_5,(MethodInfo *)0x0);
  }
  else {
code_?:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,(link->fields).outputWOID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    pVVar3 = MVWorldObjectClient::MVWorldObjectClient_GetOutputConnectorPos
                       (&VStack_4,pMVar2,(MethodInfo *)0x0);
  }
  uVar6._0_4_ = pVVar3->x;
  uVar6._4_4_ = pVVar3->y;
  fVar7 = pVVar3->z;
  if ((link->fields).inputWOID < 1) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,(link->fields).outputWOID,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        pVVar3 = MVWorldObjectClient::MVWorldObjectClient_GetOutputConnectorPos
                           (&VStack_4,pMVar2,(MethodInfo *)0x0);
        VStack_5.x = pVVar3->x;
        VStack_5.y = pVVar3->y;
        VStack_5.z = pVVar3->z;
        pVVar3 = LinkObjectScript_CalculateUnconnectedLinkPos
                           (&VStack_4,this,&VStack_5,(MethodInfo *)0x0);
code_?:
        VStack_5.z = pVVar3->z;
        VStack_5.x = pVVar3->x;
        VStack_5.y = pVVar3->y;
        VStack_4._0_8_ = uVar6;
        VStack_4.z = fVar7;
        bVar8 = LinkObjectBase::LinkObjectBase_UpdatePositions
                          ((LinkObjectBase *)this,&VStack_4,&VStack_5,(MethodInfo *)0x0);
        return bVar8;
      }
    }
  }
  else {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,(link->fields).inputWOID,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        pVVar3 = MVWorldObjectClient::MVWorldObjectClient_GetInputConnectorPos
                           (&VStack_4,pMVar2,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}

