
/* Vector3 FineGrainedLocalPosToTerrainLocalPos(IntVector) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::CubeMathFunctions_FineGrainedLocalPosToTerrainLocalPos(Vector3 *__return_storage_ptr__,IntVector intVector,MethodInfo *method)

{
  fVar1 = (float)(int)intVector.x;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3,fVar1,0,0,0);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->oneVector).x;
  uVar4 = (pVVar2->oneVector).y;
  fVar5 = (pVVar2->oneVector).z;
  __return_storage_ptr__->x = (fVar1 - (float)uVar3 * 1.5) * 0.25;
  __return_storage_ptr__->y = ((float)(int)intVector.y - (float)uVar4 * 1.5) * 0.25;
  __return_storage_ptr__->z = ((float)(int)intVector.z - fVar5 * 1.5) * 0.25;
  return __return_storage_ptr__;
}


/* Vector3 FineGrainedLocalPosToWorldPos(IntVector) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::CubeMathFunctions_FineGrainedLocalPosToWorldPos(Vector3 *__return_storage_ptr__,IntVector intVector,MethodInfo *method)

{
  fVar1 = (float)(int)intVector.x;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3,fVar1,0,0,0);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->oneVector).x;
  uVar4 = (pVVar2->oneVector).y;
  fVar5 = (pVVar2->oneVector).z;
  __return_storage_ptr__->x = fVar1 - (float)uVar3 * 1.5;
  __return_storage_ptr__->y = (float)(int)intVector.y - (float)uVar4 * 1.5;
  __return_storage_ptr__->z = (float)(int)intVector.z - fVar5 * 1.5;
  return __return_storage_ptr__;
}


/* IntVector FromLocalPosToLocalPos(IntVector, ICubeModel, ICubeModel) */

IntVector MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::CubeMathFunctions_FromLocalPosToLocalPos(IntVector fineGrainedPosition,ICubeModel *terrainWorldObject,ICubeModel *fineGrainedTerrainWorldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__ICubeModel);
    cRam_? = '\x01';
  }
  if (method != (MethodInfo *)0x0) {
    puVar1 = (undefined8 *)func_?(&uStack_2,0,TypeInfo__MV__WorldObject__ICubeModel,method);
    uStack_3._4_4_ = *(undefined4 *)(puVar1 + 1);
    fStack_4 = (float)*puVar1;
    uStack_3._0_4_ = (undefined4)((ulonglong)*puVar1 >> 0x20);
    if (fineGrainedTerrainWorldObject != (ICubeModel *)0x0) {
      puVar1 = (undefined8 *)func_?(auStack_5,0,TypeInfo__MV__WorldObject__ICubeModel,fineGrainedTerrainWorldObject);
      uStack_2 = *puVar1;
      fVar6 = fStack_4 / (float)uStack_2;
      uStack_3 = (double)((float)(int)fineGrainedPosition.z * fVar6);
      fVar7 = (float10)func_?(uStack_3);
      *(short *)fineGrainedPosition._0_4_ = (short)(int)fVar7;
      uStack_3 = (double)((float)(int)in_stack_8 * fVar6);
      fVar7 = (float10)func_?(uStack_3);
      *(short *)(fineGrainedPosition._0_4_ + 2) = (short)(int)fVar7;
      uStack_3 = (double)((float)(int)(short)terrainWorldObject * fVar6);
      fVar7 = (float10)func_?(uStack_3);
      *(short *)(fineGrainedPosition._0_4_ + 4) = (short)(int)fVar7;
      IVar9.z = extraout_DX;
      IVar9.x = fineGrainedPosition.x;
      IVar9.y = fineGrainedPosition.y;
      return IVar9;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  IVar9 = (IntVector)(*pcVar10)();
  return IVar9;
}


/* Vector3 LocalIntVectorToLocalPos(IntVector) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::CubeMathFunctions_LocalIntVectorToLocalPos(Vector3 *__return_storage_ptr__,IntVector localIntVector,MethodInfo *method)

{
  __return_storage_ptr__->x = (float)(int)localIntVector.x;
  __return_storage_ptr__->y = (float)(int)localIntVector.y;
  __return_storage_ptr__->z = (float)(int)localIntVector.z;
  return __return_storage_ptr__;
}


/* IntVector LocalPosToLocalIntVector(Vector3) */

IntVector MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::CubeMathFunctions_LocalPosToLocalIntVector(Vector3 localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  fVar4 = (float)method + (pVVar1->oneVector).z * 0.5;
  fVar5 = localPos.y + (float)uVar2 * 0.5;
  uVar6 = CONCAT44(localPos.z + (float)uVar3 * 0.5,fVar5);
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar7 = (float10)func_?((double)fVar5,uVar6,fVar4);
  fVar5 = (float)fVar7;
  fVar7 = (float10)func_?((double)(float)((ulonglong)uVar6 >> 0x20));
  fVar8 = (float)fVar7;
  fVar7 = (float10)func_?((double)fVar4);
  *(short *)localPos.x = (short)(int)fVar5;
  *(short *)((int)localPos.x + 2) = (short)(int)fVar8;
  *(short *)((int)localPos.x + 4) = (short)(int)fVar7;
  IVar9.z = extraout_DX;
  IVar9._0_4_ = localPos.x;
  return IVar9;
}


/* IntVector WorldPosToFineGrainedLocalPos(Vector3) */

IntVector MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::CubeMathFunctions_WorldPosToFineGrainedLocalPos(Vector3 worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  fVar4 = (float)uVar2 * 1.5 + worldPos.y;
  method = (MethodInfo *)((pVVar1->oneVector).z * 1.5 + (float)method);
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  mscorlib.dll::System::Math::Math_Round_5((double)fVar4,0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  mscorlib.dll::System::Math::Math_Round_5((double)((float)uVar3 * 1.5 + worldPos.z),0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    method = (MethodInfo *)&TypeInfo__System__Math;
    func_?();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__System__Math;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
    method = (MethodInfo *)pMVar5;
  }
  worldPos.x = (float)((ulonglong)(double)(float)method >> 0x20);
  dVar6 = mscorlib.dll::System::Math::Math_Round_5((double)(float)method,0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  *(undefined2 *)worldPos.x = 0;
  *(undefined2 *)((int)worldPos.x + 2) = 0;
  *(short *)((int)worldPos.x + 4) = (short)(int)dVar6;
  IVar7.z = extraout_DX;
  IVar7._0_4_ = worldPos.x;
  return IVar7;
}


/* IntVector WorldPosToFineGrainedLocalPos(Vector3, Vector3) */

IntVector MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::CubeMathFunctions_WorldPosToFineGrainedLocalPos_1(Vector3 worldPos,Vector3 normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  normal.x = ((pVVar1->oneVector).z * 1.5 + normal.x) - (float)method * 0.01;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  mscorlib.dll::System::Math::Math_Round_5((double)(((float)uVar2 * 1.5 + worldPos.y) - normal.y * 0.01),0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  mscorlib.dll::System::Math::Math_Round_5((double)(((float)uVar3 * 1.5 + worldPos.z) - normal.z * 0.01),0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    normal.x = (float)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
    normal.x = (float)&UNK_?;
  }
  dVar4 = (double)normal.x;
  worldPos.x = SUB84(dVar4,0);
  worldPos.y = (float)((ulonglong)dVar4 >> 0x20);
  dVar4 = mscorlib.dll::System::Math::Math_Round_5(dVar4,0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  *(short *)worldPos.x = (short)(int)worldPos.y;
  *(undefined2 *)((int)worldPos.x + 2) = 0;
  *(short *)((int)worldPos.x + 4) = (short)(int)dVar4;
  IVar5.z = extraout_DX;
  IVar5._0_4_ = worldPos.x;
  return IVar5;
}

