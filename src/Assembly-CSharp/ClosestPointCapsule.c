
/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,ClosestPointCapsule *this,Vector3 *from,
                    MethodInfo *method)

{
  pVVar1 = ClosestPointCapsule_get_Position(&VStack_2,this,(MethodInfo *)0x0);
  pCVar3 = (this->fields).capsule;
  uStack_4._0_4_ = pVVar1->x;
  uStack_4._4_4_ = pVVar1->y;
  fStack_5 = pVVar1->z;
  if (pCVar3 != (CapsuleCollider *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_6 = 0;
    uStack_7 = 0;
    pvVar8 = (pCVar3->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar3,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      pVVar1 = (Vector3 *)(*pcVar9)();
      return pVVar1;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      pVVar1 = (Vector3 *)(*pcVar9)();
      return pVVar1;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8,&uStack_6);
    pVVar1 = ClosestPointCapsule_get_Scale(aVStack_11,this,(MethodInfo *)0x0);
    VStack_2.x = pVVar1->x;
    VStack_2.y = pVVar1->y;
    VStack_2.z = pVVar1->z;
    fVar12 = uStack_6._4_4_ * VStack_2.y + uStack_4._4_4_;
    pCVar3 = (this->fields).capsule;
    if (pCVar3 != (CapsuleCollider *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (pCVar3->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar3,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        pVVar1 = (Vector3 *)(*pcVar9)();
        return pVVar1;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        pVVar1 = (Vector3 *)(*pcVar9)();
        return pVVar1;
      }
      pcRam_? = pcVar9;
      fVar13 = (float)(*pcRam_?)(pvVar8);
      pCVar3 = (this->fields).capsule;
      if (pCVar3 != (CapsuleCollider *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (pCVar3->fields)._._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar3,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          pVVar1 = (Vector3 *)(*pcVar9)();
          return pVVar1;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          pVVar1 = (Vector3 *)(*pcVar9)();
          return pVVar1;
        }
        pcRam_? = pcVar9;
        fVar14 = (float)(*pcRam_?)(pvVar8);
        pVVar1 = ClosestPointCapsule_get_Scale(aVStack_11,this,(MethodInfo *)0x0);
        fVar13 = (fVar13 * _UNK_? - fVar14) * pVVar1->y;
        fVar14 = fVar12 - fVar13;
        fVar12 = fVar12 + fVar13;
        fVar13 = from->y;
        if ((fVar14 <= fVar13) && (fVar14 = fVar13, fVar12 < fVar13)) {
          fVar14 = fVar12;
        }
        pVVar1 = ClosestPointCapsule_get_Position(aVStack_11,this,(MethodInfo *)0x0);
        VStack_2.x = pVVar1->x;
        VStack_2.y = pVVar1->y;
        fVar12 = pVVar1->z;
        fVar13 = from->z - fVar12;
        uVar15 = from->x;
        uVar16 = from->y;
        fVar17 = (float)uVar15 - VStack_2.x;
        uStack_4 = CONCAT44((float)uVar16 - fVar14,fVar17);
        fStack_5 = fVar13;
        fVar18 = (float)FUN_?(&uStack_4);
        if (_UNK_? < fVar18) {
          fVar13 = fVar13 / fVar18;
          uStack_6 = CONCAT44(((float)uVar16 - fVar14) / fVar18,fVar17 / fVar18);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_6._0_4_ = (pVVar19->zeroVector).x;
          uStack_6._4_4_ = (pVVar19->zeroVector).y;
          fVar13 = (pVVar19->zeroVector).z;
        }
        pCVar3 = (this->fields).capsule;
        if (pCVar3 != (CapsuleCollider *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (pCVar3->fields)._._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar3,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            pVVar1 = (Vector3 *)(*pcVar9)();
            return pVVar1;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            pVVar1 = (Vector3 *)(*pcVar9)();
            return pVVar1;
          }
          pcRam_? = pcVar9;
          fVar17 = (float)(*pcRam_?)(pvVar8);
          pVVar1 = ClosestPointCapsule_get_Scale(aVStack_11,this,(MethodInfo *)0x0);
          fVar18 = pVVar1->y;
          __return_storage_ptr__->x = (float)uStack_6 * fVar17 * fVar18 + VStack_2.x;
          __return_storage_ptr__->y = uStack_6._4_4_ * fVar17 * fVar18 + fVar14;
          __return_storage_ptr__->z = fVar13 * fVar17 * fVar18 + fVar12;
          return __return_storage_ptr__;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_OnValidate
               (ClosestPointCapsule *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CapsuleCollider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).capsule;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 != (CapsuleCollider *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  pCVar1 = (CapsuleCollider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CapsuleCollider>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).capsule = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).capsule >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* ClosestPointCapsule(CapsuleCollider) */

void Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule__ctor
               (ClosestPointCapsule *this,CapsuleCollider *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = iRam_? != 0;
  (this->fields).capsule = c;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).capsule >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_get_Position
                    (Vector3 *__return_storage_ptr__,ClosestPointCapsule *this,MethodInfo *method)

{
  this_00 = (this->fields).capsule;
  if (((this_00 == (CapsuleCollider *)0x0) ||
      (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
     || (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* Vector3 get_Scale() */

Vector3 * Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_get_Scale
                    (Vector3 *__return_storage_ptr__,ClosestPointCapsule *this,MethodInfo *method)

{
  this_00 = (this->fields).capsule;
  if (((this_00 == (CapsuleCollider *)0x0) ||
      (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
     || (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* Transform get_Transform() */

Transform *
Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_get_Transform
          (ClosestPointCapsule *this,MethodInfo *method)

{
  this_00 = (this->fields).capsule;
  if ((this_00 == (CapsuleCollider *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pTVar2 = (Transform *)(*pcVar1)();
    return pTVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (GameObject *)0x0) {
    pvVar3 = (obj->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      pTVar2 = (Transform *)(*pcVar1)();
      return pTVar2;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      pTVar2 = (Transform *)(*pcVar1)();
      return pTVar2;
    }
    pcRam_? = pcVar1;
    plVar5 = (longlong *)(*pcRam_?)(pvVar3);
    pMVar6 = 
    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
    ;
    if ((
        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
    }
    if (plVar5 != (longlong *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (((ulonglong)plVar5 & 1) == 0) {
        lVar7 = *plVar5;
      }
      else {
        lVar7 = FUN_?(plVar5);
      }
      pvVar3 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      if (lVar7 != 0) {
        pTVar2 = (Transform *)FUN_?(lVar7,pvVar3,in_R8,in_R9,unaff_RDI);
        if (pTVar2 != (Transform *)0x0) {
          return pTVar2;
        }
        FUN_?(lVar7,pvVar3);
        pcVar1 = (code *)swi(3);
        pTVar2 = (Transform *)(*pcVar1)();
        return pTVar2;
      }
    }
    return (Transform *)0x0;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pTVar2 = (Transform *)(*pcVar1)();
  return pTVar2;
}

