
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
  if (transform != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
              ((Vector3 *)&stack0xffffffd8,transform,(MethodInfo *)0x0);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       ((Vector3 *)&stack0xffffffd8,transform,localBounds.m_Center,(MethodInfo *)0x0
                       );
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffcc,transform,(MethodInfo *)0x0);
    uVar5 = pVVar1->x;
    uVar6 = pVVar1->y;
    fVar7 = position.x + ((float)uVar2 - (float)uVar5);
    fVar8 = position.y + ((float)uVar3 - (float)uVar6);
    fVar9 = position.z + (fVar4 - pVVar1->z);
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffc8,transform,(MethodInfo *)0x0);
    fVar4 = pQVar10->x;
    fVar11 = pQVar10->y;
    fVar12 = pQVar10->z;
    fVar13 = pQVar10->w;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    radius.y = fVar8;
    radius.x = fVar7;
    radius.z = fVar9;
    position_00.y = fVar8;
    position_00.x = fVar7;
    position_00.z = fVar9;
    rotation.y = fVar11;
    rotation.x = fVar4;
    rotation.z = fVar12;
    rotation.w = fVar13;
    pLVar14 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                       (radius,position_00,rotation,ignoreWoIds,layerMask,(MethodInfo *)0x0);
    return pLVar14;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pLVar14 = (List_1_MVOverlapResult_ *)(*pcVar15)();
  return pLVar14;
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
  this = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
         MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                   (radius,position,rotation,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (this != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
    if (0 < (this->fields)._size) {
      XVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
              XmlSchemaObjectTable+XmlSchemaObjectEntry]::
              List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                        (this,0,
                         MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                        );
      if (XVar1.xso != (XmlSchemaObject *)0x0) {
        XVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                          (this,0,
                           MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                          );
        if (XVar1.xso != (XmlSchemaObject *)0x0) {
          return ((XVar1.xso)->fields).linePos != 0;
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
  this = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
         MVElipsoidOverlapCheck_ElipsoidOverlapCheck
                   (position,transform,localBounds,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (this != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
    if (0 < (this->fields)._size) {
      XVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
              XmlSchemaObjectTable+XmlSchemaObjectEntry]::
              List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                        (this,0,
                         MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                        );
      if (XVar1.xso != (XmlSchemaObject *)0x0) {
        XVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                          (this,0,
                           MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_
                          );
        if (XVar1.xso != (XmlSchemaObject *)0x0) {
          return ((XVar1.xso)->fields).linePos != 0;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  elipsoidOverlapResult->woId = 0;
  elipsoidOverlapResult->localCubePos = (IntVector__Array *)0x0;
  iVar1 = func_?(wo,TypeInfo__ICubeModelCollider);
  pIVar2 = TypeInfo__ICubeModelCollider;
  if (iVar1 == 0) {
    return 0;
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    cmb = (ICubeModelCollider *)0x0;
code_?:
    if ((chunk == (BoxCollider *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)chunk,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                        ((Matrix4x4 *)&stack0xfffffef0,pTVar3,(MethodInfo *)0x0);
    fStack_5 = pMVar4->m00;
    puStack_6 = (undefined *)pMVar4->m10;
    fVar7 = pMVar4->m20;
    fVar8 = pMVar4->m30;
    fVar9 = pMVar4->m01;
    fVar10 = pMVar4->m11;
    fVar11 = pMVar4->m21;
    fVar12 = pMVar4->m31;
    fVar13 = pMVar4->m02;
    fVar14 = pMVar4->m12;
    fVar15 = pMVar4->m22;
    fVar16 = pMVar4->m32;
    fVar17 = pMVar4->m03;
    fVar18 = pMVar4->m13;
    fVar19 = pMVar4->m23;
    fVar20 = pMVar4->m33;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar21->localToWorld).m00 = fStack_5;
    (pMVar21->localToWorld).m10 = (float)puStack_6;
    (pMVar21->localToWorld).m20 = fVar7;
    (pMVar21->localToWorld).m30 = fVar8;
    (pMVar21->localToWorld).m01 = fVar9;
    (pMVar21->localToWorld).m11 = fVar10;
    (pMVar21->localToWorld).m21 = fVar11;
    (pMVar21->localToWorld).m31 = fVar12;
    (pMVar21->localToWorld).m02 = fVar13;
    (pMVar21->localToWorld).m12 = fVar14;
    (pMVar21->localToWorld).m22 = fVar15;
    (pMVar21->localToWorld).m32 = fVar16;
    (pMVar21->localToWorld).m03 = fVar17;
    (pMVar21->localToWorld).m13 = fVar18;
    (pMVar21->localToWorld).m23 = fVar19;
    (pMVar21->localToWorld).m33 = fVar20;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)chunk,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_worldToLocalMatrix
                        ((Matrix4x4 *)&stack0xfffffef0,pTVar3,(MethodInfo *)0x0);
    fVar13 = pMVar4->m10;
    fVar14 = pMVar4->m20;
    fVar15 = pMVar4->m30;
    fVar16 = pMVar4->m01;
    fVar17 = pMVar4->m11;
    fVar18 = pMVar4->m21;
    fVar19 = pMVar4->m31;
    fVar20 = pMVar4->m02;
    fVar7 = pMVar4->m12;
    fVar8 = pMVar4->m22;
    fVar9 = pMVar4->m32;
    fVar10 = pMVar4->m03;
    fVar11 = pMVar4->m13;
    fVar12 = pMVar4->m23;
    fVar22 = pMVar4->m33;
    pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar21->worldToLocal).m00 = pMVar4->m00;
    (pMVar21->worldToLocal).m10 = fVar13;
    (pMVar21->worldToLocal).m20 = fVar14;
    (pMVar21->worldToLocal).m30 = fVar15;
    (pMVar21->worldToLocal).m01 = fVar16;
    (pMVar21->worldToLocal).m11 = fVar17;
    (pMVar21->worldToLocal).m21 = fVar18;
    (pMVar21->worldToLocal).m31 = fVar19;
    (pMVar21->worldToLocal).m02 = fVar20;
    (pMVar21->worldToLocal).m12 = fVar7;
    (pMVar21->worldToLocal).m22 = fVar8;
    (pMVar21->worldToLocal).m32 = fVar9;
    (pMVar21->worldToLocal).m03 = fVar10;
    (pMVar21->worldToLocal).m13 = fVar11;
    (pMVar21->worldToLocal).m23 = fVar12;
    (pMVar21->worldToLocal).m33 = fVar22;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xfffffef0,position,rotation,radius,(MethodInfo *)0x0);
    fVar13 = pMVar4->m10;
    fVar14 = pMVar4->m20;
    fVar15 = pMVar4->m30;
    fVar16 = pMVar4->m01;
    fVar17 = pMVar4->m11;
    fVar18 = pMVar4->m21;
    fVar19 = pMVar4->m31;
    fVar20 = pMVar4->m02;
    fVar7 = pMVar4->m12;
    fVar8 = pMVar4->m22;
    fVar9 = pMVar4->m32;
    fVar10 = pMVar4->m03;
    fVar11 = pMVar4->m13;
    fVar12 = pMVar4->m23;
    fVar22 = pMVar4->m33;
    pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar21->elipsoidSpaceToWorld).m00 = pMVar4->m00;
    (pMVar21->elipsoidSpaceToWorld).m10 = fVar13;
    (pMVar21->elipsoidSpaceToWorld).m20 = fVar14;
    (pMVar21->elipsoidSpaceToWorld).m30 = fVar15;
    (pMVar21->elipsoidSpaceToWorld).m01 = fVar16;
    (pMVar21->elipsoidSpaceToWorld).m11 = fVar17;
    (pMVar21->elipsoidSpaceToWorld).m21 = fVar18;
    (pMVar21->elipsoidSpaceToWorld).m31 = fVar19;
    (pMVar21->elipsoidSpaceToWorld).m02 = fVar20;
    (pMVar21->elipsoidSpaceToWorld).m12 = fVar7;
    (pMVar21->elipsoidSpaceToWorld).m22 = fVar8;
    (pMVar21->elipsoidSpaceToWorld).m32 = fVar9;
    (pMVar21->elipsoidSpaceToWorld).m03 = fVar10;
    (pMVar21->elipsoidSpaceToWorld).m13 = fVar11;
    (pMVar21->elipsoidSpaceToWorld).m23 = fVar12;
    (pMVar21->elipsoidSpaceToWorld).m33 = fVar22;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                        ((Matrix4x4 *)&stack0xfffffef0,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->elipsoidSpaceToWorld,
                         (MethodInfo *)0x0);
    fVar13 = pMVar4->m10;
    fVar14 = pMVar4->m20;
    fVar15 = pMVar4->m30;
    fVar16 = pMVar4->m01;
    fVar17 = pMVar4->m11;
    fVar18 = pMVar4->m21;
    fVar19 = pMVar4->m31;
    fVar20 = pMVar4->m02;
    fVar7 = pMVar4->m12;
    fVar8 = pMVar4->m22;
    fVar9 = pMVar4->m32;
    fVar10 = pMVar4->m03;
    fVar11 = pMVar4->m13;
    fVar12 = pMVar4->m23;
    fVar22 = pMVar4->m33;
    pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar21->worldToElipsoidSpace).m00 = pMVar4->m00;
    (pMVar21->worldToElipsoidSpace).m10 = fVar13;
    (pMVar21->worldToElipsoidSpace).m20 = fVar14;
    (pMVar21->worldToElipsoidSpace).m30 = fVar15;
    (pMVar21->worldToElipsoidSpace).m01 = fVar16;
    (pMVar21->worldToElipsoidSpace).m11 = fVar17;
    (pMVar21->worldToElipsoidSpace).m21 = fVar18;
    (pMVar21->worldToElipsoidSpace).m31 = fVar19;
    (pMVar21->worldToElipsoidSpace).m02 = fVar20;
    (pMVar21->worldToElipsoidSpace).m12 = fVar7;
    (pMVar21->worldToElipsoidSpace).m22 = fVar8;
    (pMVar21->worldToElipsoidSpace).m32 = fVar9;
    (pMVar21->worldToElipsoidSpace).m03 = fVar10;
    (pMVar21->worldToElipsoidSpace).m13 = fVar11;
    (pMVar21->worldToElipsoidSpace).m23 = fVar12;
    (pMVar21->worldToElipsoidSpace).m33 = fVar22;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        ((Matrix4x4 *)&stack0xfffffef0,
                         TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToElipsoidSpace,
                         TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         (MethodInfo *)0x0);
    fVar13 = pMVar4->m10;
    fVar14 = pMVar4->m20;
    fVar15 = pMVar4->m30;
    fVar16 = pMVar4->m01;
    fVar17 = pMVar4->m11;
    fVar18 = pMVar4->m21;
    fVar19 = pMVar4->m31;
    fVar20 = pMVar4->m02;
    fVar7 = pMVar4->m12;
    fVar8 = pMVar4->m22;
    fVar9 = pMVar4->m32;
    fVar10 = pMVar4->m03;
    fVar11 = pMVar4->m13;
    fVar12 = pMVar4->m23;
    fVar22 = pMVar4->m33;
    pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar21->localToElipsoidSpace).m00 = pMVar4->m00;
    (pMVar21->localToElipsoidSpace).m10 = fVar13;
    (pMVar21->localToElipsoidSpace).m20 = fVar14;
    (pMVar21->localToElipsoidSpace).m30 = fVar15;
    (pMVar21->localToElipsoidSpace).m01 = fVar16;
    (pMVar21->localToElipsoidSpace).m11 = fVar17;
    (pMVar21->localToElipsoidSpace).m21 = fVar18;
    (pMVar21->localToElipsoidSpace).m31 = fVar19;
    (pMVar21->localToElipsoidSpace).m02 = fVar20;
    (pMVar21->localToElipsoidSpace).m12 = fVar7;
    (pMVar21->localToElipsoidSpace).m22 = fVar8;
    (pMVar21->localToElipsoidSpace).m32 = fVar9;
    (pMVar21->localToElipsoidSpace).m03 = fVar10;
    (pMVar21->localToElipsoidSpace).m13 = fVar11;
    (pMVar21->localToElipsoidSpace).m23 = fVar12;
    (pMVar21->localToElipsoidSpace).m33 = fVar22;
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                        ((Vector3 *)&stack0xffffffb8,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal,position,
                         (MethodInfo *)0x0);
    fVar14 = pVVar23->y;
    fVar13 = pVVar23->z;
    pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar21->localElipsoidPosition).x = pVVar23->x;
    (pMVar21->localElipsoidPosition).y = fVar14;
    (pMVar21->localElipsoidPosition).z = fVar13;
    if (wo == (MVWorldObjectClient *)0x0) goto code_?;
    puVar24 = (undefined8 *)
              (*(code *)(wo->klass->vtable).get_Scale.method)
                        (&stack0xffffffb8,wo,(wo->klass->vtable).set_Scale.methodPtr);
    fStack_5 = radius.x;
    puStack_6 = (undefined *)0x0;
    fVar25 = (float)*puVar24 * _UNK_?;
    fVar26 = *(float *)(puVar24 + 1) * _UNK_?;
    fVar27 = (float)((ulonglong)*puVar24 >> 0x20) * _UNK_?;
    s.y = radius.y + fVar27;
    s.x = radius.x + fVar25;
    s.z = radius.z + fVar26;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xfffffef0,position,rotation,s,(MethodInfo *)0x0);
    fVar13 = pMVar4->m10;
    fVar14 = pMVar4->m20;
    fVar15 = pMVar4->m30;
    fVar16 = pMVar4->m01;
    fVar17 = pMVar4->m11;
    fVar18 = pMVar4->m21;
    fVar19 = pMVar4->m31;
    fVar20 = pMVar4->m02;
    fVar7 = pMVar4->m12;
    fVar8 = pMVar4->m22;
    fVar9 = pMVar4->m32;
    fVar10 = pMVar4->m03;
    fVar11 = pMVar4->m13;
    fVar12 = pMVar4->m23;
    fVar22 = pMVar4->m33;
    pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m00 = pMVar4->m00;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m10 = fVar13;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m20 = fVar14;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m30 = fVar15;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m01 = fVar16;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m11 = fVar17;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m21 = fVar18;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m31 = fVar19;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m02 = fVar20;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m12 = fVar7;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m22 = fVar8;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m32 = fVar9;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m03 = fVar10;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m13 = fVar11;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m23 = fVar12;
    (pMVar21->radiusExtendedElipsoidSpaceToWorld).m33 = fVar22;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                        ((Matrix4x4 *)&stack0xfffffef0,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                          radiusExtendedElipsoidSpaceToWorld,(MethodInfo *)0x0);
    fVar13 = pMVar4->m10;
    fVar14 = pMVar4->m20;
    fVar15 = pMVar4->m30;
    fVar16 = pMVar4->m01;
    fVar17 = pMVar4->m11;
    fVar18 = pMVar4->m21;
    fVar19 = pMVar4->m31;
    fVar20 = pMVar4->m02;
    fVar7 = pMVar4->m12;
    fVar8 = pMVar4->m22;
    fVar9 = pMVar4->m32;
    fVar10 = pMVar4->m03;
    fVar11 = pMVar4->m13;
    fVar12 = pMVar4->m23;
    fVar22 = pMVar4->m33;
    pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m00 = pMVar4->m00;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m10 = fVar13;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m20 = fVar14;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m30 = fVar15;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m01 = fVar16;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m11 = fVar17;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m21 = fVar18;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m31 = fVar19;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m02 = fVar20;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m12 = fVar7;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m22 = fVar8;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m32 = fVar9;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m03 = fVar10;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m13 = fVar11;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m23 = fVar12;
    (pMVar21->worldToRadiusExtendedElipsoidSpace).m33 = fVar22;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        ((Matrix4x4 *)&stack0xfffffef0,
                         TypeInfo__MVElipsoidOverlapCheck->static_fields->
                         worldToRadiusExtendedElipsoidSpace,
                         TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         (MethodInfo *)0x0);
    fVar13 = pMVar4->m10;
    fVar14 = pMVar4->m20;
    fVar15 = pMVar4->m30;
    fVar16 = pMVar4->m01;
    fVar17 = pMVar4->m11;
    fVar18 = pMVar4->m21;
    fVar19 = pMVar4->m31;
    fVar20 = pMVar4->m02;
    fVar7 = pMVar4->m12;
    fVar8 = pMVar4->m22;
    fVar9 = pMVar4->m32;
    fVar10 = pMVar4->m03;
    fVar11 = pMVar4->m13;
    fVar12 = pMVar4->m23;
    fVar22 = pMVar4->m33;
    pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m00 = pMVar4->m00;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m10 = fVar13;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m20 = fVar14;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m30 = fVar15;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m01 = fVar16;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m11 = fVar17;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m21 = fVar18;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m31 = fVar19;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m02 = fVar20;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m12 = fVar7;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m22 = fVar8;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m32 = fVar9;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m03 = fVar10;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m13 = fVar11;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m23 = fVar12;
    (pMVar21->localToRadiusExtendedElipsoidSpace).m33 = fVar22;
    if (((fStack_5 - fVar25 <= 0.0) || (radius.y - fVar27 <= 0.0)) || (radius.z - fVar26 <= 0.0)) {
      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
        cmb = (ICubeModelCollider *)&UNK_?;
        func_?();
      }
      TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 0;
    }
    else {
      s_00.y = radius.y - fVar27;
      s_00.x = fStack_5 - fVar25;
      s_00.z = radius.z - fVar26;
      pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                          ((Matrix4x4 *)&stack0xfffffef0,position,rotation,s_00,(MethodInfo *)0x0);
      fStack_5 = pMVar4->m00;
      puStack_6 = (undefined *)pMVar4->m10;
      fVar7 = pMVar4->m20;
      fVar8 = pMVar4->m30;
      fVar9 = pMVar4->m01;
      fVar10 = pMVar4->m11;
      fVar11 = pMVar4->m21;
      fVar12 = pMVar4->m31;
      fVar13 = pMVar4->m02;
      fVar14 = pMVar4->m12;
      fVar15 = pMVar4->m22;
      fVar16 = pMVar4->m32;
      fVar17 = pMVar4->m03;
      fVar18 = pMVar4->m13;
      fVar19 = pMVar4->m23;
      fVar20 = pMVar4->m33;
      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m00 = fStack_5;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m10 = (float)puStack_6;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m20 = fVar7;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m30 = fVar8;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m01 = fVar9;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m11 = fVar10;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m21 = fVar11;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m31 = fVar12;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m02 = fVar13;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m12 = fVar14;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m22 = fVar15;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m32 = fVar16;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m03 = fVar17;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m13 = fVar18;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m23 = fVar19;
      (pMVar21->radiusReducedElipsoidSpaceToWorld).m33 = fVar20;
      pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                          ((Matrix4x4 *)&stack0xfffffef0,
                           &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                            radiusReducedElipsoidSpaceToWorld,(MethodInfo *)0x0);
      fVar13 = pMVar4->m10;
      fVar14 = pMVar4->m20;
      fVar15 = pMVar4->m30;
      fVar16 = pMVar4->m01;
      fVar17 = pMVar4->m11;
      fVar18 = pMVar4->m21;
      fVar19 = pMVar4->m31;
      fVar20 = pMVar4->m02;
      fVar7 = pMVar4->m12;
      fVar8 = pMVar4->m22;
      fVar9 = pMVar4->m32;
      fVar10 = pMVar4->m03;
      fVar11 = pMVar4->m13;
      fVar12 = pMVar4->m23;
      fVar22 = pMVar4->m33;
      pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m00 = pMVar4->m00;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m10 = fVar13;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m20 = fVar14;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m30 = fVar15;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m01 = fVar16;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m11 = fVar17;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m21 = fVar18;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m31 = fVar19;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m02 = fVar20;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m12 = fVar7;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m22 = fVar8;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m32 = fVar9;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m03 = fVar10;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m13 = fVar11;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m23 = fVar12;
      (pMVar21->worldToRadiusReducedElipsoidSpace).m33 = fVar22;
      pMVar4 = &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld;
      cmb = (ICubeModelCollider *)pMVar4->m00;
      pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                          ((Matrix4x4 *)&stack0xfffffef0,
                           TypeInfo__MVElipsoidOverlapCheck->static_fields->
                           worldToRadiusReducedElipsoidSpace,*pMVar4,(MethodInfo *)0x0);
      fVar13 = pMVar4->m10;
      fVar14 = pMVar4->m20;
      fVar15 = pMVar4->m30;
      fVar16 = pMVar4->m01;
      fVar17 = pMVar4->m11;
      fVar18 = pMVar4->m21;
      fVar19 = pMVar4->m31;
      fVar20 = pMVar4->m02;
      fVar7 = pMVar4->m12;
      fVar8 = pMVar4->m22;
      fVar9 = pMVar4->m32;
      fVar10 = pMVar4->m03;
      fVar11 = pMVar4->m13;
      fVar12 = pMVar4->m23;
      fVar22 = pMVar4->m33;
      pMVar21 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar21->localToRadiusReducedElipsoidSpace).m00 = pMVar4->m00;
      (pMVar21->localToRadiusReducedElipsoidSpace).m10 = fVar13;
      (pMVar21->localToRadiusReducedElipsoidSpace).m20 = fVar14;
      (pMVar21->localToRadiusReducedElipsoidSpace).m30 = fVar15;
      (pMVar21->localToRadiusReducedElipsoidSpace).m01 = fVar16;
      (pMVar21->localToRadiusReducedElipsoidSpace).m11 = fVar17;
      (pMVar21->localToRadiusReducedElipsoidSpace).m21 = fVar18;
      (pMVar21->localToRadiusReducedElipsoidSpace).m31 = fVar19;
      (pMVar21->localToRadiusReducedElipsoidSpace).m02 = fVar20;
      (pMVar21->localToRadiusReducedElipsoidSpace).m12 = fVar7;
      (pMVar21->localToRadiusReducedElipsoidSpace).m22 = fVar8;
      (pMVar21->localToRadiusReducedElipsoidSpace).m32 = fVar9;
      (pMVar21->localToRadiusReducedElipsoidSpace).m03 = fVar10;
      (pMVar21->localToRadiusReducedElipsoidSpace).m13 = fVar11;
      (pMVar21->localToRadiusReducedElipsoidSpace).m23 = fVar12;
      (pMVar21->localToRadiusReducedElipsoidSpace).m33 = fVar22;
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
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&stack0xffffffb8,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                         (MethodInfo *)0x0);
    uVar28 = pVVar23->x;
    uVar29 = pVVar23->y;
    fVar13 = pVVar23->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&stack0xffffffb8,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    uVar30 = pVVar23->x;
    uVar31 = pVVar23->y;
    fVar14 = pVVar23->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&stack0xffffffb8,
                         &TypeInfo__MVElipsoidOverlapCheck->static_fields->localToWorld,
                         TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                         (MethodInfo *)0x0);
    uVar32 = pVVar23->x;
    uVar33 = pVVar23->y;
    fVar15 = pVVar23->z;
    iVar34 = func_?();
    tangent0.y = (float)uVar29;
    tangent0.x = (float)uVar28;
    tangent0.z = fVar13;
    tangent1.y = (float)uVar33;
    tangent1.x = (float)uVar32;
    tangent1.z = fVar15;
    iVar1 = iVar34;
    pVVar23 = MVElipsoidOverlapCheck_GetTangentNormal
                        ((Vector3 *)&stack0xffffffb8,tangent0,tangent1,(MethodInfo *)0x0);
    if (iVar34 == 0) goto code_?;
    fVar16 = pVVar23->z;
    if (*(int *)(iVar34 + 0xc) != 0) {
      *(undefined8 *)(iVar34 + 0x10) = *(undefined8 *)pVVar23;
      *(float *)(iVar34 + 0x18) = fVar16;
      tangent0_00.y = (float)uVar31;
      tangent0_00.x = (float)uVar30;
      tangent0_00.z = fVar14;
      tangent1_00.y = (float)uVar33;
      tangent1_00.x = (float)uVar32;
      tangent1_00.z = fVar15;
      pVVar23 = MVElipsoidOverlapCheck_GetTangentNormal
                          ((Vector3 *)&stack0xffffffb8,tangent0_00,tangent1_00,(MethodInfo *)0x0);
      fVar15 = pVVar23->z;
      if (1 < *(uint *)(iVar34 + 0xc)) {
        *(undefined8 *)(iVar34 + 0x1c) = *(undefined8 *)pVVar23;
        *(float *)(iVar34 + 0x24) = fVar15;
        tangent0_01.y = (float)uVar31;
        tangent0_01.x = (float)uVar30;
        tangent0_01.z = fVar14;
        tangent1_01.y = (float)uVar29;
        tangent1_01.x = (float)uVar28;
        tangent1_01.z = fVar13;
        pVVar23 = MVElipsoidOverlapCheck_GetTangentNormal
                            ((Vector3 *)&stack0xffffffb8,tangent0_01,tangent1_01,(MethodInfo *)0x0);
        fVar13 = pVVar23->z;
        if (2 < *(uint *)(iVar34 + 0xc)) {
          bVar35 = cRam_? == '\0';
          *(undefined8 *)(iVar34 + 0x28) = *(undefined8 *)pVVar23;
          *(float *)(iVar34 + 0x30) = fVar13;
          if (bVar35) {
            func_?();
            cRam_? = '\x01';
          }
          pVVar23 = (Vector3 *)(iVar34 + 0x10);
          for (uVar36 = 0; (int)uVar36 < *(int *)(iVar34 + 0xc); uVar36 = uVar36 + 1) {
            if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVElipsoidOverlapCheck);
            }
            if (*(uint *)(iVar34 + 0xc) <= uVar36) goto code_?;
            pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                ((Vector3 *)&fStack_5,
                                 &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal,
                                 *pVVar23,(MethodInfo *)0x0);
            fVar14 = pVVar37->y;
            fVar13 = pVVar37->z;
            if (*(uint *)(iVar34 + 0xc) <= uVar36) goto code_?;
            pVVar23->x = pVVar37->x;
            pVVar23->y = fVar14;
            pVVar23->z = fVar13;
            pVVar23 = pVVar23 + 1;
          }
          if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVElipsoidOverlapCheck);
          }
          fStack_38 = 0.0;
          fStack_39 = 0.0;
          uVar36 = 0;
          fStack_40 = 0.0;
          fVar13 = 0.0;
          fStack_41 = 0.0;
          while( true ) {
            if (*(int *)(iVar34 + 0xc) <= (int)uVar36) {
              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                                  ((Vector3 *)&fStack_5,
                                   &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal,
                                   position,(MethodInfo *)0x0);
              localElipsoidBounds.m_Extents.x = fStack_40;
              localElipsoidBounds.m_Center = *pVVar23;
              localElipsoidBounds.m_Extents.y = fStack_38;
              localElipsoidBounds.m_Extents.z = fStack_39;
              bVar42 = MVElipsoidOverlapCheck_ScanElipsoidBounds
                                 (localElipsoidBounds,chunk,cmb,elipsoidOverlapResult,
                                  (MethodInfo *)0x0);
              return bVar42;
            }
            if (*(uint *)(iVar34 + 0xc) <= uVar36) break;
            index = 0;
            iVar34 = iVar1;
            do {
              fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 ((Vector3 *)&stack0xffffffbc,index,(MethodInfo *)0x0);
              fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 ((Vector3 *)&stack0xffffff64,index,(MethodInfo *)0x0);
              if (fVar14 < (float)((uint)fVar15 & _UNK_?)) {
                fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                   ((Vector3 *)&stack0xffffff64,index,(MethodInfo *)0x0);
                fStack_40 = fVar13;
                fStack_38 = fStack_41;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                          ((Vector3 *)&stack0xffffff84,index,(float)((uint)fVar14 & _UNK_?),
                           (MethodInfo *)0x0);
                fVar13 = fStack_40;
                fStack_41 = fStack_38;
              }
              index = index + 1;
            } while (index < 3);
            uVar36 = uVar36 + 1;
            iVar1 = iVar34;
          }
        }
      }
    }
  }
  else {
    cmb = (ICubeModelCollider *)func_?(wo,TypeInfo__ICubeModelCollider);
    if (cmb != (ICubeModelCollider *)0x0) goto code_?;
    func_?(wo,pIVar2);
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  bVar42 = (*pcVar43)();
  return bVar42;
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
    in_stack_1 = &TypeInfo__UnityEngine__Physics;
    func_?();
    in_stack_2 = &TypeInfo__SharedCollisionFunctions;
    func_?();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  pLVar4 = (List_1_MVOverlapResult_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVOverlapResult>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
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
  pCVar8 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
  if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Physics);
  }
  pMVar9 = (MethodInfo *)&UNK_?;
  pLStack_10 = (List_1_MVOverlapResult_ *)
               UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                         (position,(float)puStack_6,pCVar8,layerMask,(MethodInfo *)0x0);
  uVar11 = 0;
  if ((int)pLStack_10 < 1) {
    return pLVar4;
  }
  puStack_6 = (undefined *)0x10;
  while( true ) {
    if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar8 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    if (pCVar8 == (Collider__Array *)0x0) break;
    if (pCVar8->max_length <= uVar11) goto code_?;
    this = *(Component **)((int)pCVar8->vector + (int)(puStack_6 + -0x10));
    if (this == (Component *)0x0) break;
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
        bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,(Int32Enum__Enum)radius.y,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
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
                        (radius_00,position,rotation,chunk,(MVWorldObjectClient *)in_stack_2,
                         (MVOverlapResult *)in_stack_1,pMVar9);
      if (bVar13 != 0) {
        puVar5 = (undefined *)(pMVar12->fields)._.id;
        uStack_3 = CONCAT44(uStack_3._4_4_,puVar5);
        if (pLVar4 == (List_1_MVOverlapResult_ *)0x0) break;
        uStack_3 = CONCAT44(&UNK_?,puVar5);
        pLStack_10 = pLVar4;
        puStack_6 = puVar5;
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
    uVar11 = uVar11 + 1;
    puStack_6 = puStack_6 + 4;
    if ((int)pLStack_10 <= (int)uVar11) {
      return pLVar4;
    }
  }
  func_?();
code_?:
  uVar14 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar14);
  pMVar9 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,pMVar9);
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
  uVar1 = 0;
  if (vectors == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVVar2 = vectors->vector;
    for (; (int)uVar1 < (int)vectors->max_length; uVar1 = uVar1 + 1) {
      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVElipsoidOverlapCheck);
      }
      if (vectors->max_length <= uVar1) goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                         (&VStack_4,&TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToLocal,
                          *pVVar2,(MethodInfo *)0x0);
      fVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      if (vectors->max_length <= uVar1) goto code_?;
      pVVar2->x = pVVar3->x;
      pVVar2->y = fVar5;
      pVVar2->z = fVar6;
      pVVar2 = pVVar2 + 1;
    }
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pVStack_7 = vectors->vector;
    fVar8 = 0.0;
    fStack_9 = 0.0;
    uStack_10 = 0;
    puVar11 = (undefined *)0x0;
    pVVar2 = (Vector3 *)0x0;
    fVar6 = 0.0;
    fVar5 = 0.0;
    VStack_12.x = 0.0;
    VStack_12.y = 0.0;
    while( true ) {
      if ((int)vectors->max_length <= (int)uStack_10) {
        (__return_storage_ptr__->m_Center).x = (float)puVar11;
        (__return_storage_ptr__->m_Center).y = (float)pVVar2;
        (__return_storage_ptr__->m_Center).z = fVar6;
        (__return_storage_ptr__->m_Extents).x = fVar5;
        (__return_storage_ptr__->m_Extents).y = fVar8;
        (__return_storage_ptr__->m_Extents).z = fStack_9;
        return __return_storage_ptr__;
      }
      if (vectors->max_length <= uStack_10) break;
      VStack_13.x = pVStack_7->x;
      VStack_13.y = pVStack_7->y;
      index = 0.0;
      VStack_13.z = pVStack_7->z;
      do {
        VStack_4._0_8_ = VStack_12._0_8_;
        VStack_4.z = fStack_9;
        VStack_12.z = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                (&VStack_4,(int32_t)index,(MethodInfo *)0x0);
        fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (&VStack_13,(int32_t)index,(MethodInfo *)0x0);
        if (VStack_12.z < (float)((uint)fStack_14 & _UNK_?)) {
          VStack_15.x = VStack_12.x;
          VStack_15.y = VStack_12.y;
          VStack_15.z = fStack_9;
          VStack_12.z = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_13,(int32_t)index,(MethodInfo *)0x0);
          pVVar2 = &VStack_15;
          puVar11 = &UNK_?;
          fVar6 = index;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (pVVar2,(int32_t)index,(float)((uint)VStack_12.z & _UNK_?),
                     (MethodInfo *)0x0);
          VStack_12.x = VStack_15.x;
          VStack_12.y = VStack_15.y;
          fVar5 = VStack_15.x;
          fVar8 = VStack_15.y;
          fStack_9 = VStack_15.z;
        }
        index = (float)((int)index + 1);
      } while ((int)index < 3);
      uStack_10 = uStack_10 + 1;
      pVStack_7 = pVStack_7 + 1;
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pBVar17 = (Bounds *)(*pcVar16)();
  return pBVar17;
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
        puStack_2 = (undefined *)(pBVar1->m_Extents).x;
        unique0x0000a404 = (pBVar1->m_Extents).y;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                          ((Vector3 *)&puStack_2,index,(MethodInfo *)0x0);
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                          ((Vector3 *)&stack0xffffffd8,index,(MethodInfo *)0x0);
        if (fVar3 < (float)((uint)fVar4 & _UNK_?)) {
          fVar3 = (pBVar1->m_Extents).z;
          uVar5._0_4_ = (pBVar1->m_Extents).x;
          uStack_6 = (pBVar1->m_Extents).y;
          stack0xffffffd0 = (float)&stack0xffffffd8;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                            ((Vector3 *)&stack0xffffffd8,index,(MethodInfo *)0x0);
          uVar5 = uVar5 & 0xffffffff00000000;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    ((Vector3 *)&stack0xffffffe4,index,(float)((uint)fVar4 & _UNK_?),
                     (MethodInfo *)0x0);
          uStack_6 = (undefined4)(uVar5 >> 0x20);
          (pBVar1->m_Extents).x = (float)(undefined4)uVar5;
          (pBVar1->m_Extents).y = (float)uStack_6;
          (pBVar1->m_Extents).z = fVar3;
        }
        index = index + 1;
      } while (index < 3);
      __return_storage_ptr__ = (Bounds *)((int)&(__return_storage_ptr__->m_Center).x + 1);
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pBVar1 = (Bounds *)(*pcVar7)();
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
  vector_00.y = tangent0.y;
  vector_00.x = tangent0.x;
  vector_00.z = tangent0.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     (&tangent0,
                      &TypeInfo__MVElipsoidOverlapCheck->static_fields->worldToElipsoidSpace,
                      vector_00,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&tangent0,*pVVar1,(MethodInfo *)0x0);
  fVar2 = tangent1.x;
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  tangent1.y = 0.0;
  tangent0.y = tangent1.x;
  tangent0.z = 0.0;
  tangent1.x = tangent1.z;
  tangent0.x = (float)TypeInfo__MVElipsoidOverlapCheck->static_fields;
  vector.y = 0.0;
  vector.x = fVar2;
  vector.z = tangent1.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     (&tangent0,(Matrix4x4 *)tangent0.x,vector,(MethodInfo *)0x0);
  tangent1.z = (float)&UNK_?;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&tangent1,*pVVar1,(MethodInfo *)0x0);
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  tangent0.z = (float)uVar3 * (float)uVar7 - (float)uVar6 * (float)uVar4;
  value.y = (float)uVar6 * fVar5 - (float)uVar3 * pVVar1->z;
  value.x = pVVar1->z * (float)uVar4 - (float)uVar7 * fVar5;
  value.z = tangent0.z;
  tangent0.x = (float)uVar6;
  tangent0.y = (float)uVar7;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&tangent0,value,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
            (&tangent0,&TypeInfo__MVElipsoidOverlapCheck->static_fields->elipsoidSpaceToWorld,
             *pVVar1,(MethodInfo *)0x0);
  return &tangent0;
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
    func_?(0x81e0);
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
    fStack_11 = (fStack_5 - fStack_1) * (fStack_8 - fStack_2) -
                (fStack_6 - fStack_2) * (fVar7 - fStack_1);
    uStack_12 = CONCAT44((fVar4 - fStack_3) * (fVar7 - fStack_1) -
                         (fStack_5 - fStack_1) * (fStack_9 - fStack_3),
                         (fStack_6 - fStack_2) * (fStack_9 - fStack_3) -
                         (fVar4 - fStack_3) * (fStack_8 - fStack_2));
    fStack_13 = fStack_11;
    puVar14 = (undefined8 *)func_?(auStack_15,&uStack_12,0);
    fVar16 = *(float *)(puVar14 + 1);
    fStack_17 = (float)((ulonglong)*puVar14 >> 0x20);
    fStack_18 = (float)*puVar14;
    fVar19 = fStack_2 * fStack_17 + fStack_1 * fStack_18 + fStack_3 * fVar16;
    fVar20 = fStack_2 * fStack_2 + fStack_1 * fStack_1 + fStack_3 * fStack_3;
    fVar21 = fStack_6 * fStack_2 + fStack_5 * fStack_1 + fVar4 * fStack_3;
    fVar22 = fStack_8 * fStack_2 + fVar7 * fStack_1 + fStack_9 * fStack_3;
    fVar23 = fStack_6 * fStack_6 + fStack_5 * fStack_5 + fVar4 * fVar4;
    fVar24 = fStack_8 * fStack_6 + fVar7 * fStack_5 + fStack_9 * fVar4;
    fVar25 = fStack_8 * fStack_8 + fVar7 * fVar7 + fStack_9 * fStack_9;
    fVar26 = fStack_5 - fStack_1;
    fVar27 = fVar4 - fStack_3;
    fVar28 = fStack_6 - fStack_2;
    fVar29 = fStack_8 - fStack_6;
    fVar30 = fVar7 - fStack_5;
    fVar31 = fStack_9 - fVar4;
    fVar32 = fStack_2 - fStack_8;
    fVar33 = fStack_1 - fVar7;
    fVar34 = fStack_3 - fStack_9;
    fVar35 = fVar26 * fVar26 + fVar28 * fVar28 + fVar27 * fVar27;
    fVar36 = fVar30 * fVar30 + fVar29 * fVar29 + fVar31 * fVar31;
    fVar37 = fVar33 * fVar33 + fVar32 * fVar32 + fVar34 * fVar34;
    fVar38 = fVar21 - fVar20;
    fVar39 = fStack_1 * fVar35 - fVar38 * fVar26;
    fVar26 = fStack_2 * fVar35 - fVar38 * fVar28;
    fVar38 = fStack_3 * fVar35 - fVar38 * fVar27;
    fVar28 = fVar24 - fVar23;
    fVar27 = fStack_6 * fVar36 - fVar28 * fVar29;
    fVar29 = fStack_5 * fVar36 - fVar28 * fVar30;
    fVar30 = fVar4 * fVar36 - fVar28 * fVar31;
    fVar28 = fVar22 - fVar25;
    fVar33 = fVar7 * fVar37 - fVar28 * fVar33;
    fVar32 = fStack_8 * fVar37 - fVar28 * fVar32;
    fVar34 = fStack_9 * fVar37 - fVar28 * fVar34;
    fStack_40 = (float)((ulonglong)*puVar14 >> 0x20);
    fStack_41 = (float)*puVar14;
    return ((((fStack_40 * fStack_17 + fStack_41 * fStack_18 + fVar16 * fVar16) * fVar10 <
              fVar19 * fVar19 ||
             ((fVar37 * fVar10 * fVar37 < fVar32 * fVar32 + fVar33 * fVar33 + fVar34 * fVar34 &&
               0.0 < (fStack_6 * fVar37 - fVar32) * fVar32 + (fStack_5 * fVar37 - fVar33) * fVar33 +
                     (fVar4 * fVar37 - fVar34) * fVar34 ||
              fVar35 * fVar10 * fVar35 < fVar26 * fVar26 + fVar39 * fVar39 + fVar38 * fVar38 &&
              0.0 < (fStack_8 * fVar35 - fVar26) * fVar26 + (fVar7 * fVar35 - fVar39) * fVar39 +
                    (fStack_9 * fVar35 - fVar38) * fVar38) ||
             fVar36 * fVar10 * fVar36 < fVar27 * fVar27 + fVar29 * fVar29 + fVar30 * fVar30 &&
             0.0 < (fStack_2 * fVar36 - fVar27) * fVar27 + (fStack_1 * fVar36 - fVar29) * fVar29 +
                   (fStack_3 * fVar36 - fVar30) * fVar30)) ||
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
  iStack_1 = 0;
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             (MethodInfo *)0x0);
  uVar2 = 0;
  iVar3 = 0;
  while( true ) {
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pVVar4 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar4->max_length <= (int)uVar2) {
      VStack_5.x = 0.0;
      VStack_5.y = 0.0;
      VStack_5.z = 0.0;
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
      uVar2 = 0;
      pFVar6 = TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
      if (pFVar6 == (FaceFlags__Enum__Array *)0x0) goto code_?;
      iVar3 = 0;
      iVar7 = iStack_1;
      goto code_?;
    }
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pVVar4 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar4->max_length <= uVar2) break;
    *(float *)((int)&pVVar4->vector[0].x + iVar3) =
         localPos.x + *(float *)((int)&pVVar4->vector[0].x + iVar3);
    pVVar4 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar4->max_length <= uVar2) break;
    *(float *)((int)&pVVar4->vector[0].y + iVar3) =
         localPos.y + *(float *)((int)&pVVar4->vector[0].y + iVar3);
    pVVar4 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar4->max_length <= uVar2) break;
    uVar2 = uVar2 + 1;
    *(float *)((int)&pVVar4->vector[0].z + iVar3) =
         localPos.z + *(float *)((int)&pVVar4->vector[0].z + iVar3);
    iVar3 = iVar3 + 0xc;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
code_?:
  iStack_1 = iVar7;
  if ((int)pFVar6->max_length <= (int)uVar2) {
    return (byte)iVar3 & 1;
  }
  if (pFVar6->max_length <= uVar2) goto code_?;
  cube = (Cube *)CONCAT31(cube._1_3_,*(undefined1 *)((int)pFVar6->vector + uVar2));
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
  pMStack_10 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  fStack_11 = (pMStack_10->localElipsoidPosition).x + _UNK_?;
  pVVar4 = pMStack_10->cachedFace;
  fStack_12 = (pMStack_10->localElipsoidPosition).y;
  fStack_13 = (pMStack_10->localElipsoidPosition).z;
  if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
  if ((pVVar4->max_length == 0) || (pVVar4->max_length < 4)) goto code_?;
  p2_00.y = fStack_12;
  p2_00.x = fStack_11;
  p2_00.z = fStack_13;
  bVar9 = MathFunctions::MathFunctions_LineFacet
                    (pMStack_10->localElipsoidPosition,p2_00,pVVar4->vector[0],pVVar4->vector[3],
                     pVVar4->vector[2],&VStack_5,(MethodInfo *)0x0);
  iVar3 = iStack_1 + 1;
  if (bVar9 == 0) {
    iVar3 = iStack_1;
  }
  iStack_1 = iVar3;
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pMVar14 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  uStack_15._0_4_ = (pMVar14->localElipsoidPosition).x;
  uStack_15._4_4_ = (pMVar14->localElipsoidPosition).y;
  pMStack_10 = (MVElipsoidOverlapCheck__StaticFields *)(pMVar14->localElipsoidPosition).z;
  if (((TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0) ||
      (func_?(&uStack_16,2),
      TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0)) ||
     (func_?(&uStack_17,1),
     TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace == (Vector3__Array *)0x0))
  goto code_?;
  func_?(&uStack_18,0);
  uVar2 = uVar2 + 1;
  p2.y = fStack_12;
  p2.x = fStack_11;
  p1.z = (float)pMStack_10;
  p1.x = (float)(undefined4)uStack_15;
  p1.y = (float)uStack_15._4_4_;
  p2.z = fStack_13;
  pa.z = fStack_19;
  pa.x = (float)(undefined4)uStack_16;
  pa.y = (float)uStack_16._4_4_;
  pb.z = fStack_20;
  pb.x = (float)(undefined4)uStack_17;
  pb.y = (float)uStack_17._4_4_;
  pc.z = fStack_21;
  pc.x = (float)(undefined4)uStack_18;
  pc.y = (float)uStack_18._4_4_;
  bVar9 = MathFunctions::MathFunctions_LineFacet(p1,p2,pa,pb,pc,&VStack_5,(MethodInfo *)0x0);
  iVar3 = iStack_1 + 1;
  iVar7 = iStack_1 + 1;
  if (bVar9 == 0) {
    iVar3 = iStack_1;
    iVar7 = iStack_1;
  }
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
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Clear__
                   );
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
  IStack_2.x = 0;
  IStack_2.y = 0;
  IStack_2.z = 0;
  puStack_3 = (undefined *)0x0;
  uStack_4 = (SharedCollisionFunctions__Class *)((uint)uStack_4._2_2_ << 0x10);
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pLVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
  if (pLVar5 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
    piVar6 = &(pLVar5->fields)._version;
    *piVar6 = *piVar6 + 1;
    (pLVar5->fields)._size = 0;
    VStack_7.x = localElipsoidBounds.m_Extents.x;
    VStack_7.y = 0.0;
    VStack_7.z = 0.0;
    uStack_8 = 0;
    VStack_9.z = localElipsoidBounds.m_Center.z - localElipsoidBounds.m_Extents.z;
    localPos.y = localElipsoidBounds.m_Center.x - localElipsoidBounds.m_Extents.x;
    localPos.x = (float)&VStack_9.y;
    localPos.z = localElipsoidBounds.m_Center.y - localElipsoidBounds.m_Extents.y;
    IVar10 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos,(MethodInfo *)VStack_9.z);
    IStack_1._0_4_ = *IVar10._0_4_;
    IStack_1.z = *(int16_t *)(IVar10._0_4_ + 1);
    VStack_9.z = localElipsoidBounds.m_Extents.z + localElipsoidBounds.m_Center.z;
    localPos_00.y = VStack_7.x + localElipsoidBounds.m_Center.x;
    localPos_00.x = (float)&VStack_9.y;
    localPos_00.z._0_2_ = SUB42(localElipsoidBounds.m_Extents.y + localElipsoidBounds.m_Center.y,0);
    localPos_00.z._2_2_ =
         (short)((uint)(localElipsoidBounds.m_Extents.y + localElipsoidBounds.m_Center.y) >> 0x10);
    IVar10 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_00,(MethodInfo *)VStack_9.z);
    IStack_2._0_4_ = *IVar10._0_4_;
    IStack_2.z = *(int16_t *)(IVar10._0_4_ + 1);
    IStack_11.x = 0;
    IStack_11.y = 0;
    IStack_11.z = 0;
    IStack_12.x = 0;
    IStack_12.y = 0;
    IStack_12.z = 0;
    if (chunk != (BoxCollider *)0x0) {
      pVVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                         (&VStack_9,chunk,(MethodInfo *)0x0);
      uVar14._0_4_ = pVVar13->x;
      uVar14._4_4_ = pVVar13->y;
      puVar15 = &UNK_?;
      pVVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                         (&VStack_7,chunk,(MethodInfo *)0x0);
      VStack_9.x = pVVar13->x;
      VStack_9.y = pVVar13->y;
      VStack_9.z = pVVar13->z;
      fVar16 = VStack_9.x * _UNK_?;
      fVar17 = VStack_9.y * _UNK_?;
      fVar18 = VStack_9.z * _UNK_?;
      if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
        uStack_4 = TypeInfo__SharedCollisionFunctions;
        func_?();
      }
      localSpaceBounds.m_Extents.z = fVar18;
      localSpaceBounds.m_Extents.y = fVar17;
      localSpaceBounds.m_Center.z = (float)puVar15;
      localSpaceBounds.m_Center.x = (float)(int)uVar14;
      localSpaceBounds.m_Center.y = (float)(int)((ulonglong)uVar14 >> 0x20);
      localSpaceBounds.m_Extents.x = fVar16;
      SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                (&IStack_11,&IStack_12,localSpaceBounds,(MethodInfo *)0x0);
      IVar10.z = IStack_11.z;
      IVar10.x = IStack_11.x;
      IVar10.y = IStack_11.y;
      max.z = IStack_12.z;
      max.x = IStack_12.x;
      max.y = IStack_12.y;
      MathFunctions::MathFunctions_ClampIntVector(&IStack_1,IVar10,max,(MethodInfo *)0x0);
      min.z = IStack_11.z;
      min.x = IStack_11.x;
      min.y = IStack_11.y;
      max_00.z = IStack_12.z;
      max_00.x = IStack_12.x;
      max_00.y = IStack_12.y;
      MathFunctions::MathFunctions_ClampIntVector(&IStack_2,min,max_00,(MethodInfo *)0x0);
      x = (int)IStack_1.x;
      bStack_19 = 0;
      if (x <= IStack_2.x) {
        iVar20 = IStack_2.z;
        iVar21 = IStack_2.y;
        do {
          VStack_9.z = (float)(int)IStack_1.y;
          iStack_22 = x;
          if ((int)VStack_9.z <= (int)iVar21) {
            do {
              z = (int)IStack_1.z;
              if (z <= iVar20) {
                do {
                  fVar18 = VStack_9.z;
                  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__MV__WorldObject__IntVector);
                    x = iStack_22;
                  }
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            ((IntVector *)&puStack_3,x,(int32_t)fVar18,z,(MethodInfo *)0x0);
                  puVar15 = puStack_3;
                  iStack_23 = (int16_t)uStack_4;
                  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__MVElipsoidOverlapCheck);
                  }
                  cubePos.z = iStack_23;
                  cubePos._0_4_ = puVar15;
                  bVar24 = MVElipsoidOverlapCheck_HandleCube
                                    (cubePos,cmb,elipsoidOverlapResult,(MethodInfo *)0x0);
                  if (bVar24 != 0) {
                    bStack_19 = 1;
                    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
                      VStack_7.y = (float)TypeInfo__MVElipsoidOverlapCheck;
                      VStack_7.x = (float)&UNK_?;
                      func_?();
                    }
                    pLVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
                    if (pLVar5 == (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
                    func_?(pLVar5,puStack_3,(uint)uStack_4 & 0xffff,
                                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                                   );
                    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType == 0) {
                      if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MVElipsoidOverlapCheck);
                      }
                      pLVar25 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                *)TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
                      if (pLVar25 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                     *)0x0) {
                        pMVar26 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                 UIElements::Internal::
                                 MultiColumnCollectionHeader+ViewState+ColumnState]::
                                 List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                           (pLVar25,
                                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__ToArray__
                                           );
                        elipsoidOverlapResult->localCubePos = (IntVector__Array *)pMVar26;
                        func_?(&elipsoidOverlapResult->localCubePos,pMVar26);
                        return 1;
                      }
                      goto code_?;
                    }
                  }
                  z = z + 1;
                  x = iStack_22;
                  iVar20 = IStack_2.z;
                } while (z <= IStack_2.z);
              }
              VStack_9.z = (float)((int)&((MethodInfo *)VStack_9.z)->methodPointer + 1);
              iVar21 = IStack_2.y;
            } while ((int)VStack_9.z <= (int)IStack_2.y);
          }
          x = x + 1;
        } while (x <= IStack_2.x);
        if (bStack_19 != 0) {
          iStack_22 = x;
          if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVElipsoidOverlapCheck);
          }
          pLVar25 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                    *)TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
          if (pLVar25 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)0x0) goto code_?;
          pMVar26 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                   List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                             (pLVar25,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__ToArray__
                             );
          elipsoidOverlapResult->localCubePos = (IntVector__Array *)pMVar26;
          func_?(&elipsoidOverlapResult->localCubePos,pMVar26);
        }
      }
      return bStack_19;
    }
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  bVar24 = (*pcVar27)();
  return bVar24;
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors = this;
  func_?(&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors,this);
  return;
}

