
/* ESSelection+PickResult`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](Vector3, VoxelHit,
   __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::ESSelection+PickResult`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     ESSelection_PickResult_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (ESSelection_PickResult_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               Vector3 *mousePosition,VoxelHit *hit,_Il2CppFullySharedGenericType *data,
               MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[1].klass)->actualSize;
  apuStack_2[0] = &UNK_?;
  p_StackX_20 = (_Il2CppFullySharedGenericType__Class *)data;
  lVar3 = FUN_?();
  iVar4 = iRam_?;
  lVar3 = -lVar3;
  pFVar5 = method->klass->rgctx_data->klass->fields;
  pIVar6 = pFVar5->parent;
  puVar7 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar5->offset);
  iVar8._0_2_ = (pIVar6->byval_arg).attrs;
  iVar8._2_1_ = (pIVar6->byval_arg).type;
  iVar8._3_1_ = (pIVar6->byval_arg).field_0xb;
  fVar9 = mousePosition->z;
  puVar10 = puVar7 + -2;
  if (-1 < iVar8) {
    puVar10 = puVar7;
  }
  *puVar10 = *(undefined8 *)mousePosition;
  *(float *)(puVar10 + 1) = fVar9;
  if (iVar4 != 0) {
    uVar11 = (uint)((ulonglong)puVar10 >> 0xc);
    lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
    do {
      uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar14 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar15 = uVar13 == *puVar14;
      if (bVar15) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
      iVar4 = iRam_?;
    } while (!bVar15);
  }
  uVar16 = *(undefined8 *)&(hit->point).z;
  uVar17 = *(undefined8 *)&(hit->normal).y;
  uVar18 = *(undefined8 *)&hit->cubePos;
  pFVar5 = method->klass->rgctx_data->klass->fields;
  pIVar6 = pFVar5[1].parent;
  puVar7 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar5[1].offset);
  iVar19._0_2_ = (pIVar6->byval_arg).attrs;
  iVar19._2_1_ = (pIVar6->byval_arg).type;
  iVar19._3_1_ = (pIVar6->byval_arg).field_0xb;
  puVar10 = puVar7 + -2;
  if (-1 < iVar19) {
    puVar10 = puVar7;
  }
  *puVar10 = *(undefined8 *)&hit->point;
  puVar10[1] = uVar16;
  uVar16 = *(undefined8 *)&hit->face;
  uVar20 = *(undefined8 *)&hit->woId;
  puVar10[2] = uVar17;
  puVar10[3] = uVar18;
  pCVar21 = hit->cube;
  uVar17 = *(undefined8 *)&hit->distance;
  puVar10[4] = uVar16;
  puVar10[5] = uVar20;
  uVar22 = *(undefined4 *)&hit->collider;
  uVar23 = *(undefined4 *)((longlong)&hit->collider + 4);
  uVar24 = *(undefined4 *)&hit->transform;
  uVar25 = *(undefined4 *)((longlong)&hit->transform + 4);
  puVar10[6] = pCVar21;
  puVar10[7] = uVar17;
  iVar26 = hit->interactionFlags;
  *(undefined4 *)(puVar10 + 8) = uVar22;
  *(undefined4 *)((longlong)puVar10 + 0x44) = uVar23;
  *(undefined4 *)(puVar10 + 9) = uVar24;
  *(undefined4 *)((longlong)puVar10 + 0x4c) = uVar25;
  puVar10[10] = iVar26;
  if (iVar4 != 0) {
    uVar11 = (uint)((ulonglong)puVar10 >> 0xc);
    lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
    do {
      uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar14 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar15 = uVar13 == *puVar14;
      if (bVar15) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar15);
  }
  p_Var22 = (_Il2CppFullySharedGenericType *)&p_StackX_20;
  if (*(int *)&(method->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var22 = data;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar3,p_Var22,uVar1);
  pFVar5 = method->klass->rgctx_data->klass->fields;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(this,pFVar5 + 2,&stack0xffffffffffffffd8 + lVar3,uVar1);
  return;
}

