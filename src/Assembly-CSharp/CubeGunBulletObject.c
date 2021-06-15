
/* CubeGunBulletObject Create(MVPickupOwner, Vector3, Byte) */

CubeGunBulletObject *
Assembly-CSharp.dll::CubeGunBulletObject::CubeGunBulletObject_Create
          (MVPickupOwner *owner,Vector3 origin,uint8_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_04 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_04 != (PrefabPool *)0x0) {
    this_05 = (EnumPoolManager *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                         (MethodInfo *)0x0);
    if (this_05 != (EnumPoolManager *)0x0) {
      this_06 = EnumPoolManager::EnumPoolManager_Instantiate_18
                          (this_05,PoolEnums__Enum_CubeGunBullet,
                           CubeGunBulletObject_MethodInfo__EnumPoolManager__Instantiate<CubeGunBulletObject>_PoolEnums_
                          );
      if (this_06 != (ImpulseRay *)0x0) {
        *(uint8_t *)&(this_06->fields).startColor.g = materialID;
        this = (Bullet *)(this_06->fields).rayRenderer;
        if (this != (Bullet *)0x0) {
          Bullet::Bullet_ResetBullet(this,(MethodInfo *)0x0);
          this_00 = (AccessoryPreviewPopup *)(this_06->fields).rayRenderer;
          if (this_00 != (AccessoryPreviewPopup *)0x0) {
            AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
                      (this_00,(MVBody *)0x1,(MethodInfo *)0x0);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_06,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar1,origin,(MethodInfo *)0x0);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this_06,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                func_?();
              }
              pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                                 ((Quaternion *)&puStack_3,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                          (pTVar1,*pQVar2,(MethodInfo *)0x0);
                fVar4 = (this_06->fields).radius;
                if (fVar4 != 0.0) {
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  this_01 = *(MeshFilter **)((int)fVar4 + 0xc);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  this_07 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (this_07 != (MVNetworkGame *)0x0) {
                    this_08 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                        ((DayNightCycle *)this_07,(MethodInfo *)0x0);
                    if (this_08 != (CelestialParam *)0x0) {
                      this_09 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                          ((MVMaterialRepository *)this_08,materialID,
                                           (MethodInfo *)0x0);
                      if (this_09 != (MVMaterial *)0x0) {
                        value = (Mesh *)System.dll::System::Collections::Generic::
                                        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                        ::Single,System::Object]::
                                        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                                  ((
                                                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                                  *)this_09,(MethodInfo *)0x0);
                        if (this_01 != (MeshFilter *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                          MeshFilter_set_sharedMesh(this_01,value,(MethodInfo *)0x0);
                          this_02 = *(Renderer **)((int)fVar4 + 0x10);
                          this_10 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                              ((MethodInfo *)0x0);
                          if (this_10 != (MaterialLoader *)0x0) {
                            value_00 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)
                                                  this_10,(MethodInfo *)0x0);
                            if (this_02 != (Renderer *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_set_sharedMaterial
                                        (this_02,(Material *)value_00,(MethodInfo *)0x0);
                              if (_materialID != (MVPickupOwner *)0x0) {
                                bVar5 = MVPickupOwner::MVPickupOwner_get_IsLocal
                                                  (_materialID,(MethodInfo *)0x0);
                                if (bVar5 != 0) {
                                  pMVar6 = (this_06->fields).rayRenderer;
                                  if (pMVar6 == (MeshRenderer *)0x0) goto code_?;
                                  pDVar7 = (Delegate *)pMVar6[1].monitor;
                                  pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                            *)func_?();
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                  SceneManagement::Scene]::
                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                            (pUVar8,(Object *)this_06,
                                             MethodInfo__CubeGunBulletObject__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_
                                             ,(MethodInfo *)0x0);
                                  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                     (pDVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
                                  pDVar7 = (Delegate *)0x0;
                                  if (pDVar9 != (Delegate *)0x0) {
                                    if ((Bullet_OnHitDelegate__Class *)pDVar9->klass ==
                                        TypeInfo__Bullet__OnHitDelegate) {
                                      pDVar7 = pDVar9;
                                    }
                                    if (pDVar7 == (Delegate *)0x0) goto code_?;
                                  }
                                  pMVar6[1].monitor = (MonitorData *)pDVar7;
                                }
                                pMVar6 = (this_06->fields).rayRenderer;
                                if (pMVar6 != (MeshRenderer *)0x0) {
                                  pMVar10 = pMVar6[1].klass;
                                  pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                            *)func_?();
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                  SceneManagement::Scene]::
                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                            (pUVar8,(Object *)this_06,
                                             MethodInfo__CubeGunBulletObject__HandleCubeHit_VoxelHit__UnityEngine__Ray_
                                             ,(MethodInfo *)0x0);
                                  pMVar11 = (MeshRenderer__Class *)
                                           mscorlib.dll::System::Delegate::Delegate_Combine
                                                     ((Delegate *)pMVar10,(Delegate *)pUVar8,
                                                      (MethodInfo *)0x0);
                                  pMVar10 = (MeshRenderer__Class *)0x0;
                                  if (pMVar11 != (MeshRenderer__Class *)0x0) {
                                    if ((Bullet_OnHitDelegate__Class *)(pMVar11->_0).image ==
                                        TypeInfo__Bullet__OnHitDelegate) {
                                      pMVar10 = pMVar11;
                                    }
                                    if (pMVar10 == (MeshRenderer__Class *)0x0)
                                    goto code_?;
                                  }
                                  pMVar6[1].klass = pMVar10;
                                  this_03 = (TimedPlayReward *)(this_06->fields).rayRenderer;
                                  if (this_03 != (TimedPlayReward *)0x0) {
                                    TimedPlayReward::TimedPlayReward_set_RewardXP
                                              (this_03,(int32_t)this_06,(MethodInfo *)0x0);
                                    return (CubeGunBulletObject *)this_06;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pCVar13 = (CubeGunBulletObject *)(*pcVar12)();
  return pCVar13;
}


/* Void HandleCubeHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::CubeGunBulletObject::CubeGunBulletObject_HandleCubeHit
               (CubeGunBulletObject *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  audioSource = (this->fields).audioSource;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
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
  fStack_4 = fVar3;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (CelestialParam *)0x0) {
      voxelHit.point.y._0_2_ = 0;
      voxelHit.point.y._2_2_ = 0;
      uVar5 = *(uint8_t *)&(this_00->fields).itemBusinessLogic;
      fStack_6 = (float)CONCAT31(fStack_6._1_3_,uVar5);
      voxelHit.point.x = fStack_6;
      this_02 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          ((MVMaterialRepository *)this_01,uVar5,(MethodInfo *)0x0);
      if (this_02 != (MVMaterial *)0x0) {
        voxelHit.normal.y = 0.0;
        voxelHit.point.z = (float)&PStack_7;
        voxelHit.point.y._0_2_ = -0x6e73;
        voxelHit.point.y._2_2_ = 0x1043;
        voxelHit.normal.x = (float)this_02;
        pPVar8 = MVMaterial::MVMaterial_get_PhysicalProperties
                           ((PhysicalProperties *)voxelHit.point.z,this_02,(MethodInfo *)0x0);
        fStack_9 = pPVar8->friction;
        fStack_10 = pPVar8->bouncyness;
        fStack_11 = pPVar8->softness;
        fStack_12 = pPVar8->staticFriction;
        fStack_13 = pPVar8->toughness;
        if (fStack_13 == _UNK_?) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            voxelHit._28_4_ = TypeInfo__MVGameControllerBase;
            voxelHit.cubePos.x = -0x6d9e;
            voxelHit.cubePos.y = 0x1043;
            func_?();
          }
          voxelHit.cubePos.z = 0;
          voxelHit._30_2_ = 0;
          voxelHit.cubePos.x = -0x6d94;
          voxelHit.cubePos.y = 0x1043;
          voxelHit._28_4_ = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((MVWorldObjectClientManager *)voxelHit._28_4_ != (MVWorldObjectClientManager *)0x0) {
            voxelHit.face =
                 (int32_t)
                 MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
            ;
            voxelHit.cubePos.x = -0x6d7d;
            voxelHit.cubePos.y = 0x1043;
            this_06 = MVWorldObjectClientManager::
                      MVWorldObjectClientManager_GetSingletonWorldObject_4
                                ((MVWorldObjectClientManager *)voxelHit._28_4_,
                                 MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                                );
            if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
              voxelHit.woId = (int32_t)TypeInfo__MV__WorldObject__CubeBase;
              voxelHit._36_4_ = &UNK_?;
              func_?();
            }
            voxelHit.woId = 0;
            voxelHit._36_4_ = &UNK_?;
            corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
              voxelHit.cube = (Cube *)TypeInfo__MV__WorldObject__CubeDataPacker;
              voxelHit.woId = (int32_t)&UNK_?;
              func_?();
            }
            voxelHit.cube = (Cube *)0x0;
            voxelHit._36_4_ = &UNK_?;
            voxelHit.woId = (int32_t)corners;
            pBStack_14 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                        CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
            fStack_6 = (float)CONCAT31(fStack_6._1_3_,
                                       *(undefined1 *)&(this_00->fields).itemBusinessLogic);
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
              voxelHit.collider = (Collider *)TypeInfo__Cube;
              voxelHit.distance = (float)&UNK_?;
              func_?();
            }
            voxelHit.collider = (Collider *)0x0;
            voxelHit.distance = fStack_6;
            fVar3 = voxelHit.distance;
            voxelHit.cube = (Cube *)&UNK_?;
            voxelHit.distance._0_1_ = SUB41(fStack_6,0);
            uVar5 = voxelHit.distance._0_1_;
            voxelHit.distance = fVar3;
            faceMaterials = Cube::Cube_CreateMaterialArray(uVar5,(MethodInfo *)0x0);
            voxelHit.collider = (Collider *)TypeInfo__Cube;
            voxelHit.distance = (float)&UNK_?;
            this_07 = (CubeBase *)func_?();
            if (cRam_? == '\0') {
              voxelHit.normal.y = _UNK_?;
              voxelHit.normal.x = (float)&UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
              voxelHit.normal.y = (float)TypeInfo__MV__WorldObject__CubeBase;
              voxelHit.normal.x = (float)&UNK_?;
              func_?();
            }
            voxelHit.normal.y = 0.0;
            voxelHit.point.z = (float)pBStack_14;
            voxelHit.point.y._0_2_ = (int16_t)this_07;
            voxelHit.point.y._2_2_ = (undefined2)((uint)this_07 >> 0x10);
            voxelHit.point.x = (float)&UNK_?;
            voxelHit.normal.x = (float)faceMaterials;
            MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                      (this_07,pBStack_14,faceMaterials,(MethodInfo *)0x0);
            if (this_06 != (MVRoundCube *)0x0) {
              voxelHit.face = 0;
              voxelHit.normal.z = fStack_4;
              voxelHit.cubePos.x = voxelHit.interactionFlags._2_2_;
              voxelHit.normal.x = (float)&UNK_?;
              IVar2.z = voxelHit.interactionFlags._2_2_;
              IVar2._0_4_ = fStack_4;
              voxelHit.normal.y = (float)this_06;
              voxelHit._28_4_ = this_07;
              MVCubeModelBase::MVCubeModelBase_AddCube
                        ((MVCubeModelBase *)this_06,IVar2,this_07,(MethodInfo *)0x0);
              voxelHit.face = 0;
              voxelHit.cubePos.x = -0x6c71;
              voxelHit.cubePos.y = 0x1043;
              voxelHit._28_4_ = this_06;
              MVCubeModelBase::MVCubeModelBase_HandleDelta
                        ((MVCubeModelBase *)this_06,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            voxelHit._28_4_ = TypeInfo__MVGameControllerBase;
            voxelHit.cubePos.x = -0x6e33;
            voxelHit.cubePos.y = 0x1043;
            func_?();
          }
          voxelHit.cubePos.z = 0;
          voxelHit._30_2_ = 0;
          voxelHit.cubePos.x = -0x6e29;
          voxelHit.cubePos.y = 0x1043;
          voxelHit._28_4_ = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((MVNetworkGame *)voxelHit._28_4_ != (MVNetworkGame *)0x0) {
            voxelHit.face = 0;
            voxelHit.cubePos.x = -0x6e16;
            voxelHit.cubePos.y = 0x1043;
            this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)CloudyTheme::CloudyTheme_get_Identifier
                                   ((CloudyTheme *)voxelHit._28_4_,(MethodInfo *)0x0);
            if (this_03 !=
                (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)0x0) {
              voxelHit.woId = 0;
              voxelHit.face = (int32_t)&UNK_?;
              voxelHit._36_4_ = this_03;
              this_04 = (RuntimeEventManager *)
                        System.dll::System::Collections::Generic::
                        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                        ::Single,System::Object]::
                        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                  (this_03,(MethodInfo *)0x0);
              voxelHit.woId =
                   (int32_t)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
              fStack_6 = (float)CONCAT31(fStack_6._1_3_,
                                         *(undefined1 *)&(this_00->fields).itemBusinessLogic);
              voxelHit._36_4_ = &UNK_?;
              this_05 = (SingleCubeFineGrainedEvent *)func_?();
              voxelHit.normal.x = 0.0;
              voxelHit.point.z = fStack_6;
              fVar15 = voxelHit.point.z;
              voxelHit.point.y._0_2_ = voxelHit.interactionFlags._2_2_;
              position.z = voxelHit.interactionFlags._2_2_;
              position._0_4_ = fVar3;
              voxelHit.point.z._0_1_ = SUB41(fStack_6,0);
              uVar5 = voxelHit.point.z._0_1_;
              voxelHit.point.x = fVar3;
              voxelHit.point.z = fVar15;
              MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
              SingleCubeFineGrainedEvent__ctor(this_05,position,uVar5,(MethodInfo *)0x0);
              if (this_04 != (RuntimeEventManager *)0x0) {
                voxelHit.face = 0;
                voxelHit.cubePos.x = (int16_t)this_04;
                voxelHit.cubePos.y = (int16_t)((uint)this_04 >> 0x10);
                voxelHit.normal.z = (float)&UNK_?;
                voxelHit._28_4_ = this_05;
                RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                          (this_04,this_05,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  voxelHit.face = 0;
  voxelHit._28_4_ = &UNK_?;
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

