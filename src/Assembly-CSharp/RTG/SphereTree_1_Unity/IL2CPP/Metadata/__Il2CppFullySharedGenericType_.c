
/* SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]
   AddNode(__Il2CppFullySharedGenericType, Sphere) */

SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::RTG::SphereTree`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__AddNode
          (SphereTree_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          _Il2CppFullySharedGenericType *nodeData,Sphere sphere,MethodInfo *method)

{
  uVar1 = method->klass->rgctx_data->klass->actualSize;
  func_?();
  p_Var5 = (_Il2CppFullySharedGenericType *)&nodeData;
  if ((int)method->klass->rgctx_data->method->return_type < 0) {
    p_Var5 = nodeData;
  }
  func_?(&stack0xffffffe4,p_Var5,uVar1);
  pIVar2 = method->klass->rgctx_data[1].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pSVar3 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           func_?(pIVar2);
  puVar4 = &stack0xffffffe4;
  if (-1 < (int)method->klass->rgctx_data->method->return_type) {
    puVar4 = unaff_EDI;
  }
  fStack_5 = sphere._center.x;
  fStack_6 = sphere._center.y;
  fStack_7 = sphere._center.z;
  fStack_8 = sphere._radius;
  pMVar9 = method->klass->rgctx_data[2].method;
  sphere._radius = (float)&fStack_5;
  sphere._center.z = (float)puVar4;
  (*pMVar9->invoker_method)
            ((method->klass->rgctx_data[2].method)->methodPointer,pMVar9,pSVar3,
             (void **)&sphere._center.z,(void *)sphere._radius);
  pMVar9 = method->klass->rgctx_data[5].method;
  (*pMVar9->methodPointer)(this,pSVar3,pMVar9);
  return pSVar3;
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
  do {
    if (pSVar4 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar6 = (*(pMVar1->klass->rgctx_data[10].method)->methodPointer)
                      (pSVar4,pMVar1->klass->rgctx_data[10].rgctxDataDummy);
    if (cVar6 != '\0') {
      pIVar7 = pMVar1->klass->rgctx_data[1].klass;
      if (((uint)pIVar7->vtable[0].methodPtr & 0x100) == 0) {
        pIVar7 = (Il2CppClass *)func_?(pIVar7);
      }
      _Var9.rgctx_data = (Il2CppRGCTXData *)func_?(pIVar7);
      pMVar8 = pMVar1->klass->rgctx_data[0x1f].method;
      _Stack_10.rgctx_data = _Var9.rgctx_data;
      (*pMVar8->methodPointer)(_Var9.rgctx_data,pMVar8);
      func_?(_Stack_c.genericMethod,0,uStack_3);
      func_?(method,_Stack_c.genericMethod,uStack_3);
      if (_Var9.rgctx_data != (Il2CppRGCTXData *)0x0) {
        if (-1 < (int)pMVar1->klass->rgctx_data->method->return_type) {
          method = (MethodInfo *)method->methodPointer;
        }
        pMVar8 = pMVar1->klass->rgctx_data[0x20].method;
        (*pMVar8->invoker_method)
                  ((pMVar1->klass->rgctx_data[0x20].method)->methodPointer,pMVar8,_Var9.rgctx_data,
                   &method,method);
        if (pSVar4 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
          puVar9 = (undefined4 *)
                    (*(pMVar1->klass->rgctx_data[0x21].method)->methodPointer)
                              (auStack_10,pSVar4,pMVar1->klass->rgctx_data[0x21].rgctxDataDummy);
          pMVar8 = pMVar1->klass->rgctx_data[0x22].method;
          (*pMVar8->methodPointer)
                    (_Var9.rgctx_data,*puVar9,puVar9[1],puVar9[2],puVar9[3],pMVar8);
          uVar11 = (*(pMVar1->klass->rgctx_data[6].method)->methodPointer)
                             (pSVar4,pMVar1->klass->rgctx_data[6].rgctxDataDummy);
          pMVar8 = pMVar1->klass->rgctx_data[7].method;
          (*pMVar8->methodPointer)(pSVar4,0,pMVar8);
          _Var9 = _Stack_10;
          pMVar8 = pMVar1->klass->rgctx_data[7].method;
          (*pMVar8->methodPointer)(_Stack_10.rgctx_data,uVar11,pMVar8);
          pMVar8 = pMVar1->klass->rgctx_data[7].method;
          (*pMVar8->methodPointer)(pSVar4,_Var9.rgctx_data,pMVar8);
          if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
            pMVar8 = pMVar1->klass->rgctx_data[7].method;
            (*pMVar8->methodPointer)(node,_Var9.rgctx_data,pMVar8);
            pMVar1 = pMVar1->klass->rgctx_data[9].method;
            (*pMVar1->methodPointer)(_Var9.rgctx_data,pMVar1);
            if (pSVar4 != (this->fields)._root) {
              return;
            }
            (this->fields)._root =
                 (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)_Var9;
            func_?(&this->fields,_Var9.rgctx_data);
            return;
          }
        }
      }
      goto code_?;
    }
    if (pSVar4 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    goto code_?;
    iVar12 = (*(pMVar1->klass->rgctx_data[8].method)->methodPointer)
                      (pSVar4,pMVar1->klass->rgctx_data[8].rgctxDataDummy);
    if (iVar12 < 2) {
      if (node != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        pMVar8 = pMVar1->klass->rgctx_data[7].method;
        (*pMVar8->methodPointer)(node,pSVar4,pMVar8);
        pMVar1 = pMVar1->klass->rgctx_data[9].method;
        (*pMVar1->methodPointer)(pSVar4,pMVar1);
        return;
      }
      goto code_?;
    }
    pSVar4 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             (*(pMVar1->klass->rgctx_data[0x1e].method)->methodPointer)
                       (pSVar4,node,pMVar1->klass->rgctx_data[0x1e].rgctxDataDummy);
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
    cVar1 = (*(method->klass->rgctx_data[10].method)->methodPointer)
                      (node,method->klass->rgctx_data[10].rgctxDataDummy);
    if (cVar1 != '\0') {
      cVar1 = (*(method->klass->rgctx_data[0xb].method)->methodPointer)
                        (node,method->klass->rgctx_data[0xb].rgctxDataDummy);
      if (cVar1 != '\0') {
        iVar2 = (*(method->klass->rgctx_data[6].method)->methodPointer)
                          (node,method->klass->rgctx_data[6].rgctxDataDummy);
        pMVar3 = method->klass->rgctx_data[7].method;
        (*pMVar3->methodPointer)(node,0,pMVar3);
        if (iVar2 == 0) goto code_?;
        iVar4 = (*(method->klass->rgctx_data[8].method)->methodPointer)
                          (iVar2,method->klass->rgctx_data[8].rgctxDataDummy);
        pIVar5 = method->klass->rgctx_data;
        if (iVar4 == 0) {
          pMVar3 = pIVar5[0xc].method;
          (*pMVar3->methodPointer)(this,iVar2,pMVar3);
        }
        else {
          pMVar3 = pIVar5[9].method;
          (*pMVar3->methodPointer)(iVar2,pMVar3);
        }
        pMVar3 = method->klass->rgctx_data[5].method;
        (*pMVar3->methodPointer)(this,node,pMVar3);
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
    if ((this->fields)._root ==
        (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      return 0;
    }
    pMVar1 = method->klass->rgctx_data[0xf].method;
    (*pMVar1->methodPointer)((this->fields)._root,(this->fields)._root,pMVar1);
    pSVar2 = (this->fields)._root;
    while (pSVar2 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      iVar3 = (*(method->klass->rgctx_data[0x18].method)->methodPointer)
                        (pSVar2,method->klass->rgctx_data[0x18].rgctxDataDummy);
      if (iVar3 == 0) {
        iVar3 = (*(method->klass->rgctx_data[0x1d].method)->methodPointer)
                          (nodes,method->klass->rgctx_data[0x1d].rgctxDataDummy);
        return iVar3 != 0;
      }
      pSVar2 = (this->fields)._root;
      if ((pSVar2 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) ||
         (fVar4 = (float)(*(method->klass->rgctx_data[0x10].method)->methodPointer)
                                    (pSVar2,method->klass->rgctx_data[0x10].rgctxDataDummy),
         fStack_5 = fVar4, fVar4 == 0.0)) break;
      cVar6 = (*(method->klass->rgctx_data[10].method)->methodPointer)
                        (fVar4,method->klass->rgctx_data[10].rgctxDataDummy);
      pIVar7 = (method->klass->rgctx_data[0x11].method)->methodPointer;
      pvVar8 = method->klass->rgctx_data[0x11].rgctxDataDummy;
      if (cVar6 == '\0') {
        pVVar9 = (Vector3 *)(*pIVar7)(auStack_10,fVar4,pvVar8);
        pVVar9 = OBB::OBB_GetClosestPoint(&VStack_11,&box,*pVVar9,(MethodInfo *)0x0);
        uStack_12._0_4_ = pVVar9->x;
        uStack_12._4_4_ = pVVar9->y;
        fVar13 = pVVar9->z;
        puVar14 = (undefined8 *)
                  (*(method->klass->rgctx_data[0x11].method)->methodPointer)
                            (auStack_15,fVar4,method->klass->rgctx_data[0x11].rgctxDataDummy);
        uStack_16 = *puVar14;
        fVar4 = *(float *)(puVar14 + 1);
        pSStack_17 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (method->klass->rgctx_data[0x12].method)->methodPointer;
        fVar18 = (float10)(*(code *)pSStack_17)
                                    (fStack_5,method->klass->rgctx_data[0x12].rgctxDataDummy);
        pSStack_17 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (float)fVar18;
        point_00.z = fVar13;
        point_00.x = (float)(undefined4)uStack_12;
        point_00.y = uStack_12._4_4_;
        sphereCenter_00.z = fVar4;
        sphereCenter_00.x = (float)(undefined4)uStack_16;
        sphereCenter_00.y = (float)uStack_16._4_4_;
        bVar19 = SphereMath::SphereMath_ContainsPoint
                          (point_00,sphereCenter_00,(float)pSStack_17,(SphereEpsilon)0x0,
                           (MethodInfo *)0x0);
        fVar4 = fStack_5;
        if (bVar19 != 0) {
          iVar3 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                            (fStack_5,method->klass->rgctx_data[0x13].rgctxDataDummy);
          if (iVar3 == 0) break;
          if (*(int *)(iVar3 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar3 + 0x10) == 0) break;
          pVVar9 = (Vector3 *)
                    (*(method->klass->rgctx_data[0x11].method)->methodPointer)
                              (auStack_20,*(int *)(iVar3 + 0x10),
                               method->klass->rgctx_data[0x11].rgctxDataDummy);
          pVVar9 = OBB::OBB_GetClosestPoint(&VStack_21,&box,*pVVar9,(MethodInfo *)0x0);
          uStack_12._0_4_ = pVVar9->x;
          uStack_12._4_4_ = pVVar9->y;
          fStack_5 = pVVar9->z;
          iVar3 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                            (fVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
          if (iVar3 == 0) break;
          if (*(int *)(iVar3 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar3 + 0x10) == 0) break;
          puVar14 = (undefined8 *)
                    (*(method->klass->rgctx_data[0x11].method)->methodPointer)
                              (auStack_22,*(int *)(iVar3 + 0x10),
                               method->klass->rgctx_data[0x11].rgctxDataDummy);
          uStack_16 = *puVar14;
          fVar13 = *(float *)(puVar14 + 1);
          iVar3 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                            (fVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
          if (iVar3 == 0) break;
          if (*(int *)(iVar3 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar3 + 0x10) == 0) break;
          pSStack_17 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      (method->klass->rgctx_data[0x12].method)->methodPointer;
          fVar18 = (float10)(*(code *)pSStack_17)
                                      (*(int *)(iVar3 + 0x10),
                                       method->klass->rgctx_data[0x12].rgctxDataDummy);
          pSStack_17 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      (float)fVar18;
          point_02.z = fStack_5;
          point_02.x = (float)(undefined4)uStack_12;
          point_02.y = uStack_12._4_4_;
          sphereCenter_02.z = fVar13;
          sphereCenter_02.x = (float)(undefined4)uStack_16;
          sphereCenter_02.y = (float)uStack_16._4_4_;
          bVar19 = SphereMath::SphereMath_ContainsPoint
                            (point_02,sphereCenter_02,(float)pSStack_17,(SphereEpsilon)0x0,
                             (MethodInfo *)0x0);
          if (bVar19 != 0) {
            pSStack_17 = (this->fields)._root;
            VStack_23.z = *(float *)(method->klass->rgctx_data + 0x13);
            VStack_23.y = fVar4;
            VStack_23.x = (float)&UNK_?;
            iVar3 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)();
            if (iVar3 == 0) break;
            if (*(int *)(iVar3 + 0xc) == 0) goto code_?;
            if (pSStack_17 ==
                (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) break;
            pMVar1 = method->klass->rgctx_data[0xf].method;
            (*pMVar1->methodPointer)(pSStack_17,*(undefined4 *)(iVar3 + 0x10),pMVar1);
          }
          VStack_23.z = *(float *)(method->klass->rgctx_data + 0x13);
          VStack_23.y = fVar4;
          VStack_23.x = (float)&UNK_?;
          iVar3 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)();
          if (iVar3 == 0) break;
          if (*(uint *)(iVar3 + 0xc) < 2) goto code_?;
          if (*(int *)(iVar3 + 0x14) != 0) {
            iVar3 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                              (fVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
            if (iVar3 == 0) break;
            if (*(uint *)(iVar3 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar3 + 0x14) == 0) break;
            pVVar9 = (Vector3 *)
                      (*(method->klass->rgctx_data[0x11].method)->methodPointer)
                                (auStack_24,*(int *)(iVar3 + 0x14),
                                 method->klass->rgctx_data[0x11].rgctxDataDummy);
            pVVar9 = OBB::OBB_GetClosestPoint(&VStack_23,&box,*pVVar9,(MethodInfo *)0x0);
            uStack_25._0_4_ = pVVar9->x;
            uStack_25._4_4_ = pVVar9->y;
            uStack_12 = CONCAT44(pVVar9->z,(undefined4)uStack_12);
            iVar3 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                              (fVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
            if (iVar3 == 0) break;
            if (*(uint *)(iVar3 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar3 + 0x14) == 0) break;
            puVar14 = (undefined8 *)
                      (*(method->klass->rgctx_data[0x11].method)->methodPointer)
                                (auStack_26,*(int *)(iVar3 + 0x14),
                                 method->klass->rgctx_data[0x11].rgctxDataDummy);
            uStack_16 = *puVar14;
            fStack_5 = *(float *)(puVar14 + 1);
            iVar3 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                              (fVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
            if (iVar3 == 0) break;
            if (*(uint *)(iVar3 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar3 + 0x14) == 0) break;
            pSStack_17 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        (method->klass->rgctx_data[0x12].method)->methodPointer;
            fVar18 = (float10)(*(code *)pSStack_17)
                                        (*(int *)(iVar3 + 0x14),
                                         method->klass->rgctx_data[0x12].rgctxDataDummy);
            pSStack_17 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        (float)fVar18;
            point_01.z = uStack_12._4_4_;
            point_01.x = (float)(undefined4)uStack_25;
            point_01.y = (float)uStack_25._4_4_;
            sphereCenter_01.z = fStack_5;
            sphereCenter_01.x = (float)(undefined4)uStack_16;
            sphereCenter_01.y = (float)uStack_16._4_4_;
            bVar19 = SphereMath::SphereMath_ContainsPoint
                              (point_01,sphereCenter_01,(float)pSStack_17,(SphereEpsilon)0x0,
                               (MethodInfo *)0x0);
            if (bVar19 != 0) {
              pSVar2 = (this->fields)._root;
              iVar3 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                                (fVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
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
        pVVar9 = (Vector3 *)(*pIVar7)(auStack_27,fVar4,pvVar8);
        pVVar9 = OBB::OBB_GetClosestPoint(&VStack_28,&box,*pVVar9,(MethodInfo *)0x0);
        uStack_16._0_4_ = pVVar9->x;
        uStack_16._4_4_ = pVVar9->y;
        fVar13 = pVVar9->z;
        puVar14 = (undefined8 *)
                  (*(method->klass->rgctx_data[0x11].method)->methodPointer)
                            (auStack_29,fVar4,method->klass->rgctx_data[0x11].rgctxDataDummy);
        uStack_12 = *puVar14;
        fVar4 = *(float *)(puVar14 + 1);
        pSStack_17 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (method->klass->rgctx_data[0x12].method)->methodPointer;
        fVar18 = (float10)(*(code *)pSStack_17)
                                    (fStack_5,method->klass->rgctx_data[0x12].rgctxDataDummy);
        pSStack_17 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (float)fVar18;
        point.z = fVar13;
        point.x = (float)(undefined4)uStack_16;
        point.y = (float)uStack_16._4_4_;
        sphereCenter.z = fVar4;
        sphereCenter.x = (float)(undefined4)uStack_12;
        sphereCenter.y = uStack_12._4_4_;
        bVar19 = SphereMath::SphereMath_ContainsPoint
                          (point,sphereCenter,(float)pSStack_17,(SphereEpsilon)0x0,(MethodInfo *)0x0)
        ;
        if (bVar19 != 0) {
          func_?((method->klass->rgctx_data[0x1c].method)->methodPointer,
                          method->klass->rgctx_data[0x1c].rgctxDataDummy,nodes,fStack_5);
        }
      }
      pSVar2 = (this->fields)._root;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  bVar19 = (*pcVar30)();
  return bVar19;
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
    if ((this->fields)._root ==
        (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      return 0;
    }
    pMVar2 = method->klass->rgctx_data[0xf].method;
    (*pMVar2->methodPointer)((this->fields)._root,(this->fields)._root,pMVar2);
    pSVar3 = (this->fields)._root;
    while (pSVar3 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      iVar4 = (*(method->klass->rgctx_data[0x18].method)->methodPointer)
                        (pSVar3,method->klass->rgctx_data[0x18].rgctxDataDummy);
      if (iVar4 == 0) {
        iVar4 = (*(method->klass->rgctx_data[0x19].method)->methodPointer)
                          (hits,method->klass->rgctx_data[0x19].rgctxDataDummy);
        return iVar4 != 0;
      }
      pSVar3 = (this->fields)._root;
      if ((pSVar3 == (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) ||
         (iVar4 = (*(method->klass->rgctx_data[0x10].method)->methodPointer)
                            (pSVar3,method->klass->rgctx_data[0x10].rgctxDataDummy), iVar4 == 0))
      break;
      cVar5 = (*(method->klass->rgctx_data[10].method)->methodPointer)
                        (iVar4,method->klass->rgctx_data[10].rgctxDataDummy);
      pIVar6 = (method->klass->rgctx_data[0x11].method)->methodPointer;
      pvVar7 = method->klass->rgctx_data[0x11].rgctxDataDummy;
      if (cVar5 == '\0') {
        puVar8 = (undefined8 *)(*pIVar6)(&puStack_9,iVar4,pvVar7);
        uStack_10 = *puVar8;
        fVar11 = *(float *)(puVar8 + 1);
        pSStack_12 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (method->klass->rgctx_data[0x12].method)->methodPointer;
        fVar13 = (float10)(*(code *)pSStack_12)(iVar4,method->klass->rgctx_data[0x12].rgctxDataDummy)
        ;
        pSStack_12 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (float)fVar13;
        sphereCenter_00.z = fVar11;
        sphereCenter_00.x = (float)(undefined4)uStack_10;
        sphereCenter_00.y = uStack_10._4_4_;
        bVar14 = SphereMath::SphereMath_Raycast
                          (ray,sphereCenter_00,(float)pSStack_12,(SphereEpsilon)0x0,(MethodInfo *)0x0
                          );
        if (bVar14 != 0) {
          iVar15 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                             (iVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
          if (iVar15 == 0) break;
          if (*(int *)(iVar15 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar15 + 0x10) == 0) break;
          puVar8 = (undefined8 *)
                    (*(method->klass->rgctx_data[0x11].method)->methodPointer)
                              (auStack_16,*(int *)(iVar15 + 0x10),
                               method->klass->rgctx_data[0x11].rgctxDataDummy);
          uStack_10 = *puVar8;
          fVar11 = *(float *)(puVar8 + 1);
          iVar15 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                             (iVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
          if (iVar15 == 0) break;
          if (*(int *)(iVar15 + 0xc) == 0) goto code_?;
          if (*(int *)(iVar15 + 0x10) == 0) break;
          pSStack_12 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      (method->klass->rgctx_data[0x12].method)->methodPointer;
          fVar13 = (float10)(*(code *)pSStack_12)
                                      (*(int *)(iVar15 + 0x10),
                                       method->klass->rgctx_data[0x12].rgctxDataDummy);
          pSStack_12 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      (float)fVar13;
          sphereCenter_02.z = fVar11;
          sphereCenter_02.x = (float)(undefined4)uStack_10;
          sphereCenter_02.y = uStack_10._4_4_;
          bVar14 = SphereMath::SphereMath_Raycast
                            (ray,sphereCenter_02,(float)pSStack_12,(SphereEpsilon)0x0,
                             (MethodInfo *)0x0);
          if (bVar14 != 0) {
            pSStack_12 = (this->fields)._root;
            IStack_17 = method->klass->rgctx_data[0x13];
            iStack_18 = iVar4;
            iVar15 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)();
            if (iVar15 == 0) break;
            if (*(int *)(iVar15 + 0xc) == 0) goto code_?;
            if (pSStack_12 ==
                (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) break;
            pMVar2 = method->klass->rgctx_data[0xf].method;
            (*pMVar2->methodPointer)(pSStack_12,*(undefined4 *)(iVar15 + 0x10),pMVar2);
          }
          IStack_17 = method->klass->rgctx_data[0x13];
          iStack_18 = iVar4;
          iVar15 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)();
          if (iVar15 == 0) break;
          if (*(uint *)(iVar15 + 0xc) < 2) goto code_?;
          if (*(int *)(iVar15 + 0x14) != 0) {
            iVar15 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                               (iVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
            if (iVar15 == 0) break;
            if (*(uint *)(iVar15 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar15 + 0x14) == 0) break;
            puVar8 = (undefined8 *)
                      (*(method->klass->rgctx_data[0x11].method)->methodPointer)
                                (auStack_19,*(int *)(iVar15 + 0x14),
                                 method->klass->rgctx_data[0x11].rgctxDataDummy);
            uStack_20 = *puVar8;
            uStack_10 = CONCAT44(*(undefined4 *)(puVar8 + 1),(undefined4)uStack_10);
            iVar15 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                               (iVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
            if (iVar15 == 0) break;
            if (*(uint *)(iVar15 + 0xc) < 2) goto code_?;
            if (*(int *)(iVar15 + 0x14) == 0) break;
            pSStack_12 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        (method->klass->rgctx_data[0x12].method)->methodPointer;
            fVar13 = (float10)(*(code *)pSStack_12)
                                        (*(int *)(iVar15 + 0x14),
                                         method->klass->rgctx_data[0x12].rgctxDataDummy);
            pSStack_12 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        (float)fVar13;
            sphereCenter_01.z = uStack_10._4_4_;
            sphereCenter_01.x = (float)(undefined4)uStack_20;
            sphereCenter_01.y = (float)uStack_20._4_4_;
            bVar14 = SphereMath::SphereMath_Raycast
                              (ray,sphereCenter_01,(float)pSStack_12,(SphereEpsilon)0x0,
                               (MethodInfo *)0x0);
            if (bVar14 != 0) {
              pSVar3 = (this->fields)._root;
              iVar4 = (*(method->klass->rgctx_data[0x13].method)->methodPointer)
                                (iVar4,method->klass->rgctx_data[0x13].rgctxDataDummy);
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
        puVar8 = (undefined8 *)(*pIVar6)(auStack_21,iVar4,pvVar7);
        uStack_10 = *puVar8;
        fVar11 = *(float *)(puVar8 + 1);
        pSStack_12 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (method->klass->rgctx_data[0x12].method)->methodPointer;
        fVar13 = (float10)(*(code *)pSStack_12)(iVar4,method->klass->rgctx_data[0x12].rgctxDataDummy)
        ;
        pSStack_12 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    (float)fVar13;
        sphereCenter.z = fVar11;
        sphereCenter.x = (float)(undefined4)uStack_10;
        sphereCenter.y = uStack_10._4_4_;
        bVar14 = SphereMath::SphereMath_Raycast_1
                          (ray,(float *)&pSStack_1,sphereCenter,(float)pSStack_12,(SphereEpsilon)0x0,
                           (MethodInfo *)0x0);
        if (bVar14 != 0) {
          pSStack_12 = pSStack_1;
          uVar22 = func_?(method->klass->rgctx_data,0x15);
          uVar22 = func_?(uVar22);
          pMVar2 = method->klass->rgctx_data[0x16].method;
          (*pMVar2->methodPointer)
                    (uVar22,ray.m_Origin.x,ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,
                     ray.m_Direction.y,ray.m_Direction.z,iVar4,pSStack_12,pMVar2);
          func_?((method->klass->rgctx_data[0x17].method)->methodPointer,
                          method->klass->rgctx_data[0x17].rgctxDataDummy,hits,uVar22);
        }
      }
      pSVar3 = (this->fields)._root;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  bVar14 = (*pcVar23)();
  return bVar14;
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
    pSVar1 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             (*(method->klass->rgctx_data[6].method)->methodPointer)
                       (node,method->klass->rgctx_data[6].rgctxDataDummy);
    pMVar2 = method->klass->rgctx_data[7].method;
    (*pMVar2->methodPointer)(node,0,pMVar2);
    while (pSVar1 != (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      iVar3 = (*(method->klass->rgctx_data[8].method)->methodPointer)
                        (pSVar1,method->klass->rgctx_data[8].rgctxDataDummy);
      if ((iVar3 != 0) || (pSVar1 == (this->fields)._root)) {
        pMVar2 = method->klass->rgctx_data[9].method;
        (*pMVar2->methodPointer)(pSVar1,pMVar2);
        return;
      }
      pSVar4 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               (*(method->klass->rgctx_data[6].method)->methodPointer)
                         (pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
      pMVar2 = method->klass->rgctx_data[7].method;
      (*pMVar2->methodPointer)(pSVar1,0,pMVar2);
      pSVar1 = pSVar4;
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
  pMVar2 = (MethodInfo *)&stack0xffffffcc;
  ppIStack_3 = (InvokerMethod *)&stack0xffffffcc;
  func_?();
  func_?(&stack0xffffffcc,0,uVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
  func_?(&stack0xffffffcc,0,uVar1);
  ppIVar4 = ppIStack_3;
  func_?(ppIStack_3,&stack0xffffffcc,uVar1);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  Sphere::Sphere__ctor
            ((Sphere *)&stack0xffffffe4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
             1.0,(MethodInfo *)0x0);
  if (((uint)(method->klass->rgctx_data[1].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  pSVar5 = (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)func_?()
  ;
  if (-1 < (int)method->klass->rgctx_data->method->return_type) {
    ppIVar4 = (InvokerMethod *)*ppIVar4;
  }
  pMVar2 = method->klass->rgctx_data[2].method;
  ppIStack_3 = &pIStack_6;
  puStack_7 = ppIVar4;
  (*pMVar2->invoker_method)
            ((method->klass->rgctx_data[2].method)->methodPointer,pMVar2,pSVar5,&puStack_7,
             ppIStack_3);
  (this->fields)._root = pSVar5;
  func_?();
  return;
}

