
/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]
   ClosestChild(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ClosestChild
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *node,
          MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[6].parent;
  piVar3 = (int *)((longlong)&this->klass + (longlong)pFVar1[6].offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  piVar5 = piVar3 + -4;
  if (-1 < iVar4) {
    piVar5 = piVar3;
  }
  if (*piVar5 == 0) {
    return (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0;
  }
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[5].parent;
  plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[5].offset);
  iVar7._0_2_ = (pIVar2->byval_arg).attrs;
  iVar7._2_1_ = (pIVar2->byval_arg).type;
  iVar7._3_1_ = (pIVar2->byval_arg).field_0xb;
  plVar8 = plVar6 + -2;
  if (-1 < iVar7) {
    plVar8 = plVar6;
  }
  lVar9 = *plVar8;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0) goto DAT_?;
    pSVar10 = *(SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
               (lVar9 + 0x20);
    if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar11 = method->klass->rgctx_data[4].method;
      puVar12 = (undefined8 *)(*pMVar11->methodPointer)(&uStack_13,node,pMVar11);
      uStack_14 = *puVar12;
      fVar15 = *(float *)(puVar12 + 1);
      pFVar1 = method->klass->rgctx_data->klass->fields;
      pIVar2 = pFVar1[5].parent;
      plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[5].offset);
      iVar16._0_2_ = (pIVar2->byval_arg).attrs;
      iVar16._2_1_ = (pIVar2->byval_arg).type;
      iVar16._3_1_ = (pIVar2->byval_arg).field_0xb;
      plVar8 = plVar6 + -2;
      if (-1 < iVar16) {
        plVar8 = plVar6;
      }
      lVar9 = *plVar8;
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) == 0) goto DAT_?;
        if (*(longlong *)(lVar9 + 0x20) != 0) {
          pMVar11 = method->klass->rgctx_data[4].method;
          puVar12 = (undefined8 *)
                    (*pMVar11->methodPointer)(&uStack_13,*(longlong *)(lVar9 + 0x20),pMVar11);
          fStack_17 = fVar15 - *(float *)(puVar12 + 1);
          uStack_14 = CONCAT44(uStack_14._4_4_ - (float)((ulonglong)*puVar12 >> 0x20),
                               (float)uStack_14 - (float)*puVar12);
          fVar15 = (float)FUN_?(&uStack_14);
          pFVar1 = method->klass->rgctx_data->klass->fields;
          pIVar2 = pFVar1[5].parent;
          plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[5].offset);
          iVar18._0_2_ = (pIVar2->byval_arg).attrs;
          iVar18._2_1_ = (pIVar2->byval_arg).type;
          iVar18._3_1_ = (pIVar2->byval_arg).field_0xb;
          plVar8 = plVar6 + -2;
          if (-1 < iVar18) {
            plVar8 = plVar6;
          }
          lVar9 = *plVar8;
          if (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x18) < 2) {
DAT_?:
              FUN_?();
              pcVar19 = (code *)swi(3);
              pSVar10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        (*pcVar19)();
              return pSVar10;
            }
            if (*(longlong *)(lVar9 + 0x28) == 0) {
              return pSVar10;
            }
            pMVar11 = method->klass->rgctx_data[4].method;
            puVar12 = (undefined8 *)(*pMVar11->methodPointer)(auStack_20,node,pMVar11);
            uStack_13 = *puVar12;
            fVar21 = *(float *)(puVar12 + 1);
            pFVar1 = method->klass->rgctx_data->klass->fields;
            pIVar2 = pFVar1[5].parent;
            plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[5].offset);
            iVar22._0_2_ = (pIVar2->byval_arg).attrs;
            iVar22._2_1_ = (pIVar2->byval_arg).type;
            iVar22._3_1_ = (pIVar2->byval_arg).field_0xb;
            plVar8 = plVar6 + -2;
            if (-1 < iVar22) {
              plVar8 = plVar6;
            }
            lVar9 = *plVar8;
            if (lVar9 != 0) {
              if (*(uint *)(lVar9 + 0x18) < 2) goto DAT_?;
              if (*(longlong *)(lVar9 + 0x28) != 0) {
                pMVar11 = method->klass->rgctx_data[4].method;
                puVar12 = (undefined8 *)
                          (*pMVar11->methodPointer)(auStack_20,*(longlong *)(lVar9 + 0x28),pMVar11);
                fStack_17 = fVar21 - *(float *)(puVar12 + 1);
                uStack_14 = CONCAT44(uStack_13._4_4_ - (float)((ulonglong)*puVar12 >> 0x20),
                                     (float)uStack_13 - (float)*puVar12);
                fVar21 = (float)FUN_?(&uStack_14);
                if (fVar21 < fVar15) {
                  pFVar1 = method->klass->rgctx_data->klass->fields;
                  pIVar2 = pFVar1[5].parent;
                  plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[5].offset);
                  iVar23._0_2_ = (pIVar2->byval_arg).attrs;
                  iVar23._2_1_ = (pIVar2->byval_arg).type;
                  iVar23._3_1_ = (pIVar2->byval_arg).field_0xb;
                  plVar8 = plVar6 + -2;
                  if (-1 < iVar23) {
                    plVar8 = plVar6;
                  }
                  lVar9 = *plVar8;
                  if (lVar9 == 0) goto code_?;
                  if (*(uint *)(lVar9 + 0x18) < 2) goto DAT_?;
                  pSVar10 = *(SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                              **)(lVar9 + 0x28);
                }
                return pSVar10;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  pSVar10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)(*pcVar19)();
  return pSVar10;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__DebugDraw
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[2].parent;
  puVar3 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1[2].offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  puVar5 = puVar3 + -2;
  if (-1 < iVar4) {
    puVar5 = puVar3;
  }
  uVar6 = *puVar5;
  uVar7 = *(undefined4 *)(puVar5 + 1);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[2].parent;
  lVar8 = (longlong)&this->klass + (longlong)pFVar1[2].offset;
  iVar9._0_2_ = (pIVar2->byval_arg).attrs;
  iVar9._2_1_ = (pIVar2->byval_arg).type;
  iVar9._3_1_ = (pIVar2->byval_arg).field_0xb;
  lVar10 = lVar8 + -0x10;
  if (-1 < iVar9) {
    lVar10 = lVar8;
  }
  uStack_11 = *(undefined4 *)(lVar10 + 0xc);
  pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uStack_13 = CONCAT44(uStack_11,uStack_11);
  uStack_14._0_4_ = (pQVar12->identityQuaternion).x;
  uStack_14._4_4_ = (pQVar12->identityQuaternion).y;
  uStack_15._0_4_ = (pQVar12->identityQuaternion).z;
  uStack_15._4_4_ = (pQVar12->identityQuaternion).w;
  MStack_16.m00 = 0.0;
  MStack_16.m10 = 0.0;
  MStack_16.m20 = 0.0;
  MStack_16.m30 = 0.0;
  MStack_16.m01 = 0.0;
  MStack_16.m11 = 0.0;
  MStack_16.m21 = 0.0;
  MStack_16.m31 = 0.0;
  MStack_16.m02 = 0.0;
  MStack_16.m12 = 0.0;
  MStack_16.m22 = 0.0;
  MStack_16.m32 = 0.0;
  MStack_16.m03 = 0.0;
  MStack_16.m13 = 0.0;
  MStack_16.m23 = 0.0;
  MStack_16.m33 = 0.0;
  pcVar17 = pcRam_?;
  uStack_18 = uVar6;
  uStack_19 = uVar7;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pcRam_? = pcVar17;
  (*pcRam_?)(&uStack_18,&uStack_14,&uStack_13);
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitSphere(this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Graphics);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    MStack_20.m00 = MStack_16.m00;
    MStack_20.m10 = MStack_16.m10;
    MStack_20.m20 = MStack_16.m20;
    MStack_20.m30 = MStack_16.m30;
    MStack_20.m01 = MStack_16.m01;
    MStack_20.m11 = MStack_16.m11;
    MStack_20.m21 = MStack_16.m21;
    MStack_20.m31 = MStack_16.m31;
    MStack_20.m02 = MStack_16.m02;
    MStack_20.m12 = MStack_16.m12;
    MStack_20.m22 = MStack_16.m22;
    MStack_20.m32 = MStack_16.m32;
    MStack_20.m03 = MStack_16.m03;
    MStack_20.m13 = MStack_16.m13;
    MStack_20.m23 = MStack_16.m23;
    MStack_20.m33 = MStack_16.m33;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
              (mesh,&MStack_20,-1,(MethodInfo *)0x0);
    pFVar1 = method->klass->rgctx_data->klass->fields;
    pIVar2 = pFVar1[5].parent;
    plVar21 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[5].offset);
    iVar22._0_2_ = (pIVar2->byval_arg).attrs;
    iVar22._2_1_ = (pIVar2->byval_arg).type;
    iVar22._3_1_ = (pIVar2->byval_arg).field_0xb;
    plVar23 = plVar21 + -2;
    if (-1 < iVar22) {
      plVar23 = plVar21;
    }
    uVar24 = 0;
    lVar10 = *plVar23;
    if (lVar10 != 0) {
      plVar23 = (longlong *)(lVar10 + 0x20);
      while( true ) {
        if (*(int *)(lVar10 + 0x18) <= (int)uVar24) {
          return;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar24) {
          FUN_?();
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        if (*plVar23 == 0) break;
        (*(method->klass->rgctx_data[10].method)->methodPointer)();
        uVar24 = uVar24 + 1;
        plVar23 = plVar23 + 1;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void EncapsulateChildrenBottomUp() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__EncapsulateChildrenBottomUp
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[6].method;
  iVar2 = (*pMVar1->methodPointer)(this,pMVar1);
  fVar3 = _UNK_?;
  if (iVar2 != 0) {
    for (; this != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0;
        this = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               (*pMVar1->methodPointer)(this,pMVar1)) {
      pFVar4 = method->klass->rgctx_data->klass->fields;
      pIVar5 = pFVar4[5].parent;
      plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar4[5].offset);
      iVar2._0_2_ = (pIVar5->byval_arg).attrs;
      iVar2._2_1_ = (pIVar5->byval_arg).type;
      iVar2._3_1_ = (pIVar5->byval_arg).field_0xb;
      plVar7 = plVar6 + -2;
      if (-1 < iVar2) {
        plVar7 = plVar6;
      }
      lVar8 = *plVar7;
      if (lVar8 == 0) goto DAT_?;
      if (*(int *)(lVar8 + 0x18) == 0) goto code_?;
      if (*(longlong *)(lVar8 + 0x20) == 0) {
DAT_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pMVar1 = method->klass->rgctx_data[4].method;
      puVar10 = (undefined8 *)
                (*pMVar1->methodPointer)(auStack_11,*(longlong *)(lVar8 + 0x20),pMVar1);
      uStack_12 = *puVar10;
      fVar13 = *(float *)(puVar10 + 1);
      pFVar4 = method->klass->rgctx_data->klass->fields;
      pIVar5 = pFVar4[5].parent;
      plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar4[5].offset);
      iVar14._0_2_ = (pIVar5->byval_arg).attrs;
      iVar14._2_1_ = (pIVar5->byval_arg).type;
      iVar14._3_1_ = (pIVar5->byval_arg).field_0xb;
      plVar7 = plVar6 + -2;
      if (-1 < iVar14) {
        plVar7 = plVar6;
      }
      lVar8 = *plVar7;
      if (lVar8 == 0) goto DAT_?;
      if (*(uint *)(lVar8 + 0x18) < 2) goto code_?;
      if (*(longlong *)(lVar8 + 0x28) != 0) {
        pFVar4 = method->klass->rgctx_data->klass->fields;
        pIVar5 = pFVar4[5].parent;
        plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar4[5].offset);
        iVar15._0_2_ = (pIVar5->byval_arg).attrs;
        iVar15._2_1_ = (pIVar5->byval_arg).type;
        iVar15._3_1_ = (pIVar5->byval_arg).field_0xb;
        plVar7 = plVar6 + -2;
        if (-1 < iVar15) {
          plVar7 = plVar6;
        }
        lVar8 = *plVar7;
        uStack_16 = uStack_12;
        if (lVar8 == 0) goto DAT_?;
        if (*(uint *)(lVar8 + 0x18) < 2) goto code_?;
        if (*(longlong *)(lVar8 + 0x28) == 0) goto DAT_?;
        pMVar1 = method->klass->rgctx_data[4].method;
        puVar10 = (undefined8 *)
                  (*pMVar1->methodPointer)(auStack_17,*(longlong *)(lVar8 + 0x28),pMVar1);
        fVar13 = fVar13 + *(float *)(puVar10 + 1);
        uStack_12 = CONCAT44(uStack_16._4_4_ + (float)((ulonglong)*puVar10 >> 0x20),
                             (float)uStack_16 + (float)*puVar10);
      }
      pMVar1 = method->klass->rgctx_data[6].method;
      iVar2 = (*pMVar1->methodPointer)(this,pMVar1);
      fVar18 = fVar3 / (float)iVar2;
      fStack_19 = fVar18 * fVar13;
      uStack_20 = CONCAT44(fVar18 * uStack_12._4_4_,fVar18 * (float)uStack_12);
      (*(method->klass->rgctx_data[7].method)->methodPointer)(this,&uStack_20);
      pFVar4 = method->klass->rgctx_data->klass->fields;
      pIVar5 = pFVar4[5].parent;
      plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar4[5].offset);
      iVar21._0_2_ = (pIVar5->byval_arg).attrs;
      iVar21._2_1_ = (pIVar5->byval_arg).type;
      iVar21._3_1_ = (pIVar5->byval_arg).field_0xb;
      plVar7 = plVar6 + -2;
      if (-1 < iVar21) {
        plVar7 = plVar6;
      }
      lVar8 = *plVar7;
      if (lVar8 == 0) goto DAT_?;
      if (*(int *)(lVar8 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(longlong *)(lVar8 + 0x20) == 0) goto DAT_?;
      pMVar1 = method->klass->rgctx_data[4].method;
      puVar10 = (undefined8 *)
                (*pMVar1->methodPointer)(auStack_22,*(longlong *)(lVar8 + 0x20),pMVar1);
      uVar23 = *puVar10;
      fVar13 = *(float *)(puVar10 + 1);
      pMVar1 = method->klass->rgctx_data[4].method;
      puVar10 = (undefined8 *)(*pMVar1->methodPointer)(auStack_24,this,pMVar1);
      fStack_25 = fVar13 - *(float *)(puVar10 + 1);
      uStack_26 = CONCAT44((float)((ulonglong)uVar23 >> 0x20) - (float)((ulonglong)*puVar10 >> 0x20),
                           (float)uVar23 - (float)*puVar10);
      FUN_?(&uStack_26);
      pFVar4 = method->klass->rgctx_data->klass->fields;
      pIVar5 = pFVar4[5].parent;
      plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar4[5].offset);
      iVar27._0_2_ = (pIVar5->byval_arg).attrs;
      iVar27._2_1_ = (pIVar5->byval_arg).type;
      iVar27._3_1_ = (pIVar5->byval_arg).field_0xb;
      plVar7 = plVar6 + -2;
      if (-1 < iVar27) {
        plVar7 = plVar6;
      }
      lVar8 = *plVar7;
      if (lVar8 == 0) goto DAT_?;
      if (*(int *)(lVar8 + 0x18) == 0) goto code_?;
      if (*(longlong *)(lVar8 + 0x20) == 0) goto DAT_?;
      pMVar1 = method->klass->rgctx_data[5].method;
      (*pMVar1->methodPointer)(*(longlong *)(lVar8 + 0x20),pMVar1);
      pFVar4 = method->klass->rgctx_data->klass->fields;
      pIVar5 = pFVar4[5].parent;
      plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar4[5].offset);
      iVar28._0_2_ = (pIVar5->byval_arg).attrs;
      iVar28._2_1_ = (pIVar5->byval_arg).type;
      iVar28._3_1_ = (pIVar5->byval_arg).field_0xb;
      plVar7 = plVar6 + -2;
      if (-1 < iVar28) {
        plVar7 = plVar6;
      }
      lVar8 = *plVar7;
      if (lVar8 == 0) goto DAT_?;
      if (*(uint *)(lVar8 + 0x18) < 2) goto code_?;
      if (*(longlong *)(lVar8 + 0x28) != 0) {
        pFVar4 = method->klass->rgctx_data->klass->fields;
        plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar4[5].offset);
        pIVar5 = pFVar4[5].parent;
        iVar29._0_2_ = (pIVar5->byval_arg).attrs;
        iVar29._2_1_ = (pIVar5->byval_arg).type;
        iVar29._3_1_ = (pIVar5->byval_arg).field_0xb;
        plVar7 = plVar6 + -2;
        if (-1 < iVar29) {
          plVar7 = plVar6;
        }
        puVar10 = (undefined8 *)
                  (*(method->klass->rgctx_data[4].method)->methodPointer)
                            (auStack_30,*(undefined8 *)(*plVar7 + 0x28),
                             method->klass->rgctx_data[4].rgctxDataDummy);
        uVar23 = *puVar10;
        fVar13 = *(float *)(puVar10 + 1);
        pMVar1 = method->klass->rgctx_data[4].method;
        puVar10 = (undefined8 *)(*pMVar1->methodPointer)(auStack_31,this,pMVar1);
        fStack_25 = fVar13 - *(float *)(puVar10 + 1);
        uStack_26 = CONCAT44((float)((ulonglong)uVar23 >> 0x20) -
                             (float)((ulonglong)*puVar10 >> 0x20),(float)uVar23 - (float)*puVar10);
        FUN_?(&uStack_26);
        pFVar4 = method->klass->rgctx_data->klass->fields;
        pIVar5 = pFVar4[5].parent;
        plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar4[5].offset);
        iVar32._0_2_ = (pIVar5->byval_arg).attrs;
        iVar32._2_1_ = (pIVar5->byval_arg).type;
        iVar32._3_1_ = (pIVar5->byval_arg).field_0xb;
        plVar7 = plVar6 + -2;
        if (-1 < iVar32) {
          plVar7 = plVar6;
        }
        lVar8 = *plVar7;
        if (lVar8 == 0) goto DAT_?;
        if (*(uint *)(lVar8 + 0x18) < 2) goto code_?;
        if (*(longlong *)(lVar8 + 0x28) == 0) goto DAT_?;
        pMVar1 = method->klass->rgctx_data[5].method;
        (*pMVar1->methodPointer)(*(longlong *)(lVar8 + 0x28),pMVar1);
      }
      (*(method->klass->rgctx_data[8].method)->methodPointer)(this);
      pMVar1 = method->klass->rgctx_data[9].method;
    }
  }
  return;
}


/* Boolean IsOutsideParent() */

bool Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__IsOutsideParent
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[4].parent;
  plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  plVar5 = plVar3 + -2;
  if (-1 < iVar4) {
    plVar5 = plVar3;
  }
  if (*plVar5 == 0) {
    return 0;
  }
  pMVar6 = method->klass->rgctx_data[4].method;
  puVar7 = (undefined8 *)(*pMVar6->methodPointer)(auStack_8,this,pMVar6);
  uStack_9 = *puVar7;
  fVar10 = *(float *)(puVar7 + 1);
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[4].parent;
  plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
  iVar11._0_2_ = (pIVar2->byval_arg).attrs;
  iVar11._2_1_ = (pIVar2->byval_arg).type;
  iVar11._3_1_ = (pIVar2->byval_arg).field_0xb;
  plVar5 = plVar3 + -2;
  if (-1 < iVar11) {
    plVar5 = plVar3;
  }
  if (*plVar5 != 0) {
    pMVar6 = method->klass->rgctx_data[4].method;
    puVar7 = (undefined8 *)(*pMVar6->methodPointer)(auStack_8,*plVar5,pMVar6);
    fStack_12 = fVar10 - *(float *)(puVar7 + 1);
    uStack_9 = CONCAT44(uStack_9._4_4_ - (float)((ulonglong)*puVar7 >> 0x20),
                         (float)uStack_9 - (float)*puVar7);
    fVar10 = (float)FUN_?(&uStack_9);
    pMVar6 = method->klass->rgctx_data[5].method;
    fVar13 = (float)(*pMVar6->methodPointer)(this,pMVar6);
    pFVar1 = method->klass->rgctx_data->klass->fields;
    pIVar2 = pFVar1[4].parent;
    plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
    iVar14._0_2_ = (pIVar2->byval_arg).attrs;
    iVar14._2_1_ = (pIVar2->byval_arg).type;
    iVar14._3_1_ = (pIVar2->byval_arg).field_0xb;
    plVar5 = plVar3 + -2;
    if (-1 < iVar14) {
      plVar5 = plVar3;
    }
    if (*plVar5 != 0) {
      pMVar6 = method->klass->rgctx_data[5].method;
      fVar15 = (float)(*pMVar6->methodPointer)(*plVar5,pMVar6);
      return fVar15 < fVar13 + fVar10;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Void SetParent(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__SetParent
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *newParent,
               MethodInfo *method)

{
  if (newParent != this) {
    pFVar1 = method->klass->rgctx_data->klass->fields;
    pIVar2 = pFVar1[4].parent;
    plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
    iVar4._0_2_ = (pIVar2->byval_arg).attrs;
    iVar4._2_1_ = (pIVar2->byval_arg).type;
    iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
    plVar5 = plVar3 + -2;
    if (-1 < iVar4) {
      plVar5 = plVar3;
    }
    if (newParent ==
        (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)*plVar5) {
      return;
    }
    pFVar1 = method->klass->rgctx_data->klass->fields;
    pIVar2 = pFVar1[4].parent;
    plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
    iVar6._0_2_ = (pIVar2->byval_arg).attrs;
    iVar6._2_1_ = (pIVar2->byval_arg).type;
    iVar6._3_1_ = (pIVar2->byval_arg).field_0xb;
    plVar5 = plVar3 + -2;
    if (-1 < iVar6) {
      plVar5 = plVar3;
    }
    if (*plVar5 != 0) {
      pFVar1 = method->klass->rgctx_data->klass->fields;
      pIVar2 = pFVar1[4].parent;
      plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
      iVar7._0_2_ = (pIVar2->byval_arg).attrs;
      iVar7._2_1_ = (pIVar2->byval_arg).type;
      iVar7._3_1_ = (pIVar2->byval_arg).field_0xb;
      pFVar1 = method->klass->rgctx_data->klass->fields;
      plVar5 = plVar3 + -2;
      if (-1 < iVar7) {
        plVar5 = plVar3;
      }
      pIVar2 = pFVar1[5].parent;
      plVar3 = (longlong *)(*plVar5 + (longlong)pFVar1[5].offset);
      iVar8._0_2_ = (pIVar2->byval_arg).attrs;
      iVar8._2_1_ = (pIVar2->byval_arg).type;
      iVar8._3_1_ = (pIVar2->byval_arg).field_0xb;
      plVar5 = plVar3 + -2;
      if (-1 < iVar8) {
        plVar5 = plVar3;
      }
      lVar9 = *plVar5;
      if (lVar9 == 0) goto code_?;
      if (*(int *)(lVar9 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar1 = method->klass->rgctx_data->klass->fields;
      pIVar2 = pFVar1[4].parent;
      lVar11 = (longlong)pFVar1[4].offset;
      iVar12._0_2_ = (pIVar2->byval_arg).attrs;
      iVar12._2_1_ = (pIVar2->byval_arg).type;
      iVar12._3_1_ = (pIVar2->byval_arg).field_0xb;
      pFVar1 = method->klass->rgctx_data->klass->fields;
      if (*(SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)(lVar9 + 0x20)
          == this) {
        plVar3 = (longlong *)((longlong)&this->klass + lVar11);
        plVar5 = plVar3 + -2;
        if (-1 < iVar12) {
          plVar5 = plVar3;
        }
        pIVar2 = pFVar1[5].parent;
        puVar13 = (undefined8 *)(*plVar5 + (longlong)pFVar1[5].offset);
        iVar14._0_2_ = (pIVar2->byval_arg).attrs;
        iVar14._2_1_ = (pIVar2->byval_arg).type;
        iVar14._3_1_ = (pIVar2->byval_arg).field_0xb;
        puVar15 = puVar13 + -2;
        if (-1 < iVar14) {
          puVar15 = puVar13;
        }
        plVar5 = (longlong *)*puVar15;
        pFVar1 = method->klass->rgctx_data->klass->fields;
        pIVar2 = pFVar1[4].parent;
        plVar16 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
        iVar17._0_2_ = (pIVar2->byval_arg).attrs;
        iVar17._2_1_ = (pIVar2->byval_arg).type;
        iVar17._3_1_ = (pIVar2->byval_arg).field_0xb;
        pFVar1 = method->klass->rgctx_data->klass->fields;
        plVar3 = plVar16 + -2;
        if (-1 < iVar17) {
          plVar3 = plVar16;
        }
        pIVar2 = pFVar1[5].parent;
        plVar16 = (longlong *)(*plVar3 + (longlong)pFVar1[5].offset);
        iVar18._0_2_ = (pIVar2->byval_arg).attrs;
        iVar18._2_1_ = (pIVar2->byval_arg).type;
        iVar18._3_1_ = (pIVar2->byval_arg).field_0xb;
        plVar3 = plVar16 + -2;
        if (-1 < iVar18) {
          plVar3 = plVar16;
        }
        if (*(uint *)(*plVar3 + 0x18) < 2) goto code_?;
        lVar9 = *(longlong *)(*plVar3 + 0x28);
        if ((lVar9 != 0) &&
           (lVar11 = FUN_?(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0)) {
          uVar19 = FUN_?();
          FUN_?(uVar19,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FUN_?(plVar5,0,lVar9);
        pFVar1 = method->klass->rgctx_data->klass->fields;
        pIVar2 = pFVar1[4].parent;
        plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
        iVar20._0_2_ = (pIVar2->byval_arg).attrs;
        iVar20._2_1_ = (pIVar2->byval_arg).type;
        iVar20._3_1_ = (pIVar2->byval_arg).field_0xb;
        pFVar1 = method->klass->rgctx_data->klass->fields;
        plVar5 = plVar3 + -2;
        if (-1 < iVar20) {
          plVar5 = plVar3;
        }
        pIVar2 = pFVar1[5].parent;
        plVar3 = (longlong *)(*plVar5 + (longlong)pFVar1[5].offset);
        iVar21._0_2_ = (pIVar2->byval_arg).attrs;
        iVar21._2_1_ = (pIVar2->byval_arg).type;
        iVar21._3_1_ = (pIVar2->byval_arg).field_0xb;
        plVar5 = plVar3 + -2;
        if (-1 < iVar21) {
          plVar5 = plVar3;
        }
        lVar9 = *plVar5;
        if (lVar9 == 0) goto code_?;
      }
      else {
        plVar3 = (longlong *)((longlong)&this->klass + lVar11);
        plVar5 = plVar3 + -2;
        if (-1 < iVar12) {
          plVar5 = plVar3;
        }
        pIVar2 = pFVar1[5].parent;
        plVar3 = (longlong *)(*plVar5 + (longlong)pFVar1[5].offset);
        iVar22._0_2_ = (pIVar2->byval_arg).attrs;
        iVar22._2_1_ = (pIVar2->byval_arg).type;
        iVar22._3_1_ = (pIVar2->byval_arg).field_0xb;
        plVar5 = plVar3 + -2;
        if (-1 < iVar22) {
          plVar5 = plVar3;
        }
        lVar9 = *plVar5;
      }
      FUN_?(lVar9,1,0);
      pFVar1 = method->klass->rgctx_data->klass->fields;
      pIVar2 = pFVar1[4].parent;
      plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
      iVar23._0_2_ = (pIVar2->byval_arg).attrs;
      iVar23._2_1_ = (pIVar2->byval_arg).type;
      iVar23._3_1_ = (pIVar2->byval_arg).field_0xb;
      plVar5 = plVar3 + -2;
      if (-1 < iVar23) {
        plVar5 = plVar3;
      }
      lVar9 = *plVar5;
      pFVar1 = method->klass->rgctx_data->klass->fields;
      pIVar2 = pFVar1[6].parent;
      piVar24 = (int *)(pFVar1[6].offset + lVar9);
      iVar25._0_2_ = (pIVar2->byval_arg).attrs;
      iVar25._2_1_ = (pIVar2->byval_arg).type;
      iVar25._3_1_ = (pIVar2->byval_arg).field_0xb;
      if (lVar9 == 0) goto code_?;
      piVar26 = piVar24 + -4;
      if (-1 < iVar25) {
        piVar26 = piVar24;
      }
      func_?(lVar9,method->klass->rgctx_data->klass->fields + 6,*piVar26 + -1);
      func_?(this,method->klass->rgctx_data->klass->fields + 4,0);
    }
    pFVar1 = method->klass->rgctx_data->klass->fields + 4;
    if (newParent != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      func_?(this,pFVar1,newParent);
      pIVar2 = method->klass;
      pFVar1 = pIVar2->rgctx_data->klass->fields;
      pIVar27 = pFVar1[4].parent;
      plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
      iVar28._0_2_ = (pIVar27->byval_arg).attrs;
      iVar28._2_1_ = (pIVar27->byval_arg).type;
      iVar28._3_1_ = (pIVar27->byval_arg).field_0xb;
      pFVar1 = pIVar2->rgctx_data->klass->fields;
      plVar5 = plVar3 + -2;
      if (-1 < iVar28) {
        plVar5 = plVar3;
      }
      pIVar27 = pFVar1[5].parent;
      plVar3 = (longlong *)(*plVar5 + (longlong)pFVar1[5].offset);
      iVar29._0_2_ = (pIVar27->byval_arg).attrs;
      iVar29._2_1_ = (pIVar27->byval_arg).type;
      iVar29._3_1_ = (pIVar27->byval_arg).field_0xb;
      plVar5 = plVar3 + -2;
      if (-1 < iVar29) {
        plVar5 = plVar3;
      }
      plVar5 = (longlong *)*plVar5;
      pFVar1 = pIVar2->rgctx_data->klass->fields;
      pIVar27 = pFVar1[4].parent;
      plVar16 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[4].offset);
      iVar30._0_2_ = (pIVar27->byval_arg).attrs;
      iVar30._2_1_ = (pIVar27->byval_arg).type;
      iVar30._3_1_ = (pIVar27->byval_arg).field_0xb;
      plVar3 = plVar16 + -2;
      if (-1 < iVar30) {
        plVar3 = plVar16;
      }
      lVar9 = *plVar3;
      pFVar1 = pIVar2->rgctx_data->klass->fields;
      pIVar27 = pFVar1[6].parent;
      piVar24 = (int *)(pFVar1[6].offset + lVar9);
      iVar31._0_2_ = (pIVar27->byval_arg).attrs;
      iVar31._2_1_ = (pIVar27->byval_arg).type;
      iVar31._3_1_ = (pIVar27->byval_arg).field_0xb;
      if (lVar9 != 0) {
        piVar26 = piVar24 + -4;
        if (-1 < iVar31) {
          piVar26 = piVar24;
        }
        iVar4 = *piVar26;
        func_?(lVar9,pIVar2->rgctx_data->klass->fields + 6,iVar4 + 1);
        if (plVar5 != (longlong *)0x0) {
          if ((this != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
             && (lVar9 = FUN_?(this,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
            uVar19 = FUN_?();
            FUN_?(uVar19,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FUN_?(plVar5,(longlong)iVar4,this);
          return;
        }
      }
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    func_?(this,pFVar1,0);
  }
  return;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType] StackPop() */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__StackPop
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1->parent;
  plVar3 = (longlong *)((longlong)&this->klass + (longlong)pFVar1->offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  plVar5 = plVar3 + -2;
  if (-1 < iVar4) {
    plVar5 = plVar3;
  }
  pSVar6 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)*plVar5;
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[1].parent;
  puVar7 = (undefined8 *)((longlong)&pSVar6->klass + (longlong)pFVar1[1].offset);
  iVar8._0_2_ = (pIVar2->byval_arg).attrs;
  iVar8._2_1_ = (pIVar2->byval_arg).type;
  iVar8._3_1_ = (pIVar2->byval_arg).field_0xb;
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1->parent;
  puVar9 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1->offset);
  iVar10._0_2_ = (pIVar2->byval_arg).attrs;
  iVar10._2_1_ = (pIVar2->byval_arg).type;
  iVar10._3_1_ = (pIVar2->byval_arg).field_0xb;
  puVar11 = puVar9 + -2;
  if (-1 < iVar10) {
    puVar11 = puVar9;
  }
  puVar9 = puVar7 + -2;
  if (-1 < iVar8) {
    puVar9 = puVar7;
  }
  bVar12 = iRam_? != 0;
  *puVar11 = *puVar9;
  if (bVar12) {
    uVar13 = (uint)((ulonglong)puVar11 >> 0xc);
    uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
      puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar15 == *puVar16;
      if (bVar12) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  return pSVar6;
}


/* Void StackPush(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__StackPush
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *node,
               MethodInfo *method)

{
  iVar1 = iRam_?;
  pFVar2 = method->klass->rgctx_data->klass->fields;
  pIVar3 = pFVar2->parent;
  puVar4 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar2->offset);
  iVar5._0_2_ = (pIVar3->byval_arg).attrs;
  iVar5._2_1_ = (pIVar3->byval_arg).type;
  iVar5._3_1_ = (pIVar3->byval_arg).field_0xb;
  if (node == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = method->klass->rgctx_data->klass->fields;
  pIVar3 = pFVar2[1].parent;
  puVar7 = (undefined8 *)((longlong)&node->klass + (longlong)pFVar2[1].offset);
  iVar8._0_2_ = (pIVar3->byval_arg).attrs;
  iVar8._2_1_ = (pIVar3->byval_arg).type;
  iVar8._3_1_ = (pIVar3->byval_arg).field_0xb;
  puVar9 = puVar7 + -2;
  if (-1 < iVar8) {
    puVar9 = puVar7;
  }
  puVar7 = puVar4 + -2;
  if (-1 < iVar5) {
    puVar7 = puVar4;
  }
  *puVar9 = *puVar7;
  if (iVar1 != 0) {
    uVar10 = (uint)((ulonglong)puVar9 >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar14);
  }
  pFVar2 = method->klass->rgctx_data->klass->fields;
  pIVar3 = pFVar2->parent;
  puVar9 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar2->offset);
  iVar15._0_2_ = (pIVar3->byval_arg).attrs;
  iVar15._2_1_ = (pIVar3->byval_arg).type;
  iVar15._3_1_ = (pIVar3->byval_arg).field_0xb;
  puVar4 = puVar9 + -2;
  if (-1 < iVar15) {
    puVar4 = puVar9;
  }
  *puVar4 = node;
  if (iVar1 != 0) {
    uVar10 = (uint)((ulonglong)puVar4 >> 0xc);
    uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar14 = uVar16 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar16 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  return;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined1 auVar3 [32];
  int iVar4;
  int iVar5;
  int iVar6;
  FieldInfo *pFVar7;
  Il2CppClass *pIVar8;
  ulonglong uVar9;
  Vector3__StaticFields *pVVar10;
  float fVar11;
  float fVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [16];
  float *pfVar18;
  undefined1 (*pauVar19) [32];
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  float *pfVar24;
  longlong lVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined1 auVar28 [32];
  
  uVar22 = (ulonglong)(method->klass->rgctx_data[2].klass)->actualSize;
  pvVar13 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
    pvVar13 = (void *)FUN_?(pvVar13);
  }
  uVar14 = FUN_?(pvVar13,2);
  pFVar7 = method->klass->rgctx_data->klass->fields;
  pIVar8 = pFVar7[5].parent;
  puVar23 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar7[5].offset);
  iVar4._0_2_ = (pIVar8->byval_arg).attrs;
  iVar4._2_1_ = (pIVar8->byval_arg).type;
  iVar4._3_1_ = (pIVar8->byval_arg).field_0xb;
  puVar26 = puVar23 + -2;
  if (-1 < iVar4) {
    puVar26 = puVar23;
  }
  bVar27 = iRam_? != 0;
  *puVar26 = uVar14;
  if (bVar27) {
    uVar21 = (uint)((ulonglong)puVar26 >> 0xc);
    uVar20 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
      puVar1 = (ulonglong *)(uVar20 * 8 + 0xADDR);
      LOCK();
      bVar27 = uVar9 == *puVar1;
      if (bVar27) {
        *puVar1 = uVar9 | 1L << (ulonglong)(uVar21 & 0x3f);
      }
      UNLOCK();
    } while (!bVar27);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar10->zeroVector).y;
  fVar11 = (pVVar10->zeroVector).y;
  fVar12 = (pVVar10->zeroVector).z;
  pFVar7 = method->klass->rgctx_data->klass->fields;
  pIVar8 = pFVar7[2].parent;
  pfVar18 = (float *)((longlong)&this->klass + (longlong)pFVar7[2].offset);
  iVar5._0_2_ = (pIVar8->byval_arg).attrs;
  iVar5._2_1_ = (pIVar8->byval_arg).type;
  iVar5._3_1_ = (pIVar8->byval_arg).field_0xb;
  pfVar24 = pfVar18 + -4;
  if (-1 < iVar5) {
    pfVar24 = pfVar18;
  }
  bVar27 = iRam_? != 0;
  *pfVar24 = (pVVar10->zeroVector).x;
  pfVar24[1] = fVar11;
  pfVar24[2] = fVar12;
  pfVar24[3] = 1.0;
  if (bVar27) {
    uVar21 = (uint)((ulonglong)pfVar24 >> 0xc);
    uVar20 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
      puVar1 = (ulonglong *)(uVar20 * 8 + 0xADDR);
      LOCK();
      bVar27 = uVar9 == *puVar1;
      if (bVar27) {
        *puVar1 = uVar9 | 1L << (uVar21 & 0x3f);
      }
      UNLOCK();
    } while (!bVar27);
  }
  pFVar7 = method->klass->rgctx_data->klass->fields;
  pIVar8 = pFVar7[3].parent;
  pauVar15 = (undefined1 (*) [32])((longlong)&this->klass + (longlong)pFVar7[3].offset);
  iVar6._0_2_ = (pIVar8->byval_arg).attrs;
  iVar6._2_1_ = (pIVar8->byval_arg).type;
  iVar6._3_1_ = (pIVar8->byval_arg).field_0xb;
  pauVar19 = (undefined1 (*) [32])(pauVar15[-1] + 0x10);
  if (-1 < iVar6) {
    pauVar19 = pauVar15;
  }
  switch(uVar22) {
  case 0:
    return;
  case 8:
    *(undefined8 *)(pauVar19[-1] + uVar22 + 0x18) = 0;
    return;
  case 9:
    *(undefined8 *)(pauVar19[-1] + uVar22 + 0x17) = 0;
    pauVar19[-1][uVar22 + 0x1f] = 0;
    return;
  case 10:
    *(undefined8 *)(pauVar19[-1] + uVar22 + 0x16) = 0;
    *(undefined2 *)(pauVar19[-1] + uVar22 + 0x1e) = 0;
    return;
  case 0xb:
    *(undefined8 *)(pauVar19[-1] + uVar22 + 0x15) = 0;
    *(undefined2 *)(pauVar19[-1] + uVar22 + 0x1d) = 0;
    pauVar19[-1][uVar22 + 0x1f] = 0;
    return;
  case 0xc:
    *(undefined8 *)(pauVar19[-1] + uVar22 + 0x14) = 0;
  case 4:
    *(undefined4 *)(pauVar19[-1] + uVar22 + 0x1c) = 0;
    return;
  case 0xd:
    *(undefined8 *)(pauVar19[-1] + uVar22 + 0x13) = 0;
  case 5:
    *(undefined4 *)(pauVar19[-1] + uVar22 + 0x1b) = 0;
    pauVar19[-1][uVar22 + 0x1f] = 0;
    return;
  case 0xe:
    *(undefined8 *)(pauVar19[-1] + uVar22 + 0x12) = 0;
  case 6:
    *(undefined4 *)(pauVar19[-1] + uVar22 + 0x1a) = 0;
  case 2:
    *(undefined2 *)(pauVar19[-1] + uVar22 + 0x1e) = 0;
    return;
  case 0xf:
    *(undefined8 *)(pauVar19[-1] + uVar22 + 0x11) = 0;
  case 7:
    *(undefined4 *)(pauVar19[-1] + uVar22 + 0x19) = 0;
  case 3:
    *(undefined2 *)(pauVar19[-1] + uVar22 + 0x1d) = 0;
  case 1:
    pauVar19[-1][uVar22 + 0x1f] = 0;
    return;
  }
  auVar28._0_16_ = ZEXT816(0);
  if (uVar22 < 0x21) {
    *(undefined1 (*) [16])*pauVar19 = auVar28._0_16_;
    *(undefined1 (*) [16])(pauVar19[-1] + uVar22 + 0x10) = auVar28._0_16_;
    return;
  }
  if (uRam_? < 3) {
    if ((uVar22 <= uRam_?) || ((bRam_? & 2) == 0)) {
      lVar25 = ((ulonglong)pauVar19 & 0xf) - 0x10;
      pauVar17 = (undefined1 (*) [16])((longlong)pauVar19 - lVar25);
      uVar22 = uVar22 + lVar25;
      if (0x80 < uVar22) {
        do {
          *pauVar17 = auVar28._0_16_;
          pauVar17[1] = auVar28._0_16_;
          pauVar17[2] = auVar28._0_16_;
          pauVar17[3] = auVar28._0_16_;
          pauVar17[4] = auVar28._0_16_;
          pauVar17[5] = auVar28._0_16_;
          pauVar17[6] = auVar28._0_16_;
          pauVar17[7] = auVar28._0_16_;
          pauVar17 = pauVar17 + 8;
          uVar22 = uVar22 - 0x80;
        } while (0x7f < uVar22);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar22 + 0xf >> 4) * 4) + 0xADDR))
                (pauVar17,uVar2);
      return;
    }
  }
  else if (((uVar22 <= uRam_?) || (uRam_? < uVar22)) ||
          ((bRam_? & 2) == 0)) {
    auVar28._16_16_ = auVar28._0_16_;
    lVar25 = ((ulonglong)pauVar19 & 0x1f) - 0x20;
    pauVar15 = (undefined1 (*) [32])((longlong)pauVar19 - lVar25);
    uVar22 = uVar22 + lVar25;
    if (0x100 < uVar22) {
      if (uRam_? < uVar22) {
        do {
          uVar20 = uVar22;
          pauVar16 = pauVar15;
          auVar3 = vmovntdq_avx(auVar28);
          *pauVar16 = auVar3;
          auVar3 = vmovntdq_avx(auVar28);
          pauVar16[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar28);
          pauVar16[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar28);
          pauVar16[3] = auVar3;
          auVar3 = vmovntdq_avx(auVar28);
          pauVar16[4] = auVar3;
          auVar3 = vmovntdq_avx(auVar28);
          pauVar16[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar28);
          pauVar16[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar28);
          pauVar16[7] = auVar3;
          pauVar15 = pauVar16 + 8;
          uVar22 = uVar20 - 0x100;
        } while (0xff < uVar20 - 0x100);
        uVar22 = uVar20 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar20) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(auVar28);
          *(undefined1 (*) [32])(*pauVar16 + uVar22) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(auVar28);
          *(undefined1 (*) [32])(pauVar16[1] + uVar22) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(auVar28);
          *(undefined1 (*) [32])(pauVar16[2] + uVar22) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(auVar28);
          *(undefined1 (*) [32])(pauVar16[3] + uVar22) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(auVar28);
          *(undefined1 (*) [32])(pauVar16[4] + uVar22) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(auVar28);
          *(undefined1 (*) [32])(pauVar16[5] + uVar22) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(auVar28);
          *(undefined1 (*) [32])(pauVar16[6] + uVar22) = auVar3;
        default:
          *(undefined1 (*) [32])(pauVar16[-1] + uVar20) = auVar28;
        case 0x100:
          *pauVar19 = auVar28;
          return;
        }
      }
      do {
        *pauVar15 = auVar28;
        pauVar15[1] = auVar28;
        pauVar15[2] = auVar28;
        pauVar15[3] = auVar28;
        pauVar15[4] = auVar28;
        pauVar15[5] = auVar28;
        pauVar15[6] = auVar28;
        pauVar15[7] = auVar28;
        pauVar15 = pauVar15 + 8;
        uVar22 = uVar22 - 0x100;
      } while (0xff < uVar22);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar22 + 0x1f >> 5) * 4) + 0xADDR))
              (0,-lVar25);
    return;
  }
  for (; uVar22 != 0; uVar22 = uVar22 - 1) {
    (*pauVar19)[0] = 0;
    pauVar19 = (undefined1 (*) [32])(*pauVar19 + 1);
  }
  return;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType,
   Sphere) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor_1
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *data,Sphere *sphere,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[2].klass)->actualSize;
  apuStack_2[0] = &UNK_?;
  pMVar3 = method;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)data;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  pvVar5 = pMVar3->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    pvVar5 = (void *)FUN_?(pvVar5);
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  uVar6 = FUN_?(pvVar5,2);
  iVar7 = iRam_?;
  pFVar8 = method->klass->rgctx_data->klass->fields;
  pIVar9 = pFVar8[5].parent;
  puVar10 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar8[5].offset);
  iVar11._0_2_ = (pIVar9->byval_arg).attrs;
  iVar11._2_1_ = (pIVar9->byval_arg).type;
  iVar11._3_1_ = (pIVar9->byval_arg).field_0xb;
  puVar12 = puVar10 + -2;
  if (-1 < iVar11) {
    puVar12 = puVar10;
  }
  *puVar12 = uVar6;
  if (iVar7 != 0) {
    uVar13 = (uint)((ulonglong)puVar12 >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar17 = uVar15 == *puVar16;
      if (bVar17) {
        *puVar16 = uVar15 | 1L << (ulonglong)(uVar13 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar17);
  }
  fVar18 = (sphere->_center).y;
  fVar19 = (sphere->_center).z;
  fVar20 = sphere->_radius;
  pFVar8 = method->klass->rgctx_data->klass->fields;
  pIVar9 = pFVar8[2].parent;
  pfVar21 = (float *)((longlong)&this->klass + (longlong)pFVar8[2].offset);
  iVar22._0_2_ = (pIVar9->byval_arg).attrs;
  iVar22._2_1_ = (pIVar9->byval_arg).type;
  iVar22._3_1_ = (pIVar9->byval_arg).field_0xb;
  pfVar23 = pfVar21 + -4;
  if (-1 < iVar22) {
    pfVar23 = pfVar21;
  }
  *pfVar23 = (sphere->_center).x;
  pfVar23[1] = fVar18;
  pfVar23[2] = fVar19;
  pfVar23[3] = fVar20;
  if (iVar7 != 0) {
    uVar13 = (uint)((ulonglong)pfVar23 >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar17 = uVar15 == *puVar16;
      if (bVar17) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar17);
  }
  p_Var16 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var16 = data;
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar4,p_Var16,uVar1);
  pFVar8 = method->klass->rgctx_data->klass->fields;
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  FUN_?(this,pFVar8 + 3,&stack0xffffffffffffffd8 + lVar4,uVar1);
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Center
                    (Vector3 *__return_storage_ptr__,
                    SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                    MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  puVar2 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1[2].offset);
  pIVar3 = pFVar1[2].parent;
  iVar4._0_2_ = (pIVar3->byval_arg).attrs;
  iVar4._2_1_ = (pIVar3->byval_arg).type;
  iVar4._3_1_ = (pIVar3->byval_arg).field_0xb;
  puVar5 = puVar2 + -2;
  if (-1 < iVar4) {
    puVar5 = puVar2;
  }
  fVar6 = *(float *)(puVar5 + 1);
  uVar7 = *puVar5;
  __return_storage_ptr__->x = (float)(int)uVar7;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType][] get_Children() */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Array *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Children
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[5].parent;
  puVar3 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1[5].offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  puVar5 = puVar3 + -2;
  if (-1 < iVar4) {
    puVar5 = puVar3;
  }
  return (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Array *)*puVar5;
}


/* __Il2CppFullySharedGenericType get_Data() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Data
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x10) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?(this,this);
  lVar3 = -lVar3;
  lVar4 = *(longlong *)(**(longlong **)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x80);
  lVar5 = (longlong)&this->klass + (longlong)*(int *)(lVar4 + 0x78);
  lVar6 = lVar5 + -0x10;
  if (-1 < *(int *)(*(longlong *)(lVar4 + 0x70) + 0x28)) {
    lVar6 = lVar5;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(&stack0xfffffffffffffff8 + lVar3,lVar6,uVar1);
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  p_Var4 = (_Il2CppFullySharedGenericType *)
           FUN_?(method,&stack0xfffffffffffffff8 + lVar3,uVar1);
  return p_Var4;
}


/* Boolean get_IsLeaf() */

bool Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_IsLeaf
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  lVar2 = FUN_?(this,this);
  plVar3 = (longlong *)(&stack0xfffffffffffffff8 + -lVar2);
  pFVar4 = method->klass->rgctx_data->klass->fields;
  pIVar5 = pFVar4[3].parent;
  lVar6 = (longlong)&this->klass + (longlong)pFVar4[3].offset;
  iVar7._0_2_ = (pIVar5->byval_arg).attrs;
  iVar7._2_1_ = (pIVar5->byval_arg).type;
  iVar7._3_1_ = (pIVar5->byval_arg).field_0xb;
  lVar8 = lVar6 + -0x10;
  if (-1 < iVar7) {
    lVar8 = lVar6;
  }
  *(undefined **)((longlong)apuStack_1 + -lVar2) = &UNK_?;
  FUN_?(plVar3,lVar8);
  pIVar5 = method->klass->rgctx_data[2].klass;
  iVar9._0_2_ = (pIVar5->byval_arg).attrs;
  iVar9._2_1_ = (pIVar5->byval_arg).type;
  iVar9._3_1_ = (pIVar5->byval_arg).field_0xb;
  if (iVar9 < 0) {
    if ((pIVar5->generic_class != (Il2CppGenericClass *)0x0) && ((pIVar5->field_0x135 & 8) != 0)) {
      return (char)*plVar3 != '\0';
    }
    return 1;
  }
  return *plVar3 != 0;
}


/* Int32 get_NumChildren() */

int32_t Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_NumChildren
                  (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                  MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[6].parent;
  piVar3 = (int32_t *)((longlong)&this->klass + (longlong)pFVar1[6].offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  piVar5 = piVar3 + -4;
  if (-1 < iVar4) {
    piVar5 = piVar3;
  }
  return *piVar5;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Radius
                (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[2].parent;
  lVar3 = (longlong)&this->klass + (longlong)pFVar1[2].offset;
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  lVar5 = lVar3 + -0x10;
  if (-1 < iVar4) {
    lVar5 = lVar3;
  }
  return *(float *)(lVar5 + 0xc);
}


/* Sphere get_Sphere() */

Sphere * Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
         __Il2CppFullySharedGenericType]::
         SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Sphere
                   (Sphere *__return_storage_ptr__,
                   SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                   MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[2].parent;
  puVar3 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1[2].offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  puVar5 = puVar3 + -2;
  if (-1 < iVar4) {
    puVar5 = puVar3;
  }
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  (__return_storage_ptr__->_center).x = (float)(int)uVar6;
  (__return_storage_ptr__->_center).y = (float)(int)((ulonglong)uVar6 >> 0x20);
  *(undefined8 *)&(__return_storage_ptr__->_center).z = uVar7;
  return __return_storage_ptr__;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType] get_StackTop() */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_StackTop
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1->parent;
  puVar3 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1->offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  puVar5 = puVar3 + -2;
  if (-1 < iVar4) {
    puVar5 = puVar3;
  }
  return (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)*puVar5;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Center
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               Vector3 *value,MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  puVar2 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1[2].offset);
  pIVar3 = pFVar1[2].parent;
  iVar4._0_2_ = (pIVar3->byval_arg).attrs;
  iVar4._2_1_ = (pIVar3->byval_arg).type;
  iVar4._3_1_ = (pIVar3->byval_arg).field_0xb;
  fVar5 = value->z;
  puVar6 = puVar2 + -2;
  if (-1 < iVar4) {
    puVar6 = puVar2;
  }
  *puVar6 = *(undefined8 *)value;
  *(float *)(puVar6 + 1) = fVar5;
  return;
}


/* Void set_Data(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Data
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[2].klass)->actualSize;
  apuStack_2[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar3 = FUN_?(this,value,value);
  lVar3 = -lVar3;
  p_Var4 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var4 = value;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(&stack0xffffffffffffffe8 + lVar3,p_Var4,uVar1);
  pFVar4 = method->klass->rgctx_data->klass->fields;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(this,pFVar4 + 3,&stack0xffffffffffffffe8 + lVar3,uVar1);
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Radius
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               float value,MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  lVar2 = (longlong)&this->klass + (longlong)pFVar1[2].offset;
  pIVar3 = pFVar1[2].parent;
  fVar4 = 0.0;
  if (0.0 <= value) {
    fVar4 = value;
  }
  iVar5._0_2_ = (pIVar3->byval_arg).attrs;
  iVar5._2_1_ = (pIVar3->byval_arg).type;
  iVar5._3_1_ = (pIVar3->byval_arg).field_0xb;
  lVar6 = lVar2 + -0x10;
  if (-1 < iVar5) {
    lVar6 = lVar2;
  }
  *(float *)(lVar6 + 0xc) = fVar4;
  return;
}


/* Void set_Sphere(Sphere) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Sphere
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               Sphere *value,MethodInfo *method)

{
  uVar1 = *(undefined8 *)&(value->_center).z;
  pFVar2 = method->klass->rgctx_data->klass->fields;
  puVar3 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar2[2].offset);
  pIVar4 = pFVar2[2].parent;
  iVar5._0_2_ = (pIVar4->byval_arg).attrs;
  iVar5._2_1_ = (pIVar4->byval_arg).type;
  iVar5._3_1_ = (pIVar4->byval_arg).field_0xb;
  puVar6 = puVar3 + -2;
  if (-1 < iVar5) {
    puVar6 = puVar3;
  }
  bVar7 = iRam_? != 0;
  *puVar6 = *(undefined8 *)&value->_center;
  puVar6[1] = uVar1;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)puVar6 >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}

