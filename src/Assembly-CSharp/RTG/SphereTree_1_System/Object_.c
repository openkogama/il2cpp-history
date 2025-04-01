
/* SphereTreeNode`1[System.Object] AddNode(Object, Sphere) */

SphereTreeNode_1_System_Object_ *
Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__AddNode
          (SphereTree_1_System_Object_ *this,Object *nodeData,Sphere sphere,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data[1].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  node = (SphereTreeNode_1_System_Object_ *)func_?(pIVar1);
  func_?(node,nodeData,sphere._center.x,sphere._center.y,sphere._center.z,sphere._radius,
                  method->klass->rgctx_data[2].rgctxDataDummy);
  SphereTree_1_System_Object__InsertNode(this,node,method->klass->rgctx_data[5].method);
  return node;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__DebugDraw
               (SphereTree_1_System_Object_ *this,MethodInfo *method)

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
        puStack3 = *(undefined **)(*(int *)(this_01[1].monitor + 0x60) + 0x10);
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InsertNode(SphereTreeNode`1[System.Object]) */

void Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__InsertNode
               (SphereTree_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *node,
               MethodInfo *method)

{
  this_00 = (this->fields)._root;
  do {
    if (this_00 == (SphereTreeNode_1_System_Object_ *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this_00->fields)._data != (Object *)0x0) {
      pIVar2 = method->klass->rgctx_data[1].klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      value = (Object *)func_?(pIVar2);
      pIVar2 = (method->klass->rgctx_data[0x1f].method)->klass->rgctx_data[3].klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pOVar3 = (Object__Class *)func_?(pIVar2,2);
      method_00 = (MethodInfo *)(value + 5);
      method_00->methodPointer = (Il2CppMethodPointer)pOVar3;
      func_?(method_00,pOVar3);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,method_00);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      fStack_4 = 0.0;
      fStack_5 = 0.0;
      fStack_6 = 0.0;
      Sphere::Sphere__ctor
                ((Sphere *)&fStack_4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,
                 (MethodInfo *)0x0);
      this_01 = (SphereTreeNode_1_System_Object_ *)0x0;
      value[2].klass = (Object__Class *)node;
      value[2].monitor = (MonitorData *)method;
      value[3].klass = in_stack_7;
      value[3].monitor = in_stack_8;
      value[4].klass = (Object__Class *)0x0;
      func_?(value + 4);
      pMVar9 = (MonitorData *)(this_00->fields)._sphere._center.y;
      pOVar3 = (Object__Class *)(this_00->fields)._sphere._center.z;
      pMVar10 = (MonitorData *)(this_00->fields)._sphere._radius;
      value[2].klass = (Object__Class *)(this_00->fields)._sphere._center.x;
      value[2].monitor = pMVar9;
      value[3].klass = pOVar3;
      value[3].monitor = pMVar10;
      pSVar11 = (this_00->fields)._parent;
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                (this_00,(SphereTreeNode_1_System_Object_ *)0x0,method->klass->rgctx_data[7].method)
      ;
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                (this_01,pSVar11,method->klass->rgctx_data[7].method);
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                (this_00,this_01,method->klass->rgctx_data[7].method);
      if (node != (SphereTreeNode_1_System_Object_ *)0x0) {
        SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                  (node,this_01,method->klass->rgctx_data[7].method);
        SphereTreeNode`1[System::Object]::
        SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
                  (this_01,method->klass->rgctx_data[9].method);
        uStack_12._4_4_ = (int *)((ulonglong)uStack_12 >> 0x20);
        if (this_00 != (SphereTreeNode_1_System_Object_ *)*uStack_12._4_4_) {
          return;
        }
        *uStack_12._4_4_ = (int)this_01;
        func_?(uStack_12._4_4_,this_01);
        return;
      }
      goto code_?;
    }
    if ((this_00->fields)._numChildren < 2) {
      if (node != (SphereTreeNode_1_System_Object_ *)0x0) {
        SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                  (node,this_00,method->klass->rgctx_data[7].method);
        SphereTreeNode`1[System::Object]::
        SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
                  (this_00,method->klass->rgctx_data[9].method);
        return;
      }
      goto code_?;
    }
    pSVar13 = (this_00->fields)._children;
    ppSVar14 = &(this_00->fields)._children;
    if (pSVar13 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
    if (pSVar13->max_length == 0) goto code_?;
    this_00 = pSVar13->vector[0];
    if (node == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
    uVar15 = (node->fields)._sphere._center.x;
    uVar16 = (node->fields)._sphere._center.y;
    if (pSVar13->max_length == 0) goto code_?;
    if (this_00 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
    uStack_12._0_4_ = (this_00->fields)._sphere._center.x;
    uStack_12._4_4_ = (int *)(this_00->fields)._sphere._center.y;
    fVar17 = (float)uVar16 - (float)uStack_12._4_4_;
    fVar18 = (node->fields)._sphere._center.z - (this_00->fields)._sphere._center.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar19 = (double)(fVar17 * fVar17 +
                      ((float)uVar15 - (float)(undefined4)uStack_12) *
                      ((float)uVar15 - (float)(undefined4)uStack_12) + fVar18 * fVar18);
    if (dVar19 < 0.0) {
      func_?();
    }
    else {
      dVar19 = SQRT(dVar19);
    }
    pSVar13 = *ppSVar14;
    if (pSVar13 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
    if (pSVar13->max_length < 2) goto code_?;
    if (pSVar13->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
      uVar20 = (node->fields)._sphere._center.x;
      uVar21 = (node->fields)._sphere._center.y;
      if (pSVar13->max_length < 2) goto code_?;
      pSVar11 = pSVar13->vector[1];
      if (pSVar11 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
      uVar22 = (pSVar11->fields)._sphere._center.x;
      uVar23 = (pSVar11->fields)._sphere._center.y;
      fStack_4 = (pSVar11->fields)._sphere._center.z;
      fVar17 = (node->fields)._sphere._center.z - fStack_4;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar24 = (double)(((float)uVar21 - (float)uVar23) * ((float)uVar21 - (float)uVar23) +
                        ((float)uVar20 - (float)uVar22) * ((float)uVar20 - (float)uVar22) +
                       fVar17 * fVar17);
      if (dVar24 < 0.0) {
        func_?();
      }
      else {
        dVar24 = SQRT(dVar24);
      }
      if ((float)dVar24 < (float)dVar19) {
        pSVar13 = *ppSVar14;
        if (pSVar13 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
        if (pSVar13->max_length < 2) goto code_?;
        this_00 = pSVar13->vector[1];
      }
    }
  } while( true );
}


/* Void OnNodeSphereUpdated(SphereTreeNode`1[System.Object]) */

void Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::
     SphereTree_1_System_Object__OnNodeSphereUpdated
               (SphereTree_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *node,
               MethodInfo *method)

{
  if (node == (SphereTreeNode_1_System_Object_ *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((node->fields)._data != (Object *)0x0) &&
     (pSVar2 = (node->fields)._parent, pSVar2 != (SphereTreeNode_1_System_Object_ *)0x0)) {
    uStack_3._0_4_ = (node->fields)._sphere._center.x;
    uStack_3._4_4_ = (node->fields)._sphere._center.y;
    uVar4 = (pSVar2->fields)._sphere._center.x;
    uVar5 = (pSVar2->fields)._sphere._center.y;
    fStack_6 = (node->fields)._sphere._center.z - (pSVar2->fields)._sphere._center.z;
    uStack_7 = CONCAT44((float)uStack_3._4_4_ - (float)uVar5,
                         (float)(undefined4)uStack_3 - (float)uVar4);
    fStack_8 = fStack_6;
    fVar9 = (float10)func_?(&uStack_7,0);
    pSVar2 = (node->fields)._parent;
    pSStack_10 = pSVar2;
    if (pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
    fVar11 = (float)fVar9 + (node->fields)._sphere._radius;
    pfVar12 = &(pSVar2->fields)._sphere._radius;
    if (*pfVar12 <= fVar11 && fVar11 != *pfVar12) {
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                (node,(SphereTreeNode_1_System_Object_ *)0x0,method->klass->rgctx_data[7].method);
      pIVar13 = method->klass->rgctx_data;
      if ((pSVar2->fields)._numChildren == 0) {
        pMVar14 = pIVar13[0xc].method;
        if (pSVar2 != (this->fields)._root) {
          pSVar2 = (pSVar2->fields)._parent;
          SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                    (pSStack_10,(SphereTreeNode_1_System_Object_ *)0x0,
                     pMVar14->klass->rgctx_data[7].method);
          while (pSVar2 != (SphereTreeNode_1_System_Object_ *)0x0) {
            if (((pSVar2->fields)._numChildren != 0) || (pSVar2 == (this->fields)._root)) {
              SphereTreeNode`1[System::Object]::
              SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
                        (pSVar2,pMVar14->klass->rgctx_data[9].method);
              goto code_?;
            }
            pSVar15 = (pSVar2->fields)._parent;
            SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                      (pSVar2,(SphereTreeNode_1_System_Object_ *)0x0,
                       pMVar14->klass->rgctx_data[7].method);
            pSVar2 = pSVar15;
          }
          goto code_?;
        }
      }
      else {
        SphereTreeNode`1[System::Object]::
        SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp(pSVar2,pIVar13[9].method);
      }
code_?:
      SphereTree_1_System_Object__InsertNode(this,node,method->klass->rgctx_data[5].method);
    }
  }
  return;
}


/* Boolean OverlapBox(OBB, List`1[RTG.SphereTreeNode`1[System.Object]]) */

bool Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__OverlapBox
               (SphereTree_1_System_Object_ *this,OBB box,
               List_1_RTG_SphereTreeNode_1_System_Object_ *nodes,MethodInfo *method)

{
  if (nodes != (List_1_RTG_SphereTreeNode_1_System_Object_ *)0x0) {
    length = (nodes->fields)._size;
    piVar1 = &(nodes->fields)._version;
    *piVar1 = *piVar1 + 1;
    (nodes->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(nodes->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSStack_2 = (this->fields)._root;
    if (pSStack_2 == (SphereTreeNode_1_System_Object_ *)0x0) {
      return 0;
    }
    pSVar3 = &pSStack_2->fields;
    ppSVar4 = &(pSStack_2->fields)._stackPrevious;
    *ppSVar4 = (pSStack_2->fields)._stackTop;
    func_?(ppSVar4);
    pSVar3->_stackTop = pSStack_2;
    func_?(pSVar3,pSStack_2);
    pSVar5 = (this->fields)._root;
    while (pSVar5 != (SphereTreeNode_1_System_Object_ *)0x0) {
      if ((pSVar5->fields)._stackTop == (SphereTreeNode_1_System_Object_ *)0x0) {
        return (nodes->fields)._size != 0;
      }
      if (pSVar5 == (SphereTreeNode_1_System_Object_ *)0x0) break;
      pSVar6 = (pSVar5->fields)._stackTop;
      if (pSVar6 == (SphereTreeNode_1_System_Object_ *)0x0) break;
      pSVar7 = (pSVar6->fields)._stackPrevious;
      (pSVar5->fields)._stackTop = pSVar7;
      func_?(&pSVar5->fields,pSVar7);
      pSVar8 = &(pSVar6->fields)._sphere;
      if ((pSVar6->fields)._data == (Object *)0x0) {
        pVVar9 = OBB::OBB_GetClosestPoint(&VStack_10,&box,pSVar8->_center,(MethodInfo *)0x0);
        bVar11 = SphereMath::SphereMath_ContainsPoint
                          (*pVVar9,(pSVar6->fields)._sphere._center,(pSVar6->fields)._sphere._radius
                           ,(SphereEpsilon)0x0,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pSVar12 = (pSVar6->fields)._children;
          if (pSVar12 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar12->max_length == 0) goto code_?;
          if (pSVar12->vector[0] == (SphereTreeNode_1_System_Object_ *)0x0) break;
          pVVar9 = OBB::OBB_GetClosestPoint
                             (&VStack_13,&box,(pSVar12->vector[0]->fields)._sphere._center,
                              (MethodInfo *)0x0);
          pSVar12 = (pSVar6->fields)._children;
          if (pSVar12 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar12->max_length == 0) goto code_?;
          pSVar5 = pSVar12->vector[0];
          if (pSVar5 == (SphereTreeNode_1_System_Object_ *)0x0) break;
          bVar11 = SphereMath::SphereMath_ContainsPoint
                            (*pVVar9,(pSVar5->fields)._sphere._center,
                             (pSVar5->fields)._sphere._radius,(SphereEpsilon)0x0,(MethodInfo *)0x0);
          if (bVar11 != 0) {
            pSVar12 = (pSVar6->fields)._children;
            if (pSVar12 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if (pSVar12->max_length == 0) goto code_?;
            pSVar5 = (this->fields)._root;
            if (pSVar5 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            pSVar7 = pSVar12->vector[0];
            pSVar3 = &pSVar5->fields;
            pSVar5 = pSVar3->_stackTop;
            if (pSVar7 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            ppSVar4 = &(pSVar7->fields)._stackPrevious;
            *ppSVar4 = pSVar5;
            func_?(ppSVar4,pSVar5);
            pSVar3->_stackTop = pSVar7;
            func_?(pSVar3,pSVar7);
          }
          pSVar12 = (pSVar6->fields)._children;
          if (pSVar12 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar12->max_length < 2) goto code_?;
          if (pSVar12->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
            pVVar9 = OBB::OBB_GetClosestPoint
                               ((Vector3 *)&stack0xffffffc8,&box,
                                (pSVar12->vector[1]->fields)._sphere._center,(MethodInfo *)0x0);
            pSVar12 = (pSVar6->fields)._children;
            if (pSVar12 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if (pSVar12->max_length < 2) goto code_?;
            pSVar5 = pSVar12->vector[1];
            if (pSVar5 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            bVar11 = SphereMath::SphereMath_ContainsPoint
                              (*pVVar9,(pSVar5->fields)._sphere._center,
                               (pSVar5->fields)._sphere._radius,(SphereEpsilon)0x0,(MethodInfo *)0x0
                              );
            if (bVar11 != 0) {
              pSVar12 = (pSVar6->fields)._children;
              if (pSVar12 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
              if (pSVar12->max_length < 2) goto code_?;
              pSVar5 = (this->fields)._root;
              if (pSVar5 == (SphereTreeNode_1_System_Object_ *)0x0) break;
              pSVar6 = pSVar12->vector[1];
              pSVar3 = &pSVar5->fields;
              pSVar5 = pSVar3->_stackTop;
              if (pSVar6 == (SphereTreeNode_1_System_Object_ *)0x0) break;
              VStack_14.y = (float)&(pSVar6->fields)._stackPrevious;
              *(SphereTreeNode_1_System_Object_ **)VStack_14.y = pSVar5;
              VStack_14.x = (float)&UNK_?;
              VStack_14.z = (float)pSVar5;
              func_?();
              pSVar3->_stackTop = pSVar6;
              VStack_10.y = (float)&UNK_?;
              VStack_10.z = (float)pSVar3;
              VStack_14.x = (float)pSVar6;
              func_?();
            }
          }
        }
      }
      else {
        pVVar9 = OBB::OBB_GetClosestPoint(&VStack_14,&box,pSVar8->_center,(MethodInfo *)0x0);
        bVar11 = SphereMath::SphereMath_ContainsPoint
                          (*pVVar9,(pSVar6->fields)._sphere._center,(pSVar6->fields)._sphere._radius
                           ,(SphereEpsilon)0x0,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)nodes,(Object *)pSVar6,
                     method->klass->rgctx_data[0x1c].method);
        }
      }
      pSVar5 = (this->fields)._root;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  bVar11 = (*pcVar15)();
  return bVar11;
}


/* Boolean RaycastAll(Ray, List`1[RTG.SphereTreeNodeRayHit`1[System.Object]]) */

bool Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__RaycastAll
               (SphereTree_1_System_Object_ *this,Ray ray,
               List_1_RTG_SphereTreeNodeRayHit_1_System_Object_ *hits,MethodInfo *method)

{
  RVar1 = ray;
  fStack_2 = 0.0;
  if (hits != (List_1_RTG_SphereTreeNodeRayHit_1_System_Object_ *)0x0) {
    length = (hits->fields)._size;
    piVar3 = &(hits->fields)._version;
    *piVar3 = *piVar3 + 1;
    (hits->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar4 = (this->fields)._root;
    if (pSVar4 == (SphereTreeNode_1_System_Object_ *)0x0) {
      return 0;
    }
    pSVar5 = (pSVar4->fields)._stackTop;
    ppSVar6 = &(pSVar4->fields)._stackPrevious;
    *ppSVar6 = pSVar5;
    func_?(ppSVar6,pSVar5);
    (pSVar4->fields)._stackTop = pSVar4;
    func_?(&pSVar4->fields,pSVar4);
    pSVar4 = (this->fields)._root;
    pSVar7 = this;
    while (pSVar4 != (SphereTreeNode_1_System_Object_ *)0x0) {
      if ((pSVar4->fields)._stackTop == (SphereTreeNode_1_System_Object_ *)0x0) {
        return (hits->fields)._size != 0;
      }
      if (pSVar4 == (SphereTreeNode_1_System_Object_ *)0x0) break;
      pSVar5 = (pSVar4->fields)._stackTop;
      if (pSVar5 == (SphereTreeNode_1_System_Object_ *)0x0) break;
      pSVar8 = (pSVar5->fields)._stackPrevious;
      (pSVar4->fields)._stackTop = pSVar8;
      func_?(&pSVar4->fields,pSVar8);
      fVar9 = (pSVar5->fields)._sphere._radius;
      pSVar10 = &(pSVar5->fields)._sphere;
      fVar11 = RVar1.m_Direction.z;
      fVar12 = RVar1.m_Direction.y;
      if ((pSVar5->fields)._data == (Object *)0x0) {
        ray_01.m_Origin.y = ray.m_Origin.y;
        ray_01.m_Origin.x = ray.m_Origin.x;
        ray_01.m_Origin.z = ray.m_Origin.z;
        ray_01.m_Direction.x = ray.m_Direction.x;
        ray_01.m_Direction.y = fVar12;
        ray_01.m_Direction.z = fVar11;
        bVar13 = SphereMath::SphereMath_Raycast
                           (ray_01,pSVar10->_center,fVar9,(SphereEpsilon)0x0,(MethodInfo *)0x0);
        if (bVar13 != 0) {
          pSVar14 = (pSVar5->fields)._children;
          if (pSVar14 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar14->max_length == 0) goto code_?;
          pSVar4 = pSVar14->vector[0];
          if (pSVar4 == (SphereTreeNode_1_System_Object_ *)0x0) break;
          ray_02.m_Origin.y = ray.m_Origin.y;
          ray_02.m_Origin.x = ray.m_Origin.x;
          ray_02.m_Origin.z = ray.m_Origin.z;
          ray_02.m_Direction.x = ray.m_Direction.x;
          ray_02.m_Direction.y = fVar12;
          ray_02.m_Direction.z = fVar11;
          bVar13 = SphereMath::SphereMath_Raycast
                             (ray_02,(pSVar4->fields)._sphere._center,
                              (pSVar4->fields)._sphere._radius,(SphereEpsilon)0x0,(MethodInfo *)0x0)
          ;
          if (bVar13 != 0) {
            pSVar14 = (pSVar5->fields)._children;
            if (pSVar14 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if (pSVar14->max_length == 0) goto code_?;
            pSVar4 = (pSVar7->fields)._root;
            if (pSVar4 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            pSVar8 = pSVar14->vector[0];
            pSVar15 = &pSVar4->fields;
            pSVar4 = pSVar15->_stackTop;
            if (pSVar8 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            ppSVar6 = &(pSVar8->fields)._stackPrevious;
            *ppSVar6 = pSVar4;
            func_?(ppSVar6,pSVar4);
            pSVar15->_stackTop = pSVar8;
            func_?(pSVar15,pSVar8);
            pSVar7 = this;
          }
          pSVar14 = (pSVar5->fields)._children;
          if (pSVar14 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar14->max_length < 2) goto code_?;
          if ((pSVar14->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) &&
             (ray_03.m_Origin.y = ray.m_Origin.y, ray_03.m_Origin.x = ray.m_Origin.x,
             ray_03.m_Origin.z = ray.m_Origin.z, ray_03.m_Direction.x = ray.m_Direction.x,
             ray_03.m_Direction.y = ray.m_Direction.y, ray_03.m_Direction.z = ray.m_Direction.z,
             bVar13 = SphereMath::SphereMath_Raycast
                                (ray_03,(pSVar14->vector[1]->fields)._sphere._center,
                                 (pSVar14->vector[1]->fields)._sphere._radius,(SphereEpsilon)0x0,
                                 (MethodInfo *)0x0), bVar13 != 0)) {
            pSVar14 = (pSVar5->fields)._children;
            if (pSVar14 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if (pSVar14->max_length < 2) goto code_?;
            pSVar4 = (pSVar7->fields)._root;
            if (pSVar4 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            ray.m_Origin.y = (float)pSVar14->vector[1];
            ray.m_Origin.x = (float)&pSVar4->fields;
            ray.m_Direction.x =
                 (float)((SphereTreeNode_1_System_Object___Fields *)ray.m_Origin.x)->_stackTop;
            if ((SphereTreeNode_1_System_Object_ *)ray.m_Origin.y ==
                (SphereTreeNode_1_System_Object_ *)0x0) break;
            ray.m_Origin.z =
                 (float)&(((SphereTreeNode_1_System_Object_ *)ray.m_Origin.y)->fields).
                         _stackPrevious;
            *(float *)ray.m_Origin.z = ray.m_Direction.x;
            func_?();
            ((SphereTreeNode_1_System_Object___Fields *)ray.m_Origin.x)->_stackTop =
                 (SphereTreeNode_1_System_Object_ *)ray.m_Origin.y;
            this = (SphereTree_1_System_Object_ *)&UNK_?;
            func_?();
          }
        }
      }
      else {
        ray_00.m_Origin.y = ray.m_Origin.y;
        ray_00.m_Origin.x = ray.m_Origin.x;
        ray_00.m_Origin.z = ray.m_Origin.z;
        ray_00.m_Direction.x = ray.m_Direction.x;
        ray_00.m_Direction.y = fVar12;
        ray_00.m_Direction.z = fVar11;
        bVar13 = SphereMath::SphereMath_Raycast_1
                           (ray_00,&fStack_2,pSVar10->_center,fVar9,(SphereEpsilon)0x0,
                            (MethodInfo *)0x0);
        if (bVar13 != 0) {
          fVar9 = fStack_2;
          uVar16 = func_?(method->klass->rgctx_data,0x15);
          item = (Object *)func_?(uVar16);
          func_?(item,ray.m_Origin.x,ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,fVar12
                          ,fVar11,pSVar5,fVar9,method->klass->rgctx_data[0x16].rgctxDataDummy);
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)hits,item,method->klass->rgctx_data[0x17].method);
        }
      }
      pSVar4 = (pSVar7->fields)._root;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  bVar13 = (*pcVar17)();
  return bVar13;
}


/* Void RemoveNode(SphereTreeNode`1[System.Object]) */

void Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__RemoveNode
               (SphereTree_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *node,
               MethodInfo *method)

{
  if (node == (this->fields)._root) {
    return;
  }
  if (node != (SphereTreeNode_1_System_Object_ *)0x0) {
    this_00 = (node->fields)._parent;
    SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
              (node,(SphereTreeNode_1_System_Object_ *)0x0,method->klass->rgctx_data[7].method);
    while (this_00 != (SphereTreeNode_1_System_Object_ *)0x0) {
      if (((this_00->fields)._numChildren != 0) || (this_00 == (this->fields)._root)) {
        SphereTreeNode`1[System::Object]::
        SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
                  (this_00,method->klass->rgctx_data[9].method);
        return;
      }
      pSVar1 = (this_00->fields)._parent;
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                (this_00,(SphereTreeNode_1_System_Object_ *)0x0,method->klass->rgctx_data[7].method)
      ;
      this_00 = pSVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SphereTree`1[System.Object]() */

void Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
               (SphereTree_1_System_Object_ *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  SStack_1._center.x = 0.0;
  SStack_1._center.y = 0.0;
  SStack_1._center.z = 0.0;
  SStack_1._radius = 0.0;
  Sphere::Sphere__ctor
            (&SStack_1,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,
             (MethodInfo *)0x0);
  SStack_1._radius = (float)method->klass->rgctx_data[1].klass;
  if (((uint)((Il2CppClass *)SStack_1._radius)->vtable[0].methodPtr & 0x100) == 0) {
    SStack_1._center.z = (float)&UNK_?;
    SStack_1._radius = (float)func_?();
  }
  SStack_1._center.z = (float)&UNK_?;
  pSVar2 = (SphereTreeNode_1_System_Object_ *)func_?();
  fVar3 = SStack_1._center.x;
  SStack_1._center.x = SStack_1._center.y;
  SStack_1._center.y = SStack_1._center.z;
  SStack_1._center.z = SStack_1._radius;
  SStack_1._radius = (float)method->klass->rgctx_data[2];
  func_?(pSVar2,0,fVar3);
  (this->fields)._root = pSVar2;
  func_?(&this->fields,pSVar2);
  return;
}

