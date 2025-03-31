
/* List`1[UnityEngine.Vector3] CollectHierarchyVerts(GameObject, BoxFace, Single, Single) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
          (GameObject *root,BoxFace__Enum collectFace,float collectBoxScale,float collectEps,
          MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__RTG__ObjectVertexCollect);
    func_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff34,0,0x2c);
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  pLVar2 = GameObjectEx::GameObjectEx_GetMeshObjectsInHierarchy(root,(MethodInfo *)0x0);
  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            GameObjectEx::GameObjectEx_GetSpriteObjectsInHierarchy(root,(MethodInfo *)0x0);
  if (pLVar2 != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      if ((pLVar3->fields)._size == 0) goto code_?;
    }
    uVar4._0_4_ = 0.0;
    uVar4._4_4_ = 0.0;
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x5;
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    queryConfig.NoVolumeSize.x = (float)uVar4;
    queryConfig.ObjectTypes = (int32_t)pLVar5;
    queryConfig.NoVolumeSize.y = SUB84(uVar4,4);
    queryConfig.NoVolumeSize.z = 0.0;
    pOVar6 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                        ((OBB *)&stack0xffffff08,root,queryConfig,(MethodInfo *)0x0);
    fVar7 = (pOVar6->_size).x;
    fVar8 = (pOVar6->_size).y;
    RVar9 = (RegexCharClass_SingleRange)(pOVar6->_size).z;
    boxSize = pOVar6->_size;
    VVar10 = pOVar6->_size;
    pVVar11 = &pOVar6->_center;
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pVVar11->x;
    fVar12 = (pOVar6->_center).y;
    fVar13 = (pOVar6->_center).z;
    boxCenter = *pVVar11;
    VVar14 = *pVVar11;
    pQVar15 = &pOVar6->_rotation;
    fVar16 = pQVar15->x;
    fVar17 = (pOVar6->_rotation).y;
    fVar18 = (pOVar6->_rotation).z;
    fVar19 = (pOVar6->_rotation).w;
    uVar20 = pQVar15->x;
    uVar21 = pQVar15->y;
    uVar22 = pQVar15->z;
    boxRotation_00.z = (float)uVar22;
    boxRotation_00.y = (float)uVar21;
    boxRotation_00.x = (float)uVar20;
    uVar23 = pQVar15->x;
    uVar24 = pQVar15->y;
    uVar25 = pQVar15->z;
    boxRotation.z = (float)uVar25;
    boxRotation.y = (float)uVar24;
    boxRotation.x = (float)uVar23;
    if ((char)*(undefined4 *)&pOVar6->_isValid == '\0') {
code_?:
      pLVar26 = (List_1_UnityEngine_Vector3_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar26,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      *unaff_FS_OFFSET = uVar1;
      return pLVar26;
    }
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar27 = (float)BoxMath::BoxMath_GetFaceAxisIndex(collectFace,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&UNK_?;
    boxRotation.w = fVar19;
    method_01 = RVar9;
    pVVar11 = BoxMath::BoxMath_CalcBoxFaceCenter
                        ((Vector3 *)&stack0xffffffb8,VVar14,VVar10,boxRotation,collectFace,
                         (MethodInfo *)0x0);
    uVar28 = pVVar11->x;
    boxRotation_00.w = fVar19;
    fVar29 = fVar7;
    pVVar11 = BoxMath::BoxMath_CalcBoxFaceNormal
                        ((Vector3 *)&stack0xffffffb8,boxCenter,boxSize,boxRotation_00,collectFace,
                         (MethodInfo *)0x0);
    fVar30 = pVVar11->z;
    fVar31 = collectEps + collectEps;
    fVar32 = fVar27;
    puStack_33 = (undefined *)fVar7;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       ((Vector3 *)&stack0xffffffb8,(int32_t)fVar27,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)&puStack_33,(int32_t)fVar27,fVar7 * collectBoxScale + fVar31,
               (MethodInfo *)0x0);
    iVar34 = ((int)fVar27 + 1) % 3;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       ((Vector3 *)&puStack_33,iVar34,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)&puStack_33,iVar34,fVar7 + fVar31,(MethodInfo *)0x0);
    iVar34 = ((int)fVar27 + 2) % 3;
    puVar35 = &UNK_?;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       ((Vector3 *)&puStack_33,iVar34,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)&puStack_33,iVar34,fVar7 + fVar31,(MethodInfo *)0x0);
    pVVar11 = (Vector3 *)&puStack_33;
    fVar31 = 0.0;
    puVar36 = &UNK_?;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       (pVVar11,(int32_t)fVar27,(MethodInfo *)0x0);
    fVar7 = (float)((uint)fVar7 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
             _UNK_? + collectEps;
    pLVar37 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              ((float)puVar35 + fVar30 * fVar7);
    VVar14.y = fVar31 * fVar7 + 4.4729082e-29;
    VVar14.x = (float)uVar28 + fVar27 * fVar7;
    VVar14.z = (float)pLVar37;
    VVar10.y = (float)puVar36;
    VVar10.x = (float)puStack_33;
    VVar10.z = (float)pVVar11;
    OBB::OBB__ctor((OBB *)&stack0xffffff34,VVar14,VVar10,(MethodInfo *)0x0);
    puVar35 = &UNK_?;
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,0x50,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    pLVar38 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffb4,pLVar37,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    RVar39 = pLVar38->_current;
    while( true ) {
      RVar40 = RVar39;
      bVar41 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff94,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                         );
      if (bVar41 == 0) break;
      fVar7 = fVar29;
      fVar30 = fVar8;
      RVar42 = RVar9;
      fVar27 = fVar16;
      RVar39 = RVar40;
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__GameObjectEx);
        fVar7 = fVar29;
        fVar30 = fVar8;
        RVar42 = RVar9;
        fVar27 = fVar16;
      }
      unityMesh = GameObjectEx::GameObjectEx_GetMesh((GameObject *)RVar40,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).cctor_finished_or_no_cctor == 0) {
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
      }
      pIVar43 = MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__->klass;
      pMVar44 = MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__;
      if (((uint)pIVar43->vtable[0].methodPtr & 0x100) == 0) {
        method_00 = (MethodInfo *)&UNK_?;
        pIVar43 = (Il2CppClass *)func_?();
      }
      pIVar43 = pIVar43->rgctx_data[2].klass;
      if (((uint)pIVar43->vtable[0].methodPtr & 0x100) == 0) {
        method_00 = (MethodInfo *)&UNK_?;
        pIVar43 = (Il2CppClass *)func_?();
      }
      if (pIVar43->cctor_finished_or_no_cctor == 0) {
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
      }
      pIVar43 = pMVar44->klass;
      if (((uint)pIVar43->vtable[0].methodPtr & 0x100) == 0) {
        method_00 = (MethodInfo *)&UNK_?;
        pIVar43 = (Il2CppClass *)func_?();
      }
      pIVar43 = pIVar43->rgctx_data[2].klass;
      if (((uint)pIVar43->vtable[0].methodPtr & 0x100) == 0) {
        method_00 = (MethodInfo *)&UNK_?;
        pIVar43 = (Il2CppClass *)func_?();
      }
      if (*(RTMeshDb **)pIVar43->static_fields == (RTMeshDb *)0x0) goto code_?;
      this_00 = RTMeshDb::RTMeshDb_GetRTMesh
                          (*(RTMeshDb **)pIVar43->static_fields,unityMesh,(MethodInfo *)0x0);
      fVar29 = fVar7;
      fVar8 = fVar30;
      RVar9 = RVar42;
      fVar16 = fVar27;
      if (this_00 != (RTMesh *)0x0) {
        if (RVar40 == (RegexCharClass_SingleRange)0x0) goto code_?;
        method_01.First = 0;
        method_01.Last = 0;
        fVar31 = fVar17;
        pLVar37 = pLVar5;
        fVar45 = fVar18;
        fVar46 = fVar19;
        fVar47 = fVar32;
        fVar48 = fVar12;
        fVar49 = fVar13;
        pTVar50 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)RVar40,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        obb._size.y = fVar48;
        obb._size.x = (float)pLVar37;
        obb._size.z = fVar49;
        obb._center.x = fVar7;
        obb._center.y = fVar30;
        obb._center.z = (float)RVar42;
        obb._rotation.x = fVar27;
        obb._rotation.y = fVar31;
        obb._rotation.z = fVar45;
        obb._rotation.w = fVar46;
        obb._40_4_ = fVar47;
        RTMesh::RTMesh_OverlapVerts
                  (this_00,obb,pTVar50,
                   TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer,
                   (MethodInfo *)0x0);
        pLVar26 = TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer;
        if (pLVar26 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((pLVar26->fields)._size != 0) {
          if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
          List_1_UnityEngine_Vector3__AddRange
                    ((List_1_UnityEngine_Vector3_ *)this,
                     (IEnumerable_1_UnityEngine_Vector3_ *)
                     TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer
                     ,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                    );
        }
      }
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff94,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,method_00);
    if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar38 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffb4,pLVar3,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                          );
      RVar39 = pLVar38->_current;
      while( true ) {
        bVar41 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff94,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                           );
        if (bVar41 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff94,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,(MethodInfo *)method_01);
          *unaff_FS_OFFSET = puVar35;
          return (List_1_UnityEngine_Vector3_ *)this;
        }
        pLVar3 = pLVar5;
        fVar7 = fVar12;
        fVar30 = fVar13;
        fVar27 = fVar29;
        fVar31 = fVar8;
        RVar40 = RVar9;
        fVar45 = fVar16;
        fVar46 = fVar17;
        fVar47 = fVar32;
        RVar42 = RVar39;
        if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pLVar3 = pLVar5;
          fVar7 = fVar12;
          fVar30 = fVar13;
          fVar27 = fVar29;
          fVar31 = fVar8;
          RVar40 = RVar9;
          fVar45 = fVar16;
          fVar46 = fVar17;
          fVar47 = fVar32;
        }
        sprite = GameObjectEx::GameObjectEx_GetSprite((GameObject *)RVar39,(MethodInfo *)0x0);
        if (RVar39 == (RegexCharClass_SingleRange)0x0) break;
        pTVar50 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)RVar39,(MethodInfo *)0x0);
        method_01 = RVar39;
        pLVar5 = pLVar3;
        fVar12 = fVar7;
        fVar13 = fVar30;
        fVar29 = fVar27;
        fVar8 = fVar31;
        RVar9 = RVar40;
        fVar16 = fVar45;
        fVar17 = fVar46;
        fVar32 = fVar47;
        fVar48 = fVar18;
        fVar49 = fVar19;
        if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          method_01 = RVar39;
        }
        RVar39 = RVar42;
        collectOBB._size.y = fVar7;
        collectOBB._size.x = (float)pLVar3;
        collectOBB._size.z = fVar30;
        collectOBB._center.x = fVar27;
        collectOBB._center.y = fVar31;
        collectOBB._center.z = (float)RVar40;
        collectOBB._rotation.x = fVar45;
        collectOBB._rotation.y = fVar46;
        collectOBB._rotation.z = fVar48;
        collectOBB._rotation.w = fVar49;
        collectOBB._40_4_ = fVar47;
        pLVar26 = ObjectVertexCollect_CollectWorldSpriteVerts
                            (sprite,pTVar50,collectOBB,(MethodInfo *)0x0);
        if (pLVar26 == (List_1_UnityEngine_Vector3_ *)0x0) break;
        if ((pLVar26->fields)._size != 0) {
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
          List_1_UnityEngine_Vector3__AddRange
                    ((List_1_UnityEngine_Vector3_ *)this,
                     (IEnumerable_1_UnityEngine_Vector3_ *)pLVar26,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                    );
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar51 = (code *)swi(3);
  pLVar26 = (List_1_UnityEngine_Vector3_ *)(*pcVar51)();
  return pLVar26;
}


/* List`1[UnityEngine.Vector3] CollectModelSpriteVerts(Sprite, AABB) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect_CollectModelSpriteVerts
          (Sprite *sprite,AABB collectAABB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?();
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if (sprite != (Sprite *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_vertices
                       (sprite,(MethodInfo *)0x0);
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    uVar2 = 0;
    if (pVVar1 != (Vector2__Array *)0x0) {
      pVVar3 = pVVar1->vector;
      while( true ) {
        if ((int)pVVar1->max_length <= (int)uVar2) {
          return (List_1_UnityEngine_Vector3_ *)this;
        }
        if (pVVar1->max_length <= uVar2) break;
        VVar4 = *pVVar3;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        boxRotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__BoxMath);
        }
        point.z = 0.0;
        point.x = pVVar3->x;
        point.y = pVVar3->y;
        bVar5 = BoxMath::BoxMath_ContainsPoint
                          (point,collectAABB._center,collectAABB._size,boxRotation,
                           (BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0);
        if (bVar5 != 0) {
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
          func_?(this,VVar4,0,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                         );
        }
        uVar2 = uVar2 + 1;
        pVVar3 = pVVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_Vector3_ *)(*pcVar6)();
  return pLVar7;
}


/* List`1[UnityEngine.Vector3] CollectWorldSpriteVerts(Sprite, Transform, OBB) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect_CollectWorldSpriteVerts
          (Sprite *sprite,Transform *spriteTransform,OBB collectOBB,MethodInfo *method)

{
  pLStack_1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
         SpriteEx::SpriteEx_GetWorldVerts(sprite,spriteTransform,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,7,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                        &stack0xffffffa8,this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar4->_version;
    uVar5 = (pLVar4->_current).asset;
    uVar6 = (pLVar4->_current).alias;
    uVar7 = (pLVar4->_current).path;
    point.y = (float)uVar7;
    point.x = (float)uVar6;
    pLStack_1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x1;
    while( true ) {
      do {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          ((List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                           &stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar8 == 0) {
          pLStack_1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Vector3_ *)this_00;
        }
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        point.z = (float)uVar5;
        bVar8 = BoxMath::BoxMath_ContainsPoint
                          (point,collectOBB._center,collectOBB._size,collectOBB._rotation,
                           (BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0);
      } while (bVar8 == 0);
      if (this_00 ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) break;
      pLStack_1 = this_00;
      func_?();
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
  return pLVar10;
}


/* ObjectVertexCollect() */

void Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__RTG__ObjectVertexCollect);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Vector3_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer = this;
  func_?(TypeInfo__RTG__ObjectVertexCollect->static_fields,this);
  return;
}

