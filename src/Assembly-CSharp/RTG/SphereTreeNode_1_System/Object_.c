
/* SphereTreeNode`1[System.Object] ClosestChild(SphereTreeNode`1[System.Object]) */

SphereTreeNode_1_System_Object_ *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
SphereTreeNode_1_System_Object__ClosestChild
          (SphereTreeNode_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *node,
          MethodInfo *method)

{
  if ((this->fields)._numChildren == 0) {
    return (SphereTreeNode_1_System_Object_ *)0x0;
  }
  pSVar1 = (this->fields)._children;
  if (pSVar1 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
  if (pSVar1->max_length != 0) {
    pSVar2 = pSVar1->vector[0];
    if (node == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
    uStack_3._0_4_ = (node->fields)._sphere._center.x;
    uStack_3._4_4_ = (node->fields)._sphere._center.y;
    fStack_4 = (node->fields)._sphere._center.z;
    if (pSVar1->max_length != 0) {
      if (pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
      uVar5 = (pSVar2->fields)._sphere._center.x;
      uVar6 = (pSVar2->fields)._sphere._center.y;
      fStack_4 = fStack_4 - (pSVar2->fields)._sphere._center.z;
      uStack_3 = CONCAT44((float)uStack_3._4_4_ - (float)uVar6,
                           (float)(undefined4)uStack_3 - (float)uVar5);
      fVar7 = (float10)func_?(&uStack_3,0);
      pSVar1 = (this->fields)._children;
      if (pSVar1 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
      if (1 < pSVar1->max_length) {
        if (pSVar1->vector[1] == (SphereTreeNode_1_System_Object_ *)0x0) {
          return pSVar2;
        }
        uVar8 = (node->fields)._sphere._center.x;
        uVar9 = (node->fields)._sphere._center.y;
        if (1 < pSVar1->max_length) {
          pSVar10 = pSVar1->vector[1];
          if (pSVar10 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
          uVar11 = (pSVar10->fields)._sphere._center.x;
          uVar12 = (pSVar10->fields)._sphere._center.y;
          fStack_4 = (node->fields)._sphere._center.z - (pSVar10->fields)._sphere._center.z;
          uStack_3 = CONCAT44((float)uVar9 - (float)uVar12,(float)uVar8 - (float)uVar11);
          fVar13 = (float10)func_?(&uStack_3,0);
          fStack_14 = (float)fVar13;
          if ((float)fVar7 <= fStack_14) {
            return pSVar2;
          }
          pSVar1 = (this->fields)._children;
          if (pSVar1 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
          if (1 < pSVar1->max_length) {
            return pSVar1->vector[1];
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pSVar2 = (SphereTreeNode_1_System_Object_ *)(*pcVar15)();
  return pSVar2;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__DebugDraw
               (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)(this->fields)._sphere._center.x;
  unique0x0000a404 = (this->fields)._sphere._center.y;
  fVar2 = (this->fields)._sphere._center.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  q = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  pVVar3 = Vector3Ex::Vector3Ex_FromValue
                      (&VStack_4,(this->fields)._sphere._radius,(MethodInfo *)0x0);
  uVar5 = _puStack_c;
  pos.z = fVar2;
  stack0xfffffff8 = (undefined4)((ulonglong)_puStack_c >> 0x20);
  pos.x = (float)puStack_1;
  pos.y = (float)stack0xfffffff8;
  _puStack_c = uVar5;
  pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff7c,pos,q,*pVVar3,(MethodInfo *)0x0);
  uVar7 = pMVar6->m00;
  uVar8 = pMVar6->m10;
  uVar9 = pMVar6->m20;
  uVar10 = pMVar6->m30;
  uVar11 = pMVar6->m01;
  matrix.m01 = (float)uVar11;
  matrix.m30 = (float)uVar10;
  matrix.m20 = (float)uVar9;
  matrix.m10 = (float)uVar8;
  matrix.m00 = (float)uVar7;
  VStack_4.x = pMVar6->m11;
  VStack_4.y = pMVar6->m21;
  VStack_4.z = pMVar6->m31;
  fStack_12 = pMVar6->m02;
  fStack_13 = pMVar6->m12;
  puStack_1 = (undefined *)pMVar6->m22;
  unique0x10000601 = pMVar6->m32;
  fVar2 = pMVar6->m03;
  fVar14 = pMVar6->m13;
  fVar15 = pMVar6->m23;
  fVar16 = pMVar6->m33;
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_01 != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitSphere(this_01,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uVar5 = _puStack_c;
    stack0xfffffff8 = (undefined4)((ulonglong)_puStack_c >> 0x20);
    matrix.m11 = VStack_4.x;
    matrix.m21 = VStack_4.y;
    matrix.m31 = VStack_4.z;
    matrix.m02 = fStack_12;
    matrix.m12 = fStack_13;
    matrix.m22 = (float)puStack_1;
    matrix.m32 = (float)stack0xfffffff8;
    matrix.m03 = fVar2;
    matrix.m13 = fVar14;
    matrix.m23 = fVar15;
    matrix.m33 = fVar16;
    _puStack_c = uVar5;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    pSVar17 = (this->fields)._children;
    uVar18 = 0;
    if (pSVar17 != (SphereTreeNode_1_System_Object___Array *)0x0) {
      ppSVar19 = pSVar17->vector;
      while( true ) {
        if ((int)pSVar17->max_length <= (int)uVar18) {
          return;
        }
        if (pSVar17->max_length <= uVar18) break;
        this_00 = *ppSVar19;
        if (this_00 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
        _puStack_c = CONCAT44(this_00,&UNK_?);
        SphereTreeNode_1_System_Object__DebugDraw(this_00,method->klass->rgctx_data[10].method);
        uVar18 = uVar18 + 1;
        ppSVar19 = ppSVar19 + 1;
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

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
               (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields)._numChildren != 0) {
    if (this == (SphereTreeNode_1_System_Object_ *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    do {
      pSVar2 = (this->fields)._children;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
      if (pSVar2->max_length == 0) goto code_?;
      pSVar3 = pSVar2->vector[0];
      if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
      uStack_4._0_4_ = (pSVar3->fields)._sphere._center.x;
      uStack_4._4_4_ = (pSVar3->fields)._sphere._center.y;
      fStack_5 = (pSVar3->fields)._sphere._center.z;
      if (pSVar2->max_length < 2) goto code_?;
      if (pSVar2->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
        if (pSVar2->max_length < 2) goto code_?;
        pSVar3 = pSVar2->vector[1];
        if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
        uVar6 = (pSVar3->fields)._sphere._center.x;
        uVar7 = (pSVar3->fields)._sphere._center.y;
        fStack_5 = (pSVar3->fields)._sphere._center.z + fStack_5;
        uStack_4 = CONCAT44((float)uVar7 + uStack_4._4_4_,(float)uVar6 + (float)uStack_4);
      }
      fVar8 = _UNK_? / (float)(this->fields)._numChildren;
      this_00 = &(this->fields)._sphere;
      (this_00->_center).x = (float)uStack_4 * fVar8;
      (this_00->_center).y = uStack_4._4_4_ * fVar8;
      (this->fields)._sphere._center.z = fStack_5 * fVar8;
      pSVar2 = (this->fields)._children;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
      if (pSVar2->max_length == 0) goto code_?;
      pSVar3 = pSVar2->vector[0];
      if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
      uVar9 = (pSVar3->fields)._sphere._center.x;
      uVar10 = (pSVar3->fields)._sphere._center.y;
      fStack_11 = (pSVar3->fields)._sphere._center.z - fStack_5 * fVar8;
      uStack_12 = CONCAT44((float)uVar10 - uStack_4._4_4_ * fVar8,
                           (float)uVar9 - (float)uStack_4 * fVar8);
      fVar13 = (float10)func_?(&uStack_12,0);
      pSVar2 = (this->fields)._children;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
      if (pSVar2->max_length == 0) goto code_?;
      if (pSVar2->vector[0] == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
      fStack_14 = (float)fVar13 + (pSVar2->vector[0]->fields)._sphere._radius;
      if (pSVar2->max_length < 2) goto code_?;
      fVar8 = fStack_14;
      if (pSVar2->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
        pSVar3 = pSVar2->vector[1];
        uVar15 = (pSVar3->fields)._sphere._center.x;
        uVar16 = (pSVar3->fields)._sphere._center.y;
        uVar17 = (this_00->_center).x;
        uVar18 = (this_00->_center).y;
        fStack_11 = (pSVar3->fields)._sphere._center.z - (this->fields)._sphere._center.z;
        uStack_12 = CONCAT44((float)uVar16 - (float)uVar18,(float)uVar15 - (float)uVar17);
        fVar13 = (float10)func_?(&uStack_12,0);
        pSVar2 = (this->fields)._children;
        if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
        if (pSVar2->max_length < 2) goto code_?;
        if (pSVar2->vector[1] == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
        fVar19 = (float)fVar13 + (pSVar2->vector[1]->fields)._sphere._radius;
        fVar8 = fStack_14;
        if (fStack_14 < fVar19) {
          fVar8 = fVar19;
        }
      }
      Sphere::Sphere_set_Radius(this_00,fVar8,(MethodInfo *)0x0);
      this = (this->fields)._parent;
    } while (this != (SphereTreeNode_1_System_Object_ *)0x0);
  }
  return;
}


/* Boolean IsOutsideParent() */

bool Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__IsOutsideParent
               (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._parent;
  if (pSVar1 == (SphereTreeNode_1_System_Object_ *)0x0) {
    return 0;
  }
  uStack_2._0_4_ = (this->fields)._sphere._center.x;
  uStack_2._4_4_ = (this->fields)._sphere._center.y;
  uVar3 = (pSVar1->fields)._sphere._center.x;
  uVar4 = (pSVar1->fields)._sphere._center.y;
  fStack_5 = (this->fields)._sphere._center.z - (pSVar1->fields)._sphere._center.z;
  uStack_6 = CONCAT44((float)uStack_2._4_4_ - (float)uVar4,
                       (float)(undefined4)uStack_2 - (float)uVar3);
  fStack_7 = fStack_5;
  fVar8 = (float10)func_?(&uStack_6,0);
  pSVar1 = (this->fields)._parent;
  if (pSVar1 != (SphereTreeNode_1_System_Object_ *)0x0) {
    fVar9 = (float)fVar8 + (this->fields)._sphere._radius;
    pfVar10 = &(pSVar1->fields)._sphere._radius;
    return *pfVar10 <= fVar9 && fVar9 != *pfVar10;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void SetParent(SphereTreeNode`1[System.Object]) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__SetParent
               (SphereTreeNode_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *newParent,
               MethodInfo *method)

{
  if (newParent == this) {
    return;
  }
  pSVar1 = (this->fields)._parent;
  ppSVar2 = &(this->fields)._parent;
  if (newParent == pSVar1) {
    return;
  }
  if (pSVar1 == (SphereTreeNode_1_System_Object_ *)0x0) {
code_?:
    if (newParent == (SphereTreeNode_1_System_Object_ *)0x0) {
      *ppSVar2 = (SphereTreeNode_1_System_Object_ *)0x0;
      func_?(ppSVar2,0);
      return;
    }
    *ppSVar2 = newParent;
    func_?(ppSVar2,newParent);
    pSVar1 = *ppSVar2;
    if (pSVar1 == (SphereTreeNode_1_System_Object_ *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    uVar3 = (pSVar1->fields)._numChildren;
    pSVar4 = (pSVar1->fields)._children;
    (pSVar1->fields)._numChildren = uVar3 + 1;
    if (pSVar4 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
    iVar5 = func_?(this,(pSVar4->klass->_0).element_class);
    if (iVar5 != 0) {
      if (uVar3 < pSVar4->max_length) {
        pSVar4->vector[uVar3] = this;
        func_?(pSVar4->vector + uVar3,this);
        return;
      }
      goto code_?;
    }
  }
  else {
    pSVar4 = (pSVar1->fields)._children;
    if (pSVar4 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
    if (pSVar4->max_length == 0) goto code_?;
    if (pSVar4->vector[0] != this) {
code_?:
      func_?(1,0);
      if (*ppSVar2 != (SphereTreeNode_1_System_Object_ *)0x0) {
        piVar6 = &((*ppSVar2)->fields)._numChildren;
        *piVar6 = *piVar6 + -1;
        *ppSVar2 = (SphereTreeNode_1_System_Object_ *)0x0;
        func_?(ppSVar2,0);
        goto code_?;
      }
      goto code_?;
    }
    if (pSVar4->max_length < 2) goto code_?;
    pSVar1 = pSVar4->vector[1];
    if ((pSVar1 == (SphereTreeNode_1_System_Object_ *)0x0) ||
       (iVar5 = func_?(pSVar1,(pSVar4->klass->_0).element_class), iVar5 != 0)) {
      func_?(0,pSVar1);
      if ((*ppSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) ||
         (((*ppSVar2)->fields)._children == (SphereTreeNode_1_System_Object___Array *)0x0))
      goto code_?;
      goto code_?;
    }
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
  }
  uVar7 = func_?(0);
  func_?(uVar7);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* SphereTreeNode`1[System.Object] StackPop() */

SphereTreeNode_1_System_Object_ *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__StackPop
          (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  pSVar1 = &this->fields;
  pSVar2 = pSVar1->_stackTop;
  if (pSVar2 != (SphereTreeNode_1_System_Object_ *)0x0) {
    pSVar3 = (pSVar2->fields)._stackPrevious;
    pSVar1->_stackTop = pSVar3;
    func_?(pSVar1,pSVar3);
    return pSVar2;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar2 = (SphereTreeNode_1_System_Object_ *)(*pcVar4)();
  return pSVar2;
}


/* Void StackPush(SphereTreeNode`1[System.Object]) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__StackPush
               (SphereTreeNode_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *node,
               MethodInfo *method)

{
  pSVar1 = &this->fields;
  pSVar2 = pSVar1->_stackTop;
  if (node != (SphereTreeNode_1_System_Object_ *)0x0) {
    ppSVar3 = &(node->fields)._stackPrevious;
    *ppSVar3 = pSVar2;
    func_?(ppSVar3,pSVar2);
    pSVar1->_stackTop = node;
    func_?(pSVar1,node);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SphereTreeNode`1[System.Object]() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object___ctor(SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data[3].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pSVar2 = (SphereTreeNode_1_System_Object___Array *)func_?(pIVar1,2);
  method_00 = (MethodInfo *)&(this->fields)._children;
  *(SphereTreeNode_1_System_Object___Array **)method_00 = pSVar2;
  func_?(method_00,pSVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar3 = 0.0;
  Sphere::Sphere__ctor
            ((Sphere *)&stack0xffffffec,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
             1.0,(MethodInfo *)0x0);
  (this->fields)._sphere._center.x = fVar3;
  (this->fields)._sphere._center.y = 0.0;
  (this->fields)._sphere._center.z = 0.0;
  (this->fields)._sphere._radius = 0.0;
  (this->fields)._data = (Object *)0x0;
  return;
}


/* SphereTreeNode`1[System.Object](Object, Sphere) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object___ctor_1
               (SphereTreeNode_1_System_Object_ *this,Object *data,Sphere sphere,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data[3].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pSVar2 = (SphereTreeNode_1_System_Object___Array *)func_?(pIVar1,2);
  method_00 = (MethodInfo *)&(this->fields)._children;
  *(SphereTreeNode_1_System_Object___Array **)method_00 = pSVar2;
  func_?(method_00,pSVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  ppOVar3 = &(this->fields)._data;
  (this->fields)._sphere._center.x = sphere._center.x;
  (this->fields)._sphere._center.y = sphere._center.y;
  (this->fields)._sphere._center.z = sphere._center.z;
  (this->fields)._sphere._radius = sphere._radius;
  *ppOVar3 = data;
  func_?(ppOVar3,data);
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
          SphereTreeNode_1_System_Object__get_Center
                    (Vector3 *__return_storage_ptr__,SphereTreeNode_1_System_Object_ *this,
                    MethodInfo *method)

{
  fVar1 = (this->fields)._sphere._center.y;
  fVar2 = (this->fields)._sphere._center.z;
  __return_storage_ptr__->x = (this->fields)._sphere._center.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Boolean get_IsLeaf() */

bool Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__get_IsLeaf
               (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  return (this->fields)._data != (Object *)0x0;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
      SphereTreeNode_1_System_Object__get_Radius
                (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  return (this->fields)._sphere._radius;
}


/* Sphere get_Sphere() */

Sphere * Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
         SphereTreeNode_1_System_Object__get_Sphere
                   (Sphere *__return_storage_ptr__,SphereTreeNode_1_System_Object_ *this,
                   MethodInfo *method)

{
  fVar1 = (this->fields)._sphere._center.y;
  fVar2 = (this->fields)._sphere._center.z;
  fVar3 = (this->fields)._sphere._radius;
  (__return_storage_ptr__->_center).x = (this->fields)._sphere._center.x;
  (__return_storage_ptr__->_center).y = fVar1;
  (__return_storage_ptr__->_center).z = fVar2;
  __return_storage_ptr__->_radius = fVar3;
  return __return_storage_ptr__;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__set_Center
               (SphereTreeNode_1_System_Object_ *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._sphere._center.x = value.x;
  (this->fields)._sphere._center.y = value.y;
  (this->fields)._sphere._center.z = value.z;
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__set_Radius
               (SphereTreeNode_1_System_Object_ *this,float value,MethodInfo *method)

{
  Sphere::Sphere_set_Radius(&(this->fields)._sphere,value,(MethodInfo *)0x0);
  return;
}


/* Void set_Sphere(Sphere) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__set_Sphere
               (SphereTreeNode_1_System_Object_ *this,Sphere value,MethodInfo *method)

{
  (this->fields)._sphere._center.x = value._center.x;
  (this->fields)._sphere._center.y = value._center.y;
  (this->fields)._sphere._center.z = value._center.z;
  (this->fields)._sphere._radius = value._radius;
  return;
}

