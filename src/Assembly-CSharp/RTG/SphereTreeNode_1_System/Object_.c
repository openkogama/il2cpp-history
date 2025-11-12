
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
  if (pSVar1 != (SphereTreeNode_1_System_Object___Array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (SphereTreeNode_1_System_Object_ *)(*pcVar2)();
      return pSVar3;
    }
    pSVar3 = pSVar1->vector[0];
    if ((node != (SphereTreeNode_1_System_Object_ *)0x0) &&
       (pSVar3 != (SphereTreeNode_1_System_Object_ *)0x0)) {
      uVar4 = (node->fields)._sphere._center.x;
      uVar5 = (node->fields)._sphere._center.y;
      uVar6 = (pSVar3->fields)._sphere._center.x;
      uVar7 = (pSVar3->fields)._sphere._center.y;
      fStack_8 = (node->fields)._sphere._center.z - (pSVar3->fields)._sphere._center.z;
      uStack_9 = CONCAT44((float)uVar5 - (float)uVar7,(float)uVar4 - (float)uVar6);
      fVar10 = (float)FUN_?(&uStack_9);
      pSVar1 = (this->fields)._children;
      if (pSVar1 != (SphereTreeNode_1_System_Object___Array *)0x0) {
        if (1 < (uint)pSVar1->max_length) {
          if (pSVar1->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
            pSVar11 = pSVar1->vector[1];
            uVar12 = (node->fields)._sphere._center.x;
            uVar13 = (pSVar11->fields)._sphere._center.x;
            uVar14 = (pSVar11->fields)._sphere._center.y;
            fStack_8 = (node->fields)._sphere._center.z - (pSVar11->fields)._sphere._center.z;
            uStack_9 = CONCAT44((node->fields)._sphere._center.y - (float)uVar14,
                                 (float)uVar12 - (float)uVar13);
            fVar15 = (float)FUN_?(&uStack_9);
            if (fVar15 < fVar10) {
              pSVar1 = (this->fields)._children;
              if (pSVar1 == (SphereTreeNode_1_System_Object___Array *)0x0)
              goto code_?;
              if ((uint)pSVar1->max_length < 2) goto DAT_?;
              pSVar3 = pSVar1->vector[1];
            }
          }
          return pSVar3;
        }
        goto DAT_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (SphereTreeNode_1_System_Object_ *)(*pcVar2)();
  return pSVar3;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__DebugDraw
               (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

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
  uVar1._0_4_ = (this->fields)._sphere._center.x;
  uVar1._4_4_ = (this->fields)._sphere._center.y;
  fVar2 = (this->fields)._sphere._center.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_3 = (this->fields)._sphere._radius;
  uStack_4 = CONCAT44(fStack_3,fStack_3);
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uStack_6._0_4_ = (pQVar5->identityQuaternion).x;
  uStack_6._4_4_ = (pQVar5->identityQuaternion).y;
  uStack_7._0_4_ = (pQVar5->identityQuaternion).z;
  uStack_7._4_4_ = (pQVar5->identityQuaternion).w;
  MStack_8.m00 = 0.0;
  MStack_8.m10 = 0.0;
  MStack_8.m20 = 0.0;
  MStack_8.m30 = 0.0;
  MStack_8.m01 = 0.0;
  MStack_8.m11 = 0.0;
  MStack_8.m21 = 0.0;
  MStack_8.m31 = 0.0;
  MStack_8.m02 = 0.0;
  MStack_8.m12 = 0.0;
  MStack_8.m22 = 0.0;
  MStack_8.m32 = 0.0;
  MStack_8.m03 = 0.0;
  MStack_8.m13 = 0.0;
  MStack_8.m23 = 0.0;
  MStack_8.m33 = 0.0;
  pcVar9 = pcRam_?;
  uStack_10 = uVar1;
  fStack_11 = fVar2;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(&uStack_10,&uStack_6,&uStack_4);
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
    MStack_12.m00 = MStack_8.m00;
    MStack_12.m10 = MStack_8.m10;
    MStack_12.m20 = MStack_8.m20;
    MStack_12.m30 = MStack_8.m30;
    MStack_12.m01 = MStack_8.m01;
    MStack_12.m11 = MStack_8.m11;
    MStack_12.m21 = MStack_8.m21;
    MStack_12.m31 = MStack_8.m31;
    MStack_12.m02 = MStack_8.m02;
    MStack_12.m12 = MStack_8.m12;
    MStack_12.m22 = MStack_8.m22;
    MStack_12.m32 = MStack_8.m32;
    MStack_12.m03 = MStack_8.m03;
    MStack_12.m13 = MStack_8.m13;
    MStack_12.m23 = MStack_8.m23;
    MStack_12.m33 = MStack_8.m33;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
              (mesh,&MStack_12,-1,(MethodInfo *)0x0);
    pSVar13 = (this->fields)._children;
    uVar14 = 0;
    if (pSVar13 != (SphereTreeNode_1_System_Object___Array *)0x0) {
      ppSVar15 = pSVar13->vector;
      while( true ) {
        if ((int)pSVar13->max_length <= (int)uVar14) {
          return;
        }
        if ((uint)pSVar13->max_length <= uVar14) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*ppSVar15 == (SphereTreeNode_1_System_Object_ *)0x0) break;
        SphereTreeNode_1_System_Object__DebugDraw(*ppSVar15,method->klass->rgctx_data[10].method);
        uVar14 = uVar14 + 1;
        ppSVar15 = ppSVar15 + 1;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void EncapsulateChildrenBottomUp() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
               (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if ((this->fields)._numChildren != 0) {
    do {
      pSVar2 = (this->fields)._children;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto DAT_?;
      if ((int)pSVar2->max_length == 0) goto code_?;
      pSVar3 = pSVar2->vector[0];
      if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar2 = (this->fields)._children;
      uStack_5._0_4_ = (pSVar3->fields)._sphere._center.x;
      uStack_5._4_4_ = (pSVar3->fields)._sphere._center.y;
      fVar6 = (pSVar3->fields)._sphere._center.z;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto DAT_?;
      if ((uint)pSVar2->max_length < 2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pSVar2->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
        pSVar7 = pSVar2->vector[1];
        uVar8 = (pSVar7->fields)._sphere._center.x;
        fVar6 = (pSVar7->fields)._sphere._center.z + (pSVar3->fields)._sphere._center.z;
        uStack_5 = CONCAT44((pSVar7->fields)._sphere._center.y + uStack_5._4_4_,
                             (float)uVar8 + (float)uStack_5);
      }
      fVar9 = fVar1 / (float)(this->fields)._numChildren;
      (this->fields)._sphere._center.x = (float)uStack_5 * fVar9;
      (this->fields)._sphere._center.y = uStack_5._4_4_ * fVar9;
      (this->fields)._sphere._center.z = fVar6 * fVar9;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto DAT_?;
      if ((int)pSVar2->max_length == 0) goto code_?;
      pSVar3 = pSVar2->vector[0];
      if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) goto DAT_?;
      uVar10 = (pSVar3->fields)._sphere._center.x;
      fStack_11 = (pSVar3->fields)._sphere._center.z - fVar6 * fVar9;
      uStack_12 = CONCAT44((pSVar3->fields)._sphere._center.y - uStack_5._4_4_ * fVar9,
                           (float)uVar10 - (float)uStack_5 * fVar9);
      fVar6 = (float)FUN_?(&uStack_12);
      pSVar2 = (this->fields)._children;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto DAT_?;
      if ((int)pSVar2->max_length == 0) goto code_?;
      if (pSVar2->vector[0] == (SphereTreeNode_1_System_Object_ *)0x0) goto DAT_?;
      fVar6 = fVar6 + (pSVar2->vector[0]->fields)._sphere._radius;
      pSVar2 = (this->fields)._children;
      if ((uint)pSVar2->max_length < 2) goto code_?;
      if (pSVar2->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
        pSVar3 = pSVar2->vector[1];
        uVar13 = (this->fields)._sphere._center.x;
        uVar14 = (this->fields)._sphere._center.y;
        uVar15 = (pSVar3->fields)._sphere._center.x;
        fStack_11 = (pSVar3->fields)._sphere._center.z - (this->fields)._sphere._center.z;
        uStack_12 = CONCAT44((pSVar3->fields)._sphere._center.y - (float)uVar14,
                             (float)uVar15 - (float)uVar13);
        fVar9 = (float)FUN_?(&uStack_12);
        pSVar2 = (this->fields)._children;
        if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto DAT_?;
        if ((uint)pSVar2->max_length < 2) goto code_?;
        if (pSVar2->vector[1] == (SphereTreeNode_1_System_Object_ *)0x0) goto DAT_?;
        fVar9 = fVar9 + (pSVar2->vector[1]->fields)._sphere._radius;
        if (fVar6 < fVar9) {
          fVar6 = fVar9;
        }
      }
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      (this->fields)._sphere._radius = fVar6;
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
  if ((this->fields)._parent == (SphereTreeNode_1_System_Object_ *)0x0) {
    return 0;
  }
  uVar1 = (this->fields)._sphere._center.x;
  uVar2 = (this->fields)._sphere._center.y;
  pSVar3 = (this->fields)._parent;
  uVar4 = (pSVar3->fields)._sphere._center.x;
  uVar5 = (pSVar3->fields)._sphere._center.y;
  fStack_6 = (this->fields)._sphere._center.z - (pSVar3->fields)._sphere._center.z;
  uStack_7 = CONCAT44((float)uVar2 - (float)uVar5,(float)uVar1 - (float)uVar4);
  fVar8 = (float)FUN_?(&uStack_7);
  pSVar3 = (this->fields)._parent;
  if (pSVar3 != (SphereTreeNode_1_System_Object_ *)0x0) {
    fVar8 = fVar8 + (this->fields)._sphere._radius;
    pfVar9 = &(pSVar3->fields)._sphere._radius;
    return *pfVar9 <= fVar8 && fVar8 != *pfVar9;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void SetParent(SphereTreeNode`1[System.Object]) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__SetParent
               (SphereTreeNode_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *newParent,
               MethodInfo *method)

{
  if ((newParent != this) && (newParent != (this->fields)._parent)) {
    if ((this->fields)._parent != (SphereTreeNode_1_System_Object_ *)0x0) {
      pSVar1 = (this->fields)._parent;
      pSVar2 = (pSVar1->fields)._children;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
      if ((int)pSVar2->max_length == 0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pSVar2->vector[0] == this) {
        if (pSVar1 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
        pSVar4 = (pSVar1->fields)._children;
        if ((uint)pSVar4->max_length < 2) goto code_?;
        pSVar1 = pSVar4->vector[1];
        if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
        if ((pSVar1 != (SphereTreeNode_1_System_Object_ *)0x0) &&
           (lVar5 = FUN_?(pSVar1,(pSVar2->klass->_0).element_class), lVar5 == 0)) {
          uVar6 = FUN_?();
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FUN_?(pSVar2,0,pSVar1);
        pSVar1 = (this->fields)._parent;
        if ((pSVar1 == (SphereTreeNode_1_System_Object_ *)0x0) ||
           (pSVar2 = (pSVar1->fields)._children,
           pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0)) goto code_?;
      }
      FUN_?(pSVar2,1,0);
      pSVar1 = (this->fields)._parent;
      if (pSVar1 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
      piVar7 = &(pSVar1->fields)._numChildren;
      *piVar7 = *piVar7 + -1;
      (this->fields)._parent = (SphereTreeNode_1_System_Object_ *)0x0;
      func_?(&(this->fields)._parent);
    }
    ppSVar8 = &(this->fields)._parent;
    if (newParent != (SphereTreeNode_1_System_Object_ *)0x0) {
      (this->fields)._parent = newParent;
      func_?(ppSVar8);
      pSVar1 = (this->fields)._parent;
      if (pSVar1 != (SphereTreeNode_1_System_Object_ *)0x0) {
        pSVar9 = (this->fields)._parent;
        pSVar2 = (pSVar1->fields)._children;
        iVar10 = (pSVar9->fields)._numChildren;
        (pSVar9->fields)._numChildren = iVar10 + 1;
        if (pSVar2 != (SphereTreeNode_1_System_Object___Array *)0x0) {
          lVar5 = FUN_?(this,(pSVar2->klass->_0).element_class);
          if (lVar5 != 0) {
            FUN_?(pSVar2,(longlong)iVar10,this);
            return;
          }
          uVar6 = FUN_?();
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields)._parent = (SphereTreeNode_1_System_Object_ *)0x0;
    func_?(ppSVar8);
  }
  return;
}


/* SphereTreeNode`1[System.Object] StackPop() */

SphereTreeNode_1_System_Object_ *
Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__StackPop
          (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._stackTop;
  if (pSVar1 == (SphereTreeNode_1_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar1 = (SphereTreeNode_1_System_Object_ *)(*pcVar2)();
    return pSVar1;
  }
  bVar3 = iRam_? != 0;
  (this->fields)._stackTop = (pSVar1->fields)._stackPrevious;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return pSVar1;
}


/* Void StackPush(SphereTreeNode`1[System.Object]) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__StackPush
               (SphereTreeNode_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *node,
               MethodInfo *method)

{
  if (node == (SphereTreeNode_1_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (node->fields)._stackPrevious = (this->fields)._stackTop;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(node->fields)._stackPrevious >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  (this->fields)._stackTop = node;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* SphereTreeNode`1[System.Object]() */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object___ctor(SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pSVar2 = (SphereTreeNode_1_System_Object___Array *)FUN_?(pvVar1,2);
  bVar3 = iRam_? != 0;
  (this->fields)._children = pSVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._children >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  (this->fields)._sphere._center.x = (pVVar8->zeroVector).x;
  (this->fields)._sphere._center.y = fVar9;
  (this->fields)._sphere._center.z = fVar10;
  (this->fields)._sphere._radius = 1.0;
  (this->fields)._data = (Object *)0x0;
  return;
}


/* SphereTreeNode`1[System.Object](Object, Sphere) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object___ctor_1
               (SphereTreeNode_1_System_Object_ *this,Object *data,Sphere *sphere,MethodInfo *method
               )

{
  pvVar1 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pSVar2 = (SphereTreeNode_1_System_Object___Array *)FUN_?(pvVar1,2);
  (this->fields)._children = pSVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._children >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  (this->fields)._data = data;
  fVar9 = (sphere->_center).y;
  uVar10 = *(undefined8 *)&(sphere->_center).z;
  (this->fields)._sphere._center.x = (sphere->_center).x;
  (this->fields)._sphere._center.y = fVar9;
  *(undefined8 *)&(this->fields)._sphere._center.z = uVar10;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._data >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
          SphereTreeNode_1_System_Object__get_Center
                    (Vector3 *__return_storage_ptr__,SphereTreeNode_1_System_Object_ *this,
                    MethodInfo *method)

{
  fVar1 = (this->fields)._sphere._center.z;
  fVar2 = (this->fields)._sphere._center.y;
  __return_storage_ptr__->x = (this->fields)._sphere._center.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Boolean get_IsLeaf() */

bool Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__get_IsLeaf
               (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  return (this->fields)._data != (Object *)0x0;
}


/* Int32 get_NumChildren() */

int32_t Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
        SphereTreeNode_1_System_Object__get_NumChildren
                  (SphereTreeNode_1_System_Object_ *this,MethodInfo *method)

{
  return (this->fields)._numChildren;
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
  uVar2 = *(undefined8 *)&(this->fields)._sphere._center.z;
  (__return_storage_ptr__->_center).x = (this->fields)._sphere._center.x;
  (__return_storage_ptr__->_center).y = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->_center).z = uVar2;
  return __return_storage_ptr__;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__set_Center
               (SphereTreeNode_1_System_Object_ *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._sphere._center.x = value->x;
  (this->fields)._sphere._center.y = fVar1;
  (this->fields)._sphere._center.z = fVar2;
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__set_Radius
               (SphereTreeNode_1_System_Object_ *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._sphere._radius = fVar1;
  return;
}


/* Void set_Sphere(Sphere) */

void Assembly-CSharp.dll::RTG::SphereTreeNode`1[System::Object]::
     SphereTreeNode_1_System_Object__set_Sphere
               (SphereTreeNode_1_System_Object_ *this,Sphere *value,MethodInfo *method)

{
  fVar1 = (value->_center).y;
  uVar2 = *(undefined8 *)&(value->_center).z;
  (this->fields)._sphere._center.x = (value->_center).x;
  (this->fields)._sphere._center.y = fVar1;
  *(undefined8 *)&(this->fields)._sphere._center.z = uVar2;
  return;
}

