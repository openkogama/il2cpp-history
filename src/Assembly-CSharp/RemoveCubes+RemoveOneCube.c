
/* CubeDamageState CanRemoveCube(CubeBase, Single, Func`2[Byte,MV.WorldObject.PhysicalProperties])
    */

CubeDamageState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_CanRemoveCube
          (CubeBase *cubeBase,float damage,
          Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                    (cubeBase,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return CubeDamageState__Enum_NoDamage;
  }
  if ((cubeBase != (CubeBase *)0x0) &&
     (pOVar2 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)cubeBase,(MethodInfo *)0x0), pOVar2 != (Object *)0x0)) {
    if (pOVar2[1].monitor == (MonitorData *)0x0) {
      func_?();
      func_?();
    }
    else if (getPhysicalProperites != (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0) {
      pPVar3 = System.Core.dll::System::Func`2[Byte,MV::WorldObject::PhysicalProperties]::
               Func_2_Byte_MV_WorldObject_PhysicalProperties__Invoke
                         ((PhysicalProperties *)&stack0xffffffd4,getPhysicalProperites,
                          *(uint8_t *)&pOVar2[2].klass,
                          MethodInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>__Invoke_unsigned_char_
                         );
      fVar4 = pPVar3->toughness;
      if (fVar4 == _UNK_?) {
        return CubeDamageState__Enum_NoDamage;
      }
      if (damage < fVar4) {
        if (fVar4 <= damage) {
          return CubeDamageState__Enum_NoDamage;
        }
        return CubeDamageState__Enum_ReceivedDamage;
      }
      return CubeDamageState__Enum_Destroyed;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  CVar6 = (*pcVar5)();
  return CVar6;
}


/* Boolean HandleRemoveOneCube(IntVector, ICubeModel, ICubeModel) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_HandleRemoveOneCube
               (IntVector fineGrainedPosition,ICubeModel *terrainWorldObject,
               ICubeModel *fineGrainedTerrainWorldObject,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_EDI >> 0x10);
  uVar2 = fineGrainedPosition._0_4_;
  bVar3 = RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                    (fineGrainedPosition,fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if (cRam_? == '\0') {
      pCStack_4 = _UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pCStack_4 = (CubeBase *)0x0;
    IVar5.z = fineGrainedPosition.x;
    IVar5._0_4_ = &pCStack_4;
    IVar5 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
            CubeMathFunctions_FromLocalPosToLocalPos
                      (IVar5,(ICubeModel *)CONCAT22(uVar1,fineGrainedPosition.z),terrainWorldObject,
                       (MethodInfo *)fineGrainedTerrainWorldObject);
    pIStack_6 = (ICubeModel__Class *)*IVar5._0_4_;
    if (terrainWorldObject == (ICubeModel *)0x0) {
      func_?();
      pcVar7 = (code *)swi(3);
      bVar3 = (*pcVar7)();
      return bVar3;
    }
    pIStack_6 = TypeInfo__MV__WorldObject__ICubeModel;
    uStack_8 = 1;
    pCStack_4 = (CubeBase *)func_?();
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                      (pCStack_4,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return 0;
    }
    if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
      func_?();
    }
    fineGrainedPosition.z = (int16_t)pIStack_6;
    uStack9 = (undefined2)((uint)pIStack_6 >> 0x10);
    fromPos.z = 0;
    fromPos._0_4_ = pIStack_6;
    MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
              (terrainWorldObject,fineGrainedTerrainWorldObject,fromPos,(MethodInfo *)0x0);
    uStack10 = (undefined2)((uint)terrainWorldObject >> 0x10);
    func_?();
    fineGrainedPosition_00.z = fineGrainedPosition.z;
    fineGrainedPosition_00.x = (short)uVar2;
    fineGrainedPosition_00.y = (short)((uint)uVar2 >> 0x10);
    RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
              (fineGrainedPosition_00,fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
  }
  return 1;
}


/* Boolean TryRemoveCubeFromFineGrainedTerrain(IntVector, ICubeModel) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveOneCube::
     RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
               (IntVector fineGrainedPosition,ICubeModel *fineGrainedTerrainWorldObject,
               MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_EBX >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (fineGrainedTerrainWorldObject == (ICubeModel *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  a = (CubeBase *)
      func_?(1,TypeInfo__MV__WorldObject__ICubeModel,fineGrainedTerrainWorldObject,
                      fineGrainedPosition._0_4_,fineGrainedPosition.z);
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                    (a,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return 0;
  }
  func_?(3,TypeInfo__MV__WorldObject__ICubeModel,fineGrainedTerrainWorldObject,
                  fineGrainedPosition._0_4_,CONCAT22(uVar1,fineGrainedPosition.z));
  return 1;
}


/* Boolean TryRemoveCubeFromTerrain(IntVector, ICubeModel, ICubeModel) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveOneCube::
     RemoveCubes_RemoveOneCube_TryRemoveCubeFromTerrain
               (IntVector fineGrainedPosition,ICubeModel *terrainWorldObject,
               ICubeModel *fineGrainedTerrainWorldObject,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  IVar3.z = fineGrainedPosition.x;
  IVar3._0_4_ = &stack0xfffffff4;
  IVar3 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_FromLocalPosToLocalPos
                    (IVar3,(ICubeModel *)CONCAT22(uVar1,fineGrainedPosition.z),terrainWorldObject,
                     (MethodInfo *)fineGrainedTerrainWorldObject);
  IVar3 = *IVar3._0_4_;
  if (terrainWorldObject != (ICubeModel *)0x0) {
    a = (CubeBase *)func_?(1,TypeInfo__MV__WorldObject__ICubeModel,terrainWorldObject);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                      (a,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return 0;
    }
    if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
      func_?();
    }
    MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
              (terrainWorldObject,fineGrainedTerrainWorldObject,IVar3,(MethodInfo *)0x0);
    uStack5 = 0;
    func_?();
    uStack5 = 0x1028;
    RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
              ((IntVector)0x310282f25,fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}

