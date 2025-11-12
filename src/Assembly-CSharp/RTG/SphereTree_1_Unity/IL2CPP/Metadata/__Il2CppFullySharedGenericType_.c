
/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]
   AddNode(__Il2CppFullySharedGenericType, Sphere) */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__AddNode
          (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          _Il2CppFullySharedGenericType *nodeData,Sphere *sphere,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)nodeData;
  lVar2 = FUN_?(this,nodeData,method->klass->rgctx_data->klass->actualSize,nodeData);
  lVar2 = -lVar2;
  plVar3 = (longlong *)((longlong)alStack_4 + lVar2 + 0x10);
  p_Var9 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&method->klass->rgctx_data->method->return_type < 0) {
    p_Var9 = nodeData;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(plVar3,p_Var9);
  pvVar5 = method->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    pvVar5 = (void *)FUN_?(pvVar5);
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  pSVar6 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           FUN_?(pvVar5);
  if (-1 < *(int *)&method->klass->rgctx_data->method->return_type) {
    plVar3 = (longlong *)*plVar3;
  }
  pIVar7 = method->klass;
  uVar8 = *(undefined8 *)&(sphere->_center).z;
  *(longlong **)((longlong)alStack_4 + lVar2) = alStack_4 + 2;
  pvStack_9 = plVar3;
  plStack_10 = alStack_4 + 2;
  pMVar11 = pIVar7->rgctx_data[2].method;
  pIVar12 = pMVar11->methodPointer;
  alStack_4[2]._0_4_ = (sphere->_center).x;
  alStack_4[2]._4_4_ = (sphere->_center).y;
  alStack_4[3] = uVar8;
  pIVar13 = pMVar11->invoker_method;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  (*pIVar13)(pIVar12,pMVar11,pSVar6,&pvStack_9,*(void **)((longlong)alStack_4 + lVar2));
  pIVar12 = (method->klass->rgctx_data[5].method)->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  (*pIVar12)(this,pSVar6);
  return pSVar6;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__DebugDraw
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__IsLit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (MaterialPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
  if (this_00 != (MaterialPool *)0x0) {
    this_01 = MaterialPool::MaterialPool_get_GizmoSolidHandle(this_00,(MethodInfo *)0x0);
    if (this_01 != (Material *)0x0) {
      name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                       (StringLiteral__IsLit,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (this_01,name,0.0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      CStack_1.r = _UNK_?;
      CStack_1.g = _UNK_?;
      CStack_1.b = _UNK_?;
      CStack_1.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (this_01,StringLiteral__Color,&CStack_1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                (this_01,0,(MethodInfo *)0x0);
      if ((this->fields)._root !=
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(method->klass->rgctx_data[4].method)->methodPointer)();
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InsertNode(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__InsertNode
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *node,
               MethodInfo *method)

{
  uVar1 = method->klass->rgctx_data->klass->actualSize;
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?(0xffffffffffffff0);
  lVar3 = -lVar3;
  plVar4 = (longlong *)((longlong)&uStack_5 + lVar3);
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  pvStackX_8 = (void *)((longlong)&uStack_5 + lVar6 + lVar3);
  *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
  FUN_?(pvStackX_8,0,uVar1);
  pSVar7 = (this->fields)._root;
  do {
    if (pSVar7 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
code_?:
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pMVar9 = method->klass->rgctx_data[10].method;
    pIVar10 = pMVar9->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    cVar11 = (*pIVar10)(pSVar7,pMVar9);
    if (cVar11 != '\0') {
      pvVar12 = method->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
        *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
        pvVar12 = (void *)FUN_?(pvVar12);
      }
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pSVar13 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                FUN_?(pvVar12);
      pIVar10 = (method->klass->rgctx_data[0x1f].method)->methodPointer;
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      (*pIVar10)(pSVar13);
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      FUN_?(pvStackX_8,0,uVar1);
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      FUN_?(plVar4,pvStackX_8,uVar1);
      if (pSVar13 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        if (-1 < *(int *)&method->klass->rgctx_data->method->return_type) {
          plVar4 = (longlong *)*plVar4;
        }
        pIVar14 = method->klass;
        *(longlong **)((longlong)alStack_15 + lVar6 + lVar3) = plVar4;
        pMVar9 = pIVar14->rgctx_data[0x20].method;
        pIVar16 = pMVar9->invoker_method;
        pIVar10 = pMVar9->methodPointer;
        *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
        pvStackX_8 = plVar4;
        (*pIVar16)(pIVar10,pMVar9,pSVar13,&pvStackX_8,
                  *(void **)((longlong)alStack_15 + lVar6 + lVar3));
        if (pSVar7 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
        {
          pMVar9 = method->klass->rgctx_data[0x21].method;
          pIVar10 = pMVar9->methodPointer;
          *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
          puVar17 = (undefined4 *)(*pIVar10)(&uStack_5,pSVar7,pMVar9);
          uStack_5._0_4_ = *puVar17;
          uStack_5._4_4_ = puVar17[1];
          uStack_18 = puVar17[2];
          uStack_19 = puVar17[3];
          pIVar10 = (method->klass->rgctx_data[0x22].method)->methodPointer;
          *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
          (*pIVar10)(pSVar13,&uStack_5);
          pMVar9 = method->klass->rgctx_data[6].method;
          pIVar10 = pMVar9->methodPointer;
          *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
          uVar20 = (*pIVar10)(pSVar7,pMVar9);
          pIVar10 = (method->klass->rgctx_data[7].method)->methodPointer;
          *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
          (*pIVar10)(pSVar7,0);
          pIVar10 = (method->klass->rgctx_data[7].method)->methodPointer;
          *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
          (*pIVar10)(pSVar13,uVar20);
          pIVar10 = (method->klass->rgctx_data[7].method)->methodPointer;
          *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
          (*pIVar10)(pSVar7,pSVar13);
          if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
            pIVar10 = (method->klass->rgctx_data[7].method)->methodPointer;
            *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
            (*pIVar10)(node,pSVar13);
            pIVar10 = (method->klass->rgctx_data[9].method)->methodPointer;
            *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
            (*pIVar10)(pSVar13);
            if ((pSVar7 == (this->fields)._root) &&
               (bVar21 = iRam_? != 0, (this->fields)._root = pSVar13, bVar21)) {
              uVar22 = (uint)((ulonglong)&this->fields >> 0xc);
              puVar23 = (ulonglong *)((ulonglong)((uVar22 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar24 = *puVar23;
                LOCK();
                uVar25 = *puVar23;
                if (uVar24 == uVar25) {
                  *puVar23 = uVar24 | 1L << (uVar22 & 0x3f);
                }
                UNLOCK();
              } while (uVar24 != uVar25);
            }
            return;
          }
        }
      }
      goto code_?;
    }
    if (pSVar7 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    goto code_?;
    pMVar9 = method->klass->rgctx_data[8].method;
    pIVar10 = pMVar9->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    iVar26 = (*pIVar10)(pSVar7,pMVar9);
    if (iVar26 < 2) {
      if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        pIVar10 = (method->klass->rgctx_data[7].method)->methodPointer;
        *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
        (*pIVar10)(node,pSVar7);
        pIVar10 = (method->klass->rgctx_data[9].method)->methodPointer;
        *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
        (*pIVar10)(pSVar7);
        return;
      }
      goto code_?;
    }
    pMVar9 = method->klass->rgctx_data[0x1e].method;
    pIVar10 = pMVar9->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    pSVar7 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (*pIVar10)(pSVar7,node,pMVar9);
  } while( true );
}


/* Void OnNodeSphereUpdated(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

void Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnNodeSphereUpdated
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *node,
               MethodInfo *method)

{
  if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar1 = method->klass->rgctx_data[10].method;
    cVar2 = (*pMVar1->methodPointer)(node,pMVar1);
    if (cVar2 != '\0') {
      pMVar1 = method->klass->rgctx_data[0xb].method;
      cVar2 = (*pMVar1->methodPointer)(node,pMVar1);
      if (cVar2 != '\0') {
        pMVar1 = method->klass->rgctx_data[6].method;
        lVar3 = (*pMVar1->methodPointer)(node,pMVar1);
        (*(method->klass->rgctx_data[7].method)->methodPointer)(node,0);
        if (lVar3 == 0) goto code_?;
        pMVar1 = method->klass->rgctx_data[8].method;
        iVar4 = (*pMVar1->methodPointer)(lVar3,pMVar1);
        pIVar5 = method->klass->rgctx_data;
        if (iVar4 == 0) {
          (*(pIVar5[0xc].method)->methodPointer)(this,lVar3);
        }
        else {
          (*(pIVar5[9].method)->methodPointer)(lVar3);
        }
        (*(method->klass->rgctx_data[5].method)->methodPointer)(this,node);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean OverlapBox(OBB,
   List`1[RTG.SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]]) */

bool Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OverlapBox
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,OBB *box,
               List_1_RTG_SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *nodes,MethodInfo *method)

{
  if (nodes != (List_1_RTG_SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               0x0) {
    (*(method->klass->rgctx_data[0x1b].method)->methodPointer)(nodes);
    if ((this->fields)._root ==
        (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      return 0;
    }
    (*(method->klass->rgctx_data[0xf].method)->methodPointer)((this->fields)._root);
    pSVar1 = (this->fields)._root;
    while (pSVar1 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar2 = method->klass->rgctx_data[0x18].method;
      lVar3 = (*pMVar2->methodPointer)(pSVar1,pMVar2);
      if (lVar3 == 0) {
        pMVar2 = method->klass->rgctx_data[0x1d].method;
        iVar4 = (*pMVar2->methodPointer)(nodes,pMVar2);
        return iVar4 != 0;
      }
      pSVar1 = (this->fields)._root;
      if ((pSVar1 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) ||
         (pMVar2 = method->klass->rgctx_data[0x10].method,
         pvVar5 = (void *)(*pMVar2->methodPointer)(pSVar1,pMVar2), pvVar5 == (void *)0x0)) break;
      pMVar2 = method->klass->rgctx_data[10].method;
      cVar6 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
      pMVar2 = method->klass->rgctx_data[0x11].method;
      pIVar7 = pMVar2->methodPointer;
      if (cVar6 == '\0') {
        puVar8 = (undefined8 *)(*pIVar7)(auStack_9,pvVar5,pMVar2);
        VStack_10._0_8_ = *puVar8;
        VStack_10.z = *(float *)(puVar8 + 1);
        pVVar11 = OBB::OBB_GetClosestPoint(&VStack_12,box,&VStack_10,(MethodInfo *)0x0);
        uVar13 = pVVar11->x;
        uVar14 = pVVar11->y;
        fVar15 = pVVar11->z;
        pMVar2 = method->klass->rgctx_data[0x11].method;
        puVar8 = (undefined8 *)(*pMVar2->methodPointer)(auStack_16,pvVar5,pMVar2);
        pvStackX_18 = (void *)0x0;
        uVar17 = *puVar8;
        fVar18 = *(float *)(puVar8 + 1);
        pMVar2 = method->klass->rgctx_data[0x12].method;
        fVar19 = (float)(*pMVar2->methodPointer)(pvVar5,pMVar2);
        fVar20 = pvStackX_18._0_4_;
        fVar21 = (float)uVar14 - (float)((ulonglong)uVar17 >> 0x20);
        fVar22 = (float)uVar13 - (float)uVar17;
        fVar15 = fVar15 - fVar18;
        if (fVar21 * fVar21 + fVar22 * fVar22 + fVar15 * fVar15 <=
            (fVar19 + pvStackX_18._0_4_) * (fVar19 + pvStackX_18._0_4_)) {
          pMVar2 = method->klass->rgctx_data[0x13].method;
          lVar3 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
          if (lVar3 == 0) break;
          if (*(int *)(lVar3 + 0x18) == 0) {
code_?:
            FUN_?();
            pcVar23 = (code *)swi(3);
            bVar24 = (*pcVar23)();
            return bVar24;
          }
          if (*(longlong *)(lVar3 + 0x20) == 0) break;
          pMVar2 = method->klass->rgctx_data[0x11].method;
          puVar8 = (undefined8 *)
                    (*pMVar2->methodPointer)(auStack_25,*(longlong *)(lVar3 + 0x20),pMVar2);
          VStack_26._0_8_ = *puVar8;
          VStack_26.z = *(float *)(puVar8 + 1);
          pVVar11 = OBB::OBB_GetClosestPoint(&VStack_27,box,&VStack_26,(MethodInfo *)0x0);
          uStack_28._0_4_ = pVVar11->x;
          uStack_28._4_4_ = pVVar11->y;
          fVar15 = pVVar11->z;
          pMVar2 = method->klass->rgctx_data[0x13].method;
          lVar3 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
          if (lVar3 == 0) break;
          if (*(int *)(lVar3 + 0x18) == 0) goto code_?;
          if (*(longlong *)(lVar3 + 0x20) == 0) break;
          pMVar2 = method->klass->rgctx_data[0x11].method;
          puVar8 = (undefined8 *)
                    (*pMVar2->methodPointer)(auStack_29,*(longlong *)(lVar3 + 0x20),pMVar2);
          uStack_30 = *puVar8;
          fVar18 = *(float *)(puVar8 + 1);
          pMVar2 = method->klass->rgctx_data[0x13].method;
          lVar3 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
          if (lVar3 == 0) break;
          if (*(int *)(lVar3 + 0x18) == 0) goto code_?;
          if (*(longlong *)(lVar3 + 0x20) == 0) break;
          pMVar2 = method->klass->rgctx_data[0x12].method;
          fVar19 = (float)(*pMVar2->methodPointer)(*(longlong *)(lVar3 + 0x20),pMVar2);
          fVar19 = fVar19 + fVar20;
          fVar15 = fVar15 - fVar18;
          if ((uStack_28._4_4_ - uStack_30._4_4_) * (uStack_28._4_4_ - uStack_30._4_4_) +
              ((float)uStack_28 - (float)uStack_30) * ((float)uStack_28 - (float)uStack_30) +
              fVar15 * fVar15 <= fVar19 * fVar19) {
            pSVar1 = (this->fields)._root;
            pMVar2 = method->klass->rgctx_data[0x13].method;
            lVar3 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
            if (lVar3 == 0) break;
            if (*(int *)(lVar3 + 0x18) == 0) goto code_?;
            if (pSVar1 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                          0x0) break;
            (*(method->klass->rgctx_data[0xf].method)->methodPointer)
                      (pSVar1,*(undefined8 *)(lVar3 + 0x20));
          }
          pMVar2 = method->klass->rgctx_data[0x13].method;
          lVar3 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
          if (lVar3 == 0) break;
          if (*(uint *)(lVar3 + 0x18) < 2) goto code_?;
          if (*(longlong *)(lVar3 + 0x28) != 0) {
            pMVar2 = method->klass->rgctx_data[0x13].method;
            lVar3 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) < 2) goto code_?;
            if (*(longlong *)(lVar3 + 0x28) == 0) break;
            pMVar2 = method->klass->rgctx_data[0x11].method;
            puVar8 = (undefined8 *)
                      (*pMVar2->methodPointer)(auStack_31,*(longlong *)(lVar3 + 0x28),pMVar2);
            VStack_32._0_8_ = *puVar8;
            VStack_32.z = *(float *)(puVar8 + 1);
            pVVar11 = OBB::OBB_GetClosestPoint(&VStack_33,box,&VStack_32,(MethodInfo *)0x0);
            uStack_34._0_4_ = pVVar11->x;
            uStack_34._4_4_ = pVVar11->y;
            fVar15 = pVVar11->z;
            pMVar2 = method->klass->rgctx_data[0x13].method;
            lVar3 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) < 2) goto code_?;
            if (*(longlong *)(lVar3 + 0x28) == 0) break;
            pMVar2 = method->klass->rgctx_data[0x11].method;
            puVar8 = (undefined8 *)
                      (*pMVar2->methodPointer)(auStack_35,*(longlong *)(lVar3 + 0x28),pMVar2);
            uStack_36 = *puVar8;
            fVar18 = *(float *)(puVar8 + 1);
            pMVar2 = method->klass->rgctx_data[0x13].method;
            lVar3 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) < 2) goto code_?;
            if (*(longlong *)(lVar3 + 0x28) == 0) break;
            pMVar2 = method->klass->rgctx_data[0x12].method;
            fVar19 = (float)(*pMVar2->methodPointer)(*(longlong *)(lVar3 + 0x28),pMVar2);
            fVar19 = fVar19 + fVar20;
            fVar15 = fVar15 - fVar18;
            if ((uStack_34._4_4_ - uStack_36._4_4_) * (uStack_34._4_4_ - uStack_36._4_4_) +
                ((float)uStack_34 - (float)uStack_36) * ((float)uStack_34 - (float)uStack_36) +
                fVar15 * fVar15 <= fVar19 * fVar19) {
              pSVar1 = (this->fields)._root;
              pMVar2 = method->klass->rgctx_data[0x13].method;
              lVar3 = (*pMVar2->methodPointer)(pvVar5,pMVar2);
              if (lVar3 == 0) break;
              if (*(uint *)(lVar3 + 0x18) < 2) goto code_?;
              if (pSVar1 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                            0x0) break;
              (*(method->klass->rgctx_data[0xf].method)->methodPointer)
                        (pSVar1,*(undefined8 *)(lVar3 + 0x28));
            }
          }
        }
      }
      else {
        puVar8 = (undefined8 *)(*pIVar7)(auStack_37);
        VStack_38._0_8_ = *puVar8;
        VStack_38.z = *(float *)(puVar8 + 1);
        pVVar11 = OBB::OBB_GetClosestPoint(&VStack_39,box,&VStack_38,(MethodInfo *)0x0);
        uVar40 = pVVar11->x;
        uVar41 = pVVar11->y;
        fVar15 = pVVar11->z;
        pMVar2 = method->klass->rgctx_data[0x11].method;
        puVar8 = (undefined8 *)(*pMVar2->methodPointer)(auStack_42,pvVar5,pMVar2);
        pvStackX_18 = (void *)0x0;
        uVar17 = *puVar8;
        fVar18 = *(float *)(puVar8 + 1);
        pMVar2 = method->klass->rgctx_data[0x12].method;
        fVar20 = (float)(*pMVar2->methodPointer)(pvVar5,pMVar2);
        fVar15 = fVar15 - fVar18;
        fVar19 = (float)uVar41 - (float)((ulonglong)uVar17 >> 0x20);
        fVar18 = (float)uVar40 - (float)uVar17;
        if (fVar19 * fVar19 + fVar18 * fVar18 + fVar15 * fVar15 <=
            (fVar20 + pvStackX_18._0_4_) * (fVar20 + pvStackX_18._0_4_)) {
          pMVar2 = method->klass->rgctx_data[0x1c].method;
          pvStackX_18 = pvVar5;
          (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,nodes,&pvStackX_18,pvVar5);
        }
      }
      pSVar1 = (this->fields)._root;
    }
  }
  FUN_?();
  pcVar23 = (code *)swi(3);
  bVar24 = (*pcVar23)();
  return bVar24;
}


/* Boolean RaycastAll(Ray,
   List`1[RTG.SphereTreeNodeRayHit`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]]) */

bool Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__RaycastAll
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,Ray *ray,
               List_1_RTG_SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *hits,MethodInfo *method)

{
  afStack_1[0] = 0.0;
  if (hits != (List_1_RTG_SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)0x0) {
    (*(method->klass->rgctx_data[0xe].method)->methodPointer)(hits);
    if ((this->fields)._root ==
        (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      return 0;
    }
    (*(method->klass->rgctx_data[0xf].method)->methodPointer)((this->fields)._root);
    pSVar2 = (this->fields)._root;
    while (pSVar2 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar3 = method->klass->rgctx_data[0x18].method;
      lVar4 = (*pMVar3->methodPointer)(pSVar2,pMVar3);
      if (lVar4 == 0) {
        pMVar3 = method->klass->rgctx_data[0x19].method;
        iVar5 = (*pMVar3->methodPointer)(hits,pMVar3);
        return iVar5 != 0;
      }
      pSVar2 = (this->fields)._root;
      if ((pSVar2 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) ||
         (pMVar3 = method->klass->rgctx_data[0x10].method,
         lVar4 = (*pMVar3->methodPointer)(pSVar2,pMVar3), lVar4 == 0)) break;
      pMVar3 = method->klass->rgctx_data[10].method;
      cVar6 = (*pMVar3->methodPointer)(lVar4,pMVar3);
      pIVar7 = (method->klass->rgctx_data[0x11].method)->methodPointer;
      if (cVar6 == '\0') {
        puVar8 = (undefined8 *)
                  (*pIVar7)(auStack_9,lVar4,method->klass->rgctx_data[0x11].rgctxDataDummy);
        pvStackX_18 = (void *)((ulonglong)pvStackX_18 & 0xffffffff00000000);
        afStack_10[0] = 0.0;
        uVar11 = *puVar8;
        fVar12 = *(float *)(puVar8 + 1);
        pMVar3 = method->klass->rgctx_data[0x12].method;
        fVar13 = (float)(*pMVar3->methodPointer)(lVar4,pMVar3);
        RStack_14.m_Origin.x = (ray->m_Origin).x;
        RStack_14.m_Origin.y = (ray->m_Origin).y;
        RStack_14._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
        RStack_14.m_Direction.y = (ray->m_Direction).y;
        RStack_14.m_Direction.z = (ray->m_Direction).z;
        epsilon._radiusEps = pvStackX_18._0_4_;
        VStack_15._0_8_ = uVar11;
        VStack_15.z = fVar12;
        bVar16 = SphereMath::SphereMath_Raycast_1
                          (&RStack_14,afStack_10,&VStack_15,fVar13,pvStackX_18._0_4_,
                           (MethodInfo *)0x0);
        if (bVar16 != 0) {
          pMVar3 = method->klass->rgctx_data[0x13].method;
          lVar17 = (*pMVar3->methodPointer)(lVar4,pMVar3);
          if (lVar17 == 0) break;
          if (*(int *)(lVar17 + 0x18) == 0) {
code_?:
            FUN_?();
            pcVar18 = (code *)swi(3);
            bVar16 = (*pcVar18)();
            return bVar16;
          }
          if (*(longlong *)(lVar17 + 0x20) == 0) break;
          pMVar3 = method->klass->rgctx_data[0x11].method;
          puVar8 = (undefined8 *)
                    (*pMVar3->methodPointer)(auStack_19,*(longlong *)(lVar17 + 0x20),pMVar3);
          uVar11 = *puVar8;
          fVar12 = *(float *)(puVar8 + 1);
          pMVar3 = method->klass->rgctx_data[0x13].method;
          lVar17 = (*pMVar3->methodPointer)(lVar4,pMVar3);
          if (lVar17 == 0) break;
          if (*(int *)(lVar17 + 0x18) == 0) goto code_?;
          if (*(longlong *)(lVar17 + 0x20) == 0) break;
          pvStackX_18 = (void *)((ulonglong)pvStackX_18 & 0xffffffff00000000);
          pMVar3 = method->klass->rgctx_data[0x12].method;
          fVar13 = (float)(*pMVar3->methodPointer)(*(longlong *)(lVar17 + 0x20),pMVar3);
          RStack_14.m_Origin.x = (ray->m_Origin).x;
          RStack_14.m_Origin.y = (ray->m_Origin).y;
          RStack_14._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
          RStack_14.m_Direction.y = (ray->m_Direction).y;
          RStack_14.m_Direction.z = (ray->m_Direction).z;
          VStack_20._0_8_ = uVar11;
          VStack_20.z = fVar12;
          bVar16 = SphereMath::SphereMath_Raycast_1
                            (&RStack_14,(float *)&pvStackX_18,&VStack_20,fVar13,epsilon,
                             (MethodInfo *)0x0);
          if (bVar16 != 0) {
            pSVar2 = (this->fields)._root;
            pMVar3 = method->klass->rgctx_data[0x13].method;
            lVar17 = (*pMVar3->methodPointer)(lVar4,pMVar3);
            if (lVar17 == 0) break;
            if (*(int *)(lVar17 + 0x18) == 0) goto code_?;
            if (pSVar2 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                          0x0) break;
            (*(method->klass->rgctx_data[0xf].method)->methodPointer)
                      (pSVar2,*(undefined8 *)(lVar17 + 0x20));
          }
          pMVar3 = method->klass->rgctx_data[0x13].method;
          lVar17 = (*pMVar3->methodPointer)(lVar4,pMVar3);
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) < 2) goto code_?;
          if (*(longlong *)(lVar17 + 0x28) != 0) {
            pMVar3 = method->klass->rgctx_data[0x13].method;
            lVar17 = (*pMVar3->methodPointer)(lVar4,pMVar3);
            if (lVar17 == 0) break;
            if (*(uint *)(lVar17 + 0x18) < 2) goto code_?;
            if (*(longlong *)(lVar17 + 0x28) == 0) break;
            pMVar3 = method->klass->rgctx_data[0x11].method;
            puVar8 = (undefined8 *)
                      (*pMVar3->methodPointer)(auStack_21,*(longlong *)(lVar17 + 0x28),pMVar3);
            uVar11 = *puVar8;
            fVar12 = *(float *)(puVar8 + 1);
            pMVar3 = method->klass->rgctx_data[0x13].method;
            lVar17 = (*pMVar3->methodPointer)(lVar4,pMVar3);
            if (lVar17 == 0) break;
            if (*(uint *)(lVar17 + 0x18) < 2) goto code_?;
            if (*(longlong *)(lVar17 + 0x28) == 0) break;
            pvStackX_18 = (void *)((ulonglong)pvStackX_18 & 0xffffffff00000000);
            pMVar3 = method->klass->rgctx_data[0x12].method;
            fVar13 = (float)(*pMVar3->methodPointer)(*(longlong *)(lVar17 + 0x28),pMVar3);
            RStack_14.m_Origin.x = (ray->m_Origin).x;
            RStack_14.m_Origin.y = (ray->m_Origin).y;
            RStack_14._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
            RStack_14.m_Direction.y = (ray->m_Direction).y;
            RStack_14.m_Direction.z = (ray->m_Direction).z;
            VStack_22._0_8_ = uVar11;
            VStack_22.z = fVar12;
            bVar16 = SphereMath::SphereMath_Raycast_1
                              (&RStack_14,(float *)&pvStackX_18,&VStack_22,fVar13,epsilon,
                               (MethodInfo *)0x0);
            if (bVar16 != 0) {
              pSVar2 = (this->fields)._root;
              pMVar3 = method->klass->rgctx_data[0x13].method;
              lVar4 = (*pMVar3->methodPointer)(lVar4,pMVar3);
              if (lVar4 == 0) break;
              if (*(uint *)(lVar4 + 0x18) < 2) goto code_?;
              if (pSVar2 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                            0x0) break;
              (*(method->klass->rgctx_data[0xf].method)->methodPointer)
                        (pSVar2,*(undefined8 *)(lVar4 + 0x28));
            }
          }
        }
      }
      else {
        puVar8 = (undefined8 *)(*pIVar7)(auStack_23);
        uVar11 = *puVar8;
        fVar12 = *(float *)(puVar8 + 1);
        pMVar3 = method->klass->rgctx_data[0x12].method;
        fVar13 = (float)(*pMVar3->methodPointer)(lVar4,pMVar3);
        RStack_14.m_Origin.x = (ray->m_Origin).x;
        RStack_14.m_Origin.y = (ray->m_Origin).y;
        RStack_14._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
        RStack_14.m_Direction.y = (ray->m_Direction).y;
        RStack_14.m_Direction.z = (ray->m_Direction).z;
        pvStackX_18 = (void *)((ulonglong)pvStackX_18 & 0xffffffff00000000);
        VStack_24._0_8_ = uVar11;
        VStack_24.z = fVar12;
        bVar16 = SphereMath::SphereMath_Raycast_1
                          (&RStack_14,afStack_1,&VStack_24,fVar13,(SphereEpsilon)0x0,
                           (MethodInfo *)0x0);
        if (bVar16 != 0) {
          pvVar25 = method->klass->rgctx_data[0x15].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar25 + 0x135) & 1) == 0) {
            pvVar25 = (void *)FUN_?(pvVar25);
          }
          pvVar25 = (void *)FUN_?(pvVar25);
          RStack_14.m_Origin.x = (ray->m_Origin).x;
          RStack_14.m_Origin.y = (ray->m_Origin).y;
          RStack_14._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
          RStack_14.m_Direction.y = (ray->m_Direction).y;
          RStack_14.m_Direction.z = (ray->m_Direction).z;
          pMVar3 = method->klass->rgctx_data[0x16].method;
          (*pMVar3->methodPointer)(pvVar25,&RStack_14,lVar4,afStack_1[0],pMVar3);
          pMVar3 = method->klass->rgctx_data[0x17].method;
          pvStackX_18 = pvVar25;
          (*pMVar3->invoker_method)(pMVar3->methodPointer,pMVar3,hits,&pvStackX_18,pvVar25);
        }
      }
      pSVar2 = (this->fields)._root;
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar16 = (*pcVar18)();
  return bVar16;
}


/* Void RemoveNode(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__RemoveNode
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *node,
               MethodInfo *method)

{
  if (node == (this->fields)._root) {
    return;
  }
  if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar1 = method->klass->rgctx_data[6].method;
    pSVar2 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             (*pMVar1->methodPointer)(node,pMVar1);
    (*(method->klass->rgctx_data[7].method)->methodPointer)(node,0);
    while (pSVar2 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar1 = method->klass->rgctx_data[8].method;
      iVar3 = (*pMVar1->methodPointer)(pSVar2,pMVar1);
      if ((iVar3 != 0) || (pSVar2 == (this->fields)._root)) {
        (*(method->klass->rgctx_data[9].method)->methodPointer)(pSVar2);
        return;
      }
      pMVar1 = method->klass->rgctx_data[6].method;
      pSVar4 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               (*pMVar1->methodPointer)(pSVar2,pMVar1);
      (*(method->klass->rgctx_data[7].method)->methodPointer)(pSVar2,0);
      pSVar2 = pSVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SphereTree`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]() */

void Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  uVar1 = method->klass->rgctx_data->klass->actualSize;
  lVar2 = FUN_?(0xffffffffffffff0);
  lVar2 = -lVar2;
  plVar3 = (longlong *)((longlong)&pvStack_4 + lVar2);
  *(undefined **)((longlong)auStack_5 + lVar2 + -8) = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  lVar7 = (longlong)&pvStack_4 + lVar6 + lVar2;
  *(undefined **)((longlong)auStack_5 + lVar6 + lVar2 + -8) = &UNK_?;
  FUN_?(lVar7,0,uVar1);
  *(undefined **)((longlong)auStack_5 + lVar6 + lVar2 + -8) = &UNK_?;
  FUN_?(lVar7,0,uVar1);
  *(undefined **)((longlong)auStack_5 + lVar6 + lVar2 + -8) = &UNK_?;
  FUN_?(plVar3,lVar7,uVar1);
  if (cRam_? == '\0') {
    *(undefined **)((longlong)auStack_5 + lVar6 + lVar2 + -8) = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    *(undefined4 *)((longlong)auStack_5 + lVar6 + lVar2) =
         *(undefined4 *)((longlong)auStack_5 + lVar6 + lVar2);
    UNLOCK();
    cRam_? = '\x01';
  }
  pvStack_8 = *(void **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
  fVar9 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
  pvVar10 = method->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)auStack_5 + lVar6 + lVar2 + -8) = &UNK_?;
    pvVar10 = (void *)FUN_?(pvVar10);
  }
  *(undefined **)((longlong)auStack_5 + lVar6 + lVar2 + -8) = &UNK_?;
  pSVar11 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            FUN_?(pvVar10);
  pvStack_4 = pvStack_8;
  uStack_12 = (void **)CONCAT44(0x3f800000,fVar9);
  uStack_13 = uStack_12;
  if (-1 < *(int *)&method->klass->rgctx_data->method->return_type) {
    plVar3 = (longlong *)*plVar3;
  }
  pIVar14 = method->klass;
  *(void ***)((longlong)alStack_15 + lVar6 + lVar2) = &pvStack_8;
  pvStack_4 = plVar3;
  uStack_12 = &pvStack_8;
  pMVar16 = pIVar14->rgctx_data[2].method;
  pIVar17 = pMVar16->methodPointer;
  pIVar18 = pMVar16->invoker_method;
  *(undefined **)((longlong)auStack_5 + lVar6 + lVar2 + -8) = &UNK_?;
  (*pIVar18)(pIVar17,pMVar16,pSVar11,&pvStack_4,*(void **)((longlong)alStack_15 + lVar6 + lVar2));
  bVar19 = iRam_? != 0;
  (this->fields)._root = pSVar11;
  if (bVar19) {
    uVar20 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar21 = (ulonglong)((uVar20 & 0x1fffff) >> 6);
    do {
      uVar22 = *(ulonglong *)(uVar21 * 8 + 0xADDR);
      puVar23 = (ulonglong *)(uVar21 * 8 + 0xADDR);
      LOCK();
      bVar19 = uVar22 == *puVar23;
      if (bVar19) {
        *puVar23 = uVar22 | 1L << (uVar20 & 0x3f);
      }
      UNLOCK();
    } while (!bVar19);
  }
  return;
}

