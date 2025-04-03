
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
          LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
          LStack_9._index = pLVar7->_index;
          LStack_9._version = pLVar7->_version;
          LStack_9._current = *(Object **)&pLVar7->_current;
          uStack_1 = 1;
          while( true ) {
            bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_9,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                              );
            if (bVar6 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&LStack_9,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__Dispose__
                         ,unaff_EBX);
              iVar10 = (verts->fields)._size;
              *unaff_FS_OFFSET = uStack_3;
              return iVar10 != 0;
            }
            if (((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0)
               || (*(int *)((int)LStack_9._current + 0x20) == 0)) break;
            this_03 = (this->fields)._mesh;
            if ((this_03 == (RTMesh *)0x0) ||
               (pRVar11 = (RecordManager *)
                         RTMesh::RTMesh_GetTriangle
                                   (this_03,*(int32_t *)
                                             (*(int *)((int)LStack_9._current + 0x20) + 0x18),
                                    (MethodInfo *)0x0), pRVar11 == (RecordManager *)0x0)) break;
            this_07 = pRVar11;
            if (cRam_? == '\0') {
              LStack_9._index = (int32_t)&TypeInfo__UnityEngine__Vector3;
              LStack_9._list = (List_1_System_Object_ *)&UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            this_04 = (Vector3__Array *)(pRVar11->fields)._table;
            if (this_04 == (Vector3__Array *)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
            PlayableBehaviour_Clone((PlayableBehaviour *)this_04,(MethodInfo *)0x0);
            iVar10 = func_?();
            record = 0;
            while( true ) {
              if (iVar10 == 0) goto code_?;
              if (*(int *)(iVar10 + 0xc) <= record) break;
              item = System.Data.dll::System::Data::RecordManager::RecordManager_get_Item
                               (this_07,record,(MethodInfo *)0x0);
              this_05 = (HashSet_1_System_UInt32_ *)(this->fields)._vertexIndexSet;
              if (this_05 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
              unaff_EBX = MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_;
              bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                      HashSet_1_System_UInt32__Contains
                                (this_05,(uint32_t)item,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                );
              if (bVar6 == 0) {
                LStack_9._index = (int32_t)&LStack_4._index;
                LStack_9._list = (List_1_System_Object_ *)&UNK_?;
                LStack_9._version = record;
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
                  unaff_EBX = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                  ;
                  func_?(verts,LStack_4._index);
                  this_06 = (this->fields)._vertexIndexSet;
                  if (this_06 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                            (this_06,(int32_t)item,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                }
              }
              record = record + 1;
            }
          }
        }
      }
    }
  }
code_?:
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  bVar6 = (*pcVar13)();
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
  if (verts != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar4 = &(verts->fields)._version;
    *piVar4 = *piVar4 + 1;
    (verts->fields)._size = 0;
    if ((this->fields)._isBuilt == 0) {
      MeshTree_Build(this,(MethodInfo *)0x0);
    }
    if (meshTransform != (MeshTransform *)0x0) {
      pOVar5 = MeshTransform::MeshTransform_InverseTransformOBB
                         ((OBB *)&stack0xffffff50,meshTransform,obb,(MethodInfo *)0x0);
      this_00 = (this->fields)._tree;
      fStack_6 = (pOVar5->_size).x;
      fStack_7 = (pOVar5->_size).y;
      fStack_8 = (pOVar5->_size).z;
      fStack_9 = (pOVar5->_center).x;
      fStack_10 = (pOVar5->_center).y;
      fStack_11 = (pOVar5->_center).z;
      fStack_12 = (pOVar5->_rotation).x;
      puStack_13 = (undefined *)(pOVar5->_rotation).y;
      if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
        method_00 = (MethodInfo *)(pOVar5->_size).y;
        bVar14 = SphereTree`1[System::Object]::SphereTree_1_System_Object__OverlapBox
                          ((SphereTree_1_System_Object_ *)this_00,*pOVar5,
                           (List_1_RTG_SphereTreeNode_1_System_Object_ *)(this->fields)._nodeBuffer,
                           MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>_
                          );
        if (bVar14 == 0) {
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
            uVar15 = CONCAT44((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                              *)auStack_16,&UNK_?);
            pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)auStack_16,this_02,
                                MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__GetEnumerator__
                               );
            RVar18 = pLVar17->_current;
            uStack_1 = 1;
            while( true ) {
              bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__MoveNext__
                                );
              if (bVar14 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffffb8,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<RTG::MeshTriangle>_>__Dispose__
                           ,method_00);
                iVar19 = (verts->fields)._size;
                *unaff_FS_OFFSET = uStack_3;
                return iVar19 != 0;
              }
              if ((RVar18 == (RegexCharClass_SingleRange)0x0) ||
                 (iVar19 = *(int *)((int)RVar18 + 0x20), iVar19 == 0)) break;
              this_03 = (this->fields)._mesh;
              if ((this_03 == (RTMesh *)0x0) ||
                 (this_07 = (RecordManager *)
                            RTMesh::RTMesh_GetTriangle
                                      (this_03,*(int32_t *)(iVar19 + 0x18),(MethodInfo *)0x0),
                 this_07 == (RecordManager *)0x0)) break;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              this_04 = (this_07->fields)._table;
              if (this_04 == (DataTable *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
              PlayableBehaviour_Clone((PlayableBehaviour *)this_04,(MethodInfo *)0x0);
              iVar19 = func_?();
              record = 0;
              while( true ) {
                if (iVar19 == 0) goto code_?;
                if (*(int *)(iVar19 + 0xc) <= record) break;
                item = System.Data.dll::System::Data::RecordManager::RecordManager_get_Item
                                 (this_07,record,(MethodInfo *)0x0);
                this_05 = (HashSet_1_System_UInt32_ *)(this->fields)._vertexIndexSet;
                if (this_05 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
                method_00 = MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_;
                bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                        HashSet_1_System_UInt32__Contains
                                  (this_05,(uint32_t)item,
                                   MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                  );
                if (bVar14 == 0) {
                  func_?();
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__RTG__BoxMath);
                  }
                  boxSize.y = fStack_7;
                  boxSize.x = fStack_6;
                  boxCenter.y = fStack_10;
                  boxCenter.x = fStack_9;
                  boxCenter.z = fStack_11;
                  boxSize.z = fStack_8;
                  boxRotation.y = (float)puStack_13;
                  boxRotation.x = fStack_12;
                  boxRotation.z = (float)(int)uVar15;
                  boxRotation.w = (float)((ulonglong)uVar15 >> 0x20);
                  bVar14 = BoxMath::BoxMath_ContainsPoint
                                    ((Vector3)ZEXT812(0),boxCenter,boxSize,boxRotation,
                                     (BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0);
                  if (bVar14 != 0) {
                    method_00 = (MethodInfo *)0x0;
                    MeshTransform::MeshTransform_TransformPoint
                              ((Vector3 *)(auStack_16 + 4),meshTransform,(Vector3)ZEXT812(0),
                               (MethodInfo *)0x0);
                    func_?();
                    this_06 = (this->fields)._vertexIndexSet;
                    if (this_06 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
                    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                    HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                              (this_06,(int32_t)item,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                  }
                }
                record = record + 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar20 = func_?();
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  bVar14 = (*pcVar21)();
  return bVar14;
}


/* MeshRayHit RaycastClosest(Ray, Matrix4x4) */

MeshRayHit *
Assembly-CSharp.dll::RTG::MeshTree::MeshTree_RaycastClosest
          (MeshTree *this,Ray ray,Matrix4x4 meshTransform,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffe60;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffe60;
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
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  fStack_8 = 0.0;
  func_?(&stack0xfffffed0,0,0x40);
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
  pRVar9 = RayEx::RayEx_InverseTransform
                      ((Ray *)&stack0xffffff10,ray,transformMatrix,(MethodInfo *)0x0);
  this_00 = (this->fields)._tree;
  pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (pRVar9->m_Origin).x;
  fVar11 = (pRVar9->m_Origin).y;
  puVar12 = (undefined *)(pRVar9->m_Origin).z;
  RVar13 = (RegexCharClass_SingleRange)(pRVar9->m_Direction).x;
  fVar14 = (pRVar9->m_Direction).y;
  fVar15 = (pRVar9->m_Direction).z;
  if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
    uVar16 = (pRVar9->m_Direction).z;
    uVar17 = (pRVar9->m_Origin).x;
    uVar18 = (pRVar9->m_Origin).y;
    uVar19 = (pRVar9->m_Origin).z;
    ray_00.m_Origin.z = (float)uVar19;
    ray_00.m_Origin.y = (float)uVar18;
    ray_00.m_Origin.x = (float)uVar17;
    uVar20 = (pRVar9->m_Direction).x;
    uVar21 = (pRVar9->m_Direction).y;
    ray_00.m_Direction.y = (float)uVar21;
    ray_00.m_Direction.x = (float)uVar20;
    ray_00.m_Direction.z = (float)uVar16;
    bVar22 = SphereTree`1[System::Object]::SphereTree_1_System_Object__RaycastAll
                       ((SphereTree_1_System_Object_ *)this_00,ray_00,
                        (List_1_RTG_SphereTreeNodeRayHit_1_System_Object_ *)
                        (this->fields)._nodeHitBuffer,
                        MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__RaycastAll_UnityEngine__Ray__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>_
                       );
    if (bVar22 == 0) {
code_?:
      *unaff_FS_OFFSET = uStack_4;
      return (MeshRayHit *)0x0;
    }
    cStack_23 = '\0';
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._nodeHitBuffer;
    fStack_24 = _UNK_?;
    iStack_25 = 0;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&pLStack_27,this_01,
                           MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__GetEnumerator__
                          );
      pLStack_28 = pLVar26->_list;
      iStack_29 = pLVar26->_index;
      puStack_30 = (undefined *)pLVar26->_version;
      RVar31 = pLVar26->_current;
      uStack_2 = 1;
      while( true ) {
        bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&pLStack_28,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__MoveNext__
                           );
        if (bVar22 == 0) break;
        if ((RVar31 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar31 + 8) == 0))
        goto code_?;
        iVar32 = *(int *)(*(int *)((int)RVar31 + 8) + 0x20);
        pLStack_27 = pLVar10;
        fStack_33 = fVar11;
        puStack_34 = puVar12;
        if ((iVar32 == 0) || (iVar35 = *(int *)(iVar32 + 8), iVar35 == 0)) goto code_?;
        if (*(int *)(iVar35 + 0xc) == 0) {
          func_?();
code_?:
          func_?();
code_?:
          func_?();
          goto code_?;
        }
        uVar36 = *(undefined8 *)(iVar35 + 0x10);
        fVar37 = *(float *)(iVar35 + 0x18);
        uVar38 = (undefined4)uVar36;
        uVar39 = (undefined4)((ulonglong)uVar36 >> 0x20);
        if (*(uint *)(iVar35 + 0xc) < 2) goto code_?;
        p1 = *(Vector3 *)(iVar35 + 0x1c);
        if (*(uint *)(iVar35 + 0xc) < 3) goto code_?;
        uVar40 = *(undefined8 *)(iVar35 + 0x28);
        fStack_41 = *(float *)(iVar35 + 0x30);
        RVar42 = RVar13;
        fVar43 = fVar15;
        fVar44 = fVar14;
        if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          uVar36 = CONCAT44(uVar39,uVar38);
        }
        ray_01.m_Origin.y = fStack_33;
        ray_01.m_Origin.x = (float)pLStack_27;
        ray_01.m_Origin.z = (float)puStack_34;
        ray_01.m_Direction.x = (float)RVar13;
        ray_01.m_Direction.y = fVar44;
        ray_01.m_Direction.z = fVar15;
        p0.z = fVar37;
        p0.x = (float)(int)uVar36;
        p0.y = (float)(int)((ulonglong)uVar36 >> 0x20);
        p2.z = fStack_41;
        p2.x = (float)uVar40;
        p2.y = SUB84(uVar40,4);
        bVar22 = TriangleMath::TriangleMath_Raycast
                           (ray_01,&fStack_8,p0,p1,p2,(TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0
                           );
        RVar13 = RVar42;
        fVar15 = fVar43;
        if (bVar22 != 0) {
          VStack_45._4_8_ = *(undefined8 *)(iVar32 + 0xc);
          fStack_46 = *(float *)(iVar32 + 0x14);
          if ((fVar14 * VStack_45.z + (float)RVar42 * VStack_45.y + fVar43 * fStack_46 < 0.0) &&
             (fStack_8 < fStack_24)) {
            cStack_23 = '\x01';
            iStack_25 = iVar32;
            fStack_24 = fStack_8;
          }
        }
      }
      uStack_2 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&pLStack_28,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__Dispose__
                 ,in_stack_47);
      uStack_2 = 0xffffffff;
      if (cStack_23 == '\0') goto code_?;
      pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                          (&VStack_45,(Ray *)&stack0xffffff70,fStack_24,(MethodInfo *)0x0);
      pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                          ((Vector3 *)&stack0xffffff88,&meshTransform,*pVVar48,(MethodInfo *)0x0);
      uVar49 = pVVar48->x;
      uVar50 = pVVar48->y;
      fStack_41 = ray.m_Origin.x - (float)uVar49;
      fVar14 = ray.m_Origin.y - (float)uVar50;
      pLStack_27 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   ray.m_Origin.y;
      fStack_33 = ray.m_Origin.y;
      VStack_45.x = ray.m_Origin.z - pVVar48->z;
      VStack_45.z = ray.m_Origin.z;
      VStack_45.y = ray.m_Origin.z;
      fStack_46 = ray.m_Origin.z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      dVar51 = (double)(fVar14 * fVar14 + fStack_41 * fStack_41 + VStack_45.x * VStack_45.x);
      if (dVar51 < 0.0) {
        func_?();
      }
      else {
        dVar51 = SQRT(dVar51);
      }
      fStack_24 = (float)dVar51;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                ((Matrix4x4 *)&stack0xfffffe78,&meshTransform,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_transpose
                ((Matrix4x4 *)&stack0xfffffe78,(Matrix4x4 *)&stack0xfffffed0,(MethodInfo *)0x0);
      if (iStack_25 != 0) {
        pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                            (&VStack_45,(Matrix4x4 *)&stack0xfffffed0,*(Vector3 *)(iStack_25 + 0xc),
                             (MethodInfo *)0x0);
        pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (&VStack_45,*pVVar48,(MethodInfo *)0x0);
        uVar52 = pVVar48->y;
        fStack_41 = pVVar48->z;
        iVar53 = *(int32_t *)(iStack_25 + 0x18);
        dVar51 = (double)(ray.m_Direction.y * ray.m_Direction.y +
                          ray.m_Direction.x * ray.m_Direction.x +
                         ray.m_Direction.z * ray.m_Direction.z);
        if (dVar51 < 0.0) {
          func_?();
        }
        else {
          dVar51 = SQRT(dVar51);
        }
        fStack_24 = fStack_24 / (float)dVar51;
        method_00 = TypeInfo__RTG__MeshRayHit;
        pMVar54 = (MeshRayHit *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pMVar54,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        (pMVar54->fields)._hitTriangleIndex = iVar53;
        pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                            (&VStack_45,(Ray *)&stack0xfffffeb8,fStack_24,(MethodInfo *)0x0);
        fVar15 = pVVar48->y;
        fVar14 = pVVar48->z;
        (pMVar54->fields)._hitPoint.x = pVVar48->x;
        (pMVar54->fields)._hitPoint.y = fVar15;
        (pMVar54->fields)._hitPoint.z = fVar14;
        (pMVar54->fields)._hitEnter = fStack_24;
        auVar55._4_4_ = fStack_41;
        auVar55._0_4_ = uVar52;
        auVar55._8_4_ = 0;
        pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffff38,(Vector3)(auVar55 << 0x20),
                             (MethodInfo *)0x0);
        fVar15 = pVVar48->y;
        fVar14 = pVVar48->z;
        (pMVar54->fields)._hitNormal.x = pVVar48->x;
        (pMVar54->fields)._hitNormal.y = fVar15;
        (pMVar54->fields)._hitNormal.z = fVar14;
        *unaff_FS_OFFSET = uStack_4;
        return pMVar54;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar56 = (code *)swi(3);
  pMVar54 = (MeshRayHit *)(*pcVar56)();
  return pMVar54;
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
  ppSVar1 = &(this->fields)._tree;
  *ppSVar1 = this_00;
  func_?(ppSVar1,this_00);
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
  ppSVar1 = &(this->fields)._tree;
  *ppSVar1 = this_00;
  func_?(ppSVar1,this_00);
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
  ppLVar2 = &(this->fields)._nodeBuffer;
  *ppLVar2 = this_01;
  func_?(ppLVar2,this_01);
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
  ppLVar3 = &(this->fields)._nodeHitBuffer;
  *ppLVar3 = this_02;
  func_?(ppLVar3,this_02);
  this_03 = (RTMesh *)func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            ((HashSet_1_System_Int32_ *)this_03,
             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  method_00 = &(this->fields)._vertexIndexSet;
  *method_00 = (HashSet_1_System_Int32_ *)this_03;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._mesh = this_03;
  func_?(&this->fields);
  return;
}

