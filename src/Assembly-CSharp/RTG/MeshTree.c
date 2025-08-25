
/* Void Build() */

void Assembly-CSharp.dll::RTG::MeshTree::MeshTree_Build(MeshTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__AddNode_RTG__MeshTriangle__RTG__Sphere_
                   );
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
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    this_01 = (nodeData->fields)._vertices;
    if (this_01 == (Vector3__Array *)0x0) break;
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
             PlayableBehaviour_Clone((PlayableBehaviour *)this_01,(MethodInfo *)0x0);
    pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)
                 func_?(pOVar2,TypeInfo__UnityEngine__Vector3);
    SStack_3._center.x = 0.0;
    SStack_3._center.y = 0.0;
    SStack_3._center.z = 0.0;
    SStack_3._radius = 0.0;
    Sphere::Sphere__ctor_2(&SStack_3,pointCloud,(MethodInfo *)0x0);
    if (this_00 == (SphereTree_1_MeshTriangle_ *)0x0) break;
    sphere._center.y = SStack_3._center.y;
    sphere._center.x = SStack_3._center.x;
    sphere._center.z = SStack_3._center.z;
    sphere._radius = SStack_3._radius;
    SphereTree`1[System::Object]::SphereTree_1_System_Object__AddNode
              ((SphereTree_1_System_Object_ *)this_00,(Object *)nodeData,sphere,
               MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__AddNode_RTG__MeshTriangle__RTG__Sphere_
              );
    triangleIndex = triangleIndex + 1;
    pRVar1 = (this->fields)._mesh;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::MeshTree::MeshTree_DebugDraw(MeshTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._tree;
  if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
    SphereTree`1[System::Object]::SphereTree_1_System_Object__DebugDraw
              ((SphereTree_1_System_Object_ *)this_00,
               MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__DebugDraw__);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean OverlapModelVerts(OBB, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::MeshTree::MeshTree_OverlapModelVerts
               (MeshTree *this,OBB modelOBB,List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&MethodInfo__RTG__SphereTreeNode<RTG::MeshTriangle>__get_Data__);
    func_?(&
                    MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>_
                   );
    cRam_? = '\x01';
  }
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current.First = 0;
  LStack_4._current.Last = 0;
  if (verts != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar5 = &(verts->fields)._version;
    *piVar5 = *piVar5 + 1;
    (verts->fields)._size = 0;
    if ((this->fields)._isBuilt == 0) {
      MeshTree_Build(this,(MethodInfo *)0x0);
    }
    this_00 = (this->fields)._tree;
    if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
      bVar6 = SphereTree`1[System::Object]::SphereTree_1_System_Object__OverlapBox
                        ((SphereTree_1_System_Object_ *)this_00,modelOBB,
                         (List_1_RTG_SphereTreeNode_1_System_Object_ *)(this->fields)._nodeBuffer,
                         MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>_
                        );
      if (bVar6 == 0) {
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      this_01 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                (this->fields)._vertexIndexSet;
      if (this_01 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                  (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
        this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields)._nodeBuffer;
        if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             (&LStack_4,this_02,
                              MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__GetEnumerator__
                             );
          puStack_8 = (undefined *)0x0;
          method_00 = (MethodInfo *)pLVar7->_version;
          RStack_9 = pLVar7->_current;
          uStack_1 = 1;
          while( true ) {
            bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb4,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                              );
            if (bVar6 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffffb4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__Dispose__
                         ,method_00);
              iVar10 = (verts->fields)._size;
              *unaff_FS_OFFSET = uStack_3;
              return iVar10 != 0;
            }
            if ((RStack_9 == (RegexCharClass_SingleRange)0x0) ||
               (*(int *)((int)RStack_9 + 0x20) == 0)) break;
            this_03 = (this->fields)._mesh;
            if ((this_03 == (RTMesh *)0x0) ||
               (pRVar11 = (RecordManager *)
                         RTMesh::RTMesh_GetTriangle
                                   (this_03,*(int32_t *)(*(int *)((int)RStack_9 + 0x20) + 0x18),
                                    (MethodInfo *)0x0), pRVar11 == (RecordManager *)0x0)) break;
            this_07 = pRVar11;
            if (cRam_? == '\0') {
              LStack_4._list =
                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   &TypeInfo__UnityEngine__Vector3;
              func_?();
              cRam_? = '\x01';
            }
            this_04 = (Vector3__Array *)(pRVar11->fields)._table;
            if (this_04 == (Vector3__Array *)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
            PlayableBehaviour_Clone((PlayableBehaviour *)this_04,(MethodInfo *)0x0);
            iVar12 = func_?();
            iVar10 = 0;
            if (iVar12 == 0) break;
            for (; iVar10 < *(int *)(iVar12 + 0xc); iVar10 = iVar10 + 1) {
              item = System.Data.dll::System::Data::RecordManager::RecordManager_get_Item
                               (this_07,iVar10,(MethodInfo *)0x0);
              this_05 = (HashSet_1_System_UInt32_ *)(this->fields)._vertexIndexSet;
              if (this_05 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
              method_00 = MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_;
              bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                      HashSet_1_System_UInt32__Contains
                                (this_05,(uint32_t)item,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                );
              if (bVar6 == 0) {
                LStack_4._list =
                     (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     &LStack_4._index;
                LStack_4._index = iVar10;
                func_?();
                if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__RTG__BoxMath);
                }
                point.z = (float)LStack_4._current;
                point.x = (float)LStack_4._index;
                point.y = (float)LStack_4._version;
                bVar6 = BoxMath::BoxMath_ContainsPoint
                                  (point,modelOBB._center,modelOBB._size,modelOBB._rotation,
                                   (BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0);
                if (bVar6 != 0) {
                  func_?(verts,LStack_4._index);
                  this_06 = (this->fields)._vertexIndexSet;
                  if (this_06 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                            (this_06,(int32_t)item,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  bVar6 = (*pcVar14)();
  return bVar6;
}


/* Boolean OverlapVerts(OBB, MeshTransform, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::MeshTree::MeshTree_OverlapVerts
               (MeshTree *this,OBB obb,MeshTransform *meshTransform,
               List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff44;
  puVar5 = &stack0xffffff44;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&MethodInfo__RTG__SphereTreeNode<RTG::MeshTriangle>__get_Data__);
    func_?(&
                    MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  fStack_7 = 0.0;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  if (verts != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar9 = &(verts->fields)._version;
    *piVar9 = *piVar9 + 1;
    (verts->fields)._size = 0;
    if ((this->fields)._isBuilt == 0) {
      MeshTree_Build(this,(MethodInfo *)0x0);
    }
    if (meshTransform != (MeshTransform *)0x0) {
      pOVar10 = MeshTransform::MeshTransform_InverseTransformOBB
                         ((OBB *)&stack0xffffff50,meshTransform,obb,(MethodInfo *)0x0);
      this_00 = (this->fields)._tree;
      fStack_11 = (pOVar10->_size).x;
      fStack_12 = (pOVar10->_size).y;
      fStack_13 = (pOVar10->_size).z;
      fStack_14 = (pOVar10->_center).x;
      method_00 = (MethodInfo *)(pOVar10->_center).y;
      fStack_15 = (pOVar10->_center).y;
      fStack_16 = (pOVar10->_center).z;
      fStack_17 = (pOVar10->_rotation).x;
      puStack_18 = (undefined *)(pOVar10->_rotation).y;
      if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
        bVar19 = SphereTree`1[System::Object]::SphereTree_1_System_Object__OverlapBox
                          ((SphereTree_1_System_Object_ *)this_00,*pOVar10,
                           (List_1_RTG_SphereTreeNode_1_System_Object_ *)(this->fields)._nodeBuffer,
                           MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>_
                          );
        if (bVar19 == 0) {
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        this_01 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                  (this->fields)._vertexIndexSet;
        if (this_01 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                    (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields)._nodeBuffer;
          if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            uVar20 = CONCAT44((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)auStack_21,&UNK_?);
            pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)auStack_21,this_02,
                                MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__GetEnumerator__
                               );
            uStack_23 = 0;
            LStack_8._list = (List_1_System_Object_ *)pLVar22->_list;
            LStack_8._index = pLVar22->_index;
            LStack_8._version = pLVar22->_version;
            LStack_8._current = *(Object **)&pLVar22->_current;
            uStack_1 = 1;
            pLStack_24 = &LStack_8;
            while( true ) {
              bVar19 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_8,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                                );
              if (bVar19 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&LStack_8,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__Dispose__
                           ,method_00);
                iVar25 = (verts->fields)._size;
                *unaff_FS_OFFSET = uStack_3;
                return iVar25 != 0;
              }
              if (((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0
                  ) || (*(int *)((int)LStack_8._current + 0x20) == 0)) break;
              this_03 = (this->fields)._mesh;
              if ((this_03 == (RTMesh *)0x0) ||
                 (pRVar26 = (RecordManager *)
                           RTMesh::RTMesh_GetTriangle
                                     (this_03,*(int32_t *)
                                               (*(int *)((int)LStack_8._current + 0x20) + 0x18),
                                      (MethodInfo *)0x0), pRStack_27 = pRVar26,
                 pRVar26 == (RecordManager *)0x0)) break;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              this_04 = (Vector3__Array *)(pRVar26->fields)._table;
              if (this_04 == (Vector3__Array *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
              PlayableBehaviour_Clone((PlayableBehaviour *)this_04,(MethodInfo *)0x0);
              iStack_28 = func_?();
              iVar25 = 0;
              if (iStack_28 == 0) break;
              for (; iVar25 < *(int *)(iStack_28 + 0xc); iVar25 = iVar25 + 1) {
                pDStack_29 = System.Data.dll::System::Data::RecordManager::RecordManager_get_Item
                                       (pRStack_27,iVar25,(MethodInfo *)0x0);
                this_05 = (HashSet_1_System_UInt32_ *)(this->fields)._vertexIndexSet;
                if (this_05 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
                method_00 = MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_;
                bVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                        HashSet_1_System_UInt32__Contains
                                  (this_05,(uint32_t)pDStack_29,
                                   MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                  );
                if (bVar19 == 0) {
                  func_?();
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__RTG__BoxMath);
                  }
                  boxSize.y = fStack_12;
                  boxSize.x = fStack_11;
                  boxCenter.y = fStack_15;
                  boxCenter.x = fStack_14;
                  point.z = fStack_7;
                  point.x = (float)(undefined4)uStack_6;
                  point.y = (float)uStack_6._4_4_;
                  boxCenter.z = fStack_16;
                  boxSize.z = fStack_13;
                  boxRotation.y = (float)puStack_18;
                  boxRotation.x = fStack_17;
                  boxRotation.z = (float)(int)uVar20;
                  boxRotation.w = (float)((ulonglong)uVar20 >> 0x20);
                  bVar19 = BoxMath::BoxMath_ContainsPoint
                                    (point,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                                     (MethodInfo *)0x0);
                  if (bVar19 != 0) {
                    point_00.z = fStack_7;
                    point_00.x = (float)(undefined4)uStack_6;
                    point_00.y = (float)uStack_6._4_4_;
                    pVVar30 = MeshTransform::MeshTransform_TransformPoint
                                       ((Vector3 *)(auStack_21 + 4),meshTransform,point_00,
                                        (MethodInfo *)0x0);
                    method_00 = (MethodInfo *)pVVar30->x;
                    func_?();
                    this_06 = (this->fields)._vertexIndexSet;
                    if (this_06 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
                    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                    HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                              (this_06,(int32_t)pDStack_29,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar31 = func_?();
  func_?(uVar31);
  pcVar32 = (code *)swi(3);
  bVar19 = (*pcVar32)();
  return bVar19;
}


/* MeshRayHit RaycastClosest(Ray, Matrix4x4) */

MeshRayHit *
Assembly-CSharp.dll::RTG::MeshTree::MeshTree_RaycastClosest
          (MeshTree *this,Ray ray,Matrix4x4 meshTransform,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffec8;
  puVar5 = &stack0xfffffec8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__GetEnumerator__
                   );
    func_?(&TypeInfo__RTG__MeshRayHit);
    func_?(&MethodInfo__RTG__SphereTreeNodeRayHit<RTG::MeshTriangle>__get_HitNode__);
    func_?(&MethodInfo__RTG__SphereTreeNode<RTG::MeshTriangle>__get_Data__);
    func_?(&
                    MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__RaycastAll_UnityEngine__Ray__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>_
                   );
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  RStack_7.m_Direction.y = 0.0;
  RStack_7.m_Direction.z = 0.0;
  RStack_7.m_Origin.x = 0.0;
  RStack_7.m_Origin.y = 0.0;
  RStack_7.m_Origin.z = 0.0;
  RStack_7.m_Direction.x = 0.0;
  func_?(&stack0xffffff2c,0,0x40);
  if ((this->fields)._isBuilt == 0) {
    MeshTree_Build(this,(MethodInfo *)0x0);
  }
  transformMatrix.m10 = meshTransform.m10;
  transformMatrix.m00 = meshTransform.m00;
  transformMatrix.m20 = meshTransform.m20;
  transformMatrix.m30 = meshTransform.m30;
  transformMatrix.m01 = meshTransform.m01;
  transformMatrix.m11 = meshTransform.m11;
  transformMatrix.m21 = meshTransform.m21;
  transformMatrix.m31 = meshTransform.m31;
  transformMatrix.m02 = meshTransform.m02;
  transformMatrix.m12 = meshTransform.m12;
  transformMatrix.m22 = meshTransform.m22;
  transformMatrix.m32 = meshTransform.m32;
  transformMatrix.m03 = meshTransform.m03;
  transformMatrix.m13 = meshTransform.m13;
  transformMatrix.m23 = meshTransform.m23;
  transformMatrix.m33 = meshTransform.m33;
  pRVar8 = RayEx::RayEx_InverseTransform
                      ((Ray *)&stack0xffffff14,ray,transformMatrix,(MethodInfo *)0x0);
  this_00 = (this->fields)._tree;
  RStack_7.m_Origin.x = (pRVar8->m_Origin).x;
  RStack_7.m_Origin.y = (pRVar8->m_Origin).y;
  RStack_7.m_Origin.z = (pRVar8->m_Origin).z;
  RStack_7.m_Direction.x = (pRVar8->m_Direction).x;
  RStack_7.m_Direction.y = (pRVar8->m_Direction).y;
  RStack_7.m_Direction.z = (pRVar8->m_Direction).z;
  uVar9 = (pRVar8->m_Direction).z;
  uVar10 = (pRVar8->m_Origin).x;
  uVar11 = (pRVar8->m_Origin).y;
  uVar12 = (pRVar8->m_Origin).z;
  ray_00.m_Origin.z = (float)uVar12;
  ray_00.m_Origin.y = (float)uVar11;
  ray_00.m_Origin.x = (float)uVar10;
  uVar13 = (pRVar8->m_Direction).x;
  uVar14 = (pRVar8->m_Direction).y;
  ray_00.m_Direction.y = (float)uVar14;
  ray_00.m_Direction.x = (float)uVar13;
  if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
    ray_00.m_Direction.z = (float)uVar9;
    bVar15 = SphereTree`1[System::Object]::SphereTree_1_System_Object__RaycastAll
                       ((SphereTree_1_System_Object_ *)this_00,ray_00,
                        (List_1_RTG_SphereTreeNodeRayHit_1_System_Object_ *)
                        (this->fields)._nodeHitBuffer,
                        MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__RaycastAll_UnityEngine__Ray__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>_
                       );
    if (bVar15 == 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return (MeshRayHit *)0x0;
    }
    bVar16 = false;
    pLVar17 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._nodeHitBuffer;
    fStack_18 = _UNK_?;
    iStack_19 = 0;
    if (pLVar17 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffff1c,pLVar17,
                           MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__GetEnumerator__
                          );
      uStack_21 = 0;
      RVar22 = pLVar20->_current;
      uStack_1 = 1;
      pOStack_23 = (Object *)&stack0xffffff8c;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff8c,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__MoveNext__
                           );
        if (bVar15 == 0) break;
        if ((RVar22 == (RegexCharClass_SingleRange)0x0) ||
           (iVar24 = *(int *)((int)RVar22 + 8), iVar24 == 0)) goto code_?;
        iVar24 = *(int *)(iVar24 + 0x20);
        VStack_25.y = RStack_7.m_Direction.y;
        VStack_25.z = RStack_7.m_Direction.z;
        if ((iVar24 == 0) || (iVar26 = *(int *)(iVar24 + 8), iVar26 == 0)) goto code_?;
        if (*(int *)(iVar26 + 0xc) == 0) {
          func_?();
code_?:
          func_?();
code_?:
          func_?();
          goto code_?;
        }
        fStack_27 = *(float *)(iVar26 + 0x18);
        iVar28 = *(int *)(iVar24 + 8);
        fVar29 = (float)*(undefined8 *)(iVar26 + 0x10);
        fVar30 = (float)((ulonglong)*(undefined8 *)(iVar26 + 0x10) >> 0x20);
        if (iVar28 == 0) goto code_?;
        if (*(uint *)(iVar28 + 0xc) < 2) goto code_?;
        uVar31 = *(undefined8 *)(iVar28 + 0x1c);
        pMStack_32 = *(MeshRayHit **)(iVar28 + 0x24);
        iVar26 = *(int *)(iVar24 + 8);
        uVar33 = (undefined4)uVar31;
        uVar34 = (undefined4)((ulonglong)uVar31 >> 0x20);
        if (iVar26 == 0) goto code_?;
        if (*(uint *)(iVar26 + 0xc) < 3) goto code_?;
        uVar35 = *(undefined8 *)(iVar26 + 0x28);
        fStack_36 = *(float *)(iVar26 + 0x30);
        uVar37 = (undefined4)uVar35;
        uVar38 = (undefined4)((ulonglong)uVar35 >> 0x20);
        pLVar17 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  RStack_7.m_Origin.x;
        fVar39 = RStack_7.m_Origin.y;
        fVar40 = RStack_7.m_Origin.z;
        RVar41 = (RegexCharClass_SingleRange)RStack_7.m_Direction.x;
        if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          uVar31 = CONCAT44(uVar34,uVar33);
          uVar35 = CONCAT44(uVar38,uVar37);
        }
        ray_01.m_Origin.y = fVar39;
        ray_01.m_Origin.x = (float)pLVar17;
        ray_01.m_Origin.z = fVar40;
        ray_01.m_Direction.x = (float)RVar41;
        ray_01.m_Direction.y = VStack_25.y;
        ray_01.m_Direction.z = VStack_25.z;
        p0.y = fVar30;
        p0.x = fVar29;
        p0.z = fStack_27;
        p1.z = (float)pMStack_32;
        p1.x = (float)(int)uVar31;
        p1.y = (float)(int)((ulonglong)uVar31 >> 0x20);
        p2.z = fStack_36;
        p2.x = (float)(int)uVar35;
        p2.y = (float)(int)((ulonglong)uVar35 >> 0x20);
        bVar15 = TriangleMath::TriangleMath_Raycast
                           (ray_01,&fStack_6,p0,p1,p2,(TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0
                           );
        if (bVar15 != 0) {
          VStack_42._0_8_ = *(undefined8 *)(iVar24 + 0xc);
          VStack_42.z = *(float *)(iVar24 + 0x14);
          if ((RStack_7.m_Direction.y * VStack_42.y + RStack_7.m_Direction.x * VStack_42.x +
               RStack_7.m_Direction.z * VStack_42.z < 0.0) && (fStack_6 < fStack_18)) {
            bVar16 = true;
            iStack_19 = iVar24;
            fStack_18 = fStack_6;
          }
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffff8c,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__Dispose__
                 ,in_stack_43);
      uStack_1 = 0xffffffff;
      if (!bVar16) goto code_?;
      pVVar44 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                          (&VStack_42,&RStack_7,fStack_18,(MethodInfo *)0x0);
      pVVar44 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                          (&VStack_25,&meshTransform,*pVVar44,(MethodInfo *)0x0);
      VStack_42.x = pVVar44->x;
      VStack_42.y = pVVar44->y;
      VStack_25.x = ray.m_Origin.x - VStack_42.x;
      VStack_25.z = ray.m_Origin.z - pVVar44->z;
      VStack_25.y = ray.m_Origin.y - VStack_42.y;
      VStack_42.z = VStack_25.z;
      fVar45 = (float10)func_?();
      VStack_25.z = ray.m_Direction.z;
      VStack_25.x = ray.m_Direction.x;
      VStack_25.y = ray.m_Direction.y;
      fVar46 = (float10)func_?();
      fStack_27 = (float)fVar46;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                ((Matrix4x4 *)&stack0xfffffed4,&meshTransform,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_transpose
                ((Matrix4x4 *)&stack0xfffffed4,(Matrix4x4 *)&stack0xffffff2c,(MethodInfo *)0x0);
      iVar24 = iStack_19;
      if (iStack_19 != 0) {
        pVVar44 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                            (&VStack_42,(Matrix4x4 *)&stack0xffffff2c,*(Vector3 *)(iStack_19 + 0xc),
                             (MethodInfo *)0x0);
        pVVar44 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffff6c,*pVVar44,(MethodInfo *)0x0);
        uVar47 = pVVar44->x;
        uVar48 = pVVar44->y;
        hitTriangleIndex = *(int32_t *)(iVar24 + 0x18);
        fVar29 = pVVar44->z;
        VStack_25.y = (float)uVar47;
        VStack_25.z = (float)uVar48;
        pMStack_32 = (MeshRayHit *)func_?();
        hitNormal.y = VStack_25.z;
        hitNormal.x = VStack_25.y;
        hitNormal.z = fVar29;
        MeshRayHit::MeshRayHit__ctor
                  (pMStack_32,ray,hitTriangleIndex,(float)fVar45 / fStack_27,hitNormal,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return pMStack_32;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar49 = (code *)swi(3);
  pMVar50 = (MeshRayHit *)(*pcVar49)();
  return pMVar50;
}


/* Void SetDirty() */

void Assembly-CSharp.dll::RTG::MeshTree::MeshTree_SetDirty(MeshTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
    func_?(&TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
    cRam_? = '\x01';
  }
  (this->fields)._isBuilt = 0;
  this_00 = (SphereTree_1_MeshTriangle_ *)
            func_?(TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
  SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
            ((SphereTree_1_System_Object_ *)this_00,
             MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
  (this->fields)._tree = this_00;
  func_?(&(this->fields)._tree,this_00);
  return;
}


/* MeshTree(RTMesh) */

void Assembly-CSharp.dll::RTG::MeshTree::MeshTree__ctor
               (MeshTree *this,RTMesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>
                   );
    func_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
    func_?(&TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
    cRam_? = '\x01';
  }
  this_00 = (SphereTree_1_MeshTriangle_ *)
            func_?(TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
  SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
            ((SphereTree_1_System_Object_ *)this_00,
             MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
  (this->fields)._tree = this_00;
  func_?(&(this->fields)._tree,this_00);
  this_01 = (List_1_RTG_SphereTreeNode_1_MeshTriangle_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__List__
            );
  (this->fields)._nodeBuffer = this_01;
  func_?(&(this->fields)._nodeBuffer,this_01);
  this_02 = (List_1_RTG_SphereTreeNodeRayHit_1_MeshTriangle_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__List__
            );
  (this->fields)._nodeHitBuffer = this_02;
  func_?(&(this->fields)._nodeHitBuffer,this_02);
  this_03 = (RTMesh *)func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            ((HashSet_1_System_Int32_ *)this_03,
             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields)._vertexIndexSet = (HashSet_1_System_Int32_ *)this_03;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,
             (MethodInfo *)&(this->fields)._vertexIndexSet);
  (this->fields)._mesh = this_03;
  func_?(&this->fields);
  return;
}

