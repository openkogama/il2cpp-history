
/* AABB CalcHierarchyCollectionWorldAABB(IEnumerable`1[UnityEngine.GameObject],
   ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcHierarchyCollectionWorldAABB
                 (AABB *__return_storage_ptr__,IEnumerable_1_UnityEngine_GameObject_ *roots,
                 ObjectBounds_QueryConfig *queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AStack_1._center.y = 0.0;
  AStack_1._center.z = 0.0;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (roots == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    plVar2 = (longlong *)
             FUN_?(0,
                           TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                           ,roots);
    while (plVar2 != (longlong *)0x0) {
      cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar3 == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plVar2);
        }
        return __return_storage_ptr__;
      }
      if (plVar2 == (longlong *)0x0) goto code_?;
      lVar4 = *plVar2;
      uVar5 = 0;
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar6 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10)
                      * 0x10 + 0x138 + lVar4);
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar6 = (undefined8 *)
               FUN_?(plVar2,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                             ,0);
code_?:
      root = (GameObject *)(*(code *)*puVar6)(plVar2,puVar6[1]);
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      AStack_1._size.x = (float)queryConfig->ObjectTypes;
      AStack_1._size.y = (queryConfig->NoVolumeSize).x;
      AStack_1._size.z = (queryConfig->NoVolumeSize).y;
      AStack_1._center.x = (queryConfig->NoVolumeSize).z;
      pAVar7 = ObjectBounds_CalcHierarchyWorldAABB
                          (&AStack_8,root,(ObjectBounds_QueryConfig *)&AStack_1,(MethodInfo *)0x0)
      ;
      uVar9._0_4_ = (pAVar7->_size).x;
      uVar9._4_4_ = (pAVar7->_size).y;
      uVar10 = *(undefined8 *)&(pAVar7->_size).z;
      uVar11._0_4_ = (pAVar7->_center).y;
      uVar11._4_4_ = (pAVar7->_center).z;
      uVar12._0_1_ = pAVar7->_isValid;
      uVar12._1_3_ = *(undefined3 *)&pAVar7->field_0x19;
      if ((bool)uVar12 != 0) {
        if (__return_storage_ptr__->_isValid == 0) {
          (__return_storage_ptr__->_size).x = (float)uVar9;
          (__return_storage_ptr__->_size).y = uVar9._4_4_;
          *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar10;
          (__return_storage_ptr__->_center).y = (float)uVar11;
          (__return_storage_ptr__->_center).z = uVar11._4_4_;
          __return_storage_ptr__->_isValid = (bool)uVar12;
          *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar12._1_3_;
        }
        else {
          AStack_1._size._0_8_ = uVar9;
          AStack_1._8_8_ = uVar10;
          AStack_1._center._4_8_ = uVar11;
          AStack_1._24_4_ = uVar12;
          AABB::AABB_Encapsulate_2(__return_storage_ptr__,&AStack_1,(MethodInfo *)0x0);
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  pAVar7 = (AABB *)(*pcVar13)();
  return pAVar7;
}


/* AABB CalcHierarchyModelAABB(GameObject, ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcHierarchyModelAABB
                 (AABB *__return_storage_ptr__,GameObject *root,
                 ObjectBounds_QueryConfig *queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if ((root != (GameObject *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (root,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MStack_2.m00 = 0.0;
    MStack_2.m10 = 0.0;
    MStack_2.m20 = 0.0;
    MStack_2.m30 = 0.0;
    MStack_2.m01 = 0.0;
    MStack_2.m11 = 0.0;
    MStack_2.m21 = 0.0;
    MStack_2.m31 = 0.0;
    MStack_2.m02 = 0.0;
    MStack_2.m12 = 0.0;
    MStack_2.m22 = 0.0;
    MStack_2.m32 = 0.0;
    MStack_2.m03 = 0.0;
    MStack_2.m13 = 0.0;
    MStack_2.m23 = 0.0;
    MStack_2.m33 = 0.0;
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pAVar5 = (AABB *)(*pcVar4)();
      return pAVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
code_?:
      FUN_?();
    }
    else {
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      uVar7 = MStack_2._56_8_;
      uVar8 = MStack_2._48_8_;
      uVar9 = MStack_2._40_8_;
      uVar10 = MStack_2._32_8_;
      uVar11 = MStack_2._24_8_;
      uVar12 = MStack_2._16_8_;
      uVar13 = MStack_2._8_8_;
      uVar6 = MStack_2._0_8_;
      if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      GVar14 = GameObjectEx::GameObjectEx_GetGameObjectType(root,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_15._0_4_ = queryConfig->ObjectTypes;
      auStack_15._4_4_ = (queryConfig->NoVolumeSize).x;
      auStack_15._8_8_ = *(undefined8 *)&(queryConfig->NoVolumeSize).y;
      pAVar5 = ObjectBounds_CalcModelAABB
                          (&AStack_16,root,(ObjectBounds_QueryConfig *)auStack_15,GVar14,
                           (MethodInfo *)0x0);
      fVar17 = (pAVar5->_size).y;
      uVar18 = *(undefined8 *)&(pAVar5->_size).z;
      fVar19 = (pAVar5->_center).y;
      fVar20 = (pAVar5->_center).z;
      bVar21 = pAVar5->_isValid;
      uVar22 = *(undefined3 *)&pAVar5->field_0x19;
      (__return_storage_ptr__->_size).x = (pAVar5->_size).x;
      (__return_storage_ptr__->_size).y = fVar17;
      *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar18;
      (__return_storage_ptr__->_center).y = fVar19;
      (__return_storage_ptr__->_center).z = fVar20;
      __return_storage_ptr__->_isValid = bVar21;
      *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar22;
      pLStack_23 = GameObjectEx::GameObjectEx_GetAllChildren(root,(MethodInfo *)0x0);
      if (pLStack_23 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar24 = (uint)((ulonglong)&pLStack_23 >> 0xc);
        puVar25 = (ulonglong *)((ulonglong)((uVar24 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar26 = *puVar25;
          LOCK();
          uVar27 = *puVar25;
          if (uVar26 == uVar27) {
            *puVar25 = uVar26 | 1L << (uVar24 & 0x3f);
          }
          UNLOCK();
        } while (uVar26 != uVar27);
      }
      lStack_28 = (ulonglong)(uint)(pLStack_23->fields)._version << 0x20;
      uStack_29._0_4_ = 0.0;
      uStack_29._4_4_ = 0.0;
      LStack_30._index = (undefined4)lStack_28;
      LStack_30._version = lStack_28._4_4_;
      LStack_30._current = (Object *)0x0;
      auStack_15._0_4_ = 0;
      auStack_15._4_4_ = 0.0;
      auStack_15._8_8_ = &LStack_30;
      LStack_30._list = (List_1_System_Object_ *)pLStack_23;
      while( true ) {
        do {
          bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_30,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             );
          gameObject = LStack_30._current;
          if (bVar21 == 0) {
            return __return_storage_ptr__;
          }
          if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
            FUN_?();
          }
          GVar14 = GameObjectEx::GameObjectEx_GetGameObjectType
                             ((GameObject *)gameObject,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLStack_23 = *(List_1_UnityEngine_GameObject_ **)queryConfig;
          lStack_28._0_4_ = (queryConfig->NoVolumeSize).y;
          lStack_28._4_4_ = (queryConfig->NoVolumeSize).z;
          pAVar5 = ObjectBounds_CalcModelAABB
                              (&AStack_31,(GameObject *)gameObject,
                               (ObjectBounds_QueryConfig *)&pLStack_23,GVar14,(MethodInfo *)0x0);
          AStack_16._size.x = (pAVar5->_size).x;
          AStack_16._size.y = (pAVar5->_size).y;
          AStack_16._size.z = (pAVar5->_size).z;
          AStack_16._center.x = (pAVar5->_center).x;
          AStack_16._center.y = (pAVar5->_center).y;
          AStack_16._center.z = (pAVar5->_center).z;
          AStack_16._isValid = pAVar5->_isValid;
          AStack_16._25_3_ = *(undefined3 *)&pAVar5->field_0x19;
        } while (AStack_16._isValid == 0);
        if ((GameObject *)gameObject == (GameObject *)0x0) break;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)gameObject,(MethodInfo *)0x0);
        if (pTVar1 == (Transform *)0x0) goto code_?;
        pMVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                  Transform_get_localToWorldMatrix(&MStack_33,pTVar1,(MethodInfo *)0x0);
        uVar18._0_4_ = pMVar32->m00;
        uVar18._4_4_ = pMVar32->m10;
        uVar34._0_4_ = pMVar32->m20;
        uVar34._4_4_ = pMVar32->m30;
        uVar35._0_4_ = pMVar32->m01;
        uVar35._4_4_ = pMVar32->m11;
        uVar36._0_4_ = pMVar32->m21;
        uVar36._4_4_ = pMVar32->m31;
        uVar37._0_4_ = pMVar32->m02;
        uVar37._4_4_ = pMVar32->m12;
        uVar38._0_4_ = pMVar32->m22;
        uVar38._4_4_ = pMVar32->m32;
        uVar39._0_4_ = pMVar32->m03;
        uVar39._4_4_ = pMVar32->m13;
        uVar40._0_4_ = pMVar32->m23;
        uVar40._4_4_ = pMVar32->m33;
        MStack_2._0_8_ = uVar6;
        MStack_2._8_8_ = uVar13;
        MStack_2._16_8_ = uVar12;
        MStack_2._24_8_ = uVar11;
        MStack_2._32_8_ = uVar10;
        MStack_2._40_8_ = uVar9;
        MStack_2._48_8_ = uVar8;
        MStack_2._56_8_ = uVar7;
        pMVar32 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                            (aMStack_41,&MStack_2,(MethodInfo *)0x0);
        MStack_33.m00 = pMVar32->m00;
        MStack_33.m10 = pMVar32->m10;
        MStack_33.m20 = pMVar32->m20;
        MStack_33.m30 = pMVar32->m30;
        MStack_33.m01 = pMVar32->m01;
        MStack_33.m11 = pMVar32->m11;
        MStack_33.m21 = pMVar32->m21;
        MStack_33.m31 = pMVar32->m31;
        MStack_33.m02 = pMVar32->m02;
        MStack_33.m12 = pMVar32->m12;
        MStack_33.m22 = pMVar32->m22;
        MStack_33.m32 = pMVar32->m32;
        MStack_33.m03 = pMVar32->m03;
        MStack_33.m13 = pMVar32->m13;
        MStack_33.m23 = pMVar32->m23;
        MStack_33.m33 = pMVar32->m33;
        MStack_2._0_8_ = uVar18;
        MStack_2._8_8_ = uVar34;
        MStack_2._16_8_ = uVar35;
        MStack_2._24_8_ = uVar36;
        MStack_2._32_8_ = uVar37;
        MStack_2._40_8_ = uVar38;
        MStack_2._48_8_ = uVar39;
        MStack_2._56_8_ = uVar40;
        pMVar32 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                            (aMStack_41,&MStack_33,&MStack_2,(MethodInfo *)0x0);
        MStack_33.m00 = pMVar32->m00;
        MStack_33.m10 = pMVar32->m10;
        MStack_33.m20 = pMVar32->m20;
        MStack_33.m30 = pMVar32->m30;
        MStack_33.m01 = pMVar32->m01;
        MStack_33.m11 = pMVar32->m11;
        MStack_33.m21 = pMVar32->m21;
        MStack_33.m31 = pMVar32->m31;
        MStack_33.m02 = pMVar32->m02;
        MStack_33.m12 = pMVar32->m12;
        MStack_33.m22 = pMVar32->m22;
        MStack_33.m32 = pMVar32->m32;
        MStack_33.m03 = pMVar32->m03;
        MStack_33.m13 = pMVar32->m13;
        MStack_33.m23 = pMVar32->m23;
        MStack_33.m33 = pMVar32->m33;
        AABB::AABB_Transform(&AStack_16,&MStack_33,(MethodInfo *)0x0);
        if (__return_storage_ptr__->_isValid == 0) {
          *(List_1_UnityEngine_GameObject_ **)&__return_storage_ptr__->_size =
               (List_1_UnityEngine_GameObject_ *)CONCAT44(AStack_16._size.y,AStack_16._size.x);
          *(longlong *)&(__return_storage_ptr__->_size).z =
               CONCAT44(AStack_16._center.x,AStack_16._size.z);
          (__return_storage_ptr__->_center).y = AStack_16._center.y;
          (__return_storage_ptr__->_center).z = AStack_16._center.z;
          __return_storage_ptr__->_isValid = AStack_16._isValid;
          *(undefined3 *)&__return_storage_ptr__->field_0x19 = AStack_16._25_3_;
        }
        else {
          uStack_29._0_4_ = AStack_16._center.y;
          uStack_29._4_4_ = AStack_16._center.z;
          bStack_42 = AStack_16._isValid;
          uStack_43 = AStack_16._25_3_;
          pLStack_23 = (List_1_UnityEngine_GameObject_ *)
                        CONCAT44(AStack_16._size.y,AStack_16._size.x);
          lStack_28 = CONCAT44(AStack_16._center.x,AStack_16._size.z);
          AABB::AABB_Encapsulate_2(__return_storage_ptr__,(AABB *)&pLStack_23,(MethodInfo *)0x0);
        }
      }
    }
    FUN_?();
    FUN_?();
    pcVar4 = (code *)swi(3);
    pAVar5 = (AABB *)(*pcVar4)();
    return pAVar5;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pAVar5 = (AABB *)(*pcVar4)();
  return pAVar5;
}


/* AABB CalcHierarchyWorldAABB(GameObject, ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcHierarchyWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *root,
                 ObjectBounds_QueryConfig *queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  AStack_1._size.x = (float)queryConfig->ObjectTypes;
  AStack_1._size.y = (queryConfig->NoVolumeSize).x;
  AStack_1._size.z = (queryConfig->NoVolumeSize).y;
  AStack_1._center.x = (queryConfig->NoVolumeSize).z;
  pAVar2 = ObjectBounds_CalcHierarchyModelAABB
                     (&AStack_3,root,(ObjectBounds_QueryConfig *)&AStack_1,(MethodInfo *)0x0);
  AStack_1._size.x = (pAVar2->_size).x;
  AStack_1._size.y = (pAVar2->_size).y;
  AStack_1._8_8_ = *(undefined8 *)&(pAVar2->_size).z;
  AStack_1._center.y = (pAVar2->_center).y;
  AStack_1._center.z = (pAVar2->_center).z;
  AStack_1._isValid = pAVar2->_isValid;
  AStack_1._25_3_ = *(undefined3 *)&pAVar2->field_0x19;
  if (AStack_1._isValid == 0) {
    AStack_1._isValid = 0;
    AStack_1._25_3_ = 0;
    (__return_storage_ptr__->_size).x = 0.0;
    (__return_storage_ptr__->_size).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
    (__return_storage_ptr__->_center).y = 0.0;
    (__return_storage_ptr__->_center).z = 0.0;
  }
  else {
    if ((root == (GameObject *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (root,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      pAVar2 = (AABB *)(*pcVar4)();
      return pAVar2;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MStack_5.m00 = 0.0;
    MStack_5.m10 = 0.0;
    MStack_5.m20 = 0.0;
    MStack_5.m30 = 0.0;
    MStack_5.m01 = 0.0;
    MStack_5.m11 = 0.0;
    MStack_5.m21 = 0.0;
    MStack_5.m31 = 0.0;
    MStack_5.m02 = 0.0;
    MStack_5.m12 = 0.0;
    MStack_5.m22 = 0.0;
    MStack_5.m32 = 0.0;
    MStack_5.m03 = 0.0;
    MStack_5.m13 = 0.0;
    MStack_5.m23 = 0.0;
    MStack_5.m33 = 0.0;
    pvVar6 = (obj->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pAVar2 = (AABB *)(*pcVar4)();
      return pAVar2;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar4 = (code *)swi(3);
      pAVar2 = (AABB *)(*pcVar4)();
      return pAVar2;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar6,&MStack_5);
    MStack_8.m00 = MStack_5.m00;
    MStack_8.m10 = MStack_5.m10;
    MStack_8.m20 = MStack_5.m20;
    MStack_8.m30 = MStack_5.m30;
    MStack_8.m01 = MStack_5.m01;
    MStack_8.m11 = MStack_5.m11;
    MStack_8.m21 = MStack_5.m21;
    MStack_8.m31 = MStack_5.m31;
    MStack_8.m02 = MStack_5.m02;
    MStack_8.m12 = MStack_5.m12;
    MStack_8.m22 = MStack_5.m22;
    MStack_8.m32 = MStack_5.m32;
    MStack_8.m03 = MStack_5.m03;
    MStack_8.m13 = MStack_5.m13;
    MStack_8.m23 = MStack_5.m23;
    MStack_8.m33 = MStack_5.m33;
    AABB::AABB_Transform(&AStack_1,&MStack_8,(MethodInfo *)0x0);
    (__return_storage_ptr__->_size).x = AStack_1._size.x;
    (__return_storage_ptr__->_size).y = AStack_1._size.y;
    *(undefined8 *)&(__return_storage_ptr__->_size).z = AStack_1._8_8_;
    (__return_storage_ptr__->_center).y = AStack_1._center.y;
    (__return_storage_ptr__->_center).z = AStack_1._center.z;
  }
  __return_storage_ptr__->_isValid = AStack_1._isValid;
  *(int3 *)&__return_storage_ptr__->field_0x19 = AStack_1._25_3_;
  return __return_storage_ptr__;
}


/* OBB CalcHierarchyWorldOBB(GameObject, ObjectBounds+QueryConfig) */

OBB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                (OBB *__return_storage_ptr__,GameObject *root,ObjectBounds_QueryConfig *queryConfig,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  AStack_1._size.x = (float)queryConfig->ObjectTypes;
  AStack_1._size.y = (queryConfig->NoVolumeSize).x;
  AStack_1._size.z = (queryConfig->NoVolumeSize).y;
  AStack_1._center.x = (queryConfig->NoVolumeSize).z;
  pAVar2 = ObjectBounds_CalcHierarchyModelAABB
                     (&AStack_3,root,(ObjectBounds_QueryConfig *)&AStack_1,(MethodInfo *)0x0);
  AStack_1._size.x = (pAVar2->_size).x;
  AStack_1._size.y = (pAVar2->_size).y;
  AStack_1._8_8_ = *(undefined8 *)&(pAVar2->_size).z;
  uVar4._0_4_ = (pAVar2->_center).y;
  uVar4._4_4_ = (pAVar2->_center).z;
  if (pAVar2->_isValid == 0) {
    (__return_storage_ptr__->_size).x = 0.0;
    (__return_storage_ptr__->_size).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
    (__return_storage_ptr__->_center).y = 0.0;
    (__return_storage_ptr__->_center).z = 0.0;
    (__return_storage_ptr__->_rotation).x = 0.0;
    (__return_storage_ptr__->_rotation).y = 0.0;
    (__return_storage_ptr__->_rotation).z = 0.0;
    (__return_storage_ptr__->_rotation).w = 0.0;
    *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  }
  else {
    uVar5._0_1_ = pAVar2->_isValid;
    uVar5._1_3_ = *(undefined3 *)&pAVar2->field_0x19;
    AStack_1._center._4_8_ = uVar4;
    if (root == (GameObject *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      pOVar7 = (OBB *)(*pcVar6)();
      return pOVar7;
    }
    worldTransform =
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                   (root,(MethodInfo *)0x0);
    (__return_storage_ptr__->_size).x = 0.0;
    (__return_storage_ptr__->_size).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
    (__return_storage_ptr__->_center).y = 0.0;
    (__return_storage_ptr__->_center).z = 0.0;
    (__return_storage_ptr__->_rotation).x = 0.0;
    (__return_storage_ptr__->_rotation).y = 0.0;
    (__return_storage_ptr__->_rotation).z = 0.0;
    (__return_storage_ptr__->_rotation).w = 0.0;
    *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
    AStack_1._center._4_8_ = uVar4;
    AStack_1._24_4_ = uVar5;
    OBB::OBB__ctor_7(__return_storage_ptr__,&AStack_1,worldTransform,(MethodInfo *)0x0);
  }
  return __return_storage_ptr__;
}


/* AABB CalcMeshModelAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcMeshModelAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  obj = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((obj->fields)._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_1 = 0;
      uStack_2 = 0;
      uStack_3 = 0;
      pvVar4 = (obj->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pAVar6 = (AABB *)(*pcVar5)();
        return pAVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        pAVar6 = (AABB *)(*pcVar5)();
        return pAVar6;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&uStack_1);
      *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
      __return_storage_ptr__->field_0x1b = 0;
      (__return_storage_ptr__->_center).x = (float)uStack_1;
      (__return_storage_ptr__->_center).y = uStack_1._4_4_;
      (__return_storage_ptr__->_center).z = (float)uStack_2;
      (__return_storage_ptr__->_size).x = uStack_2._4_4_ * TypeRef__System__Activator__T._0_4_;
      (__return_storage_ptr__->_size).y = (float)uStack_3 + (float)uStack_3;
      (__return_storage_ptr__->_size).z = uStack_3._4_4_ + uStack_3._4_4_;
      __return_storage_ptr__->_isValid = 1;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  return __return_storage_ptr__;
}


/* AABB CalcMeshWorldAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcMeshWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = ObjectBounds_CalcMeshModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  uVar3 = *(undefined4 *)&pAVar1->_isValid;
  fVar4 = (pAVar1->_center).y;
  fVar5 = (pAVar1->_center).z;
  fVar6 = (pAVar1->_size).y;
  uVar7 = *(undefined8 *)&(pAVar1->_size).z;
  (__return_storage_ptr__->_size).x = (pAVar1->_size).x;
  (__return_storage_ptr__->_size).y = fVar6;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar7;
  (__return_storage_ptr__->_center).y = fVar4;
  (__return_storage_ptr__->_center).z = fVar5;
  *(undefined4 *)&__return_storage_ptr__->_isValid = uVar3;
  if ((char)uVar3 == '\0') {
    return __return_storage_ptr__;
  }
  if ((gameObject == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (gameObject,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar8)();
    return pAVar1;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MStack_9.m00 = 0.0;
  MStack_9.m10 = 0.0;
  MStack_9.m20 = 0.0;
  MStack_9.m30 = 0.0;
  MStack_9.m01 = 0.0;
  MStack_9.m11 = 0.0;
  MStack_9.m21 = 0.0;
  MStack_9.m31 = 0.0;
  MStack_9.m02 = 0.0;
  MStack_9.m12 = 0.0;
  MStack_9.m22 = 0.0;
  MStack_9.m32 = 0.0;
  MStack_9.m03 = 0.0;
  MStack_9.m13 = 0.0;
  MStack_9.m23 = 0.0;
  MStack_9.m33 = 0.0;
  pvVar10 = (obj->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar8)();
    return pAVar1;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar8 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar8)();
    return pAVar1;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(pvVar10,&MStack_9);
  MStack_11.m00 = MStack_9.m00;
  MStack_11.m10 = MStack_9.m10;
  MStack_11.m20 = MStack_9.m20;
  MStack_11.m30 = MStack_9.m30;
  MStack_11.m01 = MStack_9.m01;
  MStack_11.m11 = MStack_9.m11;
  MStack_11.m21 = MStack_9.m21;
  MStack_11.m31 = MStack_9.m31;
  MStack_11.m02 = MStack_9.m02;
  MStack_11.m12 = MStack_9.m12;
  MStack_11.m22 = MStack_9.m22;
  MStack_11.m32 = MStack_9.m32;
  MStack_11.m03 = MStack_9.m03;
  MStack_11.m13 = MStack_9.m13;
  MStack_11.m23 = MStack_9.m23;
  MStack_11.m33 = MStack_9.m33;
  AABB::AABB_Transform(__return_storage_ptr__,&MStack_11,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* AABB CalcModelAABB(GameObject, ObjectBounds+QueryConfig, GameObjectType) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcModelAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,
                 ObjectBounds_QueryConfig *queryConfig,GameObjectType__Enum objectType,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((queryConfig->ObjectTypes & objectType) != 0) {
    if (objectType != GameObjectType__Enum_Mesh) {
      if (objectType != GameObjectType__Enum_Sprite) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
        *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
        __return_storage_ptr__->field_0x1b = 0;
        fVar2 = (pVVar1->zeroVector).y;
        fVar3 = (pVVar1->zeroVector).z;
        (__return_storage_ptr__->_center).x = (pVVar1->zeroVector).x;
        (__return_storage_ptr__->_center).y = fVar2;
        fVar2 = (queryConfig->NoVolumeSize).x;
        fVar4 = (queryConfig->NoVolumeSize).y;
        (__return_storage_ptr__->_center).z = fVar3;
        fVar3 = (queryConfig->NoVolumeSize).z;
        (__return_storage_ptr__->_size).x = fVar2;
        (__return_storage_ptr__->_size).y = fVar4;
        (__return_storage_ptr__->_size).z = fVar3;
        __return_storage_ptr__->_isValid = 1;
        return __return_storage_ptr__;
      }
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      pAVar5 = ObjectBounds_CalcSpriteModelAABB(&AStack_6,gameObject,(MethodInfo *)0x0);
      fVar3 = (pAVar5->_size).y;
      uVar7 = *(undefined8 *)&(pAVar5->_size).z;
      fVar2 = (pAVar5->_center).y;
      fVar4 = (pAVar5->_center).z;
      uVar8 = *(undefined4 *)&pAVar5->_isValid;
      (__return_storage_ptr__->_size).x = (pAVar5->_size).x;
      (__return_storage_ptr__->_size).y = fVar3;
      *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar7;
      (__return_storage_ptr__->_center).y = fVar2;
      (__return_storage_ptr__->_center).z = fVar4;
      goto code_?;
    }
    if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    obj = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj != (Mesh *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((obj->fields)._.m_CachedPtr != (void *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        AStack_6._size.x = 0.0;
        AStack_6._size.y = 0.0;
        AStack_6._size.z = 0.0;
        AStack_6._center.x = 0.0;
        AStack_6._center.y = 0.0;
        AStack_6._center.z = 0.0;
        pvVar9 = (obj->fields)._.m_CachedPtr;
        if (pvVar9 != (void *)0x0) {
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar10 = (code *)swi(3);
            pAVar5 = (AABB *)(*pcVar10)();
            return pAVar5;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar9,&AStack_6);
          *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
          __return_storage_ptr__->field_0x1b = 0;
          (__return_storage_ptr__->_center).x = AStack_6._size.x;
          (__return_storage_ptr__->_center).y = AStack_6._size.y;
          (__return_storage_ptr__->_center).z = AStack_6._size.z;
          (__return_storage_ptr__->_size).x =
               AStack_6._center.x * TypeRef__System__Activator__T._0_4_;
          (__return_storage_ptr__->_size).y = AStack_6._center.y + AStack_6._center.y;
          (__return_storage_ptr__->_size).z = AStack_6._center.z + AStack_6._center.z;
          __return_storage_ptr__->_isValid = 1;
          return __return_storage_ptr__;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        pAVar5 = (AABB *)(*pcVar10)();
        return pAVar5;
      }
    }
  }
  uVar8 = 0;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
code_?:
  *(undefined4 *)&__return_storage_ptr__->_isValid = uVar8;
  return __return_storage_ptr__;
}


/* AABB CalcObjectCollectionWorldAABB(IEnumerable`1[UnityEngine.GameObject],
   ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcObjectCollectionWorldAABB
                 (AABB *__return_storage_ptr__,
                 IEnumerable_1_UnityEngine_GameObject_ *gameObjectCollection,
                 ObjectBounds_QueryConfig *queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AStack_1._center.y = 0.0;
  AStack_1._center.z = 0.0;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (gameObjectCollection == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    plVar2 = (longlong *)
             FUN_?(0,
                           TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                           ,gameObjectCollection);
    while (plVar2 != (longlong *)0x0) {
      cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar3 == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plVar2);
        }
        return __return_storage_ptr__;
      }
      if (plVar2 == (longlong *)0x0) goto code_?;
      lVar4 = *plVar2;
      uVar5 = 0;
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar6 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10)
                      * 0x10 + 0x138 + lVar4);
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar6 = (undefined8 *)
               FUN_?(plVar2,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                             ,0);
code_?:
      gameObject = (GameObject *)(*(code *)*puVar6)(plVar2,puVar6[1]);
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      AStack_1._size.x = (float)queryConfig->ObjectTypes;
      AStack_1._size.y = (queryConfig->NoVolumeSize).x;
      AStack_1._size.z = (queryConfig->NoVolumeSize).y;
      AStack_1._center.x = (queryConfig->NoVolumeSize).z;
      pAVar7 = ObjectBounds_CalcWorldAABB
                          (&AStack_8,gameObject,(ObjectBounds_QueryConfig *)&AStack_1,
                           (MethodInfo *)0x0);
      uVar9._0_4_ = (pAVar7->_size).x;
      uVar9._4_4_ = (pAVar7->_size).y;
      uVar10 = *(undefined8 *)&(pAVar7->_size).z;
      uVar11._0_4_ = (pAVar7->_center).y;
      uVar11._4_4_ = (pAVar7->_center).z;
      uVar12._0_1_ = pAVar7->_isValid;
      uVar12._1_3_ = *(undefined3 *)&pAVar7->field_0x19;
      if ((bool)uVar12 != 0) {
        if (__return_storage_ptr__->_isValid == 0) {
          (__return_storage_ptr__->_size).x = (float)uVar9;
          (__return_storage_ptr__->_size).y = uVar9._4_4_;
          *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar10;
          (__return_storage_ptr__->_center).y = (float)uVar11;
          (__return_storage_ptr__->_center).z = uVar11._4_4_;
          __return_storage_ptr__->_isValid = (bool)uVar12;
          *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar12._1_3_;
        }
        else {
          AStack_1._size._0_8_ = uVar9;
          AStack_1._8_8_ = uVar10;
          AStack_1._center._4_8_ = uVar11;
          AStack_1._24_4_ = uVar12;
          AABB::AABB_Encapsulate_2(__return_storage_ptr__,&AStack_1,(MethodInfo *)0x0);
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  pAVar7 = (AABB *)(*pcVar13)();
  return pAVar7;
}


/* Rect CalcScreenRect(GameObject, Camera, ObjectBounds+QueryConfig) */

Rect * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcScreenRect
                 (Rect *__return_storage_ptr__,GameObject *gameObject,Camera *camera,
                 ObjectBounds_QueryConfig *queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_1.m_XMin = (float)queryConfig->ObjectTypes;
  RStack_1.m_YMin = (queryConfig->NoVolumeSize).x;
  RStack_1.m_Width = (queryConfig->NoVolumeSize).y;
  RStack_1.m_Height = (queryConfig->NoVolumeSize).z;
  pAVar2 = ObjectBounds_CalcWorldAABB
                     (&AStack_3,gameObject,(ObjectBounds_QueryConfig *)&RStack_1,(MethodInfo *)0x0
                     );
  AStack_4._size.x = (pAVar2->_size).x;
  AStack_4._size.y = (pAVar2->_size).y;
  AStack_4._8_8_ = *(undefined8 *)&(pAVar2->_size).z;
  AStack_4._center.y = (pAVar2->_center).y;
  AStack_4._center.z = (pAVar2->_center).z;
  AStack_4._isValid = pAVar2->_isValid;
  AStack_4._25_3_ = *(undefined3 *)&pAVar2->field_0x19;
  if (AStack_4._isValid == 0) {
    __return_storage_ptr__->m_XMin = 0.0;
    __return_storage_ptr__->m_YMin = 0.0;
    __return_storage_ptr__->m_Width = 0.0;
    __return_storage_ptr__->m_Height = 0.0;
  }
  else {
    pRVar5 = AABB::AABB_GetScreenRectangle(&RStack_1,&AStack_4,camera,(MethodInfo *)0x0);
    fVar6 = pRVar5->m_YMin;
    fVar7 = pRVar5->m_Width;
    fVar8 = pRVar5->m_Height;
    __return_storage_ptr__->m_XMin = pRVar5->m_XMin;
    __return_storage_ptr__->m_YMin = fVar6;
    __return_storage_ptr__->m_Width = fVar7;
    __return_storage_ptr__->m_Height = fVar8;
  }
  return __return_storage_ptr__;
}


/* AABB CalcSpriteModelAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcSpriteModelAABB
                 (AABB *__return_storage_ptr__,GameObject *spriteObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__SpriteRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SpriteRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (spriteObject == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pAVar2 = (AABB *)(*pcVar1)();
    return pAVar2;
  }
  spriteRenderer =
       (SpriteRenderer *)
       UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                 (spriteObject,
                  UnityEngine__SpriteRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SpriteRenderer>__
                 );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (spriteRenderer != (SpriteRenderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((spriteRenderer->fields)._._._.m_CachedPtr != (void *)0x0) {
      pAVar2 = SpriteRendererEx::SpriteRendererEx_GetModelSpaceAABB
                         (&AStack_3,spriteRenderer,(MethodInfo *)0x0);
      fVar4 = (pAVar2->_size).y;
      uVar5 = *(undefined8 *)&(pAVar2->_size).z;
      fVar6 = (pAVar2->_center).y;
      fVar7 = (pAVar2->_center).z;
      bVar8 = pAVar2->_isValid;
      uVar9 = *(undefined3 *)&pAVar2->field_0x19;
      (__return_storage_ptr__->_size).x = (pAVar2->_size).x;
      (__return_storage_ptr__->_size).y = fVar4;
      *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar5;
      (__return_storage_ptr__->_center).y = fVar6;
      (__return_storage_ptr__->_center).z = fVar7;
      __return_storage_ptr__->_isValid = bVar8;
      *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar9;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  return __return_storage_ptr__;
}


/* AABB CalcSpriteWorldAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcSpriteWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = ObjectBounds_CalcSpriteModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  uVar3 = *(undefined4 *)&pAVar1->_isValid;
  fVar4 = (pAVar1->_center).y;
  fVar5 = (pAVar1->_center).z;
  fVar6 = (pAVar1->_size).y;
  uVar7 = *(undefined8 *)&(pAVar1->_size).z;
  (__return_storage_ptr__->_size).x = (pAVar1->_size).x;
  (__return_storage_ptr__->_size).y = fVar6;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar7;
  (__return_storage_ptr__->_center).y = fVar4;
  (__return_storage_ptr__->_center).z = fVar5;
  *(undefined4 *)&__return_storage_ptr__->_isValid = uVar3;
  if ((char)uVar3 == '\0') {
    return __return_storage_ptr__;
  }
  if ((gameObject == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (gameObject,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar8)();
    return pAVar1;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MStack_9.m00 = 0.0;
  MStack_9.m10 = 0.0;
  MStack_9.m20 = 0.0;
  MStack_9.m30 = 0.0;
  MStack_9.m01 = 0.0;
  MStack_9.m11 = 0.0;
  MStack_9.m21 = 0.0;
  MStack_9.m31 = 0.0;
  MStack_9.m02 = 0.0;
  MStack_9.m12 = 0.0;
  MStack_9.m22 = 0.0;
  MStack_9.m32 = 0.0;
  MStack_9.m03 = 0.0;
  MStack_9.m13 = 0.0;
  MStack_9.m23 = 0.0;
  MStack_9.m33 = 0.0;
  pvVar10 = (obj->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar8)();
    return pAVar1;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar8 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar8)();
    return pAVar1;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(pvVar10,&MStack_9);
  MStack_11.m00 = MStack_9.m00;
  MStack_11.m10 = MStack_9.m10;
  MStack_11.m20 = MStack_9.m20;
  MStack_11.m30 = MStack_9.m30;
  MStack_11.m01 = MStack_9.m01;
  MStack_11.m11 = MStack_9.m11;
  MStack_11.m21 = MStack_9.m21;
  MStack_11.m31 = MStack_9.m31;
  MStack_11.m02 = MStack_9.m02;
  MStack_11.m12 = MStack_9.m12;
  MStack_11.m22 = MStack_9.m22;
  MStack_11.m32 = MStack_9.m32;
  MStack_11.m03 = MStack_9.m03;
  MStack_11.m13 = MStack_9.m13;
  MStack_11.m23 = MStack_9.m23;
  MStack_11.m33 = MStack_9.m33;
  AABB::AABB_Transform(__return_storage_ptr__,&MStack_11,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* OBB CalcSpriteWorldOBB(GameObject) */

OBB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcSpriteWorldOBB
                (OBB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = ObjectBounds_CalcSpriteModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  AStack_3._size.x = (pAVar1->_size).x;
  AStack_3._size.y = (pAVar1->_size).y;
  AStack_3._8_8_ = *(undefined8 *)&(pAVar1->_size).z;
  uVar4._0_4_ = (pAVar1->_center).y;
  uVar4._4_4_ = (pAVar1->_center).z;
  if (pAVar1->_isValid != 0) {
    uVar5._0_1_ = pAVar1->_isValid;
    uVar5._1_3_ = *(undefined3 *)&pAVar1->field_0x19;
    AStack_3._center._4_8_ = uVar4;
    if (gameObject != (GameObject *)0x0) {
      worldTransform =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
      (__return_storage_ptr__->_size).x = 0.0;
      (__return_storage_ptr__->_size).y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
      (__return_storage_ptr__->_center).y = 0.0;
      (__return_storage_ptr__->_center).z = 0.0;
      (__return_storage_ptr__->_rotation).x = 0.0;
      (__return_storage_ptr__->_rotation).y = 0.0;
      (__return_storage_ptr__->_rotation).z = 0.0;
      (__return_storage_ptr__->_rotation).w = 0.0;
      *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
      AStack_3._center._4_8_ = uVar4;
      AStack_3._24_4_ = uVar5;
      OBB::OBB__ctor_7(__return_storage_ptr__,&AStack_3,worldTransform,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    pOVar7 = (OBB *)(*pcVar6)();
    return pOVar7;
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  (__return_storage_ptr__->_rotation).x = 0.0;
  (__return_storage_ptr__->_rotation).y = 0.0;
  (__return_storage_ptr__->_rotation).z = 0.0;
  (__return_storage_ptr__->_rotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  return __return_storage_ptr__;
}


/* AABB CalcWorldAABB(GameObject, ObjectBounds+QueryConfig) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,
                 ObjectBounds_QueryConfig *queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  objectType = GameObjectEx::GameObjectEx_GetGameObjectType(gameObject,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_1.ObjectTypes = queryConfig->ObjectTypes;
  OStack_1.NoVolumeSize.x = (queryConfig->NoVolumeSize).x;
  OStack_1.NoVolumeSize.y = (queryConfig->NoVolumeSize).y;
  OStack_1.NoVolumeSize.z = (queryConfig->NoVolumeSize).z;
  pAVar2 = ObjectBounds_CalcModelAABB(&AStack_3,gameObject,&OStack_1,objectType,(MethodInfo *)0x0)
  ;
  uVar4 = *(undefined4 *)&pAVar2->_isValid;
  fVar5 = (pAVar2->_center).y;
  fVar6 = (pAVar2->_center).z;
  fVar7 = (pAVar2->_size).y;
  uVar8 = *(undefined8 *)&(pAVar2->_size).z;
  (__return_storage_ptr__->_size).x = (pAVar2->_size).x;
  (__return_storage_ptr__->_size).y = fVar7;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar8;
  (__return_storage_ptr__->_center).y = fVar5;
  (__return_storage_ptr__->_center).z = fVar6;
  *(undefined4 *)&__return_storage_ptr__->_isValid = uVar4;
  if ((char)uVar4 != '\0') {
    if ((gameObject == (GameObject *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (gameObject,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      pAVar2 = (AABB *)(*pcVar9)();
      return pAVar2;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MStack_10.m00 = 0.0;
    MStack_10.m10 = 0.0;
    MStack_10.m20 = 0.0;
    MStack_10.m30 = 0.0;
    MStack_10.m01 = 0.0;
    MStack_10.m11 = 0.0;
    MStack_10.m21 = 0.0;
    MStack_10.m31 = 0.0;
    MStack_10.m02 = 0.0;
    MStack_10.m12 = 0.0;
    MStack_10.m22 = 0.0;
    MStack_10.m32 = 0.0;
    MStack_10.m03 = 0.0;
    MStack_10.m13 = 0.0;
    MStack_10.m23 = 0.0;
    MStack_10.m33 = 0.0;
    pvVar11 = (obj->fields)._._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      pAVar2 = (AABB *)(*pcVar9)();
      return pAVar2;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar9 = (code *)swi(3);
      pAVar2 = (AABB *)(*pcVar9)();
      return pAVar2;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar11,&MStack_10);
    MStack_12.m00 = MStack_10.m00;
    MStack_12.m10 = MStack_10.m10;
    MStack_12.m20 = MStack_10.m20;
    MStack_12.m30 = MStack_10.m30;
    MStack_12.m01 = MStack_10.m01;
    MStack_12.m11 = MStack_10.m11;
    MStack_12.m21 = MStack_10.m21;
    MStack_12.m31 = MStack_10.m31;
    MStack_12.m02 = MStack_10.m02;
    MStack_12.m12 = MStack_10.m12;
    MStack_12.m22 = MStack_10.m22;
    MStack_12.m32 = MStack_10.m32;
    MStack_12.m03 = MStack_10.m03;
    MStack_12.m13 = MStack_10.m13;
    MStack_12.m23 = MStack_10.m23;
    MStack_12.m33 = MStack_10.m33;
    AABB::AABB_Transform(__return_storage_ptr__,&MStack_12,(MethodInfo *)0x0);
  }
  return __return_storage_ptr__;
}


/* OBB CalcWorldOBB(GameObject, ObjectBounds+QueryConfig) */

OBB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_CalcWorldOBB
                (OBB *__return_storage_ptr__,GameObject *gameObject,
                ObjectBounds_QueryConfig *queryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  objectType = GameObjectEx::GameObjectEx_GetGameObjectType(gameObject,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  AStack_1._size.x = (float)queryConfig->ObjectTypes;
  AStack_1._size.y = (queryConfig->NoVolumeSize).x;
  AStack_1._size.z = (queryConfig->NoVolumeSize).y;
  AStack_1._center.x = (queryConfig->NoVolumeSize).z;
  pAVar2 = ObjectBounds_CalcModelAABB
                     (&AStack_3,gameObject,(ObjectBounds_QueryConfig *)&AStack_1,objectType,
                      (MethodInfo *)0x0);
  AStack_1._size.x = (pAVar2->_size).x;
  AStack_1._size.y = (pAVar2->_size).y;
  AStack_1._8_8_ = *(undefined8 *)&(pAVar2->_size).z;
  uVar4._0_4_ = (pAVar2->_center).y;
  uVar4._4_4_ = (pAVar2->_center).z;
  if (pAVar2->_isValid == 0) {
    (__return_storage_ptr__->_size).x = 0.0;
    (__return_storage_ptr__->_size).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
    (__return_storage_ptr__->_center).y = 0.0;
    (__return_storage_ptr__->_center).z = 0.0;
    (__return_storage_ptr__->_rotation).x = 0.0;
    (__return_storage_ptr__->_rotation).y = 0.0;
    (__return_storage_ptr__->_rotation).z = 0.0;
    (__return_storage_ptr__->_rotation).w = 0.0;
    *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  }
  else {
    uVar5._0_1_ = pAVar2->_isValid;
    uVar5._1_3_ = *(undefined3 *)&pAVar2->field_0x19;
    AStack_1._center._4_8_ = uVar4;
    if (gameObject == (GameObject *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      pOVar7 = (OBB *)(*pcVar6)();
      return pOVar7;
    }
    worldTransform =
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                   (gameObject,(MethodInfo *)0x0);
    (__return_storage_ptr__->_size).x = 0.0;
    (__return_storage_ptr__->_size).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
    (__return_storage_ptr__->_center).y = 0.0;
    (__return_storage_ptr__->_center).z = 0.0;
    (__return_storage_ptr__->_rotation).x = 0.0;
    (__return_storage_ptr__->_rotation).y = 0.0;
    (__return_storage_ptr__->_rotation).z = 0.0;
    (__return_storage_ptr__->_rotation).w = 0.0;
    *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
    AStack_1._center._4_8_ = uVar4;
    AStack_1._24_4_ = uVar5;
    OBB::OBB__ctor_7(__return_storage_ptr__,&AStack_1,worldTransform,(MethodInfo *)0x0);
  }
  return __return_storage_ptr__;
}


/* AABB GetMeshWorldAABB(GameObject) */

AABB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_GetMeshWorldAABB
                 (AABB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = ObjectBounds_CalcMeshModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  uVar3 = *(undefined4 *)&pAVar1->_isValid;
  fVar4 = (pAVar1->_center).y;
  fVar5 = (pAVar1->_center).z;
  fVar6 = (pAVar1->_size).y;
  uVar7 = *(undefined8 *)&(pAVar1->_size).z;
  (__return_storage_ptr__->_size).x = (pAVar1->_size).x;
  (__return_storage_ptr__->_size).y = fVar6;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar7;
  (__return_storage_ptr__->_center).y = fVar4;
  (__return_storage_ptr__->_center).z = fVar5;
  *(undefined4 *)&__return_storage_ptr__->_isValid = uVar3;
  if ((char)uVar3 == '\0') {
    return __return_storage_ptr__;
  }
  if ((gameObject == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (gameObject,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar8)();
    return pAVar1;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MStack_9.m00 = 0.0;
  MStack_9.m10 = 0.0;
  MStack_9.m20 = 0.0;
  MStack_9.m30 = 0.0;
  MStack_9.m01 = 0.0;
  MStack_9.m11 = 0.0;
  MStack_9.m21 = 0.0;
  MStack_9.m31 = 0.0;
  MStack_9.m02 = 0.0;
  MStack_9.m12 = 0.0;
  MStack_9.m22 = 0.0;
  MStack_9.m32 = 0.0;
  MStack_9.m03 = 0.0;
  MStack_9.m13 = 0.0;
  MStack_9.m23 = 0.0;
  MStack_9.m33 = 0.0;
  pvVar10 = (obj->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar8)();
    return pAVar1;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar8 = (code *)swi(3);
    pAVar1 = (AABB *)(*pcVar8)();
    return pAVar1;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(pvVar10,&MStack_9);
  MStack_11.m00 = MStack_9.m00;
  MStack_11.m10 = MStack_9.m10;
  MStack_11.m20 = MStack_9.m20;
  MStack_11.m30 = MStack_9.m30;
  MStack_11.m01 = MStack_9.m01;
  MStack_11.m11 = MStack_9.m11;
  MStack_11.m21 = MStack_9.m21;
  MStack_11.m31 = MStack_9.m31;
  MStack_11.m02 = MStack_9.m02;
  MStack_11.m12 = MStack_9.m12;
  MStack_11.m22 = MStack_9.m22;
  MStack_11.m32 = MStack_9.m32;
  MStack_11.m03 = MStack_9.m03;
  MStack_11.m13 = MStack_9.m13;
  MStack_11.m23 = MStack_9.m23;
  MStack_11.m33 = MStack_9.m33;
  AABB::AABB_Transform(__return_storage_ptr__,&MStack_11,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* OBB GetMeshWorldOBB(GameObject) */

OBB * Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds_GetMeshWorldOBB
                (OBB *__return_storage_ptr__,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = ObjectBounds_CalcMeshModelAABB(&AStack_2,gameObject,(MethodInfo *)0x0);
  AStack_3._size.x = (pAVar1->_size).x;
  AStack_3._size.y = (pAVar1->_size).y;
  AStack_3._8_8_ = *(undefined8 *)&(pAVar1->_size).z;
  uVar4._0_4_ = (pAVar1->_center).y;
  uVar4._4_4_ = (pAVar1->_center).z;
  if (pAVar1->_isValid != 0) {
    uVar5._0_1_ = pAVar1->_isValid;
    uVar5._1_3_ = *(undefined3 *)&pAVar1->field_0x19;
    AStack_3._center._4_8_ = uVar4;
    if (gameObject != (GameObject *)0x0) {
      worldTransform =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
      (__return_storage_ptr__->_size).x = 0.0;
      (__return_storage_ptr__->_size).y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
      (__return_storage_ptr__->_center).y = 0.0;
      (__return_storage_ptr__->_center).z = 0.0;
      (__return_storage_ptr__->_rotation).x = 0.0;
      (__return_storage_ptr__->_rotation).y = 0.0;
      (__return_storage_ptr__->_rotation).z = 0.0;
      (__return_storage_ptr__->_rotation).w = 0.0;
      *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
      AStack_3._center._4_8_ = uVar4;
      AStack_3._24_4_ = uVar5;
      OBB::OBB__ctor_7(__return_storage_ptr__,&AStack_3,worldTransform,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    pOVar7 = (OBB *)(*pcVar6)();
    return pOVar7;
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  (__return_storage_ptr__->_rotation).x = 0.0;
  (__return_storage_ptr__->_rotation).y = 0.0;
  (__return_storage_ptr__->_rotation).z = 0.0;
  (__return_storage_ptr__->_rotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  return __return_storage_ptr__;
}


/* ObjectBounds() */

void Assembly-CSharp.dll::RTG::ObjectBounds::ObjectBounds__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__RTG__ObjectBounds->static_fields;
  (pOVar1->_defaultQConfig).ObjectTypes = 0;
  (pOVar1->_defaultQConfig).NoVolumeSize.x = 0.0;
  (pOVar1->_defaultQConfig).NoVolumeSize.y = 0.0;
  (pOVar1->_defaultQConfig).NoVolumeSize.z = 0.0;
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  (TypeInfo__RTG__ObjectBounds->static_fields->_defaultQConfig).ObjectTypes =
       TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  pOVar1 = TypeInfo__RTG__ObjectBounds->static_fields;
  fVar4 = (pVVar2->zeroVector).z;
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
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__ObjectBounds);
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

