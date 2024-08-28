
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
    else if (getPhysicalProperites != (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0) {
      puStack_3 = (getPhysicalProperites->fields)._._.method;
      cubeBase = (CubeBase *)CONCAT31(cubeBase._1_3_,pBVar2->vector[0]);
      pCStack_4 = cubeBase;
      iVar5 = (*(getPhysicalProperites->fields)._._.invoke_impl)
                        (&pCStack_4,(getPhysicalProperites->fields)._._.method_code);
      fVar6 = *(float *)(iVar5 + 0x10);
      if (fVar6 == _UNK_?) {
        return CubeDamageState__Enum_NoDamage;
      }
      if (damage < fVar6) {
        if (fVar6 <= damage) {
          return CubeDamageState__Enum_NoDamage;
        }
        return CubeDamageState__Enum_ReceivedDamage;
      }
      return CubeDamageState__Enum_Destroyed;
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
  bVar2 = RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                    (fineGrainedPosition,fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return 1;
  }
  if (cRam_? == '\0') {
    func_?();
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
  if (terrainWorldObject != (ICubeModel *)0x0) {
    a = (CubeBase *)func_?();
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                      (a,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 0;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar4 != (MVNetworkGame *)0x0) &&
        (this = (pMVar4->fields)._MaterialRepository_k__BackingField, a != (CubeBase *)0x0)) &&
       (pBVar5 = (a->fields).faceMaterials, pBVar5 != (Byte__Array *)0x0)) {
      if (pBVar5->max_length == 0) goto code_?;
      if (this != (MVMaterialRepository *)0x0) {
        pPVar6 = MVMaterialRepository::MVMaterialRepository_GetMaterialPhysicalProperties
                           ((PhysicalProperties *)&stack0xffffffc8,this,pBVar5->vector[0],
                            (MethodInfo *)0x0);
        if (pPVar6->toughness == _UNK_?) {
          return 0;
        }
        if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
                  (terrainWorldObject,fineGrainedTerrainWorldObject,IVar3,(MethodInfo *)0x0);
        func_?();
        RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                  (fineGrainedPosition,fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
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
  IVar3._0_4_ = &stack0xfffffff0;
  IVar3 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_FromLocalPosToLocalPos
                    (IVar3,(ICubeModel *)CONCAT22(uVar1,fineGrainedPosition.z),terrainWorldObject,
                     (MethodInfo *)fineGrainedTerrainWorldObject);
  IVar3 = *IVar3._0_4_;
  if (terrainWorldObject != (ICubeModel *)0x0) {
    a = (CubeBase *)func_?(1,TypeInfo__MV__WorldObject__ICubeModel,terrainWorldObject);
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    bVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                      (a,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return 0;
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar5 != (MVNetworkGame *)0x0) &&
        (this = (pMVar5->fields)._MaterialRepository_k__BackingField, a != (CubeBase *)0x0)) &&
       (pBVar6 = (a->fields).faceMaterials, pBVar6 != (Byte__Array *)0x0)) {
      if (pBVar6->max_length == 0) goto code_?;
      if (this != (MVMaterialRepository *)0x0) {
        pPVar7 = MVMaterialRepository::MVMaterialRepository_GetMaterialPhysicalProperties
                           ((PhysicalProperties *)&stack0xffffffc8,this,pBVar6->vector[0],
                            (MethodInfo *)0x0);
        if (pPVar7->toughness == _UNK_?) {
          return 0;
        }
        if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
                  (terrainWorldObject,fineGrainedTerrainWorldObject,IVar3,(MethodInfo *)0x0);
        func_?();
        RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                  (fineGrainedPosition,fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar4 = (*pcVar8)();
  return bVar4;
}

