
/* Void AddCubeNetworkUpdate(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::
     MVCubeModelFineGrainedTerrain_AddCubeNetworkUpdate
               (MVCubeModelFineGrainedTerrain *this,IntVector pos,CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cube != (CubeBase *)0x0) {
    byteCorners = (Byte__Array *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)cube,
                             (MethodInfo *)0x0);
    faceMaterials =
         (Byte__Array *)
         System.dll::System::Collections::Generic::
         SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
         Single,System::Object]::
         SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                   ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)cube,(MethodInfo *)0x0);
    this_01 = (Cube *)func_?(TypeInfo__Cube);
    Cube::Cube__ctor(this_01,byteCorners,faceMaterials,(MethodInfo *)0x0);
    this_00 = (this->fields)._.prototypeCubeModel;
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                (this_00,pos,this_01,MeshGeneratePriority__Enum_Medium,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain_Initialize
               (MVCubeModelFineGrainedTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVCubeModelBase::MVCubeModelBase_Initialize((MVCubeModelBase *)this,(MethodInfo *)0x0);
  chunkInstances = (this->fields)._.chunkInstances;
  this_00 = (CullingTerrainManager *)func_?(TypeInfo__CullingTerrainManager);
  CullingTerrainManager::CullingTerrainManager__ctor
            (this_00,chunkInstances,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  (this->fields).cullingTerrainManager = this_00;
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
  func_?();
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
    if ((this->fields).cullingTerrainManager != (CullingTerrainManager *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      CullingTerrainManager::CullingTerrainManager_DestroyCullingSubscribers
                (in_stack_1,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(in_stack_1->fields).terrainCullingSubscriberBases;
      if (this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Clear__
                  );
        return;
      }
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

