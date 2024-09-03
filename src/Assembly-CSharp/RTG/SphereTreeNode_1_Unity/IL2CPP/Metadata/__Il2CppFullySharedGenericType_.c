
/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]
   ClosestChild(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ClosestChild
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *node,
          MethodInfo *method)

{
  piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 6);
  if (*piVar1 == 0) {
    return (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0;
  }
  piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
  iVar2 = *piVar1;
  if (iVar2 == 0) goto code_?;
  if (*(int *)(iVar2 + 0xc) != 0) {
    pSVar3 = *(SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
              (iVar2 + 0x10);
    if (node == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    goto code_?;
    puVar4 = (undefined8 *)
             (*(method->klass->rgctx_data[4].method)->methodPointer)
                       (&uStack_5,node,method->klass->rgctx_data[4].rgctxDataDummy);
    uStack_6 = *puVar4;
    fStack_7 = *(float *)(puVar4 + 1);
    piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
    iVar2 = *piVar1;
    if (iVar2 == 0) goto code_?;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0x10) == 0) goto code_?;
      puVar4 = (undefined8 *)
               (*(method->klass->rgctx_data[4].method)->methodPointer)
                         (&uStack_5,*(int *)(iVar2 + 0x10),
                          method->klass->rgctx_data[4].rgctxDataDummy);
      uVar8 = *puVar4;
      fStack_9 = *(float *)(puVar4 + 1);
      uStack_10._0_4_ = (float)uVar8;
      uStack_10._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      fStack_11 = fStack_7 - fStack_9;
      uStack_6 = CONCAT44(uStack_6._4_4_ - uStack_10._4_4_,(float)uStack_6 - (float)uStack_10);
      uStack_10 = uVar8;
      fStack_7 = fStack_11;
      fVar12 = (float10)func_?(&uStack_6,0);
      fStack_13 = (float)fVar12;
      piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
      iVar2 = *piVar1;
      if (iVar2 == 0) goto code_?;
      if (1 < *(uint *)(iVar2 + 0xc)) {
        if (*(int *)(iVar2 + 0x14) == 0) {
          return pSVar3;
        }
        puVar4 = (undefined8 *)
                 (*(method->klass->rgctx_data[4].method)->methodPointer)
                           (&uStack_5,node,method->klass->rgctx_data[4].rgctxDataDummy);
        uStack_10 = *puVar4;
        fStack_9 = *(float *)(puVar4 + 1);
        piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
        iVar2 = *piVar1;
        if (iVar2 == 0) goto code_?;
        if (1 < *(uint *)(iVar2 + 0xc)) {
          if (*(int *)(iVar2 + 0x14) == 0) goto code_?;
          puVar4 = (undefined8 *)
                   (*(method->klass->rgctx_data[4].method)->methodPointer)
                             (auStack_14,*(int *)(iVar2 + 0x14),
                              method->klass->rgctx_data[4].rgctxDataDummy);
          uVar8 = *puVar4;
          uStack_5._0_4_ = (float)uVar8;
          uStack_5._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
          fStack_11 = fStack_9 - *(float *)(puVar4 + 1);
          uStack_6 = CONCAT44(uStack_10._4_4_ - uStack_5._4_4_,(float)uStack_10 - (float)uStack_5
                              );
          uStack_5 = uVar8;
          fStack_7 = fStack_11;
          fVar12 = (float10)func_?(&uStack_6,0);
          fStack_15 = (float)fVar12;
          if (fStack_13 <= fStack_15) {
            return pSVar3;
          }
          piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
          iVar2 = *piVar1;
          if (iVar2 == 0) goto code_?;
          if (1 < *(uint *)(iVar2 + 0xc)) {
            return *(SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
                    (iVar2 + 0x14);
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pSVar3 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)(*pcVar16)();
  return pSVar3;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__DebugDraw
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(this,method->klass->rgctx_data->klass->fields + 2);
  uStack_2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  q = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  iVar4 = func_?(this,method->klass->rgctx_data->klass->fields + 2);
  pVVar5 = Vector3Ex::Vector3Ex_FromValue(&VStack_6,*(float *)(iVar4 + 0xc),(MethodInfo *)0x0);
  pos.z = fVar3;
  pos.x = (float)(undefined4)uStack_2;
  pos.y = (float)uStack_2._4_4_;
  pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff7c,pos,q,*pVVar5,(MethodInfo *)0x0);
  uVar8 = pMVar7->m00;
  uVar9 = pMVar7->m10;
  uVar10 = pMVar7->m20;
  uVar11 = pMVar7->m30;
  uVar12 = pMVar7->m01;
  matrix.m01 = (float)uVar12;
  matrix.m30 = (float)uVar11;
  matrix.m20 = (float)uVar10;
  matrix.m10 = (float)uVar9;
  matrix.m00 = (float)uVar8;
  VStack_6.x = pMVar7->m11;
  VStack_6.y = pMVar7->m21;
  VStack_6.z = pMVar7->m31;
  fStack_13 = pMVar7->m02;
  fStack_14 = pMVar7->m12;
  uStack_2._0_4_ = pMVar7->m22;
  uStack_2._4_4_ = pMVar7->m32;
  fVar3 = pMVar7->m03;
  fVar15 = pMVar7->m13;
  fVar16 = pMVar7->m23;
  fVar17 = pMVar7->m33;
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitSphere(this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    matrix.m11 = VStack_6.x;
    matrix.m21 = VStack_6.y;
    matrix.m31 = VStack_6.z;
    matrix.m02 = fStack_13;
    matrix.m12 = fStack_14;
    matrix.m22 = (float)(undefined4)uStack_2;
    matrix.m32 = (float)uStack_2._4_4_;
    matrix.m03 = fVar3;
    matrix.m13 = fVar15;
    matrix.m23 = fVar16;
    matrix.m33 = fVar17;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    piVar18 = (int *)func_?();
    uVar19 = 0;
    iVar4 = *piVar18;
    if (iVar4 != 0) {
      piVar18 = (int *)(iVar4 + 0x10);
      while( true ) {
        if (*(int *)(iVar4 + 0xc) <= (int)uVar19) {
          return;
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar19) break;
        if (*piVar18 == 0) goto code_?;
        (*(method->klass->rgctx_data[10].method)->methodPointer)();
        uVar19 = uVar19 + 1;
        piVar18 = piVar18 + 1;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void EncapsulateChildrenBottomUp() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__EncapsulateChildrenBottomUp
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  iVar1 = (*(method->klass->rgctx_data[6].method)->methodPointer)
                    (this,method->klass->rgctx_data[6].rgctxDataDummy);
  if (iVar1 != 0) {
    for (; this != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0;
        this = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               (*(method->klass->rgctx_data[9].method)->methodPointer)
                         (this,method->klass->rgctx_data[9].rgctxDataDummy,pSVar2,fVar3,pMVar4)) {
      piVar5 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
      iVar1 = *piVar5;
      if (iVar1 == 0) goto code_?;
      if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = method->klass->rgctx_data[4].rgctxDataDummy;
      puVar8 = auStack_9;
      puVar10 = (undefined8 *)(*(method->klass->rgctx_data[4].method)->methodPointer)();
      uStack_11 = *puVar10;
      fStack_12 = *(float *)(puVar10 + 1);
      piVar5 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5,puVar8,iVar1
                                      ,pvVar7);
      iVar1 = *piVar5;
      if (iVar1 == 0) goto code_?;
      if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
      if (*(int *)(iVar1 + 0x14) != 0) {
        piVar5 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
        iVar1 = *piVar5;
        if (iVar1 != 0) {
          if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
          if (*(int *)(iVar1 + 0x14) != 0) {
            puVar10 = (undefined8 *)(*(method->klass->rgctx_data[4].method)->methodPointer)();
            uVar13 = *puVar10;
            fStack_14 = *(float *)(puVar10 + 1);
            uStack_15._0_4_ = (float)uVar13;
            uStack_15._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
            fStack_16 = fStack_12 + fStack_14;
            uStack_11 = CONCAT44(uStack_11._4_4_ + uStack_15._4_4_,
                                 (float)uStack_11 + (float)uStack_15);
            uStack_15 = uVar13;
            fStack_12 = fStack_16;
            goto code_?;
          }
        }
        goto code_?;
      }
code_?:
      if (this == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
      goto code_?;
      iVar1 = (*(method->klass->rgctx_data[6].method)->methodPointer)
                        (this,method->klass->rgctx_data[6].rgctxDataDummy);
      fVar3 = _UNK_? / (float)iVar1;
      fStack_17 = fStack_12 * fVar3;
      pMVar4 = method->klass->rgctx_data[7].method;
      (*pMVar4->methodPointer)
                (this,CONCAT44(uStack_11._4_4_ * fVar3,(float)uStack_11 * fVar3),fStack_17,pMVar4);
      piVar5 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
      iVar1 = *piVar5;
      if (iVar1 == 0) goto code_?;
      if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) goto code_?;
      pvVar7 = method->klass->rgctx_data[4].rgctxDataDummy;
      puVar8 = auStack_18;
      puVar10 = (undefined8 *)(*(method->klass->rgctx_data[4].method)->methodPointer)();
      uStack_19 = *puVar10;
      fStack_20 = *(float *)(puVar10 + 1);
      puVar10 = (undefined8 *)
               (*(method->klass->rgctx_data[4].method)->methodPointer)
                         (auStack_21,this,method->klass->rgctx_data[4].rgctxDataDummy,puVar8,iVar1,
                          pvVar7);
      uVar13 = *puVar10;
      fStack_22 = *(float *)(puVar10 + 1);
      uStack_23._0_4_ = (float)uVar13;
      uStack_23._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
      fStack_24 = fStack_20 - fStack_22;
      uStack_25 = CONCAT44(uStack_19._4_4_ - uStack_23._4_4_,(float)uStack_19 - (float)uStack_23);
      uStack_23 = uVar13;
      fStack_26 = fStack_24;
      fVar27 = (float10)func_?(&uStack_25,0);
      pIStack_28 = (Il2CppMethodPointer)(float)fVar27;
      piVar5 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
      iVar1 = *piVar5;
      if (iVar1 == 0) goto code_?;
      if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
      if (*(int *)(iVar1 + 0x10) == 0) goto code_?;
      fVar27 = (float10)(*(method->klass->rgctx_data[5].method)->methodPointer)
                                 (*(int *)(iVar1 + 0x10),method->klass->rgctx_data[5].rgctxDataDummy
                                 );
      fVar3 = (float)(fVar27 + (float10)(float)pIStack_28);
      piVar5 = (int *)func_?(this);
      iVar1 = *piVar5;
      if (iVar1 == 0) goto code_?;
      if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
      if (*(int *)(iVar1 + 0x14) != 0) {
        piVar5 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
        iVar1 = *piVar5;
        if (iVar1 != 0) {
          if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
          iVar1 = *(int *)(iVar1 + 0x14);
          if (iVar1 != 0) {
            pvVar7 = method->klass->rgctx_data[4].rgctxDataDummy;
            puVar8 = auStack_29;
            puVar10 = (undefined8 *)(*(method->klass->rgctx_data[4].method)->methodPointer)();
            uStack_30 = *puVar10;
            fStack_31 = *(float *)(puVar10 + 1);
            puVar10 = (undefined8 *)
                     (*(method->klass->rgctx_data[4].method)->methodPointer)
                               (auStack_32,this,method->klass->rgctx_data[4].rgctxDataDummy,puVar8,
                                iVar1,pvVar7);
            uVar13 = *puVar10;
            fStack_33 = *(float *)(puVar10 + 1);
            uStack_34._0_4_ = (float)uVar13;
            uStack_34._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
            fStack_35 = fStack_31 - fStack_33;
            uStack_25 = CONCAT44(uStack_30._4_4_ - uStack_34._4_4_,
                                 (float)uStack_30 - (float)uStack_34);
            uStack_34 = uVar13;
            fStack_26 = fStack_35;
            fVar27 = (float10)func_?(&uStack_25,0);
            fStack_36 = (float)fVar27;
            piVar5 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
            iVar1 = *piVar5;
            if (iVar1 != 0) {
              if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
              if (*(int *)(iVar1 + 0x14) != 0) {
                pIStack_28 = (method->klass->rgctx_data[5].method)->methodPointer;
                fVar27 = (float10)(*pIStack_28)(*(int *)(iVar1 + 0x14),
                                              method->klass->rgctx_data[5].rgctxDataDummy);
                fStack_36 = (float)(fVar27 + (float10)fStack_36);
                if (fVar3 < fStack_36) {
                  fVar3 = fStack_36;
                }
                goto code_?;
              }
            }
          }
        }
        goto code_?;
      }
code_?:
      pMVar4 = method->klass->rgctx_data[8].method;
      pSVar2 = this;
      (*pMVar4->methodPointer)();
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
  piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
  if (*piVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined8 *)
           (*(method->klass->rgctx_data[4].method)->methodPointer)
                     (&uStack_3,this,method->klass->rgctx_data[4].rgctxDataDummy);
  uStack_4 = *puVar2;
  fStack_5 = *(float *)(puVar2 + 1);
  piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
  if (*piVar1 != 0) {
    puVar2 = (undefined8 *)
             (*(method->klass->rgctx_data[4].method)->methodPointer)
                       (auStack_6,*piVar1,method->klass->rgctx_data[4].rgctxDataDummy);
    uStack_3._0_4_ = (float)*puVar2;
    uStack_3._4_4_ = (float)((ulonglong)*puVar2 >> 0x20);
    fStack_7 = fStack_5 - *(float *)(puVar2 + 1);
    uStack_3 = CONCAT44(uStack_4._4_4_ - uStack_3._4_4_,(float)uStack_4 - (float)uStack_3);
    fStack_5 = fStack_7;
    fVar8 = (float10)func_?(&uStack_3,0);
    fStack_9 = (float)fVar8;
    fVar8 = (float10)(*(method->klass->rgctx_data[5].method)->methodPointer)
                               (this,method->klass->rgctx_data[5].rgctxDataDummy);
    piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    if (*piVar1 != 0) {
      fVar10 = (float)fVar8 + fStack_9;
      pIStack_11 = (method->klass->rgctx_data[5].method)->methodPointer;
      fVar8 = (float10)(*pIStack_11)(*piVar1,method->klass->rgctx_data[5].rgctxDataDummy);
      return (float)fVar8 < fVar10;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void SetParent(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__SetParent
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *newParent,
               MethodInfo *method)

{
  if (newParent == this) {
    return;
  }
  piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
  if (newParent == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)*piVar1)
  {
    return;
  }
  piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
  if (*piVar1 == 0) {
code_?:
    pFVar2 = method->klass->rgctx_data->klass->fields;
    if (newParent == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      _guard_check_icall(pFVar2 + 4,4);
      puVar3 = (undefined4 *)func_?(this,pFVar2 + 4);
      *puVar3 = 0;
      func_?(pFVar2[4].type,puVar3,0);
      return;
    }
    _guard_check_icall(pFVar2 + 4,4);
    puVar3 = (undefined4 *)func_?(this,pFVar2 + 4);
    *puVar3 = newParent;
    func_?(pFVar2[4].type,puVar3,0);
    puVar3 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    piVar1 = (int *)func_?(*puVar3,method->klass->rgctx_data->klass->fields + 5);
    piVar1 = (int *)*piVar1;
    piVar4 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    iVar5 = *piVar4;
    puVar6 = (uint *)func_?(iVar5,method->klass->rgctx_data->klass->fields + 6);
    uVar7 = *puVar6;
    if (iVar5 == 0) {
code_?:
      func_?();
      goto code_?;
    }
    pFVar2 = method->klass->rgctx_data->klass->fields;
    pFVar8 = pFVar2 + 6;
    _guard_check_icall(pFVar8,4);
    piVar4 = (int *)func_?(iVar5,pFVar8);
    *piVar4 = uVar7 + 1;
    func_?(pFVar2[6].type,piVar4,0);
    if (piVar1 == (int *)0x0) goto code_?;
    if ((this == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) ||
       (iVar5 = func_?(this,*(undefined4 *)(*piVar1 + 0x20)), iVar5 != 0)) {
      if (uVar7 < (uint)piVar1[3]) {
        piVar1[uVar7 + 4] = (int)this;
        func_?(piVar1 + uVar7 + 4,this);
        return;
      }
      goto code_?;
    }
  }
  else {
    puVar3 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    piVar1 = (int *)func_?(*puVar3,method->klass->rgctx_data->klass->fields + 5);
    iVar5 = *piVar1;
    if (iVar5 == 0) goto code_?;
    if (*(int *)(iVar5 + 0xc) == 0) goto code_?;
    pFVar2 = method->klass->rgctx_data->klass->fields + 4;
    if (*(SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)(iVar5 + 0x10) !=
        this) {
code_?:
      puVar3 = (undefined4 *)func_?(this,pFVar2);
      piVar1 = (int *)func_?(*puVar3,method->klass->rgctx_data->klass->fields + 5);
      if (*piVar1 != 0) {
        func_?(1,0);
        piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
        iVar5 = *piVar1;
        piVar1 = (int *)func_?(iVar5,method->klass->rgctx_data->klass->fields + 6);
        iVar9 = *piVar1;
        if (iVar5 != 0) {
          pFVar2 = method->klass->rgctx_data->klass->fields;
          pFVar8 = pFVar2 + 6;
          _guard_check_icall(pFVar8,4);
          piVar1 = (int *)func_?(iVar5,pFVar8);
          *piVar1 = iVar9 + -1;
          func_?(pFVar2[6].type,piVar1,0);
          pFVar2 = method->klass->rgctx_data->klass->fields;
          pFVar8 = pFVar2 + 4;
          _guard_check_icall(pFVar8,4);
          puVar3 = (undefined4 *)func_?(this,pFVar8);
          *puVar3 = 0;
          func_?(pFVar2[4].type,puVar3,0);
          goto code_?;
        }
      }
      goto code_?;
    }
    puVar3 = (undefined4 *)func_?(this,pFVar2);
    piVar1 = (int *)func_?(*puVar3,method->klass->rgctx_data->klass->fields + 5);
    piVar1 = (int *)*piVar1;
    puVar3 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    piVar4 = (int *)func_?(*puVar3,method->klass->rgctx_data->klass->fields + 5);
    iVar5 = *piVar4;
    if (iVar5 == 0) goto code_?;
    if (*(uint *)(iVar5 + 0xc) < 2) goto code_?;
    iVar5 = *(int *)(iVar5 + 0x14);
    if (piVar1 == (int *)0x0) goto code_?;
    if ((iVar5 == 0) || (iVar9 = func_?(iVar5,*(undefined4 *)(*piVar1 + 0x20)), iVar9 != 0)
       ) {
      func_?(0,iVar5);
      pFVar2 = method->klass->rgctx_data->klass->fields + 4;
      goto code_?;
    }
code_?:
    uVar10 = func_?(0);
    func_?(uVar10);
  }
  uVar10 = func_?(0);
  func_?(uVar10);
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType] StackPop() */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__StackPop
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  puVar1 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields);
  pSVar2 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)*puVar1;
  puVar1 = (undefined4 *)func_?(pSVar2,method->klass->rgctx_data->klass->fields + 1);
  uVar3 = *puVar1;
  pFVar4 = method->klass->rgctx_data->klass->fields;
  _guard_check_icall(pFVar4,4);
  puVar1 = (undefined4 *)func_?(this,pFVar4);
  *puVar1 = uVar3;
  func_?(pFVar4->type,puVar1,0);
  return pSVar2;
}


/* Void StackPush(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__StackPush
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *node,
               MethodInfo *method)

{
  puVar1 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields);
  uVar2 = *puVar1;
  if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pFVar3 = method->klass->rgctx_data->klass->fields;
    pFVar4 = pFVar3 + 1;
    _guard_check_icall(pFVar4,4);
    puVar1 = (undefined4 *)func_?(node,pFVar4);
    *puVar1 = uVar2;
    func_?(pFVar3[1].type,puVar1,0);
    pFVar3 = method->klass->rgctx_data->klass->fields;
    _guard_check_icall(pFVar3,4);
    puVar1 = (undefined4 *)func_?(this,pFVar3);
    *puVar1 = node;
    func_?(pFVar3->type,puVar1,0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  uStack_1 = (method->klass->rgctx_data[2].klass)->actualSize;
  pIVar2 = method->klass->rgctx_data[3].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar3 = func_?(pIVar2,2);
  pFVar4 = method->klass->rgctx_data->klass->fields;
  pFVar5 = pFVar4 + 5;
  _guard_check_icall(pFVar5,4);
  puVar6 = (undefined4 *)func_?(this,pFVar5);
  *puVar6 = uVar3;
  method_00 = (MethodInfo *)pFVar4[5].type;
  func_?(method_00,puVar6,0);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  SStack_7._center.x = 0.0;
  SStack_7._center.y = 0.0;
  SStack_7._center.z = 0.0;
  SStack_7._radius = 0.0;
  Sphere::Sphere__ctor
            (&SStack_7,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,
             (MethodInfo *)0x0);
  pFVar4 = method->klass->rgctx_data->klass->fields;
  pFVar5 = pFVar4 + 2;
  fVar8 = SStack_7._center.x;
  fVar9 = SStack_7._center.y;
  fVar10 = SStack_7._center.z;
  fVar11 = SStack_7._radius;
  _guard_check_icall(pFVar5,0x10);
  pfVar12 = (float *)func_?(this,pFVar5);
  *pfVar12 = fVar8;
  pfVar12[1] = fVar9;
  pfVar12[2] = fVar10;
  pfVar12[3] = fVar11;
  func_?(pFVar4[2].type,pfVar12,0);
  uVar3 = func_?(this,method->klass->rgctx_data->klass->fields + 3,0,uStack_1);
  func_?(uVar3);
  return;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType,
   Sphere) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor_1
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *data,Sphere sphere,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[2].klass)->actualSize;
  func_?();
  pIVar2 = method->klass->rgctx_data[3].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar3 = func_?(pIVar2,2);
  pFVar4 = method->klass->rgctx_data->klass->fields;
  pFVar5 = pFVar4 + 5;
  _guard_check_icall(pFVar5,4);
  puVar6 = (undefined4 *)func_?(this,pFVar5);
  *puVar6 = uVar3;
  method_00 = (MethodInfo *)pFVar4[5].type;
  func_?(method_00,puVar6,0);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pFVar4 = method->klass->rgctx_data->klass->fields;
  pFVar5 = pFVar4 + 2;
  _guard_check_icall(pFVar5,0x10);
  pfVar7 = (float *)func_?(this,pFVar5);
  *pfVar7 = sphere._center.x;
  pfVar7[1] = sphere._center.y;
  pfVar7[2] = sphere._center.z;
  pfVar7[3] = sphere._radius;
  func_?(pFVar4[2].type,pfVar7,0);
  func_?(&stack0xffffffe8);
  func_?(this,method->klass->rgctx_data->klass->fields + 3,&stack0xffffffe8,uVar1);
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
  puVar1 = (undefined8 *)func_?(this,method->klass->rgctx_data->klass->fields + 2);
  uVar2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar2;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType][] get_Children() */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Array *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Children
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  puVar1 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
  return (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Array *)*puVar1;
}


/* __Il2CppFullySharedGenericType get_Data() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Data
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_stack_2 + 0x10) + 0x60) + 8) + 0x84);
  func_?();
  uVar3 = func_?(this,*(int *)(**(int **)(*(int *)(in_stack_2 + 0x10) + 0x60) + 0x40
                                       ) + 0x3c);
  func_?(&stack0xfffffff0,uVar3,uVar1);
  p_Var3 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar1);
  return p_Var3;
}


/* Boolean get_IsLeaf() */

bool Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_IsLeaf
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[2].klass)->actualSize;
  func_?();
  uVar2 = func_?(this,method->klass->rgctx_data->klass->fields + 3);
  func_?(&stack0xfffffff0,uVar2,uVar1);
  bVar3 = func_?(method->klass->rgctx_data[2].rgctxDataDummy,&stack0xfffffff0);
  return bVar3;
}


/* Int32 get_NumChildren() */

int32_t Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_NumChildren
                  (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                  MethodInfo *method)

{
  piVar1 = (int32_t *)func_?(this,method->klass->rgctx_data->klass->fields + 6);
  return *piVar1;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Radius
                (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                MethodInfo *method)

{
  iVar1 = func_?(this,method->klass->rgctx_data->klass->fields + 2);
  return *(float *)(iVar1 + 0xc);
}


/* Sphere get_Sphere() */

Sphere * Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
         __Il2CppFullySharedGenericType]::
         SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Sphere
                   (Sphere *__return_storage_ptr__,
                   SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                   MethodInfo *method)

{
  pfVar1 = (float *)func_?(this,method->klass->rgctx_data->klass->fields + 2);
  fVar2 = pfVar1[1];
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  (__return_storage_ptr__->_center).x = *pfVar1;
  (__return_storage_ptr__->_center).y = fVar2;
  (__return_storage_ptr__->_center).z = fVar3;
  __return_storage_ptr__->_radius = fVar4;
  return __return_storage_ptr__;
}


/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType] get_StackTop() */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_StackTop
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  puVar1 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields);
  return (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)*puVar1;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Center
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               Vector3 value,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(this,method->klass->rgctx_data->klass->fields + 2);
  *puVar1 = value._0_8_;
  *(float *)(puVar1 + 1) = value.z;
  return;
}


/* Void set_Data(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Data
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[2].klass)->actualSize;
  func_?();
  p_Var3 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var3 = value;
  }
  func_?(&stack0xfffffff0,p_Var3,uVar2);
  func_?(this,pMVar1->klass->rgctx_data->klass->fields + 3,&stack0xfffffff0,uVar2);
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Radius
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               float value,MethodInfo *method)

{
  method_00 = (MethodInfo *)0x0;
  this_00 = (Sphere *)func_?(this,method->klass->rgctx_data->klass->fields + 2);
  Sphere::Sphere_set_Radius(this_00,value,method_00);
  return;
}


/* Void set_Sphere(Sphere) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Sphere
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               Sphere value,MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pFVar2 = pFVar1 + 2;
  _guard_check_icall(pFVar2,0x10);
  pfVar3 = (float *)func_?(this,pFVar2);
  *pfVar3 = value._center.x;
  pfVar3[1] = value._center.y;
  pfVar3[2] = value._center.z;
  pfVar3[3] = value._radius;
  func_?(pFVar1[2].type,pfVar3,0);
  return;
}

