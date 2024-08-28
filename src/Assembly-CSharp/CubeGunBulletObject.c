
/* CubeGunBulletObject Create(MVPickupOwner, Vector3, Byte) */

CubeGunBulletObject *
Assembly-CSharp.dll::CubeGunBulletObject::CubeGunBulletObject_Create
          (MVPickupOwner *owner,Vector3 origin,uint8_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__CubeGunBulletObject__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_
                   );
    func_?(&MethodInfo__CubeGunBulletObject__HandleCubeHit_VoxelHit__UnityEngine__Ray_);
    func_?(&
                    CubeGunBulletObject_MethodInfo__EnumPoolManager__Instantiate<CubeGunBulletObject>_PoolEnums_
                   );
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (((pPVar1 == (PrefabPool *)0x0) ||
      (this = (pPVar1->fields).enumPoolManager, this == (EnumPoolManager *)0x0)) ||
     (pCVar2 = (CubeGunBulletObject *)
               EnumPoolManager::EnumPoolManager_Instantiate
                         (this,PoolEnums__Enum_CubeGunBullet,
                          CubeGunBulletObject_MethodInfo__EnumPoolManager__Instantiate<CubeGunBulletObject>_PoolEnums_
                         ), pCVar2 == (CubeGunBulletObject *)0x0)) {
code_?:
    func_?();
  }
  else {
    pBVar3 = (pCVar2->fields).bullet;
    (pCVar2->fields).materialID = materialID;
    if (pBVar3 == (Bullet *)0x0) goto code_?;
    Bullet::Bullet_ResetBullet(pBVar3,(MethodInfo *)0x0);
    pBVar3 = (pCVar2->fields).bullet;
    if (pBVar3 == (Bullet *)0x0) goto code_?;
    (pBVar3->fields).initiatedPoolType = 1;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar2,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar4,origin,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar4,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
               (MethodInfo *)0x0);
    pCVar5 = (pCVar2->fields).cubeBullet;
    if (pCVar5 == (CubeBullet *)0x0) goto code_?;
    (pCVar5->fields)._MaterialID_k__BackingField = materialID;
    this_00 = (pCVar5->fields).meshFilter;
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar6 == (MVNetworkGame *)0x0) ||
        (this_01 = (pMVar6->fields)._MaterialRepository_k__BackingField,
        this_01 == (MVMaterialRepository *)0x0)) ||
       ((pMVar7 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                             (this_01,(pCVar5->fields)._MaterialID_k__BackingField,(MethodInfo *)0x0
                             ), pMVar7 == (MVMaterial *)0x0 || (this_00 == (MeshFilter *)0x0))))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
              (this_00,(pMVar7->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
    this_02 = (pCVar5->fields).meshRenderer;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if ((pMVar8 == (MaterialLoader *)0x0) || (this_02 == (MeshRenderer *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)this_02,(pMVar8->fields)._CubeModelMaterial_k__BackingField,
               (MethodInfo *)0x0);
    if (UNK_? == '\0') {
code_?:
      pBVar3 = (pCVar2->fields).bullet;
      if (pBVar3 != (Bullet *)0x0) {
        pBVar9 = (pBVar3->fields).onHit;
        pDVar10 = (Delegate *)func_?(TypeInfo__Bullet__OnHitDelegate);
        pMVar11 = MethodInfo__CubeGunBulletObject__HandleCubeHit_VoxelHit__UnityEngine__Ray_;
        ppOVar12 = &(pDVar10->fields).m_target;
        (pDVar10->fields).method_ptr =
             MethodInfo__CubeGunBulletObject__HandleCubeHit_VoxelHit__UnityEngine__Ray_->
             virtualMethodPointer;
        (pDVar10->fields).method = pMVar11;
        *ppOVar12 = (Object *)pCVar2;
        func_?(ppOVar12,pCVar2);
        uVar13 = pMVar11->parameters_count;
        (pDVar10->fields).method_code = pDVar10;
        cVar14 = func_?(pMVar11);
        if ((cVar14 == '\0') || (uVar13 != 2)) {
          (pDVar10->fields).method_code = (pDVar10->fields).m_target;
          puVar15 = (pDVar10->fields).method_ptr;
        }
        else {
          puVar15 = &UNK_?;
        }
        (pDVar10->fields).invoke_impl = puVar15;
        (pDVar10->fields).extra_arg = &UNK_?;
        pBVar9 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar9,pDVar10,(MethodInfo *)0x0);
        if (pBVar9 == (Bullet_OnHitDelegate *)0x0) {
          (pBVar3->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        }
        else {
          pBVar16 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar16 = pBVar9;
          }
          if (pBVar16 == (Bullet_OnHitDelegate *)0x0) goto code_?;
          (pBVar3->fields).onHit = pBVar16;
          pBVar16 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar16 = pBVar9;
          }
          if (pBVar16 == (Bullet_OnHitDelegate *)0x0) goto code_?;
        }
        func_?();
        pBVar3 = (pCVar2->fields).bullet;
        if (pBVar3 != (Bullet *)0x0) {
          ppMVar17 = &(pBVar3->fields).pooledObjectReference;
          *ppMVar17 = (MonoBehaviour *)pCVar2;
          func_?(ppMVar17,pCVar2);
          return pCVar2;
        }
      }
      goto code_?;
    }
    pBVar3 = (pCVar2->fields).bullet;
    if (pBVar3 == (Bullet *)0x0) goto code_?;
    pBVar9 = (pBVar3->fields).onHitLocal;
    pDVar10 = (Delegate *)func_?();
    pMVar11 = MethodInfo__CubeGunBulletObject__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_;
    (pDVar10->fields).method_ptr =
         MethodInfo__CubeGunBulletObject__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_->
         virtualMethodPointer;
    (pDVar10->fields).method = pMVar11;
    (pDVar10->fields).m_target = (Object *)pCVar2;
    func_?();
    uVar13 = pMVar11->parameters_count;
    (pDVar10->fields).method_code = pDVar10;
    cVar14 = func_?();
    if ((cVar14 == '\0') || (uVar13 != 2)) {
      (pDVar10->fields).method_code = (pDVar10->fields).m_target;
      puVar15 = (pDVar10->fields).method_ptr;
    }
    else {
      puVar15 = &UNK_?;
    }
    (pDVar10->fields).invoke_impl = puVar15;
    (pDVar10->fields).extra_arg = &UNK_?;
    pBVar9 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBVar9,pDVar10,(MethodInfo *)0x0);
    if (pBVar9 == (Bullet_OnHitDelegate *)0x0) {
      (pBVar3->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pBVar16 = (Bullet_OnHitDelegate *)0x0;
    if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
      pBVar16 = pBVar9;
    }
    if (pBVar16 == (Bullet_OnHitDelegate *)0x0) goto code_?;
    (pBVar3->fields).onHitLocal = pBVar16;
    pBVar16 = (Bullet_OnHitDelegate *)0x0;
    if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
      pBVar16 = pBVar9;
    }
    if (pBVar16 != (Bullet_OnHitDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  pCVar2 = (CubeGunBulletObject *)(*pcVar18)();
  return pCVar2;
}


/* Void HandleCubeHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::CubeGunBulletObject::CubeGunBulletObject_HandleCubeHit
               (CubeGunBulletObject *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_CubeGun);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  audioSource = (this->fields).audioSource;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
    if (this_00 != (AudioManager *)0x0) {
      AudioManager::AudioManager_Play_2
                (this_00,StringLiteral_CubeGun,audioSource,*pVVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleCubeHitLocal(VoxelHit, Ray) */

void Assembly-CSharp.dll::CubeGunBulletObject::CubeGunBulletObject_HandleCubeHitLocal
               (CubeGunBulletObject *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&TypeInfo__Cube);
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  voxelHit_00.normal.x._2_2_ = voxelHit.point.y._2_2_;
  voxelHit_00.normal.x._0_2_ = voxelHit.point.y._0_2_;
  voxelHit_00.face._2_2_ = voxelHit.cubePos.y;
  voxelHit_00.face._0_2_ = voxelHit.cubePos.x;
  voxelHit_00.point.y = (float)in_stack_1;
  voxelHit_00.point.x = (float)&voxelHit.field_0x3c;
  voxelHit_00.point.z = voxelHit.point.x;
  voxelHit_00.normal.y = voxelHit.point.z;
  voxelHit_00.normal.z = voxelHit.normal.x;
  voxelHit_00.cubePos._0_4_ = voxelHit.normal.y;
  voxelHit_00._28_4_ = voxelHit.normal.z;
  voxelHit_00._36_4_ = voxelHit._28_4_;
  voxelHit_00.woId = voxelHit.face;
  voxelHit_00.cube = (Cube *)voxelHit._36_4_;
  voxelHit_00.distance = (float)voxelHit.woId;
  voxelHit_00.collider = (Collider *)voxelHit.cube;
  voxelHit_00.transform = (Transform *)voxelHit.distance;
  voxelHit_00._60_4_ = voxelHit.collider;
  voxelHit_00.interactionFlags._0_4_ = voxelHit.transform;
  voxelHit_00.interactionFlags._4_4_ = voxelHit._60_4_;
  IVar2 = PickupItemCubeGun::PickupItemCubeGun_GetCubePos
                    (voxelHit_00,
                     (MethodInfo *)
                     (CONCAT26(voxelHit.interactionFlags._2_2_,voxelHit._60_6_) >> 0x20));
  fVar3 = *IVar2._0_4_;
  voxelHit.interactionFlags._2_2_ = *(int16_t *)(IVar2._0_4_ + 1);
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar4->fields)._MaterialRepository_k__BackingField,
     this_00 != (MVMaterialRepository *)0x0)) {
    voxelHit.normal.y = 0.0;
    uVar5 = (this->fields).materialID;
    fStack_6 = (float)CONCAT31(fStack_6._1_3_,uVar5);
    voxelHit.normal.x = fStack_6;
    voxelHit.point.y._0_2_ = -0x4c58;
    voxelHit.point.y._2_2_ = 0x1054;
    voxelHit.point.z = (float)this_00;
    pMVar7 = MVMaterialRepository::MVMaterialRepository_GetMaterial(this_00,uVar5,(MethodInfo *)0x0)
    ;
    if (pMVar7 != (MVMaterial *)0x0) {
      voxelHit.cubePos.z = 0;
      voxelHit._30_2_ = 0;
      if ((pMVar7->fields)._PhysicalProperties_k__BackingField.toughness == _UNK_?) {
        voxelHit.cubePos.x = -0x4bb7;
        voxelHit.cubePos.y = 0x1054;
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_03 != (MVWorldObjectClientManager *)0x0) {
          voxelHit.face =
               (int32_t)
               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
          ;
          voxelHit.cubePos.x = -0x4ba0;
          voxelHit.cubePos.y = 0x1054;
          voxelHit._28_4_ = this_03;
          this_04 = (MVCubeModelBase *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (this_03,
                               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                              );
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            voxelHit.woId = (int32_t)TypeInfo__MV__WorldObject__CubeBase;
            voxelHit._36_4_ = &UNK_?;
            func_?();
          }
          voxelHit.woId = 0;
          voxelHit._36_4_ = &UNK_?;
          corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                              ((MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
            voxelHit.cube = (Cube *)TypeInfo__MV__WorldObject__CubeDataPacker;
            voxelHit.woId = (int32_t)&UNK_?;
            func_?();
          }
          voxelHit.cube = (Cube *)0x0;
          voxelHit._36_4_ = &UNK_?;
          voxelHit.woId = (int32_t)corners;
          byteCorners = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                        CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
          uVar5 = (this->fields).materialID;
          fStack_6 = (float)CONCAT31(fStack_6._1_3_,uVar5);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            voxelHit.collider = (Collider *)TypeInfo__Cube;
            voxelHit.distance = (float)&UNK_?;
            func_?();
          }
          voxelHit.collider = (Collider *)0x0;
          voxelHit.distance = fStack_6;
          voxelHit.cube = (Cube *)&UNK_?;
          faceMaterials = Cube::Cube_CreateMaterialArray(uVar5,(MethodInfo *)0x0);
          voxelHit.collider = (Collider *)TypeInfo__Cube;
          voxelHit.distance = (float)&UNK_?;
          this_05 = (Cube *)func_?();
          voxelHit.point.y._0_2_ = 0;
          voxelHit.point.y._2_2_ = 0;
          voxelHit.point.x = (float)faceMaterials;
          Cube::Cube__ctor(this_05,byteCorners,faceMaterials,(MethodInfo *)0x0);
          if (this_04 != (MVCubeModelBase *)0x0) {
            voxelHit.face = 0;
            voxelHit.cubePos.x = voxelHit.interactionFlags._2_2_;
            voxelHit.normal.x = (float)&UNK_?;
            IVar2.z = voxelHit.interactionFlags._2_2_;
            IVar2._0_4_ = fVar3;
            voxelHit.normal.y = (float)this_04;
            voxelHit.normal.z = fVar3;
            voxelHit._28_4_ = this_05;
            MVCubeModelBase::MVCubeModelBase_AddCube
                      (this_04,IVar2,(CubeBase *)this_05,(MethodInfo *)0x0);
            voxelHit.face = 0;
            voxelHit.cubePos.x = -0x4aee;
            voxelHit.cubePos.y = 0x1054;
            voxelHit._28_4_ = this_04;
            MVCubeModelBase::MVCubeModelBase_HandleDelta(this_04,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        voxelHit.cubePos.x = -0x4c26;
        voxelHit.cubePos.y = 0x1054;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pWVar8 = (pMVar4->fields).worldNetwork, pWVar8 != (WorldNetwork *)0x0)) {
          this_01 = (RuntimeEventManager *)(pWVar8->fields)._.runtimeEventManagerNetwork;
          uVar5 = (this->fields).materialID;
          voxelHit.face =
               (int32_t)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
          fStack_6 = (float)CONCAT31(fStack_6._1_3_,uVar5);
          voxelHit._28_4_ = &UNK_?;
          this_02 = (SingleCubeFineGrainedEvent *)func_?();
          voxelHit.normal.x = 0.0;
          voxelHit.point.z = fStack_6;
          voxelHit.point.y._0_2_ = voxelHit.interactionFlags._2_2_;
          position.z = voxelHit.interactionFlags._2_2_;
          position._0_4_ = fVar3;
          voxelHit.point.x = fVar3;
          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
          SingleCubeFineGrainedEvent__ctor(this_02,position,uVar5,(MethodInfo *)0x0);
          if (this_01 != (RuntimeEventManager *)0x0) {
            voxelHit.face = 0;
            voxelHit.cubePos.x = (int16_t)this_01;
            voxelHit.cubePos.y = (int16_t)((uint)this_01 >> 0x10);
            voxelHit.normal.z = (float)&UNK_?;
            voxelHit._28_4_ = this_02;
            RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                      (this_01,this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  voxelHit.face = (int32_t)&UNK_?;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

