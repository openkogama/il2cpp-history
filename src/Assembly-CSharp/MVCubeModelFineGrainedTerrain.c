
/* Void AddCubeNetworkUpdate(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::
     MVCubeModelFineGrainedTerrain_AddCubeNetworkUpdate
               (MVCubeModelFineGrainedTerrain *this,IntVector *pos,CubeBase *cube,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube != (CubeBase *)0x0) {
    byteCorners = (cube->fields).byteCorners;
    faceMaterials = (cube->fields).faceMaterials;
    this_01 = (Cube *)FUN_?(TypeInfo__Cube);
    Cube::Cube__ctor(this_01,byteCorners,faceMaterials,(MethodInfo *)0x0);
    this_00 = (this->fields)._.prototypeCubeModel;
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      aIStackX_18[0].x = pos->x;
      aIStackX_18[0].y = pos->y;
      aIStackX_18[0].z = pos->z;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
                (this_00,aIStackX_18,this_01,MeshGeneratePriority__Enum_Medium,1,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain_Initialize
               (MVCubeModelFineGrainedTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingTerrainManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVCubeModelBase::MVCubeModelBase_Initialize((MVCubeModelBase *)this,(MethodInfo *)0x0);
  chunkInstances = (this->fields)._.chunkInstances;
  this_00 = (CullingTerrainManager *)FUN_?(TypeInfo__CullingTerrainManager);
  CullingTerrainManager::CullingTerrainManager__ctor
            (this_00,chunkInstances,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).cullingTerrainManager = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cullingTerrainManager >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void RemoveCubeNetworkUpdate(IntVector) */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::
     MVCubeModelFineGrainedTerrain_RemoveCubeNetworkUpdate
               (MVCubeModelFineGrainedTerrain *this,IntVector *pos,MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    aIStackX_8[0].x = pos->x;
    aIStackX_8[0].y = pos->y;
    aIStackX_8[0].z = pos->z;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveFromChunk
              (this_00,aIStackX_8,MeshGeneratePriority__Enum_Medium,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain_Reset
               (MVCubeModelFineGrainedTerrain *this,MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveAllCubesLocal
              (this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).cullingTerrainManager;
    if (this_01 != (CullingTerrainManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Clear__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      CullingTerrainManager::CullingTerrainManager_DestroyCullingSubscribers
                (this_01,(MethodInfo *)0x0);
      pDVar1 = (this_01->fields).terrainCullingSubscriberBases;
      if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0) {
        length = (pDVar1->fields)._count;
        if (0 < length) {
          pIVar2 = (pDVar1->fields)._buckets;
          if (pIVar2 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,
                     (MethodInfo *)0x0);
          (pDVar1->fields)._count = 0;
          (pDVar1->fields)._freeCount = 0;
          (pDVar1->fields)._freeList = -1;
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
        }
        piVar4 = &(pDVar1->fields)._version;
        *piVar4 = *piVar4 + 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVCubeModelFineGrainedTerrain(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
               (MVCubeModelFineGrainedTerrain *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
               Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVCubeModelBase::MVCubeModelBase__ctor
            ((MVCubeModelBase *)this,data,worldObjects,prototypes,(MethodInfo *)0x0);
  (this->fields)._._.interactionFlags = 0;
  return;
}


/* Boolean get_RequiresResetToEdit() */

bool Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::
     MVCubeModelFineGrainedTerrain_get_RequiresResetToEdit
               (MVCubeModelFineGrainedTerrain *this,MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    iVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_CubeCount
                      (this_00,(MethodInfo *)0x0);
    return 0 < iVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

