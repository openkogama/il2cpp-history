
/* Void AddCubeNetworkUpdate(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::
     MVCubeModelFineGrainedTerrain_AddCubeNetworkUpdate
               (MVCubeModelFineGrainedTerrain *this,IntVector pos,CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (CubeBase *)0x0) {
    byteCorners = (cube->fields).byteCorners;
    faceMaterials = (cube->fields).faceMaterials;
    this_01 = (Cube *)func_?(TypeInfo__Cube);
    Cube::Cube__ctor(this_01,byteCorners,faceMaterials,(MethodInfo *)0x0);
    this_00 = (this->fields)._.prototypeCubeModel;
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                (this_00,pos,this_01,MeshGeneratePriority__Enum_Medium,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain_Initialize
               (MVCubeModelFineGrainedTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingTerrainManager);
    cRam_? = '\x01';
  }
  MVCubeModelBase::MVCubeModelBase_Initialize((MVCubeModelBase *)this,(MethodInfo *)0x0);
  chunkInstances = (this->fields)._.chunkInstances;
  this_00 = (CullingTerrainManager *)func_?(TypeInfo__CullingTerrainManager);
  CullingTerrainManager::CullingTerrainManager__ctor
            (this_00,chunkInstances,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  (this->fields).cullingTerrainManager = this_00;
  func_?(&(this->fields).cullingTerrainManager,this_00);
  return;
}


/* Void RemoveCubeNetworkUpdate(IntVector) */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::
     MVCubeModelFineGrainedTerrain_RemoveCubeNetworkUpdate
               (MVCubeModelFineGrainedTerrain *this,IntVector pos,MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveCubeNetworkUpdate
              (this_00,pos,MeshGeneratePriority__Enum_Medium,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Clear__
                       );
        cRam_? = '\x01';
      }
      CullingTerrainManager::CullingTerrainManager_DestroyCullingSubscribers
                (this_01,(MethodInfo *)0x0);
      this_02 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this_01->fields).terrainCullingSubscriberBases;
      if (this_02 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Clear__
                  );
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVCubeModelBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVCubeModelBase);
  }
  MVCubeModelBase::MVCubeModelBase__ctor
            ((MVCubeModelBase *)this,data,worldObjects,prototypes,(MethodInfo *)0x0);
  *(undefined4 *)&(this->fields)._._.interactionFlags = 0;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
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
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

