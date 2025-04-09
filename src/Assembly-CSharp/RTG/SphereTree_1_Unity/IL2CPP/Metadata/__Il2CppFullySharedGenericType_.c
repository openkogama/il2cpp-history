
/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]
   AddNode(__Il2CppFullySharedGenericType, Sphere) */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__AddNode
          (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          _Il2CppFullySharedGenericType *nodeData,Sphere sphere,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data->klass;
  uVar2 = pIVar1->actualSize;
  func_?();
  iVar3._0_2_ = (pIVar1->byval_arg).attrs;
  iVar3._2_1_ = (pIVar1->byval_arg).type;
  iVar3._3_1_ = (pIVar1->byval_arg).field_0x7;
  p_Var6 = (_Il2CppFullySharedGenericType *)&nodeData;
  if (iVar3 < 0) {
    p_Var6 = nodeData;
  }
  puStack_4 = &stack0xffffffe0;
  func_?(&stack0xffffffe0,p_Var6,uVar2);
  pIVar1 = method->klass->rgctx_data[1].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  nodeData = (_Il2CppFullySharedGenericType *)func_?(pIVar1);
  pIVar5 = method->klass->rgctx_data;
  puVar6 = &stack0xffffffe0;
  if (-1 < (int)pIVar5->method->return_type) {
    puVar6 = unaff_EDI;
  }
  pMVar7 = pIVar5[2].method;
  fStack_8 = sphere._center.x;
  fStack_9 = sphere._center.y;
  fStack_10 = sphere._center.z;
  fStack_11 = sphere._radius;
  sphere._center.z = (float)puVar6;
  sphere._radius = (float)&fStack_8;
  (*pMVar7->invoker_method)
            (pMVar7->methodPointer,pMVar7,nodeData,(void **)&sphere._center.z,&fStack_8);
  p_Var6 = nodeData;
  pMVar7 = method->klass->rgctx_data[5].method;
  (*pMVar7->methodPointer)(this,nodeData,pMVar7);
  return (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)p_Var6;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__DebugDraw
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    func_?(&StringLiteral__IsLit);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
  }
  this_00 = (MaterialPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
  if (this_00 != (MaterialPool *)0x0) {
    this_01 = MaterialPool::MaterialPool_get_GizmoSolidHandle(this_00,(MethodInfo *)0x0);
    if (this_01 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                (this_01,StringLiteral__IsLit,0,(MethodInfo *)0x0);
      color.g = (float)_UNK_?;
      color.r = (float)_UNK_?;
      color.b = (float)_UNK_?;
      color.a = _UNK_?;
      pCVar1 = ColorEx::ColorEx_KeepAllButAlpha
                         ((Color *)&stack0xffffffec,color,0.3,(MethodInfo *)0x0);
      MaterialEx::MaterialEx_SetColor(this_01,*pCVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                (this_01,0,(MethodInfo *)0x0);
      iStack2 = _UNK_?;
      if (_UNK_? != 0) {
        puStack3 = *(undefined4 **)(*(int *)(this_01[1].monitor + 0x60) + 0x10);
        (*(code *)*puStack3)();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InsertNode(SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__InsertNode
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *node,
               MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = method->klass->rgctx_data->klass->actualSize;
  uStack_3 = uVar2;
  func_?();
  method = (MethodInfo *)&stack0xffffffd4;
  func_?();
  _Stack_c.genericMethod = (Il2CppGenericMethod *)&stack0xffffffd4;
  func_?(&stack0xffffffd4,0,uVar2);
  pSVar4 = (this->fields)._root;
  _Stack_10.rgctx_data = (Il2CppRGCTXData *)&this->fields;
  do {
    if (pSVar4 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pMVar6 = pMVar1->klass->rgctx_data[10].method;
    cVar7 = (*pMVar6->methodPointer)(pSVar4,pMVar6);
    if (cVar7 != '\0') {
      pIVar8 = pMVar1->klass->rgctx_data[1].klass;
      if (((uint)pIVar8->vtable[0].methodPtr & 0x100) == 0) {
        pIVar8 = (Il2CppClass *)func_?(pIVar8);
      }
      SVar9._root = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                     func_?(pIVar8);
      pMVar6 = pMVar1->klass->rgctx_data[0x1f].method;
      (*pMVar6->methodPointer)(SVar9._root,pMVar6);
      func_?(_Stack_c.genericMethod,0,uStack_3);
      func_?(method,_Stack_c.genericMethod,uStack_3);
      if (SVar9._root !=
          (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        pIVar10 = pMVar1->klass->rgctx_data;
        if (-1 < (int)pIVar10->method->return_type) {
          method = (MethodInfo *)method->methodPointer;
        }
        pMVar6 = pIVar10[0x20].method;
        (*pMVar6->invoker_method)(pMVar6->methodPointer,pMVar6,SVar9._root,&method,method);
        if (pSVar4 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
          pMVar6 = pMVar1->klass->rgctx_data[0x21].method;
          puVar11 = (undefined4 *)(*pMVar6->methodPointer)(auStack_12,pSVar4,pMVar6);
          pMVar6 = pMVar1->klass->rgctx_data[0x22].method;
          (*pMVar6->methodPointer)(SVar9._root,*puVar11,puVar11[1],puVar11[2],puVar11[3],pMVar6);
          pMVar6 = pMVar1->klass->rgctx_data[6].method;
          uVar13 = (*pMVar6->methodPointer)(pSVar4,pMVar6);
          pMVar6 = pMVar1->klass->rgctx_data[7].method;
          (*pMVar6->methodPointer)(pSVar4,0,pMVar6);
          pMVar6 = pMVar1->klass->rgctx_data[7].method;
          (*pMVar6->methodPointer)(SVar9._root,uVar13,pMVar6);
          pMVar6 = pMVar1->klass->rgctx_data[7].method;
          (*pMVar6->methodPointer)(pSVar4,SVar9._root,pMVar6);
          if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
            pMVar6 = pMVar1->klass->rgctx_data[7].method;
            (*pMVar6->methodPointer)(node,SVar9._root,pMVar6);
            pMVar1 = pMVar1->klass->rgctx_data[9].method;
            (*pMVar1->methodPointer)(SVar9._root,pMVar1);
            if (pSVar4 != *(void **)_Stack_10.rgctx_data) {
              return;
            }
            *(SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
             _Stack_10.methodMetadataHandle = SVar9._root;
            func_?(_Stack_10.rgctx_data,SVar9._root);
            return;
          }
        }
      }
      goto code_?;
    }
    if (pSVar4 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    goto code_?;
    pMVar6 = pMVar1->klass->rgctx_data[8].method;
    iVar14 = (*pMVar6->methodPointer)(pSVar4,pMVar6);
    if (iVar14 < 2) {
      if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        pMVar6 = pMVar1->klass->rgctx_data[7].method;
        (*pMVar6->methodPointer)(node,pSVar4,pMVar6);
        pMVar1 = pMVar1->klass->rgctx_data[9].method;
        (*pMVar1->methodPointer)(pSVar4,pMVar1);
        return;
      }
      goto code_?;
    }
    pMVar6 = pMVar1->klass->rgctx_data[0x1e].method;
    pSVar4 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             (*pMVar6->methodPointer)(pSVar4,node,pMVar6);
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
        iVar3 = (*pMVar1->methodPointer)(node,pMVar1);
        pMVar1 = method->klass->rgctx_data[7].method;
        (*pMVar1->methodPointer)(node,0,pMVar1);
        if (iVar3 == 0) goto code_?;
        pMVar1 = method->klass->rgctx_data[8].method;
        iVar4 = (*pMVar1->methodPointer)(iVar3,pMVar1);
        pIVar5 = method->klass->rgctx_data;
        if (iVar4 == 0) {
          pMVar1 = pIVar5[0xc].method;
          (*pMVar1->methodPointer)(this,iVar3,pMVar1);
        }
        else {
          pMVar1 = pIVar5[9].method;
          (*pMVar1->methodPointer)(iVar3,pMVar1);
        }
        pMVar1 = method->klass->rgctx_data[5].method;
        (*pMVar1->methodPointer)(this,node,pMVar1);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean OverlapBox(OBB,
   List`1[RTG.SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]]) */

bool Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OverlapBox
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,OBB box,
               List_1_RTG_SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *nodes,MethodInfo *method)

{
  if (nodes != (List_1_RTG_SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               0x0) {
    pMVar1 = method->klass->rgctx_data[0x1b].method;
    (*pMVar1->methodPointer)(nodes,pMVar1);
    pSVar2 = (this->fields)._root;
    if (pSVar2 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      return 0;
    }
    pMVar1 = method->klass->rgctx_data[0xf].method;
    (*pMVar1->methodPointer)(pSVar2,pSVar2,pMVar1);
    pSVar2 = (this->fields)._root;
    while (pSVar2 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar1 = method->klass->rgctx_data[0x18].method;
      iVar3 = (*pMVar1->methodPointer)(pSVar2,pMVar1);
      if (iVar3 == 0) {
        pMVar1 = method->klass->rgctx_data[0x1d].method;
        iVar3 = (*pMVar1->methodPointer)(nodes,pMVar1);
        return iVar3 != 0;
      }
      pSVar2 = (this->fields)._root;
      if ((pSVar2 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) ||
         (pMVar1 = method->klass->rgctx_data[0x10].method,
         fVar4 = (float)(*pMVar1->methodPointer)(pSVar2,pMVar1), fStack_5 = fVar4, fVar4 == 0.0))
      break;
      pMVar1 = method->klass->rgctx_data[10].method;
      cVar6 = (*pMVar1->methodPointer)(fVar4,pMVar1);
      pMVar1 = method->klass->rgctx_data[0x11].method;
      if (cVar6 == '\0') {
        pVVar7 = (Vector3 *)(*pMVar1->methodPointer)(auStack_8,fVar4,pMVar1);
        pVVar7 = OBB::OBB_GetClosestPoint(&VStack_9,&box,*pVVar7,(MethodInfo *)0x0);
        uStack_10._0_4_ = pVVar7->x;
        uStack_10._4_4_ = pVVar7->y;
        fVar11 = pVVar7->z;
        pMVar1 = method->klass->rgctx_data[0x11].method;
        puVar12 = (undefined8 *)(*pMVar1->methodPointer)(auStack_13,fVar4,pMVar1);
        uStack_14 = *puVar12;
        fVar4 = *(float *)(puVar12 + 1);
        pMVar1 = method->klass->rgctx_data[0x12].method;
        pSStack_15 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    pMVar1->methodPointer;
        fVar16 = (float10)(*(code *)pSStack_15)(fStack_5,pMVar1);
        pSStack_15 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (float)fVar16;
        point_00.z = fVar11;
        point_00.x = (float)(undefined4)uStack_10;
        point_00.y = uStack_10._4_4_;
        sphereCenter_00.z = fVar4;
        sphereCenter_00.x = (float)(undefined4)uStack_14;
        sphereCenter_00.y = (float)uStack_14._4_4_;
        bVar17 = SphereMath::SphereMath_ContainsPoint
                          (point_00,sphereCenter_00,(float)pSStack_15,(SphereEpsilon)0x0,
                           (MethodInfo *)0x0);
        fVar4 = fStack_5;
        if (bVar17 != 0) {
          pMVar1 = method->klass->rgctx_data[0x13].method;
          iVar3 = (*pMVar1->methodPointer)(fStack_5,pMVar1);
          if (iVar3 == 0) break;
          if (*(int *)(iVar3 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar3 + 0x10) == 0) break;
          pMVar1 = method->klass->rgctx_data[0x11].method;
          pVVar7 = (Vector3 *)(*pMVar1->methodPointer)(auStack_18,*(int *)(iVar3 + 0x10),pMVar1);
          pVVar7 = OBB::OBB_GetClosestPoint(&VStack_19,&box,*pVVar7,(MethodInfo *)0x0);
          uStack_10._0_4_ = pVVar7->x;
          uStack_10._4_4_ = pVVar7->y;
          fStack_5 = pVVar7->z;
          pMVar1 = method->klass->rgctx_data[0x13].method;
          iVar3 = (*pMVar1->methodPointer)(fVar4,pMVar1);
          if (iVar3 == 0) break;
          if (*(int *)(iVar3 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar3 + 0x10) == 0) break;
          pMVar1 = method->klass->rgctx_data[0x11].method;
          puVar12 = (undefined8 *)(*pMVar1->methodPointer)(auStack_20,*(int *)(iVar3 + 0x10),pMVar1)
          ;
          uStack_14 = *puVar12;
          fVar11 = *(float *)(puVar12 + 1);
          pMVar1 = method->klass->rgctx_data[0x13].method;
          iVar3 = (*pMVar1->methodPointer)(fVar4,pMVar1);
          if (iVar3 == 0) break;
          if (*(int *)(iVar3 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar3 + 0x10) == 0) break;
          pMVar1 = method->klass->rgctx_data[0x12].method;
          pSStack_15 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      pMVar1->methodPointer;
          fVar16 = (float10)(*(code *)pSStack_15)(*(int *)(iVar3 + 0x10),pMVar1);
          pSStack_15 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      (float)fVar16;
          point_02.z = fStack_5;
          point_02.x = (float)(undefined4)uStack_10;
          point_02.y = uStack_10._4_4_;
          sphereCenter_02.z = fVar11;
          sphereCenter_02.x = (float)(undefined4)uStack_14;
          sphereCenter_02.y = (float)uStack_14._4_4_;
          bVar17 = SphereMath::SphereMath_ContainsPoint
                            (point_02,sphereCenter_02,(float)pSStack_15,(SphereEpsilon)0x0,
                             (MethodInfo *)0x0);
          if (bVar17 != 0) {
            pSStack_15 = (this->fields)._root;
            VStack_21.z = (float)method->klass->rgctx_data[0x13].method;
            VStack_21.y = fVar4;
            VStack_21.x = (float)&UNK_?;
            iVar3 = (*((MethodInfo *)VStack_21.z)->methodPointer)();
            if (iVar3 == 0) break;
            if (*(int *)(iVar3 + 0xc) == 0) goto code_?;
            if (pSStack_15 ==
                (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) break;
            pMVar1 = method->klass->rgctx_data[0xf].method;
            (*pMVar1->methodPointer)(pSStack_15,*(undefined4 *)(iVar3 + 0x10),pMVar1);
          }
          VStack_21.z = (float)method->klass->rgctx_data[0x13].method;
          VStack_21.y = fVar4;
          VStack_21.x = (float)&UNK_?;
          iVar3 = (*((MethodInfo *)VStack_21.z)->methodPointer)();
          if (iVar3 == 0) break;
          if (*(uint *)(iVar3 + 0xc) < 2) goto code_?;
          if (*(int *)(iVar3 + 0x14) != 0) {
            pMVar1 = method->klass->rgctx_data[0x13].method;
            iVar3 = (*pMVar1->methodPointer)(fVar4,pMVar1);
            if (iVar3 == 0) break;
            if (*(uint *)(iVar3 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar3 + 0x14) == 0) break;
            pMVar1 = method->klass->rgctx_data[0x11].method;
            pVVar7 = (Vector3 *)(*pMVar1->methodPointer)(auStack_22,*(int *)(iVar3 + 0x14),pMVar1);
            pVVar7 = OBB::OBB_GetClosestPoint(&VStack_21,&box,*pVVar7,(MethodInfo *)0x0);
            uStack_23._0_4_ = pVVar7->x;
            uStack_23._4_4_ = pVVar7->y;
            uStack_10 = CONCAT44(pVVar7->z,(undefined4)uStack_10);
            pMVar1 = method->klass->rgctx_data[0x13].method;
            iVar3 = (*pMVar1->methodPointer)(fVar4,pMVar1);
            if (iVar3 == 0) break;
            if (*(uint *)(iVar3 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar3 + 0x14) == 0) break;
            pMVar1 = method->klass->rgctx_data[0x11].method;
            puVar12 = (undefined8 *)
                      (*pMVar1->methodPointer)(auStack_24,*(int *)(iVar3 + 0x14),pMVar1);
            uStack_14 = *puVar12;
            fStack_5 = *(float *)(puVar12 + 1);
            pMVar1 = method->klass->rgctx_data[0x13].method;
            iVar3 = (*pMVar1->methodPointer)(fVar4,pMVar1);
            if (iVar3 == 0) break;
            if (*(uint *)(iVar3 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar3 + 0x14) == 0) break;
            pMVar1 = method->klass->rgctx_data[0x12].method;
            pSStack_15 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        pMVar1->methodPointer;
            fVar16 = (float10)(*(code *)pSStack_15)(*(int *)(iVar3 + 0x14),pMVar1);
            pSStack_15 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        (float)fVar16;
            point_01.z = uStack_10._4_4_;
            point_01.x = (float)(undefined4)uStack_23;
            point_01.y = (float)uStack_23._4_4_;
            sphereCenter_01.z = fStack_5;
            sphereCenter_01.x = (float)(undefined4)uStack_14;
            sphereCenter_01.y = (float)uStack_14._4_4_;
            bVar17 = SphereMath::SphereMath_ContainsPoint
                              (point_01,sphereCenter_01,(float)pSStack_15,(SphereEpsilon)0x0,
                               (MethodInfo *)0x0);
            if (bVar17 != 0) {
              pSVar2 = (this->fields)._root;
              pMVar1 = method->klass->rgctx_data[0x13].method;
              iVar3 = (*pMVar1->methodPointer)(fVar4,pMVar1);
              if (iVar3 == 0) break;
              if (*(uint *)(iVar3 + 0xc) < 2) goto code_?;
              if (pSVar2 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                            0x0) break;
              pMVar1 = method->klass->rgctx_data[0xf].method;
              (*pMVar1->methodPointer)(pSVar2,*(undefined4 *)(iVar3 + 0x14),pMVar1);
            }
          }
        }
      }
      else {
        pVVar7 = (Vector3 *)(*pMVar1->methodPointer)(auStack_25,fVar4,pMVar1);
        pVVar7 = OBB::OBB_GetClosestPoint(&VStack_26,&box,*pVVar7,(MethodInfo *)0x0);
        uStack_14._0_4_ = pVVar7->x;
        uStack_14._4_4_ = pVVar7->y;
        fVar11 = pVVar7->z;
        pMVar1 = method->klass->rgctx_data[0x11].method;
        puVar12 = (undefined8 *)(*pMVar1->methodPointer)(auStack_27,fVar4,pMVar1);
        uStack_10 = *puVar12;
        fVar4 = *(float *)(puVar12 + 1);
        pMVar1 = method->klass->rgctx_data[0x12].method;
        pSStack_15 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    pMVar1->methodPointer;
        fVar16 = (float10)(*(code *)pSStack_15)(fStack_5,pMVar1);
        pSStack_15 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (float)fVar16;
        point.z = fVar11;
        point.x = (float)(undefined4)uStack_14;
        point.y = (float)uStack_14._4_4_;
        sphereCenter.z = fVar4;
        sphereCenter.x = (float)(undefined4)uStack_10;
        sphereCenter.y = uStack_10._4_4_;
        bVar17 = SphereMath::SphereMath_ContainsPoint
                          (point,sphereCenter,(float)pSStack_15,(SphereEpsilon)0x0,(MethodInfo *)0x0)
        ;
        if (bVar17 != 0) {
          pMVar1 = method->klass->rgctx_data[0x1c].method;
          func_?(pMVar1->methodPointer,pMVar1,nodes,fStack_5);
        }
      }
      pSVar2 = (this->fields)._root;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  bVar17 = (*pcVar28)();
  return bVar17;
}


/* Boolean RaycastAll(Ray,
   List`1[RTG.SphereTreeNodeRayHit`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]]) */

bool Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__RaycastAll
               (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,Ray ray,
               List_1_RTG_SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *hits,MethodInfo *method)

{
  pSStack_1 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0;
  if (hits != (List_1_RTG_SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)0x0) {
    pMVar2 = method->klass->rgctx_data[0xe].method;
    (*pMVar2->methodPointer)(hits,pMVar2);
    pSVar3 = (this->fields)._root;
    if (pSVar3 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      return 0;
    }
    pMVar2 = method->klass->rgctx_data[0xf].method;
    (*pMVar2->methodPointer)(pSVar3,pSVar3,pMVar2);
    pSVar3 = (this->fields)._root;
    while (pSVar3 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar2 = method->klass->rgctx_data[0x18].method;
      iVar4 = (*pMVar2->methodPointer)(pSVar3,pMVar2);
      if (iVar4 == 0) {
        pMVar2 = method->klass->rgctx_data[0x19].method;
        iVar4 = (*pMVar2->methodPointer)(hits,pMVar2);
        return iVar4 != 0;
      }
      pSVar3 = (this->fields)._root;
      if ((pSVar3 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) ||
         (pMVar2 = method->klass->rgctx_data[0x10].method,
         iVar4 = (*pMVar2->methodPointer)(pSVar3,pMVar2), iVar4 == 0)) break;
      pMVar2 = method->klass->rgctx_data[10].method;
      cVar5 = (*pMVar2->methodPointer)(iVar4,pMVar2);
      pMVar2 = method->klass->rgctx_data[0x11].method;
      if (cVar5 == '\0') {
        puVar6 = (undefined8 *)(*pMVar2->methodPointer)(&puStack_7,iVar4,pMVar2);
        uStack_8 = *puVar6;
        fVar9 = *(float *)(puVar6 + 1);
        pMVar2 = method->klass->rgctx_data[0x12].method;
        pSStack_10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    pMVar2->methodPointer;
        fVar11 = (float10)(*(code *)pSStack_10)(iVar4,pMVar2);
        pSStack_10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (float)fVar11;
        sphereCenter_00.z = fVar9;
        sphereCenter_00.x = (float)(undefined4)uStack_8;
        sphereCenter_00.y = uStack_8._4_4_;
        bVar12 = SphereMath::SphereMath_Raycast
                          (ray,sphereCenter_00,(float)pSStack_10,(SphereEpsilon)0x0,(MethodInfo *)0x0
                          );
        if (bVar12 != 0) {
          pMVar2 = method->klass->rgctx_data[0x13].method;
          iVar13 = (*pMVar2->methodPointer)(iVar4,pMVar2);
          if (iVar13 == 0) break;
          if (*(int *)(iVar13 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar13 + 0x10) == 0) break;
          pMVar2 = method->klass->rgctx_data[0x11].method;
          puVar6 = (undefined8 *)(*pMVar2->methodPointer)(auStack_14,*(int *)(iVar13 + 0x10),pMVar2)
          ;
          uStack_8 = *puVar6;
          fVar9 = *(float *)(puVar6 + 1);
          pMVar2 = method->klass->rgctx_data[0x13].method;
          iVar13 = (*pMVar2->methodPointer)(iVar4,pMVar2);
          if (iVar13 == 0) break;
          if (*(int *)(iVar13 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar13 + 0x10) == 0) break;
          pMVar2 = method->klass->rgctx_data[0x12].method;
          pSStack_10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      pMVar2->methodPointer;
          fVar11 = (float10)(*(code *)pSStack_10)(*(int *)(iVar13 + 0x10),pMVar2);
          pSStack_10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      (float)fVar11;
          sphereCenter_02.z = fVar9;
          sphereCenter_02.x = (float)(undefined4)uStack_8;
          sphereCenter_02.y = uStack_8._4_4_;
          bVar12 = SphereMath::SphereMath_Raycast
                            (ray,sphereCenter_02,(float)pSStack_10,(SphereEpsilon)0x0,
                             (MethodInfo *)0x0);
          if (bVar12 != 0) {
            pSStack_10 = (this->fields)._root;
            pMStack_15 = method->klass->rgctx_data[0x13].method;
            iStack_16 = iVar4;
            iVar13 = (*pMStack_15->methodPointer)();
            if (iVar13 == 0) break;
            if (*(int *)(iVar13 + 0xc) == 0) goto code_?;
            if (pSStack_10 ==
                (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) break;
            pMVar2 = method->klass->rgctx_data[0xf].method;
            (*pMVar2->methodPointer)(pSStack_10,*(undefined4 *)(iVar13 + 0x10),pMVar2);
          }
          pMStack_15 = method->klass->rgctx_data[0x13].method;
          iStack_16 = iVar4;
          iVar13 = (*pMStack_15->methodPointer)();
          if (iVar13 == 0) break;
          if (*(uint *)(iVar13 + 0xc) < 2) goto code_?;
          if (*(int *)(iVar13 + 0x14) != 0) {
            pMVar2 = method->klass->rgctx_data[0x13].method;
            iVar13 = (*pMVar2->methodPointer)(iVar4,pMVar2);
            if (iVar13 == 0) break;
            if (*(uint *)(iVar13 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar13 + 0x14) == 0) break;
            pMVar2 = method->klass->rgctx_data[0x11].method;
            puVar6 = (undefined8 *)
                     (*pMVar2->methodPointer)(auStack_17,*(int *)(iVar13 + 0x14),pMVar2);
            uStack_18 = *puVar6;
            uStack_8 = CONCAT44(*(undefined4 *)(puVar6 + 1),(undefined4)uStack_8);
            pMVar2 = method->klass->rgctx_data[0x13].method;
            iVar13 = (*pMVar2->methodPointer)(iVar4,pMVar2);
            if (iVar13 == 0) break;
            if (*(uint *)(iVar13 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar13 + 0x14) == 0) break;
            pMVar2 = method->klass->rgctx_data[0x12].method;
            pSStack_10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        pMVar2->methodPointer;
            fVar11 = (float10)(*(code *)pSStack_10)(*(int *)(iVar13 + 0x14),pMVar2);
            pSStack_10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        (float)fVar11;
            sphereCenter_01.z = uStack_8._4_4_;
            sphereCenter_01.x = (float)(undefined4)uStack_18;
            sphereCenter_01.y = (float)uStack_18._4_4_;
            bVar12 = SphereMath::SphereMath_Raycast
                              (ray,sphereCenter_01,(float)pSStack_10,(SphereEpsilon)0x0,
                               (MethodInfo *)0x0);
            if (bVar12 != 0) {
              pSVar3 = (this->fields)._root;
              pMVar2 = method->klass->rgctx_data[0x13].method;
              iVar4 = (*pMVar2->methodPointer)(iVar4,pMVar2);
              if (iVar4 == 0) break;
              if (*(uint *)(iVar4 + 0xc) < 2) goto code_?;
              if (pSVar3 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                            0x0) break;
              pMVar2 = method->klass->rgctx_data[0xf].method;
              (*pMVar2->methodPointer)(pSVar3,*(undefined4 *)(iVar4 + 0x14),pMVar2);
            }
          }
        }
      }
      else {
        puVar6 = (undefined8 *)(*pMVar2->methodPointer)(auStack_19,iVar4,pMVar2);
        uStack_8 = *puVar6;
        fVar9 = *(float *)(puVar6 + 1);
        pMVar2 = method->klass->rgctx_data[0x12].method;
        pSStack_10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    pMVar2->methodPointer;
        fVar11 = (float10)(*(code *)pSStack_10)(iVar4,pMVar2);
        pSStack_10 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (float)fVar11;
        sphereCenter.z = fVar9;
        sphereCenter.x = (float)(undefined4)uStack_8;
        sphereCenter.y = uStack_8._4_4_;
        bVar12 = SphereMath::SphereMath_Raycast_1
                          (ray,(float *)&pSStack_1,sphereCenter,(float)pSStack_10,(SphereEpsilon)0x0,
                           (MethodInfo *)0x0);
        if (bVar12 != 0) {
          pSStack_10 = pSStack_1;
          uVar20 = func_?(method->klass->rgctx_data,0x15);
          uVar20 = func_?(uVar20);
          pMVar2 = method->klass->rgctx_data[0x16].method;
          (*pMVar2->methodPointer)
                    (uVar20,ray.m_Origin.x,ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,
                     ray.m_Direction.y,ray.m_Direction.z,iVar4,pSStack_10,pMVar2);
          pMVar2 = method->klass->rgctx_data[0x17].method;
          func_?(pMVar2->methodPointer,pMVar2,hits,uVar20);
        }
      }
      pSVar3 = (this->fields)._root;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  bVar12 = (*pcVar21)();
  return bVar12;
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
    pMVar1 = method->klass->rgctx_data[7].method;
    (*pMVar1->methodPointer)(node,0,pMVar1);
    while (pSVar2 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar1 = method->klass->rgctx_data[8].method;
      iVar3 = (*pMVar1->methodPointer)(pSVar2,pMVar1);
      if ((iVar3 != 0) || (pSVar2 == (this->fields)._root)) {
        pMVar1 = method->klass->rgctx_data[9].method;
        (*pMVar1->methodPointer)(pSVar2,pMVar1);
        return;
      }
      pMVar1 = method->klass->rgctx_data[6].method;
      pSVar4 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               (*pMVar1->methodPointer)(pSVar2,pMVar1);
      pMVar1 = method->klass->rgctx_data[7].method;
      (*pMVar1->methodPointer)(pSVar2,0,pMVar1);
      pSVar2 = pSVar4;
    }
  }
  func_?();
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
  func_?();
  method_00 = (MethodInfo *)&stack0xffffffcc;
  ppuStack_2 = (undefined **)&stack0xffffffcc;
  func_?();
  func_?(&stack0xffffffcc,0,uVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  func_?(&stack0xffffffcc,0,uVar1);
  ppuVar3 = ppuStack_2;
  func_?(ppuStack_2,&stack0xffffffcc,uVar1);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  Sphere::Sphere__ctor
            ((Sphere *)&stack0xffffffe4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
             1.0,(MethodInfo *)0x0);
  _Var3 = (_union_154)method->klass->rgctx_data[1].klass;
  if ((*(byte *)((int)_Var3.rgctx_data + 0xbd) & 1) == 0) {
    _Var3.rgctx_data = (Il2CppRGCTXData *)func_?();
  }
  pSVar4 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)func_?()
  ;
  pIVar5 = method->klass->rgctx_data;
  if (-1 < (int)pIVar5->method->return_type) {
    ppuVar3 = (undefined **)*ppuVar3;
  }
  ppuStack_2 = &pIStack_6;
  puStack_7 = ppuVar3;
  (*(pIVar5[2].method)->invoker_method)
            ((Il2CppMethodPointer)_Var3.methodMetadataHandle,(MethodInfo *)0x0,(void *)0x0,
             &puStack_7,ppuStack_2);
  (this->fields)._root = pSVar4;
  func_?();
  return;
}

