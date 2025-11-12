
/* Vector3 FineGrainedLocalPosToTerrainLocalPos(IntVector) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_FineGrainedLocalPosToTerrainLocalPos
                    (Vector3 *__return_storage_ptr__,IntVector *intVector,MethodInfo *method)

{
  uVar1 = intVector->x;
  uVar2 = intVector->y;
  sVar3 = intVector->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->oneVector).x;
  fVar6 = ((float)(int)(short)uVar2 - (pVVar4->oneVector).y * _UNK_?) * _UNK_?;
  fVar7 = ((float)(int)sVar3 - (pVVar4->oneVector).z * _UNK_?) * _UNK_?;
  __return_storage_ptr__->x =
       ((float)(int)(short)uVar1 - (float)uVar5 * _UNK_?) * _UNK_?;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar7;
  return __return_storage_ptr__;
}


/* Vector3 FineGrainedLocalPosToWorldPos(IntVector) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_FineGrainedLocalPosToWorldPos
                    (Vector3 *__return_storage_ptr__,IntVector *intVector,MethodInfo *method)

{
  sVar1 = intVector->x;
  sVar2 = intVector->y;
  sVar3 = intVector->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->oneVector).x;
  fVar6 = (pVVar4->oneVector).y * _UNK_?;
  fVar7 = (pVVar4->oneVector).z * _UNK_?;
  __return_storage_ptr__->x = (float)(int)sVar1 - (float)uVar5 * _UNK_?;
  __return_storage_ptr__->y = (float)(int)sVar2 - fVar6;
  __return_storage_ptr__->z = (float)(int)sVar3 - fVar7;
  return __return_storage_ptr__;
}


/* IntVector FromLocalPosToLocalPos(IntVector, ICubeModel, ICubeModel) */

IntVector *
MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::CubeMathFunctions_FromLocalPosToLocalPos
          (IntVector *__return_storage_ptr__,IntVector *fineGrainedPosition,
          ICubeModel *terrainWorldObject,ICubeModel *fineGrainedTerrainWorldObject,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (fineGrainedTerrainWorldObject != (ICubeModel *)0x0) {
    puVar1 = (undefined8 *)
             FUN_?(&uStack_2,0,TypeInfo__MV__WorldObject__ICubeModel,
                           fineGrainedTerrainWorldObject);
    uStack_2 = *puVar1;
    fVar3 = (float)uStack_2;
    uStack_4 = *(undefined4 *)(puVar1 + 1);
    if (terrainWorldObject != (ICubeModel *)0x0) {
      puVar1 = (undefined8 *)
               FUN_?(&uStack_2,0,TypeInfo__MV__WorldObject__ICubeModel,terrainWorldObject);
      fVar3 = fVar3 / (float)*puVar1;
      fVar5 = (float)func_?((float)(int)fineGrainedPosition->x * fVar3);
      __return_storage_ptr__->x = (int16_t)(int)fVar5;
      fVar5 = (float)func_?((float)(int)fineGrainedPosition->y * fVar3);
      __return_storage_ptr__->y = (int16_t)(int)fVar5;
      fVar3 = (float)func_?((float)(int)fineGrainedPosition->z * fVar3);
      __return_storage_ptr__->z = (int16_t)(int)fVar3;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pIVar7 = (IntVector *)(*pcVar6)();
  return pIVar7;
}


/* IntVector LocalPosToLocalIntVector(Vector3) */

IntVector *
MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::CubeMathFunctions_LocalPosToLocalIntVector
          (IntVector *__return_storage_ptr__,Vector3 *localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = localPos->x;
  uVar3 = localPos->y;
  uVar4 = (pVVar1->oneVector).x;
  fVar5 = (float)uVar4 * _UNK_?;
  fVar6 = (pVVar1->oneVector).y * _UNK_?;
  fVar7 = (pVVar1->oneVector).z * _UNK_?;
  fVar8 = localPos->z;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar9 = (double)func_?((double)(fVar5 + (float)uVar2));
  __return_storage_ptr__->x = (int16_t)(int)dVar9;
  dVar9 = (double)func_?((double)(fVar6 + (float)uVar3));
  __return_storage_ptr__->y = (int16_t)(int)dVar9;
  dVar9 = (double)func_?((double)(fVar7 + fVar8));
  __return_storage_ptr__->z = (int16_t)(int)dVar9;
  return __return_storage_ptr__;
}


/* IntVector WorldPosToFineGrainedLocalPos(Vector3) */

IntVector *
MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
CubeMathFunctions_WorldPosToFineGrainedLocalPos
          (IntVector *__return_storage_ptr__,Vector3 *worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__System__Math;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = worldPos->x;
  uVar4 = worldPos->y;
  uVar5 = (pVVar2->oneVector).x;
  fVar6 = (pVVar2->oneVector).y * _UNK_?;
  fVar7 = (pVVar2->oneVector).z * _UNK_?;
  worldPos->x = (float)uVar5 * _UNK_? + (float)uVar3;
  worldPos->y = fVar6 + (float)uVar4;
  worldPos->z = fVar7 + worldPos->z;
  if (*(int *)&(pMVar1->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar7 = worldPos->x;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar8 = mscorlib.dll::System::Math::Math_Round_5
                    ((double)fVar7,0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar7 = worldPos->y;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar9 = mscorlib.dll::System::Math::Math_Round_5
                    ((double)fVar7,0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar7 = worldPos->z;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar10 = mscorlib.dll::System::Math::Math_Round_5
                    ((double)fVar7,0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (int16_t)(int)dVar8;
  __return_storage_ptr__->y = (int16_t)(int)dVar9;
  __return_storage_ptr__->z = (int16_t)(int)dVar10;
  return __return_storage_ptr__;
}


/* IntVector WorldPosToFineGrainedLocalPos(Vector3, Vector3) */

IntVector *
MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
          (IntVector *__return_storage_ptr__,Vector3 *worldPos,Vector3 *normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__System__Math;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = worldPos->x;
  uVar4 = worldPos->y;
  uVar5 = (pVVar2->oneVector).x;
  fVar6 = (pVVar2->oneVector).y * _UNK_?;
  fVar7 = (pVVar2->oneVector).z * _UNK_?;
  uVar8 = normal->x;
  fVar9 = normal->y * _UNK_?;
  fVar10 = normal->z * _UNK_?;
  worldPos->x = ((float)uVar5 * _UNK_? + (float)uVar3) - (float)uVar8 * _UNK_?;
  worldPos->y = (fVar6 + (float)uVar4) - fVar9;
  worldPos->z = (fVar7 + worldPos->z) - fVar10;
  if (*(int *)&(pMVar1->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar10 = worldPos->x;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar11 = mscorlib.dll::System::Math::Math_Round_5
                    ((double)fVar10,0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar10 = worldPos->y;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar12 = mscorlib.dll::System::Math::Math_Round_5
                    ((double)fVar10,0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar10 = worldPos->z;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar13 = mscorlib.dll::System::Math::Math_Round_5
                     ((double)fVar10,0,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (int16_t)(int)dVar11;
  __return_storage_ptr__->y = (int16_t)(int)dVar12;
  __return_storage_ptr__->z = (int16_t)(int)dVar13;
  return __return_storage_ptr__;
}

