
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
  if (((pPVar1 != (PrefabPool *)0x0) &&
      (this = (pPVar1->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) &&
     (this_00 = (Component *)
                EnumPoolManager::EnumPoolManager_Instantiate
                          (this,PoolEnums__Enum_CubeGunBullet,
                           CubeGunBulletObject_MethodInfo__EnumPoolManager__Instantiate<CubeGunBulletObject>_PoolEnums_
                          ), this_00 != (Component *)0x0)) {
    *(uint8_t *)&this_00[2].klass = materialID;
    if (this_00[1].klass != (Component__Class *)0x0) {
      Bullet::Bullet_ResetBullet((Bullet *)this_00[1].klass,(MethodInfo *)0x0);
      if (this_00[1].klass != (Component__Class *)0x0) {
        ((this_00[1].klass)->_0).this_arg.data.__klassIndex = 1;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (this_00,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,origin,(MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            if ((CubeBullet *)this_00[1].monitor != (CubeBullet *)0x0) {
              CubeBullet::CubeBullet_SetCubeMaterial
                        ((CubeBullet *)this_00[1].monitor,materialID,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  pCVar4 = (CubeGunBulletObject *)(*pcVar3)();
  return pCVar4;
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
    voxelHit.point.y._0_2_ = -0x7628;
    voxelHit.point.y._2_2_ = 0x1052;
    voxelHit.point.z = (float)this_00;
    pMVar7 = MVMaterialRepository::MVMaterialRepository_GetMaterial(this_00,uVar5,(MethodInfo *)0x0)
    ;
    if (pMVar7 != (MVMaterial *)0x0) {
      voxelHit.cubePos.z = 0;
      voxelHit._30_2_ = 0;
      if ((pMVar7->fields)._PhysicalProperties_k__BackingField.toughness == _UNK_?) {
        voxelHit.cubePos.x = -0x757f;
        voxelHit.cubePos.y = 0x1052;
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_03 != (MVWorldObjectClientManager *)0x0) {
          voxelHit.face =
               (int32_t)
               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
          ;
          voxelHit.cubePos.x = -0x7568;
          voxelHit.cubePos.y = 0x1052;
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
          if (this_05 != (Cube *)0x0) {
            voxelHit.normal.y = 0.0;
            voxelHit.point.y._0_2_ = (int16_t)this_05;
            voxelHit.point.y._2_2_ = (undefined2)((uint)this_05 >> 0x10);
            voxelHit.point.x = (float)&UNK_?;
            voxelHit.point.z = (float)byteCorners;
            voxelHit.normal.x = (float)faceMaterials;
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
              voxelHit.cubePos.x = -0x74af;
              voxelHit.cubePos.y = 0x1052;
              voxelHit._28_4_ = this_04;
              MVCubeModelBase::MVCubeModelBase_HandleDelta(this_04,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        voxelHit.cubePos.x = -0x75f6;
        voxelHit.cubePos.y = 0x1052;
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
          if (this_02 != (SingleCubeFineGrainedEvent *)0x0) {
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
  }
  voxelHit.face = (int32_t)&UNK_?;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

