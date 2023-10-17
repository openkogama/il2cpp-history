
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnBulletHit
               (PickupItemShotgun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__PickupItemShotgun);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      iVar3 = func_?();
      if (iVar3 == 0) {
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffe8,voxelHit._8_12_,(MethodInfo *)0x0);
        position.y = voxelHit.point.x;
        position.x = (float)in_stack_5;
        position.z = voxelHit.point.y;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_NormalBulletSparks,position,*pQVar4,
                   (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
        return;
      }
      pMVar6 = (this->fields)._._.owner;
      if ((pMVar6 != (MVPickupOwner *)0x0) &&
         ((pMVar6->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
        if ((TypeInfo__PickupItemShotgun->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (pMVar2 != (MVWorldObject *)0x0) {
          iVar3 = func_?();
          if (iVar3 != 0) {
            iVar3 = func_?();
            if (iVar3 != 0) {
              func_?(0,TypeInfo__IBulletImpactVisualizer,iVar3,in_stack_5,
                              voxelHit.point.x,voxelHit.point.y,voxelHit.point.z,voxelHit.normal.x,
                              voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,
                              voxelHit._28_4_,voxelHit.face,voxelHit._36_4_,voxelHit.woId,
                              voxelHit.cube,voxelHit.distance,voxelHit.collider,voxelHit.transform,
                              voxelHit._60_8_,voxelHit.interactionFlags._4_4_,lineOfFire.m_Origin.x,
                              lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,lineOfFire.m_Direction.x,
                              lineOfFire.m_Direction.y);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnFire
               (PickupItemShotgun *this,bool isLocal,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    func_?(&MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&MethodInfo__PickupItemShotgun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&TypeInfo__PickupItemShotgun);
    func_?(&StringLiteral_shotgun_fire);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pMVar2 = (this->fields)._._.owner;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_4,pMVar2,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    forward.z = fVar6;
    forward.x = (float)(undefined4)uStack_5;
    forward.y = uStack_5._4_4_;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                        ((Quaternion *)auStack_8,forward,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    fStack_9 = pQVar7->x;
    VStack_10.x = pQVar7->y;
    VStack_10.y = pQVar7->z;
    VStack_10.z = pQVar7->w;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    rotation.y = VStack_10.x;
    rotation.x = fStack_9;
    rotation.z = VStack_10.y;
    rotation.w = VStack_10.z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_4,rotation,
                         TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                         (MethodInfo *)0x0);
    uStack_11._0_4_ = pVVar3->x;
    uStack_11._4_4_ = pVVar3->y;
    fStack_12 = pVVar3->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    rotation_00.y = VStack_10.x;
    rotation_00.x = fStack_9;
    rotation_00.z = VStack_10.y;
    rotation_00.w = VStack_10.z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_4,rotation_00,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    uStack_13._0_4_ = pVVar3->x;
    uStack_13._4_4_ = pVVar3->y;
    fStack_14 = pVVar3->z;
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (this_00,(MethodInfo *)0x0);
      iStack_15 = 0x10;
      this = (PickupItemShotgun *)0x0;
      do {
        iVar16 = iStack_15;
        pMVar2 = (object->fields)._._.owner;
        if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
        uStack_5._0_4_ = (pMVar2->fields).lookOrigin.x;
        uStack_5._4_4_ = (pMVar2->fields).lookOrigin.y;
        pBStack_17 = (Bullet_OnHitDelegate *)(pMVar2->fields).lookOrigin.z;
        pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffff70,(object->fields)._._.owner,
                             (MethodInfo *)0x0);
        uStack_18._0_4_ = pVVar3->x;
        uStack_18._4_4_ = pVVar3->y;
        fStack_19 = pVVar3->z;
        if ((TypeInfo__PickupItemShotgun->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__PickupItemShotgun);
        }
        pSVar20 = TypeInfo__PickupItemShotgun->static_fields->offsetsX;
        if (pSVar20 == (Single__Array *)0x0) goto code_?;
        if ((PickupItemShotgun *)pSVar20->max_length <= this) goto code_?;
        fVar6 = *(float *)((int)pSVar20->vector + iVar16 + -0x10);
        fVar21 = (object->fields).spread;
        pSVar20 = TypeInfo__PickupItemShotgun->static_fields->offsetsY;
        if (pSVar20 == (Single__Array *)0x0) goto code_?;
        if ((PickupItemShotgun *)pSVar20->max_length <= this) goto code_?;
        fVar22 = *(float *)((int)pSVar20->vector + iVar16 + -0x10);
        fVar23 = (object->fields).spread;
        VStack_4.z = fStack_14 * fVar22 * fVar23 + fStack_19 + fStack_12 * fVar6 * fVar21;
        origin.z = (float)pBStack_17;
        origin.x = (float)(undefined4)uStack_5;
        origin.y = uStack_5._4_4_;
        direction.y = uStack_13._4_4_ * fVar22 * fVar23 +
                      uStack_18._4_4_ + uStack_11._4_4_ * fVar6 * fVar21;
        direction.x = (float)uStack_13 * fVar22 * fVar23 +
                      (float)uStack_18 + (float)uStack_11 * fVar6 * fVar21;
        direction.z = VStack_4.z;
        UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                  ((Ray *)&stack0xffffff7c,origin,direction,(MethodInfo *)0x0);
        pTVar24 = (object->fields)._._.muzzlePoint;
        if (pTVar24 == (Transform *)0x0) goto code_?;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_10,pTVar24,(MethodInfo *)0x0);
        pBVar25 = (Bullet_OnHitDelegate__Class *)pVVar3->x;
        fVar6 = pVVar3->y;
        fVar21 = pVVar3->z;
        uVar26 = uVar1 & 0xffffffff00000000;
        this_01 = Bullet::Bullet_CreateBullet
                            (PoolEnums__Enum_ShotgunBullet,*pVVar3,(MethodInfo *)0x0);
        if (this_01 == (Bullet *)0x0) goto code_?;
        pBStack_17 = (this_01->fields).onHit;
        auStack_8._4_4_ = TypeInfo__Bullet__OnHitDelegate;
        auStack_8._0_4_ = &UNK_?;
        pBVar27 = (BulletThrowingStar_OnHitDelegate *)func_?();
        if (pBVar27 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar27,(Object *)object,
                   MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar28 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBStack_17,(Delegate *)pBVar27,(MethodInfo *)0x0);
        pBVar29 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar28 == (Bullet_OnHitDelegate *)0x0) {
          (this_01->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        }
        else {
          if (pBVar28->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar29 = pBVar28;
          }
          if (pBVar29 == (Bullet_OnHitDelegate *)0x0) goto code_?;
          (this_01->fields).onHit = pBVar29;
          pBVar29 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar28->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar29 = pBVar28;
          }
          if (pBVar29 == (Bullet_OnHitDelegate *)0x0) goto code_?;
        }
        func_?();
        if (isLocal != 0) {
          pBStack_17 = (this_01->fields).onHitLocal;
          pBVar27 = (BulletThrowingStar_OnHitDelegate *)
                    func_?(TypeInfo__Bullet__OnHitDelegate);
          if (pBVar27 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (pBVar27,(Object *)object,
                     MethodInfo__PickupItemShotgun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          pBVar28 = (Bullet_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBStack_17,(Delegate *)pBVar27,(MethodInfo *)0x0);
          pBVar29 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar28 == (Bullet_OnHitDelegate *)0x0) {
            (this_01->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
          }
          else {
            if (pBVar28->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar29 = pBVar28;
            }
            if (pBVar29 == (Bullet_OnHitDelegate *)0x0) goto code_?;
            (this_01->fields).onHitLocal = pBVar29;
            pBVar29 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar28->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar29 = pBVar28;
            }
            if (pBVar29 == (Bullet_OnHitDelegate *)0x0) goto code_?;
          }
          func_?();
        }
        pMVar2 = (object->fields)._._.owner;
        if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
        fVar22 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                           (pMVar2,(object->fields).bulletSpeed,(MethodInfo *)0x0);
        pBStack_17 = (Bullet_OnHitDelegate *)(object->fields).maxRange;
        pMVar2 = (object->fields)._._.owner;
        uStack_5 = CONCAT44(fVar22,(undefined4)uStack_5);
        auStack_8._0_4_ = pBVar29;
        auStack_8._4_4_ = pBVar25;
        auStack_8._8_4_ = fVar6;
        auStack_8._12_4_ = fVar21;
        if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
        uVar1 = uVar26;
        ignoreWoIDs = (HashSet_1_System_Int32_ *)func_?(7,pMVar2);
        lineOfFire.m_Origin.y = (float)auStack_8._4_4_;
        lineOfFire.m_Origin.x = (float)auStack_8._0_4_;
        lineOfFire.m_Origin.z = (float)auStack_8._8_4_;
        lineOfFire.m_Direction.x = (float)auStack_8._12_4_;
        lineOfFire.m_Direction.y = (float)(int)uVar26;
        lineOfFire.m_Direction.z = (float)(uVar26 >> 0x20);
        Bullet::Bullet_Fire(this_01,uStack_5._4_4_,(float)pBStack_17,lineOfFire,ignoreWoIDs,
                            (MethodInfo *)0x0);
        iStack_15 = iStack_15 + 4;
        this = (PickupItemShotgun *)((int)&this->klass + 1);
      } while (iStack_15 < 0x24);
      auStack_8._0_4_ = (object->fields).currentAmmo.currentCryptoKey;
      auStack_8._4_4_ = (object->fields).currentAmmo.hiddenValue;
      auStack_8._8_4_ = (object->fields).currentAmmo.fakeValue;
      auStack_8._12_4_ = *(undefined4 *)&(object->fields).currentAmmo.inited;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      input.hiddenValue = auStack_8._4_4_;
      input.currentCryptoKey = auStack_8._0_4_;
      input.fakeValue = auStack_8._8_4_;
      input._12_4_ = auStack_8._12_4_;
      pOVar30 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Decrement((ObscuredInt *)auStack_8,input,(MethodInfo *)0x0);
      iVar31 = pOVar30->hiddenValue;
      iVar32 = pOVar30->fakeValue;
      bVar33 = pOVar30->inited;
      uVar34 = *(undefined3 *)&pOVar30->field_0xd;
      (object->fields).currentAmmo.currentCryptoKey = pOVar30->currentCryptoKey;
      (object->fields).currentAmmo.hiddenValue = iVar31;
      (object->fields).currentAmmo.fakeValue = iVar32;
      (object->fields).currentAmmo.inited = bVar33;
      *(undefined3 *)&(object->fields).currentAmmo.field_0xd = uVar34;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      audioSource = (object->fields).audioSource;
      if (isLocal == 0) {
        pTVar24 = (object->fields)._._.muzzlePoint;
        if ((pTVar24 != (Transform *)0x0) &&
           (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_10,pTVar24,(MethodInfo *)0x0),
           this_02 != (AudioManager *)0x0)) {
          uVar35._0_4_ = pVVar3->x;
          uVar35._4_4_ = pVVar3->y;
          fVar6 = pVVar3->z;
code_?:
          position.z = fVar6;
          position.x = (float)(int)uVar35;
          position.y = (float)(int)((ulonglong)uVar35 >> 0x20);
          AudioManager::AudioManager_Play_2
                    (this_02,StringLiteral_shotgun_fire,audioSource,position,(MethodInfo *)0x0);
          (object->fields)._.isFiring = 0;
          return;
        }
      }
      else {
        pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((pCVar36 != (Camera *)0x0) &&
           (pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar36,(MethodInfo *)0x0),
           pTVar24 != (Transform *)0x0)) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_10,pTVar24,(MethodInfo *)0x0);
          uStack_18._0_4_ = pVVar3->x;
          uStack_18._4_4_ = pVVar3->y;
          fStack_19 = pVVar3->z;
          pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                              ((MethodInfo *)0x0);
          if ((pCVar36 != (Camera *)0x0) &&
             (pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar36,(MethodInfo *)0x0),
             pTVar24 != (Transform *)0x0)) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_10,pTVar24,(MethodInfo *)0x0);
            uStack_13._0_4_ = pVVar3->x;
            uStack_13._4_4_ = pVVar3->y;
            fStack_14 = pVVar3->z;
            uStack_11 = CONCAT44(uStack_13._4_4_ + uStack_18._4_4_,
                                 (float)uStack_13 + (float)uStack_18);
            fVar6 = fStack_14 + fStack_19;
            uVar35 = uStack_11;
            fStack_12 = fVar6;
            if (this_02 != (AudioManager *)0x0) goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnLocalBulletHit
               (PickupItemShotgun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemShotgun);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar2->fields)._.runtimeEventManagerNetwork;
    if ((TypeInfo__PickupItemShotgun->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PickupItemShotgun);
    }
    if (this_00 != (RuntimeEventManager *)0x0) {
      voxelHit_00.point.y = voxelHit.point.y;
      voxelHit_00.point.x = voxelHit.point.x;
      voxelHit_00.point.z = voxelHit.point.z;
      voxelHit_00.normal.x = voxelHit.normal.x;
      voxelHit_00.normal.y = voxelHit.normal.y;
      voxelHit_00.normal.z = voxelHit.normal.z;
      voxelHit_00.cubePos.x = voxelHit.cubePos.x;
      voxelHit_00.cubePos.y = voxelHit.cubePos.y;
      voxelHit_00.cubePos.z = voxelHit.cubePos.z;
      voxelHit_00._30_2_ = voxelHit._30_2_;
      voxelHit_00.face = voxelHit.face;
      voxelHit_00.isCubeHit = voxelHit.isCubeHit;
      voxelHit_00._37_3_ = voxelHit._37_3_;
      voxelHit_00.woId = voxelHit.woId;
      voxelHit_00.cube = voxelHit.cube;
      voxelHit_00.distance = voxelHit.distance;
      voxelHit_00.collider = voxelHit.collider;
      voxelHit_00.transform = voxelHit.transform;
      voxelHit_00._60_4_ = voxelHit._60_4_;
      voxelHit_00.interactionFlags._0_4_ = (undefined4)voxelHit.interactionFlags;
      voxelHit_00.interactionFlags._4_4_ = TypeInfo__PickupItemShotgun->static_fields->hitDamage;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,voxelHit_00,0.0,unaff_ESI);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        voxelHit._36_4_ =
             int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
        ;
        voxelHit.face =
             (int32_t)
             int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
        ;
        voxelHit.cubePos._0_4_ = &UNK_?;
        voxelHit._28_4_ = pMVar3;
        fVar4 = (float)MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                                 (pMVar3,(int32_t)
                                         int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                  ,
                                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                 );
        voxelHit.isCubeHit = 0;
        voxelHit._37_3_ = 0;
        voxelHit.face = (int32_t)&UNK_?;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          voxelHit.collider = (Collider *)0x0;
          voxelHit.woId = (int32_t)&UNK_?;
          voxelHit.cube = (Cube *)pMVar3;
          voxelHit.distance = fVar4;
          this_01 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar3,(int32_t)fVar4,(MethodInfo *)0x0);
          if (this_01 != (MVWorldObjectClient *)0x0) {
            voxelHit.interactionFlags._0_4_ = 0;
            voxelHit.transform = (Transform *)&UNK_?;
            voxelHit._60_4_ = this_01;
            x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_01,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              voxelHit.interactionFlags._4_4_ = &UNK_?;
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_02 != (MVLocalPlayer *)0x0)) {
                bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_02,this_01,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  return;
                }
                pRVar6 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                         Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                         Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                   ((Regex_CachedCodeEntryKey *)&IStack_7.impulse.y,
                                    (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                     *)((int)&voxelHit.interactionFlags + 4),(MethodInfo *)0x0);
                uStack_8._0_4_ = pRVar6->_options;
                uStack_8._4_4_ = pRVar6->_cultureKey;
                fVar4 = (this->fields).impulseStrength;
                fStack_9 = (float)pRVar6->_pattern * fVar4;
                impulse.y = (float)uStack_8._4_4_ * fVar4;
                impulse.x = (float)(undefined4)uStack_8 * fVar4;
                impulse.z = fStack_9;
                pIVar10 = ShotgunHitPackage::ShotgunHitPackage_Create
                                   (&IStack_7,impulse,(MethodInfo *)0x0);
                if (x != (InteractionDataHandlerBase *)0x0) {
                  uVar11._0_1_ = pIVar10->interactionType;
                  uVar11._1_1_ = pIVar10->playerKilledByType;
                  uVar11._2_2_ = *(undefined2 *)&pIVar10->field_0x12;
                  (*(x->klass->vtable).__unknown_1.methodPtr)
                            (x,(this->fields)._._.owner,pIVar10->damage,(pIVar10->impulse).x,
                             (pIVar10->impulse).y,(pIVar10->impulse).z,uVar11,0,
                             (x->klass->vtable).__unknown_1.method);
                  return;
                }
              }
              goto code_?;
            }
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_ResetAmmo
               (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pOVar1 = (ObscuredInt__Class *)(this->fields).maxAmmo.currentCryptoKey;
  iVar2 = (this->fields).maxAmmo.hiddenValue;
  iVar3 = (this->fields).maxAmmo.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    func_?();
  }
  value.hiddenValue = iVar2;
  value.currentCryptoKey = (int32_t)pOVar1;
  value.fakeValue = iVar3;
  value.inited = (this->fields).maxAmmo.inited;
  value._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = (*(this->klass->vtable).GetAmmoMultiplier.methodPtr)(this,iVar2);
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar2,(MethodInfo *)0x0);
  iVar2 = pOVar4->hiddenValue;
  iVar3 = pOVar4->fakeValue;
  bVar5 = pOVar4->inited;
  uVar6 = *(undefined3 *)&pOVar4->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar2;
  (this->fields).currentAmmo.fakeValue = iVar3;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* PickupItemShotgun() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemShotgun);
    func_?(&TypeInfo__System__Single);
    func_?(&::_1D938725B43024CD1DE507AE64F4E512BE661FABD0876BE9FF1D6BBCE7A2774A_Field);
    func_?(&_6D14F76A35801E92A153C606F99E1BAEAD19C4A687AD608FCD9FADCBB41E3C25_Field);
    cRam_? = '\x01';
  }
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  pIVar2 = ShotgunHitPackage::ShotgunHitPackage_Create
                     (&IStack_1,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  TypeInfo__PickupItemShotgun->static_fields->hitDamage = pIVar2->damage;
  pSVar3 = (Single__Array *)func_?(TypeInfo__System__Single,5);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pSVar3,
             __1D938725B43024CD1DE507AE64F4E512BE661FABD0876BE9FF1D6BBCE7A2774A_Field,
             (MethodInfo *)0x0);
  TypeInfo__PickupItemShotgun->static_fields->offsetsX = pSVar3;
  func_?(&TypeInfo__PickupItemShotgun->static_fields->offsetsX,pSVar3);
  pSVar3 = (Single__Array *)func_?(TypeInfo__System__Single,5);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pSVar3,
             __6D14F76A35801E92A153C606F99E1BAEAD19C4A687AD608FCD9FADCBB41E3C25_Field,
             (MethodInfo *)0x0);
  TypeInfo__PickupItemShotgun->static_fields->offsetsY = pSVar3;
  ppSStack4 = &TypeInfo__PickupItemShotgun->static_fields->offsetsY;
  pSStack5 = pSVar3;
  func_?();
  return;
}


/* PickupItemShotgun() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun__ctor
               (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_2,0x18,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  (this->fields).spread = 0.1;
  (this->fields).impulseStrength = 700.0;
  (this->fields).maxRange = 50.0;
  (this->fields).bulletSpeed = 100.0;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_IsAmmoDepleted
               (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).currentAmmo.currentCryptoKey;
  uVar2 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar2;
  value.currentCryptoKey = uVar1;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.fakeValue = iVar3;
  value._12_4_ = uVar4;
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if (0 < iVar3) {
    return 0;
  }
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar5 == '\0';
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_Quantity
                  (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).currentAmmo;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}

