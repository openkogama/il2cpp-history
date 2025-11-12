
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::
     MVCustomGunBlueprint+<MuzzleBoundCheckRoutine>d__17::
     MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17_MoveNext
               (MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar2 = _UNK_?;
    fVar3 = _UNK_?;
    uVar4 = _UNK_?;
    (this->fields)._max_5__2.x = (float)_UNK_?;
    uVar5 = _UNK_?;
    (this->fields)._max_5__2.y = (float)uVar4;
    (this->fields)._max_5__2.z = fVar3;
    fVar3 = _UNK_?;
    (this->fields)._min_5__3.x = (float)uVar5;
    (this->fields)._min_5__3.y = (float)uVar2;
    (this->fields)._min_5__3.z = fVar3;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if (((this_00 == (MVCustomGunBlueprint *)0x0) ||
      (pGVar6 = (this_00->fields).muzzlePoint, pGVar6 == (GameObject *)0x0)) ||
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_8 = 0;
  fStack_9 = 0.0;
  pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(pvVar10);
  fVar3 = _UNK_?;
  pVVar14 = &(this->fields)._max_5__2;
  if (pVVar14->x <= (float)uStack_8 && (float)uStack_8 != pVVar14->x) {
    pGVar6 = (this_00->fields).muzzlePoint;
    fVar15 = (this->fields)._max_5__2.x;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    fStack_9 = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10);
    pGVar6 = (this_00->fields).muzzlePoint;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_16[0].x = 0.0;
    aVStack_16[0].y = 0.0;
    aVStack_16[0].z = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10,aVStack_16);
    aVStack_16[0].y = uStack_8._4_4_;
    aVStack_16[0].x = fVar15 - fVar3;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
              (this_00,aVStack_16,(MethodInfo *)0x0);
  }
  pGVar6 = (this_00->fields).muzzlePoint;
  if ((pGVar6 == (GameObject *)0x0) ||
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_16[0].x = 0.0;
  aVStack_16[0].y = 0.0;
  aVStack_16[0].z = 0.0;
  pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(pvVar10);
  fVar15 = (this->fields)._min_5__3.x;
  if (aVStack_16[0].x < fVar15) {
    pGVar6 = (this_00->fields).muzzlePoint;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_16[0].x = 0.0;
    aVStack_16[0].y = 0.0;
    aVStack_16[0].z = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10);
    pGVar6 = (this_00->fields).muzzlePoint;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    fStack_9 = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10,&uStack_8);
    aVStack_16[0].z = fStack_9;
    aVStack_16[0].x = fVar15 + fVar3;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
              (this_00,aVStack_16,(MethodInfo *)0x0);
  }
  pGVar6 = (this_00->fields).muzzlePoint;
  if ((pGVar6 == (GameObject *)0x0) ||
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_16[0].x = 0.0;
  aVStack_16[0].y = 0.0;
  aVStack_16[0].z = 0.0;
  pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(pvVar10);
  pfVar17 = &(this->fields)._max_5__2.y;
  if (*pfVar17 <= aVStack_16[0].y && aVStack_16[0].y != *pfVar17) {
    pGVar6 = (this_00->fields).muzzlePoint;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    fStack_9 = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10);
    pGVar6 = (this_00->fields).muzzlePoint;
    fVar15 = (this->fields)._max_5__2.y;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_16[0].x = 0.0;
    aVStack_16[0].y = 0.0;
    aVStack_16[0].z = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10,aVStack_16);
    aVStack_16[0].y = fVar15 - fVar3;
    aVStack_16[0].x = (float)uStack_8;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
              (this_00,aVStack_16,(MethodInfo *)0x0);
  }
  pGVar6 = (this_00->fields).muzzlePoint;
  if ((pGVar6 == (GameObject *)0x0) ||
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_16[0].x = 0.0;
  aVStack_16[0].y = 0.0;
  aVStack_16[0].z = 0.0;
  pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(pvVar10);
  if (aVStack_16[0].y < (this->fields)._min_5__3.y) {
    pGVar6 = (this_00->fields).muzzlePoint;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    fStack_9 = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10);
    pGVar6 = (this_00->fields).muzzlePoint;
    fVar15 = (this->fields)._min_5__3.y;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_16[0].x = 0.0;
    aVStack_16[0].y = 0.0;
    aVStack_16[0].z = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10,aVStack_16);
    aVStack_16[0].y = fVar15 + fVar3;
    aVStack_16[0].x = (float)uStack_8;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
              (this_00,aVStack_16,(MethodInfo *)0x0);
  }
  pGVar6 = (this_00->fields).muzzlePoint;
  if ((pGVar6 == (GameObject *)0x0) ||
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_16[0].x = 0.0;
  aVStack_16[0].y = 0.0;
  aVStack_16[0].z = 0.0;
  pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(pvVar10);
  pfVar17 = &(this->fields)._max_5__2.z;
  if (*pfVar17 <= aVStack_16[0].z && aVStack_16[0].z != *pfVar17) {
    pGVar6 = (this_00->fields).muzzlePoint;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    fStack_9 = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10);
    pGVar6 = (this_00->fields).muzzlePoint;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_16[0].x = 0.0;
    aVStack_16[0].y = 0.0;
    aVStack_16[0].z = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10,aVStack_16);
    aVStack_16[0].z = (this->fields)._max_5__2.z - fVar3;
    aVStack_16[0].x = (float)uStack_8;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
              (this_00,aVStack_16,(MethodInfo *)0x0);
  }
  pGVar6 = (this_00->fields).muzzlePoint;
  if ((pGVar6 != (GameObject *)0x0) &&
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_16[0].x = 0.0;
    aVStack_16[0].y = 0.0;
    aVStack_16[0].z = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10);
    if ((this->fields)._min_5__3.z <= aVStack_16[0].z) {
code_?:
      bVar18 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar18) {
        uVar19 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
        do {
          uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
          puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
          LOCK();
          bVar18 = uVar21 == *puVar22;
          if (bVar18) {
            *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
          }
          UNLOCK();
        } while (!bVar18);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
    pGVar6 = (this_00->fields).muzzlePoint;
    if ((pGVar6 != (GameObject *)0x0) &&
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_8 = 0;
      fStack_9 = 0.0;
      pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pvVar10);
      pGVar6 = (this_00->fields).muzzlePoint;
      if ((pGVar6 != (GameObject *)0x0) &&
         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        aVStack_16[0].x = 0.0;
        aVStack_16[0].y = 0.0;
        aVStack_16[0].z = 0.0;
        pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10,aVStack_16);
        aVStack_16[0].z = (this->fields)._min_5__3.z + fVar3;
        aVStack_16[0].x = (float)uStack_8;
        MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
                  (this_00,aVStack_16,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::
     MVCustomGunBlueprint+<MuzzleBoundCheckRoutine>d__17::
     MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17_System_Collections_IEnumerator_Reset
               (MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

