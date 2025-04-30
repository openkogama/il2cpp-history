
/* AABB CalcHierarchyCollectionWorldAABB(IEnumerable`1[UnityEngine.GameObject],
   ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcHierarchyCollectionWorldAABB
                 (AABB *__return_storage_ptr__,IEnumerable_1_UnityEngine_GameObject_ *roots,
                 ObjectBounds_QueryConfig queryConfig,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  pAVar6 = AABB::AABB_GetInvalid(&AStack_7,(MethodInfo *)0x0);
  fVar8 = (pAVar6->_size).y;
  fVar9 = (pAVar6->_size).z;
  fVar10 = (pAVar6->_center).x;
  fVar11 = (pAVar6->_center).y;
  fVar12 = (pAVar6->_center).z;
  bVar13 = pAVar6->_isValid;
  uVar14 = *(undefined3 *)&pAVar6->field_0x19;
  (__return_storage_ptr__->_size).x = (pAVar6->_size).x;
  (__return_storage_ptr__->_size).y = fVar8;
  (__return_storage_ptr__->_size).z = fVar9;
  (__return_storage_ptr__->_center).x = fVar10;
  (__return_storage_ptr__->_center).y = fVar11;
  (__return_storage_ptr__->_center).z = fVar12;
  __return_storage_ptr__->_isValid = bVar13;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar14;
  if (roots != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    piStack_15 = (int *)func_?(0);
    ppiStack_16 = &piStack_15;
    uStack_17 = 0;
    uStack_1 = 1;
    while( true ) {
      if (piStack_15 == (int *)0x0) break;
      cVar18 = func_?(0);
      if (cVar18 == '\0') {
        uStack_1 = 0xffffffff;
        if (piStack_15 != (int *)0x0) {
          func_?(0);
          *unaff_FS_OFFSET = uStack_3;
          return __return_storage_ptr__;
        }
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      piStack_19 = piStack_15;
      if (piStack_15 == (int *)0x0) break;
      iVar20 = *piStack_15;
      uVar21 = 0;
      uStack_22 = 0;
      uVar23 = *(ushort *)(iVar20 + 0xb6);
      uStack_24 = (uint)uVar23;
      if (uVar23 != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(int *)(iVar20 + 0x58) + (uint)uVar21 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar25 = (undefined4 *)
                      (iVar20 + (*(int *)(*(int *)(iVar20 + 0x58) + 4 + (uint)uVar21 * 8) + 0x18) * 8)
            ;
            goto code_?;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar23);
      }
      puVar25 = (undefined4 *)func_?(piStack_15);
code_?:
      root = (GameObject *)(*(code *)*puVar25)();
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__ObjectBounds);
      }
      pAVar6 = ObjectBounds_CalcHierarchyWorldAABB(&AStack_26,root,queryConfig,(MethodInfo *)0x0);
      AStack_7._size.x = (pAVar6->_size).x;
      AStack_7._size.y = (pAVar6->_size).y;
      AStack_7._size.z = (pAVar6->_size).z;
      AStack_7._center.x = (pAVar6->_center).x;
      AStack_7._isValid = pAVar6->_isValid;
      AStack_7._25_3_ = *(undefined3 *)&pAVar6->field_0x19;
      AStack_7._center.y = (pAVar6->_center).y;
      AStack_7._center.z = (pAVar6->_center).z;
      if (AStack_7._isValid != 0) {
        fVar8 = (pAVar6->_size).y;
        fVar9 = (pAVar6->_size).z;
        fVar10 = (pAVar6->_center).x;
        uVar27 = (pAVar6->_size).x;
        uVar28 = (pAVar6->_size).y;
        uVar29 = (pAVar6->_size).z;
        aabb._size.z = (float)uVar29;
        aabb._size.y = (float)uVar28;
        aabb._size.x = (float)uVar27;
        uVar30 = (pAVar6->_center).x;
        aabb._center.x = (float)uVar30;
        if (__return_storage_ptr__->_isValid == 0) {
          fVar11 = (pAVar6->_center).y;
          fVar12 = (pAVar6->_center).z;
          (__return_storage_ptr__->_size).x = (pAVar6->_size).x;
          (__return_storage_ptr__->_size).y = fVar8;
          (__return_storage_ptr__->_size).z = fVar9;
          (__return_storage_ptr__->_center).x = fVar10;
          (__return_storage_ptr__->_center).y = fVar11;
          (__return_storage_ptr__->_center).z = fVar12;
          __return_storage_ptr__->_isValid = AStack_7._isValid;
          *(undefined3 *)&__return_storage_ptr__->field_0x19 = AStack_7._25_3_;
        }
        else {
          uVar31 = (pAVar6->_center).y;
          uVar32 = (pAVar6->_center).z;
          aabb._center.z = (float)uVar32;
          aabb._center.y = (float)uVar31;
          aabb._isValid = AStack_7._isValid;
          aabb._25_3_ = AStack_7._25_3_;
          AABB::AABB_Encapsulate_2(__return_storage_ptr__,aabb,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar33 = (code *)swi(3);
  pAVar6 = (AABB *)(*pcVar33)();
  return pAVar6;
}


/* AABB CalcHierarchyModelAABB(GameObject, ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcHierarchyModelAABB
                 (AABB *__return_storage_ptr__,GameObject *root,ObjectBounds_QueryConfig queryConfig
                 ,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffeb4;
  puVar5 = &stack0xfffffeb4;
  if (cRam_? == '\0') {
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
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  fStack_7 = 0.0;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  auStack_6._0_4_ = 0.0;
  auStack_6._4_4_ = (undefined *)0x0;
  auStack_6._8_4_ = (GameObject *)0x0;
  auStack_6._12_4_ = 0.0;
  if ((root != (GameObject *)0x0) &&
     (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (root,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                        ((Matrix4x4 *)&stack0xffffff00,pTVar8,(MethodInfo *)0x0);
    fVar10 = pMVar9->m00;
    fVar11 = pMVar9->m10;
    fVar12 = pMVar9->m20;
    fVar13 = pMVar9->m11;
    fVar14 = pMVar9->m21;
    fVar15 = pMVar9->m31;
    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
      MStack_16.m10 = (float)TypeInfo__RTG__GameObjectEx;
      MStack_16.m00 = (float)&UNK_?;
      func_?();
    }
    objectType = GameObjectEx::GameObjectEx_GetGameObjectType(root,(MethodInfo *)0x0);
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar17 = (AABB *)&stack0xffffffac;
    pGVar18 = root;
    puVar19 = (undefined *)queryConfig.ObjectTypes;
    pAVar20 = (AABB *)queryConfig.NoVolumeSize.x;
    fVar21 = queryConfig.NoVolumeSize.y;
    pAVar22 = ObjectBounds_CalcModelAABB(pAVar17,root,queryConfig,objectType,(MethodInfo *)0x0);
    fVar23 = 0.0;
    fVar24 = (pAVar22->_size).y;
    fVar25 = (pAVar22->_size).z;
    fVar26 = (pAVar22->_center).x;
    fVar27 = (pAVar22->_center).y;
    fVar28 = (pAVar22->_center).z;
    bVar29 = pAVar22->_isValid;
    uVar30 = *(undefined3 *)&pAVar22->field_0x19;
    (__return_storage_ptr__->_size).x = (pAVar22->_size).x;
    (__return_storage_ptr__->_size).y = fVar24;
    (__return_storage_ptr__->_size).z = fVar25;
    (__return_storage_ptr__->_center).x = fVar26;
    (__return_storage_ptr__->_center).y = fVar27;
    (__return_storage_ptr__->_center).z = fVar28;
    __return_storage_ptr__->_isValid = bVar29;
    *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar30;
    puVar31 = &UNK_?;
    this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           GameObjectEx::GameObjectEx_GetAllChildren(root,(MethodInfo *)0x0);
    if (this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 &stack0xffffffb8,this,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                );
      uStack_1 = 1;
      while( true ) {
        do {
          bVar29 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff9c,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             );
          if (bVar29 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffff9c,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                       ,in_stack_32);
            *unaff_FS_OFFSET = uStack_3;
            return __return_storage_ptr__;
          }
          if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          GStack_33 = GameObjectEx::GameObjectEx_GetGameObjectType
                                ((GameObject *)&UNK_?,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            in_stack_32 = (MethodInfo *)&UNK_?;
            func_?();
          }
          pAVar22 = ObjectBounds_CalcModelAABB
                              ((AABB *)&stack0xffffff40,(GameObject *)&UNK_?,queryConfig,
                               GStack_33,(MethodInfo *)0x0);
          auStack_6._0_4_ = (pAVar22->_size).x;
          auStack_6._4_4_ = (pAVar22->_size).y;
          auStack_6._8_4_ = (pAVar22->_size).z;
          auStack_6._12_4_ = (pAVar22->_center).x;
          auStack_6._16_4_ = (pAVar22->_center).y;
          auStack_6._20_4_ = (pAVar22->_center).z;
          fStack_7 = *(float *)&pAVar22->_isValid;
        } while (SUB41(fStack_7,0) == '\0');
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)&UNK_?,(MethodInfo *)0x0);
        if (pTVar8 == (Transform *)0x0) break;
        pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                  Transform_get_localToWorldMatrix
                            ((Matrix4x4 *)&stack0xffffff00,pTVar8,(MethodInfo *)0x0);
        referenceTransform.m10 = fVar11;
        referenceTransform.m00 = fVar10;
        referenceTransform.m20 = fVar12;
        referenceTransform.m30 = (float)&UNK_?;
        referenceTransform.m01 = fVar23;
        referenceTransform.m11 = fVar13;
        referenceTransform.m21 = fVar14;
        referenceTransform.m31 = fVar15;
        referenceTransform.m02 = (float)pAVar20;
        referenceTransform.m12 = fVar21;
        referenceTransform.m22 = (float)puVar31;
        referenceTransform.m32 = (float)root;
        referenceTransform.m03 = (float)&UNK_?;
        referenceTransform.m13 = (float)pAVar17;
        referenceTransform.m23 = (float)pGVar18;
        referenceTransform.m33 = (float)puVar19;
        pMVar9 = Matrix4x4Ex::Matrix4x4Ex_GetRelativeTransform
                            (&MStack_16,*pMVar9,referenceTransform,(MethodInfo *)0x0);
        MStack_16.m33 = (float)&UNK_?;
        AABB::AABB_Transform((AABB *)auStack_6,*pMVar9,(MethodInfo *)0x0);
        if (__return_storage_ptr__->_isValid == 0) {
          (__return_storage_ptr__->_size).x = (float)auStack_6._0_4_;
          (__return_storage_ptr__->_size).y = (float)auStack_6._4_4_;
          (__return_storage_ptr__->_size).z = (float)auStack_6._8_4_;
          (__return_storage_ptr__->_center).x = (float)auStack_6._12_4_;
          (__return_storage_ptr__->_center).y = (float)auStack_6._16_4_;
          (__return_storage_ptr__->_center).z = (float)auStack_6._20_4_;
          *(float *)&__return_storage_ptr__->_isValid = fStack_7;
        }
        else {
          fVar10 = 0.0;
          fVar13 = (float)auStack_6._16_8_;
          fVar14 = SUB84(auStack_6._16_8_,4);
          puVar19 = &UNK_?;
          aabb._size.y = (float)auStack_6._4_4_;
          aabb._size.x = (float)auStack_6._0_4_;
          aabb._size.z = (float)auStack_6._8_4_;
          aabb._center.x = (float)auStack_6._12_4_;
          aabb._center.y = fVar13;
          aabb._center.z = fVar14;
          aabb._24_4_ = fStack_7;
          pAVar20 = __return_storage_ptr__;
          fVar21 = (float)auStack_6._0_4_;
          puVar31 = (undefined *)auStack_6._4_4_;
          root = (GameObject *)auStack_6._8_4_;
          fVar23 = (float)auStack_6._12_4_;
          fVar15 = fStack_7;
          AABB::AABB_Encapsulate_2(__return_storage_ptr__,aabb,(MethodInfo *)0x0);
        }
      }
    }
  }
  uVar34 = func_?();
  func_?(uVar34);
  pcVar35 = (code *)swi(3);
  pAVar17 = (AABB *)(*pcVar35)();
  return pAVar17;
}


/* AABB CalcHierarchyWorldAABB(GameObject, ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcHierarchyWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *root,ObjectBounds_QueryConfig queryConfig
                 ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pAVar1 = ObjectBounds_CalcHierarchyModelAABB(&AStack_2,root,queryConfig,(MethodInfo *)0x0);
  AStack_3._size.x = (pAVar1->_size).x;
  AStack_3._size.y = (pAVar1->_size).y;
  AStack_3._size.z = (pAVar1->_size).z;
  AStack_3._center.x = (pAVar1->_center).x;
  AStack_3._center.y = (pAVar1->_center).y;
  AStack_3._center.z = (pAVar1->_center).z;
  AStack_3._isValid = pAVar1->_isValid;
  AStack_3._25_3_ = *(undefined3 *)&pAVar1->field_0x19;
  if (AStack_3._isValid != 0) {
    if (root != (GameObject *)0x0) {
      this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (root,(MethodInfo *)0x0);
      if (this != (Transform *)0x0) {
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_localToWorldMatrix
                           ((Matrix4x4 *)&stack0xffffff84,this,(MethodInfo *)0x0);
        AABB::AABB_Transform(&AStack_3,*pMVar4,(MethodInfo *)0x0);
        (__return_storage_ptr__->_size).x = AStack_3._size.x;
        (__return_storage_ptr__->_size).y = AStack_3._size.y;
        (__return_storage_ptr__->_size).z = AStack_3._size.z;
        (__return_storage_ptr__->_center).x = AStack_3._center.x;
        (__return_storage_ptr__->_center).y = AStack_3._center.y;
        (__return_storage_ptr__->_center).z = AStack_3._center.z;
        __return_storage_ptr__->_isValid = AStack_3._isValid;
        *(undefined3 *)&__return_storage_ptr__->field_0x19 = AStack_3._25_3_;
        return __return_storage_ptr__;
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar5)();
    return pAVar1;
  }
  pAVar1 = AABB::AABB_GetInvalid(&AStack_2,(MethodInfo *)0x0);
  fVar6 = (pAVar1->_size).y;
  fVar7 = (pAVar1->_size).z;
  fVar8 = (pAVar1->_center).x;
  bVar9 = pAVar1->_isValid;
  uVar10 = *(undefined3 *)&pAVar1->field_0x19;
  (__return_storage_ptr__->_size).x = (pAVar1->_size).x;
  (__return_storage_ptr__->_size).y = fVar6;
  (__return_storage_ptr__->_size).z = fVar7;
  (__return_storage_ptr__->_center).x = fVar8;
  fVar6 = (pAVar1->_center).z;
  (__return_storage_ptr__->_center).y = (pAVar1->_center).y;
  (__return_storage_ptr__->_center).z = fVar6;
  __return_storage_ptr__->_isValid = bVar9;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar10;
  return __return_storage_ptr__;
}


/* OBB CalcHierarchyWorldOBB(GameObject, ObjectBounds+QueryConfig) */

OBB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                (OBB *__return_storage_ptr__,GameObject *root,ObjectBounds_QueryConfig queryConfig,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pAVar1 = ObjectBounds_CalcHierarchyModelAABB
                      ((AABB *)&stack0xffffffc4,root,queryConfig,(MethodInfo *)0x0);
  uVar2 = *(undefined4 *)&pAVar1->_isValid;
  if ((char)uVar2 != '\0') {
    uVar3 = (pAVar1->_center).z;
    uVar4 = (pAVar1->_size).x;
    uVar5 = (pAVar1->_size).y;
    uVar6 = (pAVar1->_size).z;
    modelSpaceAABB._size.z = (float)uVar6;
    modelSpaceAABB._size.y = (float)uVar5;
    modelSpaceAABB._size.x = (float)uVar4;
    uVar7 = (pAVar1->_center).x;
    uVar8 = (pAVar1->_center).y;
    modelSpaceAABB._center.y = (float)uVar8;
    modelSpaceAABB._center.x = (float)uVar7;
    if (root != (GameObject *)0x0) {
      worldTransform =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (root,(MethodInfo *)0x0);
      func_?();
      modelSpaceAABB._center.z = (float)uVar3;
      modelSpaceAABB._24_4_ = uVar2;
      OBB::OBB__ctor_7(__return_storage_ptr__,modelSpaceAABB,worldTransform,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
    func_?();
    pcVar9 = (code *)swi(3);
    pOVar10 = (OBB *)(*pcVar9)();
    return pOVar10;
  }
  pOVar10 = OBB::OBB_GetInvalid((OBB *)&stack0xffffffb4,(MethodInfo *)0x0);
  fVar11 = (pOVar10->_size).y;
  fVar12 = (pOVar10->_size).z;
  fVar13 = (pOVar10->_center).x;
  (__return_storage_ptr__->_size).x = (pOVar10->_size).x;
  (__return_storage_ptr__->_size).y = fVar11;
  (__return_storage_ptr__->_size).z = fVar12;
  (__return_storage_ptr__->_center).x = fVar13;
  fVar11 = (pOVar10->_center).z;
  fVar12 = (pOVar10->_rotation).x;
  fVar13 = (pOVar10->_rotation).y;
  (__return_storage_ptr__->_center).y = (pOVar10->_center).y;
  (__return_storage_ptr__->_center).z = fVar11;
  (__return_storage_ptr__->_rotation).x = fVar12;
  (__return_storage_ptr__->_rotation).y = fVar13;
  fVar11 = (pOVar10->_rotation).w;
  (__return_storage_ptr__->_rotation).z = (pOVar10->_rotation).z;
  (__return_storage_ptr__->_rotation).w = fVar11;
  uVar14 = *(undefined3 *)&pOVar10->field_0x29;
  __return_storage_ptr__->_isValid = pOVar10->_isValid;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar14;
  return __return_storage_ptr__;
}


/* AABB CalcMeshModelAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcMeshModelAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  this = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (this != (Mesh *)0x0) {
      pBVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_bounds
                         ((Bounds *)&stack0xffffffe4,this,(MethodInfo *)0x0);
      bounds = *pBVar2;
      (__return_storage_ptr__->_size).x = 0.0;
      (__return_storage_ptr__->_size).y = 0.0;
      (__return_storage_ptr__->_size).z = 0.0;
      (__return_storage_ptr__->_center).x = 0.0;
      (__return_storage_ptr__->_center).y = 0.0;
      (__return_storage_ptr__->_center).z = 0.0;
      *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
      AABB::AABB__ctor_1(__return_storage_ptr__,bounds,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    pAVar4 = (AABB *)(*pcVar3)();
    return pAVar4;
  }
  pAVar4 = AABB::AABB_GetInvalid((AABB *)&stack0xffffffe0,(MethodInfo *)0x0);
  fVar5 = (pAVar4->_size).y;
  fVar6 = (pAVar4->_size).z;
  fVar7 = (pAVar4->_center).x;
  (__return_storage_ptr__->_size).x = (pAVar4->_size).x;
  (__return_storage_ptr__->_size).y = fVar5;
  (__return_storage_ptr__->_size).z = fVar6;
  (__return_storage_ptr__->_center).x = fVar7;
  fVar5 = (pAVar4->_center).z;
  (__return_storage_ptr__->_center).y = (pAVar4->_center).y;
  (__return_storage_ptr__->_center).z = fVar5;
  uVar8 = *(undefined3 *)&pAVar4->field_0x19;
  __return_storage_ptr__->_isValid = pAVar4->_isValid;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar8;
  return __return_storage_ptr__;
}


/* AABB CalcMeshWorldAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcMeshWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pAVar1 = ObjectBounds_CalcMeshModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  fVar3 = (pAVar1->_size).y;
  fVar4 = (pAVar1->_size).z;
  fVar5 = (pAVar1->_center).x;
  fVar6 = (pAVar1->_center).y;
  fVar7 = (pAVar1->_center).z;
  uVar8 = *(undefined4 *)&pAVar1->_isValid;
  (__return_storage_ptr__->_size).x = (pAVar1->_size).x;
  (__return_storage_ptr__->_size).y = fVar3;
  (__return_storage_ptr__->_size).z = fVar4;
  (__return_storage_ptr__->_center).x = fVar5;
  (__return_storage_ptr__->_center).y = fVar6;
  (__return_storage_ptr__->_center).z = fVar7;
  *(undefined4 *)&__return_storage_ptr__->_isValid = uVar8;
  if ((char)uVar8 == '\0') {
    return __return_storage_ptr__;
  }
  if ((gameObject != (GameObject *)0x0) &&
     (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0), this != (Transform *)0x0)) {
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                       ((Matrix4x4 *)&stack0xffffffa0,this,(MethodInfo *)0x0);
    AABB::AABB_Transform(__return_storage_ptr__,*pMVar9,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pAVar1 = (AABB *)(*pcVar10)();
  return pAVar1;
}


/* AABB CalcModelAABB(GameObject, ObjectBounds+QueryConfig, GameObjectType) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcModelAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,
                 ObjectBounds_QueryConfig queryConfig,GameObjectType__Enum objectType,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                   );
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((queryConfig.ObjectTypes & objectType) != 0) {
    if (objectType == GameObjectType__Enum_Mesh) {
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__GameObjectEx);
      }
      this_01 = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (this_01 != (Mesh *)0x0) {
          pBVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_bounds
                              ((Bounds *)&stack0xffffffd4,this_01,(MethodInfo *)0x0);
          uVar3 = (pBVar2->m_Extents).z;
          uVar4 = (pBVar2->m_Center).x;
          uVar5 = (pBVar2->m_Center).y;
          uVar6 = (pBVar2->m_Center).z;
          bounds.m_Center.z = (float)uVar6;
          bounds.m_Center.y = (float)uVar5;
          bounds.m_Center.x = (float)uVar4;
          uVar7 = (pBVar2->m_Extents).x;
          uVar8 = (pBVar2->m_Extents).y;
          bounds.m_Extents.y = (float)uVar8;
          bounds.m_Extents.x = (float)uVar7;
          (__return_storage_ptr__->_size).x = 0.0;
          (__return_storage_ptr__->_size).y = 0.0;
          (__return_storage_ptr__->_size).z = 0.0;
          (__return_storage_ptr__->_center).x = 0.0;
          (__return_storage_ptr__->_center).y = 0.0;
          (__return_storage_ptr__->_center).z = 0.0;
          *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
          bounds.m_Extents.z = (float)uVar3;
          AABB::AABB__ctor_1(__return_storage_ptr__,bounds,(MethodInfo *)0x0);
          return __return_storage_ptr__;
        }
        goto code_?;
      }
    }
    else {
      if (objectType == GameObjectType__Enum_Sprite) {
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__ObjectBounds);
        }
        pAVar9 = ObjectBounds_CalcSpriteModelAABB
                            ((AABB *)&stack0xffffffd0,gameObject,(MethodInfo *)0x0);
        goto code_?;
      }
      if (objectType != GameObjectType__Enum_Terrain) {
        pVVar10 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                            (&VStack_11,(MVWorldObject *)0x0,unaff_ESI);
        VVar12 = *pVVar10;
        (__return_storage_ptr__->_size).x = 0.0;
        (__return_storage_ptr__->_size).y = 0.0;
        (__return_storage_ptr__->_size).z = 0.0;
        (__return_storage_ptr__->_center).x = 0.0;
        (__return_storage_ptr__->_center).y = 0.0;
        (__return_storage_ptr__->_center).z = 0.0;
        *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
        AABB::AABB__ctor(__return_storage_ptr__,VVar12,queryConfig.NoVolumeSize,(MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
      if (gameObject == (GameObject *)0x0) {
code_?:
        func_?();
        pcVar13 = (code *)swi(3);
        pAVar9 = (AABB *)(*pcVar13)();
        return pAVar9;
      }
      this = (Terrain *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (gameObject,
                        UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                       );
      if (this == (Terrain *)0x0) goto code_?;
      this_00 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                          (this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (this_00 != (TerrainData *)0x0) {
          pBVar2 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_bounds
                              ((Bounds *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
          uVar14 = (pBVar2->m_Extents).y;
          uVar15 = (pBVar2->m_Extents).z;
          VStack_11.x = (pBVar2->m_Extents).x;
          fVar16 = (float)uVar14 * _UNK_?;
          fVar17 = VStack_11.x * _UNK_?;
          fVar18 = (float)uVar15 * _UNK_?;
          VStack_11.y = VStack_11.x;
          VStack_11.z = VStack_11.x;
          pBVar2 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_bounds
                              ((Bounds *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
          center = pBVar2->m_Center;
          (__return_storage_ptr__->_size).x = 0.0;
          (__return_storage_ptr__->_size).y = 0.0;
          (__return_storage_ptr__->_size).z = 0.0;
          (__return_storage_ptr__->_center).x = 0.0;
          (__return_storage_ptr__->_center).y = 0.0;
          (__return_storage_ptr__->_center).z = 0.0;
          *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
          VVar12.y = fVar16;
          VVar12.x = fVar17;
          VVar12.z = fVar18;
          AABB::AABB__ctor(__return_storage_ptr__,center,VVar12,(MethodInfo *)0x0);
          return __return_storage_ptr__;
        }
        goto code_?;
      }
    }
  }
  pAVar9 = AABB::AABB_GetInvalid((AABB *)&stack0xffffffd0,(MethodInfo *)0x0);
code_?:
  fVar16 = (pAVar9->_size).y;
  fVar18 = (pAVar9->_size).z;
  fVar17 = (pAVar9->_center).x;
  (__return_storage_ptr__->_size).x = (pAVar9->_size).x;
  (__return_storage_ptr__->_size).y = fVar16;
  (__return_storage_ptr__->_size).z = fVar18;
  (__return_storage_ptr__->_center).x = fVar17;
  fVar16 = (pAVar9->_center).z;
  (__return_storage_ptr__->_center).y = (pAVar9->_center).y;
  (__return_storage_ptr__->_center).z = fVar16;
  uVar19 = *(undefined3 *)&pAVar9->field_0x19;
  __return_storage_ptr__->_isValid = pAVar9->_isValid;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar19;
  return __return_storage_ptr__;
}


/* AABB CalcObjectCollectionWorldAABB(IEnumerable`1[UnityEngine.GameObject],
   ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcObjectCollectionWorldAABB
                 (AABB *__return_storage_ptr__,
                 IEnumerable_1_UnityEngine_GameObject_ *gameObjectCollection,
                 ObjectBounds_QueryConfig queryConfig,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  pAVar6 = AABB::AABB_GetInvalid(&AStack_7,(MethodInfo *)0x0);
  fVar8 = (pAVar6->_size).y;
  fVar9 = (pAVar6->_size).z;
  fVar10 = (pAVar6->_center).x;
  fVar11 = (pAVar6->_center).y;
  fVar12 = (pAVar6->_center).z;
  bVar13 = pAVar6->_isValid;
  uVar14 = *(undefined3 *)&pAVar6->field_0x19;
  (__return_storage_ptr__->_size).x = (pAVar6->_size).x;
  (__return_storage_ptr__->_size).y = fVar8;
  (__return_storage_ptr__->_size).z = fVar9;
  (__return_storage_ptr__->_center).x = fVar10;
  (__return_storage_ptr__->_center).y = fVar11;
  (__return_storage_ptr__->_center).z = fVar12;
  __return_storage_ptr__->_isValid = bVar13;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar14;
  if (gameObjectCollection != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    piStack_15 = (int *)func_?(0);
    ppiStack_16 = &piStack_15;
    uStack_17 = 0;
    uStack_1 = 1;
    while( true ) {
      if (piStack_15 == (int *)0x0) break;
      cVar18 = func_?(0);
      if (cVar18 == '\0') {
        uStack_1 = 0xffffffff;
        if (piStack_15 != (int *)0x0) {
          func_?(0);
          *unaff_FS_OFFSET = uStack_3;
          return __return_storage_ptr__;
        }
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      piStack_19 = piStack_15;
      if (piStack_15 == (int *)0x0) break;
      iVar20 = *piStack_15;
      uVar21 = 0;
      uStack_22 = 0;
      uVar23 = *(ushort *)(iVar20 + 0xb6);
      uStack_24 = (uint)uVar23;
      if (uVar23 != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(int *)(iVar20 + 0x58) + (uint)uVar21 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar25 = (undefined4 *)
                      (iVar20 + (*(int *)(*(int *)(iVar20 + 0x58) + 4 + (uint)uVar21 * 8) + 0x18) * 8)
            ;
            goto code_?;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar23);
      }
      puVar25 = (undefined4 *)func_?(piStack_15);
code_?:
      gameObject = (GameObject *)(*(code *)*puVar25)();
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__ObjectBounds);
      }
      pAVar6 = ObjectBounds_CalcWorldAABB(&AStack_26,gameObject,queryConfig,(MethodInfo *)0x0);
      AStack_7._size.x = (pAVar6->_size).x;
      AStack_7._size.y = (pAVar6->_size).y;
      AStack_7._size.z = (pAVar6->_size).z;
      AStack_7._center.x = (pAVar6->_center).x;
      AStack_7._isValid = pAVar6->_isValid;
      AStack_7._25_3_ = *(undefined3 *)&pAVar6->field_0x19;
      AStack_7._center.y = (pAVar6->_center).y;
      AStack_7._center.z = (pAVar6->_center).z;
      if (AStack_7._isValid != 0) {
        fVar8 = (pAVar6->_size).y;
        fVar9 = (pAVar6->_size).z;
        fVar10 = (pAVar6->_center).x;
        uVar27 = (pAVar6->_size).x;
        uVar28 = (pAVar6->_size).y;
        uVar29 = (pAVar6->_size).z;
        aabb._size.z = (float)uVar29;
        aabb._size.y = (float)uVar28;
        aabb._size.x = (float)uVar27;
        uVar30 = (pAVar6->_center).x;
        aabb._center.x = (float)uVar30;
        if (__return_storage_ptr__->_isValid == 0) {
          fVar11 = (pAVar6->_center).y;
          fVar12 = (pAVar6->_center).z;
          (__return_storage_ptr__->_size).x = (pAVar6->_size).x;
          (__return_storage_ptr__->_size).y = fVar8;
          (__return_storage_ptr__->_size).z = fVar9;
          (__return_storage_ptr__->_center).x = fVar10;
          (__return_storage_ptr__->_center).y = fVar11;
          (__return_storage_ptr__->_center).z = fVar12;
          __return_storage_ptr__->_isValid = AStack_7._isValid;
          *(undefined3 *)&__return_storage_ptr__->field_0x19 = AStack_7._25_3_;
        }
        else {
          uVar31 = (pAVar6->_center).y;
          uVar32 = (pAVar6->_center).z;
          aabb._center.z = (float)uVar32;
          aabb._center.y = (float)uVar31;
          aabb._isValid = AStack_7._isValid;
          aabb._25_3_ = AStack_7._25_3_;
          AABB::AABB_Encapsulate_2(__return_storage_ptr__,aabb,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar33 = (code *)swi(3);
  pAVar6 = (AABB *)(*pcVar33)();
  return pAVar6;
}


/* Rect CalcScreenRect(GameObject, Camera, ObjectBounds+QueryConfig) */

Rect * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcScreenRect
                 (Rect *__return_storage_ptr__,GameObject *gameObject,Camera *camera,
                 ObjectBounds_QueryConfig queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  queryConfig_00.NoVolumeSize.x = queryConfig.NoVolumeSize.x;
  queryConfig_00.ObjectTypes = queryConfig.ObjectTypes;
  queryConfig_00.NoVolumeSize.y = queryConfig.NoVolumeSize.y;
  queryConfig_00.NoVolumeSize.z = queryConfig.NoVolumeSize.z;
  pAVar1 = ObjectBounds_CalcWorldAABB
                     ((AABB *)&stack0xffffffc4,gameObject,queryConfig_00,(MethodInfo *)0x0);
  AStack_2._size.x = (pAVar1->_size).x;
  AStack_2._size.y = (pAVar1->_size).y;
  AStack_2._size.z = (pAVar1->_size).z;
  AStack_2._center.x = (pAVar1->_center).x;
  AStack_2._center.y = (pAVar1->_center).y;
  AStack_2._center.z = (pAVar1->_center).z;
  AStack_2._isValid = pAVar1->_isValid;
  AStack_2._25_3_ = *(undefined3 *)&pAVar1->field_0x19;
  if (AStack_2._isValid != 0) {
    pRVar3 = AABB::AABB_GetScreenRectangle((Rect *)&queryConfig,&AStack_2,camera,(MethodInfo *)0x0)
    ;
    fVar4 = pRVar3->m_YMin;
    fVar5 = pRVar3->m_Width;
    fVar6 = pRVar3->m_Height;
    __return_storage_ptr__->m_XMin = pRVar3->m_XMin;
    __return_storage_ptr__->m_YMin = fVar4;
    __return_storage_ptr__->m_Width = fVar5;
    __return_storage_ptr__->m_Height = fVar6;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->m_XMin = 0.0;
  __return_storage_ptr__->m_YMin = 0.0;
  __return_storage_ptr__->m_Width = 0.0;
  __return_storage_ptr__->m_Height = 0.0;
  return __return_storage_ptr__;
}


/* AABB CalcSpriteModelAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcSpriteModelAABB
                 (AABB *__return_storage_ptr__,GameObject *spriteObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__SpriteRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SpriteRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (spriteObject != (GameObject *)0x0) {
    spriteRenderer =
         (SpriteRenderer *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (spriteObject,
                    UnityEngine__SpriteRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SpriteRenderer>__
                   );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)spriteRenderer,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pAVar2 = SpriteRendererEx::SpriteRendererEx_GetModelSpaceAABB
                         ((AABB *)&stack0xffffffe0,spriteRenderer,(MethodInfo *)0x0);
    }
    else {
      pAVar2 = AABB::AABB_GetInvalid((AABB *)&stack0xffffffe0,(MethodInfo *)0x0);
    }
    fVar3 = (pAVar2->_size).y;
    fVar4 = (pAVar2->_size).z;
    fVar5 = (pAVar2->_center).x;
    bVar1 = pAVar2->_isValid;
    uVar6 = *(undefined3 *)&pAVar2->field_0x19;
    (__return_storage_ptr__->_size).x = (pAVar2->_size).x;
    (__return_storage_ptr__->_size).y = fVar3;
    (__return_storage_ptr__->_size).z = fVar4;
    (__return_storage_ptr__->_center).x = fVar5;
    fVar3 = (pAVar2->_center).z;
    (__return_storage_ptr__->_center).y = (pAVar2->_center).y;
    (__return_storage_ptr__->_center).z = fVar3;
    __return_storage_ptr__->_isValid = bVar1;
    *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pAVar2 = (AABB *)(*pcVar7)();
  return pAVar2;
}


/* AABB CalcSpriteWorldAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcSpriteWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pAVar1 = ObjectBounds_CalcSpriteModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  fVar3 = (pAVar1->_size).y;
  fVar4 = (pAVar1->_size).z;
  fVar5 = (pAVar1->_center).x;
  fVar6 = (pAVar1->_center).y;
  fVar7 = (pAVar1->_center).z;
  uVar8 = *(undefined4 *)&pAVar1->_isValid;
  (__return_storage_ptr__->_size).x = (pAVar1->_size).x;
  (__return_storage_ptr__->_size).y = fVar3;
  (__return_storage_ptr__->_size).z = fVar4;
  (__return_storage_ptr__->_center).x = fVar5;
  (__return_storage_ptr__->_center).y = fVar6;
  (__return_storage_ptr__->_center).z = fVar7;
  *(undefined4 *)&__return_storage_ptr__->_isValid = uVar8;
  if ((char)uVar8 == '\0') {
    return __return_storage_ptr__;
  }
  if ((gameObject != (GameObject *)0x0) &&
     (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0), this != (Transform *)0x0)) {
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                       ((Matrix4x4 *)&stack0xffffffa0,this,(MethodInfo *)0x0);
    AABB::AABB_Transform(__return_storage_ptr__,*pMVar9,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pAVar1 = (AABB *)(*pcVar10)();
  return pAVar1;
}


/* OBB CalcSpriteWorldOBB(GameObject) */

OBB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcSpriteWorldOBB
                (OBB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pAVar1 = ObjectBounds_CalcSpriteModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  fStack_3 = (pAVar1->_size).x;
  fStack_4 = (pAVar1->_size).y;
  fStack_5 = (pAVar1->_size).z;
  fStack_6 = (pAVar1->_center).x;
  uVar7 = *(undefined4 *)&pAVar1->_isValid;
  uStack_8._0_4_ = (pAVar1->_center).y;
  uStack_8._4_4_ = (pAVar1->_center).z;
  if ((char)uVar7 != '\0') {
    fStack_6 = (pAVar1->_size).x;
    uStack_8._0_4_ = (pAVar1->_size).y;
    uStack_8._4_4_ = (pAVar1->_size).z;
    fStack_9 = (pAVar1->_center).x;
    uStack_10._0_4_ = (pAVar1->_center).y;
    uStack_10._4_4_ = (pAVar1->_center).z;
    if (gameObject != (GameObject *)0x0) {
      worldTransform =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
      func_?(__return_storage_ptr__,0,0x2c);
      modelSpaceAABB._size.y = (float)uStack_8;
      modelSpaceAABB._size.x = fStack_6;
      modelSpaceAABB._size.z = uStack_8._4_4_;
      modelSpaceAABB._center.x = fStack_9;
      modelSpaceAABB._center.y = (float)(int)uStack_10;
      modelSpaceAABB._center.z = (float)(int)((ulonglong)uStack_10 >> 0x20);
      modelSpaceAABB._24_4_ = uVar7;
      OBB::OBB__ctor_7(__return_storage_ptr__,modelSpaceAABB,worldTransform,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
    func_?();
    pcVar11 = (code *)swi(3);
    pOVar12 = (OBB *)(*pcVar11)();
    return pOVar12;
  }
  fStack_9 = (float)uVar7;
  pOVar12 = OBB::OBB_GetInvalid((OBB *)&stack0xffffffac,(MethodInfo *)0x0);
  fVar13 = (pOVar12->_size).y;
  fVar14 = (pOVar12->_size).z;
  fVar15 = (pOVar12->_center).x;
  (__return_storage_ptr__->_size).x = (pOVar12->_size).x;
  (__return_storage_ptr__->_size).y = fVar13;
  (__return_storage_ptr__->_size).z = fVar14;
  (__return_storage_ptr__->_center).x = fVar15;
  fVar13 = (pOVar12->_center).z;
  fVar14 = (pOVar12->_rotation).x;
  fVar15 = (pOVar12->_rotation).y;
  (__return_storage_ptr__->_center).y = (pOVar12->_center).y;
  (__return_storage_ptr__->_center).z = fVar13;
  (__return_storage_ptr__->_rotation).x = fVar14;
  (__return_storage_ptr__->_rotation).y = fVar15;
  fVar13 = (pOVar12->_rotation).w;
  (__return_storage_ptr__->_rotation).z = (pOVar12->_rotation).z;
  (__return_storage_ptr__->_rotation).w = fVar13;
  uVar16 = *(undefined3 *)&pOVar12->field_0x29;
  __return_storage_ptr__->_isValid = pOVar12->_isValid;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar16;
  return __return_storage_ptr__;
}


/* AABB CalcWorldAABB(GameObject, ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,
                 ObjectBounds_QueryConfig queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  objectType = GameObjectEx::GameObjectEx_GetGameObjectType(gameObject,(MethodInfo *)0x0);
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pAVar1 = ObjectBounds_CalcModelAABB
                     (&AStack_2,gameObject,queryConfig,objectType,(MethodInfo *)0x0);
  fVar3 = (pAVar1->_size).y;
  fVar4 = (pAVar1->_size).z;
  fVar5 = (pAVar1->_center).x;
  fVar6 = (pAVar1->_center).y;
  fVar7 = (pAVar1->_center).z;
  uVar8 = *(undefined4 *)&pAVar1->_isValid;
  (__return_storage_ptr__->_size).x = (pAVar1->_size).x;
  (__return_storage_ptr__->_size).y = fVar3;
  (__return_storage_ptr__->_size).z = fVar4;
  (__return_storage_ptr__->_center).x = fVar5;
  (__return_storage_ptr__->_center).y = fVar6;
  (__return_storage_ptr__->_center).z = fVar7;
  *(undefined4 *)&__return_storage_ptr__->_isValid = uVar8;
  if ((char)uVar8 == '\0') {
    return __return_storage_ptr__;
  }
  if ((gameObject != (GameObject *)0x0) &&
     (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0), this != (Transform *)0x0)) {
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                       ((Matrix4x4 *)&stack0xffffffa0,this,(MethodInfo *)0x0);
    AABB::AABB_Transform(__return_storage_ptr__,*pMVar9,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pAVar1 = (AABB *)(*pcVar10)();
  return pAVar1;
}


/* OBB CalcWorldOBB(GameObject, ObjectBounds+QueryConfig) */

OBB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcWorldOBB
                (OBB *__return_storage_ptr__,GameObject *gameObject,
                ObjectBounds_QueryConfig queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  objectType = GameObjectEx::GameObjectEx_GetGameObjectType(gameObject,(MethodInfo *)0x0);
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pAVar1 = ObjectBounds_CalcModelAABB
                      ((AABB *)&stack0xffffffc4,gameObject,queryConfig,objectType,(MethodInfo *)0x0)
  ;
  uVar2 = *(undefined4 *)&pAVar1->_isValid;
  if ((char)uVar2 != '\0') {
    uVar3 = (pAVar1->_center).z;
    uVar4 = (pAVar1->_size).x;
    uVar5 = (pAVar1->_size).y;
    uVar6 = (pAVar1->_size).z;
    modelSpaceAABB._size.z = (float)uVar6;
    modelSpaceAABB._size.y = (float)uVar5;
    modelSpaceAABB._size.x = (float)uVar4;
    uVar7 = (pAVar1->_center).x;
    uVar8 = (pAVar1->_center).y;
    modelSpaceAABB._center.y = (float)uVar8;
    modelSpaceAABB._center.x = (float)uVar7;
    if (gameObject != (GameObject *)0x0) {
      worldTransform =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
      func_?();
      modelSpaceAABB._center.z = (float)uVar3;
      modelSpaceAABB._24_4_ = uVar2;
      OBB::OBB__ctor_7(__return_storage_ptr__,modelSpaceAABB,worldTransform,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
    func_?();
    pcVar9 = (code *)swi(3);
    pOVar10 = (OBB *)(*pcVar9)();
    return pOVar10;
  }
  pOVar10 = OBB::OBB_GetInvalid((OBB *)&stack0xffffffb4,(MethodInfo *)0x0);
  fVar11 = (pOVar10->_size).y;
  fVar12 = (pOVar10->_size).z;
  fVar13 = (pOVar10->_center).x;
  (__return_storage_ptr__->_size).x = (pOVar10->_size).x;
  (__return_storage_ptr__->_size).y = fVar11;
  (__return_storage_ptr__->_size).z = fVar12;
  (__return_storage_ptr__->_center).x = fVar13;
  fVar11 = (pOVar10->_center).z;
  fVar12 = (pOVar10->_rotation).x;
  fVar13 = (pOVar10->_rotation).y;
  (__return_storage_ptr__->_center).y = (pOVar10->_center).y;
  (__return_storage_ptr__->_center).z = fVar11;
  (__return_storage_ptr__->_rotation).x = fVar12;
  (__return_storage_ptr__->_rotation).y = fVar13;
  fVar11 = (pOVar10->_rotation).w;
  (__return_storage_ptr__->_rotation).z = (pOVar10->_rotation).z;
  (__return_storage_ptr__->_rotation).w = fVar11;
  uVar14 = *(undefined3 *)&pOVar10->field_0x29;
  __return_storage_ptr__->_isValid = pOVar10->_isValid;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar14;
  return __return_storage_ptr__;
}


/* AABB GetMeshWorldAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_GetMeshWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pAVar1 = ObjectBounds_CalcMeshModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  fVar3 = (pAVar1->_size).y;
  fVar4 = (pAVar1->_size).z;
  fVar5 = (pAVar1->_center).x;
  fVar6 = (pAVar1->_center).y;
  fVar7 = (pAVar1->_center).z;
  uVar8 = *(undefined4 *)&pAVar1->_isValid;
  (__return_storage_ptr__->_size).x = (pAVar1->_size).x;
  (__return_storage_ptr__->_size).y = fVar3;
  (__return_storage_ptr__->_size).z = fVar4;
  (__return_storage_ptr__->_center).x = fVar5;
  (__return_storage_ptr__->_center).y = fVar6;
  (__return_storage_ptr__->_center).z = fVar7;
  *(undefined4 *)&__return_storage_ptr__->_isValid = uVar8;
  if ((char)uVar8 == '\0') {
    return __return_storage_ptr__;
  }
  if ((gameObject != (GameObject *)0x0) &&
     (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0), this != (Transform *)0x0)) {
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                       ((Matrix4x4 *)&stack0xffffffa0,this,(MethodInfo *)0x0);
    AABB::AABB_Transform(__return_storage_ptr__,*pMVar9,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pAVar1 = (AABB *)(*pcVar10)();
  return pAVar1;
}


/* OBB GetMeshWorldOBB(GameObject) */

OBB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_GetMeshWorldOBB
                (OBB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pAVar1 = ObjectBounds_CalcMeshModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  fStack_3 = (pAVar1->_size).x;
  fStack_4 = (pAVar1->_size).y;
  fStack_5 = (pAVar1->_size).z;
  fStack_6 = (pAVar1->_center).x;
  uVar7 = *(undefined4 *)&pAVar1->_isValid;
  uStack_8._0_4_ = (pAVar1->_center).y;
  uStack_8._4_4_ = (pAVar1->_center).z;
  if ((char)uVar7 != '\0') {
    fStack_6 = (pAVar1->_size).x;
    uStack_8._0_4_ = (pAVar1->_size).y;
    uStack_8._4_4_ = (pAVar1->_size).z;
    fStack_9 = (pAVar1->_center).x;
    uStack_10._0_4_ = (pAVar1->_center).y;
    uStack_10._4_4_ = (pAVar1->_center).z;
    if (gameObject != (GameObject *)0x0) {
      worldTransform =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
      func_?(__return_storage_ptr__,0,0x2c);
      modelSpaceAABB._size.y = (float)uStack_8;
      modelSpaceAABB._size.x = fStack_6;
      modelSpaceAABB._size.z = uStack_8._4_4_;
      modelSpaceAABB._center.x = fStack_9;
      modelSpaceAABB._center.y = (float)(int)uStack_10;
      modelSpaceAABB._center.z = (float)(int)((ulonglong)uStack_10 >> 0x20);
      modelSpaceAABB._24_4_ = uVar7;
      OBB::OBB__ctor_7(__return_storage_ptr__,modelSpaceAABB,worldTransform,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
    func_?();
    pcVar11 = (code *)swi(3);
    pOVar12 = (OBB *)(*pcVar11)();
    return pOVar12;
  }
  fStack_9 = (float)uVar7;
  pOVar12 = OBB::OBB_GetInvalid((OBB *)&stack0xffffffac,(MethodInfo *)0x0);
  fVar13 = (pOVar12->_size).y;
  fVar14 = (pOVar12->_size).z;
  fVar15 = (pOVar12->_center).x;
  (__return_storage_ptr__->_size).x = (pOVar12->_size).x;
  (__return_storage_ptr__->_size).y = fVar13;
  (__return_storage_ptr__->_size).z = fVar14;
  (__return_storage_ptr__->_center).x = fVar15;
  fVar13 = (pOVar12->_center).z;
  fVar14 = (pOVar12->_rotation).x;
  fVar15 = (pOVar12->_rotation).y;
  (__return_storage_ptr__->_center).y = (pOVar12->_center).y;
  (__return_storage_ptr__->_center).z = fVar13;
  (__return_storage_ptr__->_rotation).x = fVar14;
  (__return_storage_ptr__->_rotation).y = fVar15;
  fVar13 = (pOVar12->_rotation).w;
  (__return_storage_ptr__->_rotation).z = (pOVar12->_rotation).z;
  (__return_storage_ptr__->_rotation).w = fVar13;
  uVar16 = *(undefined3 *)&pOVar12->field_0x29;
  __return_storage_ptr__->_isValid = pOVar12->_isValid;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar16;
  return __return_storage_ptr__;
}


/* ObjectBounds() */

void Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__RTG__ObjectBounds->static_fields;
  (pOVar1->_defaultQConfig).ObjectTypes = 0;
  (pOVar1->_defaultQConfig).NoVolumeSize.x = 0.0;
  (pOVar1->_defaultQConfig).NoVolumeSize.y = 0.0;
  (pOVar1->_defaultQConfig).NoVolumeSize.z = 0.0;
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  (TypeInfo__RTG__ObjectBounds->static_fields->_defaultQConfig).ObjectTypes =
       TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  pOVar1 = TypeInfo__RTG__ObjectBounds->static_fields;
  (pOVar1->_defaultQConfig).NoVolumeSize.x = (pVVar2->zeroVector).x;
  (pOVar1->_defaultQConfig).NoVolumeSize.y = fVar3;
  (pOVar1->_defaultQConfig).NoVolumeSize.z = fVar4;
  return;
}


/* ObjectBounds+QueryConfig get_DefaultQConfig() */

ObjectBounds_QueryConfig *
Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_get_DefaultQConfig
          (ObjectBounds_QueryConfig *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pOVar1 = TypeInfo__RTG__ObjectBounds->static_fields;
  fVar2 = (pOVar1->_defaultQConfig).NoVolumeSize.x;
  fVar3 = (pOVar1->_defaultQConfig).NoVolumeSize.y;
  fVar4 = (pOVar1->_defaultQConfig).NoVolumeSize.z;
  __return_storage_ptr__->ObjectTypes = (pOVar1->_defaultQConfig).ObjectTypes;
  (__return_storage_ptr__->NoVolumeSize).x = fVar2;
  (__return_storage_ptr__->NoVolumeSize).y = fVar3;
  (__return_storage_ptr__->NoVolumeSize).z = fVar4;
  return __return_storage_ptr__;
}

