
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint+<MuzzleBoundCheckRoutine>d__17::MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17_MoveNext(MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17 *this,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    (this->fields)._max_5__2.x = 8.0;
    (this->fields)._max_5__2.y = 11.0;
    (this->fields)._max_5__2.z = 30.0;
    (this->fields)._min_5__3.x = -9.0;
    (this->fields)._min_5__3.y = -5.0;
    (this->fields)._min_5__3.z = -10.0;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if (((this_00 == (MVCustomGunBlueprint *)0x0) || (pGVar2 = (this_00->fields).muzzlePoint, pGVar2 == (GameObject *)0x0)) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_4 = 0;
  fStack_5 = 0.0;
  pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6);
  pVVar10 = &(this->fields)._max_5__2;
  if (pVVar10->x <= (float)uStack_4 && (float)uStack_4 != pVVar10->x) {
    pGVar2 = (this_00->fields).muzzlePoint;
    fVar11 = (this->fields)._max_5__2.x;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pGVar2 = (this_00->fields).muzzlePoint;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_12[0].x = 0.0;
    aVStack_12[0].y = 0.0;
    aVStack_12[0].z = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,aVStack_12);
    aVStack_12[0].y = uStack_4._4_4_;
    aVStack_12[0].x = fVar11 - 0.01;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition(this_00,aVStack_12,(MethodInfo *)0x0);
  }
  pGVar2 = (this_00->fields).muzzlePoint;
  if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_12[0].x = 0.0;
  aVStack_12[0].y = 0.0;
  aVStack_12[0].z = 0.0;
  pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6);
  fVar11 = (this->fields)._min_5__3.x;
  if (aVStack_12[0].x < fVar11) {
    pGVar2 = (this_00->fields).muzzlePoint;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_12[0].x = 0.0;
    aVStack_12[0].y = 0.0;
    aVStack_12[0].z = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pGVar2 = (this_00->fields).muzzlePoint;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,&uStack_4);
    aVStack_12[0].z = fStack_5;
    aVStack_12[0].x = fVar11 + 0.01;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition(this_00,aVStack_12,(MethodInfo *)0x0);
  }
  pGVar2 = (this_00->fields).muzzlePoint;
  if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_12[0].x = 0.0;
  aVStack_12[0].y = 0.0;
  aVStack_12[0].z = 0.0;
  pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6);
  pfVar13 = &(this->fields)._max_5__2.y;
  if (*pfVar13 <= aVStack_12[0].y && aVStack_12[0].y != *pfVar13) {
    pGVar2 = (this_00->fields).muzzlePoint;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pGVar2 = (this_00->fields).muzzlePoint;
    fVar11 = (this->fields)._max_5__2.y;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_12[0].x = 0.0;
    aVStack_12[0].y = 0.0;
    aVStack_12[0].z = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,aVStack_12);
    aVStack_12[0].y = fVar11 - 0.01;
    aVStack_12[0].x = (float)uStack_4;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition(this_00,aVStack_12,(MethodInfo *)0x0);
  }
  pGVar2 = (this_00->fields).muzzlePoint;
  if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_12[0].x = 0.0;
  aVStack_12[0].y = 0.0;
  aVStack_12[0].z = 0.0;
  pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6);
  if (aVStack_12[0].y < (this->fields)._min_5__3.y) {
    pGVar2 = (this_00->fields).muzzlePoint;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pGVar2 = (this_00->fields).muzzlePoint;
    fVar11 = (this->fields)._min_5__3.y;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_12[0].x = 0.0;
    aVStack_12[0].y = 0.0;
    aVStack_12[0].z = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,aVStack_12);
    aVStack_12[0].y = fVar11 + 0.01;
    aVStack_12[0].x = (float)uStack_4;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition(this_00,aVStack_12,(MethodInfo *)0x0);
  }
  pGVar2 = (this_00->fields).muzzlePoint;
  if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_12[0].x = 0.0;
  aVStack_12[0].y = 0.0;
  aVStack_12[0].z = 0.0;
  pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6);
  pfVar13 = &(this->fields)._max_5__2.z;
  if (*pfVar13 <= aVStack_12[0].z && aVStack_12[0].z != *pfVar13) {
    pGVar2 = (this_00->fields).muzzlePoint;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pGVar2 = (this_00->fields).muzzlePoint;
    if ((pGVar2 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_12[0].x = 0.0;
    aVStack_12[0].y = 0.0;
    aVStack_12[0].z = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,aVStack_12);
    aVStack_12[0].z = (this->fields)._max_5__2.z - 0.01;
    aVStack_12[0].x = (float)uStack_4;
    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition(this_00,aVStack_12,(MethodInfo *)0x0);
  }
  pGVar2 = (this_00->fields).muzzlePoint;
  if ((pGVar2 != (GameObject *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_12[0].x = 0.0;
    aVStack_12[0].y = 0.0;
    aVStack_12[0].z = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    if ((this->fields)._min_5__3.z <= aVStack_12[0].z) {
code_?:
      bVar14 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar14) {
        uVar15 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
        do {
          uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
          puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar17 == *puVar18;
          if (bVar14) {
            *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
    pGVar2 = (this_00->fields).muzzlePoint;
    if ((pGVar2 != (GameObject *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_4 = 0;
      fStack_5 = 0.0;
      pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6);
      pGVar2 = (this_00->fields).muzzlePoint;
      if ((pGVar2 != (GameObject *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        aVStack_12[0].x = 0.0;
        aVStack_12[0].y = 0.0;
        aVStack_12[0].z = 0.0;
        pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6,aVStack_12);
        aVStack_12[0].z = (this->fields)._min_5__3.z + 0.01;
        aVStack_12[0].x = (float)uStack_4;
        MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition(this_00,aVStack_12,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint+<MuzzleBoundCheckRoutine>d__17::MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17_System_Collections_IEnumerator_Reset(MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

