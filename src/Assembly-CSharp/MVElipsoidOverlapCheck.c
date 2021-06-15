
/* Boolean DoDetailedCheck(Cube, Vector3) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_DoDetailedCheck
               (Cube *cube,Vector3 localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?();
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             (MethodInfo *)0x0);
  iVar1 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pVVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar2->max_length <= iVar1) break;
    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners == (Vector3__Array *)0x0)
    goto code_?;
    puVar3 = (undefined8 *)func_?(iVar1);
    uStack_4 = *puVar3;
    fVar5 = *(float *)(puVar3 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar5;
    a.x = (float)(undefined4)uStack_4;
    a.y = uStack_4._4_4_;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&VStack_7,a,localPos,(MethodInfo *)0x0);
    fVar5 = pVVar6->z;
    *puVar3 = *(undefined8 *)pVVar6;
    *(float *)(puVar3 + 1) = fVar5;
    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners == (Vector3__Array *)0x0)
    goto code_?;
    puVar3 = (undefined8 *)func_?(iVar1);
    puVar3 = (undefined8 *)
             func_?(auStack_8,
                             &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToElipsoidSpace,
                             *puVar3,*(undefined4 *)(puVar3 + 1),0);
    uStack_4 = *puVar3;
    uVar9 = *(undefined4 *)(puVar3 + 1);
    puVar3 = (undefined8 *)func_?(iVar1);
    *puVar3 = uStack_4;
    *(undefined4 *)(puVar3 + 1) = uVar9;
    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners == (Vector3__Array *)0x0)
    goto code_?;
    uVar9 = func_?(iVar1,0);
    fVar10 = (float10)func_?(uVar9);
    cube = (Cube *)(float)fVar10;
    if ((float)cube <= _UNK_?) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pFVar11 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_FaceFlagsArray
                     ((MethodInfo *)0x0);
  uVar12 = 0;
  if (pFVar11 == (FaceFlags__Enum__Array *)0x0) {
code_?:
    func_?(0);
  }
  else {
    while( true ) {
      if ((int)pFVar11->max_length <= (int)uVar12) {
        return 0;
      }
      if (pFVar11->max_length <= uVar12) break;
      cube = (Cube *)CONCAT31(cube._1_3_,*(undefined1 *)((int)pFVar11->vector + uVar12));
      if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVElipsoidOverlapCheck);
      }
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                       ((FaceFlags__Enum)cube,(MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
                (&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
                 &TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace,face,(MethodInfo *)0x0
                );
      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
      goto code_?;
      puVar3 = (undefined8 *)func_?(0);
      VStack_7._4_8_ = *puVar3;
      uStack_4 = CONCAT44(*(undefined4 *)(puVar3 + 1),(undefined4)uStack_4);
      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
      goto code_?;
      puVar3 = (undefined8 *)func_?(3);
      uStack_13 = *puVar3;
      fStack_14 = *(float *)(puVar3 + 1);
      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
      goto code_?;
      puVar3 = (undefined8 *)func_?(2);
      uStack_15 = *puVar3;
      fVar5 = *(float *)(puVar3 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         (&VStack_16,(MethodInfo *)0x0);
      A_00.z = uStack_4._4_4_;
      A_00.x = VStack_7.y;
      A_00.y = VStack_7.z;
      B_00.z = fStack_14;
      B_00.x = (float)(undefined4)uStack_13;
      B_00.y = (float)uStack_13._4_4_;
      C_00.z = fVar5;
      C_00.x = (float)(undefined4)uStack_15;
      C_00.y = (float)uStack_15._4_4_;
      bVar17 = MVElipsoidOverlapCheck_HandleTriangleTest
                        (A_00,B_00,C_00,*pVVar6,1.0,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        return 1;
      }
      if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVElipsoidOverlapCheck);
      }
      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
      goto code_?;
      puVar3 = (undefined8 *)func_?(2);
      uStack_15 = *puVar3;
      fStack_14 = *(float *)(puVar3 + 1);
      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
      goto code_?;
      puVar3 = (undefined8 *)func_?(1);
      uStack_13 = *puVar3;
      uStack_4 = CONCAT44(*(undefined4 *)(puVar3 + 1),(undefined4)uStack_4);
      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
      goto code_?;
      puVar3 = (undefined8 *)func_?(0);
      VStack_7._4_8_ = *puVar3;
      fVar5 = *(float *)(puVar3 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         (&VStack_18,(MethodInfo *)0x0);
      A.z = fStack_14;
      A.x = (float)(undefined4)uStack_15;
      A.y = (float)uStack_15._4_4_;
      B.z = uStack_4._4_4_;
      B.x = (float)(undefined4)uStack_13;
      B.y = (float)uStack_13._4_4_;
      C.z = fVar5;
      C.x = VStack_7.y;
      C.y = VStack_7.z;
      bVar17 = MVElipsoidOverlapCheck_HandleTriangleTest(A,B,C,*pVVar6,1.0,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        return 1;
      }
      uVar12 = uVar12 + 1;
    }
  }
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar19 = (code *)swi(3);
  bVar17 = (*pcVar19)();
  return bVar17;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheck(Vector3, Transform, Bounds, HashSet`1[System.Int32],
   Int32) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheck
          (Vector3 position,Transform *transform,Bounds localBounds,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&stack0xffffffe4,&localBounds,0);
  puStack_2 = (undefined *)((float)*puVar1 * _UNK_?);
  func_?(&stack0xffffffe4,&localBounds,0);
  func_?(&stack0xffffffe4,&localBounds,0);
  if (transform != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
              ((Vector3 *)&stack0xffffffd8,transform,(MethodInfo *)0x0);
    pVVar3 = (Vector3 *)func_?(&stack0xffffffd8,&localBounds,0);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       ((Vector3 *)&stack0xffffffd8,transform,*pVVar3,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar3->x;
    uVar4._4_4_ = pVVar3->y;
    fVar5 = pVVar3->z;
    pVVar3 = MathFunctions::MathFunctions_MultiplyVector
                       ((Vector3 *)&stack0xfffffff0,(Vector3 *)&puStack_2,
                        (Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
    fVar6 = pVVar3->z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)(auStack_7 + 4),transform,(MethodInfo *)0x0);
    uVar8._0_4_ = pVVar3->x;
    uVar8._4_4_ = pVVar3->y;
    fVar9 = pVVar3->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    VVar10.z = fVar5;
    VVar10.x = (float)(int)uVar4;
    VVar10.y = (float)(int)((ulonglong)uVar4 >> 0x20);
    b.z = fVar9;
    b.x = (float)(int)uVar8;
    b.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)(auStack_7 + 4),VVar10,b,(MethodInfo *)0x0);
    puVar11 = &UNK_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)(auStack_7 + 4),position,*pVVar3,(MethodInfo *)0x0);
    uVar12._0_4_ = pVVar3->x;
    uVar12._4_4_ = pVVar3->y;
    uVar8._0_4_ = pVVar3->z;
    pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)auStack_7,transform,(MethodInfo *)0x0);
    auStack_7._0_4_ = pQVar13->x;
    auStack_7._4_4_ = pQVar13->y;
    fStack_14 = pQVar13->z;
    fStack_15 = pQVar13->w;
    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
      localBounds.m_Extents.z = (float)&UNK_?;
      func_?();
    }
    localBounds.m_Extents.z = (float)layerMask;
    localBounds.m_Extents.y = 0.0;
    position.x = fVar6;
    fVar16 = (float)puVar11;
    VVar10.x = fVar9;
    VVar10 = (Vector3)CONCAT84(VVar10._0_8_,VVar10.x);
    position_00.z = (float)uVar8;
    position_00.x = (float)(int)uVar12;
    position_00.y = (float)(int)((ulonglong)uVar12 >> 0x20);
    rotation.y = (float)auStack_7._4_4_;
    rotation.x = (float)auStack_7._0_4_;
    rotation.z = fStack_14;
    rotation.w = fStack_15;
    localBounds.m_Center.x = (float)auStack_7._0_4_;
    localBounds.m_Center.y = (float)auStack_7._4_4_;
    localBounds.m_Center.z = fStack_14;
    localBounds.m_Extents.x = fStack_15;
    pLVar17 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                       (VVar10,position_00,rotation,(HashSet_1_System_Int32_ *)0x0,layerMask,
                        (MethodInfo *)0x0);
    return pLVar17;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar17 = (List_1_MVOverlapResult_ *)(*pcVar18)();
  return pLVar17;
}


/* Boolean ElipsoidOverlapCheckBool(Vector3, Vector3, Quaternion, Int32, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
               (Vector3 radius,Vector3 position,Quaternion rotation,int32_t layerMask,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 0;
  this = MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                   (radius,position,rotation,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (this != (List_1_MVOverlapResult_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                        MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Count__
                       );
    if (0 < (int)pOVar1) {
      MVar2 = mscorlib.dll::System::Collections::Generic::List`1[MVOverlapResult]::
              List_1_MVOverlapResult__get_Item
                        (this,0,
                         MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                        );
      if (MVar2.localCubePos != (IntVector__Array *)0x0) {
        MVar2 = mscorlib.dll::System::Collections::Generic::List`1[MVOverlapResult]::
                List_1_MVOverlapResult__get_Item
                          (this,0,
                           MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                          );
        if (MVar2.localCubePos == (IntVector__Array *)0x0) goto code_?;
        if (0 < (int)(MVar2.localCubePos)->max_length) {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  uStack3 = 0;
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean ElipsoidOverlapCheckBool(Vector3, Transform, Bounds, Int32, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool_1
               (Vector3 position,Transform *transform,Bounds localBounds,int32_t layerMask,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 0;
  this = MVElipsoidOverlapCheck_ElipsoidOverlapCheck
                   (position,transform,localBounds,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (this != (List_1_MVOverlapResult_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                        MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Count__
                       );
    if (0 < (int)pOVar1) {
      MVar2 = mscorlib.dll::System::Collections::Generic::List`1[MVOverlapResult]::
              List_1_MVOverlapResult__get_Item
                        (this,0,
                         MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                        );
      if (MVar2.localCubePos != (IntVector__Array *)0x0) {
        MVar2 = mscorlib.dll::System::Collections::Generic::List`1[MVOverlapResult]::
                List_1_MVOverlapResult__get_Item
                          (this,0,
                           MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                          );
        if (MVar2.localCubePos == (IntVector__Array *)0x0) goto code_?;
        if (0 < (int)(MVar2.localCubePos)->max_length) {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  uStack3 = 0;
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean ElipsoidOverlapCheckOnWo(Vector3, Vector3, Quaternion, BoxCollider, MVWorldObjectClient,
   MVOverlapResult ByRef) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckOnWo
               (Vector3 radius,Vector3 position,Quaternion rotation,BoxCollider *chunk,
               MVWorldObjectClient *wo,MVOverlapResult *elipsoidOverlapResult,MethodInfo *method)

{
  pMVar1 = wo;
  pos = position;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  elipsoidOverlapResult->woId = 0;
  elipsoidOverlapResult->localCubePos = (IntVector__Array *)0x0;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  uStack_8 = 0;
  iVar9 = func_?(wo,TypeInfo__ICubeModelCollider);
  pIVar10 = TypeInfo__ICubeModelCollider;
  if (iVar9 == 0) {
    return 0;
  }
  pMVar11 = wo;
  if ((wo == (MVWorldObjectClient *)0x0) ||
     (pMVar11 = (MVWorldObjectClient *)func_?(wo,TypeInfo__ICubeModelCollider),
     pMVar11 != (MVWorldObjectClient *)0x0)) {
    wo = pMVar11;
    if ((chunk != (BoxCollider *)0x0) &&
       (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)chunk,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0))
    {
      pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                          ((Matrix4x4 *)&stack0xffffff40,pTVar12,(MethodInfo *)0x0);
      puStack_14 = (undefined *)pMVar13->m00;
      auStack_15._0_4_ = pMVar13->m10;
      auStack_15._4_4_ = pMVar13->m20;
      auStack_15._8_4_ = pMVar13->m30;
      fStack_16 = pMVar13->m01;
      fStack_17 = pMVar13->m11;
      fStack_18 = pMVar13->m21;
      fStack_19 = pMVar13->m31;
      fStack_20 = pMVar13->m02;
      fStack_21 = pMVar13->m12;
      uStack_22._0_4_ = pMVar13->m22;
      uStack_22._4_4_ = pMVar13->m32;
      BStack_23.m_Center.z = pMVar13->m03;
      BStack_23.m_Extents.x = pMVar13->m13;
      BStack_23.m_Extents.y = pMVar13->m23;
      BStack_23.m_Extents.z = pMVar13->m33;
      fVar24 = pMVar13->m01;
      fVar25 = pMVar13->m22;
      fVar26 = pMVar13->m32;
      fVar27 = pMVar13->m30;
      if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
        func_?();
        fVar24 = fStack_16;
        fVar25 = (float)uStack_22;
        fVar26 = uStack_22._4_4_;
        fVar27 = (float)auStack_15._8_4_;
      }
      pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar28->localToWorld).m00 = (float)puStack_14;
      (pMVar28->localToWorld).m10 = (float)auStack_15._0_4_;
      (pMVar28->localToWorld).m20 = (float)auStack_15._4_4_;
      (pMVar28->localToWorld).m30 = fVar27;
      (pMVar28->localToWorld).m01 = fVar24;
      (pMVar28->localToWorld).m11 = fStack_17;
      (pMVar28->localToWorld).m21 = fStack_18;
      (pMVar28->localToWorld).m31 = fStack_19;
      (pMVar28->localToWorld).m02 = fStack_20;
      (pMVar28->localToWorld).m12 = fStack_21;
      (pMVar28->localToWorld).m22 = fVar25;
      (pMVar28->localToWorld).m32 = fVar26;
      (pMVar28->localToWorld).m03 = BStack_23.m_Center.z;
      (pMVar28->localToWorld).m13 = BStack_23.m_Extents.x;
      (pMVar28->localToWorld).m23 = BStack_23.m_Extents.y;
      (pMVar28->localToWorld).m33 = BStack_23.m_Extents.z;
      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)chunk,(MethodInfo *)0x0);
      if (pTVar12 != (Transform *)0x0) {
        pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                  Transform_get_worldToLocalMatrix
                            ((Matrix4x4 *)&stack0xffffff40,pTVar12,(MethodInfo *)0x0);
        fVar24 = pMVar13->m10;
        fVar25 = pMVar13->m20;
        fVar26 = pMVar13->m30;
        fVar27 = pMVar13->m01;
        fVar29 = pMVar13->m11;
        fVar30 = pMVar13->m21;
        fVar31 = pMVar13->m31;
        fVar32 = pMVar13->m02;
        fVar33 = pMVar13->m12;
        fVar34 = pMVar13->m22;
        fVar35 = pMVar13->m32;
        fVar36 = pMVar13->m03;
        fVar37 = pMVar13->m13;
        fVar38 = pMVar13->m23;
        fVar39 = pMVar13->m33;
        pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        (pMVar28->worldToLocal).m00 = pMVar13->m00;
        (pMVar28->worldToLocal).m10 = fVar24;
        (pMVar28->worldToLocal).m20 = fVar25;
        (pMVar28->worldToLocal).m30 = fVar26;
        (pMVar28->worldToLocal).m01 = fVar27;
        (pMVar28->worldToLocal).m11 = fVar29;
        (pMVar28->worldToLocal).m21 = fVar30;
        (pMVar28->worldToLocal).m31 = fVar31;
        (pMVar28->worldToLocal).m02 = fVar32;
        (pMVar28->worldToLocal).m12 = fVar33;
        (pMVar28->worldToLocal).m22 = fVar34;
        (pMVar28->worldToLocal).m32 = fVar35;
        (pMVar28->worldToLocal).m03 = fVar36;
        (pMVar28->worldToLocal).m13 = fVar37;
        (pMVar28->worldToLocal).m23 = fVar38;
        (pMVar28->worldToLocal).m33 = fVar39;
        if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Matrix4x4);
        }
        fVar40 = position.x;
        fVar41 = position.y;
        pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                            ((Matrix4x4 *)&stack0xffffff40,position,rotation,radius,
                             (MethodInfo *)0x0);
        fVar24 = pMVar13->m10;
        fVar25 = pMVar13->m20;
        fVar26 = pMVar13->m30;
        fVar27 = pMVar13->m01;
        fVar29 = pMVar13->m11;
        fVar30 = pMVar13->m21;
        fVar31 = pMVar13->m31;
        fVar32 = pMVar13->m02;
        fVar33 = pMVar13->m12;
        fVar34 = pMVar13->m22;
        fVar35 = pMVar13->m32;
        fVar36 = pMVar13->m03;
        fVar37 = pMVar13->m13;
        fVar38 = pMVar13->m23;
        fVar39 = pMVar13->m33;
        pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        (pMVar28->elipsoidSpaceToWorld).m00 = pMVar13->m00;
        (pMVar28->elipsoidSpaceToWorld).m10 = fVar24;
        (pMVar28->elipsoidSpaceToWorld).m20 = fVar25;
        (pMVar28->elipsoidSpaceToWorld).m30 = fVar26;
        (pMVar28->elipsoidSpaceToWorld).m01 = fVar27;
        (pMVar28->elipsoidSpaceToWorld).m11 = fVar29;
        (pMVar28->elipsoidSpaceToWorld).m21 = fVar30;
        (pMVar28->elipsoidSpaceToWorld).m31 = fVar31;
        (pMVar28->elipsoidSpaceToWorld).m02 = fVar32;
        (pMVar28->elipsoidSpaceToWorld).m12 = fVar33;
        (pMVar28->elipsoidSpaceToWorld).m22 = fVar34;
        (pMVar28->elipsoidSpaceToWorld).m32 = fVar35;
        (pMVar28->elipsoidSpaceToWorld).m03 = fVar36;
        (pMVar28->elipsoidSpaceToWorld).m13 = fVar37;
        (pMVar28->elipsoidSpaceToWorld).m23 = fVar38;
        (pMVar28->elipsoidSpaceToWorld).m33 = fVar39;
        pfVar42 = (float *)func_?(&stack0xffffff40,
                                           &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                                            elipsoidSpaceToWorld,0);
        fVar24 = pfVar42[1];
        fVar25 = pfVar42[2];
        fVar26 = pfVar42[3];
        fVar27 = pfVar42[4];
        fVar29 = pfVar42[5];
        fVar30 = pfVar42[6];
        fVar31 = pfVar42[7];
        fVar32 = pfVar42[8];
        fVar33 = pfVar42[9];
        fVar34 = pfVar42[10];
        fVar35 = pfVar42[0xb];
        fVar36 = pfVar42[0xc];
        fVar37 = pfVar42[0xd];
        fVar38 = pfVar42[0xe];
        fVar39 = pfVar42[0xf];
        pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        (pMVar28->worldToElipsoidSpace).m00 = *pfVar42;
        (pMVar28->worldToElipsoidSpace).m10 = fVar24;
        (pMVar28->worldToElipsoidSpace).m20 = fVar25;
        (pMVar28->worldToElipsoidSpace).m30 = fVar26;
        (pMVar28->worldToElipsoidSpace).m01 = fVar27;
        (pMVar28->worldToElipsoidSpace).m11 = fVar29;
        (pMVar28->worldToElipsoidSpace).m21 = fVar30;
        (pMVar28->worldToElipsoidSpace).m31 = fVar31;
        (pMVar28->worldToElipsoidSpace).m02 = fVar32;
        (pMVar28->worldToElipsoidSpace).m12 = fVar33;
        (pMVar28->worldToElipsoidSpace).m22 = fVar34;
        (pMVar28->worldToElipsoidSpace).m32 = fVar35;
        (pMVar28->worldToElipsoidSpace).m03 = fVar36;
        (pMVar28->worldToElipsoidSpace).m13 = fVar37;
        (pMVar28->worldToElipsoidSpace).m23 = fVar38;
        (pMVar28->worldToElipsoidSpace).m33 = fVar39;
        pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                            ((Matrix4x4 *)&stack0xffffff40,
                             TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToElipsoidSpace,
                             TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                             (MethodInfo *)0x0);
        fVar24 = pMVar13->m10;
        fVar25 = pMVar13->m20;
        fVar26 = pMVar13->m30;
        fVar27 = pMVar13->m01;
        fVar29 = pMVar13->m11;
        fVar30 = pMVar13->m21;
        fVar31 = pMVar13->m31;
        fVar32 = pMVar13->m02;
        fVar33 = pMVar13->m12;
        fVar34 = pMVar13->m22;
        fVar35 = pMVar13->m32;
        fVar36 = pMVar13->m03;
        fVar37 = pMVar13->m13;
        fVar38 = pMVar13->m23;
        fVar39 = pMVar13->m33;
        pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        fStack_18 = 0.0;
        (pMVar28->localToElipsoidSpace).m00 = pMVar13->m00;
        (pMVar28->localToElipsoidSpace).m10 = fVar24;
        (pMVar28->localToElipsoidSpace).m20 = fVar25;
        (pMVar28->localToElipsoidSpace).m30 = fVar26;
        (pMVar28->localToElipsoidSpace).m01 = fVar27;
        (pMVar28->localToElipsoidSpace).m11 = fVar29;
        (pMVar28->localToElipsoidSpace).m21 = fVar30;
        (pMVar28->localToElipsoidSpace).m31 = fVar31;
        (pMVar28->localToElipsoidSpace).m02 = fVar32;
        (pMVar28->localToElipsoidSpace).m12 = fVar33;
        (pMVar28->localToElipsoidSpace).m22 = fVar34;
        (pMVar28->localToElipsoidSpace).m32 = fVar35;
        (pMVar28->localToElipsoidSpace).m03 = fVar36;
        (pMVar28->localToElipsoidSpace).m13 = fVar37;
        (pMVar28->localToElipsoidSpace).m23 = fVar38;
        (pMVar28->localToElipsoidSpace).m33 = fVar39;
        auStack_15._8_4_ = position.x;
        fStack_16 = position.y;
        fStack_17 = position.z;
        auStack_15._4_4_ = &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal;
        auStack_15._0_4_ = &fStack_17;
        puVar43 = (undefined8 *)func_?();
        uVar44 = *puVar43;
        fVar24 = *(float *)(puVar43 + 1);
        pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        (pMVar28->localElipsoidPosition).x = (float)(int)uVar44;
        (pMVar28->localElipsoidPosition).y = (float)(int)((ulonglong)uVar44 >> 0x20);
        (pMVar28->localElipsoidPosition).z = fVar24;
        VStack_2.x = 0.8660254;
        VStack_2.y = 0.8660254;
        VStack_2.z = 0.8660254;
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          puVar43 = (undefined8 *)
                    (*(code *)(pMVar1->klass->vtable).get_Scale.method)
                              (&fStack_17,pMVar1,(pMVar1->klass->vtable).set_Scale.methodPtr);
          VStack_3._0_8_ = *puVar43;
          VStack_3.z = *(float *)(puVar43 + 1);
          pVVar45 = MathFunctions::MathFunctions_MultiplyVector
                              ((Vector3 *)auStack_15,&VStack_2,&VStack_3,(MethodInfo *)0x0);
          uVar44._0_4_ = pVVar45->x;
          uVar44._4_4_ = pVVar45->y;
          fVar24 = pVVar45->z;
          uStack_22 = uVar44;
          fStack_46 = fVar24;
          fStack_18 = (float)(undefined4)uVar44;
          fStack_19 = (float)uVar44._4_4_;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar44 = CONCAT44(fStack_19,fStack_18);
          }
          b_01.z = fStack_46;
          b_01.x = (float)(int)uVar44;
          b_01.y = (float)(int)((ulonglong)uVar44 >> 0x20);
          pVVar45 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)auStack_15,radius,b_01,(MethodInfo *)0x0);
          pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                              ((Matrix4x4 *)&stack0xffffff40,pos,rotation,*pVVar45,(MethodInfo *)0x0
                              );
          fVar25 = pMVar13->m10;
          fVar26 = pMVar13->m20;
          fVar27 = pMVar13->m30;
          fVar29 = pMVar13->m01;
          fVar30 = pMVar13->m11;
          fVar31 = pMVar13->m21;
          fVar32 = pMVar13->m31;
          fVar33 = pMVar13->m02;
          fVar34 = pMVar13->m12;
          fVar35 = pMVar13->m22;
          fVar36 = pMVar13->m32;
          fVar37 = pMVar13->m03;
          fVar38 = pMVar13->m13;
          fVar39 = pMVar13->m23;
          fVar47 = pMVar13->m33;
          pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m00 = pMVar13->m00;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m10 = fVar25;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m20 = fVar26;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m30 = fVar27;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m01 = fVar29;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m11 = fVar30;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m21 = fVar31;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m31 = fVar32;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m02 = fVar33;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m12 = fVar34;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m22 = fVar35;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m32 = fVar36;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m03 = fVar37;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m13 = fVar38;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m23 = fVar39;
          (pMVar28->radiusExtendedElipsoidSpaceToWorld).m33 = fVar47;
          pfVar42 = (float *)func_?();
          fVar25 = pfVar42[1];
          fVar26 = pfVar42[2];
          fVar27 = pfVar42[3];
          fVar29 = pfVar42[4];
          fVar30 = pfVar42[5];
          fVar31 = pfVar42[6];
          fVar32 = pfVar42[7];
          fVar33 = pfVar42[8];
          fVar34 = pfVar42[9];
          fVar35 = pfVar42[10];
          fVar36 = pfVar42[0xb];
          fVar37 = pfVar42[0xc];
          fVar38 = pfVar42[0xd];
          fVar39 = pfVar42[0xe];
          fVar47 = pfVar42[0xf];
          pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m00 = *pfVar42;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m10 = fVar25;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m20 = fVar26;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m30 = fVar27;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m01 = fVar29;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m11 = fVar30;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m21 = fVar31;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m31 = fVar32;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m02 = fVar33;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m12 = fVar34;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m22 = fVar35;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m32 = fVar36;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m03 = fVar37;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m13 = fVar38;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m23 = fVar39;
          (pMVar28->worldToRadiusExtendedElipsoidSpace).m33 = fVar47;
          pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                              ((Matrix4x4 *)&stack0xffffff40,
                               TypeInfo__MVElipsoidOverlapCheck->static_fields->
                               worldToRadiusExtendedElipsoidSpace,
                               TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                               (MethodInfo *)0x0);
          fVar25 = pMVar13->m10;
          fVar26 = pMVar13->m20;
          fVar27 = pMVar13->m30;
          fVar29 = pMVar13->m01;
          fVar30 = pMVar13->m11;
          fVar31 = pMVar13->m21;
          fVar32 = pMVar13->m31;
          fVar33 = pMVar13->m02;
          fVar34 = pMVar13->m12;
          fVar35 = pMVar13->m22;
          fVar36 = pMVar13->m32;
          fVar37 = pMVar13->m03;
          fVar38 = pMVar13->m13;
          fVar39 = pMVar13->m23;
          fVar47 = pMVar13->m33;
          pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m00 = pMVar13->m00;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m10 = fVar25;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m20 = fVar26;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m30 = fVar27;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m01 = fVar29;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m11 = fVar30;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m21 = fVar31;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m31 = fVar32;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m02 = fVar33;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m12 = fVar34;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m22 = fVar35;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m32 = fVar36;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m03 = fVar37;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m13 = fVar38;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m23 = fVar39;
          (pMVar28->localToRadiusExtendedElipsoidSpace).m33 = fVar47;
          b.z = fVar24;
          b.x = (float)uStack_22;
          b.y = uStack_22._4_4_;
          pVVar45 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)auStack_15,radius,b,(MethodInfo *)0x0);
          uVar48 = pVVar45->x;
          uVar49 = pVVar45->y;
          fStack_19 = pVVar45->z;
          fStack_17 = (float)uVar48;
          fStack_18 = (float)uVar49;
          if ((((float)uVar48 <= 0.0) || ((float)uVar49 <= 0.0)) || (fStack_19 <= 0.0)) {
            if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVElipsoidOverlapCheck);
            }
            TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 0;
          }
          else {
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            b_00.z = fVar24;
            b_00.x = (float)uStack_22;
            b_00.y = uStack_22._4_4_;
            pVVar45 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)auStack_15,radius,b_00,(MethodInfo *)0x0);
            uVar50._0_4_ = pVVar45->x;
            uVar50._4_4_ = pVVar45->y;
            fVar24 = pVVar45->z;
            fStack_18 = (float)(undefined4)uVar50;
            fStack_19 = (float)uVar50._4_4_;
            if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
              func_?();
              uVar50 = CONCAT44(fStack_19,fStack_18);
            }
            s.z = fVar24;
            s.x = (float)(int)uVar50;
            s.y = (float)(int)((ulonglong)uVar50 >> 0x20);
            pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                ((Matrix4x4 *)&stack0xffffff40,pos,rotation,s,(MethodInfo *)0x0);
            BStack_23.m_Center.z = pMVar13->m00;
            BStack_23.m_Extents.x = pMVar13->m10;
            BStack_23.m_Extents.y = pMVar13->m20;
            BStack_23.m_Extents.z = pMVar13->m30;
            puStack_14 = (undefined *)pMVar13->m01;
            auStack_15._0_4_ = pMVar13->m11;
            auStack_15._4_4_ = pMVar13->m21;
            auStack_15._8_4_ = pMVar13->m31;
            fStack_16 = pMVar13->m02;
            fStack_17 = pMVar13->m12;
            fStack_18 = pMVar13->m22;
            fStack_19 = pMVar13->m32;
            fStack_20 = pMVar13->m03;
            fStack_21 = pMVar13->m13;
            uStack_22._0_4_ = pMVar13->m23;
            uStack_22._4_4_ = pMVar13->m33;
            fVar24 = pMVar13->m31;
            fVar25 = pMVar13->m02;
            fVar26 = pMVar13->m23;
            fVar27 = pMVar13->m33;
            if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
              func_?();
              fVar24 = (float)auStack_15._8_4_;
              fVar25 = fStack_16;
              fVar26 = (float)uStack_22;
              fVar27 = uStack_22._4_4_;
            }
            pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m00 = BStack_23.m_Center.z;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m10 = BStack_23.m_Extents.x;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m20 = BStack_23.m_Extents.y;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m30 = BStack_23.m_Extents.z;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m01 = (float)puStack_14;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m11 = (float)auStack_15._0_4_;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m21 = (float)auStack_15._4_4_;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m31 = fVar24;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m02 = fVar25;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m12 = fStack_17;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m22 = fStack_18;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m32 = fStack_19;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m03 = fStack_20;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m13 = fStack_21;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m23 = fVar26;
            (pMVar28->radiusReducedElipsoidSpaceToWorld).m33 = fVar27;
            pfVar42 = (float *)func_?();
            fVar24 = pfVar42[1];
            fVar25 = pfVar42[2];
            fVar26 = pfVar42[3];
            fVar27 = pfVar42[4];
            fVar29 = pfVar42[5];
            fVar30 = pfVar42[6];
            fVar31 = pfVar42[7];
            fVar32 = pfVar42[8];
            fVar33 = pfVar42[9];
            fVar34 = pfVar42[10];
            fVar35 = pfVar42[0xb];
            fVar36 = pfVar42[0xc];
            fVar37 = pfVar42[0xd];
            fVar38 = pfVar42[0xe];
            fVar39 = pfVar42[0xf];
            pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m00 = *pfVar42;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m10 = fVar24;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m20 = fVar25;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m30 = fVar26;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m01 = fVar27;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m11 = fVar29;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m21 = fVar30;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m31 = fVar31;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m02 = fVar32;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m12 = fVar33;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m22 = fVar34;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m32 = fVar35;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m03 = fVar36;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m13 = fVar37;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m23 = fVar38;
            (pMVar28->worldToRadiusReducedElipsoidSpace).m33 = fVar39;
            pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                                ((Matrix4x4 *)&stack0xffffff40,
                                 TypeInfo__MVElipsoidOverlapCheck->static_fields->
                                 worldToRadiusReducedElipsoidSpace,
                                 TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                                 (MethodInfo *)0x0);
            fVar24 = pMVar13->m10;
            fVar25 = pMVar13->m20;
            fVar26 = pMVar13->m30;
            fVar27 = pMVar13->m01;
            fVar29 = pMVar13->m11;
            fVar30 = pMVar13->m21;
            fVar31 = pMVar13->m31;
            fVar32 = pMVar13->m02;
            fVar33 = pMVar13->m12;
            fVar34 = pMVar13->m22;
            fVar35 = pMVar13->m32;
            fVar36 = pMVar13->m03;
            fVar37 = pMVar13->m13;
            fVar38 = pMVar13->m23;
            fVar39 = pMVar13->m33;
            pMVar28 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
            (pMVar28->localToRadiusReducedElipsoidSpace).m00 = pMVar13->m00;
            (pMVar28->localToRadiusReducedElipsoidSpace).m10 = fVar24;
            (pMVar28->localToRadiusReducedElipsoidSpace).m20 = fVar25;
            (pMVar28->localToRadiusReducedElipsoidSpace).m30 = fVar26;
            (pMVar28->localToRadiusReducedElipsoidSpace).m01 = fVar27;
            (pMVar28->localToRadiusReducedElipsoidSpace).m11 = fVar29;
            (pMVar28->localToRadiusReducedElipsoidSpace).m21 = fVar30;
            (pMVar28->localToRadiusReducedElipsoidSpace).m31 = fVar31;
            (pMVar28->localToRadiusReducedElipsoidSpace).m02 = fVar32;
            (pMVar28->localToRadiusReducedElipsoidSpace).m12 = fVar33;
            (pMVar28->localToRadiusReducedElipsoidSpace).m22 = fVar34;
            (pMVar28->localToRadiusReducedElipsoidSpace).m32 = fVar35;
            (pMVar28->localToRadiusReducedElipsoidSpace).m03 = fVar36;
            (pMVar28->localToRadiusReducedElipsoidSpace).m13 = fVar37;
            (pMVar28->localToRadiusReducedElipsoidSpace).m23 = fVar38;
            (pMVar28->localToRadiusReducedElipsoidSpace).m33 = fVar39;
            TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 1;
          }
          if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVElipsoidOverlapCheck);
          }
          vectors = MVElipsoidOverlapCheck_GetTangentNormalsLocalSpace((MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          iVar9 = 0;
          if (vectors != (Vector3__Array *)0x0) {
            for (; iVar9 < (int)vectors->max_length; iVar9 = iVar9 + 1) {
              if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVElipsoidOverlapCheck);
              }
              puVar43 = (undefined8 *)func_?(iVar9);
              puVar43 = (undefined8 *)
                        func_?(auStack_15,
                                        &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                                         worldToLocal,(int)*puVar43,
                                        (int)((ulonglong)*puVar43 >> 0x20),
                                        *(undefined4 *)(puVar43 + 1),0);
              uVar51 = *(undefined4 *)(puVar43 + 1);
              fStack_18 = (float)*puVar43;
              fStack_19 = (float)((ulonglong)*puVar43 >> 0x20);
              puVar43 = (undefined8 *)func_?(iVar9);
              *puVar43 = CONCAT44(fStack_19,fStack_18);
              *(undefined4 *)(puVar43 + 1) = uVar51;
            }
            if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVElipsoidOverlapCheck);
            }
            pBVar52 = MVElipsoidOverlapCheck_GetBoundsFromVectors
                                (&BStack_23,vectors,(MethodInfo *)0x0);
            fStack_4 = (pBVar52->m_Center).x;
            fStack_5 = (pBVar52->m_Center).y;
            fStack_6 = (pBVar52->m_Center).z;
            fStack_7 = (pBVar52->m_Extents).x;
            uStack_8._0_4_ = (pBVar52->m_Extents).y;
            uStack_8._4_4_ = (pBVar52->m_Extents).z;
            puVar43 = (undefined8 *)
                      func_?(auStack_15,
                                      &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal
                                      ,fVar40,fVar41,position.z,0);
            func_?(&fStack_4,(int)*puVar43,(int)((ulonglong)*puVar43 >> 0x20),
                            *(undefined4 *)(puVar43 + 1),0);
            localElipsoidBounds.m_Center.y = fStack_5;
            localElipsoidBounds.m_Center.x = fStack_4;
            localElipsoidBounds.m_Center.z = fStack_6;
            localElipsoidBounds.m_Extents.x = fStack_7;
            localElipsoidBounds.m_Extents.y = (float)(int)uStack_8;
            localElipsoidBounds.m_Extents.z = (float)((ulonglong)uStack_8 >> 0x20);
            bVar53 = MVElipsoidOverlapCheck_ScanElipsoidBounds
                               (localElipsoidBounds,chunk,(ICubeModelCollider *)wo,
                                elipsoidOverlapResult,(MethodInfo *)0x0);
            return bVar53;
          }
        }
      }
    }
  }
  else {
    func_?(wo,pIVar10);
  }
  func_?(0);
  pcVar54 = (code *)swi(3);
  bVar53 = (*pcVar54)();
  return bVar53;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheckSector(Vector3, Vector3, Quaternion, Int32,
   HashSet`1[System.Int32]) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
          (Vector3 radius,Vector3 position,Quaternion rotation,int32_t layerMask,
          HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<MVOverlapResult>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<MVOverlapResult>__List__);
  fVar1 = 0.0;
  iVar2 = 0;
  do {
    fVar3 = (float10)func_?(&radius,iVar2,0);
    if (fVar1 < (float)fVar3) {
      fVar3 = (float10)func_?(&radius,iVar2,0);
      fVar1 = (float)fVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
    func_?(TypeInfo__CollisionDetectionGlobalBuffers);
  }
  iVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                    (position,fVar1,
                     TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                     layerMask,(MethodInfo *)0x0);
  iVar2 = 0;
  if (iVar4 < 1) {
    return (List_1_MVOverlapResult_ *)this;
  }
  do {
    if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
      func_?();
    }
    if ((TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer ==
         (Collider__Array *)0x0) ||
       (this_00 = (Component_1 *)func_?(), this_00 == (Component_1 *)0x0))
    goto code_?;
    t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                  (this_00,(MethodInfo *)0x0);
    this_01 = (BoxCollider__Class *)&UNK_?;
    wo = (BoxCollider__Class *)
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject(t,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
      radius.y = (float)TypeInfo__SharedCollisionFunctions;
      radius.x = (float)&UNK_?;
      func_?();
    }
    pBVar5 = (BoxCollider__Class *)0x0;
    bVar6 = SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
                      ((MVWorldObjectClient *)wo,ignoreWoIds,(MethodInfo *)0x0);
    fVar1 = radius.z;
    if (bVar6 == 0) {
      if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
        func_?();
      }
      uVar7 = 0;
      puVar8 = &stack0xffffffe4;
      pBVar5 = TypeInfo__UnityEngine__BoxCollider;
      this_01 = wo;
      chunk = (BoxCollider *)func_?();
      radius_00.y = (float)uVar7;
      radius_00.x = (float)puVar8;
      radius_00.z = fVar1;
      bVar6 = MVElipsoidOverlapCheck_ElipsoidOverlapCheckOnWo
                        (radius_00,position,rotation,chunk,in_stack_9,in_stack_10,
                         in_stack_11);
      if (bVar6 != 0) {
        if (wo == (BoxCollider__Class *)0x0) {
code_?:
          func_?();
          pcVar12 = (code *)swi(3);
          pLVar13 = (List_1_MVOverlapResult_ *)(*pcVar12)();
          return pLVar13;
        }
        this_01 = (BoxCollider__Class *)0x0;
        pUVar14 = (UnityAction *)&UNK_?;
        pIVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
        if (this_01 == (BoxCollider__Class *)0x0) goto code_?;
        item.callback = pUVar14;
        item.order = (int32_t)pIVar15;
        pBVar5 = this_01;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        BeforeRenderHelper+OrderBlock]::List_1_UnityEngine_BeforeRenderHelper_OrderBlock__Add
                  ((List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)this_01,item,
                   MethodInfo__System__Collections__Generic__List<MVOverlapResult>__Add_MVOverlapResult_
                  );
        if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
          radius.y = (float)TypeInfo__MVElipsoidOverlapCheck;
          radius.x = (float)&UNK_?;
          func_?();
        }
        if (TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType == 0) {
          return (List_1_MVOverlapResult_ *)this_01;
        }
      }
    }
    iVar2 = iVar2 + 1;
    if ((int)pBVar5 <= iVar2) {
      return (List_1_MVOverlapResult_ *)this_01;
    }
  } while( true );
}


/* Bounds GetBoundsFromAxisAlignedVectors(Vector3[]) */

Bounds * Assembly-CSharp.dll::MVElipsoidOverlapCheck::
         MVElipsoidOverlapCheck_GetBoundsFromAxisAlignedVectors
                   (Bounds *__return_storage_ptr__,Vector3__Array *vectors,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if (vectors != (Vector3__Array *)0x0) {
    for (; iVar1 < (int)vectors->max_length; iVar1 = iVar1 + 1) {
      if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVElipsoidOverlapCheck);
      }
      puVar2 = (undefined8 *)func_?(iVar1);
      puVar2 = (undefined8 *)
               func_?(&BStack_3.m_Extents,
                               &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal,
                               *puVar2,*(undefined4 *)(puVar2 + 1),0);
      uStack_4 = *puVar2;
      uVar5 = *(undefined4 *)(puVar2 + 1);
      puVar2 = (undefined8 *)func_?(iVar1);
      *puVar2 = uStack_4;
      *(undefined4 *)(puVar2 + 1) = uVar5;
    }
    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pBVar6 = MVElipsoidOverlapCheck_GetBoundsFromVectors(&BStack_3,vectors,(MethodInfo *)0x0);
    fVar7 = (pBVar6->m_Center).y;
    fVar8 = (pBVar6->m_Center).z;
    fVar9 = (pBVar6->m_Extents).x;
    (__return_storage_ptr__->m_Center).x = (pBVar6->m_Center).x;
    (__return_storage_ptr__->m_Center).y = fVar7;
    (__return_storage_ptr__->m_Center).z = fVar8;
    (__return_storage_ptr__->m_Extents).x = fVar9;
    fVar7 = (pBVar6->m_Extents).z;
    (__return_storage_ptr__->m_Extents).y = (pBVar6->m_Extents).y;
    (__return_storage_ptr__->m_Extents).z = fVar7;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  pBVar6 = (Bounds *)(*pcVar10)();
  return pBVar6;
}


/* Bounds GetBoundsFromVectors(Vector3[]) */

Bounds * Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_GetBoundsFromVectors
                   (Bounds *__return_storage_ptr__,Vector3__Array *vectors,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  uStack_7 = 0;
  fStack_8 = 0.0;
  auStack_6._0_4_ = (SlideOnClick__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Behaviour__Fields)0x0;
  auStack_6._12_4_ = 0.0;
  if (vectors == (Vector3__Array *)0x0) {
    func_?(0);
  }
  else {
    pVStack_9 = vectors->vector;
    while( true ) {
      if ((int)vectors->max_length <= (int)uVar1) {
        (__return_storage_ptr__->m_Center).x = (float)auStack_6._0_4_;
        (__return_storage_ptr__->m_Center).y = (float)auStack_6._4_4_;
        (__return_storage_ptr__->m_Center).z = (float)auStack_6._8_4_;
        (__return_storage_ptr__->m_Extents).x = (float)auStack_6._12_4_;
        (__return_storage_ptr__->m_Extents).y = (float)auStack_6._16_4_;
        (__return_storage_ptr__->m_Extents).z = (float)auStack_6._20_4_;
        return __return_storage_ptr__;
      }
      if (vectors->max_length <= uVar1) break;
      uStack_2._0_4_ = pVStack_9->x;
      uStack_2._4_4_ = pVStack_9->y;
      iVar10 = 0;
      fStack_3 = pVStack_9->z;
      do {
        pVVar11 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           (&VStack_12,(InputToPlayerMovementAndroid *)auStack_6,(MethodInfo *)0x0)
        ;
        uStack_4._0_4_ = pVVar11->x;
        uStack_4._4_4_ = pVVar11->y;
        fStack_5 = pVVar11->z;
        fVar13 = (float10)func_?(&uStack_4,iVar10,0);
        fStack_14 = (float)fVar13;
        fVar13 = (float10)func_?(&uStack_2,iVar10,0);
        fStack_15 = (float)fVar13;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        if (fStack_14 <
            (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_15 >> 0x20) & _UNK_?,
                                    SUB84((double)fStack_15,0) & _UNK_?)) {
          pVVar11 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                             ((Vector3 *)(auStack_6 + 0x18),
                              (InputToPlayerMovementAndroid *)auStack_6,(MethodInfo *)0x0);
          uStack_7._0_4_ = pVVar11->x;
          uStack_7._4_4_ = pVVar11->y;
          fStack_8 = pVVar11->z;
          fVar13 = (float10)func_?(&uStack_2,iVar10,0);
          fStack_14 = (float)fVar13;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            auStack_6._0_4_ = TypeInfo__UnityEngine__Mathf;
            func_?();
          }
          auStack_6._0_4_ = (SlideOnClick__Class *)0x0;
          func_?(&uStack_7,iVar10,
                          (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_14 >> 0x20) &
                                                  _UNK_?,
                                                  SUB84((double)fStack_14,0) & _UNK_?));
          newPos.z = fStack_8;
          newPos.x = (float)(undefined4)uStack_7;
          newPos.y = (float)uStack_7._4_4_;
          GameMeterVisuals::SlideOnClick::SlideOnClick_SetNewStartPosition
                    ((SlideOnClick *)auStack_6,newPos,(MethodInfo *)0x0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 3);
      uVar1 = uVar1 + 1;
      pVStack_9 = pVStack_9 + 1;
    }
  }
  uVar16 = func_?(0,0);
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  pBVar18 = (Bounds *)(*pcVar17)();
  return pBVar18;
}


/* Vector3 GetTangentNormal(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_GetTangentNormal
                    (Vector3 *__return_storage_ptr__,Vector3 tangent0,Vector3 tangent1,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  fStack_7 = 0.0;
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  puVar8 = (undefined8 *)
           func_?(&tangent0,TypeInfo__MVElipsoidOverlapCheck->static_fields,tangent0.x,
                           tangent0.y,tangent0.z,0);
  uStack_1 = *puVar8;
  uStack_2 = *(undefined4 *)(puVar8 + 1);
  puVar8 = (undefined8 *)func_?(&tangent0,&uStack_1,0);
  uStack_9 = *puVar8;
  fVar10 = *(float *)(puVar8 + 1);
  puVar8 = (undefined8 *)
           func_?(&tangent0,TypeInfo__MVElipsoidOverlapCheck->static_fields,tangent1.x,
                           tangent1.y,tangent1.z,0);
  uStack_3 = (undefined4)*puVar8;
  uStack_4 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  uStack_5 = *(undefined4 *)(puVar8 + 1);
  puVar8 = (undefined8 *)func_?(&tangent1,&uStack_3,0);
  uVar11 = *puVar8;
  fVar12 = *(float *)(puVar8 + 1);
  tangent0.y = (float)uVar11;
  tangent0.z = (float)((ulonglong)uVar11 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
    uVar11 = CONCAT44(tangent0.z,tangent0.y);
  }
  lhs.z = fVar10;
  lhs.x = (float)(undefined4)uStack_9;
  lhs.y = (float)uStack_9._4_4_;
  rhs.z = fVar12;
  rhs.x = (float)(int)uVar11;
  rhs.y = (float)(int)((ulonglong)uVar11 >> 0x20);
  pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                     (&tangent0,lhs,rhs,(MethodInfo *)0x0);
  uStack_6._0_4_ = pVVar13->x;
  uStack_6._4_4_ = pVVar13->y;
  fStack_7 = pVVar13->z;
  puVar8 = (undefined8 *)func_?(&tangent0,&uStack_6,0);
  uStack_4 = *(undefined4 *)(puVar8 + 1);
  uStack_5 = 0;
  fStack_7 = (float)*puVar8;
  uStack_3 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  uStack_6 = CONCAT44(&TypeInfo__MVElipsoidOverlapCheck->static_fields->elipsoidSpaceToWorld,
                       &tangent0);
  puVar8 = (undefined8 *)func_?();
  uVar11 = *puVar8;
  fVar10 = *(float *)(puVar8 + 1);
  __return_storage_ptr__->x = (float)(int)uVar11;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar11 >> 0x20);
  __return_storage_ptr__->z = fVar10;
  return __return_storage_ptr__;
}


/* Vector3[] GetTangentNormalsLocalSpace() */

Vector3__Array *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_GetTangentNormalsLocalSpace
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  puVar4 = (undefined8 *)
            func_?(&stack0xffffffd8,
                            &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,uVar2,
                            uVar3,pVVar1->z,0);
  fVar5 = *(float *)(puVar4 + 1);
  uVar6 = (undefined4)*puVar4;
  uVar7 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  puVar4 = (undefined8 *)
            func_?(&stack0xffffffec,
                            &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,uVar8,
                            uVar9,pVVar1->z);
  uVar10 = *puVar4;
  method = *(MethodInfo **)(puVar4 + 1);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                     ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
  uVar11 = pVVar1->x;
  puVar4 = (undefined8 *)
            func_?(&stack0xffffffcc,
                            &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,uVar11);
  fVar12 = *(float *)(puVar4 + 1);
  fVar13 = (float)*puVar4;
  fVar14 = (float)((ulonglong)*puVar4 >> 0x20);
  pVVar15 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  if (pVVar15 == (Vector3__Array *)0x0) {
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    VVar16.y = (float)uVar7;
    VVar16.x = (float)uVar6;
    VVar16.z = fVar5;
    tangent1_00.y = fVar14;
    tangent1_00.x = fVar13;
    tangent1_00.z = fVar12;
    pVVar1 = MVElipsoidOverlapCheck_GetTangentNormal
                       ((Vector3 *)&stack0xffffffcc,VVar16,tangent1_00,(MethodInfo *)0x0);
    fVar17 = pVVar1->y;
    fVar14 = pVVar1->z;
    if (pVVar15->max_length == 0) goto code_?;
    pVVar15->vector[0].x = pVVar1->x;
    pVVar15->vector[0].y = fVar17;
    pVVar15->vector[0].z = fVar14;
    tangent0.z = (float)method;
    tangent0.x = (float)uVar10;
    tangent0.y = SUB84(uVar10,4);
    tangent1_01.y = 0.0;
    tangent1_01.x = fVar13;
    tangent1_01.z = fVar12;
    fVar17 = (float)method;
    pVVar1 = MVElipsoidOverlapCheck_GetTangentNormal
                       ((Vector3 *)&stack0xffffffcc,tangent0,tangent1_01,(MethodInfo *)0x0);
    fVar14 = pVVar1->y;
    fVar12 = pVVar1->z;
    if (1 < pVVar15->max_length) {
      pVVar15->vector[1].x = pVVar1->x;
      pVVar15->vector[1].y = fVar14;
      pVVar15->vector[1].z = fVar12;
      fVar18 = (float)uVar10;
      fVar19 = SUB84(uVar10,4);
      VVar16 = (Vector3)CONCAT84(uVar20,fVar18);
      tangent1.y = fVar13;
      tangent1.x = fVar17;
      tangent1.z = fVar5;
      pVVar1 = MVElipsoidOverlapCheck_GetTangentNormal
                         ((Vector3 *)&stack0xffffffcc,VVar16,tangent1,(MethodInfo *)0x0);
      fVar12 = pVVar1->y;
      fVar5 = pVVar1->z;
      if (2 < pVVar15->max_length) {
        pVVar15->vector[2].x = pVVar1->x;
        pVVar15->vector[2].y = fVar12;
        pVVar15->vector[2].z = fVar5;
        return pVVar15;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  uStack21 = 0;
  uStack22 = 0;
  puStack23 = (undefined *)func_?();
  func_?();
  pcVar24 = (code *)swi(3);
  pVVar15 = (Vector3__Array *)(*pcVar24)();
  return pVVar15;
}


/* Boolean HandleCube(IntVector, ICubeModelCollider, MVOverlapResult ByRef) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_HandleCube
               (IntVector cubePos,ICubeModelCollider *cmb,MVOverlapResult *elipsoidOverlapResult,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  uStack_4 = 0;
  if (cmb == (ICubeModelCollider *)0x0) {
    func_?(0);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  pIVar7 = cmb->klass;
  uVar8 = 0;
  uVar9._0_1_ = (pIVar7->_1).rank;
  uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar9 != 0) {
    do {
      if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
          (Il2CppClass *)TypeInfo__ICubeModelCollider) {
        ppMVar10 = &(&(cmb->klass->vtable).GetCube)[pIVar7->interfaceOffsets[uVar8].offset].method;
        goto code_?;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  ppMVar10 = (MethodInfo **)func_?(cmb,TypeInfo__ICubeModelCollider,7);
code_?:
  cube = (Cube *)(*(code *)*ppMVar10)(cmb,cubePos._0_4_,cubePos.z,ppMVar10[1]);
  func_?(&uStack_1,(float)(int)cubePos.x,(float)(int)cubePos.y,(float)(int)cubePos.z,0);
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar6 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    puVar11 = (undefined8 *)
              func_?(&stack0xffffffcc,
                              &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                               localToRadiusExtendedElipsoidSpace,(int)uStack_1,
                              (int)((ulonglong)uStack_1 >> 0x20),fStack_2,0);
    uStack_3 = *puVar11;
    uStack_4 = *(undefined4 *)(puVar11 + 1);
    fVar12 = (float10)func_?(&uStack_3,0);
    if ((float)fVar12 <= _UNK_?) {
      if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVElipsoidOverlapCheck);
      }
      fVar13 = fStack_2;
      uVar14 = uStack_1;
      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists == 0) {
        if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVElipsoidOverlapCheck);
        }
        uVar15 = uStack_1;
        localPos.z = fVar13;
        uStack_1._0_4_ = (undefined4)uVar14;
        uStack_1._4_4_ = SUB84(uVar14,4);
        localPos.x = (float)(undefined4)uStack_1;
        localPos.y = (float)uStack_1._4_4_;
        uStack_1 = uVar15;
        bVar6 = MVElipsoidOverlapCheck_IsCenterPointWithinCube(cube,localPos,(MethodInfo *)0x0);
        if (bVar6 == 0) {
code_?:
          fVar13 = fStack_2;
          uVar14 = uStack_1;
          if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
            func_?();
          }
          uVar15 = uStack_1;
          localPos_00.z = fVar13;
          uStack_1._0_4_ = (undefined4)uVar14;
          uStack_1._4_4_ = SUB84(uVar14,4);
          localPos_00.x = (float)(undefined4)uStack_1;
          localPos_00.y = (float)uStack_1._4_4_;
          uStack_1 = uVar15;
          bVar6 = MVElipsoidOverlapCheck_DoDetailedCheck(cube,localPos_00,(MethodInfo *)0x0);
          return bVar6;
        }
      }
      else {
        if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVElipsoidOverlapCheck);
        }
        func_?(&stack0xffffffcc,
                        &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                         localToRadiusReducedElipsoidSpace,(int)uStack_1,
                        (int)((ulonglong)uStack_1 >> 0x20),fStack_2,0);
        fVar12 = (float10)func_?(&stack0xffffffd8,0);
        if (_UNK_? < (float)fVar12) goto code_?;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar1 = B.z;
  fVar2 = A.z;
  a_14.y = A.y;
  a_14.x = A.x;
  a_14.z = A.z;
  b_06.y = B.y;
  b_06.x = B.x;
  b_06.z = B.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xffffffe0,a_14,b_06,(MethodInfo *)0x0);
  fVar3 = (float10)func_?(&stack0xffffff64,0);
  if (_UNK_? <= (float)fVar3) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_15.y = A.y;
    a_15.x = A.x;
    a_15.z = fVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffe0,a_15,C,(MethodInfo *)0x0);
    fVar3 = (float10)func_?();
    if (_UNK_? <= (float)fVar3) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_16.y = B.y;
      a_16.x = B.x;
      a_16.z = fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffffe0,a_16,C,(MethodInfo *)0x0);
      fVar3 = (float10)func_?();
      if (_UNK_? <= (float)fVar3) {
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_17.y = A.y;
        a_17.x = A.x;
        a_17.z = fVar2;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            (&A,a_17,P,(MethodInfo *)0x0);
        uVar5._0_4_ = pVVar4->x;
        uVar5._4_4_ = pVVar4->y;
        fVar2 = pVVar4->z;
        a_18.y = B.y;
        a_18.x = B.x;
        a_18.z = B.z;
        A.z = fVar2;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            (&B,a_18,P,(MethodInfo *)0x0);
        B.z = pVVar4->z;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffe0,C,P,(MethodInfo *)0x0);
        uVar6 = pVVar4->x;
        uVar7 = pVVar4->y;
        fVar1 = pVVar4->z;
        uVar5 = uVar5 & 0xffffffff00000000;
        a_19.y = P.x;
        a_19.x = C.z;
        a_19.z = B.z;
        b_07.z = fVar2;
        b_07.x = (float)(int)uVar5;
        b_07.y = (float)(int)(uVar5 >> 0x20);
        fVar8 = P.x;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffd0,a_19,b_07,(MethodInfo *)0x0);
        uVar9._0_4_ = pVVar4->x;
        uVar9._4_4_ = pVVar4->y;
        fVar10 = pVVar4->z;
        B.x = 0.0;
        A.x = (float)uVar5;
        A.y = (float)(uVar5 >> 0x20);
        a_20.y = (float)uVar7;
        a_20.x = (float)uVar6;
        uVar11 = CONCAT44((Vector3 *)&stack0xffffffd0,&UNK_?);
        a_20.z = fVar1;
        b.z = fVar2;
        b.x = (float)(int)uVar5;
        b.y = (float)(int)(uVar5 >> 0x20);
        A.z = fVar2;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffd0,a_20,b,(MethodInfo *)0x0);
        B.z = (float)uVar9;
        B.y = (float)&stack0xffffffe0;
        B.x = (float)&UNK_?;
        lhs.z = fVar10;
        lhs.x = (float)uVar9;
        lhs.y = SUB84(uVar9,4);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                  ((Vector3 *)B.y,lhs,*pVVar4,(MethodInfo *)0x0);
        pVVar4 = (Vector3 *)func_?();
        uVar12._0_4_ = pVVar4->x;
        uVar12._4_4_ = pVVar4->y;
        fVar10 = pVVar4->z;
        uStack13 = (undefined4)((ulonglong)uVar11 >> 0x20);
        lhs_00.z = fVar2;
        lhs_00.x = (float)(int)uVar11;
        lhs_00.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        fStack14 = fVar2;
        fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                           (lhs_00,*pVVar4,(MethodInfo *)0x0);
        lhs_01.z = fVar10;
        lhs_01.x = (float)uVar12;
        lhs_01.y = SUB84(uVar12,4);
        rhs.z = fVar10;
        rhs.x = (float)uVar12;
        rhs.y = SUB84(uVar12,4);
        fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                           (lhs_01,rhs,(MethodInfo *)0x0);
        lhs_02.z = fVar2;
        lhs_02.x = (float)(int)uVar11;
        lhs_02.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        rhs_00.z = fVar2;
        rhs_00.x = (float)(int)uVar11;
        rhs_00.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                           (lhs_02,rhs_00,(MethodInfo *)0x0);
        fVar18 = B.z;
        rhs_01.y = P.x;
        rhs_01.x = C.z;
        lhs_03.z = fVar2;
        lhs_03.x = (float)(int)uVar11;
        lhs_03.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        rhs_01.z = B.z;
        fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                           (lhs_03,rhs_01,(MethodInfo *)0x0);
        rhs_02.y = (float)uVar7;
        rhs_02.x = (float)uVar6;
        lhs_04.z = fVar2;
        lhs_04.x = (float)(int)uVar11;
        lhs_04.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        rhs_02.z = fVar1;
        fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                           (lhs_04,rhs_02,(MethodInfo *)0x0);
        lhs_05.z = fVar18;
        lhs_05.x = C.z;
        lhs_05.y = P.x;
        rhs_03.z = fVar18;
        rhs_03.x = C.z;
        rhs_03.y = P.x;
        fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                           (lhs_05,rhs_03,(MethodInfo *)0x0);
        rhs_04.y = (float)uVar7;
        rhs_04.x = (float)uVar6;
        lhs_06.y = P.x;
        lhs_06.x = C.z;
        lhs_06.z = fVar18;
        rhs_04.z = fVar1;
        fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                           (lhs_06,rhs_04,(MethodInfo *)0x0);
        lhs_07.z = fVar1;
        lhs_07.x = (float)uVar6;
        lhs_07.y = (float)uVar7;
        rhs_05.z = fVar1;
        rhs_05.x = (float)uVar6;
        rhs_05.y = (float)uVar7;
        fVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                           (lhs_07,rhs_05,(MethodInfo *)0x0);
        a.y = P.x;
        a.x = C.z;
        a.z = fVar18;
        b_00.z = fVar2;
        b_00.x = (float)(int)uVar11;
        b_00.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffe0,a,b_00,(MethodInfo *)0x0);
        fVar2 = pVVar4->x;
        fVar24 = pVVar4->y;
        fVar10 = pVVar4->z;
        b_01.y = P.x;
        b_01.x = C.z;
        a_00.y = (float)uVar7;
        a_00.x = (float)uVar6;
        a_00.z = fVar1;
        b_01.z = fVar18;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffe0,a_00,b_01,(MethodInfo *)0x0);
        uVar25._0_4_ = pVVar4->x;
        uVar25._4_4_ = pVVar4->y;
        fVar26 = pVVar4->z;
        b_02.y = (float)uVar7;
        b_02.x = (float)uVar6;
        a_01.z = A.z;
        a_01.x = (float)(int)uVar11;
        a_01.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        b_02.z = fVar8;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffff78,a_01,b_02,(MethodInfo *)0x0);
        uVar27._0_4_ = pVVar4->x;
        uVar27._4_4_ = pVVar4->y;
        fVar1 = pVVar4->z;
        lhs_08.z = fVar10;
        lhs_08.x = fVar2;
        lhs_08.y = fVar24;
        rhs_06.z = fVar10;
        rhs_06.x = fVar2;
        rhs_06.y = fVar24;
        fVar28 = fVar1;
        d = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                      (lhs_08,rhs_06,(MethodInfo *)0x0);
        lhs_09.z = fVar26;
        lhs_09.x = (float)(int)uVar25;
        lhs_09.y = (float)(int)((ulonglong)uVar25 >> 0x20);
        rhs_07.z = fVar26;
        rhs_07.x = (float)(int)uVar25;
        rhs_07.y = (float)(int)((ulonglong)uVar25 >> 0x20);
        d_00 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                         (lhs_09,rhs_07,(MethodInfo *)0x0);
        lhs_10.z = fVar1;
        lhs_10.x = (float)uVar27;
        lhs_10.y = SUB84(uVar27,4);
        rhs_08.z = fVar1;
        rhs_08.x = (float)uVar27;
        rhs_08.y = SUB84(uVar27,4);
        d_01 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                         (lhs_10,rhs_08,(MethodInfo *)0x0);
        a_02.z = A.z;
        a_02.x = (float)(int)uVar11;
        a_02.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffb4,a_02,d,(MethodInfo *)0x0);
        fVar1 = pVVar4->x;
        fVar29 = pVVar4->y;
        fVar18 = pVVar4->z;
        a_03.y = fVar24;
        a_03.x = fVar2;
        a_03.z = fVar10;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                            ((Vector3 *)&stack0xffffffb4,fVar19 - fVar17,a_03,(MethodInfo *)0x0);
        a_04.y = fVar29;
        a_04.x = fVar1;
        a_04.z = fVar18;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffb4,a_04,*pVVar4,(MethodInfo *)0x0);
        fVar10 = pVVar4->x;
        fVar30 = pVVar4->y;
        fVar2 = pVVar4->z;
        a_05.y = P.x;
        a_05.x = C.z;
        a_05.z = B.z;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffb4,a_05,d_00,(MethodInfo *)0x0);
        fVar18 = pVVar4->x;
        fVar31 = pVVar4->y;
        fVar1 = pVVar4->z;
        a_06.z = fVar26;
        a_06.x = (float)(int)uVar25;
        a_06.y = (float)(int)((ulonglong)uVar25 >> 0x20);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                            ((Vector3 *)&stack0xffffffb4,fVar22 - fVar21,a_06,(MethodInfo *)0x0);
        a_07.y = fVar31;
        a_07.x = fVar18;
        a_07.z = fVar1;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffb4,a_07,*pVVar4,(MethodInfo *)0x0);
        uVar32._0_4_ = pVVar4->x;
        uVar32._4_4_ = pVVar4->y;
        fVar1 = pVVar4->z;
        a_08.y = (float)uVar7;
        a_08.x = (float)uVar6;
        a_08.z = fVar8;
        fVar24 = fVar1;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffb4,a_08,d_01,(MethodInfo *)0x0);
        fVar26 = pVVar4->x;
        fVar33 = pVVar4->y;
        fVar18 = pVVar4->z;
        a_09.z = fVar28;
        a_09.x = (float)uVar27;
        a_09.y = SUB84(uVar27,4);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                            ((Vector3 *)&stack0xffffffb4,fVar20 - fVar23,a_09,(MethodInfo *)0x0);
        a_10.y = fVar33;
        a_10.x = fVar26;
        a_10.z = fVar18;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffb4,a_10,*pVVar4,(MethodInfo *)0x0);
        fVar28 = pVVar4->x;
        fVar34 = pVVar4->y;
        fVar18 = pVVar4->z;
        a_11.y = (float)uVar7;
        a_11.x = (float)uVar6;
        a_11.z = fVar8;
        fVar29 = fVar18;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffb4,a_11,d,(MethodInfo *)0x0);
        b_03.y = fVar30;
        b_03.x = fVar10;
        b_03.z = fVar2;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffb4,*pVVar4,b_03,(MethodInfo *)0x0);
        uVar35._0_4_ = pVVar4->x;
        uVar35._4_4_ = pVVar4->y;
        fVar26 = pVVar4->z;
        a_12.z = A.z;
        a_12.x = (float)(int)uVar11;
        a_12.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            (&A,a_12,d_00,(MethodInfo *)0x0);
        b_04.z = fVar1;
        b_04.x = (float)(int)uVar32;
        b_04.y = (float)(int)((ulonglong)uVar32 >> 0x20);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffb4,*pVVar4,b_04,(MethodInfo *)0x0);
        uVar36 = pVVar4->x;
        uVar37 = pVVar4->y;
        fVar1 = pVVar4->z;
        a_13.y = P.x;
        a_13.x = C.z;
        a_13.z = B.z;
        A.y = (float)uVar36;
        A.z = (float)uVar37;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            (&B,a_13,d_01,(MethodInfo *)0x0);
        b_05.y = fVar34;
        b_05.x = fVar28;
        b_05.z = fVar18;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffb4,*pVVar4,b_05,(MethodInfo *)0x0);
        uVar38 = pVVar4->x;
        uVar39 = pVVar4->y;
        fVar18 = pVVar4->z;
        lhs_11.z = fVar2;
        lhs_11.x = fVar10;
        lhs_11.y = fVar30;
        rhs_09.z = fVar2;
        rhs_09.x = fVar10;
        rhs_09.y = fVar30;
        B.y = (float)uVar38;
        B.z = (float)uVar39;
        fVar31 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                           (lhs_11,rhs_09,(MethodInfo *)0x0);
        lhs_12.y = fVar30;
        lhs_12.x = fVar10;
        lhs_12.z = fVar2;
        rhs_10.z = fVar26;
        rhs_10.x = (float)uVar35;
        rhs_10.y = SUB84(uVar35,4);
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                          (lhs_12,rhs_10,(MethodInfo *)0x0);
        lhs_13.z = fVar24;
        lhs_13.x = (float)(int)uVar32;
        lhs_13.y = (float)(int)((ulonglong)uVar32 >> 0x20);
        rhs_11.z = fVar24;
        rhs_11.x = (float)(int)uVar32;
        rhs_11.y = (float)(int)((ulonglong)uVar32 >> 0x20);
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                          (lhs_13,rhs_11,(MethodInfo *)0x0);
        rhs_12.y = A.z;
        rhs_12.x = A.y;
        lhs_14.z = fVar24;
        lhs_14.x = (float)(int)uVar32;
        lhs_14.y = (float)(int)((ulonglong)uVar32 >> 0x20);
        rhs_12.z = fVar1;
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                          (lhs_14,rhs_12,(MethodInfo *)0x0);
        lhs_15.z = fVar29;
        lhs_15.x = fVar28;
        lhs_15.y = fVar34;
        rhs_13.z = fVar29;
        rhs_13.x = fVar28;
        rhs_13.y = fVar34;
        A.z = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                        (lhs_15,rhs_13,(MethodInfo *)0x0);
        rhs_14.y = B.z;
        rhs_14.x = B.y;
        lhs_16.y = fVar34;
        lhs_16.x = fVar28;
        lhs_16.z = fVar29;
        rhs_14.z = fVar18;
        fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                          (lhs_16,rhs_14,(MethodInfo *)0x0);
        bVar40 = 0.0 < fVar18 && d_01 * 3.8087603e-29 * d_01 < A.z;
        if ((((fVar16 * 3.8087603e-29 < fVar15 * fVar15) ||
             (3.8087603e-29 < fVar17 && (fVar17 < fVar20 && fVar17 < fVar19))) ||
            (3.8087603e-29 < fVar21 && (fVar21 < fVar22 && fVar21 < fVar19))) ||
           (((3.8087603e-29 < fVar23 && (fVar23 < fVar22 && fVar23 < fVar20) ||
             (0.0 < fVar2 && d * 3.8087603e-29 * d < fVar31)) ||
            (0.0 < fVar1 && d_00 * 3.8087603e-29 * d_00 < fVar10)))) {
          bVar40 = true;
        }
        return bVar40;
      }
    }
  }
  return 1;
}


/* Boolean IsCenterPointWithinCube(Cube, Vector3) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_IsCenterPointWithinCube
               (Cube *cube,Vector3 localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  bVar2 = 0;
  VStack_1.z = 0.0;
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             (MethodInfo *)0x0);
  iVar3 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pVVar4 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar4->max_length <= iVar3) break;
    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners == (Vector3__Array *)0x0)
    goto code_?;
    pfVar5 = (float *)func_?(iVar3);
    *pfVar5 = *pfVar5 + localPos.x;
    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners == (Vector3__Array *)0x0)
    goto code_?;
    iVar6 = func_?(iVar3);
    *(float *)(iVar6 + 4) = *(float *)(iVar6 + 4) + localPos.y;
    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners == (Vector3__Array *)0x0)
    goto code_?;
    iVar6 = func_?(iVar3);
    iVar3 = iVar3 + 1;
    *(float *)(iVar6 + 8) = localPos.z + *(float *)(iVar6 + 8);
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pFVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_FaceFlagsArray
                     ((MethodInfo *)0x0);
  uVar8 = 0;
  if (pFVar7 != (FaceFlags__Enum__Array *)0x0) goto code_?;
code_?:
  func_?(0);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
code_?:
  if ((int)pFVar7->max_length <= (int)uVar8) {
    return bVar2 & 1;
  }
  if (pFVar7->max_length <= uVar8) goto code_?;
  cube = (Cube *)CONCAT31(cube._1_3_,*(undefined1 *)((int)pFVar7->vector + uVar8));
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                   ((FaceFlags__Enum)cube,(MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
            (&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             &TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace,face,(MethodInfo *)0x0);
  pMVar12 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  fStack_13 = (pMVar12->localElipsoidPosition).x + _UNK_?;
  fStack_14 = (pMVar12->localElipsoidPosition).z;
  fStack_15 = (pMVar12->localElipsoidPosition).y;
  fStack_16 = (pMVar12->localElipsoidPosition).z;
  uStack_17._0_4_ = (pMVar12->localElipsoidPosition).x;
  uStack_17._4_4_ = (pMVar12->localElipsoidPosition).y;
  if (pMVar12->cachedFace == (Vector3__Array *)0x0) goto code_?;
  puVar18 = (undefined8 *)func_?(0);
  uStack_19 = *puVar18;
  fStack_20 = *(float *)(puVar18 + 1);
  if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
  goto code_?;
  puVar18 = (undefined8 *)func_?(3);
  uStack_21 = *puVar18;
  fStack_22 = *(float *)(puVar18 + 1);
  if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
  goto code_?;
  pVVar23 = (Vector3 *)func_?(2);
  p2_00.y = fStack_15;
  p2_00.x = fStack_13;
  p1_00.z = fStack_14;
  p1_00.x = (float)(undefined4)uStack_17;
  p1_00.y = (float)uStack_17._4_4_;
  p2_00.z = fStack_16;
  pa_00.z = fStack_20;
  pa_00.x = (float)(undefined4)uStack_19;
  pa_00.y = (float)uStack_19._4_4_;
  pb_00.z = fStack_22;
  pb_00.x = (float)(undefined4)uStack_21;
  pb_00.y = (float)uStack_21._4_4_;
  bVar11 = MathFunctions::MathFunctions_LineFacet
                    (p1_00,p2_00,pa_00,pb_00,*pVVar23,&VStack_1,(MethodInfo *)0x0);
  if (bVar11 != 0) {
    bVar2 = bVar2 + 1;
  }
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pMVar12 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  fStack_22 = (pMVar12->localElipsoidPosition).z;
  uStack_21._0_4_ = (pMVar12->localElipsoidPosition).x;
  uStack_21._4_4_ = (pMVar12->localElipsoidPosition).y;
  if (pMVar12->cachedFace == (Vector3__Array *)0x0) goto code_?;
  puVar18 = (undefined8 *)func_?(2);
  uStack_19 = *puVar18;
  fStack_20 = *(float *)(puVar18 + 1);
  if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
  goto code_?;
  puVar18 = (undefined8 *)func_?(1);
  uStack_17 = *puVar18;
  fStack_14 = *(float *)(puVar18 + 1);
  if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)
  goto code_?;
  pVVar23 = (Vector3 *)func_?(0);
  p2.y = fStack_15;
  p2.x = fStack_13;
  p1.z = fStack_22;
  p1.x = (float)(undefined4)uStack_21;
  p1.y = (float)uStack_21._4_4_;
  p2.z = fStack_16;
  pa.z = fStack_20;
  pa.x = (float)(undefined4)uStack_19;
  pa.y = (float)uStack_19._4_4_;
  pb.z = fStack_14;
  pb.x = (float)(undefined4)uStack_17;
  pb.y = (float)uStack_17._4_4_;
  bVar11 = MathFunctions::MathFunctions_LineFacet(p1,p2,pa,pb,*pVVar23,&VStack_1,(MethodInfo *)0x0);
  if (bVar11 != 0) {
    bVar2 = bVar2 + 1;
  }
  uVar8 = uVar8 + 1;
  goto code_?;
}


/* Boolean ScanElipsoidBounds(Bounds, BoxCollider, ICubeModelCollider, MVOverlapResult ByRef) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ScanElipsoidBounds
               (Bounds localElipsoidBounds,BoxCollider *chunk,ICubeModelCollider *cmb,
               MVOverlapResult *elipsoidOverlapResult,MethodInfo *method)

{
  uStack_1 = CONCAT44(pMStack_2,unaff_EBX);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  IStack_3.x = 0;
  IStack_3.y = 0;
  IStack_3.z = 0;
  IStack_4.x = 0;
  IStack_4.y = 0;
  IStack_4.z = 0;
  IStack_5.x = 0;
  IStack_5.y = 0;
  IStack_5.z = 0;
  IStack_6.x = 0;
  IStack_6.y = 0;
  IStack_6.z = 0;
  uStack_7 = 0;
  iStack_8 = 0;
  uStack_1 = uStack_1 & 0xffffffff;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  fStack_11 = 0.0;
  uStack_12 = 0;
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  this = (List_1_UnityEngine_UIVertex_ *)
         TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
  if (this != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Clear__);
    puVar13 = (undefined8 *)func_?(auStack_14,(short)&localElipsoidBounds,0);
    uVar15 = *puVar13;
    uVar16 = 0;
    localPos_00.y._0_2_ = (short)uVar15;
    localPos_00.x = (float)&uStack_17;
    localPos_00.y._2_2_ = (short)((ulonglong)uVar15 >> 0x10);
    localPos_00.z = (float)((ulonglong)uVar15 >> 0x20);
    IVar18 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_00,*(MethodInfo **)(puVar13 + 1));
    IStack_3._0_4_ = *IVar18._0_4_;
    IStack_3.z = *(int16_t *)(IVar18._0_4_ + 1);
    puVar13 = (undefined8 *)func_?((short)auStack_14,&localElipsoidBounds,0,uVar16);
    uVar15 = *puVar13;
    localPos.y._0_2_ = (short)uVar15;
    localPos.x = (float)&uStack_17;
    localPos.y._2_2_ = (short)((ulonglong)uVar15 >> 0x10);
    localPos.z = (float)((ulonglong)uVar15 >> 0x20);
    IVar18 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos,*(MethodInfo **)(puVar13 + 1));
    IStack_4._0_4_ = *IVar18._0_4_;
    IStack_4.z = *(int16_t *)(IVar18._0_4_ + 1);
    if (chunk != (BoxCollider *)0x0) {
      pVVar19 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                         (&VStack_20,chunk,(MethodInfo *)0x0);
      uStack_17._0_4_ = pVVar19->x;
      uStack_17._4_4_ = (int)pVVar19->y;
      fVar21 = pVVar19->z;
      pVVar19 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                         (&VStack_20,chunk,(MethodInfo *)0x0);
      uStack_1._0_4_ = pVVar19->x;
      pMStack_2 = (MVElipsoidOverlapCheck__Class *)pVVar19->y;
      fStack_9 = pVVar19->z;
      fStack_10 = 0.0;
      func_?((short)&pMStack_2,(int)uStack_17,(int)((ulonglong)uStack_17 >> 0x20),fVar21);
      pMStack_22 = pMStack_2;
      VStack_20.x = fStack_9;
      VStack_20.y = fStack_10;
      VStack_20.z = fStack_11;
      uStack_17 = uStack_12;
      if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCollisionFunctions);
      }
      localSpaceBounds.m_Center.y = VStack_20.x;
      localSpaceBounds.m_Center.x = (float)pMStack_22;
      localSpaceBounds.m_Center.z = VStack_20.y;
      localSpaceBounds.m_Extents.x = VStack_20.z;
      localSpaceBounds.m_Extents.y = (float)(int)uStack_17;
      localSpaceBounds.m_Extents.z = (float)((ulonglong)uStack_17 >> 0x20);
      SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                (&IStack_5,&IStack_6,localSpaceBounds,(MethodInfo *)0x0);
      IVar18.z = IStack_5.z;
      IVar18.x = IStack_5.x;
      IVar18.y = IStack_5.y;
      max.z = IStack_6.z;
      max.x = IStack_6.x;
      max.y = IStack_6.y;
      MathFunctions::MathFunctions_ClampIntVector(&IStack_3,IVar18,max,(MethodInfo *)0x0);
      min.z = IStack_5.z;
      min.x = IStack_5.x;
      min.y = IStack_5.y;
      max_00.z = IStack_6.z;
      max_00.x = IStack_6.x;
      max_00.y = IStack_6.y;
      MathFunctions::MathFunctions_ClampIntVector(&IStack_4,min,max_00,(MethodInfo *)0x0);
      bVar23 = 0;
      iVar24 = (int)IStack_3.x;
      bStack_25 = 0;
      uStack_17 = CONCAT44(iVar24,(undefined4)uStack_17);
      if (iVar24 <= IStack_4.x) {
        iVar26 = IStack_4.z;
        iVar27 = IStack_4.y;
        do {
          iStack_28 = (int)IStack_3.y;
          if (iStack_28 <= iVar27) {
            do {
              iVar29 = (int)IStack_3.z;
              if (iVar29 <= iVar26) {
                do {
                  func_?(&uStack_7,iVar24,iStack_28,(short)iVar29,0);
                  iVar26 = iStack_8;
                  uVar16 = uStack_7;
                  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVElipsoidOverlapCheck);
                  }
                  uVar30 = uStack_7;
                  cubePos.z = iVar26;
                  uStack_7._0_2_ = (undefined2)uVar16;
                  uStack_7._2_2_ = SUB42(uVar16,2);
                  cubePos.x = (undefined2)uStack_7;
                  cubePos.y = uStack_7._2_2_;
                  uStack_7 = uVar30;
                  bVar31 = MVElipsoidOverlapCheck_HandleCube
                                    (cubePos,cmb,elipsoidOverlapResult,(MethodInfo *)0x0);
                  bVar23 = bStack_25;
                  if (bVar31 != 0) {
                    bStack_25 = 1;
                    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVElipsoidOverlapCheck);
                    }
                    this_00 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
                    if (this_00 == (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
                    item.z = iStack_8;
                    item.x = (undefined2)uStack_7;
                    item.y = uStack_7._2_2_;
                    mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
                    List_1_MV_WorldObject_IntVector__Add
                              (this_00,item,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                              );
                    bVar23 = 1;
                    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType == 0) {
                      if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
                        uStack_1 = CONCAT44(TypeInfo__MVElipsoidOverlapCheck,&UNK_?);
                        func_?();
                      }
                      pLVar32 = (List_1_VoxelHit_ *)
                               TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
                      if (pLVar32 != (List_1_VoxelHit_ *)0x0) {
                        pVVar33 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                                  List_1_VoxelHit__ToArray
                                            (pLVar32,
                                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__ToArray__
                                            );
                        elipsoidOverlapResult->localCubePos = (IntVector__Array *)pVVar33;
                        return 1;
                      }
                      goto code_?;
                    }
                  }
                  iVar29 = iVar29 + 1;
                  iVar24 = uStack_17._4_4_;
                  iVar26 = IStack_4.z;
                } while (iVar29 <= IStack_4.z);
              }
              iStack_28 = iStack_28 + 1;
              iVar27 = IStack_4.y;
            } while (iStack_28 <= IStack_4.y);
          }
          iVar24 = iVar24 + 1;
          uStack_17 = CONCAT44(iVar24,(undefined4)uStack_17);
        } while (iVar24 <= IStack_4.x);
        if (bVar23 != 0) {
          if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVElipsoidOverlapCheck);
          }
          pLVar32 = (List_1_VoxelHit_ *)
                   TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
          if (pLVar32 == (List_1_VoxelHit_ *)0x0) goto code_?;
          pVVar33 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                    List_1_VoxelHit__ToArray
                              (pLVar32,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__ToArray__
                              );
          elipsoidOverlapResult->localCubePos = (IntVector__Array *)pVVar33;
        }
      }
      return bVar23;
    }
  }
code_?:
  func_?(0);
  pcVar34 = (code *)swi(3);
  bVar23 = (*pcVar34)();
  return bVar23;
}


/* MVElipsoidOverlapCheck() */

void Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->worldToElipsoidSpace).m00 = fStack_1;
  (pMVar2->worldToElipsoidSpace).m10 = fStack_3;
  (pMVar2->worldToElipsoidSpace).m20 = fStack_4;
  (pMVar2->worldToElipsoidSpace).m30 = fStack_5;
  (pMVar2->worldToElipsoidSpace).m01 = fStack_6;
  (pMVar2->worldToElipsoidSpace).m11 = fStack_7;
  (pMVar2->worldToElipsoidSpace).m21 = fStack_8;
  (pMVar2->worldToElipsoidSpace).m31 = fStack_9;
  (pMVar2->worldToElipsoidSpace).m02 = fStack_10;
  (pMVar2->worldToElipsoidSpace).m12 = fStack_11;
  (pMVar2->worldToElipsoidSpace).m22 = fStack_12;
  (pMVar2->worldToElipsoidSpace).m32 = fStack_13;
  (pMVar2->worldToElipsoidSpace).m03 = fStack_14;
  (pMVar2->worldToElipsoidSpace).m13 = fStack_15;
  (pMVar2->worldToElipsoidSpace).m23 = fStack_16;
  (pMVar2->worldToElipsoidSpace).m33 = fStack_17;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->elipsoidSpaceToWorld).m00 = fStack_1;
  (pMVar2->elipsoidSpaceToWorld).m10 = fStack_3;
  (pMVar2->elipsoidSpaceToWorld).m20 = fStack_4;
  (pMVar2->elipsoidSpaceToWorld).m30 = fStack_5;
  (pMVar2->elipsoidSpaceToWorld).m01 = fStack_6;
  (pMVar2->elipsoidSpaceToWorld).m11 = fStack_7;
  (pMVar2->elipsoidSpaceToWorld).m21 = fStack_8;
  (pMVar2->elipsoidSpaceToWorld).m31 = fStack_9;
  (pMVar2->elipsoidSpaceToWorld).m02 = fStack_10;
  (pMVar2->elipsoidSpaceToWorld).m12 = fStack_11;
  (pMVar2->elipsoidSpaceToWorld).m22 = fStack_12;
  (pMVar2->elipsoidSpaceToWorld).m32 = fStack_13;
  (pMVar2->elipsoidSpaceToWorld).m03 = fStack_14;
  (pMVar2->elipsoidSpaceToWorld).m13 = fStack_15;
  (pMVar2->elipsoidSpaceToWorld).m23 = fStack_16;
  (pMVar2->elipsoidSpaceToWorld).m33 = fStack_17;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->localToElipsoidSpace).m00 = fStack_1;
  (pMVar2->localToElipsoidSpace).m10 = fStack_3;
  (pMVar2->localToElipsoidSpace).m20 = fStack_4;
  (pMVar2->localToElipsoidSpace).m30 = fStack_5;
  (pMVar2->localToElipsoidSpace).m01 = fStack_6;
  (pMVar2->localToElipsoidSpace).m11 = fStack_7;
  (pMVar2->localToElipsoidSpace).m21 = fStack_8;
  (pMVar2->localToElipsoidSpace).m31 = fStack_9;
  (pMVar2->localToElipsoidSpace).m02 = fStack_10;
  (pMVar2->localToElipsoidSpace).m12 = fStack_11;
  (pMVar2->localToElipsoidSpace).m22 = fStack_12;
  (pMVar2->localToElipsoidSpace).m32 = fStack_13;
  (pMVar2->localToElipsoidSpace).m03 = fStack_14;
  (pMVar2->localToElipsoidSpace).m13 = fStack_15;
  (pMVar2->localToElipsoidSpace).m23 = fStack_16;
  (pMVar2->localToElipsoidSpace).m33 = fStack_17;
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->localElipsoidPosition).x = 0.0;
  (pMVar2->localElipsoidPosition).y = 0.0;
  (pMVar2->localElipsoidPosition).z = 0.0;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m00 = fStack_1;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m10 = fStack_3;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m20 = fStack_4;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m30 = fStack_5;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m01 = fStack_6;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m11 = fStack_7;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m21 = fStack_8;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m31 = fStack_9;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m02 = fStack_10;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m12 = fStack_11;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m22 = fStack_12;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m32 = fStack_13;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m03 = fStack_14;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m13 = fStack_15;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m23 = fStack_16;
  (pMVar2->worldToRadiusExtendedElipsoidSpace).m33 = fStack_17;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m00 = fStack_1;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m10 = fStack_3;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m20 = fStack_4;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m30 = fStack_5;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m01 = fStack_6;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m11 = fStack_7;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m21 = fStack_8;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m31 = fStack_9;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m02 = fStack_10;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m12 = fStack_11;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m22 = fStack_12;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m32 = fStack_13;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m03 = fStack_14;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m13 = fStack_15;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m23 = fStack_16;
  (pMVar2->radiusExtendedElipsoidSpaceToWorld).m33 = fStack_17;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m00 = fStack_1;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m10 = fStack_3;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m20 = fStack_4;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m30 = fStack_5;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m01 = fStack_6;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m11 = fStack_7;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m21 = fStack_8;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m31 = fStack_9;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m02 = fStack_10;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m12 = fStack_11;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m22 = fStack_12;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m32 = fStack_13;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m03 = fStack_14;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m13 = fStack_15;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m23 = fStack_16;
  (pMVar2->localToRadiusExtendedElipsoidSpace).m33 = fStack_17;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 0;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m00 = fStack_1;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m10 = fStack_3;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m20 = fStack_4;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m30 = fStack_5;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m01 = fStack_6;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m11 = fStack_7;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m21 = fStack_8;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m31 = fStack_9;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m02 = fStack_10;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m12 = fStack_11;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m22 = fStack_12;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m32 = fStack_13;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m03 = fStack_14;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m13 = fStack_15;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m23 = fStack_16;
  (pMVar2->worldToRadiusReducedElipsoidSpace).m33 = fStack_17;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m00 = fStack_1;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m10 = fStack_3;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m20 = fStack_4;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m30 = fStack_5;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m01 = fStack_6;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m11 = fStack_7;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m21 = fStack_8;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m31 = fStack_9;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m02 = fStack_10;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m12 = fStack_11;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m22 = fStack_12;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m32 = fStack_13;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m03 = fStack_14;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m13 = fStack_15;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m23 = fStack_16;
  (pMVar2->radiusReducedElipsoidSpaceToWorld).m33 = fStack_17;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->localToRadiusReducedElipsoidSpace).m00 = fStack_1;
  (pMVar2->localToRadiusReducedElipsoidSpace).m10 = fStack_3;
  (pMVar2->localToRadiusReducedElipsoidSpace).m20 = fStack_4;
  (pMVar2->localToRadiusReducedElipsoidSpace).m30 = fStack_5;
  (pMVar2->localToRadiusReducedElipsoidSpace).m01 = fStack_6;
  (pMVar2->localToRadiusReducedElipsoidSpace).m11 = fStack_7;
  (pMVar2->localToRadiusReducedElipsoidSpace).m21 = fStack_8;
  (pMVar2->localToRadiusReducedElipsoidSpace).m31 = fStack_9;
  (pMVar2->localToRadiusReducedElipsoidSpace).m02 = fStack_10;
  (pMVar2->localToRadiusReducedElipsoidSpace).m12 = fStack_11;
  (pMVar2->localToRadiusReducedElipsoidSpace).m22 = fStack_12;
  (pMVar2->localToRadiusReducedElipsoidSpace).m32 = fStack_13;
  (pMVar2->localToRadiusReducedElipsoidSpace).m03 = fStack_14;
  (pMVar2->localToRadiusReducedElipsoidSpace).m13 = fStack_15;
  (pMVar2->localToRadiusReducedElipsoidSpace).m23 = fStack_16;
  (pMVar2->localToRadiusReducedElipsoidSpace).m33 = fStack_17;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->localToWorld).m00 = fStack_1;
  (pMVar2->localToWorld).m10 = fStack_3;
  (pMVar2->localToWorld).m20 = fStack_4;
  (pMVar2->localToWorld).m30 = fStack_5;
  (pMVar2->localToWorld).m01 = fStack_6;
  (pMVar2->localToWorld).m11 = fStack_7;
  (pMVar2->localToWorld).m21 = fStack_8;
  (pMVar2->localToWorld).m31 = fStack_9;
  (pMVar2->localToWorld).m02 = fStack_10;
  (pMVar2->localToWorld).m12 = fStack_11;
  (pMVar2->localToWorld).m22 = fStack_12;
  (pMVar2->localToWorld).m32 = fStack_13;
  (pMVar2->localToWorld).m03 = fStack_14;
  (pMVar2->localToWorld).m13 = fStack_15;
  (pMVar2->localToWorld).m23 = fStack_16;
  (pMVar2->localToWorld).m33 = fStack_17;
  func_?(&fStack_1,0,0x40);
  pMVar2 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar2->worldToLocal).m00 = fStack_1;
  (pMVar2->worldToLocal).m10 = fStack_3;
  (pMVar2->worldToLocal).m20 = fStack_4;
  (pMVar2->worldToLocal).m30 = fStack_5;
  (pMVar2->worldToLocal).m01 = fStack_6;
  (pMVar2->worldToLocal).m11 = fStack_7;
  (pMVar2->worldToLocal).m21 = fStack_8;
  (pMVar2->worldToLocal).m31 = fStack_9;
  (pMVar2->worldToLocal).m02 = fStack_10;
  (pMVar2->worldToLocal).m12 = fStack_11;
  (pMVar2->worldToLocal).m22 = fStack_12;
  (pMVar2->worldToLocal).m32 = fStack_13;
  (pMVar2->worldToLocal).m03 = fStack_14;
  (pMVar2->worldToLocal).m13 = fStack_15;
  (pMVar2->worldToLocal).m23 = fStack_16;
  (pMVar2->worldToLocal).m33 = fStack_17;
  pVVar18 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners = pVVar18;
  pVVar18 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace = pVVar18;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 0;
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__
            );
  TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors =
       (List_1_MV_WorldObject_IntVector_ *)this;
  return;
}

