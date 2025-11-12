
/* SphereTreeNode`1[System.Object] AddNode(Object, Sphere) */

SphereTreeNode_1_System_Object_ *
Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__AddNode
          (SphereTree_1_System_Object_ *this,Object *nodeData,Sphere *sphere,MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  node = (SphereTreeNode_1_System_Object_ *)FUN_?(pvVar1);
  fStack_2 = (sphere->_center).x;
  fStack_3 = (sphere->_center).y;
  fStack_4 = (sphere->_center).z;
  fStack_5 = sphere->_radius;
  FUN_?(node,nodeData,&fStack_2,method->klass->rgctx_data[2].rgctxDataDummy);
  SphereTree_1_System_Object__InsertNode(this,node,method->klass->rgctx_data[5].method);
  return node;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__DebugDraw
               (SphereTree_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._24_8_ = &UNK_?;
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    LOCK();
    UNLOCK();
    auStack_1._24_8_ = &UNK_?;
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    LOCK();
    UNLOCK();
    auStack_1._24_8_ = &UNK_?;
    FUN_?(&StringLiteral__IsLit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).field_0x1c == 0) {
    auStack_1._24_8_ = &UNK_?;
    FUN_?();
  }
  auStack_1._24_8_ = &UNK_?;
  this_01 = (MaterialPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
  if (this_01 != (MaterialPool *)0x0) {
    auStack_1._24_8_ = &UNK_?;
    this_02 = MaterialPool::MaterialPool_get_GizmoSolidHandle(this_01,(MethodInfo *)0x0);
    if (this_02 != (Material *)0x0) {
      auStack_1._24_8_ = &UNK_?;
      name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                       (StringLiteral__IsLit,(MethodInfo *)0x0);
      auStack_1._24_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (this_02,name,0.0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        auStack_1._24_8_ = &UNK_?;
        FUN_?(&StringLiteral__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      CStack_2.r = _UNK_?;
      CStack_2.g = _UNK_?;
      CStack_2.b = _UNK_?;
      CStack_2.a = _UNK_?;
      auStack_1._24_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (this_02,StringLiteral__Color,&CStack_2,(MethodInfo *)0x0);
      auStack_1._24_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                (this_02,0,(MethodInfo *)0x0);
      pSVar3 = (this->fields)._root;
      if (pSVar3 != (SphereTreeNode_1_System_Object_ *)0x0) {
        pMVar4 = method->klass->rgctx_data[4].method;
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
        uVar5._0_4_ = (pSVar3->fields)._sphere._center.x;
        uVar5._4_4_ = (pSVar3->fields)._sphere._center.y;
        fVar6 = (pSVar3->fields)._sphere._center.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fStack_7 = (pSVar3->fields)._sphere._radius;
        uStack_8 = CONCAT44(fStack_7,fStack_7);
        pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
        uStack_10._0_4_ = (pQVar9->identityQuaternion).x;
        uStack_10._4_4_ = (pQVar9->identityQuaternion).y;
        uStack_11._0_4_ = (pQVar9->identityQuaternion).z;
        uStack_11._4_4_ = (pQVar9->identityQuaternion).w;
        auStack_12._0_4_ = 0.0;
        auStack_12._4_4_ = 0.0;
        auStack_12._8_4_ = 0.0;
        auStack_12._12_4_ = 0.0;
        auStack_12._16_4_ = 0.0;
        auStack_12._20_4_ = 0.0;
        puStack_13 = (undefined *)0x0;
        uStack_14._0_4_ = 0.0;
        uStack_14._4_4_ = 0.0;
        uStack_15._0_4_ = 0.0;
        uStack_15._4_4_ = 0.0;
        uStack_16._0_4_ = 0.0;
        uStack_16._4_4_ = 0.0;
        uStack_17._0_4_ = 0.0;
        uStack_17._4_4_ = 0.0;
        pcVar18 = pcRam_?;
        uStack_19 = uVar5;
        fStack_20 = fVar6;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcRam_? = pcVar18;
        (*pcRam_?)(&uStack_19,&uStack_10,&uStack_8);
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
          auStack_1._0_8_ = auStack_12._0_8_;
          auStack_1._8_8_ = auStack_12._8_8_;
          auStack_1._16_8_ = auStack_12._16_8_;
          auStack_1._24_8_ = puStack_13;
          auStack_1._32_4_ = (float)uStack_14;
          auStack_1._36_4_ = uStack_14._4_4_;
          auStack_1._40_4_ = (float)uStack_15;
          auStack_1._44_4_ = uStack_15._4_4_;
          auStack_1._48_4_ = (float)uStack_16;
          auStack_1._52_4_ = uStack_16._4_4_;
          auStack_1._56_4_ = (float)uStack_17;
          auStack_1._60_4_ = uStack_17._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                    (mesh,(Matrix4x4 *)auStack_1,-1,(MethodInfo *)0x0);
          pSVar21 = (pSVar3->fields)._children;
          uVar22 = 0;
          if (pSVar21 != (SphereTreeNode_1_System_Object___Array *)0x0) {
            ppSVar23 = pSVar21->vector;
            while( true ) {
              if ((int)pSVar21->max_length <= (int)uVar22) {
                return;
              }
              if ((uint)pSVar21->max_length <= uVar22) {
                FUN_?();
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              if (*ppSVar23 == (SphereTreeNode_1_System_Object_ *)0x0) break;
              SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__DebugDraw
                        (*ppSVar23,pMVar4->klass->rgctx_data[10].method);
              uVar22 = uVar22 + 1;
              ppSVar23 = ppSVar23 + 1;
            }
          }
        }
        FUN_?();
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
    }
  }
  auStack_1._24_8_ = &UNK_?;
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void InsertNode(SphereTreeNode`1[System.Object]) */

void Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__InsertNode
               (SphereTree_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *node,
               MethodInfo *method)

{
  pSVar1 = (this->fields)._root;
joined_?:
  this_00 = pSVar1;
  if (this_00 != (SphereTreeNode_1_System_Object_ *)0x0) {
    if ((this_00->fields)._data == (Object *)0x0) {
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
      pSVar2 = (this_00->fields)._children;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
      if ((int)pSVar2->max_length == 0) goto code_?;
      pSVar1 = pSVar2->vector[0];
      if ((node == (SphereTreeNode_1_System_Object_ *)0x0) ||
         (pSVar1 == (SphereTreeNode_1_System_Object_ *)0x0)) goto code_?;
      uVar3 = (node->fields)._sphere._center.x;
      uVar4 = (node->fields)._sphere._center.y;
      uStack_5._0_4_ = (pSVar1->fields)._sphere._center.x;
      uStack_5._4_4_ = (pSVar1->fields)._sphere._center.y;
      fStack_6 = (node->fields)._sphere._center.z - (pSVar1->fields)._sphere._center.z;
      uStack_7 = CONCAT44((float)uVar4 - (float)uStack_5._4_4_,
                           (float)uVar3 - (float)(undefined4)uStack_5);
      fVar8 = (float)FUN_?(&uStack_7);
      pSVar2 = (this_00->fields)._children;
      if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
      if ((uint)pSVar2->max_length < 2) goto code_?;
      if (pSVar2->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
        uVar9 = (node->fields)._sphere._center.x;
        uVar10 = (node->fields)._sphere._center.y;
        pSVar11 = pSVar2->vector[1];
        uStack_5._0_4_ = (pSVar11->fields)._sphere._center.x;
        uStack_5._4_4_ = (pSVar11->fields)._sphere._center.y;
        fStack_6 = (node->fields)._sphere._center.z - (pSVar11->fields)._sphere._center.z;
        uStack_7 = CONCAT44((float)uVar10 - (float)uStack_5._4_4_,
                             (float)uVar9 - (float)(undefined4)uStack_5);
        fVar12 = (float)FUN_?(&uStack_7);
        if (fVar12 < fVar8) {
          pSVar2 = (this_00->fields)._children;
          if (pSVar2 == (SphereTreeNode_1_System_Object___Array *)0x0) goto code_?;
          if ((uint)pSVar2->max_length < 2) {
code_?:
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pSVar1 = pSVar2->vector[1];
        }
      }
      goto joined_?;
    }
    pvVar14 = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar14 + 0x135) & 1) == 0) {
      pvVar14 = (void *)FUN_?(pvVar14);
    }
    pSVar1 = (SphereTreeNode_1_System_Object_ *)FUN_?(pvVar14);
    pvVar14 = (method->klass->rgctx_data[0x1f].method)->klass->rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar14 + 0x135) & 1) == 0) {
      pvVar14 = (void *)FUN_?(pvVar14);
    }
    pSVar2 = (SphereTreeNode_1_System_Object___Array *)FUN_?(pvVar14);
    bVar15 = iRam_? != 0;
    (pSVar1->fields)._children = pSVar2;
    if (bVar15) {
      uVar16 = (uint)((ulonglong)&(pSVar1->fields)._children >> 0xc);
      uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
      do {
        uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
        puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar18 == *puVar19;
        if (bVar15) {
          *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_5 = 0;
    pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar12 = (pVVar20->zeroVector).y;
    fVar8 = (pVVar20->zeroVector).z;
    bVar15 = iRam_? != 0;
    uStack_21 = CONCAT44(0x3f800000,fVar8);
    (pSVar1->fields)._sphere._center.x = (pVVar20->zeroVector).x;
    (pSVar1->fields)._sphere._center.y = fVar12;
    (pSVar1->fields)._sphere._center.z = fVar8;
    (pSVar1->fields)._sphere._radius = 1.0;
    (pSVar1->fields)._data = (Object *)0x0;
    if (bVar15) {
      uVar16 = (uint)((ulonglong)&(pSVar1->fields)._data >> 0xc);
      uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
      do {
        uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
        puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar18 == *puVar19;
        if (bVar15) {
          *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    fVar8 = (this_00->fields)._sphere._center.y;
    uVar22 = *(undefined8 *)&(this_00->fields)._sphere._center.z;
    (pSVar1->fields)._sphere._center.x = (this_00->fields)._sphere._center.x;
    (pSVar1->fields)._sphere._center.y = fVar8;
    *(undefined8 *)&(pSVar1->fields)._sphere._center.z = uVar22;
    pSVar11 = (this_00->fields)._parent;
    SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
              (this_00,(SphereTreeNode_1_System_Object_ *)0x0,method->klass->rgctx_data[7].method);
    SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
              (pSVar1,pSVar11,method->klass->rgctx_data[7].method);
    SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
              (this_00,pSVar1,method->klass->rgctx_data[7].method);
    if (node != (SphereTreeNode_1_System_Object_ *)0x0) {
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                (node,pSVar1,method->klass->rgctx_data[7].method);
      SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
                (pSVar1,method->klass->rgctx_data[9].method);
      if ((this_00 == (this->fields)._root) &&
         (bVar15 = iRam_? != 0, (this->fields)._root = pSVar1, bVar15)) {
        uVar16 = (uint)((ulonglong)&this->fields >> 0xc);
        uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
        do {
          uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
          puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
          LOCK();
          bVar15 = uVar18 == *puVar19;
          if (bVar15) {
            *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnNodeSphereUpdated(SphereTreeNode`1[System.Object]) */

void Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::
     SphereTree_1_System_Object__OnNodeSphereUpdated
               (SphereTree_1_System_Object_ *this,SphereTreeNode_1_System_Object_ *node,
               MethodInfo *method)

{
  if (node != (SphereTreeNode_1_System_Object_ *)0x0) {
    if (((node->fields)._data != (Object *)0x0) &&
       ((node->fields)._parent != (SphereTreeNode_1_System_Object_ *)0x0)) {
      uVar1 = (node->fields)._sphere._center.x;
      uVar2 = (node->fields)._sphere._center.y;
      pSVar3 = (node->fields)._parent;
      uVar4 = (pSVar3->fields)._sphere._center.x;
      uVar5 = (pSVar3->fields)._sphere._center.y;
      fStack_6 = (node->fields)._sphere._center.z - (pSVar3->fields)._sphere._center.z;
      uStack_7 = CONCAT44((float)uVar2 - (float)uVar5,(float)uVar1 - (float)uVar4);
      fVar8 = (float)FUN_?(&uStack_7);
      pSVar3 = (node->fields)._parent;
      if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
      fVar8 = fVar8 + (node->fields)._sphere._radius;
      pfVar9 = &(pSVar3->fields)._sphere._radius;
      if (*pfVar9 <= fVar8 && fVar8 != *pfVar9) {
        SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                  (node,(SphereTreeNode_1_System_Object_ *)0x0,method->klass->rgctx_data[7].method);
        if ((pSVar3->fields)._numChildren == 0) {
          SphereTree_1_System_Object__RemoveNode(this,pSVar3,method->klass->rgctx_data[0xc].method);
        }
        else {
          SphereTreeNode`1[System::Object]::
          SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
                    (pSVar3,method->klass->rgctx_data[9].method);
        }
        SphereTree_1_System_Object__InsertNode(this,node,method->klass->rgctx_data[5].method);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean OverlapBox(OBB, List`1[RTG.SphereTreeNode`1[System.Object]]) */

bool Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__OverlapBox
               (SphereTree_1_System_Object_ *this,OBB *box,
               List_1_RTG_SphereTreeNode_1_System_Object_ *nodes,MethodInfo *method)

{
  if (nodes != (List_1_RTG_SphereTreeNode_1_System_Object_ *)0x0) {
    piVar1 = &(nodes->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (nodes->fields)._size;
    (nodes->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(nodes->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((this->fields)._root == (SphereTreeNode_1_System_Object_ *)0x0) {
      return false;
    }
    FUN_?((this->fields)._root);
    pSVar2 = (this->fields)._root;
    uVar3 = VStack_4._0_8_;
    fVar5 = VStack_4.z;
    while (VStack_4._0_8_ = uVar3, VStack_4.z = fVar5,
          pSVar2 != (SphereTreeNode_1_System_Object_ *)0x0) {
      if ((pSVar2->fields)._stackTop == (SphereTreeNode_1_System_Object_ *)0x0) {
        return (nodes->fields)._size != 0;
      }
      pSVar2 = (this->fields)._root;
      if ((pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) ||
         (item = (pSVar2->fields)._stackTop, item == (SphereTreeNode_1_System_Object_ *)0x0))
      break;
      bVar6 = iRam_? != 0;
      (pSVar2->fields)._stackTop = (item->fields)._stackPrevious;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&pSVar2->fields >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      VStack_4.x = (item->fields)._sphere._center.x;
      VStack_4.y = (item->fields)._sphere._center.y;
      VStack_4.z = (item->fields)._sphere._center.z;
      if ((item->fields)._data == (Object *)0x0) {
        pVVar11 = OBB::OBB_GetClosestPoint(&VStack_12,box,&VStack_4,(MethodInfo *)0x0);
        uVar13 = (item->fields)._sphere._center.x;
        uVar14 = (item->fields)._sphere._center.y;
        uVar15 = pVVar11->x;
        fVar16 = pVVar11->y - (float)uVar14;
        fVar5 = pVVar11->z - (item->fields)._sphere._center.z;
        fVar17 = (item->fields)._sphere._radius + 0.0;
        if (fVar16 * fVar16 + ((float)uVar15 - (float)uVar13) * ((float)uVar15 - (float)uVar13) +
            fVar5 * fVar5 <= fVar17 * fVar17) {
          pSVar18 = (item->fields)._children;
          if (pSVar18 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if ((int)pSVar18->max_length == 0) {
code_?:
            FUN_?();
            pcVar19 = (code *)swi(3);
            bVar20 = (*pcVar19)();
            return bVar20;
          }
          pSVar2 = pSVar18->vector[0];
          if (pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) break;
          VStack_21.x = (pSVar2->fields)._sphere._center.x;
          VStack_21.y = (pSVar2->fields)._sphere._center.y;
          VStack_21.z = (pSVar2->fields)._sphere._center.z;
          pVVar11 = OBB::OBB_GetClosestPoint(&VStack_22,box,&VStack_21,(MethodInfo *)0x0);
          pSVar18 = (item->fields)._children;
          if (pSVar18 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if ((int)pSVar18->max_length == 0) goto code_?;
          pSVar2 = pSVar18->vector[0];
          if (pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) break;
          uVar23 = (pSVar2->fields)._sphere._center.x;
          uVar24 = (pSVar2->fields)._sphere._center.y;
          uVar25 = pVVar11->x;
          fVar17 = (pSVar2->fields)._sphere._radius + 0.0;
          fVar5 = pVVar11->z - (pSVar2->fields)._sphere._center.z;
          fVar16 = pVVar11->y - (float)uVar24;
          if (fVar16 * fVar16 + ((float)uVar25 - (float)uVar23) * ((float)uVar25 - (float)uVar23) +
              fVar5 * fVar5 <= fVar17 * fVar17) {
            if (pSVar18 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if ((int)pSVar18->max_length == 0) goto code_?;
            pSVar2 = (this->fields)._root;
            if (pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            FUN_?(pSVar2,pSVar18->vector[0]);
          }
          pSVar18 = (item->fields)._children;
          if (pSVar18 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if ((uint)pSVar18->max_length < 2) goto code_?;
          if (pSVar18->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
            pSVar2 = pSVar18->vector[1];
            VStack_26.x = (pSVar2->fields)._sphere._center.x;
            VStack_26.y = (pSVar2->fields)._sphere._center.y;
            VStack_26.z = (pSVar2->fields)._sphere._center.z;
            pVVar11 = OBB::OBB_GetClosestPoint(aVStack_27,box,&VStack_26,(MethodInfo *)0x0);
            pSVar18 = (item->fields)._children;
            if (pSVar18 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if ((uint)pSVar18->max_length < 2) goto code_?;
            pSVar2 = pSVar18->vector[1];
            if (pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            uVar28 = (pSVar2->fields)._sphere._center.x;
            uVar29 = (pSVar2->fields)._sphere._center.y;
            uVar30 = pVVar11->x;
            fVar17 = (pSVar2->fields)._sphere._radius + 0.0;
            fVar5 = pVVar11->z - (pSVar2->fields)._sphere._center.z;
            fVar16 = pVVar11->y - (float)uVar29;
            if (fVar16 * fVar16 + ((float)uVar30 - (float)uVar28) * ((float)uVar30 - (float)uVar28) +
                fVar5 * fVar5 <= fVar17 * fVar17) {
              if (pSVar18 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
              if ((uint)pSVar18->max_length < 2) goto code_?;
              pSVar2 = (this->fields)._root;
              if (pSVar2 == (SphereTreeNode_1_System_Object_ *)0x0) break;
              FUN_?(pSVar2,pSVar18->vector[1]);
            }
          }
        }
      }
      else {
        VStack_31._0_8_ = VStack_4._0_8_;
        VStack_31.z = VStack_4.z;
        VStack_4._0_8_ = uVar3;
        VStack_4.z = fVar5;
        pVVar11 = OBB::OBB_GetClosestPoint(&VStack_32,box,&VStack_31,(MethodInfo *)0x0);
        uVar33 = (item->fields)._sphere._center.x;
        uVar34 = (item->fields)._sphere._center.y;
        uVar35 = pVVar11->x;
        fVar16 = pVVar11->y - (float)uVar34;
        fVar5 = pVVar11->z - (item->fields)._sphere._center.z;
        fVar17 = (item->fields)._sphere._radius + 0.0;
        if (fVar16 * fVar16 + ((float)uVar35 - (float)uVar33) * ((float)uVar35 - (float)uVar33) +
            fVar5 * fVar5 <= fVar17 * fVar17) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)nodes,(Object *)item,
                     method->klass->rgctx_data[0x1c].method);
        }
      }
      uVar3 = VStack_4._0_8_;
      fVar5 = VStack_4.z;
      pSVar2 = (this->fields)._root;
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
}


/* Boolean RaycastAll(Ray, List`1[RTG.SphereTreeNodeRayHit`1[System.Object]]) */

bool Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object__RaycastAll
               (SphereTree_1_System_Object_ *this,Ray *ray,
               List_1_RTG_SphereTreeNodeRayHit_1_System_Object_ *hits,MethodInfo *method)

{
  fStack_1 = 0.0;
  if (hits != (List_1_RTG_SphereTreeNodeRayHit_1_System_Object_ *)0x0) {
    piVar2 = &(hits->fields)._version;
    *piVar2 = *piVar2 + 1;
    length = (hits->fields)._size;
    (hits->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((this->fields)._root == (SphereTreeNode_1_System_Object_ *)0x0) {
      return 0;
    }
    FUN_?((this->fields)._root);
    pSVar3 = (this->fields)._root;
    uVar4 = VStack_5._0_8_;
    while (VStack_5._0_8_ = uVar4, pSVar3 != (SphereTreeNode_1_System_Object_ *)0x0) {
      if ((pSVar3->fields)._stackTop == (SphereTreeNode_1_System_Object_ *)0x0) {
        return (hits->fields)._size != 0;
      }
      pSVar3 = (this->fields)._root;
      if ((pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) ||
         (hitNode = (pSVar3->fields)._stackTop, hitNode == (SphereTreeNode_1_System_Object_ *)0x0))
      break;
      bVar6 = iRam_? != 0;
      (pSVar3->fields)._stackTop = (hitNode->fields)._stackPrevious;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&pSVar3->fields >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      sphereRadius = (hitNode->fields)._sphere._radius;
      aRStack_11[0].m_Direction.y = (ray->m_Direction).y;
      aRStack_11[0].m_Direction.z = (ray->m_Direction).z;
      VStack_5.x = (hitNode->fields)._sphere._center.x;
      VStack_5.y = (hitNode->fields)._sphere._center.y;
      afStackX_18[0] = 0.0;
      if ((_Il2CppFullySharedGenericType *)(hitNode->fields)._data ==
          (_Il2CppFullySharedGenericType *)0x0) {
        aRStack_11[0].m_Origin.x = (ray->m_Origin).x;
        aRStack_11[0].m_Origin.y = (ray->m_Origin).y;
        aRStack_11[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
        afStack_12[0] = 0.0;
        VStack_5.z = (hitNode->fields)._sphere._center.z;
        bVar13 = SphereMath::SphereMath_Raycast_1
                          (aRStack_11,afStack_12,&VStack_5,sphereRadius,(SphereEpsilon)0x0,
                           (MethodInfo *)0x0);
        if (bVar13 != 0) {
          pSVar14 = (hitNode->fields)._children;
          if (pSVar14 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if ((int)pSVar14->max_length == 0) {
code_?:
            FUN_?();
            pcVar15 = (code *)swi(3);
            bVar13 = (*pcVar15)();
            return bVar13;
          }
          pSVar3 = pSVar14->vector[0];
          if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) break;
          VStack_16.x = (pSVar3->fields)._sphere._center.x;
          VStack_16.y = (pSVar3->fields)._sphere._center.y;
          VStack_16.z = (pSVar3->fields)._sphere._center.z;
          aRStack_11[0].m_Direction.y = (ray->m_Direction).y;
          aRStack_11[0].m_Direction.z = (ray->m_Direction).z;
          aRStack_11[0].m_Origin.x = (ray->m_Origin).x;
          aRStack_11[0].m_Origin.y = (ray->m_Origin).y;
          aRStack_11[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
          afStackX_18[0] = 0.0;
          bVar13 = SphereMath::SphereMath_Raycast_1
                            (aRStack_11,afStackX_18,&VStack_16,
                             (((hitNode->fields)._children)->vector[0]->fields)._sphere._radius,
                             (SphereEpsilon)0x0,(MethodInfo *)0x0);
          if (bVar13 != 0) {
            pSVar14 = (hitNode->fields)._children;
            if (pSVar14 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
            if ((int)pSVar14->max_length == 0) goto code_?;
            pSVar3 = (this->fields)._root;
            if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) break;
            FUN_?(pSVar3,pSVar14->vector[0]);
          }
          pSVar14 = (hitNode->fields)._children;
          if (pSVar14 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
          if ((uint)pSVar14->max_length < 2) goto code_?;
          if (pSVar14->vector[1] != (SphereTreeNode_1_System_Object_ *)0x0) {
            pSVar3 = pSVar14->vector[1];
            aRStack_11[0].m_Direction.y = (ray->m_Direction).y;
            aRStack_11[0].m_Direction.z = (ray->m_Direction).z;
            afStackX_18[0] = 0.0;
            VStack_17.x = (pSVar3->fields)._sphere._center.x;
            VStack_17.y = (pSVar3->fields)._sphere._center.y;
            VStack_17.z = (pSVar3->fields)._sphere._center.z;
            aRStack_11[0].m_Origin.x = (ray->m_Origin).x;
            aRStack_11[0].m_Origin.y = (ray->m_Origin).y;
            aRStack_11[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
            bVar13 = SphereMath::SphereMath_Raycast_1
                              (aRStack_11,afStackX_18,&VStack_17,
                               (((hitNode->fields)._children)->vector[1]->fields)._sphere._radius,
                               (SphereEpsilon)0x0,(MethodInfo *)0x0);
            if (bVar13 != 0) {
              pSVar14 = (hitNode->fields)._children;
              if (pSVar14 == (SphereTreeNode_1_System_Object___Array *)0x0) break;
              if ((uint)pSVar14->max_length < 2) goto code_?;
              pSVar3 = (this->fields)._root;
              if (pSVar3 == (SphereTreeNode_1_System_Object_ *)0x0) break;
              FUN_?(pSVar3,pSVar14->vector[1]);
            }
          }
        }
      }
      else {
        VStack_18.z = (hitNode->fields)._sphere._center.z;
        aRStack_11[0].m_Origin.x = (ray->m_Origin).x;
        aRStack_11[0].m_Origin.y = (ray->m_Origin).y;
        aRStack_11[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
        VStack_18._0_8_ = VStack_5._0_8_;
        VStack_5._0_8_ = uVar4;
        bVar13 = SphereMath::SphereMath_Raycast_1
                          (aRStack_11,&fStack_1,&VStack_18,sphereRadius,(SphereEpsilon)0x0,
                           (MethodInfo *)0x0);
        if (bVar13 != 0) {
          pvVar19 = method->klass->rgctx_data[0x15].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar19 + 0x135) & 1) == 0) {
            pvVar19 = (void *)FUN_?(pvVar19);
          }
          this_00 = (SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    FUN_?(pvVar19);
          aRStack_11[0].m_Origin.x = (ray->m_Origin).x;
          aRStack_11[0].m_Origin.y = (ray->m_Origin).y;
          aRStack_11[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
          aRStack_11[0].m_Direction.y = (ray->m_Direction).y;
          aRStack_11[0].m_Direction.z = (ray->m_Direction).z;
          SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
          SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (this_00,aRStack_11,
                     (SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)hitNode
                     ,fStack_1,method->klass->rgctx_data[0x16].method);
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)hits,(Object *)this_00,
                     method->klass->rgctx_data[0x17].method);
        }
      }
      uVar4 = VStack_5._0_8_;
      pSVar3 = (this->fields)._root;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar13 = (*pcVar15)();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SphereTree`1[System.Object]() */

void Assembly-CSharp.dll::RTG::SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
               (SphereTree_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_2._0_4_ = (pVVar1->zeroVector).x;
  uStack_2._4_4_ = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  pvVar4 = method->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
    pvVar4 = (void *)FUN_?(pvVar4);
  }
  pSVar5 = (SphereTreeNode_1_System_Object_ *)FUN_?(pvVar4);
  uStack_6 = (undefined4)uStack_2;
  uStack_7 = uStack_2._4_4_;
  uStack_8 = 0x3f800000;
  fStack_9 = fVar3;
  FUN_?(pSVar5,0,&uStack_6,method->klass->rgctx_data[2].rgctxDataDummy);
  bVar10 = iRam_? != 0;
  (this->fields)._root = pSVar5;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}

