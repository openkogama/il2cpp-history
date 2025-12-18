
/* Void ExecuteRuntimeEventLocal(ExplosionEvent) */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_ExecuteRuntimeEventLocal
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>,
                  explosion,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (explosion != (ExplosionEvent *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    }
    pDVar1 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->
             explosionValues;
    if (pDVar1 != (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                   *)0x0) {
      puVar2 = (undefined8 *)
                FUN_?(&IStack_3,pDVar1,
                              (explosion->fields)._._RuntimeEventType_k__BackingField);
      cm = (this->fields).cubeModelPrototypeTerrain;
      uStack_4 = *puVar2;
      damageFallOffType = *(DamageFallOffType__Enum *)(puVar2 + 1);
      fineGrainedTerrainWorldObject = (this->fields).cubeModelFineGrainedTerrain;
      IVar5 = (explosion->fields)._.position;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar6 != (MVGameControllerBase *)0x0) &&
         (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
        pMVar8 = (pMVar7->fields)._MaterialRepository_k__BackingField;
        getPhysicalProperites =
             (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)
             FUN_?(
                          TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>
                          );
        FUN_?(getPhysicalProperites,pMVar8);
        IStack_3 = IVar5;
        bVar9 = RemoveCubes+RemoveCubesWithinRadius::
                 RemoveCubes_RemoveCubesWithinRadius_HandleRemoveCubes
                           ((MVCubeModelBase *)cm,(float)uStack_4,&IStack_3,uStack_4._4_4_,
                            damageFallOffType,(MVCubeModelBase *)fineGrainedTerrainWorldObject,
                            getPhysicalProperites,(MethodInfo *)0x0);
        if ((bVar9 != 0) && ((this->fields).doEffects != 0)) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__PrefabPool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar10 == (PrefabPool *)0x0) goto code_?;
          particlePrefab = (pPVar10->fields).particleCubeDust;
          uVar11 = (explosion->fields)._.position.x;
          uVar12 = (explosion->fields)._.position.y;
          sVar13 = (explosion->fields)._.position.z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar15 = (pVVar14->oneVector).x;
          uVar16 = (pVVar14->oneVector).y;
          IStack_3._0_4_ = (float)(int)(short)uVar11 - (float)uVar15 * _UNK_?;
          fStack_17 = (float)(int)sVar13 - (pVVar14->oneVector).z * _UNK_?;
          radius = _UNK_?;
          if (_UNK_? <= (float)uStack_4) {
            radius = (float)uStack_4;
          }
          register0x000013c4 = (float)(int)(short)uVar12 - (float)uVar16 * _UNK_?;
          SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                    (particlePrefab,(Vector3 *)&IStack_3,radius,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean HandleEvent(SingleCubeFineGrainedEvent) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_HandleEvent
               (RuntimeEventManager *this,SingleCubeFineGrainedEvent *singleCubeFineGrainedEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (singleCubeFineGrainedEvent != (SingleCubeFineGrainedEvent *)0x0) {
    if ((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField != 1) {
      if (((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField == 2) ||
         ((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField == 5)) {
        pMVar1 = (this->fields).cubeModelFineGrainedTerrain;
        IVar2 = (singleCubeFineGrainedEvent->fields)._.position;
        terrainWorldObject = (this->fields).cubeModelPrototypeTerrain;
        IStack_3 = (singleCubeFineGrainedEvent->fields)._.position;
        bVar4 = RemoveCubes+RemoveOneCube::
                RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                          (&IStack_3,(ICubeModel *)pMVar1,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          IStack_3 = IVar2;
          bVar4 = RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_TryRemoveCubeFromTerrain
                            (&IStack_3,(ICubeModel *)terrainWorldObject,(ICubeModel *)pMVar1,
                             (MethodInfo *)0x0);
          if (bVar4 == 0) {
            return 1;
          }
        }
        if ((this->fields).doEffects != 0) {
          lVar5 = FUN_?();
          if (lVar5 == 0) goto code_?;
          particlePrefab = *(ParticleSystem **)(lVar5 + 0x448);
          IStack_3 = (singleCubeFineGrainedEvent->fields)._.position;
          pVVar6 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                   CubeMathFunctions_FineGrainedLocalPosToWorldPos
                             (&VStack_7,&IStack_3,(MethodInfo *)0x0);
          IStack_3._0_4_ = pVVar6->x;
          unique0x0000d404 = pVVar6->y;
          fStack_8 = pVVar6->z;
          SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                    (particlePrefab,(Vector3 *)&IStack_3,_UNK_?,(MethodInfo *)0x0);
        }
      }
      return 1;
    }
    pMVar1 = (this->fields).cubeModelFineGrainedTerrain;
    uVar9 = (singleCubeFineGrainedEvent->fields).material;
    IVar2 = (singleCubeFineGrainedEvent->fields)._.position;
    this_00 = (CubeBase *)FUN_?(TypeInfo__MV__WorldObject__CubeBase);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Byte);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    byteCorners = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
    faceMaterials = (Byte__Array *)FUN_?(TypeInfo__System__Byte,6);
    if (faceMaterials != (Byte__Array *)0x0) {
      if (((((int)faceMaterials->max_length == 0) ||
           (faceMaterials->vector[0] = uVar9, (uint)faceMaterials->max_length < 2)) ||
          (faceMaterials->vector[1] = uVar9, (uint)faceMaterials->max_length < 3)) ||
         (((faceMaterials->vector[2] = uVar9, (uint)faceMaterials->max_length < 4 ||
           (faceMaterials->vector[3] = uVar9, (uint)faceMaterials->max_length < 5)) ||
          (faceMaterials->vector[4] = uVar9, (uint)faceMaterials->max_length < 6)))) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        bVar4 = (*pcVar10)();
        return bVar4;
      }
      faceMaterials->vector[5] = uVar9;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                (this_00,byteCorners,faceMaterials,(MethodInfo *)0x0);
      if (pMVar1 != (MVCubeModelFineGrainedTerrain *)0x0) {
        IStack_3 = IVar2;
        (*(pMVar1->klass->vtable).AddCubeNetworkUpdate_1.methodPtr)
                  (pMVar1,&IStack_3,this_00,(pMVar1->klass->vtable).AddCubeNetworkUpdate_1.method);
        return 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar4 = (*pcVar10)();
  return bVar4;
}


/* Boolean HandleEvent(ExplosionEvent) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_HandleEvent_1
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (explosion != (ExplosionEvent *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    }
    pDVar1 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->
             explosionValues;
    if (pDVar1 != (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                   *)0x0) {
      puVar2 = (undefined8 *)
                FUN_?(&IStack_3,pDVar1,
                              (explosion->fields)._._RuntimeEventType_k__BackingField);
      cm = (this->fields).cubeModelPrototypeTerrain;
      uStack_4 = *puVar2;
      damageFallOffType = *(DamageFallOffType__Enum *)(puVar2 + 1);
      fineGrainedTerrainWorldObject = (this->fields).cubeModelFineGrainedTerrain;
      IVar5 = (explosion->fields)._.position;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar6 != (MVGameControllerBase *)0x0) &&
         (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
        pMVar8 = (pMVar7->fields)._MaterialRepository_k__BackingField;
        getPhysicalProperites =
             (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)
             FUN_?(
                          TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>
                          );
        FUN_?(getPhysicalProperites,pMVar8);
        IStack_3 = IVar5;
        bVar9 = RemoveCubes+RemoveCubesWithinRadius::
                 RemoveCubes_RemoveCubesWithinRadius_HandleRemoveCubes
                           ((MVCubeModelBase *)cm,(float)uStack_4,&IStack_3,uStack_4._4_4_,
                            damageFallOffType,(MVCubeModelBase *)fineGrainedTerrainWorldObject,
                            getPhysicalProperites,(MethodInfo *)0x0);
        if ((bVar9 != 0) && ((this->fields).doEffects != 0)) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__PrefabPool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar10 == (PrefabPool *)0x0) goto code_?;
          particlePrefab = (pPVar10->fields).particleCubeDust;
          uVar11 = (explosion->fields)._.position.x;
          uVar12 = (explosion->fields)._.position.y;
          sVar13 = (explosion->fields)._.position.z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar15 = (pVVar14->oneVector).x;
          uVar16 = (pVVar14->oneVector).y;
          IStack_3._0_4_ = (float)(int)(short)uVar11 - (float)uVar15 * _UNK_?;
          fStack_17 = (float)(int)sVar13 - (pVVar14->oneVector).z * _UNK_?;
          radius = _UNK_?;
          if (_UNK_? <= (float)uStack_4) {
            radius = (float)uStack_4;
          }
          register0x000013c4 = (float)(int)(short)uVar12 - (float)uVar16 * _UNK_?;
          SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                    (particlePrefab,(Vector3 *)&IStack_3,radius,(MethodInfo *)0x0);
        }
        return bVar9;
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar9 = (*pcVar18)();
  return bVar9;
}


/* Boolean IsRemovingAddedFineGrainedCube(SingleCubeFineGrainedEvent) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_IsRemovingAddedFineGrainedCube
               (RuntimeEventManager *this,SingleCubeFineGrainedEvent *singleCubeFineGrainedEvent,
               MethodInfo *method)

{
  if (singleCubeFineGrainedEvent != (SingleCubeFineGrainedEvent *)0x0) {
    if ((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField != 2) {
      return 0;
    }
    uVar1._0_2_ = (singleCubeFineGrainedEvent->fields)._.position.x;
    uVar1._2_2_ = (singleCubeFineGrainedEvent->fields)._.position.y;
    pMVar2 = (this->fields).cubeModelPrototypeTerrain;
    pMVar3 = (this->fields).cubeModelFineGrainedTerrain;
    sVar4 = (singleCubeFineGrainedEvent->fields)._.position.z;
    aIStack_5[0]._0_4_ = uVar1;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pMVar3 != (MVCubeModelFineGrainedTerrain *)0x0) {
      puVar6 = (undefined8 *)
               FUN_?(&uStack_7,0,TypeInfo__MV__WorldObject__ICubeModel,pMVar3);
      uStack_7 = *puVar6;
      fVar8 = (float)uStack_7;
      uStack_9 = *(undefined4 *)(puVar6 + 1);
      if (pMVar2 != (MVCubeModelPrototypeTerrain *)0x0) {
        puVar6 = (undefined8 *)
                 FUN_?(&uStack_7,0,TypeInfo__MV__WorldObject__ICubeModel,pMVar2);
        uStack_7 = *puVar6;
        uStack_9 = *(undefined4 *)(puVar6 + 1);
        fVar8 = fVar8 / (float)uStack_7;
        fVar10 = (float)func_?((float)(int)(int16_t)uVar1 * fVar8);
        fVar11 = (float)func_?((float)(int)aIStack_5[0].y * fVar8);
        fVar8 = (float)func_?((float)(int)sVar4 * fVar8);
        pMVar2 = (this->fields).cubeModelPrototypeTerrain;
        if (pMVar2 != (MVCubeModelPrototypeTerrain *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pMVar2->fields).removedCubes;
          if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
            aIStack_5[0].y = (int16_t)(int)fVar11;
            aIStack_5[0].x = (int16_t)(int)fVar10;
            aIStack_5[0].z = (int16_t)(int)fVar8;
            iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,
                               aIStack_5,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                               ->klass->rgctx_data[0x21].method);
            return iVar12 < 0;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Void ResetTerrain() */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_ResetTerrain
               (RuntimeEventManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cubeModelFineGrainedTerrain;
  if (pMVar1 != (MVCubeModelFineGrainedTerrain *)0x0) {
    (*(pMVar1->klass->vtable).Reset.methodPtr)(pMVar1,(pMVar1->klass->vtable).Reset.method);
    pMVar2 = (this->fields).cubeModelPrototypeTerrain;
    if (pMVar2 != (MVCubeModelPrototypeTerrain *)0x0) {
      (*(pMVar2->klass->vtable).Reset.methodPtr)(pMVar2,(pMVar2->klass->vtable).Reset.method);
      pRVar3 = (this->fields).localAccumulatedCubeDamages;
      if (pRVar3 != (RuntimeEventManager_AccumulatedCubeDamages *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Clear__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar4 = (pRVar3->fields).accumulatedCubeDamages;
        if (pDVar4 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                       *)0x0) {
          length = (pDVar4->fields)._count;
          if (0 < length) {
            pIVar5 = (pDVar4->fields)._buckets;
            if (pIVar5 == (Int32__Array *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pDVar4->fields)._buckets,0,(int32_t)pIVar5->max_length,
                       (MethodInfo *)0x0);
            (pDVar4->fields)._count = 0;
            (pDVar4->fields)._freeCount = 0;
            (pDVar4->fields)._freeList = -1;
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pDVar4->fields)._entries,0,length,(MethodInfo *)0x0);
          }
          piVar7 = &(pDVar4->fields)._version;
          *piVar7 = *piVar7 + 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean SendRemoveOneFineGrainedCube(VoxelHit, Single) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
               (RuntimeEventManager *this,VoxelHit *voxelHit,float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  VStack_2.x = (voxelHit->point).x;
  VStack_2.y = (voxelHit->point).y;
  uVar3 = *(undefined8 *)&(voxelHit->point).z;
  uVar4 = (voxelHit->normal).y;
  uVar5 = (voxelHit->normal).z;
  uStack_6 = *(undefined8 *)&voxelHit->cubePos;
  VStack_2.z = (float)uVar3;
  uStack_7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_8 = (undefined2)uVar4;
  uStack_9 = (undefined2)((uint)uVar4 >> 0x10);
  uStack_10 = (undefined2)uVar5;
  uStack_11 = (undefined2)((uint)uVar5 >> 0x10);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar1,voxelHit->woId,(MethodInfo *)0x0);
  if (pMVar12 != (MVWorldObjectClient *)0x0) {
    bVar13 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if ((bVar13 <= (pMVar12->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)(pMVar12->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1] ==
        TypeInfo__MVCubeModelBase)) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      VStack_2.x = (voxelHit->point).x;
      VStack_2.y = (voxelHit->point).y;
      uVar3 = *(undefined8 *)&(voxelHit->point).z;
      uVar14 = (voxelHit->normal).y;
      uVar15 = (voxelHit->normal).z;
      uStack_6 = *(undefined8 *)&voxelHit->cubePos;
      VStack_2.z = (float)uVar3;
      uStack_7 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_8 = (undefined2)uVar14;
      uStack_9 = (undefined2)((uint)uVar14 >> 0x10);
      uStack_10 = (undefined2)uVar15;
      uStack_11 = (undefined2)((uint)uVar15 >> 0x10);
      if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
         (pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar1,voxelHit->woId,(MethodInfo *)0x0),
         pMVar12 != (MVWorldObjectClient *)0x0)) {
        bVar13 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
        if (((pMVar12->klass->_1).naturalAligment < bVar13) ||
           ((MVCubeModelBase__Class *)(pMVar12->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
            TypeInfo__MVCubeModelBase)) {
          FUN_?(pMVar12);
          pcVar16 = (code *)swi(3);
          bVar17 = (*pcVar16)();
          return bVar17;
        }
        VStack_2.x = (voxelHit->point).x;
        VStack_2.y = (voxelHit->point).y;
        uVar3 = *(undefined8 *)&(voxelHit->point).z;
        VStack_2.z = (float)uVar3;
        uStack_7 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if (pMVar12[1].klass != (MVWorldObjectClient__Class *)0x0) {
          aVStack_18[0]._0_6_ = voxelHit->cubePos;
          pCVar19 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                              ((RuntimePrototypeCubeModel *)pMVar12[1].klass,(IntVector *)aVStack_18
                               ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pCVar19 == (Cube *)0x0) {
            fVar20 = (voxelHit->normal).y;
            aVStack_18[0].z = (voxelHit->normal).z;
            uStack_6 = *(undefined8 *)&voxelHit->cubePos;
            method = (MethodInfo *)0x0;
            VStack_2.x = (voxelHit->point).x;
            VStack_2.y = (voxelHit->point).y;
            uVar3 = *(undefined8 *)&(voxelHit->point).z;
            VStack_2.z = (float)uVar3;
            uStack_7 = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_8 = SUB42(fVar20,0);
            uStack_9 = (undefined2)((uint)fVar20 >> 0x10);
            uStack_10 = SUB42(aVStack_18[0].z,0);
            uStack_11 = (undefined2)((uint)aVStack_18[0].z >> 0x10);
            aVStack_18[0].y._0_2_ = uStack_8;
            aVStack_18[0].x = (float)uStack_7;
            aVStack_18[0].y._2_2_ = uStack_9;
            aVStack_21[0].z = (float)*(undefined8 *)&(voxelHit->point).z;
            aVStack_21[0]._0_8_ = VStack_2._0_8_;
            pIVar22 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                      CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                                (&IStackX_10,aVStack_21,aVStack_18,(MethodInfo *)0x0);
            pMVar23 = (this->fields).cubeModelFineGrainedTerrain;
            if ((pMVar23 == (MVCubeModelFineGrainedTerrain *)0x0) ||
               (this_00 = (pMVar23->fields)._.prototypeCubeModel,
               this_00 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
            aVStack_18[0]._0_6_ = *pIVar22;
            pCVar19 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                (this_00,(IntVector *)aVStack_18,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pCVar19 == (Cube *)0x0) {
              return 0;
            }
          }
          VStack_2.x = (voxelHit->point).x;
          VStack_2.y = (voxelHit->point).y;
          uVar3 = *(undefined8 *)&(voxelHit->point).z;
          uVar24._0_2_ = (voxelHit->cubePos).x;
          uVar24._2_2_ = (voxelHit->cubePos).y;
          uVar25 = *(undefined2 *)&(voxelHit->normal).y;
          uVar26 = *(undefined2 *)((longlong)&(voxelHit->normal).y + 2);
          pfVar27 = &(voxelHit->normal).z;
          iVar28 = (voxelHit->cubePos).z;
          VStack_2.z = (float)uVar3;
          uStack_7 = (undefined4)((ulonglong)uVar3 >> 0x20);
          if ((pMVar12->fields)._.type == 8) {
            method = (MethodInfo *)0x0;
            aVStack_21[0].y._0_2_ = uVar25;
            aVStack_21[0].x = (float)uStack_7;
            aVStack_21[0].y._2_2_ = uVar26;
            aVStack_18[0].z = (float)*(undefined8 *)&(voxelHit->point).z;
            aVStack_18[0]._0_8_ = VStack_2._0_8_;
            uStack_8 = uVar25;
            uStack_9 = uVar26;
            uStack_10 = *(undefined2 *)pfVar27;
            uStack_11 = *(undefined2 *)((longlong)&(voxelHit->normal).z + 2);
            uStack_6 = *(undefined8 *)&voxelHit->cubePos;
            aVStack_21[0].z = *pfVar27;
            pIVar22 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                      CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                                (&IStackX_10,aVStack_18,aVStack_21,(MethodInfo *)0x0);
            uVar24._0_2_ = pIVar22->x;
            uVar24._2_2_ = pIVar22->y;
            iVar28 = pIVar22->z;
          }
          pRVar29 = (this->fields).localAccumulatedCubeDamages;
          if (pRVar29 != (RuntimeEventManager_AccumulatedCubeDamages *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            TypeInfo__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar30 = (pRVar29->fields).accumulatedCubeDamages;
            if (pDVar30 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                           *)0x0) {
              aVStack_18[0].y._0_2_ = iVar28;
              aVStack_18[0].x = (float)uVar24;
              iVar31 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                       IntVector,System::Object]::
                       Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                                 ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar30,
                                  (IntVector *)aVStack_18,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                                  ->klass->rgctx_data[0x21].method);
              if (iVar31 < 0) {
                pDVar30 = (pRVar29->fields).accumulatedCubeDamages;
                pOVar32 = (Object *)
                          FUN_?(
                                       TypeInfo__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage
                                       );
                pcVar16 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar16 = (code *)swi(3);
                  bVar17 = (*pcVar16)();
                  return bVar17;
                }
                pcRam_? = pcVar16;
                uVar33 = (*pcRam_?)();
                *(undefined4 *)&pOVar32[1].klass = uVar33;
                if (pDVar30 == (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                               *)0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__TryInsert
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar30,
                           (IntVector *)aVStack_18,pOVar32,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
                           ->klass->rgctx_data[0x22].method);
              }
              pDVar30 = (pRVar29->fields).accumulatedCubeDamages;
              if (pDVar30 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                             *)0x0) {
                pOVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                          IntVector,System::Object]::
                          Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                    ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar30,
                                     (IntVector *)aVStack_18,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                                    );
                if (pOVar32 != (Object *)0x0) {
                  pcVar16 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                    uVar3 = func_?(&UNK_?);
                    FUN_?(uVar3,0);
                    pcVar16 = (code *)swi(3);
                    bVar17 = (*pcVar16)();
                    return bVar17;
                  }
                  pcRam_? = pcVar16;
                  uVar33 = (*pcRam_?)();
                  bVar34 = cRam_? == '\0';
                  fVar20 = damage + *(float *)((longlong)&pOVar32[1].klass + 4);
                  *(undefined4 *)&pOVar32[1].klass = uVar33;
                  *(float *)((longlong)&pOVar32[1].klass + 4) = fVar20;
                  if (bVar34) {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((pMVar35 != (MVGameControllerBase *)0x0) &&
                     (pMVar36 = (pMVar35->fields).game, pMVar36 != (MVNetworkGame *)0x0)) {
                    pMVar37 = (pMVar36->fields)._MaterialRepository_k__BackingField;
                    lVar38 = FUN_?(
                                          TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>
                                          );
                    FUN_?(lVar38,pMVar37);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pBVar39 = (pCVar19->fields)._.faceMaterials;
                    if (pBVar39 != (Byte__Array *)0x0) {
                      if ((int)pBVar39->max_length == 0) {
                        FUN_?();
                        pcVar16 = (code *)swi(3);
                        bVar17 = (*pcVar16)();
                        return bVar17;
                      }
                      if (lVar38 != 0) {
                        lVar38 = (**(code **)(lVar38 + 0x18))
                                           (aVStack_21,*(undefined8 *)(lVar38 + 0x40));
                        fVar40 = *(float *)(lVar38 + 0x10);
                        if (fVar40 == 0.0) {
                          return 0;
                        }
                        if (fVar40 <= fVar20) {
                          singleCubeFineGrainedEvent =
                               (SingleCubeFineGrainedEvent *)
                               FUN_?(
                                            TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent
                                            );
                          (singleCubeFineGrainedEvent->fields)._.position.x = (short)uVar24;
                          (singleCubeFineGrainedEvent->fields)._.position.y =
                               (short)((uint)uVar24 >> 0x10);
                          (singleCubeFineGrainedEvent->fields)._.position.z = iVar28;
                          (singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField =
                               2;
                          RuntimeEventManager_SendRuntimeEvent_1
                                    (this,singleCubeFineGrainedEvent,(MethodInfo *)0x0);
                        }
                        else {
                          if (fVar40 <= fVar20) {
                            return 0;
                          }
                          lVar38 = FUN_?();
                          if (lVar38 == 0) goto code_?;
                          aVStack_21[0].x = (voxelHit->point).x;
                          aVStack_21[0].y = (voxelHit->point).y;
                          aVStack_21[0].z = (float)*(undefined8 *)&(voxelHit->point).z;
                          SharedWorldObjectGameplayFunctions::
                          SharedWorldObjectGameplayFunctions_DustEfffect
                                    (*(ParticleSystem **)(lVar38 + 0x440),aVStack_21,_UNK_?,
                                     (MethodInfo *)0x0);
                        }
                        return 1;
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
      pcVar16 = (code *)swi(3);
      bVar17 = (*pcVar16)();
      return bVar17;
    }
  }
  return 0;
}


/* Void SendRuntimeEvent(ExplosionEvent) */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  bVar1 = RuntimeEventManager_HandleEvent_1(this,explosion,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ,explosion,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (explosion != (ExplosionEvent *)0x0) {
      value = (Object *)
              (*(explosion->klass->vtable).get_Data.methodPtr)
                        (explosion,(explosion->klass->vtable).get_Data.method);
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xf5);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0xf5,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
        pPVar4 = (pMVar2->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar4 != (PhotonPeer *)0x0) {
          (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                    (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x35),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar4->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SendRuntimeEvent(SingleCubeFineGrainedEvent) */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
               (RuntimeEventManager *this,SingleCubeFineGrainedEvent *singleCubeFineGrainedEvent,
               MethodInfo *method)

{
  bVar1 = RuntimeEventManager_HandleEvent(this,singleCubeFineGrainedEvent,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (singleCubeFineGrainedEvent == (SingleCubeFineGrainedEvent *)0x0) goto DAT_?;
    if ((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField == 2) {
      uVar2._0_2_ = (singleCubeFineGrainedEvent->fields)._.position.x;
      uVar2._2_2_ = (singleCubeFineGrainedEvent->fields)._.position.y;
      pMVar3 = (this->fields).cubeModelPrototypeTerrain;
      pMVar4 = (this->fields).cubeModelFineGrainedTerrain;
      sVar5 = (singleCubeFineGrainedEvent->fields)._.position.z;
      aIStack_6[0]._0_4_ = uVar2;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar4 == (MVCubeModelFineGrainedTerrain *)0x0) goto DAT_?;
      puVar7 = (undefined8 *)
               FUN_?(&uStack_8,0,TypeInfo__MV__WorldObject__ICubeModel,pMVar4);
      uStack_8 = *puVar7;
      fVar9 = (float)uStack_8;
      uStack_10 = *(undefined4 *)(puVar7 + 1);
      if (pMVar3 == (MVCubeModelPrototypeTerrain *)0x0) goto DAT_?;
      puVar7 = (undefined8 *)
               FUN_?(&uStack_8,0,TypeInfo__MV__WorldObject__ICubeModel,pMVar3);
      uStack_8 = *puVar7;
      uStack_10 = *(undefined4 *)(puVar7 + 1);
      fVar9 = fVar9 / (float)uStack_8;
      fVar11 = (float)func_?((float)(int)(int16_t)uVar2 * fVar9);
      fVar12 = (float)func_?((float)(int)aIStack_6[0].y * fVar9);
      fVar9 = (float)func_?((float)(int)sVar5 * fVar9);
      pMVar3 = (this->fields).cubeModelPrototypeTerrain;
      if (pMVar3 == (MVCubeModelPrototypeTerrain *)0x0) goto DAT_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar3->fields).removedCubes;
      if (this_00 == (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0)
      goto DAT_?;
      aIStack_6[0].y = (int16_t)(int)fVar12;
      aIStack_6[0].x = (int16_t)(int)fVar11;
      aIStack_6[0].z = (int16_t)(int)fVar9;
      iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,aIStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                         ->klass->rgctx_data[0x21].method);
      if (iVar13 < 0) {
        (singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField = 5;
      }
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) {
DAT_?:
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SendRuntimeEventOperation
              (this_01,(RuntimeEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0);
  }
  return;
}


/* RuntimeEventManager() */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager__ctor
               (RuntimeEventManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (RuntimeEventManager_AccumulatedCubeDamages *)
        FUN_?(TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (obj->fields).accumulatedCubeDamages =
       (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
        *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&obj->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)obj,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).localAccumulatedCubeDamages = obj;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).localAccumulatedCubeDamages >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

