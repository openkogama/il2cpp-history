
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Awake
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  obj = (this->fields).audioSource;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)(pvVar2);
  (this->fields).maxVolume = fVar4;
  return;
}


/* Void DoChargingAnimation() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_DoChargingAnimation
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  pAVar1 = (this->fields).chargeCurve;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (pAVar1 != (AnimationCurve *)0x0) {
    pvVar5 = (pAVar1->fields).m_Ptr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar6 = (this->fields).chargeBeginTime;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)(pvVar5,fVar4 - fVar6);
    pAVar1 = (this->fields).shakeCurve;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar6 = (float)(*pcRam_?)();
    if (pAVar1 != (AnimationCurve *)0x0) {
      pvVar5 = (pAVar1->fields).m_Ptr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar7 = (this->fields).chargeBeginTime;
      fVar8 = (this->fields).shakeFrequency;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar7 = (float)(*pcRam_?)(pvVar5,(fVar6 - fVar7) * fVar8 * fVar4);
      this_00 = (this->fields).audioSource;
      fVar6 = (this->fields).shakePower;
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,fVar4 * (this->fields).maxVolume,(MethodInfo *)0x0);
        pTVar9 = (this->fields).modelTransform;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_10._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
        uStack_10._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
        if (pTVar9 == (Transform *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar5);
        pTVar9 = (this->fields).chargeObject;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar4 = (fVar7 / fVar6) * _UNK_? + fVar4;
        uStack_10._0_4_ = (pVVar11->oneVector).x;
        uStack_10._4_4_ = (pVVar11->oneVector).y;
        fStack_12 = fVar4 * (pVVar11->oneVector).z;
        if (pTVar9 == (Transform *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uStack_10 = CONCAT44(fVar4 * (float)uStack_10._4_4_,fVar4 * (float)(undefined4)uStack_10);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar5,&uStack_10);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 FindRayTarget(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_FindRayTarget
                    (Vector3 *__return_storage_ptr__,PickupItemImpulseGun *this,Ray *lineOfFire,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).maxRange;
  VStack_2.point.x = 0.0;
  VStack_2.point.y = 0.0;
  VStack_2.point.z = 0.0;
  VStack_2.normal.x = 0.0;
  VStack_2.interactionFlags = 0;
  VStack_2.normal.y = 0.0;
  VStack_2.normal.z = 0.0;
  VStack_2.cubePos.x = 0;
  VStack_2.cubePos.y = 0;
  VStack_2.cubePos.z = 0;
  VStack_2._30_2_ = 0;
  VStack_2.face = 0;
  VStack_2.isCubeHit = 0;
  VStack_2._37_3_ = 0;
  VStack_2.woId = 0;
  VStack_2._44_4_ = 0;
  VStack_2.cube = (Cube *)0x0;
  VStack_2.distance = 0.0;
  VStack_2._60_4_ = 0;
  VStack_2.collider = (Collider *)0x0;
  VStack_2.transform = (Transform *)0x0;
  ignoreWoIds = (HashSet_1_System_Int32_ *)
                FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(ignoreWoIds);
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  RStack_4.m_Origin.x = (lineOfFire->m_Origin).x;
  RStack_4.m_Origin.y = (lineOfFire->m_Origin).y;
  RStack_4._8_8_ = *(undefined8 *)&(lineOfFire->m_Origin).z;
  RStack_4.m_Direction.y = (lineOfFire->m_Direction).y;
  RStack_4.m_Direction.z = (lineOfFire->m_Direction).z;
  bVar5 = CollisionDetection::CollisionDetection_MVHit_1
                    (&RStack_4,&VStack_2,fVar1,ignoreWoIds,1 << ((byte)iVar3 & 0x1f),
                     (MethodInfo *)0x0);
  if (bVar5 == 0) {
    fVar1 = (this->fields).maxRange;
    uVar6 = (lineOfFire->m_Direction).x;
    uVar7 = (lineOfFire->m_Direction).y;
    uVar8 = (lineOfFire->m_Origin).x;
    uVar9 = (lineOfFire->m_Origin).y;
    fVar10 = (lineOfFire->m_Direction).z;
    fVar11 = (lineOfFire->m_Origin).z;
    __return_storage_ptr__->x = fVar1 * (float)uVar6 + (float)uVar8;
    __return_storage_ptr__->y = fVar1 * (float)uVar7 + (float)uVar9;
    __return_storage_ptr__->z = fVar1 * fVar10 + fVar11;
  }
  else {
    __return_storage_ptr__->x = VStack_2.point.x;
    __return_storage_ptr__->y = VStack_2.point.y;
    __return_storage_ptr__->z = VStack_2.point.z;
  }
  return __return_storage_ptr__;
}


/* Void Fire(Single, Single) */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Fire
               (PickupItemImpulseGun *this,float impulseMagnitude,float recoilMagnitude,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&ImpulseRay_MethodInfo__EnumPoolManager__Instantiate<ImpulseRay>_PoolEnums_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pMVar2 = (this->fields)._.owner;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    pVVar3 = &(pMVar2->fields).lookOrigin;
    pIVar4 = *(Il2CppMethodPointer *)pVVar3;
    pIVar5 = *(Il2CppMethodPointer *)pVVar3;
    fVar6 = (pMVar2->fields).lookOrigin.z;
    p_Var20 = (_union_155 *)
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        (&VStack_7,&(pMVar2->fields).lookDirection,in_R8);
    uStack_8 = *p_Var20;
    fVar9 = *(float *)(p_Var20 + 1);
    auStack_10 = (undefined1  [8])pIVar5;
    fStack_11 = fVar6;
    _Stack_198 = uStack_8;
    fStack_12 = fVar9;
    fVar13 = (float)FUN_?(&_Stack_198);
    if (_UNK_? < fVar13) {
      _Stack_198._0_4_ = (float)uStack_8 / fVar13;
      fVar9 = fVar9 / fVar13;
      _Stack_198._4_4_ = uStack_8._4_4_ / fVar13;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      _Stack_198 = *(_union_155 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
      fVar9 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
    }
    fStack_14 = _Stack_198._0_4_;
    fStack_15 = _Stack_198._4_4_;
    fStack_16 = fVar9;
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Default);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar17 = fStack_15;
    fVar18 = fStack_14;
    fVar13 = (this->fields).maxRange;
    aVStack_19[0].point._0_8_ = (Il2CppType **)0x0;
    aVStack_19[0].point.z = 0.0;
    aVStack_19[0].normal.x = 0.0;
    aVStack_19[0].interactionFlags = 0;
    aVStack_19[0].normal.y = 0.0;
    aVStack_19[0].normal.z = 0.0;
    aVStack_19[0].cubePos.x = 0;
    aVStack_19[0].cubePos.y = 0;
    aVStack_19[0].cubePos.z = 0;
    aVStack_19[0]._30_2_ = 0;
    RStack_20.m_Origin.z = fVar6;
    aVStack_19[0].face = 0;
    aVStack_19[0].isCubeHit = 0;
    aVStack_19[0]._37_3_ = 0;
    aVStack_19[0].woId = 0;
    aVStack_19[0]._44_4_ = 0;
    aVStack_19[0].cube = (Cube *)0x0;
    aVStack_19[0].distance = 0.0;
    aVStack_19[0]._60_4_ = 0;
    aVStack_19[0].collider = (Collider *)0x0;
    aVStack_19[0].transform = (Transform *)0x0;
    ignoreWoIds = (HashSet_1_System_Int32_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(ignoreWoIds);
    iVar21 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    uVar22 = 1 << ((byte)iVar21 & 0x1f);
    pMVar23 = (MethodInfo *)(ulonglong)uVar22;
    fVar24 = RStack_20.m_Origin.z;
    RStack_20.m_Direction.x = fVar18;
    RStack_20.m_Origin.z = fVar24;
    RStack_20.m_Direction.z = fVar9;
    RStack_20.m_Direction.y = fVar17;
    RStack_20.m_Origin._0_8_ = pIVar4;
    bVar25 = CollisionDetection::CollisionDetection_MVHit_1
                       (&RStack_20,aVStack_19,fVar13,ignoreWoIds,uVar22,(MethodInfo *)0x0);
    if (bVar25 == 0) {
      fVar13 = (this->fields).maxRange;
      fVar6 = fVar13 * fVar9 + fVar6;
      ppIVar26 = (Il2CppType **)
                 CONCAT44(fVar13 * fVar17 + (float)auStack_10._4_4_,
                          fVar13 * fVar18 + (float)auStack_10._0_4_);
    }
    else {
      fVar6 = (float)aVStack_19[0]._8_8_;
      ppIVar26 = (Il2CppType **)aVStack_19[0].point._0_8_;
    }
    afStackX_8[0] = fVar6;
    uStack_8 = (_union_155)ppIVar26;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar27 = TypeInfo__PrefabPool->static_fields->instance;
    if (((pPVar27 != (PrefabPool *)0x0) &&
        (this_00 = (pPVar27->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
       (this_03 = (ImpulseRay *)
                  EnumPoolManager::EnumPoolManager_Instantiate
                            (this_00,PoolEnums__Enum_ImpulseGunRay,
                             ImpulseRay_MethodInfo__EnumPoolManager__Instantiate<ImpulseRay>_PoolEnums_
                            ), this_03 != (ImpulseRay *)0x0)) {
      obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_03,(MethodInfo *)0x0);
      obj = (this->fields)._.muzzlePoint;
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_28._0_8_ = (Il2CppType **)0x0;
        VStack_28.z = 0.0;
        pvVar29 = (obj->fields)._._.m_CachedPtr;
        if (pvVar29 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar31 = func_?(&UNK_?);
          FUN_?(uVar31,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        (*pcRam_?)(pvVar29);
        if (obj_00 != (Transform *)0x0) {
          VStack_7.x = VStack_28.x;
          VStack_7.y = VStack_28.y;
          VStack_7.z = VStack_28.z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar29 = (obj_00->fields)._._.m_CachedPtr;
          if (pvVar29 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
            pcVar30 = (code *)swi(3);
            (*pcVar30)();
            return;
          }
          pcVar30 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
            uVar31 = func_?(&UNK_?);
            FUN_?(uVar31,0);
            pcVar30 = (code *)swi(3);
            (*pcVar30)();
            return;
          }
          pcRam_? = pcVar30;
          (*pcRam_?)(pvVar29,&VStack_7);
          (this_03->fields).radius = (this->fields).radius;
          fVar13 = (this->fields).missColor.g;
          fVar24 = (this->fields).missColor.b;
          fVar18 = (this->fields).missColor.a;
          (this_03->fields).startColor.r = (this->fields).missColor.r;
          (this_03->fields).startColor.g = fVar13;
          (this_03->fields).startColor.b = fVar24;
          (this_03->fields).startColor.a = fVar18;
          VStack_28._0_8_ = ppIVar26;
          VStack_28.z = fVar6;
          ImpulseRay::ImpulseRay_Initialize(this_03,&VStack_28,(MethodInfo *)0x0);
          fVar13 = fStack_14;
          fVar6 = fStack_11;
          auVar32 = auStack_10;
          pMVar2 = (this->fields)._.owner;
          if (pMVar2 != (MVPickupOwner *)0x0) {
            if ((pMVar2->fields)._IsLocal_k__BackingField == 0) {
              return;
            }
            fStack_15 = fVar17;
            fStack_33 = fVar9;
            pLVar34 = PickupItemImpulseGun_SphereCastAgainstWorldObjects
                                (this,(Ray *)auStack_10,(MethodInfo *)0x0);
            uVar22 = 0;
            if (pLVar34 != (List_1_MVWorldObjectClient_ *)0x0) {
              lVar35 = 0x20;
              for (; (int)uVar22 < (pLVar34->fields)._size; uVar22 = uVar22 + 1) {
                if ((uint)(pLVar34->fields)._size <= uVar22) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar30 = (code *)swi(3);
                  (*pcVar30)();
                  return;
                }
                pMVar36 = (pLVar34->fields)._items;
                if (pMVar36 == (MVWorldObjectClient__Array *)0x0) goto code_?;
                if ((uint)pMVar36->max_length <= uVar22) {
                  FUN_?();
                  pcVar30 = (code *)swi(3);
                  (*pcVar30)();
                  return;
                }
                pMVar37 = *(MVWorldObjectClient **)((longlong)pMVar36->vector + lVar35 + -0x20);
                if (pMVar37 == (MVWorldObjectClient *)0x0) goto code_?;
                pIVar38 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                    (pMVar37,(MethodInfo *)0x0);
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
                if (pIVar38 != (InteractionDataHandlerBase *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if ((pIVar38->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                    pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (((pMVar39 == (MVNetworkGame *)0x0) ||
                        (this_01 = (pMVar39->fields).playerContainer,
                        this_01 == (MVPlayerContainer *)0x0)) ||
                       (this_04 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                            (this_01,(MethodInfo *)0x0),
                       this_04 == (MVLocalPlayer *)0x0)) goto code_?;
                    bVar25 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                       ((MVPlayer *)this_04,pMVar37,(MethodInfo *)0x0);
                    PVar40 = (PlayerKilledByType__Enum)pMVar23;
                    if (bVar25 == 0) {
                      pPVar41 = this;
                      auStack_10 = auVar32;
                      fStack_11 = fVar6;
                      fStack_14 = fVar13;
                      fStack_15 = fVar17;
                      fStack_33 = fVar9;
                      pVVar3 = PickupItemSlapGun::PickupItemSlapGun_ComputeImpulseDirection
                                          (&VStack_28,(PickupItemSlapGun *)this,(Ray *)auStack_10,
                                           (MethodInfo *)0x0);
                      RStack_20.m_Origin.x = pVVar3->x;
                      RStack_20.m_Origin.y = pVVar3->y;
                      pMVar2 = (this->fields)._.owner;
                      VStack_7.z = pVVar3->z * impulseMagnitude;
                      uVar42 = 0;
                      fStack_15 = 0.0;
                      VStack_7._0_8_ =
                           CONCAT44(RStack_20.m_Origin.y * impulseMagnitude,
                                    RStack_20.m_Origin.x * impulseMagnitude);
                      auStack_10 = (undefined1  [8])0x0;
                      fStack_11 = 0.0;
                      fStack_14 = 0.0;
                      MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                                ((InteractionData *)auStack_10,
                                 (InteractionPackageType__Enum)
                                 CONCAT71((int7)((ulonglong)pPVar41 >> 8),2),0.0,&VStack_7,
                                 PVar40 & 0xffffff00,(MethodInfo *)0x0);
                      RStack_20.m_Direction.x = fStack_14;
                      RStack_20.m_Origin.z = fStack_11;
                      RStack_20.m_Direction.y = fStack_15;
                      pMVar23 = (pIVar38->klass->vtable).__unknown_1.method;
                      RStack_20.m_Origin.x = (float)auStack_10._0_4_;
                      RStack_20.m_Origin.y = (float)auStack_10._4_4_;
                      (*(pIVar38->klass->vtable).__unknown_1.methodPtr)
                                (pIVar38,pMVar2,&RStack_20,0,pMVar23);
                      lVar43 = FUN_?(pMVar37);
                      if (lVar43 != 0) {
                        uStack_1 = 0;
                        pMVar2 = (this->fields)._.owner;
                        if ((pMVar2 == (MVPickupOwner *)0x0) ||
                           (pMVar37 = (pMVar2->fields)._.worldObjectParent,
                           pMVar37 == (MVWorldObjectClient *)0x0)) goto code_?;
                        pMVar23 = (MethodInfo *)auStack_10;
                        aVStack_19[0].point._0_8_ = (Il2CppType **)0x0;
                        aVStack_19[0].point.z = 0.0;
                        aVStack_19[0].normal.x = 0.0;
                        aVStack_19[0].normal.y = 0.0;
                        aVStack_19[0].normal.z = 0.0;
                        aVStack_19[0].cubePos.x = 0;
                        aVStack_19[0].cubePos.y = 0;
                        aVStack_19[0].cubePos.z = 0;
                        aVStack_19[0]._30_2_ = 0;
                        aVStack_19[0].face = 0;
                        aVStack_19[0].isCubeHit = 0;
                        aVStack_19[0]._37_3_ = 0;
                        aVStack_19[0].woId = 0;
                        aVStack_19[0]._44_4_ = 0;
                        aVStack_19[0].cube = (Cube *)0x0;
                        aVStack_19[0].distance = 0.0;
                        aVStack_19[0]._60_4_ = 0;
                        aVStack_19[0].collider = (Collider *)0x0;
                        aVStack_19[0].transform = (Transform *)0x0;
                        aVStack_19[0].interactionFlags = 0;
                        auStack_10 = auVar32;
                        fStack_11 = fVar6;
                        fStack_14 = fVar13;
                        fStack_15 = fVar17;
                        fStack_33 = fVar9;
                        FUN_?(0,TypeInfo__IBulletImpactVisualizer,lVar43,aVStack_19,pMVar23
                                      ,CONCAT44(uVar42,(pMVar37->fields)._.ownerActorNr),0);
                      }
                    }
                  }
                }
                lVar35 = lVar35 + 8;
              }
              pMVar2 = (this->fields)._.owner;
              if (pMVar2 != (MVPickupOwner *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
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
                pvVar29 = (pMVar2->fields)._._._._._.m_CachedPtr;
                if (pvVar29 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar2,(MethodInfo *)0x0);
                  pcVar30 = (code *)swi(3);
                  (*pcVar30)();
                  return;
                }
                pcVar30 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
                  uVar31 = func_?(&UNK_?);
                  FUN_?(uVar31,0);
                  pcVar30 = (code *)swi(3);
                  (*pcVar30)();
                  return;
                }
                pcRam_? = pcVar30;
                pvVar29 = (void *)(*pcRam_?)(pvVar29);
                obj_01 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                         Unmarshal_UnmarshalUnityObject
                                   (pvVar29,
                                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                   );
                if (obj_01 != (Object *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  VStack_28._0_8_ = (Il2CppType **)0x0;
                  VStack_28.z = 0.0;
                  pOVar44 = obj_01[1].klass;
                  if (pOVar44 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(obj_01,(MethodInfo *)0x0);
                    pcVar30 = (code *)swi(3);
                    (*pcVar30)();
                    return;
                  }
                  pcVar30 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
                    uVar31 = func_?(&UNK_?);
                    FUN_?(uVar31,0);
                    pcVar30 = (code *)swi(3);
                    (*pcVar30)();
                    return;
                  }
                  pcRam_? = pcVar30;
                  (*pcRam_?)(pOVar44,&VStack_28);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar45 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar46 = (pVVar45->upVector).x;
                  fVar6 = (float)uVar46 * _UNK_? + VStack_28.x;
                  fVar9 = (pVVar45->upVector).y * _UNK_? + VStack_28.y;
                  fVar13 = (pVVar45->upVector).z * _UNK_? + VStack_28.z;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__Math);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  fVar24 = afStackX_8[0];
                  fVar6 = (float)uStack_8 - fVar6;
                  fVar9 = uStack_8._4_4_ - fVar9;
                  fVar13 = afStackX_8[0] - fVar13;
                  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  auVar47._0_8_ = (double)(fVar9 * fVar9 + fVar6 * fVar6 + fVar13 * fVar13);
                  auVar47._8_8_ = 0;
                  if (auVar47._0_8_ < 0.0) {
                    dVar48 = (double)FUN_?();
                  }
                  else {
                    auVar47 = sqrtpd(ZEXT816(0),auVar47);
                    dVar48 = auVar47._0_8_;
                  }
                  if (_UNK_? <= (float)dVar48) {
                    return;
                  }
                  fVar6 = (float)dVar48 * _UNK_?;
                  if (fVar6 <= _UNK_?) {
                    fVar6 = _UNK_?;
                  }
                  fVar6 = recoilMagnitude / fVar6;
                  if (_UNK_? < impulseMagnitude) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar49 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if (((pMVar49 == (MVGameControllerBase *)0x0) ||
                        (pMVar39 = (pMVar49->fields).game, pMVar39 == (MVNetworkGame *)0x0)) ||
                       (pWVar50 = (pMVar39->fields).worldNetwork, pWVar50 == (WorldNetwork *)0x0))
                    goto code_?;
                    this_02 = (RuntimeEventManager *)(pWVar50->fields)._.runtimeEventManagerNetwork;
                    runtimeEvent = (RuntimeEvent *)
                                   FUN_?(
                                                TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent
                                                );
                    VStack_7.z = fVar24;
                    (runtimeEvent->fields)._RuntimeEventType_k__BackingField = 0x10;
                    VStack_7._0_8_ = ppIVar26;
                    pIVar51 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                              CubeMathFunctions_WorldPosToFineGrainedLocalPos
                                        ((IntVector *)afStackX_8,&VStack_7,(MethodInfo *)0x0);
                    iVar52 = pIVar51->y;
                    iVar53 = pIVar51->z;
                    (runtimeEvent->fields).position.x = pIVar51->x;
                    (runtimeEvent->fields).position.y = iVar52;
                    (runtimeEvent->fields).position.z = iVar53;
                    if (this_02 == (RuntimeEventManager *)0x0) goto code_?;
                    bVar25 = RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                                       (this_02,(ExplosionEvent *)runtimeEvent,(MethodInfo *)0x0);
                    if (bVar25 != 0) {
                      this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                          ((MethodInfo *)0x0);
                      if (this_05 == (MVNetworkGame_OperationRequests *)0x0)
                      goto code_?;
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_SendRuntimeEventOperation
                                (this_05,runtimeEvent,(MethodInfo *)0x0);
                    }
                  }
                  fVar9 = (float)(_Stack_198._0_4_ ^ _UNK_?);
                  fVar13 = (float)(_Stack_198._4_4_ ^ _UNK_?);
                  fVar24 = (float)((uint)fStack_16 ^ _UNK_?);
                  pMVar2 = (this->fields)._.owner;
                  if (pMVar2 != (MVPickupOwner *)0x0) {
                    this_06 = (MVRigidBody *)
                              UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_GetComponent_1
                                        ((Component *)pMVar2,
                                         MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                        );
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
                    if (this_06 == (MVRigidBody *)0x0) {
                      return;
                    }
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if ((this_06->fields)._._._._._.m_CachedPtr == (void *)0x0) {
                      return;
                    }
                    VStack_7._0_8_ = CONCAT44(fVar13 * fVar6,fVar9 * fVar6);
                    VStack_7.z = fVar24 * fVar6;
                    MVRigidBody::MVRigidBody_AddImpulse_1(this_06,&VStack_7,1,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            goto code_?;
          }
        }
        FUN_?();
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* List`1[MVWorldObjectClient] SphereCastAgainstWorldObjects(Ray) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_SphereCastAgainstWorldObjects
          (PickupItemImpulseGun *this,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MVWorldObjectClient_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  pMVar2 = (this->fields)._.owner;
  radius = (this->fields).radius;
  distance = (this->fields).maxRange;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    ignoreWoIds = (HashSet_1_System_Int32_ *)(*(pMVar2->klass->vtable).get_IgnoreWOIDs.methodPtr)();
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    aRStack_4[0].m_Origin.x = (lineOfFire->m_Origin).x;
    aRStack_4[0].m_Origin.y = (lineOfFire->m_Origin).y;
    aRStack_4[0]._8_8_ = *(undefined8 *)&(lineOfFire->m_Origin).z;
    aRStack_4[0].m_Direction.y = (lineOfFire->m_Direction).y;
    aRStack_4[0].m_Direction.z = (lineOfFire->m_Direction).z;
    pMVar5 = (MVWorldObjectClientManagerNetwork *)0x0;
    pLVar6 = CollisionDetection::CollisionDetection_MVSphereCastAll
                       (aRStack_4,radius,distance,ignoreWoIds,1 << ((byte)iVar3 & 0x1f),
                        (MethodInfo *)0x0);
    pMVar7 = pMVar5;
    pMVar8 = pMVar5;
    if (pLVar6 != (List_1_VoxelHit_ *)0x0) {
      while( true ) {
        uVar9 = (uint)pMVar8;
        if ((pLVar6->fields)._size <= (int)uVar9) {
          return pLVar1;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar10 == (MVGameControllerBase *)0x0) ||
           (pMVar11 = (pMVar10->fields).game, pMVar11 == (MVNetworkGame *)0x0)) break;
        pMVar8 = pMVar5;
        if ((pMVar11->fields).worldNetwork != (WorldNetwork *)0x0) {
          pMVar8 = (((pMVar11->fields).worldNetwork)->fields)._.worldObjectClientManager;
        }
        if ((uint)(pLVar6->fields)._size <= uVar9) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar12)();
          return pLVar1;
        }
        pVVar13 = (pLVar6->fields)._items;
        if (pVVar13 == (VoxelHit__Array *)0x0) break;
        if ((uint)pVVar13->max_length <= uVar9) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar12)();
          return pLVar1;
        }
        iVar3 = *(int32_t *)((longlong)&pVVar13->vector[0].woId + (longlong)pMVar7);
        if (pMVar8 == (MVWorldObjectClientManagerNetwork *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar8->fields)._.worldObjects;
        pOStackX_8 = (Object *)0x0;
        if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar12)();
          return pLVar1;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar3,&pOStackX_8,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        if (pOStackX_8 != (Object *)0x0) {
          if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) break;
          FUN_?(pLVar1);
        }
        pMVar7 = (MVWorldObjectClientManagerNetwork *)&(pMVar7->fields)._.worldBounds.m_Extents.y;
        pMVar8 = (MVWorldObjectClientManagerNetwork *)(ulonglong)(uVar9 + 1);
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar12)();
  return pLVar1;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_TriggerBegin
               (PickupItemImpulseGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  pSVar1 = (this->fields).chargeSoundStream;
  if ((pSVar1 != (StreamedAudioClipManual *)0x0) &&
     (pAVar2 = (this->fields).audioSource, pAVar2 != (AudioSource *)0x0)) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
              (pAVar2,(AudioResource *)(pSVar1->fields)._Clip_k__BackingField,(MethodInfo *)0x0);
    pAVar2 = (this->fields).audioSource;
    if (pAVar2 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,1,(MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 != (AudioSource *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pAVar2->fields)._._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        cVar6 = (*pcRam_?)(pvVar3);
        if (cVar6 != '\0') {
          pAVar2 = (this->fields).audioSource;
          if (pAVar2 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar2,(MethodInfo *)0x0);
        }
        pcVar4 = pcRam_?;
        (this->fields).isCharging = 1;
        pcVar7 = pcRam_?;
        if ((pcVar4 == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar4, pcVar4 == (code *)0x0))
        {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar7;
        fVar8 = (float)(*pcVar4)();
        (this->fields).chargeBeginTime = fVar8;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_TriggerEnd
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  if ((this->fields).isCharging != 0) {
    pAVar1 = (this->fields).audioSource;
    if ((pAVar1 == (AudioSource *)0x0) ||
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar1,(MethodInfo *)0x0), this_00 == (GameObject *)0x0))
    goto DAT_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) goto DAT_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar1,(MethodInfo *)0x0);
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) goto DAT_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar1,0,(MethodInfo *)0x0);
      pSVar3 = (this->fields).releaseSoundStream;
      if ((pSVar3 == (StreamedAudioClipManual *)0x0) ||
         (pAVar1 = (this->fields).audioSource, pAVar1 == (AudioSource *)0x0)) goto DAT_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot_1
                (pAVar1,(pSVar3->fields)._Clip_k__BackingField,_UNK_?,(MethodInfo *)0x0);
    }
    obj = (this->fields).chargeCurve;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    fVar6 = (float)(*pcRam_?)();
    if (obj == (AnimationCurve *)0x0) {
DAT_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar7 = (obj->fields).m_Ptr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar8 = (this->fields).chargeBeginTime;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    fVar8 = (float)(*pcRam_?)(pvVar7,fVar6 - fVar8);
    (this->fields).missColor.a = fVar8;
    fVar6 = (this->fields).recoilImpulse;
    (this->fields).hitColor.a = fVar8;
    PickupItemImpulseGun_Fire
              (this,fVar8 * (this->fields).hitImpulse,fVar8 * fVar6,(MethodInfo *)0x0);
    (this->fields).isCharging = 0;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Update
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  pTVar1 = (this->fields).chargeObject;
  if (pTVar1 != (Transform *)0x0) {
    if ((this->fields).isCharging == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar2,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pTVar1 = (this->fields).chargeObject;
          if ((pTVar1 == (Transform *)0x0) ||
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar1,(MethodInfo *)0x0),
             pGVar2 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          pTVar1 = (this->fields).modelTransform;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (pTVar1 == (Transform *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uStack_6._0_4_ = (pVVar4->zeroVector).x;
          uStack_6._4_4_ = (pVVar4->zeroVector).y;
          fStack_7 = (pVVar4->zeroVector).z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (pTVar1->fields)._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar8,&uStack_6);
        }
        return;
      }
    }
    else {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar2,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          pTVar1 = (this->fields).chargeObject;
          if ((pTVar1 == (Transform *)0x0) ||
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar1,(MethodInfo *)0x0),
             pGVar2 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
        }
        PickupItemImpulseGun_DoChargingAnimation(this,(MethodInfo *)0x0);
        pAVar10 = (this->fields).audioSource;
        if (pAVar10 != (AudioSource *)0x0) {
          bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            (pAVar10,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return;
          }
          pAVar10 = (this->fields).audioSource;
          if (pAVar10 != (AudioSource *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                           );
              LOCK();
              UNLOCK();
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pAVar10 == (AudioSource *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowArgumentNullException
                        ((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar8 = (pAVar10->fields)._._._._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowArgumentNullException
                        ((Object *)pAVar10,StringLiteral_source,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar8,0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PickupItemImpulseGun() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun__ctor
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  fVar4 = _UNK_?;
  uVar5 = _UNK_?;
  (this->fields).hitColor.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields).hitColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (this->fields).hitColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields).hitColor.a = (float)uVar5;
  (this->fields).hitImpulse = 2400.0;
  (this->fields).recoilImpulse = 1600.0;
  (this->fields).shakeDirection.x = fVar4;
  (this->fields).shakeDirection.y = fVar4;
  (this->fields).shakeDirection.z = fVar4;
  (this->fields).maxRange = 50.0;
  (this->fields).chargingRate = 100.0;
  (this->fields).radius = 1.2;
  uVar1 = _UNK_?;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields).missColor.r = (float)_UNK_?;
  _UNK_? = uVar1;
  uVar3 = _UNK_?;
  (this->fields).missColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (this->fields).missColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields).missColor.a = (float)uVar5;
  (this->fields).shakeFrequency = 1.0;
  (this->fields).shakePower = 1.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar8 = iRam_? != 0;
  (this->fields)._.meshRenderers = pMVar7;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->fields)._.meshRenderers >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar10;
      LOCK();
      uVar12 = *puVar10;
      if (uVar11 == uVar12) {
        *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar12);
  }
  bVar8 = cRam_? == '\0';
  (this->fields)._._AbleToFire_k__BackingField = 1;
  if (bVar8) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar13 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar14 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar15 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar16 = ppMVar14;
  if (lVar15 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar15 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar16;
      LOCK();
      bVar8 = uVar9 != uRam_?;
      uVar17 = uVar9;
      uVar18 = uVar9 + 1;
      if (bVar8) {
        uVar17 = uRam_?;
        uVar18 = uRam_?;
      }
      uRam_? = uVar18;
      UNLOCK();
    } while ((bVar8) && (ppMVar16 = (MethodInfo **)(ulonglong)uVar17, uVar9 = uVar17, uVar17 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar15;
  puVar19 = &(pOVar13->_1).field_0x1c;
  LOCK();
  bVar8 = *(int *)puVar19 == 1;
  if (bVar8) {
    *(undefined4 *)puVar19 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar8) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar20 = &(pOVar13->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar8 = *puVar20 == 1;
  if (bVar8) {
    *puVar20 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar8) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar21 = &(pOVar13->_1).cctor_thread;
    LOCK();
    bVar8 = (ulonglong)uVar9 == *psVar21;
    if (bVar8) {
      *psVar21 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar8) {
      return;
    }
    while( true ) {
      puVar19 = &(pOVar13->_1).field_0x1c;
      LOCK();
      bVar8 = *(int *)puVar19 == 1;
      if (bVar8) {
        *(undefined4 *)puVar19 = 1;
      }
      UNLOCK();
      if (bVar8) break;
      LOCK();
      lVar15._0_4_ = (pOVar13->_1).initializationExceptionGCHandle;
      lVar15._4_4_ = (pOVar13->_1).cctor_started;
      if (lVar15 == 0) {
        (pOVar13->_1).initializationExceptionGCHandle = 0;
        (pOVar13->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar15 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar22._0_4_ = (pOVar13->_1).initializationExceptionGCHandle;
    lVar22._4_4_ = (pOVar13->_1).cctor_started;
    if (lVar22 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar13->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar13->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar13->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar13);
      ppMVar16 = ppMVar14;
      pIVar23 = (Il2CppClass *)pOVar13;
code_?:
      do {
        if (ppMVar16 == (MethodInfo **)0x0) {
          FUN_?(pIVar23);
          if (pIVar23->field_count != 0) {
            ppMVar16 = pIVar23->methods;
            pMVar24 = *ppMVar16;
code_?:
            if (pMVar24 != (MethodInfo *)0x0) {
              if ((*pMVar24->name == '.') && ((pMVar24->flags & 0x800) != 0)) {
                ppMVar25 = ppMVar14;
                while (ppMVar26 = ppMVar25 + 0x30528cee,
                      ppMVar25 = (MethodInfo **)((longlong)ppMVar25 + 1),
                      *(char *)ppMVar26 == (pMVar24->name + -1)[(longlong)ppMVar25]) {
                  if (ppMVar25 == (MethodInfo **)0x7) {
                    FUN_?(pMVar24,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar16 = ppMVar16 + 1;
          if (ppMVar16 < pIVar23->methods + pIVar23->field_count) {
            pMVar24 = *ppMVar16;
            goto code_?;
          }
        }
        pIVar23 = pIVar23->parent;
        ppMVar16 = ppMVar14;
      } while (pIVar23 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar13->_1).cctor_thread = 0;
    uVar12 = _UNK_?;
    uVar3 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar13->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_27 = 0;
    uStack_28 = _UNK_?;
    uStack_29 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar13->_0).byval_arg,0,0);
    pppppppuVar22 = &pppppppuStack_78;
    if (0xf < uStack_29) {
      pppppppuVar22 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar22);
    if (uStack_29 < 0x10) {
code_?:
      lVar15 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar22 = apppppppuStack_58;
      if (0xf < uStack_30) {
        pppppppuVar22 = apppppppuStack_58[0];
      }
      uStack_28 = uVar3;
      uStack_29 = uVar12;
      lVar22 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar22);
      if (lVar15 != 0) {
        *(longlong *)(lVar22 + 0x28U) = lVar15;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar22 + 0x28U >> 0xc);
          puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar10;
            LOCK();
            uVar12 = *puVar10;
            if (uVar11 == uVar12) {
              *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar12);
        }
      }
      FUN_?(pOVar13,lVar22);
      if (0xf < uStack_30) {
        pppppppuVar22 = apppppppuStack_58[0];
        if ((0xfff < uStack_30 + 1) &&
           (pppppppuVar22 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar22))))
        goto code_?;
        func_?(pppppppuVar22);
      }
      goto code_?;
    }
    pppppppuVar22 = pppppppuStack_78;
    if ((uStack_29 + 1 < 0x1000) ||
       (pppppppuVar22 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar22)) < 0x20)) {
      func_?(pppppppuVar22);
      uVar3 = _UNK_?;
      uVar12 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar3._0_4_ = (pOVar13->_1).initializationExceptionGCHandle;
  uVar3._4_4_ = (pOVar13->_1).cctor_started;
  uVar3 = FUN_?(uVar3);
  FUN_?(uVar3,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Single get_ChargeState() */

float Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_get_ChargeState
                (PickupItemImpulseGun *this,MethodInfo *method)

{
  if ((this->fields).isCharging == 0) {
    return 0.0;
  }
  obj = (this->fields).chargeCurve;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  if (obj == (AnimationCurve *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pvVar4 = (obj->fields).m_Ptr;
  if (pvVar4 != (void *)0x0) {
    fVar5 = (this->fields).chargeBeginTime;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
    pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float)(*pcRam_?)(pvVar4,fVar3 - fVar5);
    return fVar3;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  fVar3 = (float)(*pcVar1)();
  return fVar3;
}

