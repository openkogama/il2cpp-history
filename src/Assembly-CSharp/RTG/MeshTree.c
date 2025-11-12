
/* Void Build() */

void Assembly-CSharp.dll::RTG::MeshTree::MeshTree_Build(MeshTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__AddNode_RTG__MeshTriangle__RTG__Sphere_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isBuilt != 0) {
    return;
  }
  triangleIndex = 0;
  pRVar1 = (this->fields)._mesh;
  while (pRVar1 != (RTMesh *)0x0) {
    if ((pRVar1->fields)._numTriangles <= triangleIndex) {
      (this->fields)._isBuilt = 1;
      return;
    }
    pRVar1 = (this->fields)._mesh;
    if (pRVar1 == (RTMesh *)0x0) break;
    nodeData = RTMesh::RTMesh_GetTriangle(pRVar1,triangleIndex,(MethodInfo *)0x0);
    this_00 = (this->fields)._tree;
    if (nodeData == (MeshTriangle *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((nodeData->fields)._vertices == (Vector3__Array *)0x0) break;
    uVar2 = FUN_?();
    pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)
                 FUN_?(uVar2,TypeInfo__UnityEngine__Vector3);
    SStack_3._center.x = 0.0;
    SStack_3._center.y = 0.0;
    SStack_3._center.z = 0.0;
    SStack_3._radius = 0.0;
    Sphere::Sphere__ctor_2(&SStack_3,pointCloud,(MethodInfo *)0x0);
    if (this_00 == (SphereTree_1_MeshTriangle_ *)0x0) break;
    SphereTree`1[System::Object]::SphereTree_1_System_Object__AddNode
              ((SphereTree_1_System_Object_ *)this_00,(Object *)nodeData,&SStack_3,
               MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__AddNode_RTG__MeshTriangle__RTG__Sphere_
              );
    triangleIndex = triangleIndex + 1;
    pRVar1 = (this->fields)._mesh;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::MeshTree::MeshTree_DebugDraw(MeshTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__DebugDraw__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__DebugDraw__;
  pSVar2 = (this->fields)._tree;
  if (pSVar2 == (SphereTree_1_MeshTriangle_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    auStack_4._24_8_ = &UNK_?;
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    LOCK();
    UNLOCK();
    auStack_4._24_8_ = &UNK_?;
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    LOCK();
    UNLOCK();
    auStack_4._24_8_ = &UNK_?;
    FUN_?(&StringLiteral__IsLit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).field_0x1c == 0) {
    auStack_4._24_8_ = &UNK_?;
    FUN_?();
  }
  auStack_4._24_8_ = &UNK_?;
  this_01 = (MaterialPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
  if (this_01 != (MaterialPool *)0x0) {
    auStack_4._24_8_ = &UNK_?;
    this_02 = MaterialPool::MaterialPool_get_GizmoSolidHandle(this_01,(MethodInfo *)0x0);
    if (this_02 != (Material *)0x0) {
      auStack_4._24_8_ = &UNK_?;
      name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                       (StringLiteral__IsLit,(MethodInfo *)0x0);
      auStack_4._24_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (this_02,name,0.0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        auStack_4._24_8_ = &UNK_?;
        FUN_?(&StringLiteral__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      CStack_5.r = _UNK_?;
      CStack_5.g = _UNK_?;
      CStack_5.b = _UNK_?;
      CStack_5.a = _UNK_?;
      auStack_4._24_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (this_02,StringLiteral__Color,&CStack_5,(MethodInfo *)0x0);
      auStack_4._24_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                (this_02,0,(MethodInfo *)0x0);
      pSVar6 = (pSVar2->fields)._root;
      if (pSVar6 != (SphereTreeNode_1_MeshTriangle_ *)0x0) {
        pMVar1 = pMVar1->klass->rgctx_data[4].method;
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
        uVar7._0_4_ = (pSVar6->fields)._sphere._center.x;
        uVar7._4_4_ = (pSVar6->fields)._sphere._center.y;
        fVar8 = (pSVar6->fields)._sphere._center.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fStack_9 = (pSVar6->fields)._sphere._radius;
        uStack_10 = CONCAT44(fStack_9,fStack_9);
        pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
        uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
        uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
        uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
        uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
        auStack_14._0_4_ = 0.0;
        auStack_14._4_4_ = 0.0;
        auStack_14._8_4_ = 0.0;
        auStack_14._12_4_ = 0.0;
        auStack_14._16_4_ = 0.0;
        auStack_14._20_4_ = 0.0;
        puStack_15 = (undefined *)0x0;
        uStack_16._0_4_ = 0.0;
        uStack_16._4_4_ = 0.0;
        puStack_17 = (undefined *)0x0;
        uStack_18._0_4_ = 0.0;
        uStack_18._4_4_ = 0.0;
        uStack_19._0_4_ = 0.0;
        uStack_19._4_4_ = 0.0;
        pcVar3 = pcRam_?;
        uStack_20 = uVar7;
        fStack_21 = fVar8;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(&uStack_20,&uStack_12,&uStack_10);
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
          auStack_4._0_8_ = auStack_14._0_8_;
          auStack_4._8_8_ = auStack_14._8_8_;
          auStack_4._16_8_ = auStack_14._16_8_;
          auStack_4._24_8_ = puStack_15;
          auStack_4._32_4_ = (float)uStack_16;
          auStack_4._36_4_ = uStack_16._4_4_;
          puStack_22 = puStack_17;
          fStack_23 = (float)uStack_18;
          fStack_24 = uStack_18._4_4_;
          fStack_25 = (float)uStack_19;
          fStack_26 = uStack_19._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                    (mesh,(Matrix4x4 *)auStack_4,-1,(MethodInfo *)0x0);
          pSVar27 = (pSVar6->fields)._children;
          uVar28 = 0;
          if (pSVar27 != (SphereTreeNode_1_MeshTriangle___Array *)0x0) {
            ppSVar29 = pSVar27->vector;
            while( true ) {
              if ((int)pSVar27->max_length <= (int)uVar28) {
                return;
              }
              if ((uint)pSVar27->max_length <= uVar28) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*ppSVar29 == (SphereTreeNode_1_MeshTriangle_ *)0x0) break;
              SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__DebugDraw
                        ((SphereTreeNode_1_System_Object_ *)*ppSVar29,
                         pMVar1->klass->rgctx_data[10].method);
              uVar28 = uVar28 + 1;
              ppSVar29 = ppSVar29 + 1;
            }
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  auStack_4._24_8_ = &UNK_?;
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean OverlapModelVerts(OBB, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::MeshTree::MeshTree_OverlapModelVerts
               (MeshTree *this,OBB *modelOBB,List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTreeNode<RTG::MeshTriangle>__get_Data__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (verts != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar1 = &(verts->fields)._version;
    *piVar1 = *piVar1 + 1;
    (verts->fields)._size = 0;
    if ((this->fields)._isBuilt == 0) {
      MeshTree_Build(this,(MethodInfo *)0x0);
    }
    this_00 = (this->fields)._tree;
    if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
      OStack_2._size._0_8_ = *(undefined8 *)&modelOBB->_size;
      OStack_2._8_8_ = *(undefined8 *)&(modelOBB->_size).z;
      OStack_2._center.y = (modelOBB->_center).y;
      OStack_2._center.z = (modelOBB->_center).z;
      OStack_2._rotation.x = (modelOBB->_rotation).x;
      OStack_2._rotation.y = (modelOBB->_rotation).y;
      OStack_2._rotation.z = (modelOBB->_rotation).z;
      OStack_2._rotation.w = (modelOBB->_rotation).w;
      OStack_2._isValid = modelOBB->_isValid;
      OStack_2._41_3_ = *(undefined3 *)&modelOBB->field_0x29;
      bVar3 = SphereTree`1[System::Object]::SphereTree_1_System_Object__OverlapBox
                        ((SphereTree_1_System_Object_ *)this_00,&OStack_2,
                         (List_1_RTG_SphereTreeNode_1_System_Object_ *)(this->fields)._nodeBuffer,
                         MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>_
                        );
      if (bVar3 == 0) {
        return 0;
      }
      if ((this->fields)._vertexIndexSet != (HashSet_1_System_Int32_ *)0x0) {
        FUN_?();
        pLVar4 = (this->fields)._nodeBuffer;
        if (pLVar4 != (List_1_RTG_SphereTreeNode_1_MeshTriangle_ *)0x0) {
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&OStack_2 >> 0xc);
            puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar7 = *puVar6;
              LOCK();
              uVar8 = *puVar6;
              if (uVar7 == uVar8) {
                *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (uVar7 != uVar8);
          }
          OStack_2._8_8_ = (ulonglong)(uint)(pLVar4->fields)._version << 0x20;
          OStack_2._center.y = 0.0;
          OStack_2._center.z = 0.0;
          aLStack_9[0]._index = (int32_t)OStack_2._size.z;
          aLStack_9[0]._version = (int32_t)OStack_2._center.x;
          aLStack_9[0]._current = (Object *)0x0;
          uStack_10 = 0;
          pLStack_11 = aLStack_9;
          OStack_2._size._0_8_ = pLVar4;
          aLStack_9[0]._list = (List_1_System_Object_ *)pLVar4;
          while( true ) {
            bVar3 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (aLStack_9,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                              );
            if (bVar3 == 0) {
              return (verts->fields)._size != 0;
            }
            if (aLStack_9[0]._current == (Object *)0x0) break;
            if (aLStack_9[0]._current[3].klass == (Object__Class *)0x0) goto code_?;
            this_01 = (this->fields)._mesh;
            if (this_01 == (RTMesh *)0x0) goto code_?;
            pMVar12 = RTMesh::RTMesh_GetTriangle
                                (this_01,*(int32_t *)
                                          ((longlong)
                                           &((aLStack_9[0]._current[3].klass)->_0).byval_arg.data +
                                          4),(MethodInfo *)0x0);
            if (pMVar12 == (MeshTriangle *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((pMVar12->fields)._vertices == (Vector3__Array *)0x0) goto code_?;
            uVar13 = FUN_?();
            lVar14 = FUN_?(uVar13,TypeInfo__UnityEngine__Vector3);
            uVar5 = 0;
            if (lVar14 == 0) goto code_?;
            for (; (int)uVar5 < *(int *)(lVar14 + 0x18); uVar5 = uVar5 + 1) {
              pIVar15 = (pMVar12->fields)._vertIndices;
              if (pIVar15 == (Int32__Array *)0x0) goto code_?;
              if ((uint)pIVar15->max_length <= uVar5) goto code_?;
              item = pIVar15->vector[(int)uVar5];
              this_02 = (HashSet_1_System_Int32Enum_ *)(this->fields)._vertexIndexSet;
              if (this_02 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
              bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                      HashSet_1_System_Int32Enum__Contains
                                (this_02,item,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                );
              if (bVar3 == 0) {
                if (*(uint *)(lVar14 + 0x18) <= uVar5) goto code_?;
                uVar13 = *(undefined8 *)(lVar14 + 0x20 + (longlong)(int)uVar5 * 0xc);
                fVar16 = *(float *)(lVar14 + 0x28 + (longlong)(int)uVar5 * 0xc);
                if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                  FUN_?();
                }
                VStack_17.z = 0.0;
                VStack_17.x = 0.0;
                VStack_17.y = 0.0;
                OStack_2._size._0_8_ = *(undefined8 *)&modelOBB->_rotation;
                OStack_2._size.z = (modelOBB->_rotation).z;
                OStack_2._center.x = (modelOBB->_rotation).w;
                VStack_18.x = (modelOBB->_size).x;
                VStack_18.y = (modelOBB->_size).y;
                VStack_18.z = (modelOBB->_size).z;
                VStack_19.x = (modelOBB->_center).x;
                VStack_19.y = (modelOBB->_center).y;
                VStack_19.z = (modelOBB->_center).z;
                VStack_20._0_8_ = uVar13;
                VStack_20.z = fVar16;
                bVar3 = BoxMath::BoxMath_ContainsPoint
                                  (&VStack_20,&VStack_19,&VStack_18,(Quaternion *)&OStack_2,
                                   (BoxEpsilon *)&VStack_17,(MethodInfo *)0x0);
                if (bVar3 != 0) {
                  VStack_21._0_8_ = uVar13;
                  VStack_21.z = fVar16;
                  FUN_?(verts,&VStack_21,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                               );
                  this_03 = (this->fields)._vertexIndexSet;
                  if (this_03 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32__AddIfNotPresent
                            (this_03,item,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass
                             ->rgctx_data[0x15].method);
                }
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  bVar3 = (*pcVar22)();
  return bVar3;
}


/* Boolean OverlapVerts(OBB, MeshTransform, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::MeshTree::MeshTree_OverlapVerts
               (MeshTree *this,OBB *obb,MeshTransform *meshTransform,
               List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTreeNode<RTG::MeshTriangle>__get_Data__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (verts != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar1 = &(verts->fields)._version;
    *piVar1 = *piVar1 + 1;
    (verts->fields)._size = 0;
    if ((this->fields)._isBuilt == 0) {
      MeshTree_Build(this,(MethodInfo *)0x0);
    }
    if (meshTransform != (MeshTransform *)0x0) {
      auStack_2._0_4_ = (obb->_size).x;
      auStack_2._4_4_ = (obb->_size).y;
      uVar3 = *(undefined8 *)&(obb->_size).z;
      auStack_2._8_4_ = (undefined4)uVar3;
      auStack_2._12_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar4 = (obb->_center).y;
      uVar5 = (obb->_center).z;
      QStack_6.x = (obb->_rotation).x;
      QStack_6.y = (obb->_rotation).y;
      QStack_6.z = (obb->_rotation).z;
      QStack_6.w = (obb->_rotation).w;
      uStack_7._0_1_ = obb->_isValid;
      uStack_7._1_3_ = *(undefined3 *)&obb->field_0x29;
      auStack_2._16_4_ = uVar4;
      auStack_2._20_4_ = uVar5;
      pOVar8 = MeshTransform::MeshTransform_InverseTransformOBB
                          (aOStack_9,meshTransform,(OBB *)auStack_2,(MethodInfo *)0x0);
      auStack_2._0_4_ = (pOVar8->_size).x;
      auStack_2._4_4_ = (pOVar8->_size).y;
      uVar3 = *(undefined8 *)&(pOVar8->_size).z;
      auStack_2._8_4_ = (undefined4)uVar3;
      auStack_2._12_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar3._0_4_ = (pOVar8->_center).y;
      uVar3._4_4_ = (pOVar8->_center).z;
      QStack_6._0_8_ = *(undefined8 *)&pOVar8->_rotation;
      QStack_6.z = (pOVar8->_rotation).z;
      QStack_6.w = (pOVar8->_rotation).w;
      this_00 = (this->fields)._tree;
      auStack_2._16_4_ = (float)uVar3;
      auStack_2._20_4_ = uVar3._4_4_;
      if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
        auStack_10._0_8_ = *(undefined8 *)&pOVar8->_size;
        auStack_10._8_8_ = *(undefined8 *)&(pOVar8->_size).z;
        auStack_10._32_4_ = (pOVar8->_rotation).z;
        auStack_10._36_4_ = (pOVar8->_rotation).w;
        auStack_10[0x28] = pOVar8->_isValid;
        auStack_10._41_3_ = *(undefined3 *)&pOVar8->field_0x29;
        auStack_10._16_8_ = uVar3;
        auStack_10._24_8_ = QStack_6._0_8_;
        bVar11 = SphereTree`1[System::Object]::SphereTree_1_System_Object__OverlapBox
                           ((SphereTree_1_System_Object_ *)this_00,(OBB *)auStack_10,
                            (List_1_RTG_SphereTreeNode_1_System_Object_ *)(this->fields)._nodeBuffer
                            ,
                            MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>_
                           );
        if (bVar11 == 0) {
          return 0;
        }
        if ((this->fields)._vertexIndexSet != (HashSet_1_System_Int32_ *)0x0) {
          FUN_?();
          uVar12 = QStack_6._8_8_;
          uVar13 = QStack_6._0_8_;
          uVar3 = auStack_2._0_8_;
          pLVar14 = (this->fields)._nodeBuffer;
          if (pLVar14 != (List_1_RTG_SphereTreeNode_1_MeshTriangle_ *)0x0) {
            if (iRam_? != 0) {
              uVar15 = (uint)((ulonglong)auStack_10 >> 0xc);
              puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar17 = *puVar16;
                LOCK();
                uVar18 = *puVar16;
                if (uVar17 == uVar18) {
                  *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
                }
                UNLOCK();
              } while (uVar17 != uVar18);
            }
            auStack_10._8_8_ = (ulonglong)(uint)(pLVar14->fields)._version << 0x20;
            auStack_10._16_4_ = 0.0;
            auStack_10._20_4_ = 0.0;
            LStack_19._index = auStack_10._8_4_;
            LStack_19._version = auStack_10._12_4_;
            LStack_19._current = (Object *)0x0;
            uStack_20 = 0;
            pLStack_21 = &LStack_19;
            uVar22._4_4_ = (float)auStack_2._16_4_;
            uVar22._0_4_ = (float)auStack_2._12_4_;
            auStack_10._0_8_ = pLVar14;
            LStack_19._list = (List_1_System_Object_ *)pLVar14;
            while( true ) {
              bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (&LStack_19,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                                 );
              if (bVar11 == 0) {
                return (verts->fields)._size != 0;
              }
              if (LStack_19._current == (Object *)0x0) break;
              if (LStack_19._current[3].klass == (Object__Class *)0x0) goto code_?;
              this_01 = (this->fields)._mesh;
              if (this_01 == (RTMesh *)0x0) goto code_?;
              pMVar23 = RTMesh::RTMesh_GetTriangle
                                  (this_01,*(int32_t *)
                                            ((longlong)
                                             &((LStack_19._current[3].klass)->_0).byval_arg.data + 4
                                            ),(MethodInfo *)0x0);
              if (pMVar23 == (MeshTriangle *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((pMVar23->fields)._vertices == (Vector3__Array *)0x0) goto code_?;
              uVar24 = FUN_?();
              lVar25 = FUN_?(uVar24,TypeInfo__UnityEngine__Vector3);
              uVar15 = 0;
              if (lVar25 == 0) goto code_?;
              for (; (int)uVar15 < *(int *)(lVar25 + 0x18); uVar15 = uVar15 + 1) {
                pIVar26 = (pMVar23->fields)._vertIndices;
                if (pIVar26 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar26->max_length <= uVar15) goto code_?;
                item = pIVar26->vector[(int)uVar15];
                this_02 = (HashSet_1_System_Int32Enum_ *)(this->fields)._vertexIndexSet;
                if (this_02 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
                bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]
                         ::HashSet_1_System_Int32Enum__Contains
                                   (this_02,item,
                                    MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                   );
                if (bVar11 == 0) {
                  if (*(uint *)(lVar25 + 0x18) <= uVar15) goto code_?;
                  uVar24 = *(undefined8 *)(lVar25 + 0x20 + (longlong)(int)uVar15 * 0xc);
                  fVar27 = *(float *)(lVar25 + 0x28 + (longlong)(int)uVar15 * 0xc);
                  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  uVar28 = QStack_6._8_8_;
                  uVar29 = QStack_6._0_8_;
                  uVar30 = auStack_2._0_8_;
                  VStack_31.z = 0.0;
                  VStack_31.x = 0.0;
                  VStack_31.y = 0.0;
                  QStack_6.x = (float)uVar13;
                  QStack_6.y = SUB84(uVar13,4);
                  auStack_10._0_4_ = QStack_6.x;
                  auStack_10._4_4_ = QStack_6.y;
                  QStack_6.z = (float)uVar12;
                  QStack_6.w = SUB84(uVar12,4);
                  auStack_10._8_4_ = QStack_6.z;
                  auStack_10._12_4_ = QStack_6.w;
                  auStack_2._0_4_ = (undefined4)uVar3;
                  auStack_2._4_4_ = SUB84(uVar3,4);
                  VStack_32.x = (float)auStack_2._0_4_;
                  VStack_32.y = (float)auStack_2._4_4_;
                  VStack_32.z = (float)auStack_2._8_4_;
                  VStack_33.z = (float)auStack_2._20_4_;
                  auStack_2._0_8_ = uVar30;
                  QStack_6._0_8_ = uVar29;
                  QStack_6._8_8_ = uVar28;
                  VStack_33._0_8_ = uVar22;
                  VStack_34._0_8_ = uVar24;
                  VStack_34.z = fVar27;
                  bVar11 = BoxMath::BoxMath_ContainsPoint
                                     (&VStack_34,&VStack_33,&VStack_32,(Quaternion *)auStack_10,
                                      (BoxEpsilon *)&VStack_31,(MethodInfo *)0x0);
                  if (bVar11 != 0) {
                    VStack_35._0_8_ = uVar24;
                    VStack_35.z = fVar27;
                    pVVar36 = MeshTransform::MeshTransform_TransformPoint
                                        (&VStack_37,meshTransform,&VStack_35,(MethodInfo *)0x0);
                    uStack_38._0_4_ = pVVar36->x;
                    uStack_38._4_4_ = pVVar36->y;
                    fStack_39 = pVVar36->z;
                    FUN_?(verts,&uStack_38,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                 );
                    this_03 = (this->fields)._vertexIndexSet;
                    if (this_03 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
                    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                    HashSet_1_System_Int32__AddIfNotPresent
                              (this_03,item,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->
                               klass->rgctx_data[0x15].method);
                  }
                }
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar40 = (code *)swi(3);
  bVar11 = (*pcVar40)();
  return bVar11;
}


/* MeshRayHit RaycastClosest(Ray, Matrix4x4) */

MeshRayHit *
Assembly-CSharp.dll::RTG::MeshTree::MeshTree_RaycastClosest
          (MeshTree *this,Ray *ray,Matrix4x4 *meshTransform,MethodInfo *method)

{
  VStack_1._0_8_ = meshTransform;
  pRStack_2 = ray;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MeshRayHit);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTreeNodeRayHit<RTG::MeshTriangle>__get_HitNode__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTreeNode<RTG::MeshTriangle>__get_Data__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__RaycastAll_UnityEngine__Ray__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_3 = 0.0;
  MStack_4.m00 = 0.0;
  MStack_4.m10 = 0.0;
  MStack_4.m20 = 0.0;
  MStack_4.m30 = 0.0;
  MStack_4.m01 = 0.0;
  MStack_4.m11 = 0.0;
  MStack_4.m21 = 0.0;
  MStack_4.m31 = 0.0;
  MStack_4.m02 = 0.0;
  MStack_4.m12 = 0.0;
  MStack_4.m22 = 0.0;
  MStack_4.m32 = 0.0;
  MStack_4.m03 = 0.0;
  MStack_4.m13 = 0.0;
  MStack_4.m23 = 0.0;
  MStack_4.m33 = 0.0;
  if ((this->fields)._isBuilt == 0) {
    MeshTree_Build(this,(MethodInfo *)0x0);
  }
  MStack_4.m00 = meshTransform->m00;
  MStack_4.m10 = meshTransform->m10;
  MStack_4.m20 = meshTransform->m20;
  MStack_4.m30 = meshTransform->m30;
  MStack_4.m01 = meshTransform->m01;
  MStack_4.m11 = meshTransform->m11;
  MStack_4.m21 = meshTransform->m21;
  MStack_4.m31 = meshTransform->m31;
  MStack_4.m02 = meshTransform->m02;
  MStack_4.m12 = meshTransform->m12;
  MStack_4.m22 = meshTransform->m22;
  MStack_4.m32 = meshTransform->m32;
  MStack_4.m03 = meshTransform->m03;
  MStack_4.m13 = meshTransform->m13;
  MStack_4.m23 = meshTransform->m23;
  MStack_4.m33 = meshTransform->m33;
  RStack_5.m_Origin.x = (ray->m_Origin).x;
  RStack_5.m_Origin.y = (ray->m_Origin).y;
  RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  RStack_5.m_Direction.y = (ray->m_Direction).y;
  RStack_5.m_Direction.z = (ray->m_Direction).z;
  pRVar6 = RayEx::RayEx_InverseTransform
                      ((Ray *)&piStack_7,&RStack_5,&MStack_4,(MethodInfo *)0x0);
  piVar8 = *(int **)&pRVar6->m_Origin;
  uVar9._0_4_ = (pRVar6->m_Origin).x;
  uVar9._4_4_ = (pRVar6->m_Origin).y;
  RStack_5.m_Origin.x = (pRVar6->m_Origin).x;
  RStack_5.m_Origin.y = (pRVar6->m_Origin).y;
  pfVar10 = &(pRVar6->m_Origin).z;
  fVar11 = *pfVar10;
  fVar12 = (pRVar6->m_Direction).x;
  RStack_5._8_8_ = *(undefined8 *)pfVar10;
  uVar13._0_4_ = (pRVar6->m_Direction).y;
  uVar13._4_4_ = (pRVar6->m_Direction).z;
  this_00 = (this->fields)._tree;
  RStack_5.m_Direction._4_8_ = uVar13;
  if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
    auStack_14._0_8_ = uVar9;
    auStack_14._8_8_ = *(List_1_T_Enumerator_System_Object_ **)pfVar10;
    uStack_15 = uVar13;
    bVar16 = SphereTree`1[System::Object]::SphereTree_1_System_Object__RaycastAll
                       ((SphereTree_1_System_Object_ *)this_00,(Ray *)auStack_14,
                        (List_1_RTG_SphereTreeNodeRayHit_1_System_Object_ *)
                        (this->fields)._nodeHitBuffer,
                        MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__RaycastAll_UnityEngine__Ray__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>_
                       );
    fVar17 = _UNK_?;
    if (bVar16 == 0) {
      return (MeshRayHit *)0x0;
    }
    fStack_18 = _UNK_?;
    pIStack_19 = (Il2CppArrayType *)0x0;
    bVar20 = false;
    pLVar21 = (this->fields)._nodeHitBuffer;
    if (pLVar21 != (List_1_RTG_SphereTreeNodeRayHit_1_MeshTriangle_ *)0x0) {
      if (iRam_? != 0) {
        uVar22 = (uint)((ulonglong)auStack_14 >> 0xc);
        uVar23 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
        do {
          uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
          puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
          LOCK();
          bVar26 = uVar24 == *puVar25;
          if (bVar26) {
            *puVar25 = uVar24 | 1L << (uVar22 & 0x3f);
          }
          UNLOCK();
        } while (!bVar26);
      }
      auStack_14._8_8_ = (ulonglong)(uint)(pLVar21->fields)._version << 0x20;
      uStack_15._0_4_ = 0.0;
      uStack_15._4_4_ = 0.0;
      LStack_27._index = auStack_14._8_4_;
      LStack_27._version = auStack_14._12_4_;
      LStack_27._current = (Object *)0x0;
      auStack_14._0_4_ = 0.0;
      auStack_14._4_4_ = 0.0;
      auStack_14._8_8_ = &LStack_27;
      fVar28 = RStack_5.m_Direction.z;
      fVar29 = RStack_5.m_Direction.y;
      pIVar30 = (Il2CppArrayType *)0x0;
      LStack_27._list = (List_1_System_Object_ *)pLVar21;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_27,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__MoveNext__
                                ), bVar16 != 0) {
        if (LStack_27._current == (Object *)0x0) goto code_?;
        if (LStack_27._current[1].klass == (Object__Class *)0x0) goto code_?;
        pIVar31 = ((LStack_27._current[1].klass)->_0).this_arg.data.array;
        if (pIVar31 == (Il2CppArrayType *)0x0) goto code_?;
        piVar32 = pIVar31->sizes;
        if (piVar32 == (int *)0x0) goto code_?;
        if (piVar32[6] == 0) goto code_?;
        uVar33._0_4_ = (float)piVar32[8];
        uVar33._4_4_ = (float)piVar32[9];
        fVar34 = (float)piVar32[10];
        if (piVar32 == (int *)0x0) goto code_?;
        if ((uint)piVar32[6] < 2) goto code_?;
        uVar35._0_4_ = (float)piVar32[0xb];
        uVar35._4_4_ = (float)piVar32[0xc];
        fVar36 = (float)piVar32[0xd];
        if (piVar32 == (int *)0x0) goto code_?;
        if ((uint)piVar32[6] < 3) goto code_?;
        uVar37._0_4_ = (float)piVar32[0xe];
        uVar37._4_4_ = (float)piVar32[0xf];
        fVar38 = (float)piVar32[0x10];
        TStack_39._areaEps = 0.0;
        TStack_39._extrudeEps = 0.0;
        fVar40 = 0.0;
        if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
          FUN_?();
          fVar40 = TStack_39._areaEps;
        }
        TStack_41._areaEps = TStack_39._areaEps;
        TStack_41._extrudeEps = TStack_39._extrudeEps;
        VStack_42._0_8_ = uVar33;
        VStack_42.z = fVar34;
        TStack_41._wireEps = fVar40;
        VStack_43._0_8_ = uVar37;
        VStack_43.z = fVar38;
        VStack_44._0_8_ = uVar35;
        VStack_44.z = fVar36;
        piStack_7 = piVar8;
        fStack_45 = fVar11;
        fStack_46 = fVar12;
        uStack_47 = uVar13;
        bVar16 = TriangleMath::TriangleMath_Raycast
                           ((Ray *)&piStack_7,&fStack_3,&VStack_42,&VStack_44,&VStack_43,
                            &TStack_41,(MethodInfo *)0x0);
        if (((bVar16 != 0) &&
            (piStack_7 = pIVar31->lobounds,
            (float)((ulonglong)piStack_7 >> 0x20) * fVar29 + SUB84(piStack_7,0) * fVar12 +
            *(float *)&pIVar31[1].etype * fVar28 < 0.0)) && (fStack_3 < fVar17)) {
          bVar20 = true;
          pIVar30 = pIVar31;
          fVar17 = fStack_3;
          fStack_18 = fStack_3;
          pIStack_19 = pIVar31;
        }
      }
      if (!bVar20) {
        return (MeshRayHit *)0x0;
      }
      fVar12 = fVar12 * fVar17 + RStack_5.m_Origin.x;
      fVar29 = fVar29 * fVar17 + RStack_5.m_Origin.y;
      fVar17 = fVar28 * fVar17 + RStack_5.m_Origin.z;
      fVar11 = _UNK_? /
              (fVar29 * meshTransform->m31 + fVar12 * meshTransform->m30 +
               fVar17 * meshTransform->m32 + meshTransform->m33);
      piStack_7 = *(int **)&pRStack_2->m_Origin;
      VStack_1.z = (pRStack_2->m_Origin).z -
                     (fVar29 * meshTransform->m21 + fVar12 * meshTransform->m20 +
                      fVar17 * meshTransform->m22 + meshTransform->m23) * fVar11;
      VStack_1._0_8_ =
           CONCAT44((float)((ulonglong)piStack_7 >> 0x20) -
                    (fVar29 * meshTransform->m11 + fVar12 * meshTransform->m10 +
                     fVar17 * meshTransform->m12 + meshTransform->m13) * fVar11,
                    SUB84(piStack_7,0) -
                    (fVar29 * meshTransform->m01 + fVar12 * *(float *)VStack_1._0_8_ +
                     fVar17 * meshTransform->m02 + meshTransform->m03) * fVar11);
      fVar11 = (float)FUN_?(&VStack_1);
      VStack_1._0_8_ = *(undefined8 *)&ray->m_Direction;
      VStack_1.z = (ray->m_Direction).z;
      fVar12 = (float)FUN_?(&VStack_1);
      fVar11 = fVar11 / fVar12;
      pMVar48 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                          (aMStack_49,meshTransform,(MethodInfo *)0x0);
      fStack_50 = pMVar48->m00;
      fStack_51 = pMVar48->m10;
      fStack_52 = pMVar48->m20;
      fStack_53 = pMVar48->m30;
      fStack_54 = pMVar48->m01;
      fStack_55 = pMVar48->m11;
      fStack_56 = pMVar48->m21;
      fStack_57 = pMVar48->m31;
      uStack_58._0_4_ = pMVar48->m02;
      uStack_58._4_4_ = pMVar48->m12;
      uStack_59._0_4_ = pMVar48->m22;
      uStack_59._4_4_ = pMVar48->m32;
      uStack_60._0_4_ = pMVar48->m03;
      uStack_60._4_4_ = pMVar48->m13;
      uStack_61._0_4_ = pMVar48->m23;
      uStack_61._4_4_ = pMVar48->m33;
      MStack_4.m00 = 0.0;
      MStack_4.m10 = 0.0;
      MStack_4.m20 = 0.0;
      MStack_4.m30 = 0.0;
      MStack_4.m01 = 0.0;
      MStack_4.m11 = 0.0;
      MStack_4.m21 = 0.0;
      MStack_4.m31 = 0.0;
      MStack_4.m02 = 0.0;
      MStack_4.m12 = 0.0;
      MStack_4.m22 = 0.0;
      MStack_4.m32 = 0.0;
      MStack_4.m03 = 0.0;
      MStack_4.m13 = 0.0;
      MStack_4.m23 = 0.0;
      MStack_4.m33 = 0.0;
      pcVar62 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar62 = (code *)FUN_?(&UNK_?), pcVar62 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar62 = (code *)swi(3);
        pMVar63 = (MeshRayHit *)(*pcVar62)();
        return pMVar63;
      }
      pcRam_? = pcVar62;
      (*pcRam_?)(&fStack_50,&MStack_4);
      if (pIVar30 != (Il2CppArrayType *)0x0) {
        fVar17 = (float)((ulonglong)pIVar30->lobounds >> 0x20);
        VStack_42.x = SUB84(pIVar30->lobounds,0);
        fVar12 = *(float *)&pIVar30[1].etype;
        fVar28 = fVar17 * MStack_4.m01 + VStack_42.x * MStack_4.m00 + fVar12 * MStack_4.m02;
        fVar34 = fVar17 * MStack_4.m11 + VStack_42.x * MStack_4.m10 + fVar12 * MStack_4.m12;
        fVar12 = fVar17 * MStack_4.m21 + VStack_42.x * MStack_4.m20 + fVar12 * MStack_4.m22;
        VStack_42.y = fVar34;
        VStack_42.x = fVar28;
        VStack_42.z = fVar12;
        fVar29 = (float)FUN_?(&VStack_42);
        fVar17 = _UNK_?;
        if (_UNK_? < fVar29) {
          fVar12 = fVar12 / fVar29;
          VStack_1.y = fVar34 / fVar29;
          VStack_1.x = fVar28 / fVar29;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar64 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_1.x = (pVVar64->zeroVector).x;
          VStack_1.y = (pVVar64->zeroVector).y;
          fVar12 = (pVVar64->zeroVector).z;
        }
        iVar65 = *(int32_t *)((longlong)&pIVar30[1].etype + 4);
        pMVar63 = (MeshRayHit *)FUN_?(TypeInfo__RTG__MeshRayHit);
        fVar28 = (ray->m_Origin).x;
        fVar34 = (ray->m_Origin).y;
        fVar36 = (ray->m_Origin).z;
        fVar38 = (ray->m_Direction).x;
        (pMVar63->fields)._hitTriangleIndex = iVar65;
        uVar66 = (ray->m_Direction).y;
        fVar29 = (ray->m_Direction).z;
        (pMVar63->fields)._hitPoint.x = fVar38 * fVar11 + fVar28;
        (pMVar63->fields)._hitPoint.y = (float)uVar66 * fVar11 + fVar34;
        (pMVar63->fields)._hitPoint.z = fVar29 * fVar11 + fVar36;
        (pMVar63->fields)._hitEnter = fVar11;
        fVar11 = VStack_1.x;
        fVar29 = VStack_1.y;
        VStack_42.x = VStack_1.x;
        VStack_42.y = VStack_1.y;
        VStack_42.z = fVar12;
        fVar28 = (float)FUN_?(&VStack_42);
        if (fVar17 < fVar28) {
          fVar11 = fVar11 / fVar28;
          fVar29 = fVar29 / fVar28;
          fVar12 = fVar12 / fVar28;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar64 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar11 = (pVVar64->zeroVector).x;
          fVar29 = (pVVar64->zeroVector).y;
          fVar12 = (pVVar64->zeroVector).z;
        }
        (pMVar63->fields)._hitNormal.x = fVar11;
        (pMVar63->fields)._hitNormal.y = fVar29;
        (pMVar63->fields)._hitNormal.z = fVar12;
        return pMVar63;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar62 = (code *)swi(3);
  pMVar63 = (MeshRayHit *)(*pcVar62)();
  return pMVar63;
}


/* Void SetDirty() */

void Assembly-CSharp.dll::RTG::MeshTree::MeshTree_SetDirty(MeshTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isBuilt = 0;
  this_00 = (SphereTree_1_MeshTriangle_ *)
            FUN_?(TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
  SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
            ((SphereTree_1_System_Object_ *)this_00,
             MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
  bVar1 = iRam_? != 0;
  (this->fields)._tree = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._tree >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* MeshTree(RTMesh) */

void Assembly-CSharp.dll::RTG::MeshTree::MeshTree__ctor
               (MeshTree *this,RTMesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (SphereTree_1_MeshTriangle_ *)
            FUN_?(TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
  SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
            ((SphereTree_1_System_Object_ *)this_00,
             MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
  bVar1 = iRam_? != 0;
  (this->fields)._tree = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._tree >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (List_1_RTG_SphereTreeNode_1_MeshTriangle_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._nodeBuffer = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._nodeBuffer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_02 = (List_1_RTG_SphereTreeNodeRayHit_1_MeshTriangle_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._nodeHitBuffer = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._nodeHitBuffer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pHVar6 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar6,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  iVar7 = iRam_?;
  (this->fields)._vertexIndexSet = pHVar6;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._vertexIndexSet >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._mesh = mesh;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

