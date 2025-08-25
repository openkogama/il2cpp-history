
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
  pSVar1 = (this->fields)._root;
  do {
    this_00 = pSVar1;
    if (this_00 == (SphereTreeNode_1_System_Object_ *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this_00->fields)._data != (Object *)0x0) {
      pIVar3 = method->klass->rgctx_data[1].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pSVar1 = (SphereTreeNode_1_System_Object_ *)func_?(pIVar3);
      pIVar3 = (method->klass->rgctx_data[0x1f].method)->klass->rgctx_data[3].klass;
      pSStack_4 = pSVar1;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pSVar5 = (SphereTreeNode_1_System_Object___Array *)func_?(pIVar3,2);
      (pSVar1->fields)._children = pSVar5;
      method_00 = (MethodInfo *)&(pSVar1->fields)._children;
      func_?(method_00,pSVar5);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pSVar1,ExceptionArgument__Enum_obj,method_00);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      SStack_6._center.x = 0.0;
      SStack_6._center.y = 0.0;
      SStack_6._center.z = 0.0;
      SStack_6._radius = 0.0;
      Sphere::Sphere__ctor
                (&SStack_6,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,
                 (MethodInfo *)0x0);
      (pSVar1->fields)._sphere._center.x = SStack_6._center.x;
      (pSVar1->fields)._sphere._center.y = SStack_6._center.y;
      (pSVar1->fields)._sphere._center.z = SStack_6._center.z;
      (pSVar1->fields)._sphere._radius = SStack_6._radius;
      (pSVar1->fields)._data = (Object *)0x0;
      func_?(&(pSVar1->fields)._data,0);
      fVar7 = (this_00->fields)._sphere._center.y;
      fVar8 = (this_00->fields)._sphere._center.z;
      fVar9 = (this_00->fields)._sphere._radius;
      (pSVar1->fields)._sphere._center.x = (this_00->fields)._sphere._center.x;
      (pSVar1->fields)._sphere._center.y = fVar7;
      (pSVar1->fields)._sphere._center.z = fVar8;
      (pSVar1->fields)._sphere._radius = fVar9;
      pSVar1 = (this_00->fields)._parent;
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                (this_00,(SphereTreeNode_1_System_Object_ *)0x0,method->klass->rgctx_data[7].method)
      ;
      pSVar10 = pSStack_4;
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                (pSStack_4,pSVar1,method->klass->rgctx_data[7].method);
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                (this_00,pSVar10,method->klass->rgctx_data[7].method);
      if (node != (SphereTreeNode_1_System_Object_ *)0x0) {
        SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                  (node,pSVar10,method->klass->rgctx_data[7].method);
        SphereTreeNode`1[System::Object]::
        SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
                  (pSVar10,method->klass->rgctx_data[9].method);
        if (this_00 != (this->fields)._root) {
          return;
        }
        (this->fields)._root = pSVar10;
        SStack_6._center.x = (float)&this->fields;
        SStack_6._center.y = (float)pSVar10;
        func_?();
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
    pSVar5 = (this_00->fields)._children;
    if (pSVar5 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
    if (pSVar5->max_length == 0) goto code_?;
    pSVar1 = pSVar5->vector[0];
    if (node == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
    fStack_11 = (node->fields)._sphere._center.z;
    uStack_12._0_4_ = (node->fields)._sphere._center.x;
    uStack_12._4_4_ = (node->fields)._sphere._center.y;
    pSVar5 = (this_00->fields)._children;
    if (pSVar5 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
    if (pSVar5->max_length == 0) goto code_?;
    pSVar10 = pSVar5->vector[0];
    if (pSVar10 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
    uStack_13._0_4_ = (pSVar10->fields)._sphere._center.x;
    uStack_13._4_4_ = (pSVar10->fields)._sphere._center.y;
    fStack_14 = (pSVar10->fields)._sphere._center.z;
    fStack_15 = fStack_11 - fStack_14;
    uStack_16 = CONCAT44((float)uStack_12._4_4_ - (float)uStack_13._4_4_,
                         (float)(undefined4)uStack_12 - (float)(undefined4)uStack_13);
    fStack_17 = fStack_15;
    fVar18 = (float10)func_?(&uStack_16,0);
    pSVar5 = (this_00->fields)._children;
    fStack_19 = (float)fVar18;
    if (pSVar5 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
    if (pSVar5->max_length < 2) goto code_?;
    if (pSVar5->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
      fStack_20 = (node->fields)._sphere._center.z;
      uStack_21._0_4_ = (node->fields)._sphere._center.x;
      uStack_21._4_4_ = (node->fields)._sphere._center.y;
      pSVar5 = (this_00->fields)._children;
      if (pSVar5 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
      if (pSVar5->max_length < 2) goto code_?;
      pSVar10 = pSVar5->vector[1];
      if (pSVar10 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
      uStack_22._0_4_ = (pSVar10->fields)._sphere._center.x;
      uStack_22._4_4_ = (pSVar10->fields)._sphere._center.y;
      fStack_23 = (pSVar10->fields)._sphere._center.z;
      SStack_6._radius = fStack_20 - fStack_23;
      uStack_16 = CONCAT44((float)uStack_21._4_4_ - (float)uStack_22._4_4_,
                           (float)(undefined4)uStack_21 - (float)(undefined4)uStack_22);
      fStack_17 = SStack_6._radius;
      fVar18 = (float10)func_?(&uStack_16,0);
      pSStack_4 = (SphereTreeNode_1_System_Object_ *)(float)fVar18;
      if ((float)pSStack_4 < fStack_19) {
        pSVar5 = (this_00->fields)._children;
        if (pSVar5 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
        if (pSVar5->max_length < 2) goto code_?;
        pSVar1 = pSVar5->vector[1];
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
  if (node != (SphereTreeNode_1_System_Object_ *)0x0) {
    if (((node->fields)._data == (Object *)0x0) ||
       ((node->fields)._parent == (SphereTreeNode_1_System_Object_ *)0x0)) {
      return;
    }
    fStack_1 = (node->fields)._sphere._center.z;
    uStack_2._0_4_ = (node->fields)._sphere._center.x;
    uStack_2._4_4_ = (node->fields)._sphere._center.y;
    pSVar3 = (node->fields)._parent;
    if (pSVar3 != (SphereTreeNode_1_System_Object_ *)0x0) {
      uVar4 = (pSVar3->fields)._sphere._center.x;
      uVar5 = (pSVar3->fields)._sphere._center.y;
      fStack_6 = fStack_1 - (pSVar3->fields)._sphere._center.z;
      uStack_7 = CONCAT44((float)uStack_2._4_4_ - (float)uVar5,
                           (float)(undefined4)uStack_2 - (float)uVar4);
      fStack_1 = fStack_6;
      fVar8 = (float10)func_?(&uStack_7,0);
      pSVar3 = (node->fields)._parent;
      if (pSVar3 != (SphereTreeNode_1_System_Object_ *)0x0) {
        fVar9 = (float)fVar8 + (node->fields)._sphere._radius;
        pfVar10 = &(pSVar3->fields)._sphere._radius;
        if (fVar9 < *pfVar10 || fVar9 == *pfVar10) {
          return;
        }
        pSStack_11 = pSVar3;
        SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                  (node,(SphereTreeNode_1_System_Object_ *)0x0,method->klass->rgctx_data[7].method);
        pIVar12 = method->klass->rgctx_data;
        if ((pSVar3->fields)._numChildren == 0) {
          pMVar13 = pIVar12[0xc].method;
          if (pSVar3 != (this->fields)._root) {
            pSVar3 = (pSVar3->fields)._parent;
            SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                      (pSStack_11,(SphereTreeNode_1_System_Object_ *)0x0,
                       pMVar13->klass->rgctx_data[7].method);
            while (pSVar3 != (SphereTreeNode_1_System_Object_ *)0x0) {
              if (((pSVar3->fields)._numChildren != 0) || (pSVar3 == (this->fields)._root)) {
                SphereTreeNode`1[System::Object]::
                SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
                          (pSVar3,pMVar13->klass->rgctx_data[9].method);
                goto code_?;
              }
              pSVar14 = (pSVar3->fields)._parent;
              SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                        (pSVar3,(SphereTreeNode_1_System_Object_ *)0x0,
                         pMVar13->klass->rgctx_data[7].method);
              pSVar3 = pSVar14;
            }
            goto code_?;
          }
        }
        else {
          SphereTreeNode`1[System::Object]::
          SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp(pSVar3,pIVar12[9].method);
        }
code_?:
        SphereTree_1_System_Object__InsertNode(this,node,method->klass->rgctx_data[5].method);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    if ((this->fields)._root == (SphereTreeNode_1_System_Object_ *)0x0) {
      return 0;
    }
    pSVar2 = (this->fields)._root;
    (pSVar2->fields)._stackPrevious = (pSVar2->fields)._stackTop;
    func_?(&(pSVar2->fields)._stackPrevious);
    (pSVar2->fields)._stackTop = pSVar2;
    func_?(&pSVar2->fields,pSVar2);
    pSVar2 = (this->fields)._root;
    while (pSVar2 != (SphereTreeNode_1_System_Object_ *)0x0) {
      if ((pSVar2->fields)._stackTop == (SphereTreeNode_1_System_Object_ *)0x0) {
        return (nodes->fields)._size != 0;
      }
      pSVar2 = (this->fields)._root;
      if ((pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) ||
         (pSVar3 = (pSVar2->fields)._stackTop, pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0))
      break;
      pSVar4 = (pSVar3->fields)._stackPrevious;
      (pSVar2->fields)._stackTop = pSVar4;
      func_?(&pSVar2->fields,pSVar4);
      pSVar5 = &(pSVar3->fields)._sphere;
      if ((pSVar3->fields)._data == (Object *)0x0) {
        pVVar6 = OBB::OBB_GetClosestPoint(&VStack_7,&box,pSVar5->_center,(MethodInfo *)0x0);
        bVar8 = SphereMath::SphereMath_ContainsPoint
                          (*pVVar6,(pSVar3->fields)._sphere._center,
                           (pSVar3->fields)._sphere._radius,(SphereEpsilon)0x0,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          pSVar9 = (pSVar3->fields)._children;
          if (pSVar9 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar9->max_length == 0) goto code_?;
          if (pSVar9->vector[0] == (SphereTreeNode_1_System_Object_ *)0x0) break;
          pVVar6 = OBB::OBB_GetClosestPoint
                              (&VStack_10,&box,(pSVar9->vector[0]->fields)._sphere._center,
                               (MethodInfo *)0x0);
          pSVar9 = (pSVar3->fields)._children;
          if (pSVar9 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar9->max_length == 0) goto code_?;
          if (pSVar9->vector[0] == (SphereTreeNode_1_System_Object_ *)0x0) break;
          bVar8 = SphereMath::SphereMath_ContainsPoint
                            (*pVVar6,(pSVar9->vector[0]->fields)._sphere._center,
                             (pSVar9->vector[0]->fields)._sphere._radius,(SphereEpsilon)0x0,
                             (MethodInfo *)0x0);
          if (bVar8 != 0) {
            pSVar9 = (pSVar3->fields)._children;
            if (pSVar9 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if (pSVar9->max_length == 0) goto code_?;
            pSVar2 = (this->fields)._root;
            if (pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            pSVar4 = pSVar9->vector[0];
            pSVar11 = (pSVar2->fields)._stackTop;
            if (pSVar4 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            (pSVar4->fields)._stackPrevious = pSVar11;
            func_?(&(pSVar4->fields)._stackPrevious,pSVar11);
            (pSVar2->fields)._stackTop = pSVar4;
            func_?(&pSVar2->fields,pSVar4);
          }
          pSVar9 = (pSVar3->fields)._children;
          if (pSVar9 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar9->max_length < 2) goto code_?;
          if (pSVar9->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
            pVVar6 = OBB::OBB_GetClosestPoint
                                ((Vector3 *)&stack0xffffffcc,&box,
                                 (pSVar9->vector[1]->fields)._sphere._center,(MethodInfo *)0x0);
            pSVar9 = (pSVar3->fields)._children;
            if (pSVar9 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if (pSVar9->max_length < 2) goto code_?;
            if (pSVar9->vector[1] == (SphereTreeNode_1_System_Object_ *)0x0) break;
            bVar8 = SphereMath::SphereMath_ContainsPoint
                              (*pVVar6,(pSVar9->vector[1]->fields)._sphere._center,
                               (pSVar9->vector[1]->fields)._sphere._radius,(SphereEpsilon)0x0,
                               (MethodInfo *)0x0);
            if (bVar8 != 0) {
              pSVar9 = (pSVar3->fields)._children;
              if (pSVar9 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
              if (pSVar9->max_length < 2) goto code_?;
              pSVar2 = (this->fields)._root;
              if (pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) break;
              pSVar3 = pSVar9->vector[1];
              pSVar4 = (pSVar2->fields)._stackTop;
              if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) break;
              (pSVar3->fields)._stackPrevious = pSVar4;
              VStack_12.y = (float)&(pSVar3->fields)._stackPrevious;
              VStack_12.x = (float)&UNK_?;
              VStack_12.z = (float)pSVar4;
              func_?();
              VStack_7.z = (float)&pSVar2->fields;
              (pSVar2->fields)._stackTop = pSVar3;
              VStack_7.y = (float)&UNK_?;
              VStack_12.x = (float)pSVar3;
              func_?();
            }
          }
        }
      }
      else {
        pVVar6 = OBB::OBB_GetClosestPoint(&VStack_12,&box,pSVar5->_center,(MethodInfo *)0x0);
        bVar8 = SphereMath::SphereMath_ContainsPoint
                          (*pVVar6,(pSVar3->fields)._sphere._center,
                           (pSVar3->fields)._sphere._radius,(SphereEpsilon)0x0,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)nodes,(Object *)pSVar3,
                     method->klass->rgctx_data[0x1c].method);
        }
      }
      pSVar2 = (this->fields)._root;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  bVar8 = (*pcVar13)();
  return bVar8;
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
    if ((this->fields)._root == (SphereTreeNode_1_System_Object_ *)0x0) {
      return 0;
    }
    pSVar4 = (this->fields)._root;
    pSVar5 = (pSVar4->fields)._stackTop;
    (pSVar4->fields)._stackPrevious = pSVar5;
    func_?(&(pSVar4->fields)._stackPrevious,pSVar5);
    (pSVar4->fields)._stackTop = pSVar4;
    func_?(&pSVar4->fields,pSVar4);
    pSVar4 = (this->fields)._root;
    pSVar6 = this;
    while (pSVar4 != (SphereTreeNode_1_System_Object_ *)0x0) {
      if ((pSVar4->fields)._stackTop == (SphereTreeNode_1_System_Object_ *)0x0) {
        return (hits->fields)._size != 0;
      }
      pSVar4 = (pSVar6->fields)._root;
      if ((pSVar4 == (SphereTreeNode_1_System_Object_ *)0x0) ||
         (pSVar5 = (pSVar4->fields)._stackTop, pSVar5 == (SphereTreeNode_1_System_Object_ *)0x0))
      break;
      pSVar7 = (pSVar5->fields)._stackPrevious;
      (pSVar4->fields)._stackTop = pSVar7;
      func_?(&pSVar4->fields,pSVar7);
      fVar8 = (pSVar5->fields)._sphere._radius;
      pSVar9 = &(pSVar5->fields)._sphere;
      fVar10 = RVar1.m_Direction.z;
      fVar11 = RVar1.m_Direction.y;
      if ((pSVar5->fields)._data == (Object *)0x0) {
        ray_01.m_Origin.y = ray.m_Origin.y;
        ray_01.m_Origin.x = ray.m_Origin.x;
        ray_01.m_Origin.z = ray.m_Origin.z;
        ray_01.m_Direction.x = ray.m_Direction.x;
        ray_01.m_Direction.y = fVar11;
        ray_01.m_Direction.z = fVar10;
        bVar12 = SphereMath::SphereMath_Raycast
                           (ray_01,pSVar9->_center,fVar8,(SphereEpsilon)0x0,(MethodInfo *)0x0);
        if (bVar12 != 0) {
          pSVar13 = (pSVar5->fields)._children;
          if (pSVar13 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar13->max_length == 0) goto code_?;
          if (pSVar13->vector[0] == (SphereTreeNode_1_System_Object_ *)0x0) break;
          ray_02.m_Origin.y = ray.m_Origin.y;
          ray_02.m_Origin.x = ray.m_Origin.x;
          ray_02.m_Origin.z = ray.m_Origin.z;
          ray_02.m_Direction.x = ray.m_Direction.x;
          ray_02.m_Direction.y = fVar11;
          ray_02.m_Direction.z = fVar10;
          bVar12 = SphereMath::SphereMath_Raycast
                             (ray_02,(pSVar13->vector[0]->fields)._sphere._center,
                              (pSVar13->vector[0]->fields)._sphere._radius,(SphereEpsilon)0x0,
                              (MethodInfo *)0x0);
          if (bVar12 != 0) {
            pSVar13 = (pSVar5->fields)._children;
            if (pSVar13 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if (pSVar13->max_length == 0) goto code_?;
            pSVar4 = (pSVar6->fields)._root;
            if (pSVar4 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            pSVar7 = pSVar13->vector[0];
            pSVar14 = (pSVar4->fields)._stackTop;
            if (pSVar7 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            (pSVar7->fields)._stackPrevious = pSVar14;
            func_?(&(pSVar7->fields)._stackPrevious,pSVar14);
            (pSVar4->fields)._stackTop = pSVar7;
            func_?(&pSVar4->fields,pSVar7);
            pSVar6 = this;
          }
          pSVar13 = (pSVar5->fields)._children;
          if (pSVar13 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if (pSVar13->max_length < 2) goto code_?;
          if ((pSVar13->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) &&
             (ray_03.m_Origin.y = ray.m_Origin.y, ray_03.m_Origin.x = ray.m_Origin.x,
             ray_03.m_Origin.z = ray.m_Origin.z, ray_03.m_Direction.x = ray.m_Direction.x,
             ray_03.m_Direction.y = ray.m_Direction.y, ray_03.m_Direction.z = ray.m_Direction.z,
             bVar12 = SphereMath::SphereMath_Raycast
                                (ray_03,(pSVar13->vector[1]->fields)._sphere._center,
                                 (((pSVar5->fields)._children)->vector[1]->fields)._sphere._radius,
                                 (SphereEpsilon)0x0,(MethodInfo *)0x0), bVar12 != 0)) {
            pSVar13 = (pSVar5->fields)._children;
            if (pSVar13 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if (pSVar13->max_length < 2) goto code_?;
            pSVar4 = (pSVar6->fields)._root;
            if (pSVar4 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            ray.m_Origin.y = (float)pSVar13->vector[1];
            ray.m_Direction.x = (float)(pSVar4->fields)._stackTop;
            if ((SphereTreeNode_1_System_Object_ *)ray.m_Origin.y ==
                (SphereTreeNode_1_System_Object_ *)0x0) break;
            (((SphereTreeNode_1_System_Object_ *)ray.m_Origin.y)->fields)._stackPrevious =
                 (SphereTreeNode_1_System_Object_ *)ray.m_Direction.x;
            ray.m_Origin.z =
                 (float)&(((SphereTreeNode_1_System_Object_ *)ray.m_Origin.y)->fields).
                         _stackPrevious;
            func_?();
            ray.m_Origin.x = (float)&pSVar4->fields;
            (pSVar4->fields)._stackTop = (SphereTreeNode_1_System_Object_ *)ray.m_Origin.y;
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
        ray_00.m_Direction.y = fVar11;
        ray_00.m_Direction.z = fVar10;
        bVar12 = SphereMath::SphereMath_Raycast_1
                           (ray_00,&fStack_2,pSVar9->_center,fVar8,(SphereEpsilon)0x0,
                            (MethodInfo *)0x0);
        if (bVar12 != 0) {
          fVar8 = fStack_2;
          uVar15 = func_?(method->klass->rgctx_data,0x15);
          item = (Object *)func_?(uVar15);
          func_?(item,ray.m_Origin.x,ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,fVar11
                          ,fVar10,pSVar5,fVar8,method->klass->rgctx_data[0x16].rgctxDataDummy);
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)hits,item,method->klass->rgctx_data[0x17].method);
        }
      }
      pSVar4 = (pSVar6->fields)._root;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  bVar12 = (*pcVar16)();
  return bVar12;
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

