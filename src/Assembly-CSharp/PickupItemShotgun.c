
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnBulletHit(PickupItemShotgun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  uVar1 = (undefined4)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_);
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
    iVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent(pMVar3,voxelHit->woId,int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pMVar19 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(pMVar3,iVar18,(MethodInfo *)0x0);
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
        if ((pcRam_? == (code *)0x0) && (pcVar26 = (code *)FUN_?(&UNK_?), pcVar26 == (code *)0x0)) {
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
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1(PoolEnums__Enum_NormalBulletSparks,&VStack_24,&QStack_25,(Nullable_1_Single_)0x0,&NStack_23,(MethodInfo *)0x0);
        return;
      }
      pMVar27 = (this->fields)._._.owner;
      if ((pMVar27 != (MVPickupOwner *)0x0) && (pMVar28 = (pMVar27->fields)._.worldObjectParent, pMVar28 != (MVWorldObjectClient *)0x0)) {
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
            FUN_?(&QStack_25,TypeInfo__IBulletImpactVisualizer,lVar20,&uStack_4,&QStack_25,CONCAT44(uVar1,iVar18),fVar21);
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

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnFire(PickupItemShotgun *this,bool isLocal,MethodInfo *method)

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
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized(&VStack_3,&(pMVar1->fields).lookDirection,method);
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
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
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
    fStack_11 = (float)auStack_8._0_4_;
    fVar12 = (float)auStack_8._8_4_ + (float)auStack_8._8_4_;
    fVar13 = (float)auStack_8._4_4_ + (float)auStack_8._4_4_;
    fVar14 = (float)auStack_8._0_4_ * ((float)auStack_8._0_4_ + (float)auStack_8._0_4_);
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar15 = (float)auStack_8._0_4_ * fVar12;
    VStack_3.x = (pVVar5->rightVector).x;
    VStack_3.y = (pVVar5->rightVector).y;
    fVar16 = (float)auStack_8._4_4_ * fVar13;
    fVar17 = (float)auStack_8._12_4_ * fVar13;
    fVar18 = (float)auStack_8._12_4_ * ((float)auStack_8._0_4_ + (float)auStack_8._0_4_);
    fVar19 = (1.0 - ((float)auStack_8._8_4_ * fVar12 + fVar16)) * VStack_3.x;
    fVar20 = ((float)auStack_8._0_4_ * fVar13 - (float)auStack_8._12_4_ * fVar12) * VStack_3.y;
    fVar21 = (pVVar5->rightVector).z;
    fVar22 = (fVar18 + (float)auStack_8._4_4_ * fVar12) * VStack_3.y;
    fStack_23 = (1.0 - ((float)auStack_8._8_4_ * fVar12 + fVar14)) * VStack_3.y + ((float)auStack_8._12_4_ * fVar12 + (float)auStack_8._0_4_ * fVar13) * VStack_3.x + ((float)auStack_8._4_4_ * fVar12 - fVar18) * fVar21;
    fVar12 = (fVar15 - fVar17) * VStack_3.x;
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
    fVar13 = (pVVar5->upVector).z;
    fVar18 = (float)auStack_8._4_4_ + (float)auStack_8._4_4_;
    fVar25 = (float)auStack_8._0_4_ * ((float)auStack_8._0_4_ + (float)auStack_8._0_4_);
    fVar26 = (float)auStack_8._12_4_ * ((float)auStack_8._0_4_ + (float)auStack_8._0_4_);
    fVar27 = (float)auStack_8._4_4_ * fVar18;
    fVar28 = ((float)auStack_8._0_4_ * fVar24 - (float)auStack_8._12_4_ * fVar18) * VStack_3.x;
    fStack_11 = (1.0 - ((float)auStack_8._8_4_ * fVar24 + fVar27)) * VStack_3.x + ((float)auStack_8._0_4_ * fVar18 - (float)auStack_8._12_4_ * fVar24) * VStack_3.y + ((float)auStack_8._12_4_ * fVar18 + (float)auStack_8._0_4_ * fVar24) * fVar13;
    fVar29 = (fVar26 + (float)auStack_8._4_4_ * fVar24) * VStack_3.y;
    fStack_30 = (1.0 - ((float)auStack_8._8_4_ * fVar24 + fVar25)) * VStack_3.y + ((float)auStack_8._12_4_ * fVar24 + (float)auStack_8._0_4_ * fVar18) * VStack_3.x + ((float)auStack_8._4_4_ * fVar24 - fVar26) * fVar13;
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      pMVar31 = (MethodInfo *)0x0;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play(this_00,1,(MethodInfo *)0x0);
      fVar18 = fStack_23;
      uVar32 = 0;
      lVar33 = 0x20;
      do {
        pMVar1 = (this->fields)._._.owner;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        uVar10._0_4_ = (pMVar1->fields).lookOrigin.x;
        uVar10._4_4_ = (pMVar1->fields).lookOrigin.y;
        fVar24 = (pMVar1->fields).lookOrigin.z;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized((Vector3 *)auStack_8,&(pMVar1->fields).lookDirection,pMVar31);
        uStack_34._0_4_ = pVVar2->x;
        uStack_34._4_4_ = pVVar2->y;
        fVar26 = pVVar2->z;
        if (*(int *)&(TypeInfo__PickupItemShotgun->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar35 = TypeInfo__PickupItemShotgun->static_fields->offsetsX;
        if (pSVar35 == (Single__Array *)0x0) goto code_?;
        if ((uint)pSVar35->max_length <= uVar32) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar36 = *(float *)((longlong)pSVar35->vector + lVar33 + -0x20);
        fVar37 = (this->fields).spread;
        pSVar35 = TypeInfo__PickupItemShotgun->static_fields->offsetsY;
        if (pSVar35 == (Single__Array *)0x0) goto code_?;
        if ((uint)pSVar35->max_length <= uVar32) goto code_?;
        fVar38 = *(float *)((longlong)pSVar35->vector + lVar33 + -0x20);
        fVar39 = fStack_11 * fVar38 * fVar37 + (fVar19 + fVar20 + (fVar17 + fVar15) * fVar21) * fVar36 * fVar37 + (float)uStack_34;
        fVar40 = fStack_30 * fVar38 * fVar37 + fVar18 * fVar36 * fVar37 + uStack_34._4_4_;
        fVar26 = (fVar28 + fVar29 + (1.0 - (fVar27 + fVar25)) * fVar13) * fVar38 * fVar37 + (fVar12 + fVar22 + (1.0 - (fVar16 + fVar14)) * fVar21) * fVar36 * fVar37 + fVar26;
        uStack_41 = CONCAT44(fVar40,fVar39);
        fStack_42 = fVar26;
        VStack_43._0_8_ = uVar10;
        VStack_43.z = fVar24;
        fVar24 = (float)FUN_?(&uStack_41);
        if (1e-05 < fVar24) {
          fVar26 = fVar26 / fVar24;
          uStack_6 = CONCAT44(fVar40 / fVar24,fVar39 / fVar24);
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
          fVar26 = (pVVar5->zeroVector).z;
        }
        pTVar44 = (this->fields)._._.muzzlePoint;
        fVar24 = uStack_6._4_4_;
        fStack_45 = (float)uStack_6;
        if (pTVar44 == (Transform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_4.x = 0.0;
        VStack_4.y = 0.0;
        VStack_4.z = 0.0;
        pvVar46 = (pTVar44->fields)._._.m_CachedPtr;
        if (pvVar46 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar44,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar46,&VStack_4);
        VStack_3.x = VStack_4.x;
        VStack_3.y = VStack_4.y;
        VStack_3.z = VStack_4.z;
        this_01 = Bullet::Bullet_CreateBullet(PoolEnums__Enum_ShotgunBullet,&VStack_3,0.0,(MethodInfo *)0x0);
        if (this_01 == (Bullet *)0x0) goto code_?;
        pBVar47 = (this_01->fields).onHit;
        b = (Delegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
        pMVar31 = MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_;
        bVar48 = iRam_? != 0;
        (b->fields).method_ptr = MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_->virtualMethodPointer;
        (b->fields).method = pMVar31;
        (b->fields).m_target = (Object *)this;
        if (bVar48) {
          uVar49 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
          uVar50 = (ulonglong)((uVar49 & 0x1fffff) >> 6);
          do {
            uVar51 = *(ulonglong *)(uVar50 * 8 + 0xADDR);
            puVar52 = (ulonglong *)(uVar50 * 8 + 0xADDR);
            LOCK();
            bVar48 = uVar51 == *puVar52;
            if (bVar48) {
              *puVar52 = uVar51 | 1L << (uVar49 & 0x3f);
            }
            UNLOCK();
          } while (!bVar48);
        }
        uVar53 = pMVar31->parameters_count;
        (b->fields).method_code = b;
        if ((pMVar31->flags & 0x10) == 0) {
          (b->fields).method_code = (b->fields).m_target;
          pDVar54 = (Delegate *)0x18;
          pcVar9 = (b->fields).method_ptr;
          pDVar55 = b;
        }
        else {
          pDVar54 = b;
          if (uVar53 == 2) {
            pcVar9 = FUN_?;
            pDVar55 = (Delegate *)0x18;
          }
          else {
            (b->fields).method_code = (b->fields).m_target;
            pcVar9 = (b->fields).method_ptr;
            pDVar55 = (Delegate *)0x18;
          }
        }
        *(code **)((longlong)&pDVar55->klass + (longlong)&pDVar54->klass) = pcVar9;
        (b->fields).extra_arg = FUN_?;
        pBVar47 = (Bullet_OnHitDelegate *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pBVar47,b,(MethodInfo *)0x0);
        if (pBVar47 == (Bullet_OnHitDelegate *)0x0) {
          (this_01->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        }
        else {
          pBVar56 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar47->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar56 = pBVar47;
          }
          if (pBVar56 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (this_01->fields).onHit = pBVar56;
          pBVar56 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar47->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar56 = pBVar47;
          }
          if (pBVar56 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar49 = (uint)((ulonglong)&(this_01->fields).onHit >> 0xc);
          uVar50 = (ulonglong)((uVar49 & 0x1fffff) >> 6);
          do {
            uVar51 = *(ulonglong *)(uVar50 * 8 + 0xADDR);
            puVar52 = (ulonglong *)(uVar50 * 8 + 0xADDR);
            LOCK();
            bVar48 = uVar51 == *puVar52;
            if (bVar48) {
              *puVar52 = uVar51 | 1L << (uVar49 & 0x3f);
            }
            UNLOCK();
          } while (!bVar48);
        }
        if (isLocal != 0) {
          pBVar47 = (this_01->fields).onHitLocal;
          this_02 = (BulletThrowingStar_OnHitDelegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor(this_02,(Object *)this,MethodInfo__PickupItemShotgun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_,(MethodInfo *)0x0);
          pBVar47 = (Bullet_OnHitDelegate *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pBVar47,(Delegate *)this_02,(MethodInfo *)0x0);
          if (pBVar47 == (Bullet_OnHitDelegate *)0x0) {
            (this_01->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
          }
          else {
            pBVar56 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar47->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar56 = pBVar47;
            }
            if (pBVar56 == (Bullet_OnHitDelegate *)0x0) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (this_01->fields).onHitLocal = pBVar56;
            pBVar56 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar47->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar56 = pBVar47;
            }
            if (pBVar56 == (Bullet_OnHitDelegate *)0x0) {
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
        fVar37 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed(pMVar1,(this->fields).bulletSpeed,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._._.owner;
        fVar36 = (this->fields).maxRange;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        ignoreWoIDs = (HashSet_1_System_Int32_ *)(*(pMVar1->klass->vtable).get_IgnoreWOIDs.methodPtr)();
        aRStack_57[0].m_Direction.x = fStack_45;
        aRStack_57[0].m_Origin.z = VStack_43.z;
        aRStack_57[0].m_Origin.x = VStack_43.x;
        aRStack_57[0].m_Origin.y = VStack_43.y;
        aRStack_57[0].m_Direction.z = fVar26;
        aRStack_57[0].m_Direction.y = fVar24;
        Bullet::Bullet_Fire(this_01,fVar37,fVar36,aRStack_57,ignoreWoIDs,0,(MethodInfo *)0x0);
        uVar32 = uVar32 + 1;
        lVar33 = lVar33 + 4;
      } while (lVar33 < 0x34);
      uVar58._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
      uVar58._4_4_ = (this->fields).currentAmmo.hiddenValue;
      uVar59._0_4_ = (this->fields).currentAmmo.fakeValue;
      uVar59._4_1_ = (this->fields).currentAmmo.inited;
      uVar59._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_8._0_8_ = uVar58;
      auStack_8._8_8_ = uVar59;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar60 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_InternalDecrypt((ObscuredInt *)auStack_8,(MethodInfo *)0x0);
      fVar21 = (float)Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_Encrypt_1(iVar60 + -1,auStack_8._0_4_,(MethodInfo *)0x0);
      auStack_8._4_4_ = fVar21;
      bVar61 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      fVar21 = (float)auStack_8._8_4_;
      if (bVar61 != 0) {
        fVar21 = (float)(iVar60 + -1);
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
        pMVar62 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar62 != (MVGameControllerBase *)0x0) {
          pTVar44 = (this->fields)._._.muzzlePoint;
          this_03 = (pMVar62->fields).audioManager;
          audioSource = (this->fields).audioSource;
          if (pTVar44 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_4.x = 0.0;
            VStack_4.y = 0.0;
            VStack_4.z = 0.0;
            pvVar46 = (pTVar44->fields)._._.m_CachedPtr;
            if (pvVar46 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar44,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar46,&VStack_4);
            if (this_03 != (AudioManager *)0x0) {
              VStack_3.x = VStack_4.x;
              VStack_3.y = VStack_4.y;
              VStack_3.z = VStack_4.z;
code_?:
              AudioManager::AudioManager_Play_2(this_03,StringLiteral_shotgun_fire,audioSource,&VStack_3,(MethodInfo *)0x0);
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
        pMVar62 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar62 != (MVGameControllerBase *)0x0) {
          this_03 = (pMVar62->fields).audioManager;
          audioSource = (this->fields).audioSource;
          if (cRam_? == '\0') {
            FUN_?(&UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          pvVar46 = (void *)(*pcRam_?)();
          pOVar63 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar46,UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__);
          if (pOVar63 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
              LOCK();
              UNLOCK();
              FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar64 = pOVar63[1].klass;
            if (pOVar64 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar63,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            pvVar46 = (void *)(*pcRam_?)(pOVar64);
            pOVar63 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar46,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
            if (pOVar63 != (Object *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              VStack_4.x = 0.0;
              VStack_4.y = 0.0;
              VStack_4.z = 0.0;
              pOVar64 = pOVar63[1].klass;
              if (pOVar64 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar63,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pOVar64,&VStack_4);
              if (cRam_? == '\0') {
                FUN_?(&UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              pvVar46 = (void *)(*pcRam_?)();
              pOVar63 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar46,UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__);
              if (pOVar63 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                  LOCK();
                  UNLOCK();
                  FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar64 = pOVar63[1].klass;
                if (pOVar64 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar63,(MethodInfo *)0x0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcVar9 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar9;
                pvVar46 = (void *)(*pcRam_?)(pOVar64);
                pTVar44 = (Transform *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar46,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                if (pTVar44 != (Transform *)0x0) {
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward((Vector3 *)auStack_8,pTVar44,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnLocalBulletHit(PickupItemShotgun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_);
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
  if (((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) && (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 != (WorldNetwork *)0x0)) {
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
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube(this_00,&VStack_4,TypeInfo__PickupItemShotgun->static_fields->hitDamage,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent(pMVar5,voxelHit->woId,int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_);
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
          this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(pMVar5,id,(MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClient *)0x0) {
            pIVar6 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase(this_02,(MethodInfo *)0x0);
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
                if (((pMVar2 != (MVNetworkGame *)0x0) && (this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) && (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0), this_03 != (MVLocalPlayer *)0x0)) {
                  bVar7 = MVPlayer::MVPlayer_IsOnSameTeam_1((MVPlayer *)this_03,this_02,(MethodInfo *)0x0);
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
                  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5(&IStack_12,(InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)this_02 >> 8),7),0.0,(Vector3 *)&IStack_11,(PlayerKilledByType__Enum)CONCAT71((int7)((ulonglong)in_stack_13 >> 8),0xc),(MethodInfo *)0x0);
                  IStack_11.interactionType = IStack_12.interactionType;
                  IStack_11.playerKilledByType = IStack_12.playerKilledByType;
                  IStack_11._18_2_ = IStack_12._18_2_;
                  IStack_11.damage = IStack_12.damage;
                  IStack_11.impulse.x = IStack_12.impulse.x;
                  IStack_11.impulse.y = IStack_12.impulse.y;
                  IStack_11.impulse.z = IStack_12.impulse.z;
                  (*(pIVar6->klass->vtable).__unknown_1.methodPtr)(pIVar6,(this->fields)._._.owner,&IStack_11,0,(pIVar6->klass->vtable).__unknown_1.method);
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

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_ResetAmmo(PickupItemShotgun *this,MethodInfo *method)

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
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
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
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
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
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5(&IStack_2,(InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)in_RDX >> 8),7),0.0,&VStack_1,CONCAT31((int3)((uint)in_stack_3 >> 8),0xc),(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__PickupItemShotgun->static_fields->hitDamage = IStack_2.damage;
  pSVar4 = (Single__Array *)FUN_?(TypeInfo__System__Single,5);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)pSVar4,__1D938725B43024CD1DE507AE64F4E512BE661FABD0876BE9FF1D6BBCE7A2774A_Field,(MethodInfo *)0x0);
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
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)pSVar4,__6D14F76A35801E92A153C606F99E1BAEAD19C4A687AD608FCD9FADCBB41E3C25_Field,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun__ctor(PickupItemShotgun *this,MethodInfo *method)

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
  uStack_1._4_4_ = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_Encrypt(0x18,(MethodInfo *)0x0);
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
  uStack_1._0_4_ = (float)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
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
  (this->fields)._.crossHairCannotFireLow.r = 1.0;
  (this->fields)._.crossHairCannotFireLow.g = 0.0;
  (this->fields)._.crossHairCannotFireLow.b = 0.0;
  (this->fields)._.crossHairCannotFireLow.a = 1.0;
  (this->fields)._.crossHairCanFire.r = 0.0;
  (this->fields)._.crossHairCanFire.g = 1.0;
  (this->fields)._.crossHairCanFire.b = 0.0;
  (this->fields)._.crossHairCanFire.a = 1.0;
  (this->fields)._.crossHairCannotFireHigh.r = 1.0;
  (this->fields)._.crossHairCannotFireHigh.g = 0.92156863;
  (this->fields)._.crossHairCannotFireHigh.b = 0.015686275;
  (this->fields)._.crossHairCannotFireHigh.a = 1.0;
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
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_InternalEncrypt(1.0,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uStack_1._0_4_ = 1.0;
    uStack_1._4_1_ = 0;
    uStack_1._5_3_ = 0;
  }
  bVar5 = iRam_? != 0;
  pPVar6 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar6->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar6->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar6->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar6->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uStack_1;
  (this->fields)._.fireInterval.inited = uStack_1._4_1_;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x15 = uStack_1._5_3_;
  if (bVar5) {
    uVar7 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar9 == *puVar10;
      if (bVar5) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar11 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar5 = iRam_? != 0;
  (this->fields)._._.meshRenderers = pMVar11;
  if (bVar5) {
    uVar7 = (uint)((ulonglong)&(this->fields)._._.meshRenderers >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar10;
      LOCK();
      uVar8 = *puVar10;
      if (uVar9 == uVar8) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar8);
  }
  bVar5 = cRam_? == '\0';
  (this->fields)._._._AbleToFire_k__BackingField = 1;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar12 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar13 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar14 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar15 = ppMVar13;
    if (lVar14 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar14 = lRam_?;
    }
    else {
      do {
        uVar7 = (uint)ppMVar15;
        LOCK();
        bVar5 = uVar7 != uRam_?;
        uVar16 = uVar7;
        uVar17 = uVar7 + 1;
        if (bVar5) {
          uVar16 = uRam_?;
          uVar17 = uRam_?;
        }
        uRam_? = uVar17;
        UNLOCK();
      } while ((bVar5) && (ppMVar15 = (MethodInfo **)(ulonglong)uVar16, uVar7 = uVar16, uVar16 != 2));
      while (uVar7 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar7 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar14;
    puVar18 = &(pOVar12->_1).field_0x1c;
    LOCK();
    bVar5 = *(int *)puVar18 == 1;
    if (bVar5) {
      *(undefined4 *)puVar18 = 1;
    }
    uVar7 = uRam_?;
    UNLOCK();
    if (bVar5) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar7 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar19 = &(pOVar12->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar5 = *puVar19 == 1;
      if (bVar5) {
        *puVar19 = 1;
      }
      uVar7 = uRam_?;
      UNLOCK();
      if (bVar5) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar7 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar7 = GetCurrentThreadId();
        psVar20 = &(pOVar12->_1).cctor_thread;
        LOCK();
        bVar5 = (ulonglong)uVar7 == *psVar20;
        if (bVar5) {
          *psVar20 = (ulonglong)uVar7;
        }
        UNLOCK();
        if (bVar5) {
          return;
        }
        while( true ) {
          puVar18 = &(pOVar12->_1).field_0x1c;
          LOCK();
          bVar5 = *(int *)puVar18 == 1;
          if (bVar5) {
            *(undefined4 *)puVar18 = 1;
          }
          UNLOCK();
          if (bVar5) break;
          LOCK();
          lVar14._0_4_ = (pOVar12->_1).initializationExceptionGCHandle;
          lVar14._4_4_ = (pOVar12->_1).cctor_started;
          if (lVar14 == 0) {
            (pOVar12->_1).initializationExceptionGCHandle = 0;
            (pOVar12->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar14 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar7 = GetCurrentThreadId();
        LOCK();
        (pOVar12->_1).cctor_thread = (ulonglong)uVar7;
        UNLOCK();
        LOCK();
        (pOVar12->_1).cctor_finished_or_no_cctor = 1;
        uVar7 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar7 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pOVar12->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar12);
          ppMVar15 = ppMVar13;
          pIVar21 = (Il2CppClass *)pOVar12;
code_?:
          do {
            if (ppMVar15 == (MethodInfo **)0x0) {
              FUN_?(pIVar21);
              if (pIVar21->field_count != 0) {
                ppMVar15 = pIVar21->methods;
                pMVar22 = *ppMVar15;
code_?:
                if (pMVar22 != (MethodInfo *)0x0) {
                  if ((*pMVar22->name == '.') && ((pMVar22->flags & 0x800) != 0)) {
                    ppMVar23 = ppMVar13;
                    while (ppMVar24 = ppMVar23 + 0x3052af3c, ppMVar23 = (MethodInfo **)((longlong)ppMVar23 + 1), *(char *)ppMVar24 == (pMVar22->name + -1)[(longlong)ppMVar23]) {
                      if (ppMVar23 == (MethodInfo **)0x7) {
                        FUN_?(pMVar22,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar15 = ppMVar15 + 1;
              if (ppMVar15 < pIVar21->methods + pIVar21->field_count) {
                pMVar22 = *ppMVar15;
                goto code_?;
              }
            }
            pIVar21 = pIVar21->parent;
            ppMVar15 = ppMVar13;
          } while (pIVar21 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar12->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar12->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar25._0_4_ = (pOVar12->_1).initializationExceptionGCHandle;
      lVar25._4_4_ = (pOVar12->_1).cctor_started;
      if (lVar25 != 0) {
        uVar26._0_4_ = (pOVar12->_1).initializationExceptionGCHandle;
        uVar26._4_4_ = (pOVar12->_1).cctor_started;
        uVar26 = FUN_?(uVar26);
        FUN_?(uVar26,0);
        FUN_?(0,0,0,0,0);
        pcVar27 = (code *)swi(3);
        (*pcVar27)();
        return;
      }
    }
  }
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_IsAmmoDepleted(PickupItemShotgun *this,MethodInfo *method)

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
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  if (0 < iVar4) {
    return 0;
  }
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)(this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar5 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_MaxAmmo(PickupItemShotgun *this,MethodInfo *method)

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
  uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  UNRECOVERED_JUMPTABLE = (this->klass->vtable).CalculateMaxAmmo.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (*UNRECOVERED_JUMPTABLE)(this,(ulonglong)uVar4,(this->klass->vtable).CalculateMaxAmmo.method,UNRECOVERED_JUMPTABLE);
  return iVar5;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_Quantity(PickupItemShotgun *this,MethodInfo *method)

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
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  return iVar4;
}

