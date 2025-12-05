
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnBulletHit
               (PickupItemShotgun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  uVar1 = (undefined4)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  uStack_4._0_4_ = (voxelHit->point).x;
  uStack_4._4_4_ = (voxelHit->point).y;
  uVar5 = *(undefined8 *)&(voxelHit->point).z;
  uVar6 = (voxelHit->normal).y;
  uVar7 = (voxelHit->normal).z;
  uStack_8 = *(undefined8 *)&voxelHit->cubePos;
  fStack_9 = (float)uVar5;
  fStack_10 = (float)((ulonglong)uVar5 >> 0x20);
  pCStack_11 = voxelHit->cube;
  uStack_12 = *(undefined8 *)&voxelHit->distance;
  pCStack_13 = voxelHit->collider;
  pTStack_14 = voxelHit->transform;
  iStack_15 = voxelHit->interactionFlags;
  fStack_16 = (float)uVar6;
  fStack_17 = (float)uVar7;
  if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
    iVar18 = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar3,voxelHit->woId,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pMVar19 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar3,iVar18,(MethodInfo *)0x0);
      lVar20 = FUN_?(pMVar19,TypeInfo__IBulletImpactVisualizer);
      if (lVar20 == 0) {
        fStack_16 = (voxelHit->normal).y;
        fVar21 = (voxelHit->normal).z;
        uStack_8 = *(undefined8 *)&voxelHit->cubePos;
        uVar5._0_4_ = (voxelHit->point).x;
        uVar5._4_4_ = (voxelHit->point).y;
        uStack_4._0_4_ = (voxelHit->point).x;
        uStack_4._4_4_ = (voxelHit->point).y;
        fVar22 = (voxelHit->point).z;
        fStack_10 = (voxelHit->normal).x;
        fStack_9 = fVar22;
        fStack_17 = fVar21;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        NStack_23._0_8_ = *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
        VStack_24.y = fStack_16;
        VStack_24.x = fStack_10;
        NStack_23.value.g = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
        QStack_25.x = 0.0;
        QStack_25.y = 0.0;
        QStack_25.z = 0.0;
        QStack_25.w = 0.0;
        pcVar26 = pcRam_?;
        VStack_24.z = fVar21;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar26 = (code *)FUN_?(&UNK_?), pcVar26 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        pcRam_? = pcVar26;
        (*pcRam_?)(&VStack_24,&NStack_23,&QStack_25);
        NStack_23.hasValue = 0;
        NStack_23._1_3_ = 0;
        NStack_23.value.r = 0.0;
        NStack_23.value.g = 0.0;
        NStack_23.value.b = 0.0;
        NStack_23.value.a = 0.0;
        VStack_24._0_8_ = uVar5;
        VStack_24.z = fVar22;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_NormalBulletSparks,&VStack_24,&QStack_25,(Nullable_1_Single_)0x0,
                   &NStack_23,(MethodInfo *)0x0);
        return;
      }
      pMVar27 = (this->fields)._._.owner;
      if ((pMVar27 != (MVPickupOwner *)0x0) &&
         (pMVar28 = (pMVar27->fields)._.worldObjectParent, pMVar28 != (MVWorldObjectClient *)0x0)) {
        iVar18 = (pMVar28->fields)._.ownerActorNr;
        if (*(int *)&(TypeInfo__PickupItemShotgun->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PickupItemShotgun);
        }
        pIVar29 = TypeInfo__IBulletImpactVisualizer;
        fVar21 = TypeInfo__PickupItemShotgun->static_fields->hitDamage;
        if (pMVar19 != (MVWorldObjectClient *)0x0) {
          lVar20 = FUN_?(pMVar19,TypeInfo__IBulletImpactVisualizer);
          pIVar30 = TypeInfo__IBulletImpactVisualizer;
          if (lVar20 == 0) {
            FUN_?(pMVar19,pIVar29);
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
          lVar20 = FUN_?(pMVar19,TypeInfo__IBulletImpactVisualizer);
          if (lVar20 != 0) {
            QStack_25.x = (lineOfFire->m_Origin).x;
            QStack_25.y = (lineOfFire->m_Origin).y;
            QStack_25._8_8_ = *(undefined8 *)&(lineOfFire->m_Origin).z;
            uStack_31._0_4_ = (lineOfFire->m_Direction).y;
            uStack_31._4_4_ = (lineOfFire->m_Direction).z;
            uStack_4._0_4_ = (voxelHit->point).x;
            uStack_4._4_4_ = (voxelHit->point).y;
            uVar5 = *(undefined8 *)&(voxelHit->point).z;
            uVar32 = (voxelHit->normal).y;
            uVar33 = (voxelHit->normal).z;
            uStack_8 = *(undefined8 *)&voxelHit->cubePos;
            fStack_9 = (float)uVar5;
            fStack_10 = (float)((ulonglong)uVar5 >> 0x20);
            uStack_34._0_4_ = voxelHit->face;
            uStack_34._4_1_ = voxelHit->isCubeHit;
            uStack_34._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
            uStack_35 = *(undefined8 *)&voxelHit->woId;
            pCStack_11 = voxelHit->cube;
            uStack_12 = *(undefined8 *)&voxelHit->distance;
            pCStack_13 = voxelHit->collider;
            pTStack_14 = voxelHit->transform;
            iStack_15 = voxelHit->interactionFlags;
            fStack_16 = (float)uVar32;
            fStack_17 = (float)uVar33;
            FUN_?(&QStack_25,TypeInfo__IBulletImpactVisualizer,lVar20,&uStack_4,&QStack_25,
                          CONCAT44(uVar1,iVar18),fVar21);
            return;
          }
          FUN_?(pMVar19,pIVar30);
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnFire
               (PickupItemShotgun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Bullet__OnHitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemShotgun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemShotgun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shotgun_fire);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        (&VStack_3,&(pMVar1->fields).lookDirection,method);
    VStack_4.x = pVVar2->x;
    VStack_4.y = pVVar2->y;
    VStack_4.z = pVVar2->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar5->upVector).x;
    uStack_6._4_4_ = (pVVar5->upVector).y;
    fStack_7 = (pVVar5->upVector).z;
    auStack_8._0_4_ = 0;
    auStack_8._4_4_ = 0;
    auStack_8._8_4_ = 0;
    auStack_8[0xc] = 0;
    auStack_8._13_3_ = 0;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(&VStack_4,&uStack_6);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar11 = _UNK_?;
    fStack_12 = (float)auStack_8._0_4_;
    fVar13 = (float)auStack_8._8_4_ + (float)auStack_8._8_4_;
    fVar14 = (float)auStack_8._4_4_ + (float)auStack_8._4_4_;
    fVar15 = (float)auStack_8._0_4_ * ((float)auStack_8._0_4_ + (float)auStack_8._0_4_);
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar16 = (float)auStack_8._0_4_ * fVar13;
    VStack_3.x = (pVVar5->rightVector).x;
    VStack_3.y = (pVVar5->rightVector).y;
    fVar17 = (float)auStack_8._12_4_ * fVar14;
    fVar18 = (float)auStack_8._12_4_ * ((float)auStack_8._0_4_ + (float)auStack_8._0_4_);
    fVar19 = (_UNK_? -
             ((float)auStack_8._8_4_ * fVar13 + (float)auStack_8._4_4_ * fVar14)) * VStack_3.x
    ;
    fVar20 = ((float)auStack_8._0_4_ * fVar14 - (float)auStack_8._12_4_ * fVar13) * VStack_3.y
    ;
    fVar21 = (pVVar5->rightVector).z;
    fVar22 = (fVar18 + (float)auStack_8._4_4_ * fVar13) * VStack_3.y;
    fStack_23 = (_UNK_? - ((float)auStack_8._8_4_ * fVar13 + fVar15)) * VStack_3.y +
                 ((float)auStack_8._12_4_ * fVar13 + (float)auStack_8._0_4_ * fVar14) *
                 VStack_3.x + ((float)auStack_8._4_4_ * fVar13 - fVar18) * fVar21;
    fVar13 = _UNK_? - ((float)auStack_8._4_4_ * fVar14 + fVar15);
    fVar14 = (fVar16 - fVar17) * VStack_3.x;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_3.x = (pVVar5->upVector).x;
    VStack_3.y = (pVVar5->upVector).y;
    fVar24 = (float)auStack_8._8_4_ + (float)auStack_8._8_4_;
    fVar18 = (pVVar5->upVector).z;
    fVar15 = (float)auStack_8._4_4_ + (float)auStack_8._4_4_;
    fVar25 = (float)auStack_8._0_4_ * ((float)auStack_8._0_4_ + (float)auStack_8._0_4_);
    fVar26 = (float)auStack_8._12_4_ * ((float)auStack_8._0_4_ + (float)auStack_8._0_4_);
    fVar27 = (float)auStack_8._4_4_ * fVar15;
    fVar28 = ((float)auStack_8._0_4_ * fVar24 - (float)auStack_8._12_4_ * fVar15) * VStack_3.x
    ;
    fStack_12 = (fVar11 - ((float)auStack_8._8_4_ * fVar24 + fVar27)) * VStack_3.x +
                 ((float)auStack_8._0_4_ * fVar15 - (float)auStack_8._12_4_ * fVar24) *
                 VStack_3.y +
                 ((float)auStack_8._12_4_ * fVar15 + (float)auStack_8._0_4_ * fVar24) * fVar18;
    fVar29 = (fVar26 + (float)auStack_8._4_4_ * fVar24) * VStack_3.y;
    fStack_30 = (fVar11 - ((float)auStack_8._8_4_ * fVar24 + fVar25)) * VStack_3.y +
                 ((float)auStack_8._12_4_ * fVar24 + (float)auStack_8._0_4_ * fVar15) *
                 VStack_3.x + ((float)auStack_8._4_4_ * fVar24 - fVar26) * fVar18;
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      pMVar31 = (MethodInfo *)0x0;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (this_00,1,(MethodInfo *)0x0);
      fVar24 = fStack_23;
      fVar15 = _UNK_?;
      uVar32 = 0;
      lVar33 = 0x20;
      do {
        pMVar1 = (this->fields)._._.owner;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        uVar10._0_4_ = (pMVar1->fields).lookOrigin.x;
        uVar10._4_4_ = (pMVar1->fields).lookOrigin.y;
        fVar26 = (pMVar1->fields).lookOrigin.z;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                            ((Vector3 *)auStack_8,&(pMVar1->fields).lookDirection,pMVar31);
        uStack_34._0_4_ = pVVar2->x;
        uStack_34._4_4_ = pVVar2->y;
        fVar35 = pVVar2->z;
        if (*(int *)&(TypeInfo__PickupItemShotgun->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar36 = TypeInfo__PickupItemShotgun->static_fields->offsetsX;
        if (pSVar36 == (Single__Array *)0x0) goto code_?;
        if ((uint)pSVar36->max_length <= uVar32) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar37 = *(float *)((longlong)pSVar36->vector + lVar33 + -0x20);
        fVar38 = (this->fields).spread;
        pSVar36 = TypeInfo__PickupItemShotgun->static_fields->offsetsY;
        if (pSVar36 == (Single__Array *)0x0) goto code_?;
        if ((uint)pSVar36->max_length <= uVar32) goto code_?;
        fVar39 = *(float *)((longlong)pSVar36->vector + lVar33 + -0x20);
        fVar40 = fStack_12 * fVar39 * fVar38 +
                 (fVar19 + fVar20 + (fVar17 + fVar16) * fVar21) * fVar37 * fVar38 + (float)uStack_34
        ;
        fVar41 = fStack_30 * fVar39 * fVar38 + fVar24 * fVar37 * fVar38 + uStack_34._4_4_;
        fVar35 = (fVar28 + fVar29 + (fVar11 - (fVar27 + fVar25)) * fVar18) * fVar39 * fVar38 +
                 (fVar14 + fVar22 + fVar13 * fVar21) * fVar37 * fVar38 + fVar35;
        uStack_42 = CONCAT44(fVar41,fVar40);
        fStack_43 = fVar35;
        VStack_44._0_8_ = uVar10;
        VStack_44.z = fVar26;
        fVar26 = (float)FUN_?(&uStack_42);
        if (fVar15 < fVar26) {
          fVar35 = fVar35 / fVar26;
          uStack_6 = CONCAT44(fVar41 / fVar26,fVar40 / fVar26);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_6._0_4_ = (pVVar5->zeroVector).x;
          uStack_6._4_4_ = (pVVar5->zeroVector).y;
          fVar35 = (pVVar5->zeroVector).z;
        }
        pTVar45 = (this->fields)._._.muzzlePoint;
        fVar26 = uStack_6._4_4_;
        fStack_46 = (float)uStack_6;
        if (pTVar45 == (Transform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_4.x = 0.0;
        VStack_4.y = 0.0;
        VStack_4.z = 0.0;
        pvVar47 = (pTVar45->fields)._._.m_CachedPtr;
        if (pvVar47 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar45,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar47,&VStack_4);
        VStack_3.x = VStack_4.x;
        VStack_3.y = VStack_4.y;
        VStack_3.z = VStack_4.z;
        this_01 = Bullet::Bullet_CreateBullet
                            (PoolEnums__Enum_ShotgunBullet,&VStack_3,0.0,(MethodInfo *)0x0);
        if (this_01 == (Bullet *)0x0) goto code_?;
        pBVar48 = (this_01->fields).onHit;
        b = (Delegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
        pMVar31 = MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_;
        bVar49 = iRam_? != 0;
        (b->fields).method_ptr =
             MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_->
             virtualMethodPointer;
        (b->fields).method = pMVar31;
        (b->fields).m_target = (Object *)this;
        if (bVar49) {
          uVar50 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
          uVar51 = (ulonglong)((uVar50 & 0x1fffff) >> 6);
          do {
            uVar52 = *(ulonglong *)(uVar51 * 8 + 0xADDR);
            puVar53 = (ulonglong *)(uVar51 * 8 + 0xADDR);
            LOCK();
            bVar49 = uVar52 == *puVar53;
            if (bVar49) {
              *puVar53 = uVar52 | 1L << (uVar50 & 0x3f);
            }
            UNLOCK();
          } while (!bVar49);
        }
        uVar54 = pMVar31->parameters_count;
        (b->fields).method_code = b;
        if ((pMVar31->flags & 0x10) == 0) {
          (b->fields).method_code = (b->fields).m_target;
          pDVar55 = (Delegate *)0x18;
          pcVar9 = (b->fields).method_ptr;
          pDVar56 = b;
        }
        else {
          pDVar55 = b;
          if (uVar54 == 2) {
            pcVar9 = FUN_?;
            pDVar56 = (Delegate *)0x18;
          }
          else {
            (b->fields).method_code = (b->fields).m_target;
            pcVar9 = (b->fields).method_ptr;
            pDVar56 = (Delegate *)0x18;
          }
        }
        *(code **)((longlong)&pDVar56->klass + (longlong)&pDVar55->klass) = pcVar9;
        (b->fields).extra_arg = FUN_?;
        pBVar48 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar48,b,(MethodInfo *)0x0);
        if (pBVar48 == (Bullet_OnHitDelegate *)0x0) {
          (this_01->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        }
        else {
          pBVar57 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar48->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar57 = pBVar48;
          }
          if (pBVar57 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (this_01->fields).onHit = pBVar57;
          pBVar57 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar48->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar57 = pBVar48;
          }
          if (pBVar57 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar50 = (uint)((ulonglong)&(this_01->fields).onHit >> 0xc);
          uVar51 = (ulonglong)((uVar50 & 0x1fffff) >> 6);
          do {
            uVar52 = *(ulonglong *)(uVar51 * 8 + 0xADDR);
            puVar53 = (ulonglong *)(uVar51 * 8 + 0xADDR);
            LOCK();
            bVar49 = uVar52 == *puVar53;
            if (bVar49) {
              *puVar53 = uVar52 | 1L << (uVar50 & 0x3f);
            }
            UNLOCK();
          } while (!bVar49);
        }
        if (isLocal != 0) {
          pBVar48 = (this_01->fields).onHitLocal;
          this_02 = (BulletThrowingStar_OnHitDelegate *)
                    FUN_?(TypeInfo__Bullet__OnHitDelegate);
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (this_02,(Object *)this,
                     MethodInfo__PickupItemShotgun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          pBVar48 = (Bullet_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBVar48,(Delegate *)this_02,(MethodInfo *)0x0);
          if (pBVar48 == (Bullet_OnHitDelegate *)0x0) {
            (this_01->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
          }
          else {
            pBVar57 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar48->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar57 = pBVar48;
            }
            if (pBVar57 == (Bullet_OnHitDelegate *)0x0) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (this_01->fields).onHitLocal = pBVar57;
            pBVar57 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar48->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar57 = pBVar48;
            }
            if (pBVar57 == (Bullet_OnHitDelegate *)0x0) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          func_?(&(this_01->fields).onHitLocal);
        }
        pMVar1 = (this->fields)._._.owner;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        pMVar31 = (MethodInfo *)0x0;
        fVar38 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                           (pMVar1,(this->fields).bulletSpeed,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._._.owner;
        fVar37 = (this->fields).maxRange;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        ignoreWoIDs = (HashSet_1_System_Int32_ *)
                      (*(pMVar1->klass->vtable).get_IgnoreWOIDs.methodPtr)();
        aRStack_58[0].m_Direction.x = fStack_46;
        aRStack_58[0].m_Origin.z = VStack_44.z;
        aRStack_58[0].m_Origin.x = VStack_44.x;
        aRStack_58[0].m_Origin.y = VStack_44.y;
        aRStack_58[0].m_Direction.z = fVar35;
        aRStack_58[0].m_Direction.y = fVar26;
        Bullet::Bullet_Fire(this_01,fVar38,fVar37,aRStack_58,ignoreWoIDs,0,(MethodInfo *)0x0);
        uVar32 = uVar32 + 1;
        lVar33 = lVar33 + 4;
      } while (lVar33 < 0x34);
      uVar59._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
      uVar59._4_4_ = (this->fields).currentAmmo.hiddenValue;
      uVar60._0_4_ = (this->fields).currentAmmo.fakeValue;
      uVar60._4_1_ = (this->fields).currentAmmo.inited;
      uVar60._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      auStack_8._0_8_ = uVar59;
      auStack_8._8_8_ = uVar60;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar61 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_InternalDecrypt((ObscuredInt *)auStack_8,(MethodInfo *)0x0);
      fVar21 = (float)Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredInt::ObscuredInt_Encrypt_1
                                (iVar61 + -1,auStack_8._0_4_,(MethodInfo *)0x0);
      auStack_8._4_4_ = fVar21;
      bVar62 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
               ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      fVar21 = (float)auStack_8._8_4_;
      if (bVar62 != 0) {
        fVar21 = (float)(iVar61 + -1);
      }
      auStack_8._8_4_ = fVar21;
      uVar10 = auStack_8._8_8_;
      (this->fields).currentAmmo.currentCryptoKey = auStack_8._0_4_;
      (this->fields).currentAmmo.hiddenValue = auStack_8._4_4_;
      (this->fields).currentAmmo.fakeValue = (int32_t)fVar21;
      (this->fields).currentAmmo.inited = auStack_8[0xc];
      *(undefined3 *)&(this->fields).currentAmmo.field_0xd = auStack_8._13_3_;
      auStack_8._8_8_ = uVar10;
      if (isLocal == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar63 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar63 != (MVGameControllerBase *)0x0) {
          pTVar45 = (this->fields)._._.muzzlePoint;
          this_03 = (pMVar63->fields).audioManager;
          audioSource = (this->fields).audioSource;
          if (pTVar45 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_4.x = 0.0;
            VStack_4.y = 0.0;
            VStack_4.z = 0.0;
            pvVar47 = (pTVar45->fields)._._.m_CachedPtr;
            if (pvVar47 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar45,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar47,&VStack_4);
            if (this_03 != (AudioManager *)0x0) {
              VStack_3.x = VStack_4.x;
              VStack_3.y = VStack_4.y;
              VStack_3.z = VStack_4.z;
code_?:
              AudioManager::AudioManager_Play_2
                        (this_03,StringLiteral_shotgun_fire,audioSource,&VStack_3,
                         (MethodInfo *)0x0);
              (this->fields)._.isFiring = 0;
              return;
            }
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar63 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar63 != (MVGameControllerBase *)0x0) {
          this_03 = (pMVar63->fields).audioManager;
          audioSource = (this->fields).audioSource;
          if (cRam_? == '\0') {
            FUN_?(&
                          UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          pvVar47 = (void *)(*pcRam_?)();
          pOVar64 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar47,
                               UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
                              );
          if (pOVar64 != (Object *)0x0) {
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
            pOVar65 = pOVar64[1].klass;
            if (pOVar65 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar64,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            pvVar47 = (void *)(*pcRam_?)(pOVar65);
            pOVar64 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                      Unmarshal_UnmarshalUnityObject
                                (pvVar47,
                                 UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                );
            if (pOVar64 != (Object *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              VStack_4.x = 0.0;
              VStack_4.y = 0.0;
              VStack_4.z = 0.0;
              pOVar65 = pOVar64[1].klass;
              if (pOVar65 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar64,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pOVar65,&VStack_4);
              if (cRam_? == '\0') {
                FUN_?(&
                              UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              pvVar47 = (void *)(*pcRam_?)();
              pOVar64 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar47,
                                   UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
                                  );
              if (pOVar64 != (Object *)0x0) {
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
                pOVar65 = pOVar64[1].klass;
                if (pOVar65 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar64,(MethodInfo *)0x0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcVar9 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar9;
                pvVar47 = (void *)(*pcRam_?)(pOVar65);
                pTVar45 = (Transform *)
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (pvVar47,
                                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                    );
                if (pTVar45 != (Transform *)0x0) {
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward((Vector3 *)auStack_8,pTVar45,(MethodInfo *)0x0);
                  VStack_3.x = pVVar2->x;
                  VStack_3.y = pVVar2->y;
                  if (this_03 != (AudioManager *)0x0) {
                    VStack_3.y = VStack_4.y + VStack_3.y;
                    VStack_3.x = VStack_4.x + VStack_3.x;
                    VStack_3.z = VStack_4.z + pVVar2->z;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnLocalBulletHit
               (PickupItemShotgun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemShotgun);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar3->fields)._.runtimeEventManagerNetwork;
    if (*(int *)&(TypeInfo__PickupItemShotgun->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PickupItemShotgun);
    }
    if (this_00 != (RuntimeEventManager *)0x0) {
      VStack_4.point.x = (voxelHit->point).x;
      VStack_4.point.y = (voxelHit->point).y;
      VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
      VStack_4.normal.y = (voxelHit->normal).y;
      VStack_4.normal.z = (voxelHit->normal).z;
      VStack_4.cubePos = voxelHit->cubePos;
      VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
      VStack_4.face = voxelHit->face;
      VStack_4.isCubeHit = voxelHit->isCubeHit;
      VStack_4._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
      VStack_4.woId = voxelHit->woId;
      VStack_4._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
      VStack_4.cube = voxelHit->cube;
      VStack_4.distance = voxelHit->distance;
      VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
      VStack_4.collider = voxelHit->collider;
      VStack_4.transform = voxelHit->transform;
      VStack_4.interactionFlags = voxelHit->interactionFlags;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,&VStack_4,TypeInfo__PickupItemShotgun->static_fields->hitDamage,
                 (MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar5,voxelHit->woId,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
          this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar5,id,(MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClient *)0x0) {
            pIVar6 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                               (this_02,(MethodInfo *)0x0);
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
            if (pIVar6 != (InteractionDataHandlerBase *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pIVar6->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar2 != (MVNetworkGame *)0x0) &&
                    (this_01 = (pMVar2->fields).playerContainer,
                    this_01 != (MVPlayerContainer *)0x0)) &&
                   (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (this_01,(MethodInfo *)0x0), this_03 != (MVLocalPlayer *)0x0
                   )) {
                  bVar7 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                    ((MVPlayer *)this_03,this_02,(MethodInfo *)0x0);
                  if (bVar7 != 0) {
                    return;
                  }
                  fVar8 = (this->fields).impulseStrength;
                  uVar9 = (lineOfFire->m_Direction).x;
                  uVar10 = (lineOfFire->m_Direction).y;
                  IStack_11.impulse.y = fVar8 * (lineOfFire->m_Direction).z;
                  IStack_12.interactionType = 0;
                  IStack_12.playerKilledByType = 0;
                  IStack_12._18_2_ = 0;
                  IStack_12.damage = 0.0;
                  IStack_12.impulse.x = 0.0;
                  IStack_12.impulse.y = 0.0;
                  IStack_12.impulse.z = 0.0;
                  IStack_11.impulse.x = fVar8 * (float)uVar10;
                  IStack_11.damage = fVar8 * (float)uVar9;
                  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                            (&IStack_12,
                             (InteractionPackageType__Enum)
                             CONCAT71((int7)((ulonglong)this_02 >> 8),7),0.0,(Vector3 *)&IStack_11,
                             (PlayerKilledByType__Enum)
                             CONCAT71((int7)((ulonglong)in_stack_13 >> 8),0xc),
                             (MethodInfo *)0x0);
                  IStack_11.interactionType = IStack_12.interactionType;
                  IStack_11.playerKilledByType = IStack_12.playerKilledByType;
                  IStack_11._18_2_ = IStack_12._18_2_;
                  IStack_11.damage = IStack_12.damage;
                  IStack_11.impulse.x = IStack_12.impulse.x;
                  IStack_11.impulse.y = IStack_12.impulse.y;
                  IStack_11.impulse.z = IStack_12.impulse.z;
                  (*(pIVar6->klass->vtable).__unknown_1.methodPtr)
                            (pIVar6,(this->fields)._._.owner,&IStack_11,0,
                             (pIVar6->klass->vtable).__unknown_1.method);
                  return;
                }
                goto code_?;
              }
            }
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_ResetAmmo
               (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (*(this->klass->vtable).get_MaxAmmo.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar4 = 0;
  if (bVar3 != 0) {
    iVar4 = value;
  }
  uStack_5 = (ulonglong)CONCAT14(1,iVar4);
  (this->fields).currentAmmo.currentCryptoKey = iVar2;
  (this->fields).currentAmmo.hiddenValue = iVar1;
  (this->fields).currentAmmo.fakeValue = (undefined4)uStack_5;
  (this->fields).currentAmmo.inited = uStack_5._4_1_;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uStack_5._5_3_;
  return;
}


/* PickupItemShotgun() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemShotgun);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&_1D938725B43024CD1DE507AE64F4E512BE661FABD0876BE9FF1D6BBCE7A2774A_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_6D14F76A35801E92A153C606F99E1BAEAD19C4A687AD608FCD9FADCBB41E3C25_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  IStack_2.interactionType = 0;
  IStack_2.playerKilledByType = 0;
  IStack_2._18_2_ = 0;
  IStack_2.damage = 0.0;
  IStack_2.impulse.x = 0.0;
  IStack_2.impulse.y = 0.0;
  IStack_2.impulse.z = 0.0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (&IStack_2,(InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)in_RDX >> 8),7),0.0
             ,&VStack_1,CONCAT31((int3)((uint)in_stack_3 >> 8),0xc),
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__PickupItemShotgun->static_fields->hitDamage = IStack_2.damage;
  pSVar4 = (Single__Array *)FUN_?(TypeInfo__System__Single,5);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pSVar4,
             __1D938725B43024CD1DE507AE64F4E512BE661FABD0876BE9FF1D6BBCE7A2774A_Field,
             (MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  TypeInfo__PickupItemShotgun->static_fields->offsetsX = pSVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&TypeInfo__PickupItemShotgun->static_fields->offsetsX >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pSVar4 = (Single__Array *)FUN_?(TypeInfo__System__Single,5);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pSVar4,
             __6D14F76A35801E92A153C606F99E1BAEAD19C4A687AD608FCD9FADCBB41E3C25_Field,
             (MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  TypeInfo__PickupItemShotgun->static_fields->offsetsY = pSVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&TypeInfo__PickupItemShotgun->static_fields->offsetsY >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* PickupItemShotgun() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun__ctor
               (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_1._4_4_ =
       Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
       ObscuredInt_Encrypt(0x18,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uVar2 = 0;
  uStack_1._0_4_ =
       (float)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uVar2 = 0x18;
  }
  uStack_4 = (ulonglong)CONCAT14(1,uVar2);
  (this->fields).spread = 0.1;
  (this->fields).impulseStrength = 700.0;
  *(undefined8 *)&(this->fields).maxAmmo = uStack_1;
  (this->fields).maxAmmo.fakeValue = (undefined4)uStack_4;
  (this->fields).maxAmmo.inited = uStack_4._4_1_;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uStack_4._5_3_;
  (this->fields).maxRange = 50.0;
  (this->fields).bulletSpeed = 100.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar5 = _UNK_?;
  uVar6 = _UNK_?;
  uVar7 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar8 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar2;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar7 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar2;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar8 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar2;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar7 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar2;
  _UNK_? = (undefined4)uVar6;
  _UNK_? = SUB84(uVar6,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar7 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar2;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar7;
  (this->fields)._.crossHairCannotFireHigh.a = (float)uVar2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = 0.0;
  uStack_1._4_1_ = 0;
  uStack_1._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uStack_1._0_4_ = 1.0;
    uStack_1._4_1_ = 0;
    uStack_1._5_3_ = 0;
  }
  bVar9 = iRam_? != 0;
  pPVar10 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar10->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar10->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar10->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar10->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uStack_1;
  (this->fields)._.fireInterval.inited = uStack_1._4_1_;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x15 = uStack_1._5_3_;
  if (bVar9) {
    uVar11 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar13 == *puVar14;
      if (bVar9) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar9 = iRam_? != 0;
  (this->fields)._._.meshRenderers = pMVar15;
  if (bVar9) {
    uVar11 = (uint)((ulonglong)&(this->fields)._._.meshRenderers >> 0xc);
    puVar14 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar13 = *puVar14;
      LOCK();
      uVar12 = *puVar14;
      if (uVar13 == uVar12) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (uVar13 != uVar12);
  }
  bVar9 = cRam_? == '\0';
  (this->fields)._._._AbleToFire_k__BackingField = 1;
  if (bVar9) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar16 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar17 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar18 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar19 = ppMVar17;
    if (lVar18 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar18 = lRam_?;
    }
    else {
      do {
        uVar11 = (uint)ppMVar19;
        LOCK();
        bVar9 = uVar11 != uRam_?;
        uVar20 = uVar11;
        uVar21 = uVar11 + 1;
        if (bVar9) {
          uVar20 = uRam_?;
          uVar21 = uRam_?;
        }
        uRam_? = uVar21;
        UNLOCK();
      } while ((bVar9) &&
              (ppMVar19 = (MethodInfo **)(ulonglong)uVar20, uVar11 = uVar20, uVar20 != 2));
      while (uVar11 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar11 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar18;
    puVar22 = &(pOVar16->_1).field_0x1c;
    LOCK();
    bVar9 = *(int *)puVar22 == 1;
    if (bVar9) {
      *(undefined4 *)puVar22 = 1;
    }
    uVar11 = uRam_?;
    UNLOCK();
    if (bVar9) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar11 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                    (0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar23 = &(pOVar16->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar9 = *puVar23 == 1;
      if (bVar9) {
        *puVar23 = 1;
      }
      uVar11 = uRam_?;
      UNLOCK();
      if (bVar9) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar11 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar11 = GetCurrentThreadId();
        psVar24 = &(pOVar16->_1).cctor_thread;
        LOCK();
        bVar9 = (ulonglong)uVar11 == *psVar24;
        if (bVar9) {
          *psVar24 = (ulonglong)uVar11;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
        while( true ) {
          puVar22 = &(pOVar16->_1).field_0x1c;
          LOCK();
          bVar9 = *(int *)puVar22 == 1;
          if (bVar9) {
            *(undefined4 *)puVar22 = 1;
          }
          UNLOCK();
          if (bVar9) break;
          LOCK();
          lVar18._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
          lVar18._4_4_ = (pOVar16->_1).cctor_started;
          if (lVar18 == 0) {
            (pOVar16->_1).initializationExceptionGCHandle = 0;
            (pOVar16->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar18 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar11 = GetCurrentThreadId();
        LOCK();
        (pOVar16->_1).cctor_thread = (ulonglong)uVar11;
        UNLOCK();
        LOCK();
        (pOVar16->_1).cctor_finished_or_no_cctor = 1;
        uVar11 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar11 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pOVar16->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar16);
          ppMVar19 = ppMVar17;
          pIVar25 = (Il2CppClass *)pOVar16;
code_?:
          do {
            if (ppMVar19 == (MethodInfo **)0x0) {
              FUN_?(pIVar25);
              if (pIVar25->field_count != 0) {
                ppMVar19 = pIVar25->methods;
                pMVar26 = *ppMVar19;
code_?:
                if (pMVar26 != (MethodInfo *)0x0) {
                  if ((*pMVar26->name == '.') && ((pMVar26->flags & 0x800) != 0)) {
                    ppMVar27 = ppMVar17;
                    while (pcVar28 = (char *)((longlong)ppMVar27 + 0xADDR),
                          ppMVar27 = (MethodInfo **)((longlong)ppMVar27 + 1),
                          *pcVar28 == (pMVar26->name + -1)[(longlong)ppMVar27]) {
                      if (ppMVar27 == (MethodInfo **)0x7) {
                        FUN_?(pMVar26,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar19 = ppMVar19 + 1;
              if (ppMVar19 < pIVar25->methods + pIVar25->field_count) {
                pMVar26 = *ppMVar19;
                goto code_?;
              }
            }
            pIVar25 = pIVar25->parent;
            ppMVar19 = ppMVar17;
          } while (pIVar25 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar16->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar16->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar29._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
      lVar29._4_4_ = (pOVar16->_1).cctor_started;
      if (lVar29 != 0) {
        uVar7._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
        uVar7._4_4_ = (pOVar16->_1).cctor_started;
        uVar7 = FUN_?(uVar7);
        FUN_?(uVar7,0);
        FUN_?(0,0,0,0,0);
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
    }
  }
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_IsAmmoDepleted
               (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).currentAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  if (0 < iVar4) {
    return 0;
  }
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar5 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_MaxAmmo
                  (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).maxAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).maxAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).maxAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).maxAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  UNRECOVERED_JUMPTABLE = (this->klass->vtable).CalculateMaxAmmo.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (*UNRECOVERED_JUMPTABLE)
                    (this,(ulonglong)uVar4,(this->klass->vtable).CalculateMaxAmmo.method,
                     UNRECOVERED_JUMPTABLE);
  return iVar5;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_Quantity
                  (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).currentAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  return iVar4;
}

