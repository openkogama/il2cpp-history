
/* CubeDamageState CanRemoveCube(CubeBase, Single, Func`2[Byte,MV.WorldObject.PhysicalProperties])
    */

CubeDamageState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_CanRemoveCube
          (CubeBase *cubeBase,float damage,
          Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                    (cubeBase,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return CubeDamageState__Enum_NoDamage;
  }
  if ((cubeBase != (CubeBase *)0x0) &&
     (pBVar2 = (cubeBase->fields).faceMaterials, pBVar2 != (Byte__Array *)0x0)) {
    if (pBVar2->max_length == 0) {
      func_?();
    }
    else {
      cubeBase = (CubeBase *)CONCAT31(cubeBase._1_3_,pBVar2->vector[0]);
      if (getPhysicalProperites != (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0) {
        puStack_3 = (getPhysicalProperites->fields)._._.method;
        pCStack_4 = cubeBase;
        iVar5 = (*(getPhysicalProperites->fields)._._.invoke_impl)
                          (&pCStack_4,(getPhysicalProperites->fields)._._.method_code);
        fVar6 = *(float *)(iVar5 + 0x10);
        if (fVar6 == _UNK_?) {
          return CubeDamageState__Enum_NoDamage;
        }
        if (fVar6 <= damage) {
          return CubeDamageState__Enum_Destroyed;
        }
        return (uint)(damage < fVar6);
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  CVar8 = (*pcVar7)();
  return CVar8;
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
      pCStack_4 = (CubeBase *)&TypeInfo__MV__WorldObject__CubeBase;
      func_?();
      func_?(&TypeInfo__MV__WorldObject__ICubeModel);
      uVar1 = 0x1035;
      func_?(&TypeInfo__MoveCubeFromCoarseToFine);
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
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                      (pCStack_4,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return 0;
    }
    if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__ICubeModel);
    cRam_? = '\x01';
  }
  if (fineGrainedTerrainWorldObject == (ICubeModel *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  a = (CubeBase *)
      func_?(1,TypeInfo__MV__WorldObject__ICubeModel,fineGrainedTerrainWorldObject,
                      fineGrainedPosition._0_4_,fineGrainedPosition.z);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__ICubeModel);
    uVar1 = 0x1035;
    func_?(&TypeInfo__MoveCubeFromCoarseToFine);
    cRam_? = '\x01';
  }
  IVar3.z = fineGrainedPosition.x;
  IVar3._0_4_ = &stack0xfffffff4;
  IVar3 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_FromLocalPosToLocalPos
                    (IVar3,(ICubeModel *)CONCAT22(uVar1,fineGrainedPosition.z),terrainWorldObject,
                     (MethodInfo *)fineGrainedTerrainWorldObject);
  IVar3 = *IVar3._0_4_;
  if (terrainWorldObject == (ICubeModel *)0x0) {
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  a = (CubeBase *)func_?(1,TypeInfo__MV__WorldObject__ICubeModel,terrainWorldObject);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar5 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                    (a,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return 0;
  }
  if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
            (terrainWorldObject,fineGrainedTerrainWorldObject,IVar3,(MethodInfo *)0x0);
  uStack6 = 0;
  func_?();
  uStack6 = 0x1035;
  RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
            ((IntVector)0x31035b416,fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
  return 1;
}

