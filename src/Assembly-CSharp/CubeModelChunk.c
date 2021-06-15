
/* Void AddToChunk(IntVector, Cube, Boolean) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AddToChunk
               (CubeModelChunk *this,IntVector iVector,Cube *cube,bool setVisibility,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CVar1 = _iVector;
  pDVar2 = (this->fields).cells;
  if (pDVar2 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    key = iVector;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                      (pDVar2,key,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar3 == 0) {
      piVar4 = &(this->fields).cubeCount;
      *piVar4 = *piVar4 + 1;
    }
    pDVar2 = (this->fields).cells;
    iVector._0_4_ = (Cube *)0x0;
    iVector.z._0_1_ = 0;
    stack0x0000000d = 0;
    func_?(&iVector,cube,0);
    if (pDVar2 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__set_Item
                (pDVar2,key,_iVector,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
                );
      if (setVisibility != 0) {
        CubeModelChunk_SetCubeVisibilityWithNeighbors(this,CVar1._0_6_,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AdvancedFaceVisibilityTest(FaceFlags, FaceFlags, Cube ByRef, Cube ByRef) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AdvancedFaceVisibilityTest
               (FaceFlags__Enum faceFlagCube,FaceFlags__Enum faceFlagOpposite,Cube **cube,
               Cube **neighborCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pVVar1 = (Vector3__Array *)
           MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                     (faceFlagCube,(MethodInfo *)0x0);
  if (*cube == (Cube *)0x0) goto code_?;
  pVVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     ((CubeBase *)*cube,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?();
  }
  Cube::Cube_GetFace_1(pVVar2,(Face__Enum)pVVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = (Vector3__Array *)&UNK_?;
  bVar3 = CubeModelChunk_AllFaceCornersIsTouchingCubeBorder
                    ((Face__Enum)pVVar1,(Vector3__Array **)&stack0xfffffff4,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    faceFlagOpposite = (FaceFlags__Enum)&UNK_?;
    func_?();
  }
  faceFlagCube._0_1_ = FaceFlags__Enum_Left|FaceFlags__Enum_Front|FaceFlags__Enum_Top;
  unaff_EDI = (Vector3__Array *)
              MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                        (faceFlagOpposite,(MethodInfo *)0x0);
  if (*neighborCube == (Cube *)0x0) goto code_?;
  cube = (Cube **)&UNK_?;
  unaff_EBX = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                        ((CubeBase *)*neighborCube,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?();
  }
  neighborCube = (Cube **)&UNK_?;
  pVVar4 = Cube::Cube_GetFace_1(unaff_EBX,(Face__Enum)unaff_EDI,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = CubeModelChunk_AllFaceCornersIsTouchingCubeBorder
                    ((Face__Enum)unaff_EDI,(Vector3__Array **)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  switch(pVVar1) {
  case (Vector3__Array *)0x0:
  case (Vector3__Array *)0x1:
    pVVar1 = (Vector3__Array *)0x0;
    pVVar5 = pVVar4;
    do {
      unaff_EBX = pVVar2;
      unaff_EDI = pVVar4;
      if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
      pVStack6 = pVVar1;
      pfVar7 = (float *)func_?();
      pVVar8 = (Vector3__Array *)*pfVar7;
      if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
      pVStack6 = (Vector3__Array *)(3 - (int)pVVar1);
      pfVar7 = (float *)func_?();
      if ((float)pVVar8 != *pfVar7) {
        return;
      }
      pVStack9 = pVVar1;
      pVVar4 = pVVar5;
      iVar10 = func_?();
      pVVar8 = *(Vector3__Array **)(iVar10 + 8);
      pVVar5 = pVVar4;
      iVar10 = func_?();
      in_AF = 0;
      if ((float)pVVar8 != *(float *)(iVar10 + 8)) {
        return;
      }
      pVVar1 = (Vector3__Array *)((int)&pVVar1->klass + 1);
    } while ((int)pVVar1 < 4);
    goto code_?;
  case (Vector3__Array *)0x2:
  case (Vector3__Array *)0x3:
    pVVar1 = pVVar2;
    if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
    pVStack6 = (Vector3__Array *)0x0;
    pfVar7 = (float *)func_?();
    pVVar5 = (Vector3__Array *)*pfVar7;
    unaff_EDI = pVVar4;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    pVStack6 = (Vector3__Array *)0x1;
    pfVar7 = (float *)func_?();
    if ((float)pVVar5 != *pfVar7) {
      return;
    }
    pVStack9 = (Vector3__Array *)0x0;
    iVar10 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar10 + 4);
    iVar10 = func_?();
    if ((float)pVVar1 != *(float *)(iVar10 + 4)) {
      return;
    }
    pfVar7 = (float *)func_?();
    pVVar1 = (Vector3__Array *)*pfVar7;
    pfVar7 = (float *)func_?();
    if ((float)pVVar1 != *pfVar7) {
      return;
    }
    iVar10 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar10 + 4);
    iVar10 = func_?();
    if ((float)pVVar1 != *(float *)(iVar10 + 4)) {
      return;
    }
    pfVar7 = (float *)func_?();
    pVVar1 = (Vector3__Array *)*pfVar7;
    pfVar7 = (float *)func_?();
    if ((float)pVVar1 != *pfVar7) {
      return;
    }
    iVar10 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar10 + 4);
    iVar10 = func_?();
    if ((float)pVVar1 != *(float *)(iVar10 + 4)) {
      return;
    }
    pfVar7 = (float *)func_?();
    pVVar1 = (Vector3__Array *)*pfVar7;
    pfVar7 = (float *)func_?();
    bVar11 = NAN((float)pVVar1) || NAN(*pfVar7);
    bVar12 = (float)pVVar1 == *pfVar7;
    break;
  case (Vector3__Array *)0x4:
  case (Vector3__Array *)0x5:
    pVVar1 = pVVar2;
    if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
    pVStack6 = (Vector3__Array *)0x0;
    iVar10 = func_?();
    pVVar5 = *(Vector3__Array **)(iVar10 + 8);
    unaff_EDI = pVVar4;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    pVStack6 = (Vector3__Array *)0x1;
    iVar10 = func_?();
    if ((float)pVVar5 != *(float *)(iVar10 + 8)) {
      return;
    }
    pVStack9 = (Vector3__Array *)0x0;
    iVar10 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar10 + 4);
    iVar10 = func_?();
    if ((float)pVVar1 != *(float *)(iVar10 + 4)) {
      return;
    }
    iVar10 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar10 + 8);
    iVar10 = func_?();
    if ((float)pVVar1 != *(float *)(iVar10 + 8)) {
      return;
    }
    iVar10 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar10 + 4);
    iVar10 = func_?();
    if ((float)pVVar1 != *(float *)(iVar10 + 4)) {
      return;
    }
    iVar10 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar10 + 8);
    iVar10 = func_?();
    if ((float)pVVar1 != *(float *)(iVar10 + 8)) {
      return;
    }
    iVar10 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar10 + 4);
    iVar10 = func_?();
    if ((float)pVVar1 != *(float *)(iVar10 + 4)) {
      return;
    }
    iVar10 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar10 + 8);
    iVar10 = func_?();
    bVar11 = NAN((float)pVVar1) || NAN(*(float *)(iVar10 + 8));
    bVar12 = (float)pVVar1 == *(float *)(iVar10 + 8);
    break;
  default:
    goto code_?;
  }
  neighborCube = (Cube **)0x2;
  cube = (Cube **)0x3;
  faceFlagOpposite = FaceFlags__Enum_Bottom|FaceFlags__Enum_Top;
  faceFlagCube._0_1_ = FaceFlags__Enum_Bottom;
  if (bVar11 != bVar12) {
    iVar10 = func_?();
    pVVar5 = *(Vector3__Array **)(iVar10 + 4);
    iVar10 = func_?();
    pVVar1 = pVVar2;
    if ((float)pVVar5 == *(float *)(iVar10 + 4)) {
code_?:
      in_AF = 0;
      unaff_EDI = pVVar4;
      if (*cube != (Cube *)0x0) {
        puVar13 = &((*cube)->fields).hiddenSides;
        *puVar13 = *puVar13 | (undefined1)faceFlagCube;
        if (*neighborCube != (Cube *)0x0) {
          puVar13 = &((*neighborCube)->fields).hiddenSides;
          *puVar13 = *puVar13 | (byte)faceFlagOpposite;
          return;
        }
      }
code_?:
      bVar14 = 0;
      pVStack6 = (Vector3__Array *)0x0;
      iVar10 = func_?();
      unaff_EDI->klass = pVVar1->klass;
      bVar15 = (byte)((uint)iVar10 >> 8);
      bVar16 = in_stack_17 + bVar15;
      bVar12 = CARRY1(in_stack_17,bVar15) || CARRY1(bVar16,bVar14);
      cVar18 = bVar16 + bVar14;
      pVStack9 =
           (Vector3__Array *)
           ((uint)(in_NT & 1) * 0x4000 |
            (uint)(SCARRY1(in_stack_17,bVar15) != SCARRY1(bVar16,bVar14)) * 0x800 |
            (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(cVar18 < '\0') * 0x80 |
            (uint)(cVar18 == '\0') * 0x40 | (uint)(in_AF & 1) * 0x10 |
            (uint)((POPCOUNT(cVar18) & 1U) == 0) * 4 | (uint)bVar12 | (uint)(in_ID & 1) * 0x200000 |
            (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
           (uint)(in_AC & 1) * 0x40000);
      pVVar19 = pVVar1[-1].vector + 0x18;
      bVar16 = *(byte *)&pVVar19->x;
      bVar15 = *(char *)&pVVar19->x + extraout_CL;
      *(byte *)&pVVar19->x = bVar15 + bVar12;
      *(char *)(iVar10 + -0x67efbc63) =
           *(char *)(iVar10 + -0x67efbc63) + (char)unaff_EBX + '\x03' +
           (CARRY1(bVar16,extraout_CL) || CARRY1(bVar15,bVar12));
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
code_?:
  return;
}


/* Boolean AllFaceCornersIsTouchingCubeBorder(Face, Vector3[] ByRef) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AllFaceCornersIsTouchingCubeBorder
               (Face__Enum face,Vector3__Array **faceIndices,MethodInfo *method)

{
  uStack_1 = 0;
  uVar2 = 0xffffffff;
  fStack_3 = 0.0;
  fStack_4 = _UNK_?;
  switch(face) {
  case Face__Enum_Top:
    uVar2 = 1;
    break;
  case Face__Enum_Bottom:
    uVar2 = 1;
    fStack_4 = _UNK_?;
    break;
  case Face__Enum_Front:
    uVar2 = 2;
    fStack_4 = _UNK_?;
    break;
  case Face__Enum_Back:
    uVar2 = 2;
    break;
  case Face__Enum_Left:
    fStack_4 = _UNK_?;
  case Face__Enum_Right:
    uVar2 = 0;
  }
  uVar5 = 0;
  pVVar6 = *faceIndices;
  bVar7 = 0;
  if (pVVar6 == (Vector3__Array *)0x0) {
    uVar8 = 0;
    func_?(0);
  }
  else {
    unaff_EDI = pVVar6->vector;
    while( true ) {
      if ((int)pVVar6->max_length <= (int)uVar5) {
        return 1;
      }
      uVar8 = 0;
      bVar7 = uVar5 < pVVar6->max_length;
      if (!(bool)bVar7) break;
      uStack_1._0_4_ = unaff_EDI->x;
      uStack_1._4_4_ = unaff_EDI->y;
      fStack_3 = unaff_EDI->z;
      fVar9 = (float10)func_?(&uStack_1,uVar2);
      if ((float)fVar9 != fStack_4) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      unaff_EDI = unaff_EDI + 1;
    }
  }
  uVar8 = func_?(0,uVar8);
  func_?(uVar8);
  LOCK();
  iVar10 = *(int *)((int)(unaff_EDI + -0x8097ea6) + 0xb);
  *(undefined4 *)((int)(unaff_EDI + -0x8097ea6) + 0xb) = uVar2;
  UNLOCK();
  bVar11 = (char)iVar10 + 1;
  pcVar12 = (char *)(iVar10 + -0x44efbc5f);
  *pcVar12 = *pcVar12 + extraout_DH +
            (CARRY1(in_stack_13,bVar11) || CARRY1(in_stack_13 + bVar11,bVar7));
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* CubeModelChunk CloneGeometry(Vector3) */

CubeModelChunk *
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CloneGeometry
          (CubeModelChunk *this,Vector3 scale,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (TimeZoneInfo__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  fStack_7 = 0.0;
  pUStack_8 = (UnityAction *)0x0;
  iStack_9 = 0;
  func_?();
  IVar10 = (this->fields).chunkPos;
  this_02 = (TimeZoneInfo_AdjustmentRule *)(uint)(ushort)(this->fields).chunkPos.z;
  puStack_11 = (undefined4 *)&stack0xffffff74;
  puStack_4 = &stack0xffffff74;
  this_01 = (TimeZoneInfo_AdjustmentRule__Array *)func_?(TypeInfo__CubeModelChunk);
  uStack_12 = this_01;
  CubeModelChunk__ctor((CubeModelChunk *)this_01,IVar10,(MethodInfo *)0x0);
  this_00 = (this->fields).cells;
  pTStack_13 = this_01;
  if (this_00 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
code_?:
    uVar14 = SUB42(this_02,0);
  }
  else {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
    Dictionary_2_UnityEngine_Vector3_System_Byte__GetEnumerator
              (&DStack_15,(Dictionary_2_UnityEngine_Vector3_System_Byte_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar16 = func_?(), cVar16 != '\0') {
      pCVar17 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                         ((Color *)&DStack_15.current,
                          (TierUnlockedPopupContentBase *)&stack0xffffff80,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                         );
      auStack_6._0_4_ = pCVar17->r;
      auStack_6._4_4_ = pCVar17->g;
      fStack_7 = pCVar17->b;
      pUStack_8 = (UnityAction *)pCVar17->a;
      if (this_01 == (TimeZoneInfo_AdjustmentRule__Array *)0x0) goto code_?;
      this_02 = this_01->vector[0xd];
      puVar18 = (undefined4 *)func_?((short)auStack_19,auStack_6);
      uStack_20 = *puVar18;
      uStack_12 = (TimeZoneInfo_AdjustmentRule__Array *)
                  CONCAT22(*(undefined2 *)(puVar18 + 1),(undefined2)uStack_12);
      iStack_9 = (int64_t)System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_BaseUtcOffset
                                     ((TimeZoneInfo *)auStack_6,
                                      MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                                     );
      value = (Cell)func_?();
      if (this_02 == (TimeZoneInfo_AdjustmentRule *)0x0) goto code_?;
      IVar10.z = uStack_12._2_2_;
      IVar10.x = (undefined2)uStack_20;
      IVar10.y = uStack_20._2_2_;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__Add
                ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)this_02,IVar10,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Add_MV__WorldObject__IntVector__Cell_
                );
    }
    uVar14 = 0;
    *puStack_11 = 0x65;
    uStack_1 = 0xffffffff;
    func_?(&stack0xffffff80,
                    (short)
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   );
    if (this_01 != (TimeZoneInfo_AdjustmentRule__Array *)0x0) {
      this_01->vector[10] = (TimeZoneInfo_AdjustmentRule *)(this->fields).cubeCount;
      CubeModelChunk_RebuildChunk((CubeModelChunk *)this_01,scale,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return (CubeModelChunk *)this_01;
    }
  }
  func_?();
  func_?(uVar14,0);
  pcVar21 = (code *)swi(3);
  pCVar22 = (CubeModelChunk *)(*pcVar21)();
  return pCVar22;
}


/* Boolean CompareGeometry(CubeModelChunk) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CompareGeometry
               (CubeModelChunk *this,CubeModelChunk *chunk,MethodInfo *method)

{
  DStack_1.fields.hcp = (IEqualityComparer_1_UnityEngine_Vector3_ *)&stack0xfffffffc;
  uStack_2._0_1_ = 0xff;
  uStack_2._1_3_ = 0xffffff;
  pMStack_3 = (MaskableGraphic_CullStateChangedEvent *)&DAT_?;
  DStack_1.fields.generation = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&DStack_1.fields.generation;
  DStack_1.fields.serialization_info = (SerializationInfo *)&stack0xffffff48;
  pMVar4 = (Material *)&stack0xfffffffc;
  pRVar5 = (RectMask2D *)&stack0xffffff48;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pMVar4 = (Material *)DStack_1.fields.hcp;
    pRVar5 = (RectMask2D *)DStack_1.fields.serialization_info;
  }
  DStack_1.fields.serialization_info = (SerializationInfo *)pRVar5;
  DStack_1.fields.hcp = (IEqualityComparer_1_UnityEngine_Vector3_ *)pMVar4;
  DStack_1.fields.count = 0;
  auStack_6._0_4_ = (Text__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  UStack_7._._._._.m_CachedPtr = (MonoBehaviour__Fields)(Behaviour__Fields)0x0;
  pMStack_8 = (Material *)0x0;
  CStack_9.cube = (Cube *)0x0;
  CStack_9.lightValue = 0;
  CStack_9._5_3_ = 0;
  func_?();
  DStack_1.fields.keySlots = (Vector3__Array *)0xffffffff;
  pDVar10 = (this->fields).cells;
  DStack_1.fields.linkSlots = (Link__Array *)&stack0xffffff48;
  DStack_1.fields.serialization_info = (SerializationInfo *)&stack0xffffff48;
  if (((pDVar10 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) &&
      (DStack_1.fields.linkSlots = (Link__Array *)&stack0xffffff48,
      DStack_1.fields.serialization_info = (SerializationInfo *)&stack0xffffff48,
      DStack_1.fields.valueSlots =
           (Byte__Array *)
           System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
           Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
           Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                       *)pDVar10,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                     ), chunk != (CubeModelChunk *)0x0)) &&
     (pDVar10 = (chunk->fields).cells, pDVar10 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0))
  {
    pUVar11 = (UnityAction *)
             System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)pDVar10,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                       );
    if ((UnityAction *)DStack_1.fields.valueSlots == pUVar11) {
      pDVar10 = (this->fields).cells;
      if (pDVar10 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__GetEnumerator
                ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Vector3_System_Byte_ *)auStack_12,
                 (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)pDVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                );
      uStack_2._0_1_ = 0;
      uStack_2._1_3_ = 0;
      do {
        cVar13 = func_?();
        if (cVar13 == '\0') {
          iVar14 = 0xa3;
          goto code_?;
        }
        pCVar15 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                           ((Color *)(auStack_12 + 8),
                            (TierUnlockedPopupContentBase *)&stack0xffffff54,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                           );
        auStack_6._0_4_ = pCVar15->r;
        auStack_6._4_4_ = pCVar15->g;
        UStack_7._._._._.m_CachedPtr = (MonoBehaviour__Fields)pCVar15->b;
        pMStack_8 = (Material *)pCVar15->a;
        auStack_12._8_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
        ;
        pDVar10 = (chunk->fields).cells;
        auStack_12._4_4_ = auStack_6;
        auStack_12._0_4_ = &DStack_1;
        pIVar16 = (IntVector *)func_?();
        if (pDVar10 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
        bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                          (pDVar10,*pIVar16,&CStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                          );
        if (bVar17 == 0) {
          iVar14 = 0xa5;
          goto code_?;
        }
        TVar18 = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_BaseUtcOffset
                           ((TimeZoneInfo *)auStack_6,
                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                           );
        DStack_1.fields.valueSlots = (Byte__Array *)TVar18._ticks;
        b = CStack_9.cube;
        if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0
            ) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
          func_?();
        }
        bVar17 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                          ((CubeBase *)DStack_1.fields.valueSlots,(CubeBase *)b,(MethodInfo *)0x0);
      } while (bVar17 == 0);
      iVar14 = 0xa5;
code_?:
      uStack_2._0_1_ = 0xff;
      uStack_2._1_3_ = 0xffffff;
      func_?();
      if (DStack_1.fields.count != 0) goto code_?;
      if (iVar14 != 0xa5) {
        bVar17 = 1;
        goto code_?;
      }
    }
    bVar17 = 0;
code_?:
    *unaff_FS_OFFSET = DStack_1.fields.generation;
    return bVar17;
  }
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  bVar17 = (*pcVar19)();
  return bVar17;
}


/* Boolean CompareGeometry(CubeModelChunk, Int32 ByRef, Int32 ByRef, Boolean) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CompareGeometry_1
               (CubeModelChunk *this,CubeModelChunk *chunk,int32_t *matchingCubeCount,
               int32_t *investigatedCubeCount,bool visibleCubesOnly,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff48;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff48;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  auStack_8._24_4_ = 0.0;
  auStack_8._16_4_ = 0.0;
  auStack_8._20_4_ = 0.0;
  iStack_9 = 0;
  auStack_10._0_4_ = (TimeZoneInfo__Class *)0x0;
  auStack_10._4_4_ = (MonitorData *)0x0;
  pUStack_11 = (UnityAction *)0x0;
  fStack_12 = 0.0;
  auStack_8._0_4_ = (TierUnlockedPopupContentBase__Class *)0x0;
  auStack_8._4_4_ = (MonitorData *)0x0;
  auStack_8._8_4_ = (Component_1__Fields)0x0;
  auStack_8._12_4_ = 0.0;
  uStack_13._0_4_ = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  uStack_13._4_4_ = (String *)0x0;
  func_?();
  iStack_14 = 0;
  pDVar15 = (this->fields).cells;
  iStack_16 = 0;
  puStack_17 = (undefined4 *)&stack0xffffff48;
  puStack_5 = &stack0xffffff48;
  if (pDVar15 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
code_?:
    iVar18 = func_?(0);
  }
  else {
    puStack_17 = (undefined4 *)&stack0xffffff48;
    puStack_5 = &stack0xffffff48;
    pDVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
             Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Vector3_System_Byte_ *)
                        (auStack_8 + 0x1c),(Dictionary_2_UnityEngine_Vector3_System_Byte_ *)pDVar15,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                       );
    auStack_8._0_4_ = pDVar19->dictionary;
    auStack_8._4_4_ = pDVar19->next;
    auStack_8._8_4_ = pDVar19->stamp;
    auStack_8._12_4_ = (pDVar19->current).key.x;
    auStack_8._16_4_ = (pDVar19->current).key.y;
    auStack_8._20_4_ = (pDVar19->current).key.z;
    auStack_8._24_4_ = *(undefined4 *)&(pDVar19->current).value;
    uStack_2 = 0;
    iVar20 = 0;
    iVar21 = 0;
code_?:
    iStack_22 = iVar21;
    iStack_23 = iVar20;
    cVar24 = func_?(auStack_8,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                           );
    if (cVar24 != '\0') {
      pCVar25 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                         (&CStack_26,(TierUnlockedPopupContentBase *)auStack_8,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                         );
      auStack_10._0_4_ = pCVar25->r;
      auStack_10._4_4_ = pCVar25->g;
      pUStack_11 = (UnityAction *)pCVar25->b;
      fStack_12 = pCVar25->a;
      if (visibleCubesOnly == 0) goto code_?;
      TVar27 = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_BaseUtcOffset
                         ((TimeZoneInfo *)auStack_10,
                          MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                         );
      if ((int)TVar27._ticks != 0) goto code_?;
      goto code_?;
    }
    *puStack_17 = 0xda;
    uStack_2 = 0xffffffff;
    func_?(auStack_8,
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   );
    iVar18 = iStack_9;
    if (iStack_9 == 0) {
      *matchingCubeCount = *matchingCubeCount + iStack_14;
      *investigatedCubeCount = *investigatedCubeCount + iStack_16;
      *unaff_FS_OFFSET = uStack_4;
      return iVar21 == iVar20;
    }
  }
  func_?(iVar18,0,0);
  pcVar28 = (code *)swi(3);
  bVar29 = (*pcVar28)();
  return bVar29;
code_?:
  iVar20 = iStack_16;
  iVar21 = iStack_14;
  if (*(char *)((int)TVar27._ticks + 0x14) != '?') {
code_?:
    if (chunk != (CubeModelChunk *)0x0) {
      pDVar15 = (chunk->fields).cells;
      puVar30 = (undefined4 *)
               func_?(auStack_31,auStack_10,
                               MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                              );
      if (pDVar15 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      cVar24 = func_?(pDVar15,*puVar30,*(undefined2 *)(puVar30 + 1),&uStack_13,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                             );
      if (cVar24 != '\0') {
        for (iVar20 = 0; iVar20 < 8; iVar20 = iVar20 + 1) {
          TVar27 = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_BaseUtcOffset
                             ((TimeZoneInfo *)auStack_10,
                              MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                             );
          if (((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)TVar27._ticks ==
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) ||
             (pOVar32 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   TVar27._ticks,(MethodInfo *)0x0), pOVar32 == (Object *)0x0))
          goto code_?;
          cStack_33 = func_?();
          if (((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)uStack_13 ==
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) ||
             (pOVar32 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   uStack_13,(MethodInfo *)0x0), pOVar32 == (Object *)0x0))
          goto code_?;
          cVar24 = func_?();
          if (cStack_33 != cVar24) goto code_?;
        }
        iVar21 = iStack_14 + 1;
        iVar20 = iStack_16 + 1;
        iStack_16 = iVar20;
        iStack_14 = iVar21;
        goto code_?;
      }
    }
code_?:
    iVar20 = iStack_16 + 1;
    iVar21 = iStack_14;
    iStack_16 = iVar20;
  }
  goto code_?;
}


/* Boolean ContainsCube(IntVector) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_ContainsCube
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                      (this_00,iVector,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_Destroy
               (CubeModelChunk *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._24_4_ = 0.0;
  auStack_6._0_4_ = (TierUnlockedPopupContentBase__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Component_1__Fields)0x0;
  auStack_6._12_4_ = 0.0;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  func_?();
  this_00 = (this->fields).instances;
  if (this_00 != (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffff90;
    puStack_4 = &stack0xffffff90;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
             List_1_UnityEngine_Vector4__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Vector4_ *)(auStack_6 + 0x1c),
                        (List_1_UnityEngine_Vector4_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    auStack_6._0_4_ = pLVar8->l;
    auStack_6._4_4_ = pLVar8->next;
    auStack_6._8_4_ = pLVar8->ver;
    auStack_6._12_4_ = (pLVar8->current).x;
    auStack_6._16_4_ = (pLVar8->current).y;
    auStack_6._20_4_ = (pLVar8->current).z;
    auStack_6._24_4_ = (pLVar8->current).w;
    uStack_1 = 0;
    while (cVar9 = func_?(), cVar9 != '\0') {
      pCVar10 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                         (&CStack_11,(TierUnlockedPopupContentBase *)auStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__get_Current__
                         );
      pOStack_12 = (Object_1 *)pCVar10->r;
      fStack_13 = pCVar10->g;
      fStack_14 = pCVar10->b;
      pUStack_15 = (UnityAction *)pCVar10->a;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                (pOStack_12,(MethodInfo *)0x0);
    }
    *puStack_7 = 0x44;
    uStack_1 = 0xffffffff;
    func_?(auStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__Dispose__
                   );
    func_?(&(this->fields).sharedMeshData,0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  puStack_7 = (undefined4 *)&stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  func_?(0);
  func_?(0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void EvaluateReferenceCount(Int32, Int32) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_EvaluateReferenceCount
               (CubeModelChunk *this,int32_t oldReferenceCount,int32_t newReferenceCount,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (oldReferenceCount == 0) {
    if (0 < newReferenceCount) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                         ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xfffffff0,*pVVar1,4.0,(MethodInfo *)0x0);
      this_00 = pVVar1->y;
      CubeModelChunk_RebuildChunk(this,*pVVar1,(MethodInfo *)0x0);
      CubeModelChunk_RestoreSharedMeshOnInstances((CubeModelChunk *)this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Loading_mesh,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((0 < oldReferenceCount) && (newReferenceCount == 0)) {
    CubeModelChunk_RevokeSharedMeshOnInstances(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Unloading_mesh,(MethodInfo *)0x0);
  }
  return;
}


/* Cube GetCube(IntVector) */

Cube * Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetCube
                 (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CStack_1.cube = (Cube *)0x0;
  CStack_1.lightValue = 0;
  CStack_1._5_3_ = 0;
  this_00 = (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                      (this_00,iVector,&CStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                      );
    if (bVar2 == 0) {
      CStack_1.cube = (Cube *)0x0;
    }
    return CStack_1.cube;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pCVar4 = (Cube *)(*pcVar3)();
  return pCVar4;
}


/* Vector2[] GetFaceUvs(Vector3[], Face, Vector3) */

Vector2__Array *
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetFaceUvs
          (Vector3__Array *faceVertices,Face__Enum face,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((scale.x != scale.y) || (scale.x != scale.z)) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_algorithm_does_not_support_non_u,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelChunk);
  }
  pCVar1 = TypeInfo__CubeModelChunk->static_fields;
  fVar2 = (pCVar1->uvOffsetVector0).y;
  (pCVar1->uvOffsetVector).x = (pCVar1->uvOffsetVector0).x;
  (pCVar1->uvOffsetVector).y = fVar2;
  switch(face) {
  case Face__Enum_Top:
    if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 == (Vector2__Array *)0x0) ||
       (unaff_ESI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    pVVar4 = (Vector2__Class *)0x0;
    puVar5 = (undefined4 *)func_?(0);
    uVar6 = *puVar5;
    iVar7 = func_?(0);
    bVar8 = 0;
    if (pVVar3->max_length == 0) goto code_?;
    func_?(pVVar3->vector,uVar6,*(undefined4 *)(iVar7 + 8),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pVVar4 = (Vector2__Class *)0x1;
    puVar5 = (undefined4 *)func_?(1);
    uVar6 = *puVar5;
    iVar7 = func_?(1);
    bVar8 = pVVar3->max_length == 0;
    if (pVVar3->max_length < 2) goto code_?;
    func_?(pVVar3->vector + 1,uVar6,*(undefined4 *)(iVar7 + 8),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pVVar4 = (Vector2__Class *)0x2;
    puVar5 = (undefined4 *)func_?(2);
    uVar6 = *puVar5;
    iVar7 = func_?(2);
    bVar8 = pVVar3->max_length < 2;
    if (pVVar3->max_length < 3) goto code_?;
    func_?(pVVar3->vector + 2,uVar6,*(undefined4 *)(iVar7 + 8),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pFVar9 = (Face__Enum *)func_?(3);
    face = *pFVar9;
    iVar7 = func_?(3);
    bVar8 = pVVar3->max_length < 3;
    pVVar4 = (Vector2__Class *)0x0;
    uVar6 = *(undefined4 *)(iVar7 + 8);
    if (3 < pVVar3->max_length) {
code_?:
      func_?(pVVar3->vector + 3,face,uVar6,0);
      goto code_?;
    }
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
    break;
  case Face__Enum_Bottom:
    if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 == (Vector2__Array *)0x0) ||
       (unaff_ESI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    pVVar4 = (Vector2__Class *)0x0;
    pFVar9 = (Face__Enum *)func_?(0);
    FVar10 = *pFVar9;
    iVar7 = func_?(0);
    bVar8 = 0;
    if (pVVar3->max_length == 0) goto code_?;
    func_?(pVVar3->vector,FVar10 ^ _UNK_?,*(undefined4 *)(iVar7 + 8),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pVVar4 = (Vector2__Class *)0x1;
    pFVar9 = (Face__Enum *)func_?(1);
    FVar10 = *pFVar9;
    iVar7 = func_?(1);
    bVar8 = pVVar3->max_length == 0;
    if (pVVar3->max_length < 2) goto code_?;
    func_?(pVVar3->vector + 1,FVar10 ^ _UNK_?,*(undefined4 *)(iVar7 + 8),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pVVar4 = (Vector2__Class *)0x2;
    pFVar9 = (Face__Enum *)func_?(2);
    FVar10 = *pFVar9;
    iVar7 = func_?(2);
    bVar8 = pVVar3->max_length < 2;
    if (pVVar3->max_length < 3) goto code_?;
    func_?(pVVar3->vector + 2,FVar10 ^ _UNK_?,*(undefined4 *)(iVar7 + 8),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pVVar4 = (Vector2__Class *)0x3;
    pFVar9 = (Face__Enum *)func_?(3);
    face = *pFVar9;
    iVar7 = func_?(3);
    bVar8 = pVVar3->max_length < 3;
    uVar6 = *(undefined4 *)(iVar7 + 8);
    if (3 < pVVar3->max_length) {
code_?:
      func_?(pVVar3->vector + 3,face ^ _UNK_?,uVar6,0);
      pCVar1 = TypeInfo__CubeModelChunk->static_fields;
      fVar2 = (pCVar1->uvOffsetVector1).y;
      (pCVar1->uvOffsetVector).x = (pCVar1->uvOffsetVector1).x;
      (pCVar1->uvOffsetVector).y = fVar2;
      goto code_?;
    }
    break;
  case Face__Enum_Front:
    if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 == (Vector2__Array *)0x0) ||
       (unaff_ESI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    pVVar4 = (Vector2__Class *)0x0;
    puVar5 = (undefined4 *)func_?(0);
    uVar6 = *puVar5;
    iVar7 = func_?(0);
    bVar8 = 0;
    if (pVVar3->max_length == 0) goto code_?;
    func_?(pVVar3->vector,uVar6,*(undefined4 *)(iVar7 + 4),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pVVar4 = (Vector2__Class *)0x1;
    puVar5 = (undefined4 *)func_?(1);
    uVar6 = *puVar5;
    iVar7 = func_?(1);
    bVar8 = pVVar3->max_length == 0;
    if (pVVar3->max_length < 2) goto code_?;
    func_?(pVVar3->vector + 1,uVar6,*(undefined4 *)(iVar7 + 4),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pVVar4 = (Vector2__Class *)0x2;
    puVar5 = (undefined4 *)func_?(2);
    uVar6 = *puVar5;
    iVar7 = func_?(2);
    bVar8 = pVVar3->max_length < 2;
    if (2 < pVVar3->max_length) {
      func_?(pVVar3->vector + 2,uVar6,*(undefined4 *)(iVar7 + 4),0);
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        pFVar9 = (Face__Enum *)func_?(3);
        face = *pFVar9;
code_?:
        iVar7 = func_?(3);
        bVar8 = pVVar3->max_length < 3;
        pVVar4 = (Vector2__Class *)0x0;
        uVar6 = *(undefined4 *)(iVar7 + 4);
        unaff_ESI = faceVertices;
        if (3 < pVVar3->max_length) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  case Face__Enum_Back:
    if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 == (Vector2__Array *)0x0) ||
       (unaff_ESI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    pFVar9 = (Face__Enum *)func_?(0);
    FVar10 = *pFVar9;
    iVar7 = func_?(0);
    bVar8 = 0;
    if (pVVar3->max_length == 0) goto code_?;
    func_?(pVVar3->vector,FVar10 ^ _UNK_?,*(undefined4 *)(iVar7 + 4),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pFVar9 = (Face__Enum *)func_?(1);
    FVar10 = *pFVar9;
    iVar7 = func_?(1);
    bVar8 = pVVar3->max_length == 0;
    if (pVVar3->max_length < 2) goto code_?;
    func_?(pVVar3->vector + 1,FVar10 ^ _UNK_?,*(undefined4 *)(iVar7 + 4),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    pFVar9 = (Face__Enum *)func_?(2);
    FVar10 = *pFVar9;
    iVar7 = func_?(2);
    bVar8 = pVVar3->max_length < 2;
    if (2 < pVVar3->max_length) {
      func_?(pVVar3->vector + 2,FVar10 ^ _UNK_?,*(undefined4 *)(iVar7 + 4),0);
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        pFVar9 = (Face__Enum *)func_?(3);
        face = *pFVar9;
code_?:
        iVar7 = func_?(3);
        bVar8 = pVVar3->max_length < 3;
        uVar6 = *(undefined4 *)(iVar7 + 4);
        if (3 < pVVar3->max_length) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  case Face__Enum_Left:
    if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 == (Vector2__Array *)0x0) ||
       (unaff_ESI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    iVar7 = func_?(0);
    FVar10 = *(Face__Enum *)(iVar7 + 8);
    iVar7 = func_?(0);
    bVar8 = 0;
    if (pVVar3->max_length == 0) goto code_?;
    func_?(pVVar3->vector,FVar10 ^ _UNK_?,*(undefined4 *)(iVar7 + 4),0);
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
    iVar7 = func_?(1);
    FVar10 = *(Face__Enum *)(iVar7 + 8);
    iVar7 = func_?(1);
    bVar8 = pVVar3->max_length == 0;
    if (1 < pVVar3->max_length) {
      func_?(pVVar3->vector + 1,FVar10 ^ _UNK_?,*(undefined4 *)(iVar7 + 4),0);
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        iVar7 = func_?(2);
        FVar10 = *(Face__Enum *)(iVar7 + 8);
        iVar7 = func_?(2);
        bVar8 = pVVar3->max_length < 2;
        if (pVVar3->max_length < 3) goto code_?;
        func_?(pVVar3->vector + 2,FVar10 ^ _UNK_?,*(undefined4 *)(iVar7 + 4),0);
        pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
        if (pVVar3 != (Vector2__Array *)0x0) {
          iVar7 = func_?(3);
          face = *(Face__Enum *)(iVar7 + 8);
          goto code_?;
        }
      }
      goto code_?;
    }
    goto code_?;
  case Face__Enum_Right:
    if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 == (Vector2__Array *)0x0) ||
       (unaff_ESI = faceVertices, faceVertices == (Vector3__Array *)0x0)) {
code_?:
      bVar8 = 0;
      pVVar4 = (Vector2__Class *)0x0;
      func_?(0);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
      faceVertices = unaff_ESI;
      goto code_?;
    }
    iVar7 = func_?(0);
    uVar6 = *(undefined4 *)(iVar7 + 8);
    iVar7 = func_?(0);
    bVar8 = 0;
    if (pVVar3->max_length != 0) {
      func_?(pVVar3->vector,uVar6,*(undefined4 *)(iVar7 + 4),0);
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        iVar7 = func_?(1);
        uVar6 = *(undefined4 *)(iVar7 + 8);
        iVar7 = func_?(1);
        bVar8 = pVVar3->max_length == 0;
        if (pVVar3->max_length < 2) goto code_?;
        func_?(pVVar3->vector + 1,uVar6,*(undefined4 *)(iVar7 + 4),0);
        pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
        if (pVVar3 != (Vector2__Array *)0x0) {
          iVar7 = func_?(2);
          uVar6 = *(undefined4 *)(iVar7 + 8);
          iVar7 = func_?(2);
          bVar8 = pVVar3->max_length < 2;
          if (pVVar3->max_length < 3) goto code_?;
          func_?(pVVar3->vector + 2,uVar6,*(undefined4 *)(iVar7 + 4),0);
          pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
          if (pVVar3 != (Vector2__Array *)0x0) {
            iVar7 = func_?(3);
            face = *(Face__Enum *)(iVar7 + 8);
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    goto code_?;
  default:
code_?:
    pVVar4 = (Vector2__Class *)0x0;
    fVar11 = (float10)func_?(&scale,0,0);
    fVar2 = (float)((float10)_UNK_? / fVar11);
    if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
      pVVar4 = (Vector2__Class *)TypeInfo__CubeModelChunk;
      func_?(TypeInfo__CubeModelChunk);
    }
    unaff_ESI = (Vector3__Array *)TypeInfo__CubeModelChunk->static_fields->uvs;
    if (unaff_ESI == (Vector3__Array *)0x0) goto code_?;
    bVar8 = 0;
    if (unaff_ESI->max_length == 0) {
      pVVar4 = (Vector2__Class *)0x0;
    }
    else {
      VVar12.x = unaff_ESI->vector[0].x;
      VVar12.y = unaff_ESI->vector[0].y;
      VVar13 = TypeInfo__CubeModelChunk->static_fields->uvOffsetVector;
      if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
        pVVar4 = TypeInfo__UnityEngine__Vector2;
        func_?(TypeInfo__UnityEngine__Vector2);
      }
      VVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                         (VVar12,VVar13,(MethodInfo *)0x0);
      unaff_ESI->vector[0].x = VVar12.x;
      unaff_ESI->vector[0].y = VVar12.y;
      unaff_ESI = (Vector3__Array *)TypeInfo__CubeModelChunk->static_fields->uvs;
      if (unaff_ESI == (Vector3__Array *)0x0) goto code_?;
      bVar8 = unaff_ESI->max_length == 0;
      if (1 < unaff_ESI->max_length) {
        VVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                           (*(Vector2 *)&unaff_ESI->vector[0].z,
                            TypeInfo__CubeModelChunk->static_fields->uvOffsetVector,
                            (MethodInfo *)0x0);
        *(Vector2 *)&unaff_ESI->vector[0].z = VVar12;
        unaff_ESI = (Vector3__Array *)TypeInfo__CubeModelChunk->static_fields->uvs;
        if (unaff_ESI == (Vector3__Array *)0x0) goto code_?;
        bVar8 = unaff_ESI->max_length < 2;
        if (2 < unaff_ESI->max_length) {
          VVar13.x = unaff_ESI->vector[1].y;
          VVar13.y = unaff_ESI->vector[1].z;
          VVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                             (VVar13,TypeInfo__CubeModelChunk->static_fields->uvOffsetVector,
                              (MethodInfo *)0x0);
          unaff_ESI->vector[1].y = VVar12.x;
          unaff_ESI->vector[1].z = VVar12.y;
          unaff_ESI = (Vector3__Array *)TypeInfo__CubeModelChunk->static_fields->uvs;
          if (unaff_ESI == (Vector3__Array *)0x0) goto code_?;
          bVar8 = unaff_ESI->max_length < 3;
          if (3 < unaff_ESI->max_length) {
            VVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                               (*(Vector2 *)(unaff_ESI->vector + 2),
                                TypeInfo__CubeModelChunk->static_fields->uvOffsetVector,
                                (MethodInfo *)0x0);
            *(Vector2 *)(unaff_ESI->vector + 2) = VVar12;
            unaff_ESI = (Vector3__Array *)TypeInfo__CubeModelChunk->static_fields->uvs;
            if (unaff_ESI == (Vector3__Array *)0x0) goto code_?;
            bVar8 = 0;
            if (unaff_ESI->max_length != 0) {
              a.x = unaff_ESI->vector[0].x;
              a.y = unaff_ESI->vector[0].y;
              VVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                                 (a,fVar2,(MethodInfo *)0x0);
              unaff_ESI->vector[0].x = VVar12.x;
              unaff_ESI->vector[0].y = VVar12.y;
              unaff_ESI = (Vector3__Array *)TypeInfo__CubeModelChunk->static_fields->uvs;
              if (unaff_ESI == (Vector3__Array *)0x0) goto code_?;
              bVar8 = unaff_ESI->max_length == 0;
              if (1 < unaff_ESI->max_length) {
                VVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                                   (*(Vector2 *)&unaff_ESI->vector[0].z,fVar2,(MethodInfo *)0x0);
                *(Vector2 *)&unaff_ESI->vector[0].z = VVar12;
                unaff_ESI = (Vector3__Array *)TypeInfo__CubeModelChunk->static_fields->uvs;
                if (unaff_ESI == (Vector3__Array *)0x0) goto code_?;
                bVar8 = unaff_ESI->max_length < 2;
                if (2 < unaff_ESI->max_length) {
                  a_00.x = unaff_ESI->vector[1].y;
                  a_00.y = unaff_ESI->vector[1].z;
                  VVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                                     (a_00,fVar2,(MethodInfo *)0x0);
                  unaff_ESI->vector[1].y = VVar12.x;
                  unaff_ESI->vector[1].z = VVar12.y;
                  unaff_ESI = (Vector3__Array *)TypeInfo__CubeModelChunk->static_fields->uvs;
                  if (unaff_ESI == (Vector3__Array *)0x0) goto code_?;
                  bVar8 = unaff_ESI->max_length < 3;
                  pVVar4 = (Vector2__Class *)0x0;
                  if (3 < unaff_ESI->max_length) {
                    VVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                                       (*(Vector2 *)(unaff_ESI->vector + 2),fVar2,(MethodInfo *)0x0)
                    ;
                    *(Vector2 *)(unaff_ESI->vector + 2) = VVar12;
                    return TypeInfo__CubeModelChunk->static_fields->uvs;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto code_?;
  }
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
  unaff_ESI = faceVertices;
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0,pVVar4);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
  faceVertices = unaff_ESI;
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
  bVar14 = CARRY1(extraout_DH,(byte)extraout_ECX) || CARRY1(extraout_DH + (byte)extraout_ECX,bVar8)
  ;
  pbVar15 = (byte *)(*(int *)((int)&faceVertices->klass + 1) + 0x2e1043af);
  bVar16 = (byte)((uint)extraout_ECX >> 8);
  bVar8 = *pbVar15 + bVar16;
  bVar17 = CARRY1(*pbVar15,bVar16) || CARRY1(bVar8,bVar14);
  *pbVar15 = bVar8 + bVar14;
  cVar18 = bVar17 + -0x7a;
  pcVar19 = (char *)(CONCAT31((int3)((uint)extraout_ECX >> 8),cVar18) + -0x4c);
  *pcVar19 = *pcVar19 + cVar18 + (0x79U < bVar17);
  pcVar20 = (code *)swi(3);
  pVVar3 = (Vector2__Array *)(*pcVar20)();
  return pVVar3;
}


/* IntVector GetFirstSolidCubePos() */

IntVector Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetFirstSolidCubePos
                    (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  pUStack_4 = (UnityAction *)0x0;
  if ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
       *)method[1].return_type !=
      (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
       *)0x0) {
    pOVar5 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)method[1].return_type,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                       );
    if ((int)pOVar5 < 1) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_cube_found_in_chunk__This_is_,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar6 = TypeInfo__MV__WorldObject__IntVector->static_fields;
      this->klass = *(CubeModelChunk__Class **)&pIVar6->One;
      *(int16_t *)&this->monitor = (pIVar6->One).z;
      IVar7.z = (int16_t)pIVar6;
      IVar7._0_4_ = this;
      return IVar7;
    }
    if ((Dictionary_2_UnityEngine_Vector3_System_Byte_ *)method[1].return_type !=
        (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System
               ::Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__GetEnumerator
                         (&DStack_9,
                          (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)method[1].return_type,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                         );
      pCVar10 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                         ((Color *)&DStack_9.current,
                          (TierUnlockedPopupContentBase *)&stack0xffffffac,
                          (MethodInfo *)pDVar8->dictionary);
      fStack_1 = pCVar10->r;
      fStack_2 = pCVar10->g;
      fStack_3 = pCVar10->b;
      pUStack_4 = (UnityAction *)pCVar10->a;
      puVar11 = (undefined4 *)func_?(auStack_12,&fStack_1);
      this->klass = (CubeModelChunk__Class *)*puVar11;
      *(undefined2 *)&this->monitor = *(undefined2 *)(puVar11 + 1);
      IVar13.z = (int16_t)this;
      IVar13._0_4_ = this;
      return IVar13;
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  IVar13 = (IntVector)(*pcVar14)();
  return IVar13;
}


/* Void GetMeshBounds(Bounds ByRef, Dictionary`2[MV.WorldObject.IntVector,Cell], Vector3) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetMeshBounds
               (Bounds *bounds,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,Vector3 scale,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffe98;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffe98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  pNStack_8 = (NotificationFade *)0x0;
  uStack_9 = 0;
  uStack_10 = 0;
  TStack_11.fields.stateStartTime = 0.0;
  TStack_11.fields.onDisplayDoneCallback._0_2_ = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  pNStack_14 = (NotificationFade *)0x0;
  auStack_15._0_4_ = (TimeZoneInfo__Class *)0x0;
  auStack_15._4_4_ = (MonitorData *)0x0;
  fStack_16 = 0.0;
  fStack_17 = 0.0;
  TStack_11.fields.backgroundColor.a = 0.0;
  TStack_11.klass = (TierUnlockedPopupContentBase__Class *)0x0;
  TStack_11.monitor = (MonitorData *)0x0;
  TStack_11.fields._._._._.m_CachedPtr = (Behaviour__Fields)(Component_1__Fields)0x0;
  TStack_11.fields.backgroundColor.r = 0.0;
  TStack_11.fields.backgroundColor.g = 0.0;
  TStack_11.fields.backgroundColor.b = 0.0;
  func_?();
  puStack_18 = (undefined4 *)&stack0xfffffe98;
  puStack_5 = &stack0xfffffe98;
  func_?();
  pMVar19 = (MethodInfo *)0xff7fffff;
  func_?();
  if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    pDVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
             Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Vector3_System_Byte_ *)
                        &stack0xfffffea8,(Dictionary_2_UnityEngine_Vector3_System_Byte_ *)cells,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                       );
    TStack_11.klass = (TierUnlockedPopupContentBase__Class *)pDVar20->dictionary;
    TStack_11.monitor = (MonitorData *)pDVar20->next;
    TStack_11.fields._._._._.m_CachedPtr = (Behaviour__Fields)pDVar20->stamp;
    TStack_11.fields.backgroundColor.r = (pDVar20->current).key.x;
    TStack_11.fields.backgroundColor.g = (pDVar20->current).key.y;
    TStack_11.fields.backgroundColor.b = (pDVar20->current).key.z;
    TStack_11.fields.backgroundColor.a = *(float *)&(pDVar20->current).value;
    uStack_2 = 0;
    while( true ) {
      cVar21 = func_?();
      if (cVar21 == '\0') {
        *puStack_18 = 0x2e4;
        uStack_2 = 0xffffffff;
        func_?(&TStack_11,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                       );
        func_?(bounds,uStack_12,pNStack_8,uStack_13,pNStack_14,0);
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      pMVar19 = 
      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
      ;
      pCVar22 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                         ((Color *)&stack0xfffffeb0,&TStack_11,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                         );
      auStack_15._0_4_ = pCVar22->r;
      auStack_15._4_4_ = pCVar22->g;
      fStack_16 = pCVar22->b;
      fStack_17 = pCVar22->a;
      TVar23 = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_BaseUtcOffset
                         ((TimeZoneInfo *)auStack_15,
                          MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                         );
      uStack_24 = CONCAT44((int)((ulonglong)TVar23._ticks >> 0x20),(undefined4)uStack_24);
      if ((int)TVar23._ticks == 0) break;
      if (*(char *)((int)TVar23._ticks + 0x14) != '?') {
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                           (&VStack_26,(MethodInfo *)0x0);
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                           (&VStack_27,*pVVar25,2.0,(MethodInfo *)0x0);
        uStack_24._0_4_ = pVVar25->x;
        uStack_24._4_4_ = pVVar25->y;
        fVar28 = pVVar25->z;
        puVar29 = (undefined4 *)func_?();
        uStack_9 = *puVar29;
        uStack_10 = *(undefined2 *)(puVar29 + 1);
        puVar30 = (undefined8 *)func_?();
        TStack_11.fields._32_8_ = *puVar30;
        fVar31 = *(float *)(puVar30 + 1);
        a.z = fVar28;
        a.x = (float)(undefined4)uStack_24;
        a.y = (float)uStack_24._4_4_;
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                           (aVStack_32,a,(MethodInfo *)0x0);
        a_00.z = fVar31;
        a_00.x = (float)TStack_11.fields.mainContent;
        a_00.y = (float)TStack_11.fields.mainContentCanvasGroup;
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_33,a_00,*pVVar25,(MethodInfo *)0x0);
        TStack_11.fields.displayTime = pVVar25->x;
        TStack_11.fields.titleText = (Text *)pVVar25->y;
        TStack_11.fields.titleTextFader = (NotificationFade *)pVVar25->z;
        pMStack_34 = 
        MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
        ;
        VStack_33.z = (float)auStack_15;
        VStack_33.y = (float)auStack_35;
        VStack_33.x = (float)&UNK_?;
        pfVar36 = (float *)func_?();
        TStack_11.fields.stateStartTime = *pfVar36;
        TStack_11.fields.onDisplayDoneCallback._0_2_ = *(undefined2 *)(pfVar36 + 1);
        VStack_33.z = (float)&TStack_11.fields.stateStartTime;
        pMStack_34 = (MethodInfo *)0x0;
        VStack_33.y = (float)auStack_37;
        VStack_33.x = (float)&UNK_?;
        pVVar25 = (Vector3 *)func_?();
        b.z = fVar28;
        b.x = (float)(undefined4)uStack_24;
        b.y = (float)uStack_24._4_4_;
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xfffffec8,*pVVar25,b,(MethodInfo *)0x0);
        TStack_11.fields.titleOriginalYPosition = pVVar25->x;
        TStack_11.fields.slideInStartTime = pVVar25->y;
        TStack_11.fields.slideOutStartTime = pVVar25->z;
        fVar28 = (float)uStack_12;
        if (TStack_11.fields.displayTime < (float)uStack_12) {
          fVar28 = TStack_11.fields.displayTime;
        }
        if ((float)TStack_11.fields.titleText < (float)uStack_12._4_4_) {
          uStack_12._4_4_ = TStack_11.fields.titleText;
        }
        if ((float)TStack_11.fields.titleTextFader < (float)pNStack_8) {
          pNStack_8 = TStack_11.fields.titleTextFader;
        }
        TStack_11.fields.currentState = (int32_t)(float)uStack_13;
        if ((float)uStack_13 <= TStack_11.fields.titleOriginalYPosition) {
          TStack_11.fields.currentState = (int32_t)TStack_11.fields.titleOriginalYPosition;
        }
        if ((float)uStack_13._4_4_ <= TStack_11.fields.slideInStartTime) {
          uStack_13._4_4_ = (Text *)TStack_11.fields.slideInStartTime;
        }
        TStack_11.fields.mainContentCanvasGroup = (CanvasGroup *)uStack_13._4_4_;
        pNVar38 = pNStack_14;
        if ((float)pNStack_14 <= TStack_11.fields.slideOutStartTime) {
          pNVar38 = (NotificationFade *)TStack_11.fields.slideOutStartTime;
        }
        uStack_24 = CONCAT44(pNVar38,(undefined4)uStack_24);
        if (TStack_11.fields.titleOriginalYPosition < fVar28) {
          fVar28 = TStack_11.fields.titleOriginalYPosition;
        }
        if (TStack_11.fields.slideInStartTime < (float)uStack_12._4_4_) {
          uStack_12._4_4_ = (Text *)TStack_11.fields.slideInStartTime;
        }
        uStack_12 = CONCAT44(uStack_12._4_4_,fVar28);
        if (TStack_11.fields.slideOutStartTime < (float)pNStack_8) {
          pNStack_8 = (NotificationFade *)TStack_11.fields.slideOutStartTime;
        }
        fVar28 = TStack_11.fields.displayTime;
        if (TStack_11.fields.displayTime < (float)TStack_11.fields.currentState) {
          fVar28 = (float)TStack_11.fields.currentState;
        }
        pTVar39 = TStack_11.fields.titleText;
        if ((float)TStack_11.fields.titleText < (float)uStack_13._4_4_) {
          pTVar39 = uStack_13._4_4_;
        }
        uStack_13 = CONCAT44(pTVar39,fVar28);
        pNStack_14 = TStack_11.fields.titleTextFader;
        if ((float)TStack_11.fields.titleTextFader < (float)pNVar38) {
          pNStack_14 = pNVar38;
        }
      }
    }
  }
  func_?();
  uVar40 = 0;
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)(uVar40,pMVar19);
  return;
}


/* SharedMeshData GetMeshData() */

SharedMeshData
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetMeshData
          (CubeModelChunk *this,MethodInfo *method)

{
  return (this->fields).sharedMeshData;
}


/* Void RebuildChunk(Vector3) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RebuildChunk
               (CubeModelChunk *this,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__MeshData);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  cells = (this->fields).cells;
  if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelChunk);
  }
  iVar1 = CubeModelChunk_RebuildMesh(cells,scale,(MethodInfo *)0x0);
  (this->fields).triangleCount = iVar1;
  if (this_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    MeshData::MeshData_SetToMesh
              ((MeshData *)this_00,&(this->fields).sharedMeshData.mesh,
               &(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
    auVar2._8_4_ = 0;
    auVar2._0_8_ = scale._4_8_;
    CubeModelChunk_GetMeshBounds
              (&(this->fields).meshBounds,(this->fields).cells,(Vector3)(auVar2 << 0x20),
               (MethodInfo *)0x0);
    CubeModelChunk_UpdateInstances(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 RebuildMesh(Dictionary`2[MV.WorldObject.IntVector,Cell], Vector3) */

int32_t Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RebuildMesh
                  (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,Vector3 scale,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff48;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff48;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  func_?();
  puStack_5 = &stack0xffffff48;
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_5 = &stack0xffffff48, (TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    puStack_5 = &stack0xffffff48;
    func_?(TypeInfo__MeshDataPool);
  }
  MeshDataPool::MeshDataPool_Reset((MethodInfo *)0x0);
  iStack_8 = 0;
  if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
    Dictionary_2_UnityEngine_Vector3_System_Byte__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Vector3_System_Byte_ *)
               &stack0xffffff70,(Dictionary_2_UnityEngine_Vector3_System_Byte_ *)cells,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
              );
    uStack_2 = 0;
    iVar9 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        uStack_2 = 0xffffffff;
        func_?(&stack0xffffff54,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_4;
        return iVar9 * 2;
      }
      TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                ((Color *)&stack0xffffff78,(TierUnlockedPopupContentBase *)&stack0xffffff54,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                );
      TVar11 = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_BaseUtcOffset
                         ((TimeZoneInfo *)&stack0xffffff90,
                          MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                         );
      if ((int)TVar11._ticks == 0) break;
      if (*(char *)((int)TVar11._ticks + 0x14) != '?') {
        iStack_12 = 0;
        TVar11 = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_BaseUtcOffset
                           ((TimeZoneInfo *)&stack0xffffff90,
                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                           );
        pVStack_13 = (Vector3__Array *)TVar11._ticks;
        if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar14 = (IntVector *)func_?();
        iVector = *pIVar14;
        if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Cube->_1).cctor_started == 0)) {
          func_?(TypeInfo__Cube);
        }
        Cube::Cube_GetVisibleFaceVertices
                  ((Cube *)pVStack_13,&TypeInfo__CubeModelChunk->static_fields->faceData,iVector,
                   cells,&iStack_12,(MethodInfo *)0x0);
        unaff_ESI = (Vector3__Array *)0x0;
        while (iVar9 = iStack_8, pVStack_13 = unaff_ESI, (int)unaff_ESI < iStack_12) {
          TVar11 = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_BaseUtcOffset
                             ((TimeZoneInfo *)&stack0xffffff90,
                              MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                             );
          if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
            func_?();
          }
          if ((TypeInfo__CubeModelChunk->static_fields->faceData ==
               (CubeModelChunk_FaceData__Array *)0x0) || (iVar9 = func_?(), iVar9 == 0))
          goto code_?;
          face = *(Face__Enum *)(iVar9 + 0x10);
          if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
            func_?();
          }
          uVar15 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                            ((CubeBase *)TVar11._ticks,face,(MethodInfo *)0x0);
          MaterialID = (uint)uVar15;
          if (0x44 < MaterialID) {
            MaterialID = 0x18;
          }
          for (unaff_ESI = (Vector3__Array *)0x0; (int)unaff_ESI < 4;
              unaff_ESI = (Vector3__Array *)((int)&unaff_ESI->klass + 1)) {
            if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
              func_?();
            }
            VVar16 = TextureAtlas::TextureAtlas_GetAtlasPoint(MaterialID,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
              func_?();
            }
            if (((TypeInfo__CubeModelChunk->static_fields->faceData ==
                  (CubeModelChunk_FaceData__Array *)0x0) || (iVar9 = func_?(), iVar9 == 0))
               || (*(int *)(iVar9 + 0xc) == 0)) goto code_?;
            iVar9 = func_?();
            pSStack_17 = (String *)VVar16.x;
            *(String **)(iVar9 + 4) = pSStack_17;
            if (((TypeInfo__CubeModelChunk->static_fields->faceData ==
                  (CubeModelChunk_FaceData__Array *)0x0) || (iVar9 = func_?(), iVar9 == 0))
               || (*(int *)(iVar9 + 0xc) == 0)) goto code_?;
            iVar9 = func_?();
            pSStack_18 = (String *)VVar16.y;
            *(String **)(iVar9 + 8) = pSStack_18;
            if (((TypeInfo__CubeModelChunk->static_fields->faceData ==
                  (CubeModelChunk_FaceData__Array *)0x0) || (iVar9 = func_?(), iVar9 == 0))
               || (*(int *)(iVar9 + 8) == 0)) goto code_?;
            puVar19 = (undefined8 *)func_?();
            uVar20 = *puVar19;
            fVar21 = *(float *)(puVar19 + 1);
            if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
              func_?();
            }
            vertex.z = fVar21;
            vertex.x = (float)(String *)uVar20;
            vertex.y = (float)SUB84(uVar20,4);
            MeshDataPool::MeshDataPool_AddVertex(vertex,(MethodInfo *)0x0);
            if (((TypeInfo__CubeModelChunk->static_fields->faceData ==
                  (CubeModelChunk_FaceData__Array *)0x0) || (iVar9 = func_?(), iVar9 == 0))
               || (*(int *)(iVar9 + 0xc) == 0)) goto code_?;
            pCVar22 = (Color *)func_?();
            MeshDataPool::MeshDataPool_AddColor(*pCVar22,(MethodInfo *)0x0);
          }
          if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
            func_?();
          }
          if (((TypeInfo__CubeModelChunk->static_fields->faceData ==
                (CubeModelChunk_FaceData__Array *)0x0) || (iVar9 = func_?(), iVar9 == 0))
             || ((unaff_ESI = *(Vector3__Array **)(iVar9 + 8),
                 TypeInfo__CubeModelChunk->static_fields->faceData ==
                 (CubeModelChunk_FaceData__Array *)0x0 || (iVar9 = func_?(), iVar9 == 0))))
          goto code_?;
          uvRange = CubeModelChunk_GetFaceUvs
                              (unaff_ESI,*(Face__Enum *)(iVar9 + 0x10),scale,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
            func_?();
          }
          MeshDataPool::MeshDataPool_AddUvRange(uvRange,(MethodInfo *)0x0);
          iVar9 = iStack_8 * 4;
          MeshDataPool::MeshDataPool_AddIndex(iVar9,(MethodInfo *)0x0);
          MeshDataPool::MeshDataPool_AddIndex(iVar9 + 3,(MethodInfo *)0x0);
          MeshDataPool::MeshDataPool_AddIndex(iVar9 + 2,(MethodInfo *)0x0);
          MeshDataPool::MeshDataPool_AddIndex(iVar9 + 2,(MethodInfo *)0x0);
          MeshDataPool::MeshDataPool_AddIndex(iVar9 + 1,(MethodInfo *)0x0);
          MeshDataPool::MeshDataPool_AddIndex(iVar9,(MethodInfo *)0x0);
          iStack_8 = iStack_8 + 1;
          unaff_ESI = (Vector3__Array *)((int)&pVStack_13->klass + 1);
        }
      }
    }
  }
code_?:
  func_?();
  func_?(unaff_ESI,0,0);
  pcVar23 = (code *)swi(3);
  iVar24 = (*pcVar23)();
  return iVar24;
}


/* Void RemoveFromChunk(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RemoveFromChunk
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).cells;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                      (pDVar1,iVector,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar2 != 0) {
      pDVar1 = (this->fields).cells;
      if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__Remove
                (pDVar1,iVector,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Remove_MV__WorldObject__IntVector_
                );
      uStack3 = 0;
      CubeModelChunk_SetCubeVisibilityWithNeighbors(this,iVector,(MethodInfo *)0x0);
      piVar4 = &(this->fields).cubeCount;
      *piVar4 = *piVar4 + -1;
    }
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RestoreSharedMeshOnInstances() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RestoreSharedMeshOnInstances
               (CubeModelChunk *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._24_4_ = 0.0;
  auStack_6._0_4_ = (TierUnlockedPopupContentBase__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Component_1__Fields)0x0;
  auStack_6._12_4_ = 0.0;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  func_?();
  this_00 = (this->fields).instances;
  puStack_4 = &stack0xffffff94;
  if (this_00 != (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    puStack_4 = &stack0xffffff94;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
             List_1_UnityEngine_Vector4__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Vector4_ *)(auStack_6 + 0x1c),
                        (List_1_UnityEngine_Vector4_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    auStack_6._0_4_ = pLVar7->l;
    auStack_6._4_4_ = pLVar7->next;
    auStack_6._8_4_ = pLVar7->ver;
    auStack_6._12_4_ = (pLVar7->current).x;
    auStack_6._16_4_ = (pLVar7->current).y;
    auStack_6._20_4_ = (pLVar7->current).z;
    auStack_6._24_4_ = (pLVar7->current).w;
    uStack_1 = 0;
    while( true ) {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        func_?(auStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pCVar9 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                         (&CStack_10,(TierUnlockedPopupContentBase *)auStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__get_Current__
                         );
      fStack_11 = pCVar9->r;
      fStack_12 = pCVar9->g;
      pRStack_13 = (Renderer *)pCVar9->b;
      pUStack_14 = (UnityAction *)pCVar9->a;
      if ((pUStack_14 == (UnityAction *)0x0) ||
         (UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                    ((MeshFilter *)pUStack_14,(this->fields).sharedMeshData.mesh,method_00),
         pRStack_13 == (Renderer *)0x0)) break;
      method_00 = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRStack_13,(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RevokeSharedMeshOnInstances() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RevokeSharedMeshOnInstances
               (CubeModelChunk *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._24_4_ = 0.0;
  auStack_6._0_4_ = (TierUnlockedPopupContentBase__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Component_1__Fields)0x0;
  auStack_6._12_4_ = 0.0;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  func_?();
  this_00 = (this->fields).instances;
  puStack_7 = (undefined4 *)&stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  if (this_00 != (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    puStack_7 = (undefined4 *)&stack0xffffff90;
    puStack_4 = &stack0xffffff90;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
             List_1_UnityEngine_Vector4__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Vector4_ *)(auStack_6 + 0x1c),
                        (List_1_UnityEngine_Vector4_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    auStack_6._0_4_ = pLVar8->l;
    auStack_6._4_4_ = pLVar8->next;
    auStack_6._8_4_ = pLVar8->ver;
    auStack_6._12_4_ = (pLVar8->current).x;
    auStack_6._16_4_ = (pLVar8->current).y;
    auStack_6._20_4_ = (pLVar8->current).z;
    auStack_6._24_4_ = (pLVar8->current).w;
    uStack_1 = 0;
    while( true ) {
      cVar9 = func_?();
      if (cVar9 == '\0') {
        *puStack_7 = 0x5f;
        uStack_1 = 0xffffffff;
        func_?(auStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pCVar10 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                         (&CStack_11,(TierUnlockedPopupContentBase *)auStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__get_Current__
                         );
      fStack_12 = pCVar10->r;
      fStack_13 = pCVar10->g;
      pRStack_14 = (Renderer *)pCVar10->b;
      pUStack_15 = (UnityAction *)pCVar10->a;
      if ((pUStack_15 == (UnityAction *)0x0) ||
         (UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                    ((MeshFilter *)pUStack_15,(Mesh *)0x0,method_00), this_01 = pRStack_14,
         pRStack_14 == (Renderer *)0x0)) break;
      method_00 = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRStack_14,(Material *)0x0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (this_01,0,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetCubeVisibility(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cube = (Cube *)0x0;
  pDVar1 = (this->fields).cells;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                      (pDVar1,iVector,(Cell *)&stack0xfffffff4,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                      );
    if (bVar2 != 0) {
      if (cube == (Cube *)0x0) goto code_?;
      (cube->fields).hiddenSides = 0;
      pDVar1 = (this->fields).cells;
      if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
        func_?();
      }
      CubeModelChunk_SetCubeVisibility_3(pDVar1,iVector,cube,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCubeVisibilityWithNeighbors(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibilityWithNeighbors
               (CubeModelChunk *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  iVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  func_?(&stack0xfffffff4,pos._0_4_,pos.y,CONCAT22(in_stack_5,pos.z),0);
  this_00 = (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                      (this_00,pos,(Cell *)&stack0xffffffec,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                      );
    if (bVar6 != 0) {
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                ((CubeBase *)CONCAT22(uVar4,uVar3),(MethodInfo *)0x0);
    }
    iVector_04.z = iVar2;
    iVector_04.x = (short)uVar1;
    iVector_04.y = (short)((uint)uVar1 >> 0x10);
    CubeModelChunk_SetCubeVisibility(this,iVector_04,(MethodInfo *)0x0);
    sVar7 = (short)uVar1 + 1;
    iVector_05.y = (short)((uint)uVar1 >> 0x10);
    iVector_05.x = sVar7;
    iVector_05.z = sVar7;
    pCVar8 = this;
    CubeModelChunk_SetCubeVisibility(this,iVector_05,(MethodInfo *)0x0);
    sVar9 = (short)pCVar8 + -2;
    sVar10 = (short)((uint)pCVar8 >> 0x10);
    iVector.y = sVar10;
    iVector.x = sVar9;
    iVector.z = sVar7;
    CubeModelChunk_SetCubeVisibility(this,iVector,(MethodInfo *)0x0);
    uVar1 = CONCAT22(sVar10 + 1,sVar9 + 1);
    iVector_00.z = sVar7;
    iVector_00.x = sVar9 + 1;
    iVector_00.y = sVar10 + 1;
    CubeModelChunk_SetCubeVisibility(this,iVector_00,(MethodInfo *)0x0);
    sVar9 = (short)((uint)uVar1 >> 0x10) + -2;
    uVar11 = CONCAT22(sVar9,(short)uVar1);
    iVector_01.z = sVar7;
    iVector_01.x = (short)uVar1;
    iVector_01.y = sVar9;
    CubeModelChunk_SetCubeVisibility(this,iVector_01,(MethodInfo *)0x0);
    sVar9 = (short)((uint)uVar11 >> 0x10) + 1;
    uVar1 = CONCAT22(sVar9,(short)uVar11);
    sVar7 = sVar7 + 1;
    iVector_02.z = sVar7;
    iVector_02.x = (short)uVar11;
    iVector_02.y = sVar9;
    CubeModelChunk_SetCubeVisibility(this,iVector_02,(MethodInfo *)0x0);
    iVector_03.z = sVar7 + -2;
    iVector_03.x = (short)uVar1;
    iVector_03.y = (short)((uint)uVar1 >> 0x10);
    CubeModelChunk_SetCubeVisibility(this,iVector_03,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetCubeVisibility() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility_1
               (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cells = (this->fields).cells;
  if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelChunk);
  }
  CubeModelChunk_SetCubeVisibility_2(cells,(MethodInfo *)0x0);
  return;
}


/* Void SetCubeVisibility(Dictionary`2[MV.WorldObject.IntVector,Cell]) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility_2
               (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIStack_2 = (Il2CppClass *)0xffffffff;
  pIStack_3 = (Il2CppClass *)&DAT_?;
  pIStack_4 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_4;
  pIStack_5 = (Il2CppClass *)&stack0xffffff60;
  puVar6 = &stack0xfffffffc;
  pIVar7 = (Il2CppClass *)&stack0xffffff60;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    pIVar7 = pIStack_5;
  }
  pIStack_5 = pIVar7;
  puStack_1 = puVar6;
  auStack_8._24_4_ = 0.0;
  auStack_8._16_4_ = 0.0;
  auStack_8._20_4_ = 0.0;
  auStack_9._0_4_ = (TimeZoneInfo__Class *)0x0;
  auStack_9._4_4_ = (MonitorData *)0x0;
  pUStack_10 = (UnityAction *)0x0;
  fStack_11 = 0.0;
  auStack_8._0_4_ = (TierUnlockedPopupContentBase__Class *)0x0;
  auStack_8._4_4_ = (MonitorData *)0x0;
  auStack_8._8_4_ = (Component_1__Fields)0x0;
  auStack_8._12_4_ = 0.0;
  func_?();
  if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    pTStack_12 = (TimeZoneInfo_AdjustmentRule__Array *)&stack0xffffff60;
    pIStack_5 = (Il2CppClass *)&stack0xffffff60;
    func_?(0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTStack_12 = (TimeZoneInfo_AdjustmentRule__Array *)&stack0xffffff60;
  pIStack_5 = (Il2CppClass *)&stack0xffffff60;
  pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
           Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Vector3_System_Byte_ *)
                      (auStack_8 + 0x1c),(Dictionary_2_UnityEngine_Vector3_System_Byte_ *)cells,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                     );
  auStack_8._0_4_ = pDVar14->dictionary;
  auStack_8._4_4_ = pDVar14->next;
  auStack_8._8_4_ = pDVar14->stamp;
  auStack_8._12_4_ = (pDVar14->current).key.x;
  auStack_8._16_4_ = (pDVar14->current).key.y;
  auStack_8._20_4_ = (pDVar14->current).key.z;
  auStack_8._24_4_ = *(undefined4 *)&(pDVar14->current).value;
  pIStack_2 = (Il2CppClass *)0x0;
  while (cVar15 = func_?(), cVar15 != '\0') {
    pCVar16 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                       (&CStack_17,(TierUnlockedPopupContentBase *)auStack_8,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                       );
    auStack_9._0_4_ = pCVar16->r;
    auStack_9._4_4_ = pCVar16->g;
    pUStack_10 = (UnityAction *)pCVar16->b;
    fStack_11 = pCVar16->a;
    auStack_8._4_4_ = auStack_9;
    auStack_8._8_4_ =
         MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
    ;
    auStack_8._0_4_ = &stack0xffffffc0;
    pIVar18 = (IntVector *)func_?();
    pos = *pIVar18;
    TVar19 = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_BaseUtcOffset
                      ((TimeZoneInfo *)auStack_9,
                       MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                      );
    _Stack_30.__klassIndex = (TypeDefinitionIndex)TVar19._ticks;
    if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
      func_?(TypeInfo__CubeModelChunk);
    }
    CubeModelChunk_SetCubeVisibility_3(cells,pos,(Cube *)_Stack_30.typeHandle,(MethodInfo *)0x0);
  }
  pTStack_12->klass = (TimeZoneInfo_AdjustmentRule__Array__Class *)0x4f;
  pIStack_2 = (Il2CppClass *)0xffffffff;
  func_?();
  *unaff_FS_OFFSET = pIStack_4;
  return;
}


/* Void SetCubeVisibility(Dictionary`2[MV.WorldObject.IntVector,Cell], IntVector, Cube) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility_3
               (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,IntVector pos,Cube *cube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar3 = pos._0_4_;
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                      (cells,pos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar1 != 0) {
      func_?(&stack0xffffffec);
      iVar4 = (int16_t)uVar3;
      key_10.y = (short)((uint)uVar3 >> 0x10) + 1;
      key_10.x = iVar4;
      key_10.z = iVar4;
      pDVar5 = cells;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_10,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key.z = iVar4;
        key._0_4_ = pDVar5;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        method = (MethodInfo *)&stack0xfffffff8;
        cube = (Cube *)&cube;
        in_stack_6 = 0;
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Top,FaceFlags__Enum_Bottom,(Cube **)cube,(Cube **)method,
                   (MethodInfo *)0x0);
      }
      sVar7 = (short)((uint)pDVar5 >> 0x10) + -2;
      uVar3 = CONCAT22(sVar7,(short)pDVar5);
      key_00.z = iVar4;
      key_00.x = (short)pDVar5;
      key_00.y = sVar7;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_00,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_01.z = iVar4;
        key_01.x = (short)uVar3;
        key_01.y = (short)((uint)uVar3 >> 0x10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
          func_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Bottom,FaceFlags__Enum_Top,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
      sVar7 = (short)((uint)uVar3 >> 0x10) + 1;
      uVar8 = CONCAT22(sVar7,(short)uVar3);
      sVar9 = iVar4 + 1;
      key_02.z = sVar9;
      key_02.x = (short)uVar3;
      key_02.y = sVar7;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_02,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_03.z = sVar9;
        key_03.x = (short)uVar8;
        key_03.y = (short)((uint)uVar8 >> 0x10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_03,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
          func_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Back,FaceFlags__Enum_Front,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
      sVar9 = sVar9 + -2;
      key_04.z = sVar9;
      key_04.x = (short)uVar8;
      key_04.y = (short)((uint)uVar8 >> 0x10);
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_04,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_05.z = sVar9;
        key_05.x = (short)uVar8;
        key_05.y = (short)((uint)uVar8 >> 0x10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_05,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
          func_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Front,FaceFlags__Enum_Back,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
      sVar7 = (short)uVar8 + 1;
      uVar10 = (undefined2)((uint)uVar8 >> 0x10);
      uVar3 = CONCAT22(uVar10,sVar7);
      sVar9 = sVar9 + 1;
      key_06.z = sVar9;
      key_06.x = sVar7;
      key_06.y = uVar10;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_06,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_07.z = sVar9;
        key_07.x = (short)uVar3;
        key_07.y = (short)((uint)uVar3 >> 0x10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_07,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
          func_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Right,FaceFlags__Enum_Left,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
      sVar7 = (short)uVar3 + -2;
      uVar10 = (undefined2)((uint)uVar3 >> 0x10);
      uVar3 = CONCAT22(uVar10,sVar7);
      key_08.z = sVar9;
      key_08.x = sVar7;
      key_08.y = uVar10;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_08,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_09.z = sVar9;
        key_09.x = (short)uVar3;
        key_09.y = (short)((uint)uVar3 >> 0x10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_09,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
          func_?();
        }
        uStack11 = 0x1043;
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Left,FaceFlags__Enum_Right,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void SetInstanceDataRef(IntVector, MVCubeModelBase) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetInstanceDataRef
               (CubeModelChunk *this,IntVector chunkPos,MVCubeModelBase *cubeInstance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    original = MVMovable::MVMovable_get_ParentMover((MVMovable *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)original,
                         CubeModelChunkPrefab_MethodInfo__UnityEngine__Object__Instantiate<CubeModelChunkPrefab>_CubeModelChunkPrefab_
                        );
    if (this_02 != (XpBoostParticlePreviewer *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_02,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pGVar1,(this->fields).name,(MethodInfo *)0x0);
        pMVar2 = (MeshFilter *)(this_02->fields).layersToRender;
        if (pMVar2 != (MeshFilter *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                    (pMVar2,(this->fields).sharedMeshData.mesh,(MethodInfo *)0x0);
          pCVar3 = (this_02->fields).previewCam;
          if (pCVar3 != (Camera *)0x0) {
            in_stack_4 = 0;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      ((Renderer *)pCVar3,(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
            in_stack_4 = 0;
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_02,(MethodInfo *)0x0);
            if (cubeInstance != (MVCubeModelBase *)0x0) {
              value = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                ((PrefabPool *)cubeInstance,(MethodInfo *)0x0);
              if (pTVar5 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          (pTVar5,(Transform *)value,(MethodInfo *)0x0);
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)this_02,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?();
                }
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                   ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                if (pTVar5 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar5,*pVVar6,(MethodInfo *)0x0);
                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform((Component_1 *)this_02,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                           Quaternion_get_identity((Quaternion *)&stack0xffffffe8,(MethodInfo *)0x0)
                  ;
                  if (pTVar5 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              (pTVar5,*pQVar7,(MethodInfo *)0x0);
                    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_transform((Component_1 *)this_02,(MethodInfo *)0x0);
                    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                       ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                    if (pTVar5 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                (pTVar5,*pVVar6,(MethodInfo *)0x0);
                      pBVar8 = (BoxCollider *)(this_02->fields).xpBoostParticles;
                      pVVar6 = (Vector3 *)func_?();
                      if (pBVar8 != (BoxCollider *)0x0) {
                        UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::
                        BoxCollider_set_size(pBVar8,*pVVar6,(MethodInfo *)0x0);
                        pBVar8 = (BoxCollider *)(this_02->fields).xpBoostParticles;
                        pVVar6 = (Vector3 *)func_?();
                        if (pBVar8 != (BoxCollider *)0x0) {
                          UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::
                          BoxCollider_set_center(pBVar8,*pVVar6,(MethodInfo *)0x0);
                          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)this_02,(MethodInfo *)0x0);
                          this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                              ((DayNightCycle *)cubeInstance,(MethodInfo *)0x0);
                          if (this_03 != (CelestialParam *)0x0) {
                            value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_layer((GameObject *)this_03,(MethodInfo *)0x0)
                            ;
                            if (pGVar1 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_set_layer(pGVar1,value_00,(MethodInfo *)0x0);
                              pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_1_get_gameObject
                                                 ((Component_1 *)this_02,(MethodInfo *)0x0);
                              this_00 = (this->fields).instances;
                              pPVar9 = (this_02->fields).xpBoostParticles;
                              pMVar2 = (MeshFilter *)(this_02->fields).layersToRender;
                              pCVar3 = (this_02->fields).previewCam;
                              if (this_00 != (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
                                item.height = (int32_t)pPVar9;
                                item.startCharIdx = (int32_t)pGVar1;
                                item.topY = (float)pCVar3;
                                item.leading = (float)pMVar2;
                                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                UILineInfo]::List_1_UnityEngine_UILineInfo__Add
                                          ((List_1_UnityEngine_UILineInfo_ *)this_00,item,
                                           MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__Add_ChunkInstances__ChunkInstanceVariables_
                                          );
                                this_04 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                                                    ((MVMovingPlatformNode *)cubeInstance,
                                                     (MethodInfo *)0x0);
                                if (this_04 != (MVMovingPlatformNode *)0x0) {
                                  intVector.z = 0;
                                  intVector._0_4_ = this_02;
                                  gameObject.collider = (BoxCollider *)pPVar9;
                                  gameObject.gameObject = pGVar1;
                                  gameObject.renderer = (MeshRenderer *)pCVar3;
                                  gameObject.filter = pMVar2;
                                  ChunkInstances::ChunkInstances_Add
                                            ((ChunkInstances *)this_04,intVector,gameObject,
                                             (MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SimpleFaceVisibilityTest(FaceFlags, FaceFlags, Cube ByRef, Cube ByRef) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SimpleFaceVisibilityTest
               (FaceFlags__Enum faceFlagCube,FaceFlags__Enum faceFlagOpposite,Cube **cube,
               Cube **neighborCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = *neighborCube;
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)pCVar1,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pCVar1 = *cube;
  if (pCVar1 != (Cube *)0x0) {
    bVar3 = (byte)faceFlagCube;
    if (((pCVar1->fields).hiddenSides & bVar3) != 0) {
      return;
    }
    if (pCVar1 != (Cube *)0x0) {
      bVar2 = SubscribableVariableBase`1[System::Boolean]::
              SubscribableVariableBase_1_System_Boolean__get_Value
                        ((SubscribableVariableBase_1_System_Boolean_ *)pCVar1,(MethodInfo *)0x0);
      if ((bVar3 & bVar2) == 0) {
code_?:
        if ((((uint)(TypeInfo__CubeModelChunk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelChunk->_1).cctor_started == 0)) {
          func_?();
        }
        CubeModelChunk_AdvancedFaceVisibilityTest
                  (faceFlagCube,0,cube,neighborCube,(MethodInfo *)0x0);
        return;
      }
      if (*neighborCube != (Cube *)0x0) {
        bVar2 = SubscribableVariableBase`1[System::Boolean]::
                SubscribableVariableBase_1_System_Boolean__get_Value
                          ((SubscribableVariableBase_1_System_Boolean_ *)*neighborCube,
                           (MethodInfo *)0x0);
        if (((byte)faceFlagOpposite & bVar2) == 0) goto code_?;
        if (*cube != (Cube *)0x0) {
          puVar4 = &((*cube)->fields).hiddenSides;
          *puVar4 = *puVar4 | bVar3;
          if (*neighborCube != (Cube *)0x0) {
            puVar4 = &((*neighborCube)->fields).hiddenSides;
            *puVar4 = *puVar4 | (byte)faceFlagOpposite;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateInstances() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_UpdateInstances
               (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<int>__List__);
  UStack_1 = UIPushOption__Enum_None;
  pLVar2 = (this->fields).instances;
  item = UStack_1;
  while (UStack_1 = item, pLVar2 != (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Count__
                       );
    if ((int)pOVar3 <= (int)UStack_1) {
      if (this_01 != (List_1_UnityEngine_Vector4_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<int>__get_Count__);
        index_00 = (undefined1 *)((int)&pOVar3[-1].monitor + 3);
        goto joined_?;
      }
      break;
    }
    pLVar2 = (this->fields).instances;
    if (pLVar2 == (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) break;
    pCVar4 = mscorlib.dll::System::Collections::Generic::
             List`1[ChunkInstances+ChunkInstanceVariables]::
             List_1_ChunkInstances_ChunkInstanceVariables__get_Item
                       (&CStack_5,pLVar2,item,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Item_int_
                       );
    pOStack_6 = (Object_1__Class *)pCVar4->gameObject;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      pOStack_6 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pOStack_6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,item,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
    else {
      pLVar2 = (this->fields).instances;
      if (pLVar2 == (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) break;
      iVar8 = func_?(auStack_9,pLVar2,item,
                              MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Item_int_
                             );
      if (*(Renderer **)(iVar8 + 8) == (Renderer *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (*(Renderer **)(iVar8 + 8),(this->fields).sharedMeshData.material,(MethodInfo *)0x0)
      ;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClientManager *)0x0) break;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                (this_02,(this->fields).meshBounds,(MethodInfo *)0x0);
    }
    item = item + UIPushOption__Enum_Blocking;
    pLVar2 = (this->fields).instances;
  }
  goto code_?;
joined_?:
  if ((int)index_00 < 0) goto code_?;
  pLVar2 = (this->fields).instances;
  index = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__get_Item
                    ((List_1_System_Int32_ *)this_01,(int32_t)index_00,
                     MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
  if (pLVar2 == (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[ChunkInstances+ChunkInstanceVariables]::
  List_1_ChunkInstances_ChunkInstanceVariables__RemoveAt
            (pLVar2,index,
             MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__RemoveAt_int_
            );
  index_00 = index_00 + -1;
  goto joined_?;
code_?:
  iVar8 = 0;
  pLVar2 = (this->fields).instances;
  while (pLVar2 != (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Count__
                       );
    if ((int)pOVar3 <= iVar8) {
      return;
    }
    pLVar2 = (this->fields).instances;
    if (pLVar2 == (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) break;
    pCVar4 = mscorlib.dll::System::Collections::Generic::
             List`1[ChunkInstances+ChunkInstanceVariables]::
             List_1_ChunkInstances_ChunkInstanceVariables__get_Item
                       ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffffb8,pLVar2,iVar8,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Item_int_
                       );
    this_00 = pCVar4->collider;
    value = *pCVar4;
    pVVar10 = (Vector3 *)func_?(auStack_11,&(this->fields).meshBounds);
    if (this_00 == (BoxCollider *)0x0) break;
    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
              (this_00,*pVVar10,(MethodInfo *)0x0);
    pVVar10 = (Vector3 *)func_?(&CStack_5.collider,&(this->fields).meshBounds,0);
    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
              (this_00,*pVVar10,(MethodInfo *)0x0);
    pLVar2 = (this->fields).instances;
    if (pLVar2 == (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) break;
    mscorlib.dll::System::Collections::Generic::List`1[ChunkInstances+ChunkInstanceVariables]::
    List_1_ChunkInstances_ChunkInstanceVariables__set_Item
              (pLVar2,iVar8,value,
               MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__set_Item_int__ChunkInstances__ChunkInstanceVariables_
              );
    iVar8 = iVar8 + 1;
    pLVar2 = (this->fields).instances;
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* CubeModelChunk() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (CubeModelChunk_FaceData__Array *)func_?(TypeInfo__CubeModelChunk__FaceData,6);
  pSVar2 = (ScaleAnimationBase *)func_?(TypeInfo__CubeModelChunk__FaceData);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pvVar3 = (void *)func_?(TypeInfo__UnityEngine__Vector3,4);
  (pSVar2->fields)._._._._.m_CachedPtr = pvVar3;
  pCVar4 = TypeInfo__UnityEngine__Color;
  iVar5 = func_?(TypeInfo__UnityEngine__Color,4);
  (pSVar2->fields).state = iVar5;
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pCVar4);
  if (pCVar1 == (CubeModelChunk_FaceData__Array *)0x0) {
    func_?(0);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?();
    func_?(uVar6);
code_?:
    uVar6 = func_?();
    func_?(uVar6);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    iVar7 = func_?(pSVar2,(pCVar1->klass->_0).element_class);
    if (iVar7 == 0) goto code_?;
    if (pCVar1->max_length == 0) goto code_?;
    pCVar1->vector[0] = (CubeModelChunk_FaceData *)pSVar2;
    pSVar2 = (ScaleAnimationBase *)func_?(TypeInfo__CubeModelChunk__FaceData);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pvVar3 = (void *)func_?(TypeInfo__UnityEngine__Vector3,4);
    (pSVar2->fields)._._._._.m_CachedPtr = pvVar3;
    pCVar4 = TypeInfo__UnityEngine__Color;
    iVar5 = func_?(TypeInfo__UnityEngine__Color,4);
    (pSVar2->fields).state = iVar5;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pCVar4);
    iVar7 = func_?(pSVar2,(pCVar1->klass->_0).element_class);
    if (iVar7 == 0) goto code_?;
    if (pCVar1->max_length < 2) goto code_?;
    pCVar1->vector[1] = (CubeModelChunk_FaceData *)pSVar2;
    pSVar2 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pvVar3 = (void *)func_?();
    (pSVar2->fields)._._._._.m_CachedPtr = pvVar3;
    pCVar4 = TypeInfo__UnityEngine__Color;
    iVar5 = func_?(TypeInfo__UnityEngine__Color,4);
    (pSVar2->fields).state = iVar5;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pCVar4);
    iVar7 = func_?(pSVar2,(pCVar1->klass->_0).element_class);
    if (iVar7 == 0) goto code_?;
    if (pCVar1->max_length < 3) goto code_?;
    pCVar1->vector[2] = (CubeModelChunk_FaceData *)pSVar2;
    pSVar2 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pvVar3 = (void *)func_?();
    (pSVar2->fields)._._._._.m_CachedPtr = pvVar3;
    pCVar4 = TypeInfo__UnityEngine__Color;
    iVar5 = func_?();
    (pSVar2->fields).state = iVar5;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pCVar4);
    iVar7 = func_?(pSVar2,(pCVar1->klass->_0).element_class);
    if (iVar7 == 0) goto code_?;
    if (pCVar1->max_length < 4) goto code_?;
    pCVar1->vector[3] = (CubeModelChunk_FaceData *)pSVar2;
    pSVar2 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pvVar3 = (void *)func_?();
    (pSVar2->fields)._._._._.m_CachedPtr = pvVar3;
    pCVar4 = TypeInfo__UnityEngine__Color;
    iVar5 = func_?();
    (pSVar2->fields).state = iVar5;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pCVar4);
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    if (pCVar1->max_length < 5) goto code_?;
    pCVar1->vector[4] = (CubeModelChunk_FaceData *)pSVar2;
    pSVar2 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pvVar3 = (void *)func_?();
    (pSVar2->fields)._._._._.m_CachedPtr = pvVar3;
    pCVar4 = TypeInfo__UnityEngine__Color;
    iVar5 = func_?();
    (pSVar2->fields).state = iVar5;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pCVar4);
    iVar7 = func_?();
    if (iVar7 != 0) {
      if (5 < pCVar1->max_length) {
        pCVar1->vector[5] = (CubeModelChunk_FaceData *)pSVar2;
        TypeInfo__CubeModelChunk->static_fields->faceData = pCVar1;
        pVVar8 = (Vector2__Array *)func_?();
        TypeInfo__CubeModelChunk->static_fields->uvs = pVVar8;
        if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
          func_?();
        }
        VVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_one
                           ((MethodInfo *)0x0);
        VVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                           (VVar9,0.5,(MethodInfo *)0x0);
        uStack10 = 0;
        pCVar11 = TypeInfo__CubeModelChunk->static_fields;
        (pCVar11->uvOffsetVector0).x = (float)pCVar4;
        fStack_12 = VVar9.y;
        (pCVar11->uvOffsetVector0).y = fStack_12;
        uStack13 = 0x3f000000;
        puStack14 = &stack0xffffffec;
        uStack15 = 0xbf000000;
        uVar16 = 0;
        func_?();
        pCVar11 = TypeInfo__CubeModelChunk->static_fields;
        uStack10 = 0;
        (pCVar11->uvOffsetVector1).y = (float)((ulonglong)uVar16 >> 0x20);
        (pCVar11->uvOffsetVector1).x = (float)uVar16;
        puStack14 = &stack0xffffffe4;
        uStack13 = 0;
        uStack15 = 0;
        uVar16 = 0;
        func_?();
        pCVar11 = TypeInfo__CubeModelChunk->static_fields;
        (pCVar11->uvOffsetVector).x = (float)uVar16;
        (pCVar11->uvOffsetVector).y = (float)((ulonglong)uVar16 >> 0x20);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* CubeModelChunk(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk__ctor
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__List__
            );
  (this->fields).sharedMeshData.mesh = (Mesh *)0x0;
  (this->fields).meshBounds.m_Center.x = 0.0;
  (this->fields).meshBounds.m_Center.y = 0.0;
  (this->fields).meshBounds.m_Center.z = 0.0;
  (this->fields).meshBounds.m_Extents.x = 0.0;
  (this->fields).instances = this_00;
  (this->fields).sharedMeshData.material = (Material *)0x0;
  (this->fields).meshBounds.m_Extents.y = 0.0;
  (this->fields).meshBounds.m_Extents.z = 0.0;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>;
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Dictionary__
            );
  (this->fields).cells = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  args = (Object__Array *)func_?(TypeInfo__System__Object,6);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
  }
  else {
    if ((StringLiteral_chunk != (String *)0x0) && (iVar2 = func_?(), iVar2 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_chunk;
    pOVar3 = (Object *)func_?();
    if ((pOVar3 != (Object *)0x0) && (iVar2 = func_?(), iVar2 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar3;
    if ((::StringLiteral__ != (String *)0x0) && (iVar2 = func_?(), iVar2 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)::StringLiteral__;
    pOVar3 = (Object *)func_?();
    if ((pOVar3 != (Object *)0x0) && (iVar2 = func_?(), iVar2 == 0)) goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar3;
    if ((::StringLiteral__ != (String *)0x0) && (iVar2 = func_?(), iVar2 == 0))
    goto code_?;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = (Object *)::StringLiteral__;
    pOVar3 = (Object *)func_?();
    if ((pOVar3 == (Object *)0x0) || (iVar2 = func_?(), iVar2 != 0)) {
      if (5 < args->max_length) {
        args->vector[5] = pOVar3;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar4 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        (this->fields).name = pSVar4;
        (this->fields).chunkPos.x = (short)iVector._0_4_;
        (this->fields).chunkPos.y = (short)((uint)iVector._0_4_ >> 0x10);
        (this->fields).chunkPos.z = iVector.z;
        this_02 = (Mesh *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(this_02,(MethodInfo *)0x0);
        uVar5 = 0;
        func_?(&stack0xffffffe8,this_02);
        (this->fields).sharedMeshData.mesh = (Mesh *)uVar5;
        (this->fields).sharedMeshData.material = (Material *)((ulonglong)uVar5 >> 0x20);
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?();
  func_?(uVar1);
code_?:
  uVar1 = func_?();
  func_?(uVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

