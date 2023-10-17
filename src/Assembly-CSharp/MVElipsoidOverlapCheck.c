
/* Boolean DoDetailedCheck(Cube, Vector3) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_DoDetailedCheck
               (Cube *cube,Vector3 localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             (MethodInfo *)0x0);
  uVar1 = 0;
  iVar2 = 0;
  while( true ) {
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar3 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar3->max_length <= (int)uVar1) break;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar3 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar3->max_length <= uVar1) goto code_?;
    uVar4 = *(undefined8 *)((int)&pVVar3->vector[0].x + iVar2);
    fStack_5 = *(float *)((int)&pVVar3->vector[0].z + iVar2);
    fStack_6 = (float)uVar4;
    fStack_7 = (float)((ulonglong)uVar4 >> 0x20);
    fStack_8 = localPos.z + fStack_5;
    *(ulonglong *)((int)&pVVar3->vector[0].x + iVar2) =
         CONCAT44(localPos.y + fStack_7,localPos.x + fStack_6);
    *(float *)((int)&pVVar3->vector[0].z + iVar2) = fStack_8;
    cube = (Cube *)TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    pVVar3 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar3->max_length <= uVar1) goto code_?;
    point.z = *(float *)((int)&pVVar3->vector[0].z + iVar2);
    point._0_8_ = *(undefined8 *)((int)&pVVar3->vector[0].x + iVar2);
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                        (&VStack_10,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToElipsoidSpace,
                         point,(MethodInfo *)0x0);
    fVar11 = pVVar9->z;
    if (((Vector3__Array *)cube)->max_length <= uVar1) goto code_?;
    *(undefined8 *)((int)&((Vector3__Array *)cube)->vector[0].x + iVar2) = *(undefined8 *)pVVar9;
    *(float *)((int)&((Vector3__Array *)cube)->vector[0].z + iVar2) = fVar11;
    pVVar3 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar3->max_length <= uVar1) goto code_?;
    fVar11 = *(float *)((int)&pVVar3->vector[0].y + iVar2);
    fVar12 = *(float *)((int)&pVVar3->vector[0].x + iVar2);
    fVar13 = *(float *)((int)&pVVar3->vector[0].z + iVar2);
    if (fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13 <= _UNK_?) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0xc;
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  uVar1 = 0;
  pFVar14 = TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
  if (pFVar14 == (FaceFlags__Enum__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    while( true ) {
      if ((int)pFVar14->max_length <= (int)uVar1) {
        return 0;
      }
      if (pFVar14->max_length <= uVar1) break;
      cube = (Cube *)CONCAT31(cube._1_3_,*(undefined1 *)((int)pFVar14->vector + uVar1));
      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                       ((FaceFlags__Enum)cube,(MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
                (&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
                 &TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace,face,(MethodInfo *)0x0
                );
      pVVar3 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace;
      if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
      if (pVVar3->max_length == 0) break;
      uVar15 = pVVar3->vector[0].x;
      uVar16 = pVVar3->vector[0].y;
      fStack_17 = pVVar3->vector[0].z;
      pVVar3 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace;
      fStack_7 = (float)uVar15;
      fStack_5 = (float)uVar16;
      if (pVVar3->max_length < 4) break;
      uStack_18._0_4_ = pVVar3->vector[3].x;
      uStack_18._4_4_ = pVVar3->vector[3].y;
      fStack_19 = pVVar3->vector[3].z;
      pVVar3 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace;
      uStack_20._0_4_ = pVVar3->vector[2].x;
      uStack_20._4_4_ = pVVar3->vector[2].y;
      fStack_21 = pVVar3->vector[2].z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = (MethodInfo *)(TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
      A.y = fStack_5;
      A.x = fStack_7;
      A.z = fStack_17;
      B.z = fStack_19;
      B.x = (float)(undefined4)uStack_18;
      B.y = (float)uStack_18._4_4_;
      C.z = fStack_21;
      C.x = (float)(undefined4)uStack_20;
      C.y = (float)uStack_20._4_4_;
      bVar22 = MVElipsoidOverlapCheck_HandleTriangleTest
                         (A,B,C,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,
                          (MethodInfo *)0x0);
      if (bVar22 == 0) {
        return 1;
      }
      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (((TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0) ||
          (func_?(&uStack_23),
          TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)) ||
         (func_?(&VStack_10),
         TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0))
      goto code_?;
      func_?(&uStack_24);
      pVVar9 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                          ((Vector3 *)&stack0xffffffa4,(MVWorldObject *)0x0,method_00);
      A_00.z = fStack_8;
      A_00.x = (float)(undefined4)uStack_23;
      A_00.y = (float)uStack_23._4_4_;
      B_00.z = VStack_10.z;
      B_00.x = VStack_10.x;
      B_00.y = VStack_10.y;
      C_00.z = fStack_25;
      C_00.x = (float)(undefined4)uStack_24;
      C_00.y = (float)uStack_24._4_4_;
      bVar22 = MVElipsoidOverlapCheck_HandleTriangleTest
                         (A_00,B_00,C_00,*pVVar9,1.0,(MethodInfo *)0x0);
      if (bVar22 == 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    }
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  bVar22 = (*pcVar26)();
  return bVar22;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheck(Vector3, Transform, Bounds, HashSet`1[System.Int32],
   Int32) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheck
          (Vector3 position,Transform *transform,Bounds localBounds,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
            ((Vector3 *)&stack0xffffffd0,&localBounds,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
            ((Vector3 *)&stack0xffffffd0,&localBounds,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
            ((Vector3 *)&stack0xffffffd0,&localBounds,(MethodInfo *)0x0);
  if (transform != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
              ((Vector3 *)&stack0xffffffd0,transform,(MethodInfo *)0x0);
    pRVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                       ((Regex_CachedCodeEntryKey *)&stack0xffffffd0,
                        (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&localBounds,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       ((Vector3 *)&stack0xffffffd0,transform,(Vector3)*pRVar1,(MethodInfo *)0x0);
    vec1 = pVVar2->y;
    pVVar2 = MathFunctions::MathFunctions_MultiplyVector
                       ((Vector3 *)&stack0xffffffd0,(Vector3 *)&stack0xffffffc4,(Vector3 *)vec1,
                        (MethodInfo *)pVVar2->z);
    uVar3._0_4_ = pVVar2->x;
    uVar3._4_4_ = pVVar2->y;
    fVar4 = pVVar2->z;
    pVVar2 = (Vector3 *)(auStack_5 + 4);
    pTVar6 = transform;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (pVVar2,transform,(MethodInfo *)0x0);
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    uVar10._4_4_ = (String *)(position.y + ((float)pTVar6 - (float)uVar9));
    uVar10._0_4_ = (int32_t)(position.x + ((float)pVVar2 - (float)uVar8));
    pSVar11 = (String *)&UNK_?;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)auStack_5,transform,(MethodInfo *)0x0);
    auStack_5._0_4_ = pQVar12->x;
    auStack_5._4_4_ = pQVar12->y;
    fStack_13 = pQVar12->z;
    puStack_14 = (undefined *)pQVar12->w;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      localBounds.m_Extents.y = (float)TypeInfo__MVElipsoidOverlapCheck;
      localBounds.m_Extents.x = (float)&UNK_?;
      func_?();
    }
    localBounds.m_Extents.y = 0.0;
    localBounds.m_Extents.x = (float)layerMask;
    localBounds.m_Center.z = (float)ignoreWoIds;
    radius.z = fVar4;
    radius.x = (float)(int)uVar3;
    radius.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    position_00.z = (float)pSVar11;
    position_00.x = (float)(int32_t)uVar10;
    position_00.y = (float)SUB84(uVar10,4);
    rotation.y = (float)auStack_5._4_4_;
    rotation.x = (float)auStack_5._0_4_;
    rotation.z = fStack_13;
    rotation.w = (float)puStack_14;
    localBounds.m_Center.x = fStack_13;
    localBounds.m_Center.y = (float)puStack_14;
    pLVar15 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                       (radius,position_00,rotation,ignoreWoIds,layerMask,(MethodInfo *)0x0);
    return pLVar15;
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pLVar15 = (List_1_MVOverlapResult_ *)(*pcVar16)();
  return pLVar15;
}


/* Boolean ElipsoidOverlapCheckBool(Vector3, Vector3, Quaternion, Int32, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
               (Vector3 radius,Vector3 position,Quaternion rotation,int32_t layerMask,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_)
    ;
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 0;
  this = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
         MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                   (radius,position,rotation,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (this != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
    if (0 < (this->fields)._size) {
      TVar1 = mscorlib.dll::System::Collections::Generic::
              List`1[TabMenuButtonAccessory+AccessoryTabDef]::
              List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                        (this,0,
                         MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                        );
      if (TVar1.streamedImagePrefab != (Graphic *)0x0) {
        TVar1 = mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          (this,0,
                           MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                          );
        if (TVar1.streamedImagePrefab != (Graphic *)0x0) {
          return ((TVar1.streamedImagePrefab)->fields).m_Material != (Material *)0x0;
        }
        goto code_?;
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean ElipsoidOverlapCheckBool(Vector3, Transform, Bounds, Int32, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool_1
               (Vector3 position,Transform *transform,Bounds localBounds,int32_t layerMask,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_)
    ;
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 0;
  this = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
         MVElipsoidOverlapCheck_ElipsoidOverlapCheck
                   (position,transform,localBounds,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (this != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
    if (0 < (this->fields)._size) {
      TVar1 = mscorlib.dll::System::Collections::Generic::
              List`1[TabMenuButtonAccessory+AccessoryTabDef]::
              List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                        (this,0,
                         MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                        );
      if (TVar1.streamedImagePrefab != (Graphic *)0x0) {
        TVar1 = mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          (this,0,
                           MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                          );
        if (TVar1.streamedImagePrefab != (Graphic *)0x0) {
          return ((TVar1.streamedImagePrefab)->fields).m_Material != (Material *)0x0;
        }
        goto code_?;
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean ElipsoidOverlapCheckOnWo(Vector3, Vector3, Quaternion, BoxCollider, MVWorldObjectClient,
   MVOverlapResult ByRef) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckOnWo
               (Vector3 radius,Vector3 position,Quaternion rotation,BoxCollider *chunk,
               MVWorldObjectClient *wo,MVOverlapResult *elipsoidOverlapResult,MethodInfo *method)

{
  VVar1 = position;
  VVar2 = radius;
  auVar3._12_12_ = (undefined1  [12])position;
  auVar3._0_12_ = (undefined1  [12])radius;
  auVar3._24_4_ = 0;
  auVar4 = auVar3 << 0x20;
  auVar3 = auVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  elipsoidOverlapResult->woId = 0;
  elipsoidOverlapResult->localCubePos = (IntVector__Array *)0x0;
  iVar5 = func_?(wo,TypeInfo__ICubeModelCollider);
  pIVar6 = TypeInfo__ICubeModelCollider;
  if (iVar5 == 0) {
    return 0;
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    cmb = (ICubeModelCollider *)0x0;
code_?:
    if (chunk == (BoxCollider *)0x0) goto code_?;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)chunk,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                        ((Matrix4x4 *)&stack0xffffff20,pTVar7,(MethodInfo *)0x0);
    fVar9 = pMVar8->m00;
    fVar10 = pMVar8->m10;
    fVar11 = pMVar8->m20;
    fVar12 = pMVar8->m30;
    fVar13 = pMVar8->m01;
    fVar14 = pMVar8->m11;
    fVar15 = pMVar8->m21;
    fVar16 = pMVar8->m31;
    fVar17 = pMVar8->m02;
    fVar18 = pMVar8->m12;
    fVar19 = pMVar8->m22;
    fVar20 = pMVar8->m32;
    fVar21 = pMVar8->m03;
    fVar22 = pMVar8->m13;
    fVar23 = pMVar8->m23;
    fVar24 = pMVar8->m33;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar25->localToWorld).m00 = fVar9;
    (pMVar25->localToWorld).m10 = fVar10;
    (pMVar25->localToWorld).m20 = fVar11;
    (pMVar25->localToWorld).m30 = fVar12;
    (pMVar25->localToWorld).m01 = fVar13;
    (pMVar25->localToWorld).m11 = fVar14;
    (pMVar25->localToWorld).m21 = fVar15;
    (pMVar25->localToWorld).m31 = fVar16;
    (pMVar25->localToWorld).m02 = fVar17;
    (pMVar25->localToWorld).m12 = fVar18;
    (pMVar25->localToWorld).m22 = fVar19;
    (pMVar25->localToWorld).m32 = fVar20;
    (pMVar25->localToWorld).m03 = fVar21;
    (pMVar25->localToWorld).m13 = fVar22;
    (pMVar25->localToWorld).m23 = fVar23;
    (pMVar25->localToWorld).m33 = fVar24;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)chunk,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_worldToLocalMatrix
                        ((Matrix4x4 *)&stack0xffffff20,pTVar7,(MethodInfo *)0x0);
    fVar13 = pMVar8->m10;
    fVar14 = pMVar8->m20;
    fVar15 = pMVar8->m30;
    fVar16 = pMVar8->m01;
    fVar17 = pMVar8->m11;
    fVar18 = pMVar8->m21;
    fVar19 = pMVar8->m31;
    fVar20 = pMVar8->m02;
    fVar21 = pMVar8->m12;
    fVar22 = pMVar8->m22;
    fVar23 = pMVar8->m32;
    fVar24 = pMVar8->m03;
    fVar9 = pMVar8->m13;
    fVar10 = pMVar8->m23;
    fVar11 = pMVar8->m33;
    pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar25->worldToLocal).m00 = pMVar8->m00;
    (pMVar25->worldToLocal).m10 = fVar13;
    (pMVar25->worldToLocal).m20 = fVar14;
    (pMVar25->worldToLocal).m30 = fVar15;
    (pMVar25->worldToLocal).m01 = fVar16;
    (pMVar25->worldToLocal).m11 = fVar17;
    (pMVar25->worldToLocal).m21 = fVar18;
    (pMVar25->worldToLocal).m31 = fVar19;
    (pMVar25->worldToLocal).m02 = fVar20;
    (pMVar25->worldToLocal).m12 = fVar21;
    (pMVar25->worldToLocal).m22 = fVar22;
    (pMVar25->worldToLocal).m32 = fVar23;
    (pMVar25->worldToLocal).m03 = fVar24;
    (pMVar25->worldToLocal).m13 = fVar9;
    (pMVar25->worldToLocal).m23 = fVar10;
    (pMVar25->worldToLocal).m33 = fVar11;
    radius.z = VVar2.z;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff20,VVar1,rotation,VVar2,(MethodInfo *)0x0);
    fVar13 = pMVar8->m10;
    fVar14 = pMVar8->m20;
    fVar15 = pMVar8->m30;
    fVar16 = pMVar8->m01;
    fVar17 = pMVar8->m11;
    fVar18 = pMVar8->m21;
    fVar19 = pMVar8->m31;
    fVar20 = pMVar8->m02;
    fVar21 = pMVar8->m12;
    fVar22 = pMVar8->m22;
    fVar23 = pMVar8->m32;
    fVar24 = pMVar8->m03;
    fVar9 = pMVar8->m13;
    fVar10 = pMVar8->m23;
    fVar11 = pMVar8->m33;
    pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar25->elipsoidSpaceToWorld).m00 = pMVar8->m00;
    (pMVar25->elipsoidSpaceToWorld).m10 = fVar13;
    (pMVar25->elipsoidSpaceToWorld).m20 = fVar14;
    (pMVar25->elipsoidSpaceToWorld).m30 = fVar15;
    (pMVar25->elipsoidSpaceToWorld).m01 = fVar16;
    (pMVar25->elipsoidSpaceToWorld).m11 = fVar17;
    (pMVar25->elipsoidSpaceToWorld).m21 = fVar18;
    (pMVar25->elipsoidSpaceToWorld).m31 = fVar19;
    (pMVar25->elipsoidSpaceToWorld).m02 = fVar20;
    (pMVar25->elipsoidSpaceToWorld).m12 = fVar21;
    (pMVar25->elipsoidSpaceToWorld).m22 = fVar22;
    (pMVar25->elipsoidSpaceToWorld).m32 = fVar23;
    (pMVar25->elipsoidSpaceToWorld).m03 = fVar24;
    (pMVar25->elipsoidSpaceToWorld).m13 = fVar9;
    (pMVar25->elipsoidSpaceToWorld).m23 = fVar10;
    (pMVar25->elipsoidSpaceToWorld).m33 = fVar11;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                        ((Matrix4x4 *)&stack0xffffff20,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->elipsoidSpaceToWorld,
                         (MethodInfo *)0x0);
    fVar13 = pMVar8->m10;
    fVar14 = pMVar8->m20;
    fVar15 = pMVar8->m30;
    fVar16 = pMVar8->m01;
    fVar17 = pMVar8->m11;
    fVar18 = pMVar8->m21;
    fVar19 = pMVar8->m31;
    fVar20 = pMVar8->m02;
    fVar21 = pMVar8->m12;
    fVar22 = pMVar8->m22;
    fVar23 = pMVar8->m32;
    fVar24 = pMVar8->m03;
    fVar9 = pMVar8->m13;
    fVar10 = pMVar8->m23;
    fVar11 = pMVar8->m33;
    pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar25->worldToElipsoidSpace).m00 = pMVar8->m00;
    (pMVar25->worldToElipsoidSpace).m10 = fVar13;
    (pMVar25->worldToElipsoidSpace).m20 = fVar14;
    (pMVar25->worldToElipsoidSpace).m30 = fVar15;
    (pMVar25->worldToElipsoidSpace).m01 = fVar16;
    (pMVar25->worldToElipsoidSpace).m11 = fVar17;
    (pMVar25->worldToElipsoidSpace).m21 = fVar18;
    (pMVar25->worldToElipsoidSpace).m31 = fVar19;
    (pMVar25->worldToElipsoidSpace).m02 = fVar20;
    (pMVar25->worldToElipsoidSpace).m12 = fVar21;
    (pMVar25->worldToElipsoidSpace).m22 = fVar22;
    (pMVar25->worldToElipsoidSpace).m32 = fVar23;
    (pMVar25->worldToElipsoidSpace).m03 = fVar24;
    (pMVar25->worldToElipsoidSpace).m13 = fVar9;
    (pMVar25->worldToElipsoidSpace).m23 = fVar10;
    (pMVar25->worldToElipsoidSpace).m33 = fVar11;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        ((Matrix4x4 *)&stack0xffffff20,
                         TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToElipsoidSpace,
                         TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         (MethodInfo *)0x0);
    fVar13 = pMVar8->m10;
    fVar14 = pMVar8->m20;
    fVar15 = pMVar8->m30;
    fVar16 = pMVar8->m01;
    fVar17 = pMVar8->m11;
    fVar18 = pMVar8->m21;
    fVar19 = pMVar8->m31;
    fVar20 = pMVar8->m02;
    fVar21 = pMVar8->m12;
    fVar22 = pMVar8->m22;
    fVar23 = pMVar8->m32;
    fVar24 = pMVar8->m03;
    fVar9 = pMVar8->m13;
    fVar10 = pMVar8->m23;
    fVar11 = pMVar8->m33;
    pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar25->localToElipsoidSpace).m00 = pMVar8->m00;
    (pMVar25->localToElipsoidSpace).m10 = fVar13;
    (pMVar25->localToElipsoidSpace).m20 = fVar14;
    (pMVar25->localToElipsoidSpace).m30 = fVar15;
    (pMVar25->localToElipsoidSpace).m01 = fVar16;
    (pMVar25->localToElipsoidSpace).m11 = fVar17;
    (pMVar25->localToElipsoidSpace).m21 = fVar18;
    (pMVar25->localToElipsoidSpace).m31 = fVar19;
    (pMVar25->localToElipsoidSpace).m02 = fVar20;
    (pMVar25->localToElipsoidSpace).m12 = fVar21;
    (pMVar25->localToElipsoidSpace).m22 = fVar22;
    (pMVar25->localToElipsoidSpace).m32 = fVar23;
    (pMVar25->localToElipsoidSpace).m03 = fVar24;
    (pMVar25->localToElipsoidSpace).m13 = fVar9;
    (pMVar25->localToElipsoidSpace).m23 = fVar10;
    (pMVar25->localToElipsoidSpace).m33 = fVar11;
    pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                        ((Vector3 *)&stack0xffffffe0,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal,VVar1,
                         (MethodInfo *)0x0);
    fVar14 = pVVar26->y;
    fVar13 = pVVar26->z;
    pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar25->localElipsoidPosition).x = pVVar26->x;
    (pMVar25->localElipsoidPosition).y = fVar14;
    (pMVar25->localElipsoidPosition).z = fVar13;
    if (wo == (MVWorldObjectClient *)0x0) goto code_?;
    (*(wo->klass->vtable).get_Scale.methodPtr)
              (&stack0xffffffe0,wo,(wo->klass->vtable).get_Scale.method);
    pVVar26 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xffffffb0,(Vector3 *)&stack0xffffff78,
                         (Vector3 *)&stack0xffffff84,(MethodInfo *)0x0);
    radius.x = VVar2.x;
    radius.y = VVar2.y;
    fStack_27 = radius.x;
    puStack_28 = (undefined *)0x0;
    fVar13 = pVVar26->x;
    fVar14 = pVVar26->y;
    fVar15 = pVVar26->z;
    VVar2.y = radius.y + fVar14;
    VVar2.x = radius.x + fVar13;
    VVar2.z = radius.z + fVar15;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff20,VVar1,rotation,VVar2,(MethodInfo *)0x0);
    fVar16 = pMVar8->m10;
    fVar17 = pMVar8->m20;
    fVar18 = pMVar8->m30;
    fVar19 = pMVar8->m01;
    fVar20 = pMVar8->m11;
    fVar21 = pMVar8->m21;
    fVar22 = pMVar8->m31;
    fVar23 = pMVar8->m02;
    fVar24 = pMVar8->m12;
    fVar9 = pMVar8->m22;
    fVar10 = pMVar8->m32;
    fVar11 = pMVar8->m03;
    fVar12 = pMVar8->m13;
    fVar29 = pMVar8->m23;
    fVar30 = pMVar8->m33;
    pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m00 = pMVar8->m00;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m10 = fVar16;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m20 = fVar17;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m30 = fVar18;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m01 = fVar19;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m11 = fVar20;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m21 = fVar21;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m31 = fVar22;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m02 = fVar23;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m12 = fVar24;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m22 = fVar9;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m32 = fVar10;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m03 = fVar11;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m13 = fVar12;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m23 = fVar29;
    (pMVar25->radiusExtendedElipsoidSpaceToWorld).m33 = fVar30;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                        ((Matrix4x4 *)&stack0xffffff20,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                          radiusExtendedElipsoidSpaceToWorld,(MethodInfo *)0x0);
    fVar16 = pMVar8->m10;
    fVar17 = pMVar8->m20;
    fVar18 = pMVar8->m30;
    fVar19 = pMVar8->m01;
    fVar20 = pMVar8->m11;
    fVar21 = pMVar8->m21;
    fVar22 = pMVar8->m31;
    fVar23 = pMVar8->m02;
    fVar24 = pMVar8->m12;
    fVar9 = pMVar8->m22;
    fVar10 = pMVar8->m32;
    fVar11 = pMVar8->m03;
    fVar12 = pMVar8->m13;
    fVar29 = pMVar8->m23;
    fVar30 = pMVar8->m33;
    pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m00 = pMVar8->m00;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m10 = fVar16;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m20 = fVar17;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m30 = fVar18;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m01 = fVar19;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m11 = fVar20;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m21 = fVar21;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m31 = fVar22;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m02 = fVar23;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m12 = fVar24;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m22 = fVar9;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m32 = fVar10;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m03 = fVar11;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m13 = fVar12;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m23 = fVar29;
    (pMVar25->worldToRadiusExtendedElipsoidSpace).m33 = fVar30;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        ((Matrix4x4 *)&stack0xffffff20,
                         TypeInfo__MVElipsoidOverlapCheck->static_fields->
                         worldToRadiusExtendedElipsoidSpace,
                         TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         (MethodInfo *)0x0);
    fVar16 = pMVar8->m10;
    fVar17 = pMVar8->m20;
    fVar18 = pMVar8->m30;
    fVar19 = pMVar8->m01;
    fVar20 = pMVar8->m11;
    fVar21 = pMVar8->m21;
    fVar22 = pMVar8->m31;
    fVar23 = pMVar8->m02;
    fVar24 = pMVar8->m12;
    fVar9 = pMVar8->m22;
    fVar10 = pMVar8->m32;
    fVar11 = pMVar8->m03;
    fVar12 = pMVar8->m13;
    fVar29 = pMVar8->m23;
    fVar30 = pMVar8->m33;
    pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m00 = pMVar8->m00;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m10 = fVar16;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m20 = fVar17;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m30 = fVar18;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m01 = fVar19;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m11 = fVar20;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m21 = fVar21;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m31 = fVar22;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m02 = fVar23;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m12 = fVar24;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m22 = fVar9;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m32 = fVar10;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m03 = fVar11;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m13 = fVar12;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m23 = fVar29;
    (pMVar25->localToRadiusExtendedElipsoidSpace).m33 = fVar30;
    if (((fStack_27 - fVar13 <= 0.0) || (radius.y - fVar14 <= 0.0)) || (radius.z - fVar15 <= 0.0)) {
      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 0;
      auVar4 = auVar3;
    }
    else {
      s.y = radius.y - fVar14;
      s.x = fStack_27 - fVar13;
      s.z = radius.z - fVar15;
      pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                          ((Matrix4x4 *)&stack0xffffff20,VVar1,rotation,s,(MethodInfo *)0x0);
      fVar9 = pMVar8->m00;
      fVar10 = pMVar8->m10;
      fVar11 = pMVar8->m20;
      fVar12 = pMVar8->m30;
      fVar13 = pMVar8->m01;
      fVar14 = pMVar8->m11;
      fVar15 = pMVar8->m21;
      fVar16 = pMVar8->m31;
      fVar17 = pMVar8->m02;
      fVar18 = pMVar8->m12;
      fVar19 = pMVar8->m22;
      fVar20 = pMVar8->m32;
      fVar21 = pMVar8->m03;
      fVar22 = pMVar8->m13;
      fVar23 = pMVar8->m23;
      fVar24 = pMVar8->m33;
      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m00 = fVar9;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m10 = fVar10;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m20 = fVar11;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m30 = fVar12;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m01 = fVar13;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m11 = fVar14;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m21 = fVar15;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m31 = fVar16;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m02 = fVar17;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m12 = fVar18;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m22 = fVar19;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m32 = fVar20;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m03 = fVar21;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m13 = fVar22;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m23 = fVar23;
      (pMVar25->radiusReducedElipsoidSpaceToWorld).m33 = fVar24;
      pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                          ((Matrix4x4 *)&stack0xffffff20,
                           &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                            radiusReducedElipsoidSpaceToWorld,(MethodInfo *)0x0);
      fVar13 = pMVar8->m10;
      fVar14 = pMVar8->m20;
      fVar15 = pMVar8->m30;
      fVar16 = pMVar8->m01;
      fVar17 = pMVar8->m11;
      fVar18 = pMVar8->m21;
      fVar19 = pMVar8->m31;
      fVar20 = pMVar8->m02;
      fVar21 = pMVar8->m12;
      fVar22 = pMVar8->m22;
      fVar23 = pMVar8->m32;
      fVar24 = pMVar8->m03;
      fVar9 = pMVar8->m13;
      fVar10 = pMVar8->m23;
      fVar11 = pMVar8->m33;
      pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m00 = pMVar8->m00;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m10 = fVar13;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m20 = fVar14;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m30 = fVar15;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m01 = fVar16;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m11 = fVar17;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m21 = fVar18;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m31 = fVar19;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m02 = fVar20;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m12 = fVar21;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m22 = fVar22;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m32 = fVar23;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m03 = fVar24;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m13 = fVar9;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m23 = fVar10;
      (pMVar25->worldToRadiusReducedElipsoidSpace).m33 = fVar11;
      pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      auVar4._0_4_ = (pMVar25->localToWorld).m12;
      radius.x = (pMVar25->localToWorld).m22;
      radius.y = (pMVar25->localToWorld).m32;
      radius.z = (pMVar25->localToWorld).m03;
      auVar4._16_4_ = (pMVar25->localToWorld).m13;
      auVar4._20_4_ = (pMVar25->localToWorld).m23;
      auVar4._24_4_ = (pMVar25->localToWorld).m33;
      cmb = (ICubeModelCollider *)(pMVar25->worldToRadiusReducedElipsoidSpace).m12;
      pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                          ((Matrix4x4 *)&stack0xffffff20,pMVar25->worldToRadiusReducedElipsoidSpace,
                           pMVar25->localToWorld,(MethodInfo *)0x0);
      fVar13 = pMVar8->m10;
      fVar14 = pMVar8->m20;
      fVar15 = pMVar8->m30;
      fVar16 = pMVar8->m01;
      fVar17 = pMVar8->m11;
      fVar18 = pMVar8->m21;
      fVar19 = pMVar8->m31;
      fVar20 = pMVar8->m02;
      fVar21 = pMVar8->m12;
      fVar22 = pMVar8->m22;
      fVar23 = pMVar8->m32;
      fVar24 = pMVar8->m03;
      fVar9 = pMVar8->m13;
      fVar10 = pMVar8->m23;
      fVar11 = pMVar8->m33;
      pMVar25 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar25->localToRadiusReducedElipsoidSpace).m00 = pMVar8->m00;
      (pMVar25->localToRadiusReducedElipsoidSpace).m10 = fVar13;
      (pMVar25->localToRadiusReducedElipsoidSpace).m20 = fVar14;
      (pMVar25->localToRadiusReducedElipsoidSpace).m30 = fVar15;
      (pMVar25->localToRadiusReducedElipsoidSpace).m01 = fVar16;
      (pMVar25->localToRadiusReducedElipsoidSpace).m11 = fVar17;
      (pMVar25->localToRadiusReducedElipsoidSpace).m21 = fVar18;
      (pMVar25->localToRadiusReducedElipsoidSpace).m31 = fVar19;
      (pMVar25->localToRadiusReducedElipsoidSpace).m02 = fVar20;
      (pMVar25->localToRadiusReducedElipsoidSpace).m12 = fVar21;
      (pMVar25->localToRadiusReducedElipsoidSpace).m22 = fVar22;
      (pMVar25->localToRadiusReducedElipsoidSpace).m32 = fVar23;
      (pMVar25->localToRadiusReducedElipsoidSpace).m03 = fVar24;
      (pMVar25->localToRadiusReducedElipsoidSpace).m13 = fVar9;
      (pMVar25->localToRadiusReducedElipsoidSpace).m23 = fVar10;
      (pMVar25->localToRadiusReducedElipsoidSpace).m33 = fVar11;
      TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 1;
    }
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&stack0xffffffe0,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                         (MethodInfo *)0x0);
    iVar31 = (int32_t)pVVar26->x;
    fVar15 = pVVar26->y;
    fVar13 = pVVar26->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&stack0xffffffb0,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    fVar16 = pVVar26->x;
    uVar32 = pVVar26->y;
    fVar14 = pVVar26->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&stack0xffffff98,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                         (MethodInfo *)0x0);
    fVar17 = pVVar26->x;
    fVar18 = pVVar26->y;
    fVar19 = pVVar26->z;
    vectors = (Vector3__Array *)func_?();
    VVar1.y = fVar15;
    VVar1.x = (float)iVar31;
    VVar1.z = fVar13;
    tangent1.y = fVar18;
    tangent1.x = fVar17;
    tangent1.z = fVar19;
    pVVar26 = MVElipsoidOverlapCheck_GetTangentNormal
                        ((Vector3 *)&stack0xffffff98,VVar1,tangent1,(MethodInfo *)0x0);
    if (vectors == (Vector3__Array *)0x0) goto code_?;
    fVar21 = pVVar26->y;
    fVar20 = pVVar26->z;
    if (vectors->max_length != 0) {
      vectors->vector[0].x = pVVar26->x;
      vectors->vector[0].y = fVar21;
      vectors->vector[0].z = fVar20;
      tangent0.y = (float)uVar32;
      tangent0.x = fVar16;
      tangent0.z = fVar14;
      tangent1_00.y = fVar18;
      tangent1_00.x = fVar17;
      tangent1_00.z = fVar19;
      pVVar26 = MVElipsoidOverlapCheck_GetTangentNormal
                          ((Vector3 *)&stack0xffffff98,tangent0,tangent1_00,(MethodInfo *)0x0);
      fVar18 = pVVar26->y;
      fVar17 = pVVar26->z;
      if (1 < vectors->max_length) {
        vectors->vector[1].x = pVVar26->x;
        vectors->vector[1].y = fVar18;
        vectors->vector[1].z = fVar17;
        tangent0_00.y = (float)uVar32;
        tangent0_00.x = fVar16;
        tangent0_00.z = fVar14;
        tangent1_01.y = fVar15;
        tangent1_01.x = (float)iVar31;
        tangent1_01.z = fVar13;
        pVVar26 = MVElipsoidOverlapCheck_GetTangentNormal
                            ((Vector3 *)&stack0xffffff98,tangent0_00,tangent1_01,(MethodInfo *)0x0);
        fVar14 = pVVar26->y;
        fVar13 = pVVar26->z;
        if (2 < vectors->max_length) {
          vectors->vector[2].x = pVVar26->x;
          vectors->vector[2].y = fVar14;
          vectors->vector[2].z = fVar13;
          pBVar33 = MVElipsoidOverlapCheck_GetBoundsFromAxisAlignedVectors
                              ((Bounds *)&fStack_27,vectors,(MethodInfo *)0x0);
          fVar20 = (pBVar33->m_Extents).z;
          pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                              ((Vector3 *)&stack0xffffff98,
                               &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal,
                               auVar4._16_12_,(MethodInfo *)0x0);
          fVar19 = pVVar26->x;
          fVar21 = pVVar26->y;
          fVar13 = pVVar26->z;
          fVar14 = 0.0;
          this = (ParticleSystem_Particle *)&stack0xffffff60;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
          ParticleSystem_Particle_set_position(this,*pVVar26,(MethodInfo *)0x0);
          localElipsoidBounds.m_Center.y = fVar19;
          localElipsoidBounds.m_Center.x = (float)this;
          localElipsoidBounds.m_Center.z = fVar21;
          localElipsoidBounds.m_Extents.x = fVar13;
          localElipsoidBounds.m_Extents.y = fVar14;
          localElipsoidBounds.m_Extents.z = fVar20;
          bVar34 = MVElipsoidOverlapCheck_ScanElipsoidBounds
                             (localElipsoidBounds,chunk,cmb,elipsoidOverlapResult,(MethodInfo *)0x0)
          ;
          return bVar34;
        }
      }
    }
  }
  else {
    cmb = (ICubeModelCollider *)func_?(wo,TypeInfo__ICubeModelCollider);
    if (cmb != (ICubeModelCollider *)0x0) goto code_?;
    func_?(wo,pIVar6);
  }
  func_?();
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  bVar34 = (*pcVar35)();
  return bVar34;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheckSector(Vector3, Vector3, Quaternion, Int32,
   HashSet`1[System.Int32]) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
          (Vector3 radius,Vector3 position,Quaternion rotation,int32_t layerMask,
          HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 1;
  pLVar1 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                     (radius,position,rotation,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar1;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheckSector(Vector3, Transform, Bounds, Int32,
   HashSet`1[System.Int32]) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector_1
          (Vector3 position,Transform *transform,Bounds localBounds,int32_t layerMask,
          HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 1;
  pLVar1 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck
                     (position,transform,localBounds,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar1;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheck(Vector3, Vector3, Quaternion,
   HashSet`1[System.Int32], Int32) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
          (Vector3 radius,Vector3 position,Quaternion rotation,HashSet_1_System_Int32_ *ignoreWoIds,
          int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__BoxCollider);
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVOverlapResult>__Add_MVOverlapResult_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVOverlapResult>);
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    in_stack_1 = &TypeInfo__SharedCollisionFunctions;
    in_stack_2 = (MVWorldObjectClient *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  pLVar4 = (List_1_MVOverlapResult_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVOverlapResult>);
  if (pLVar4 != (List_1_MVOverlapResult_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<MVOverlapResult>__List__);
    puVar5 = (undefined *)0x0;
    puStack_6 = (undefined *)0x0;
    index = 0;
    do {
      fVar7 = radius.x;
      if (((index != 0) && (fVar7 = radius.y, index != 1)) && (fVar7 = radius.z, index != 2))
      goto code_?;
      if ((float)puVar5 < fVar7) {
        puVar5 = (undefined *)
                 UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (&radius,index,(MethodInfo *)0x0);
        puStack_6 = puVar5;
      }
      index = index + 1;
    } while (index < 3);
    if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CollisionDetectionGlobalBuffers);
    }
    pMVar8 = (MethodInfo *)&UNK_?;
    pLStack_9 = (List_1_MVOverlapResult_ *)
                 UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                 Physics_OverlapSphereNonAlloc_1
                           (position,(float)puStack_6,
                            TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer
                            ,layerMask,(MethodInfo *)0x0);
    uVar10 = 0;
    if (0 < (int)pLStack_9) {
      puStack_6 = (undefined *)0x10;
      do {
        if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar11 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
        if (pCVar11 == (Collider__Array *)0x0) goto code_?;
        if (pCVar11->max_length <= uVar10) goto code_?;
        this = *(Component **)((int)pCVar11->vector + (int)(puStack_6 + -0x10));
        if (this == (Component *)0x0) goto code_?;
        pLVar4 = (List_1_MVOverlapResult_ *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (this,(MethodInfo *)0x0);
        pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                           ((Transform *)pLVar4,(MethodInfo *)0x0);
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          radius.z = (float)TypeInfo__SharedCollisionFunctions;
          radius.y = (float)&UNK_?;
          func_?();
        }
        if (cRam_? == '\0') {
          radius.z = (float)&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_;
          radius.y = (float)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        if (pMVar12 != (MVWorldObjectClient *)0x0) {
          if (ignoreWoIds != (HashSet_1_System_Int32_ *)0x0) {
            radius.z = (float)MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_;
            radius.y = (float)(pMVar12->fields)._.id;
            radius.x = (float)ignoreWoIds;
            bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                    HashSet_1_System_Int32__Contains
                              (ignoreWoIds,(int32_t)radius.y,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                              );
            if (bVar13 != 0) goto code_?;
          }
          if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
            radius.z = (float)TypeInfo__MVElipsoidOverlapCheck;
            radius.y = (float)&UNK_?;
            func_?();
          }
          radius.z = 0.0;
          radius.y = (float)&uStack_3;
          pLVar4 = (List_1_MVOverlapResult_ *)&UNK_?;
          radius.x = (float)pMVar12;
          chunk = (BoxCollider *)func_?();
          radius_00.y = radius.y;
          radius_00.x = radius.x;
          radius_00.z = radius.z;
          bVar13 = MVElipsoidOverlapCheck_ElipsoidOverlapCheckOnWo
                            (radius_00,position,rotation,chunk,in_stack_2,
                             (MVOverlapResult *)in_stack_1,pMVar8);
          if (bVar13 != 0) {
            puStack_6 = (undefined *)(pMVar12->fields)._.id;
            uStack_3 = CONCAT44(&UNK_?,puStack_6);
            pLStack_9 = pLVar4;
            func_?();
            if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            if (TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType == 0) {
              return pLVar4;
            }
          }
        }
code_?:
        uVar10 = uVar10 + 1;
        puStack_6 = puStack_6 + 4;
      } while ((int)uVar10 < (int)pLStack_9);
    }
    return pLVar4;
  }
code_?:
  func_?();
code_?:
  uVar14 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar14);
  func_?(this_00);
  pMVar8 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,pMVar8);
  uVar14 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  uStack_3 = CONCAT44(uVar14,this_00);
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pLVar4 = (List_1_MVOverlapResult_ *)(*pcVar15)();
  return pLVar4;
}


/* Bounds GetBoundsFromAxisAlignedVectors(Vector3[]) */

Bounds * Assembly-CSharp.dll::MVElipsoidOverlapCheck::
         MVElipsoidOverlapCheck_GetBoundsFromAxisAlignedVectors
                   (Bounds *__return_storage_ptr__,Vector3__Array *vectors,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  if (vectors == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVVar2 = vectors->vector;
    while ((int)fStack_1 < (int)vectors->max_length) {
      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVElipsoidOverlapCheck);
      }
      if (vectors->max_length <= (uint)fStack_1) goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                         (&VStack_4,&TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal,
                          *pVVar2,(MethodInfo *)0x0);
      fVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      if (vectors->max_length <= (uint)fStack_1) goto code_?;
      fStack_1 = (float)((int)fStack_1 + 1);
      pVVar2->x = pVVar3->x;
      pVVar2->y = fVar5;
      pVVar2->z = fVar6;
      pVVar2 = pVVar2 + 1;
    }
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pVStack_7 = vectors->vector;
    pDStack_8 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)0x0;
    puStack_9 = (undefined *)0x0;
    pVVar2 = (Vector3 *)0x0;
    fVar6 = 0.0;
    uVar10 = 0;
    fStack_1 = 0.0;
    while( true ) {
      if ((int)vectors->max_length <= (int)fStack_1) {
        (__return_storage_ptr__->m_Center).x = (float)pDStack_8;
        (__return_storage_ptr__->m_Center).y = (float)puStack_9;
        (__return_storage_ptr__->m_Center).z = (float)pVVar2;
        (__return_storage_ptr__->m_Extents).x = fVar6;
        uStack_11 = (undefined4)(uVar10 >> 0x20);
        (__return_storage_ptr__->m_Extents).y = (float)uVar12;
        (__return_storage_ptr__->m_Extents).z = (float)uStack_11;
        return __return_storage_ptr__;
      }
      if (vectors->max_length <= (uint)fStack_1) break;
      VStack_13.x = pVStack_7->x;
      VStack_13.y = pVStack_7->y;
      fVar5 = 0.0;
      VStack_13.z = pVStack_7->z;
      do {
        pRVar14 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                           ((Regex_CachedCodeEntryKey *)&stack0xffffffa8,
                            (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)&pDStack_8,(MethodInfo *)0x0);
        VStack_4.x = (float)pRVar14->_options;
        VStack_4.y = (float)pRVar14->_cultureKey;
        VStack_4.z = (float)pRVar14->_pattern;
        fStack_15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (&VStack_4,(int32_t)fVar5,(MethodInfo *)0x0);
        fStack_16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (&VStack_13,(int32_t)fVar5,(MethodInfo *)0x0);
        if (fStack_15 < (float)((uint)fStack_16 & _UNK_?)) {
          uVar10 = uVar10 & 0xffffffff00000000;
          pRVar14 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                             ((Regex_CachedCodeEntryKey *)&stack0xffffff98,
                              (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&pDStack_8,(MethodInfo *)0x0);
          uVar10 = uVar10 & 0xffffffff00000000;
          VStack_17.x = (float)pRVar14->_options;
          VStack_17.y = (float)pRVar14->_cultureKey;
          VStack_17.z = (float)pRVar14->_pattern;
          pVVar2 = &VStack_13;
          fVar6 = fVar5;
          fStack_15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                (pVVar2,(int32_t)fVar5,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_17,(int32_t)fVar5,(float)((uint)fStack_15 & _UNK_?),
                     (MethodInfo *)0x0);
          value.z = VStack_17.z;
          value.x = VStack_17.x;
          value.y = VStack_17.y;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
          ParticleSystem_Particle_set_velocity
                    ((ParticleSystem_Particle *)&pDStack_8,value,(MethodInfo *)0x0);
        }
        fVar5 = (float)((int)fVar5 + 1);
      } while ((int)fVar5 < 3);
      fStack_1 = (float)((int)fStack_1 + 1);
      pVStack_7 = pVStack_7 + 1;
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  pBVar19 = (Bounds *)(*pcVar18)();
  return pBVar19;
}


/* Bounds GetBoundsFromVectors(Vector3[]) */

Bounds * Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_GetBoundsFromVectors
                   (Bounds *__return_storage_ptr__,Vector3__Array *vectors,MethodInfo *method)

{
  pBVar1 = __return_storage_ptr__;
  __return_storage_ptr__ = (Bounds *)0x0;
  (pBVar1->m_Center).x = 0.0;
  (pBVar1->m_Center).y = 0.0;
  (pBVar1->m_Center).z = 0.0;
  (pBVar1->m_Extents).x = 0.0;
  (pBVar1->m_Extents).y = 0.0;
  (pBVar1->m_Extents).z = 0.0;
  if (vectors == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    while( true ) {
      if ((int)vectors->max_length <= (int)__return_storage_ptr__) {
        return pBVar1;
      }
      if ((Bounds *)vectors->max_length <= __return_storage_ptr__) break;
      index = 0;
      do {
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                  ((Regex_CachedCodeEntryKey *)&puStack_2,
                   (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)pBVar1,(MethodInfo *)0x0);
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                          ((Vector3 *)&stack0xffffffcc,index,(MethodInfo *)0x0);
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                          ((Vector3 *)&stack0xffffffd8,index,(MethodInfo *)0x0);
        if (fVar3 < (float)((uint)fVar4 & _UNK_?)) {
          pRVar5 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                             (&RStack_6,
                              (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)pBVar1,(MethodInfo *)0x0);
          fVar3 = (float)pRVar5->_cultureKey;
          pSVar7 = pRVar5->_pattern;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                            ((Vector3 *)&stack0xffffffd8,index,(MethodInfo *)0x0);
          fVar8 = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    ((Vector3 *)&stack0xffffffe4,index,(float)((uint)fVar4 & _UNK_?),
                     (MethodInfo *)0x0);
          value.y = fVar3;
          value.x = fVar8;
          value.z = (float)pSVar7;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
          ParticleSystem_Particle_set_velocity
                    ((ParticleSystem_Particle *)pBVar1,value,(MethodInfo *)0x0);
        }
        index = index + 1;
      } while (index < 3);
      __return_storage_ptr__ = (Bounds *)((int)&(__return_storage_ptr__->m_Center).x + 1);
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pBVar1 = (Bounds *)(*pcVar9)();
  return pBVar1;
}


/* Vector3 GetTangentNormal(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_GetTangentNormal
                    (Vector3 *__return_storage_ptr__,Vector3 tangent0,Vector3 tangent1,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  vector.y = tangent0.y;
  vector.x = tangent0.x;
  vector.z = tangent0.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     ((Vector3 *)&stack0xfffffff0,
                      &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToElipsoidSpace,vector,
                      (MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  tangent0.z = pVVar1->z;
  tangent0.x = (float)uVar2;
  tangent0.y = (float)uVar3;
  iVar4 = func_?(&stack0xffffffe4,&tangent0,0);
  vector_00.y = tangent1.y;
  vector_00.x = tangent1.x;
  vector_00.z = tangent1.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     (&tangent1,
                      &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToElipsoidSpace,
                      vector_00,*(MethodInfo **)(iVar4 + 8));
  fVar5 = 0.0;
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  tangent0.z = pVVar1->z;
  pVVar1 = &tangent0;
  puVar8 = &stack0xffffffe4;
  tangent0.x = (float)uVar6;
  tangent0.y = (float)uVar7;
  puVar9 = (undefined8 *)func_?();
  tangent1.x = (float)*puVar9;
  tangent1.y = (float)((ulonglong)*puVar9 >> 0x20);
  tangent0.x = (float)pVVar1 * *(float *)(puVar9 + 1) - fVar5 * tangent1.y;
  tangent0.z = (float)puVar8 * tangent1.y - (float)pVVar1 * tangent1.x;
  tangent0.y = fVar5 * tangent1.x - (float)puVar8 * *(float *)(puVar9 + 1);
  tangent1.z = tangent0.z;
  pVVar1 = (Vector3 *)func_?();
  uVar10 = pVVar1->x;
  uVar11 = pVVar1->y;
  tangent0.y = pVVar1->z;
  tangent0.z = 0.0;
  tangent0.x = (float)uVar11;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     (&tangent0,
                      &TypeInfo__MVElipsoidOverlapCheck->static_fields->elipsoidSpaceToWorld,*pVVar1
                      ,(MethodInfo *)0x0);
  fVar5 = pVVar1->z;
  *(undefined8 *)uVar10 = *(undefined8 *)pVVar1;
  *(float *)(uVar10 + 8) = fVar5;
  return (Vector3 *)uVar10;
}


/* Vector3[] GetTangentNormalsLocalSpace() */

Vector3__Array *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_GetTangentNormalsLocalSpace
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     ((Vector3 *)&stack0xffffffd8,
                      &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     ((Vector3 *)&stack0xffffffec,
                      &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar3 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
  fVar4 = pVVar1->x;
  this = &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     ((Vector3 *)&stack0xffffffcc,this,*pVVar1,(MethodInfo *)0x0);
  fVar5 = pVVar1->x;
  fVar6 = pVVar1->y;
  fVar7 = pVVar1->z;
  puVar8 = &UNK_?;
  pVVar9 = TypeInfo__UnityEngine__Vector3;
  pVVar10 = (Vector3__Array *)func_?();
  uVar11 = CONCAT44(fVar6,fVar5);
  pVVar1 = (Vector3 *)&stack0xffffffcc;
  puVar12 = &UNK_?;
  tangent0_01.y = (float)pVVar9;
  tangent0_01.x = (float)puVar8;
  tangent0_01.z = fVar2;
  tangent1_01.z = fVar7;
  tangent1_01.x = fVar5;
  tangent1_01.y = fVar6;
  fVar5 = fVar2;
  pVVar13 = MVElipsoidOverlapCheck_GetTangentNormal(pVVar1,tangent0_01,tangent1_01,(MethodInfo *)0x0)
  ;
  if (pVVar10 == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    fVar7 = pVVar13->y;
    fVar6 = pVVar13->z;
    if (pVVar10->max_length != 0) {
      pVVar10->vector[0].x = pVVar13->x;
      pVVar10->vector[0].y = fVar7;
      tangent1.y = fVar5;
      tangent1.x = (float)pVVar9;
      pVVar10->vector[0].z = fVar6;
      tangent0.y = fVar4;
      tangent0.x = (float)this;
      tangent0.z = fVar3;
      tangent1.z = (float)uVar11;
      pVVar13 = MVElipsoidOverlapCheck_GetTangentNormal
                         ((Vector3 *)&stack0xffffffcc,tangent0,tangent1,(MethodInfo *)0x0);
      fVar6 = pVVar13->y;
      fVar5 = pVVar13->z;
      if (1 < pVVar10->max_length) {
        pVVar10->vector[1].x = pVVar13->x;
        pVVar10->vector[1].y = fVar6;
        tangent1_00.y = (float)pVVar1;
        tangent1_00.x = (float)puVar12;
        pVVar10->vector[1].z = fVar5;
        tangent0_00.y = fVar4;
        tangent0_00.x = (float)this;
        tangent0_00.z = fVar3;
        tangent1_00.z = fVar2;
        pVVar1 = MVElipsoidOverlapCheck_GetTangentNormal
                           ((Vector3 *)&stack0xffffffcc,tangent0_00,tangent1_00,(MethodInfo *)0x0);
        fVar3 = pVVar1->y;
        fVar2 = pVVar1->z;
        if (2 < pVVar10->max_length) {
          pVVar10->vector[2].x = pVVar1->x;
          pVVar10->vector[2].y = fVar3;
          pVVar10->vector[2].z = fVar2;
          return pVVar10;
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pVVar10 = (Vector3__Array *)(*pcVar14)();
  return pVVar10;
}


/* Boolean HandleCube(IntVector, ICubeModelCollider, MVOverlapResult ByRef) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_HandleCube
               (IntVector cubePos,ICubeModelCollider *cmb,MVOverlapResult *elipsoidOverlapResult,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0xbf58);
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  if (cmb == (ICubeModelCollider *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  cube = (Cube *)func_?(7,TypeInfo__ICubeModelCollider,cmb,cubePos._0_4_,cubePos.z);
  fVar3 = (float)(int)cubePos.x;
  fVar4 = (float)(int)cubePos.y;
  fVar5 = (float)(int)cubePos.z;
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?((short)TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    point.y = fVar4;
    point.x = fVar3;
    point.z = fVar5;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                       ((Vector3 *)&stack0xffffffd8,
                        &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                         localToRadiusExtendedElipsoidSpace,point,(MethodInfo *)0x0);
    uVar7 = pVVar6->x;
    uVar8 = pVVar6->y;
    if ((float)uVar8 * (float)uVar8 + (float)uVar7 * (float)uVar7 + pVVar6->z * pVVar6->z <=
        _UNK_?) {
      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists == 0) {
        if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        localPos.y = fVar4;
        localPos.x = fVar3;
        localPos.z = fVar5;
        bVar2 = MVElipsoidOverlapCheck_IsCenterPointWithinCube(cube,localPos,(MethodInfo *)0x0);
        if (bVar2 == 0) {
code_?:
          if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          localPos_00.y = fVar4;
          localPos_00.x = fVar3;
          localPos_00.z = fVar5;
          bVar2 = MVElipsoidOverlapCheck_DoDetailedCheck(cube,localPos_00,(MethodInfo *)0x0);
          return bVar2;
        }
      }
      else {
        if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        point_00.y = fVar4;
        point_00.x = fVar3;
        point_00.z = fVar5;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                           ((Vector3 *)&stack0xffffffd8,
                            &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                             localToRadiusReducedElipsoidSpace,point_00,(MethodInfo *)0x0);
        uVar9 = pVVar6->x;
        uVar10 = pVVar6->y;
        if (_UNK_? <
            (float)uVar10 * (float)uVar10 + (float)uVar9 * (float)uVar9 + pVVar6->z * pVVar6->z)
        goto code_?;
      }
      return 1;
    }
  }
  return 0;
}


/* Boolean HandleTriangleTest(Vector3, Vector3, Vector3, Vector3, Single) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_HandleTriangleTest
               (Vector3 A,Vector3 B,Vector3 C,Vector3 P,float r,MethodInfo *method)

{
  if (((_UNK_? <=
        (A.y - B.y) * (A.y - B.y) + (A.x - B.x) * (A.x - B.x) + (A.z - B.z) * (A.z - B.z)) &&
      (_UNK_? <=
       (A.y - C.y) * (A.y - C.y) + (A.x - C.x) * (A.x - C.x) + (A.z - C.z) * (A.z - C.z))) &&
     (_UNK_? <=
      (B.y - C.y) * (B.y - C.y) + (B.x - C.x) * (B.x - C.x) + (B.z - C.z) * (B.z - C.z))) {
    fStack_1 = A.x - P.x;
    fStack_2 = A.y - P.y;
    fStack_3 = A.z - P.z;
    fVar4 = B.z - P.z;
    fStack_5 = B.x - P.x;
    fStack_6 = B.y - P.y;
    fVar7 = C.x - P.x;
    fStack_8 = C.y - P.y;
    fStack_9 = C.z - P.z;
    fVar10 = r * r;
    fStack_11 = (fStack_8 - fStack_2) * (fStack_5 - fStack_1) -
                (fVar7 - fStack_1) * (fStack_6 - fStack_2);
    uStack_12 = CONCAT44((fVar7 - fStack_1) * (fVar4 - fStack_3) -
                         (fStack_9 - fStack_3) * (fStack_5 - fStack_1),
                         (fStack_9 - fStack_3) * (fStack_6 - fStack_2) -
                         (fStack_8 - fStack_2) * (fVar4 - fStack_3));
    fStack_13 = fStack_11;
    puVar14 = (undefined8 *)func_?(auStack_15,&uStack_12,0);
    fVar16 = *(float *)(puVar14 + 1);
    fStack_17 = (float)*puVar14;
    fStack_18 = (float)((ulonglong)*puVar14 >> 0x20);
    fVar19 = fStack_18 * fStack_2 + fStack_17 * fStack_1 + fVar16 * fStack_3;
    fVar20 = fStack_2 * fStack_2 + fStack_1 * fStack_1 + fStack_3 * fStack_3;
    fVar21 = fStack_6 * fStack_2 + fStack_5 * fStack_1 + fVar4 * fStack_3;
    fVar22 = fStack_8 * fStack_2 + fVar7 * fStack_1 + fStack_9 * fStack_3;
    fVar23 = fStack_6 * fStack_6 + fStack_5 * fStack_5 + fVar4 * fVar4;
    fVar24 = fStack_8 * fStack_6 + fVar7 * fStack_5 + fStack_9 * fVar4;
    fVar25 = fStack_8 * fStack_8 + fVar7 * fVar7 + fStack_9 * fStack_9;
    fVar26 = fStack_5 - fStack_1;
    fVar27 = fStack_6 - fStack_2;
    fVar28 = fVar4 - fStack_3;
    fVar29 = fStack_8 - fStack_6;
    fVar30 = fVar7 - fStack_5;
    fVar31 = fStack_9 - fVar4;
    fVar32 = fStack_2 - fStack_8;
    fVar33 = fStack_1 - fVar7;
    fVar34 = fStack_3 - fStack_9;
    fVar35 = fVar27 * fVar27 + fVar26 * fVar26 + fVar28 * fVar28;
    fVar36 = fVar29 * fVar29 + fVar30 * fVar30 + fVar31 * fVar31;
    fVar37 = fVar32 * fVar32 + fVar33 * fVar33 + fVar34 * fVar34;
    fVar38 = fVar21 - fVar20;
    fVar39 = fStack_2 * fVar35 - fVar27 * fVar38;
    fVar26 = fStack_1 * fVar35 - fVar26 * fVar38;
    fVar38 = fStack_3 * fVar35 - fVar28 * fVar38;
    fVar27 = fVar24 - fVar23;
    fVar40 = fStack_5 * fVar36 - fVar30 * fVar27;
    fVar28 = fStack_6 * fVar36 - fVar29 * fVar27;
    fVar30 = fVar4 * fVar36 - fVar31 * fVar27;
    fVar27 = fVar22 - fVar25;
    fVar29 = fVar7 * fVar37 - fVar33 * fVar27;
    fVar32 = fStack_8 * fVar37 - fVar32 * fVar27;
    fVar34 = fStack_9 * fVar37 - fVar34 * fVar27;
    fStack_41 = (float)((ulonglong)*puVar14 >> 0x20);
    fStack_42 = (float)*puVar14;
    return ((((fStack_41 * fStack_18 + fStack_42 * fStack_17 + fVar16 * fVar16) * fVar10 <
              fVar19 * fVar19 ||
             ((fVar37 * fVar10 * fVar37 < fVar32 * fVar32 + fVar29 * fVar29 + fVar34 * fVar34 &&
               0.0 < (fStack_6 * fVar37 - fVar32) * fVar32 + (fStack_5 * fVar37 - fVar29) * fVar29 +
                     (fVar4 * fVar37 - fVar34) * fVar34 ||
              fVar36 * fVar10 * fVar36 < fVar28 * fVar28 + fVar40 * fVar40 + fVar30 * fVar30 &&
              0.0 < (fStack_2 * fVar36 - fVar28) * fVar28 + (fStack_1 * fVar36 - fVar40) * fVar40 +
                    (fStack_3 * fVar36 - fVar30) * fVar30) ||
             fVar35 * fVar10 * fVar35 < fVar39 * fVar39 + fVar26 * fVar26 + fVar38 * fVar38 &&
             0.0 < (fStack_8 * fVar35 - fVar39) * fVar39 + (fVar7 * fVar35 - fVar26) * fVar26 +
                   (fStack_9 * fVar35 - fVar38) * fVar38)) ||
            fVar10 < fVar25 && (fVar25 < fVar24 && fVar25 < fVar22)) ||
           fVar10 < fVar23 && (fVar23 < fVar24 && fVar23 < fVar21)) ||
           fVar10 < fVar20 && (fVar20 < fVar22 && fVar20 < fVar21);
  }
  return 1;
}


/* Boolean IsCenterPointWithinCube(Cube, Vector3) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_IsCenterPointWithinCube
               (Cube *cube,Vector3 localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  bVar1 = 0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             (MethodInfo *)0x0);
  uVar3 = 0;
  iVar4 = 0;
  while( true ) {
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pVVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar5->max_length <= (int)uVar3) {
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MV__WorldObject__CubeBase);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      uVar3 = 0;
      pFVar6 = TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
      if (pFVar6 != (FaceFlags__Enum__Array *)0x0) goto code_?;
      goto code_?;
    }
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pVVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar5->max_length <= uVar3) break;
    *(float *)((int)&pVVar5->vector[0].x + iVar4) =
         localPos.x + *(float *)((int)&pVVar5->vector[0].x + iVar4);
    pVVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar5->max_length <= uVar3) break;
    *(float *)((int)&pVVar5->vector[0].y + iVar4) =
         localPos.y + *(float *)((int)&pVVar5->vector[0].y + iVar4);
    pVVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar5->max_length <= uVar3) break;
    uVar3 = uVar3 + 1;
    *(float *)((int)&pVVar5->vector[0].z + iVar4) =
         localPos.z + *(float *)((int)&pVVar5->vector[0].z + iVar4);
    iVar4 = iVar4 + 0xc;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
code_?:
  if ((int)pFVar6->max_length <= (int)uVar3) {
    return bVar1 & 1;
  }
  if (pFVar6->max_length <= uVar3) goto code_?;
  cube = (Cube *)CONCAT31(cube._1_3_,*(undefined1 *)((int)pFVar6->vector + uVar3));
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                   ((FaceFlags__Enum)cube,(MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
            (&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             &TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace,face,(MethodInfo *)0x0);
  pMStack_9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  fStack_10 = (pMStack_9->localElipsoidPosition).x + _UNK_?;
  pVVar5 = pMStack_9->cachedFace;
  fStack_11 = (pMStack_9->localElipsoidPosition).y;
  fStack_12 = (pMStack_9->localElipsoidPosition).z;
  if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
  if ((pVVar5->max_length == 0) || (pVVar5->max_length < 4)) goto code_?;
  p2_00.y = fStack_11;
  p2_00.x = fStack_10;
  p2_00.z = fStack_12;
  bVar8 = MathFunctions::MathFunctions_LineFacet
                    (pMStack_9->localElipsoidPosition,p2_00,pVVar5->vector[0],pVVar5->vector[3],
                     TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace->vector[2],
                     &VStack_2,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    bVar1 = bVar1 + 1;
  }
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pMVar13 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  uStack_14._0_4_ = (pMVar13->localElipsoidPosition).x;
  uStack_14._4_4_ = (pMVar13->localElipsoidPosition).y;
  pMStack_9 = (MVElipsoidOverlapCheck__StaticFields *)(pMVar13->localElipsoidPosition).z;
  if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
  goto code_?;
  func_?(&uStack_15,2);
  if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
  goto code_?;
  func_?(&uStack_16,1);
  if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
  goto code_?;
  func_?(&uStack_17,0);
  p2.y = fStack_11;
  p2.x = fStack_10;
  p1.z = (float)pMStack_9;
  p1.x = (float)(undefined4)uStack_14;
  p1.y = (float)uStack_14._4_4_;
  p2.z = fStack_12;
  pa.z = fStack_18;
  pa.x = (float)(undefined4)uStack_15;
  pa.y = (float)uStack_15._4_4_;
  pb.z = fStack_19;
  pb.x = (float)(undefined4)uStack_16;
  pb.y = (float)uStack_16._4_4_;
  pc.z = fStack_20;
  pc.x = (float)(undefined4)uStack_17;
  pc.y = (float)uStack_17._4_4_;
  bVar8 = MathFunctions::MathFunctions_LineFacet(p1,p2,pa,pb,pc,&VStack_2,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    bVar1 = bVar1 + 1;
  }
  uVar3 = uVar3 + 1;
  goto code_?;
code_?:
  func_?();
  goto code_?;
}


/* Boolean ScanElipsoidBounds(Bounds, BoxCollider, ICubeModelCollider, MVOverlapResult ByRef) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ScanElipsoidBounds
               (Bounds localElipsoidBounds,BoxCollider *chunk,ICubeModelCollider *cmb,
               MVOverlapResult *elipsoidOverlapResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                   );
    func_?(0x7c80);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__ToArray__
                   );
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  fVar2 = 0.0;
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pLVar3 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
  if (pLVar3 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
    piVar4 = &(pLVar3->fields)._version;
    *piVar4 = *piVar4 + 1;
    (pLVar3->fields)._size = 0;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                        (&VStack_6,&localElipsoidBounds,(MethodInfo *)0x0);
    uVar7 = pVVar5->x;
    uVar8 = pVVar5->y;
    localPos.y = (float)uVar7;
    localPos.x = (float)&VStack_6.y;
    localPos.z = (float)uVar8;
    IVar9 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos,(MethodInfo *)pVVar5->z);
    sVar10 = *(short *)(IVar9._0_4_ + 4);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                        (&VStack_6,&localElipsoidBounds,(MethodInfo *)0x0);
    fVar11 = pVVar5->x;
    fVar12 = pVVar5->y;
    method_00 = (MethodInfo *)pVVar5->z;
    pfVar13 = &VStack_6.y;
    puVar14 = &UNK_?;
    localPos_00.y = fVar11;
    localPos_00.x = (float)pfVar13;
    localPos_00.z = fVar12;
    IVar9 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_00,method_00);
    IStack_1._0_4_ = *IVar9._0_4_;
    IStack_1.z = *(int16_t *)(IVar9._0_4_ + 1);
    if (chunk != (BoxCollider *)0x0) {
      pVVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                          ((Vector3 *)&puStack_15,chunk,(MethodInfo *)0x0);
      VStack_6.y = pVVar5->x;
      VStack_6.z = pVVar5->y;
      fVar16 = pVVar5->z;
      pVVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                          ((Vector3 *)&puStack_15,chunk,(MethodInfo *)0x0);
      uVar17 = pVVar5->x;
      uVar18 = pVVar5->y;
      uVar19._0_2_ = 0;
      uVar19._2_2_ = 0;
      iVar20 = (int16_t)uVar17;
      iVar21 = SUB42(pVVar5->z,0);
      fVar22 = VStack_6.y;
      iVar23 = VStack_6.z._0_2_;
      center.z = fVar16;
      center.x = VStack_6.y;
      center.y = VStack_6.z;
      size.z._2_2_ = (short)((uint)pVVar5->z >> 0x10);
      size._0_10_ = *(unkbyte10 *)pVVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
                ((Bounds *)&stack0xffffff98,center,size,(MethodInfo *)0x0);
      VStack_6.z = (float)method_00;
      VStack_6.y = fVar12;
      puStack_15 = puVar14;
      if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
        uStack_24 = TypeInfo__SharedCollisionFunctions;
        func_?();
      }
      localSpaceBounds.m_Center.y = (float)puStack_15;
      localSpaceBounds.m_Center.x = fVar2;
      localSpaceBounds.m_Center.z = (float)pfVar13;
      localSpaceBounds.m_Extents.x = fVar11;
      localSpaceBounds.m_Extents.y = VStack_6.y;
      localSpaceBounds.m_Extents.z = VStack_6.z;
      SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                ((IntVector *)&stack0xffffffc8,(IntVector *)&stack0xffffffd0,localSpaceBounds,
                 (MethodInfo *)0x0);
      IVar9.z = iVar20;
      IVar9._0_4_ = fVar16;
      max.z = iVar21;
      max.x = (int16_t)uVar18;
      max.y = SUB42(uVar18,2);
      MathFunctions::MathFunctions_ClampIntVector
                ((IntVector *)&stack0xffffffd8,IVar9,max,(MethodInfo *)0x0);
      min.z = iVar20;
      min._0_4_ = fVar16;
      max_00.z = iVar21;
      max_00.x = (int16_t)uVar18;
      max_00.y = SUB42(uVar18,2);
      MathFunctions::MathFunctions_ClampIntVector(&IStack_1,min,max_00,(MethodInfo *)0x0);
      fVar2 = (float)(int)(short)uVar19;
      uStack_24 = (SharedCollisionFunctions__Class *)((uint)uStack_24 & 0xffffff);
      VStack_6.z = fVar2;
      if ((int)fVar2 <= (int)IStack_1.x) {
        iVar20 = IStack_1.x;
        iVar21 = IStack_1.z;
        iVar25 = IStack_1.y;
        do {
          puStack_26 = (undefined *)(int)SUB42(uVar19,2);
          if ((int)puStack_26 <= (int)iVar25) {
            do {
              z = (int)sVar10;
              fVar11 = fVar22;
              iVar20 = iVar23;
              if (z <= iVar21) {
                do {
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            ((IntVector *)&stack0xffffffc0,(int32_t)fVar2,(int32_t)puStack_26,z,
                             (MethodInfo *)0x0);
                  fVar22 = fVar11;
                  iVar23 = iVar20;
                  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  cubePos.z = iVar20;
                  cubePos._0_4_ = fVar11;
                  bVar27 = MVElipsoidOverlapCheck_HandleCube
                                     (cubePos,cmb,elipsoidOverlapResult,(MethodInfo *)0x0);
                  if (bVar27 != 0) {
                    uStack_24 = (SharedCollisionFunctions__Class *)CONCAT13(1,(undefined3)uStack_24);
                    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pLVar3 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
                    if (pLVar3 == (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
                    func_?(pLVar3,fVar22,iVar23,
                                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                                   );
                    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType == 0) {
                      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MVElipsoidOverlapCheck);
                      }
                      pLVar28 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                                TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
                      if (pLVar28 !=
                          (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
                        pUVar29 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                  UnitySynchronizationContext+WorkRequest]::
                                  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                            (pLVar28,
                                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__ToArray__
                                            );
                        elipsoidOverlapResult->localCubePos = (IntVector__Array *)pUVar29;
                        func_?((short)&elipsoidOverlapResult->localCubePos,pUVar29);
                        return 1;
                      }
                      goto code_?;
                    }
                  }
                  z = z + 1;
                  fVar2 = VStack_6.z;
                  fVar11 = fVar22;
                  iVar20 = iVar23;
                } while (z <= IStack_1.z);
                iVar21 = IStack_1.z;
                iVar25 = IStack_1.y;
              }
              puStack_26 = puStack_26 + 1;
            } while ((int)puStack_26 <= (int)iVar25);
            iVar20 = IStack_1.x;
          }
          fVar2 = (float)((int)fVar2 + 1);
          VStack_6.z = fVar2;
        } while ((int)fVar2 <= (int)iVar20);
        bVar27 = uStack_24._3_1_;
        if (uStack_24._3_1_ != 0) {
          if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVElipsoidOverlapCheck);
          }
          pLVar28 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                    TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
          if (pLVar28 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            pUVar29 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                      UnitySynchronizationContext+WorkRequest]::
                      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                (pLVar28,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__ToArray__
                                );
            elipsoidOverlapResult->localCubePos = (IntVector__Array *)pUVar29;
            func_?((short)&elipsoidOverlapResult->localCubePos,pUVar29);
            return bVar27;
          }
          goto code_?;
        }
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  bVar27 = (*pcVar30)();
  return bVar27;
}


/* MVElipsoidOverlapCheck() */

void Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  func_?(TypeInfo__MVElipsoidOverlapCheck->static_fields,0,0x40);
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->elipsoidSpaceToWorld,0,0x40);
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->localToElipsoidSpace,0,0x40);
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->localElipsoidPosition).x = 0.0;
  (pMVar1->localElipsoidPosition).y = 0.0;
  (pMVar1->localElipsoidPosition).z = 0.0;
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->
                   worldToRadiusExtendedElipsoidSpace,0,0x40);
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->
                   radiusExtendedElipsoidSpaceToWorld,0,0x40);
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->
                   localToRadiusExtendedElipsoidSpace,0,0x40);
  TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 0;
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->
                   worldToRadiusReducedElipsoidSpace,0,0x40);
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->
                   radiusReducedElipsoidSpaceToWorld,0,0x40);
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->
                   localToRadiusReducedElipsoidSpace,0,0x40);
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,0,0x40);
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal,0,0x40);
  pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners = pVVar2;
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,pVVar2);
  pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace = pVVar2;
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace,pVVar2);
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 0;
  this = (List_1_MV_WorldObject_IntVector_ *)
         func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
  if (this != (List_1_MV_WorldObject_IntVector_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
    TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors = this;
    func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors,this);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

