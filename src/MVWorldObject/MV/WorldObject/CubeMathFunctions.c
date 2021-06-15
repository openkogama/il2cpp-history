
/* Vector3 FineGrainedLocalPosToTerrainLocalPos(IntVector) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_FineGrainedLocalPosToTerrainLocalPos
                    (Vector3 *__return_storage_ptr__,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  fVar3 = 0.0;
  func_?(&stack0xfffffff0,(float)(int)intVector.x,(float)(int)intVector.y,
                  (float)(int)intVector.z,0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffd8,*pVVar4,1.5,(MethodInfo *)0x0);
  VVar5.y = (float)uVar2;
  VVar5.x = (float)uVar1;
  VVar5.z = fVar3;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffcc,VVar5,*pVVar4,(MethodInfo *)0x0);
  VVar5 = *pVVar4;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                     ((Vector3 *)&stack0xffffffcc,VVar5,4.0,(MethodInfo *)0x0);
  uRam_?._0_4_ = pVVar4->x;
  uRam_?._4_4_ = pVVar4->y;
  fRam00000008 = pVVar4->z;
  return (Vector3 *)0x0;
}


/* Vector3 FineGrainedLocalPosToWorldPos(IntVector) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_FineGrainedLocalPosToWorldPos
                    (Vector3 *__return_storage_ptr__,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  func_?(&stack0xfffffff0,(float)(int)intVector.x,(float)(int)intVector.y,
                  (float)(int)intVector.z,0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,*pVVar2,1.5,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  uVar4 = pVVar2->y;
  a.y = (float)uVar3;
  a.x = (float)uVar1;
  a.z = (float)uVar4;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffe4,a,*pVVar2,(MethodInfo *)0x0);
  fVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* IntVector FromLocalPosToLocalPos(IntVector, ICubeModel, ICubeModel) */

IntVector MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_FromLocalPosToLocalPos
                    (IntVector fineGrainedPosition,ICubeModel *terrainWorldObject,
                    ICubeModel *fineGrainedTerrainWorldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2._0_4_ = 0;
  uStack_2._4_4_ = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  if (method != (MethodInfo *)0x0) {
    puVar5 = (undefined8 *)
             func_?(auStack_6,0,TypeInfo__MV__WorldObject__ICubeModel,method);
    uStack_1 = (undefined4)*puVar5;
    uStack_2._0_4_ = (undefined4)((ulonglong)*puVar5 >> 0x20);
    uStack_2._4_4_ = *(undefined4 *)(puVar5 + 1);
    fVar7 = (float10)func_?(&uStack_1,0,0);
    if (fineGrainedTerrainWorldObject != (ICubeModel *)0x0) {
      puVar5 = (undefined8 *)
               func_?(auStack_6,0,TypeInfo__MV__WorldObject__ICubeModel,
                               fineGrainedTerrainWorldObject);
      uStack_3 = *puVar5;
      uStack_4 = *(undefined4 *)(puVar5 + 1);
      fVar8 = (float10)func_?(&uStack_3,0,0);
      fVar9 = (float)((float10)(float)fVar7 / fVar8);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      uStack_2 = (double)((float)(int)fineGrainedPosition.z * fVar9);
      fVar7 = (float10)func_?(uStack_2);
      *(short *)fineGrainedPosition._0_4_ = (short)(int)fVar7;
      uStack_2 = (double)((float)(int)in_stack_10 * fVar9);
      fVar7 = (float10)func_?(uStack_2);
      *(short *)(fineGrainedPosition._0_4_ + 2) = (short)(int)fVar7;
      uStack_2 = (double)((float)(int)(short)terrainWorldObject * fVar9);
      fVar7 = (float10)func_?(uStack_2);
      *(short *)(fineGrainedPosition._0_4_ + 4) = (short)(int)fVar7;
      IVar11.z = extraout_DX;
      IVar11.x = fineGrainedPosition.x;
      IVar11.y = fineGrainedPosition.y;
      return IVar11;
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  IVar11 = (IntVector)(*pcVar12)();
  return IVar11;
}


/* Vector3 LocalIntVectorToLocalPos(IntVector) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_LocalIntVectorToLocalPos
                    (Vector3 *__return_storage_ptr__,IntVector localIntVector,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,(float)(int)localIntVector.x,(float)(int)localIntVector.y,
                  (float)(int)localIntVector.z,0);
  return __return_storage_ptr__;
}


/* IntVector LocalPosToLocalIntVector(Vector3) */

IntVector MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_LocalPosToLocalIntVector(Vector3 localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,*pVVar1,0.5,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  localPos.x = pVVar1->z;
  localPos.y = 0.0;
  auVar4._4_4_ = method;
  auVar4._0_4_ = localPos.z;
  auVar4._8_4_ = 0;
  fVar5 = (float)uVar3;
  b.x = (float)uVar2;
  b = (Vector3)CONCAT84(b._0_8_,b.x);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&localPos.y,(Vector3)(auVar4 << 0x20),b,(MethodInfo *)0x0);
  uVar6 = pVVar1->x;
  fVar7 = pVVar1->y;
  fVar8 = pVVar1->z;
  dStack9 = (double)(float)uVar6;
  localPos.z = SUB84(dStack9,0);
  fVar10 = (float10)func_?();
  fVar11 = localPos.x;
  dStack9 = (double)fVar7;
  *(short *)localPos.x = (short)(int)fVar10;
  localPos.z = SUB84(dStack9,0);
  fVar10 = (float10)func_?();
  dStack9 = (double)fVar8;
  *(short *)((int)fVar11 + 2) = (short)(int)fVar10;
  localPos.z = SUB84(dStack9,0);
  fVar10 = (float10)func_?();
  *(short *)((int)fVar11 + 4) = (short)(int)fVar10;
  IVar12.z = extraout_DX;
  IVar12._0_4_ = fVar11;
  return IVar12;
}


/* IntVector WorldPosToFineGrainedLocalPos(Vector3) */

IntVector MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_WorldPosToFineGrainedLocalPos(Vector3 worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe8,*pVVar1,1.5,(MethodInfo *)0x0);
  a.z = (float)method;
  a.x = (float)(int)worldPos._4_8_;
  a.y = (float)(int)((ulonglong)worldPos._4_8_ >> 0x20);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffe8,a,*pVVar1,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  dVar5 = mscorlib.dll::System::Math::Math_Round_4((double)(float)uVar2,0,(MethodInfo *)0x0);
  fVar6 = (float)dVar5;
  dVar5 = mscorlib.dll::System::Math::Math_Round_4((double)(float)uVar3,0,(MethodInfo *)0x0);
  fVar7 = (float)dVar5;
  dVar5 = mscorlib.dll::System::Math::Math_Round_4((double)fVar4,0,(MethodInfo *)0x0);
  uRam_? = (short)(int)fVar6;
  uRam_? = (short)(int)fVar7;
  uRam_? = (short)(int)dVar5;
  return (IntVector)((uint6)extraout_DX << 0x20);
}


/* IntVector WorldPosToFineGrainedLocalPos(Vector3, Vector3) */

IntVector MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
          CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                    (Vector3 worldPos,Vector3 normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,*pVVar1,1.5,(MethodInfo *)0x0);
  a_01.z = normal.x;
  a_01.x = (float)(int)worldPos._4_8_;
  a_01.y = (float)(int)((ulonglong)worldPos._4_8_ >> 0x20);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffe4,a_01,*pVVar1,(MethodInfo *)0x0);
  normal.x = normal.z;
  fVar2 = normal.y;
  fVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  normal.z = 0.01;
  normal.y = (float)method;
  a.y = normal.x;
  a.x = fVar2;
  a.z = (float)method;
  fStack6 = (float)uVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&normal.y,a,0.01,(MethodInfo *)0x0);
  normal.z = (float)&normal.y;
  normal.y = (float)&UNK_?;
  a_00.y = fStack6;
  a_00.x = fVar3;
  a_00.z = fVar5;
  fStack7 = fVar5;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)normal.z,a_00,*pVVar1,(MethodInfo *)0x0);
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  normal.x = pVVar1->z;
  dVar10 = mscorlib.dll::System::Math::Math_Round_4((double)(float)uVar8,0,(MethodInfo *)0x0);
  fVar3 = (float)dVar10;
  dVar10 = mscorlib.dll::System::Math::Math_Round_4((double)(float)uVar9,0,(MethodInfo *)0x0);
  dVar11 = mscorlib.dll::System::Math::Math_Round_4((double)normal.x,0,(MethodInfo *)0x0);
  _UNK_? = (short)(int)fVar3;
  _UNK_? = (short)(int)dVar10;
  _UNK_? = (short)(int)dVar11;
  IVar12.z = extraout_DX;
  IVar12._0_4_ = &UNK_?;
  return IVar12;
}

