
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
    pMVar4 = method->klass->rgctx_data[4].method;
    puVar5 = (undefined8 *)(*pMVar4->methodPointer)(&uStack_6,node,pMVar4);
    uStack_7 = *puVar5;
    fStack_8 = *(float *)(puVar5 + 1);
    piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
    iVar2 = *piVar1;
    if (iVar2 == 0) goto code_?;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0x10) == 0) goto code_?;
      pMVar4 = method->klass->rgctx_data[4].method;
      puVar5 = (undefined8 *)(*pMVar4->methodPointer)(&uStack_6,*(int *)(iVar2 + 0x10),pMVar4);
      uVar9 = *puVar5;
      fStack_10 = *(float *)(puVar5 + 1);
      uStack_11._0_4_ = (float)uVar9;
      uStack_11._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      fStack_12 = fStack_8 - fStack_10;
      uStack_7 = CONCAT44(uStack_7._4_4_ - uStack_11._4_4_,(float)uStack_7 - (float)uStack_11);
      uStack_11 = uVar9;
      fStack_8 = fStack_12;
      fVar13 = (float10)func_?(&uStack_7,0);
      fStack_14 = (float)fVar13;
      piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
      iVar2 = *piVar1;
      if (iVar2 == 0) goto code_?;
      if (1 < *(uint *)(iVar2 + 0xc)) {
        if (*(int *)(iVar2 + 0x14) == 0) {
          return pSVar3;
        }
        pMVar4 = method->klass->rgctx_data[4].method;
        puVar5 = (undefined8 *)(*pMVar4->methodPointer)(&uStack_6,node,pMVar4);
        uStack_11 = *puVar5;
        fStack_10 = *(float *)(puVar5 + 1);
        piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
        iVar2 = *piVar1;
        if (iVar2 == 0) goto code_?;
        if (1 < *(uint *)(iVar2 + 0xc)) {
          if (*(int *)(iVar2 + 0x14) == 0) goto code_?;
          pMVar4 = method->klass->rgctx_data[4].method;
          puVar5 = (undefined8 *)(*pMVar4->methodPointer)(auStack_15,*(int *)(iVar2 + 0x14),pMVar4);
          uVar9 = *puVar5;
          uStack_6._0_4_ = (float)uVar9;
          uStack_6._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
          fStack_12 = fStack_10 - *(float *)(puVar5 + 1);
          uStack_7 = CONCAT44(uStack_11._4_4_ - uStack_6._4_4_,(float)uStack_11 - (float)uStack_6
                              );
          uStack_6 = uVar9;
          fStack_8 = fStack_12;
          fVar13 = (float10)func_?(&uStack_7,0);
          fStack_16 = (float)fVar13;
          if (fStack_14 <= fStack_16) {
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
  pcVar17 = (code *)swi(3);
  pSVar3 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)(*pcVar17)();
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
  pMVar1 = method->klass->rgctx_data[6].method;
  iVar2 = (*pMVar1->methodPointer)(this,pMVar1);
  if (iVar2 != 0) {
    for (; this != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0;
        this = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               (*pMVar3->methodPointer)(this,pMVar3,pSVar4,fVar5,pMVar1)) {
      piVar6 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
      iVar2 = *piVar6;
      if (iVar2 == 0) goto code_?;
      if (*(int *)(iVar2 + 0xc) == 0) goto code_?;
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pMVar1 = method->klass->rgctx_data[4].method;
      puVar8 = auStack_9;
      puVar10 = (undefined8 *)(*pMVar1->methodPointer)();
      uStack_11 = *puVar10;
      fStack_12 = *(float *)(puVar10 + 1);
      piVar6 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5,puVar8,iVar2
                                      ,pMVar1);
      iVar2 = *piVar6;
      if (iVar2 == 0) goto code_?;
      if (*(uint *)(iVar2 + 0xc) < 2) goto code_?;
      if (*(int *)(iVar2 + 0x14) != 0) {
        piVar6 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
        iVar2 = *piVar6;
        if (iVar2 != 0) {
          if (*(uint *)(iVar2 + 0xc) < 2) goto code_?;
          if (*(int *)(iVar2 + 0x14) != 0) {
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
      pMVar1 = method->klass->rgctx_data[6].method;
      iVar2 = (*pMVar1->methodPointer)(this,pMVar1);
      fVar5 = _UNK_? / (float)iVar2;
      fStack_17 = fStack_12 * fVar5;
      pMVar1 = method->klass->rgctx_data[7].method;
      (*pMVar1->methodPointer)
                (this,CONCAT44(uStack_11._4_4_ * fVar5,(float)uStack_11 * fVar5),fStack_17,pMVar1);
      piVar6 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
      iVar2 = *piVar6;
      if (iVar2 == 0) goto code_?;
      if (*(int *)(iVar2 + 0xc) == 0) goto code_?;
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) goto code_?;
      pMVar1 = method->klass->rgctx_data[4].method;
      puVar8 = auStack_18;
      puVar10 = (undefined8 *)(*pMVar1->methodPointer)();
      uStack_19 = *puVar10;
      fStack_20 = *(float *)(puVar10 + 1);
      pMVar3 = method->klass->rgctx_data[4].method;
      puVar10 = (undefined8 *)(*pMVar3->methodPointer)(auStack_21,this,pMVar3,puVar8,iVar2,pMVar1);
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
      piVar6 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
      iVar2 = *piVar6;
      if (iVar2 == 0) goto code_?;
      if (*(int *)(iVar2 + 0xc) == 0) goto code_?;
      if (*(int *)(iVar2 + 0x10) == 0) goto code_?;
      pMVar1 = method->klass->rgctx_data[5].method;
      fVar27 = (float10)(*pMVar1->methodPointer)(*(int *)(iVar2 + 0x10),pMVar1);
      fVar5 = (float)(fVar27 + (float10)(float)pIStack_28);
      piVar6 = (int *)func_?(this);
      iVar2 = *piVar6;
      if (iVar2 == 0) goto code_?;
      if (*(uint *)(iVar2 + 0xc) < 2) goto code_?;
      if (*(int *)(iVar2 + 0x14) != 0) {
        piVar6 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
        iVar2 = *piVar6;
        if (iVar2 != 0) {
          if (*(uint *)(iVar2 + 0xc) < 2) goto code_?;
          iVar2 = *(int *)(iVar2 + 0x14);
          if (iVar2 != 0) {
            pMVar1 = method->klass->rgctx_data[4].method;
            puVar8 = auStack_29;
            puVar10 = (undefined8 *)(*pMVar1->methodPointer)();
            uStack_30 = *puVar10;
            fStack_31 = *(float *)(puVar10 + 1);
            pMVar3 = method->klass->rgctx_data[4].method;
            puVar10 = (undefined8 *)
                     (*pMVar3->methodPointer)(auStack_32,this,pMVar3,puVar8,iVar2,pMVar1);
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
            piVar6 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 5);
            iVar2 = *piVar6;
            if (iVar2 != 0) {
              if (*(uint *)(iVar2 + 0xc) < 2) goto code_?;
              if (*(int *)(iVar2 + 0x14) != 0) {
                pMVar1 = method->klass->rgctx_data[5].method;
                pIStack_28 = pMVar1->methodPointer;
                fVar27 = (float10)(*pIStack_28)(*(int *)(iVar2 + 0x14),pMVar1);
                fStack_36 = (float)(fVar27 + (float10)fStack_36);
                if (fVar5 < fStack_36) {
                  fVar5 = fStack_36;
                }
                goto code_?;
              }
            }
          }
        }
        goto code_?;
      }
code_?:
      pMVar1 = method->klass->rgctx_data[8].method;
      pSVar4 = this;
      (*pMVar1->methodPointer)();
      pMVar3 = method->klass->rgctx_data[9].method;
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
  pMVar2 = method->klass->rgctx_data[4].method;
  puVar3 = (undefined8 *)(*pMVar2->methodPointer)(&uStack_4,this,pMVar2);
  uStack_5 = *puVar3;
  fStack_6 = *(float *)(puVar3 + 1);
  piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
  if (*piVar1 != 0) {
    pMVar2 = method->klass->rgctx_data[4].method;
    puVar3 = (undefined8 *)(*pMVar2->methodPointer)(auStack_7,*piVar1,pMVar2);
    uStack_4._0_4_ = (float)*puVar3;
    uStack_4._4_4_ = (float)((ulonglong)*puVar3 >> 0x20);
    fStack_8 = fStack_6 - *(float *)(puVar3 + 1);
    uStack_4 = CONCAT44(uStack_5._4_4_ - uStack_4._4_4_,(float)uStack_5 - (float)uStack_4);
    fStack_6 = fStack_8;
    fVar9 = (float10)func_?(&uStack_4,0);
    fStack_10 = (float)fVar9;
    pMVar2 = method->klass->rgctx_data[5].method;
    fVar9 = (float10)(*pMVar2->methodPointer)(this,pMVar2);
    piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    if (*piVar1 != 0) {
      fVar11 = (float)fVar9 + fStack_10;
      pMVar2 = method->klass->rgctx_data[5].method;
      pIStack_12 = pMVar2->methodPointer;
      fVar9 = (float10)(*pIStack_12)(*piVar1,pMVar2);
      return (float)fVar9 < fVar11;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
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
    pFVar3 = pFVar2 + 4;
    if (newParent == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      _guard_check_icall(pFVar3,4);
      puVar4 = (undefined4 *)func_?(this,pFVar3);
      *puVar4 = 0;
      func_?(pFVar2[4].type,puVar4,0);
      return;
    }
    _guard_check_icall(pFVar3,4);
    puVar4 = (undefined4 *)func_?(this,pFVar3);
    *puVar4 = newParent;
    func_?(pFVar2[4].type,puVar4,0);
    puVar4 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    piVar1 = (int *)func_?(*puVar4,method->klass->rgctx_data->klass->fields + 5);
    piVar1 = (int *)*piVar1;
    piVar5 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    iVar6 = *piVar5;
    puVar7 = (uint *)func_?(iVar6,method->klass->rgctx_data->klass->fields + 6);
    uVar8 = *puVar7;
    if (iVar6 == 0) {
code_?:
      func_?();
      goto code_?;
    }
    pFVar3 = method->klass->rgctx_data->klass->fields;
    pFVar2 = pFVar3 + 6;
    _guard_check_icall(pFVar2,4);
    piVar5 = (int *)func_?(iVar6,pFVar2);
    *piVar5 = uVar8 + 1;
    func_?(pFVar3[6].type,piVar5,0);
    if (piVar1 == (int *)0x0) goto code_?;
    if ((this == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) ||
       (iVar6 = func_?(this,*(undefined4 *)(*piVar1 + 0x20)), iVar6 != 0)) {
      if (uVar8 < (uint)piVar1[3]) {
        piVar1[uVar8 + 4] = (int)this;
        func_?(piVar1 + uVar8 + 4,this);
        return;
      }
      goto code_?;
    }
  }
  else {
    puVar4 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    piVar1 = (int *)func_?(*puVar4,method->klass->rgctx_data->klass->fields + 5);
    iVar6 = *piVar1;
    if (iVar6 == 0) goto code_?;
    if (*(int *)(iVar6 + 0xc) == 0) goto code_?;
    pFVar3 = method->klass->rgctx_data->klass->fields + 4;
    if (*(SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)(iVar6 + 0x10) !=
        this) {
code_?:
      puVar4 = (undefined4 *)func_?(this,pFVar3);
      piVar1 = (int *)func_?(*puVar4,method->klass->rgctx_data->klass->fields + 5);
      if (*piVar1 != 0) {
        func_?(1,0);
        piVar1 = (int *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
        iVar6 = *piVar1;
        piVar1 = (int *)func_?(iVar6,method->klass->rgctx_data->klass->fields + 6);
        iVar9 = *piVar1;
        if (iVar6 != 0) {
          pFVar3 = method->klass->rgctx_data->klass->fields;
          pFVar2 = pFVar3 + 6;
          _guard_check_icall(pFVar2,4);
          piVar1 = (int *)func_?(iVar6,pFVar2);
          *piVar1 = iVar9 + -1;
          func_?(pFVar3[6].type,piVar1,0);
          pFVar3 = method->klass->rgctx_data->klass->fields;
          pFVar2 = pFVar3 + 4;
          _guard_check_icall(pFVar2,4);
          puVar4 = (undefined4 *)func_?(this,pFVar2);
          *puVar4 = 0;
          func_?(pFVar3[4].type,puVar4,0);
          goto code_?;
        }
      }
      goto code_?;
    }
    puVar4 = (undefined4 *)func_?(this,pFVar3);
    piVar1 = (int *)func_?(*puVar4,method->klass->rgctx_data->klass->fields + 5);
    piVar1 = (int *)*piVar1;
    puVar4 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields + 4);
    piVar5 = (int *)func_?(*puVar4,method->klass->rgctx_data->klass->fields + 5);
    iVar6 = *piVar5;
    if (iVar6 == 0) goto code_?;
    if (*(uint *)(iVar6 + 0xc) < 2) goto code_?;
    iVar6 = *(int *)(iVar6 + 0x14);
    if (piVar1 == (int *)0x0) goto code_?;
    if ((iVar6 == 0) || (iVar9 = func_?(iVar6,*(undefined4 *)(*piVar1 + 0x20)), iVar9 != 0)
       ) {
      func_?(0,iVar6);
      pFVar3 = method->klass->rgctx_data->klass->fields + 4;
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
  pIVar1 = method->klass->rgctx_data;
  uStack_2 = (pIVar1[2].klass)->actualSize;
  pIVar3 = pIVar1[3].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  uVar4 = func_?(pIVar3,2);
  pFVar5 = method->klass->rgctx_data->klass->fields;
  pFVar6 = pFVar5 + 5;
  _guard_check_icall(pFVar6,4);
  puVar7 = (undefined4 *)func_?(this,pFVar6);
  *puVar7 = uVar4;
  method_00 = (MethodInfo *)pFVar5[5].type;
  func_?(method_00,puVar7,0);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  SStack_8._center.x = 0.0;
  SStack_8._center.y = 0.0;
  SStack_8._center.z = 0.0;
  SStack_8._radius = 0.0;
  Sphere::Sphere__ctor
            (&SStack_8,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,
             (MethodInfo *)0x0);
  pFVar5 = method->klass->rgctx_data->klass->fields;
  pFVar6 = pFVar5 + 2;
  fVar9 = SStack_8._center.x;
  fVar10 = SStack_8._center.y;
  fVar11 = SStack_8._center.z;
  fVar12 = SStack_8._radius;
  _guard_check_icall(pFVar6,0x10);
  pfVar13 = (float *)func_?(this,pFVar6);
  *pfVar13 = fVar9;
  pfVar13[1] = fVar10;
  pfVar13[2] = fVar11;
  pfVar13[3] = fVar12;
  func_?(pFVar5[2].type,pfVar13,0);
  uVar4 = func_?(this,method->klass->rgctx_data->klass->fields + 3,0,uStack_2);
  func_?(uVar4);
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
  pIVar1 = method->klass->rgctx_data;
  uVar2 = (pIVar1[2].klass)->actualSize;
  func_?();
  pIVar3 = pIVar1[3].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  uVar4 = func_?(pIVar3,2);
  pFVar5 = method->klass->rgctx_data->klass->fields;
  pFVar6 = pFVar5 + 5;
  _guard_check_icall(pFVar6,4);
  puVar7 = (undefined4 *)func_?(this,pFVar6);
  *puVar7 = uVar4;
  method_00 = (MethodInfo *)pFVar5[5].type;
  func_?(method_00,puVar7,0);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pFVar5 = method->klass->rgctx_data->klass->fields;
  pFVar6 = pFVar5 + 2;
  _guard_check_icall(pFVar6,0x10);
  pfVar8 = (float *)func_?(this,pFVar6);
  *pfVar8 = sphere._center.x;
  pfVar8[1] = sphere._center.y;
  pfVar8[2] = sphere._center.z;
  pfVar8[3] = sphere._radius;
  func_?(pFVar5[2].type,pfVar8,0);
  func_?(&stack0xffffffe8);
  func_?(this,method->klass->rgctx_data->klass->fields + 3,&stack0xffffffe8,uVar2);
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
  piVar1 = *(int **)(*(int *)(in_stack_2 + 0x10) + 0x60);
  uVar3 = *(undefined4 *)(piVar1[2] + 0x84);
  func_?();
  uVar4 = func_?(this,*(int *)(*piVar1 + 0x40) + 0x3c);
  func_?(&stack0xfffffff0,uVar4,uVar3);
  p_Var4 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar3);
  return p_Var4;
}


/* Boolean get_IsLeaf() */

bool Assembly-CSharp.dll::RTG::SphereTreeNode`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_IsLeaf
               (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data;
  uVar2 = (pIVar1[2].klass)->actualSize;
  func_?();
  uVar3 = func_?(this,pIVar1->klass->fields + 3);
  func_?(&stack0xfffffff0,uVar3,uVar2);
  bVar4 = func_?(method->klass->rgctx_data[2].rgctxDataDummy,&stack0xfffffff0);
  return bVar4;
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
  pIVar1 = method->klass->rgctx_data[2].klass;
  uVar2 = pIVar1->actualSize;
  func_?();
  iVar3._0_2_ = (pIVar1->byval_arg).attrs;
  iVar3._2_1_ = (pIVar1->byval_arg).type;
  iVar3._3_1_ = (pIVar1->byval_arg).field_0x7;
  p_Var4 = (_Il2CppFullySharedGenericType *)&value;
  if (iVar3 < 0) {
    p_Var4 = value;
  }
  func_?(&stack0xfffffff0,p_Var4,uVar2);
  func_?(this,method->klass->rgctx_data->klass->fields + 3,&stack0xfffffff0,uVar2);
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

