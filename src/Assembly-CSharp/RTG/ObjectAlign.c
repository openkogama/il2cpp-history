
/* Void AlignRootsToPlane(List`1[UnityEngine.GameObject], Plane) */

void Assembly-CSharp.dll::RTG::ObjectAlign::ObjectAlign_AlignRootsToPlane
               (List_1_UnityEngine_GameObject_ *roots,Plane *alignmentPlane,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->zeroVector).x;
  uVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
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
  fVar5 = (float)TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  if (roots == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
    uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                ((ulonglong)(uint)(roots->fields)._version << 0x20);
  uStack_14 = 0;
  LStack_15._8_8_ = pLStack_13;
  LStack_15._current = (Object *)0x0;
  uStack_8 = 0;
  pLStack_13 = &LStack_15;
  LStack_15._list = (List_1_System_Object_ *)roots;
code_?:
  do {
    bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       (&LStack_15,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                       );
    root = LStack_15._current;
    if (bVar16 == 0) {
      return;
    }
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__ObjectBounds);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fStack_17 = fVar5;
    fStack_18 = (float)uVar2;
    fStack_19 = (float)uVar3;
    fStack_20 = fVar4;
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      FUN_?();
    }
    AStack_21._size.y = fStack_18;
    AStack_21._size.x = fStack_17;
    AStack_21._center.x = fStack_20;
    AStack_21._size.z = fStack_19;
    pAVar22 = ObjectBounds::ObjectBounds_CalcHierarchyModelAABB
                        (&AStack_23,(GameObject *)root,(ObjectBounds_QueryConfig *)&AStack_21,
                         (MethodInfo *)0x0);
    uVar24._0_4_ = (pAVar22->_size).x;
    uVar24._4_4_ = (pAVar22->_size).y;
    AStack_21._size.x = (pAVar22->_size).x;
    AStack_21._size.y = (pAVar22->_size).y;
    pfVar25 = &(pAVar22->_size).z;
    uVar26 = *(undefined8 *)pfVar25;
    AStack_21._8_8_ = *(undefined8 *)pfVar25;
    uVar27._0_4_ = (pAVar22->_center).y;
    uVar27._4_4_ = (pAVar22->_center).z;
    AStack_21._center._4_8_ = uVar27;
    if (pAVar22->_isValid != 0) {
      uVar28._0_1_ = pAVar22->_isValid;
      uVar28._1_3_ = *(undefined3 *)&pAVar22->field_0x19;
      if ((GameObject *)root != (GameObject *)0x0) {
        pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)root,(MethodInfo *)0x0);
        OStack_30._size.x = 0.0;
        OStack_30._size.y = 0.0;
        OStack_30._size.z = 0.0;
        OStack_30._center.x = 0.0;
        OStack_30._center.y = 0.0;
        OStack_30._center.z = 0.0;
        OStack_30._rotation.x = 0.0;
        OStack_30._rotation.y = 0.0;
        OStack_30._isValid = 0;
        OStack_30._41_3_ = 0;
        AStack_21._size._0_8_ = uVar24;
        AStack_21._8_8_ = uVar26;
        AStack_21._center._4_8_ = uVar27;
        AStack_21._24_4_ = uVar28;
        OBB::OBB__ctor_7(&OStack_30,&AStack_21,pTVar29,(MethodInfo *)0x0);
        goto code_?;
      }
      FUN_?();
      pTVar29 = (Transform *)0x0;
      goto code_?;
    }
    uStack_31 = 0;
    OStack_30._size.x = 0.0;
    OStack_30._size.y = 0.0;
    OStack_30._size.z = 0.0;
    OStack_30._center.x = 0.0;
    OStack_30._center.y = 0.0;
    OStack_30._center.z = 0.0;
    OStack_30._rotation.x = 0.0;
    OStack_30._rotation.y = 0.0;
    OStack_30._isValid = 0;
    OStack_30._41_3_ = 0;
code_?:
  } while (OStack_30._isValid == 0);
  fVar32 = (alignmentPlane->m_Normal).x;
  fVar33 = (alignmentPlane->m_Normal).y;
  fVar34 = (alignmentPlane->m_Normal).z;
  fVar35 = OStack_30._center.x;
  fVar36 = OStack_30._center.y;
  fVar37 = OStack_30._center.z;
  fVar38 = fVar34 * OStack_30._center.z +
           fVar32 * OStack_30._center.x + fVar33 * OStack_30._center.y +
           alignmentPlane->m_Distance;
  fVar34 = OStack_30._center.z - fVar34 * fVar38;
  fVar33 = OStack_30._center.y - fVar33 * fVar38;
  fVar32 = OStack_30._center.x - fVar32 * fVar38;
  if ((GameObject *)root != (GameObject *)0x0) {
    pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)root,(MethodInfo *)0x0);
    if (pTVar29 != (Transform *)0x0) {
      pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_40,pTVar29,(MethodInfo *)0x0);
      AStack_21._size.x = pVVar39->x;
      AStack_21._size.y = pVVar39->y;
      fStack_41 = (fVar34 - fVar37) + pVVar39->z;
      uStack_42 = CONCAT44((fVar33 - fVar36) + AStack_21._size.y,
                           (fVar32 - fVar35) + AStack_21._size.x);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar43 = (pTVar29->fields)._._.m_CachedPtr;
      if (pvVar43 != (void *)0x0) {
        pcVar6 = pcRam_?;
        if ((pcRam_? != (code *)0x0) ||
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 != (code *)0x0)) {
          pcRam_? = pcVar6;
          (*pcRam_?)(pvVar43,&uStack_42);
          goto code_?;
        }
code_?:
        uVar27 = func_?(&UNK_?);
        FUN_?(uVar27);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar29,(MethodInfo *)0x0);
    }
    FUN_?();
  }
  FUN_?();
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ObjectAlign+Result AlignToWorldAxis(IEnumerable`1[UnityEngine.GameObject], Axis, Vector3) */

ObjectAlign_Result__Enum
Assembly-CSharp.dll::RTG::ObjectAlign::ObjectAlign_AlignToWorldAxis
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,Axis__Enum axis,
          Vector3 *alignmentPlaneOrigin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->forwardVector).x;
  uVar2._4_4_ = (pVVar1->forwardVector).y;
  fVar3 = (pVVar1->forwardVector).z;
  if (axis == Axis__Enum_Y) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = (pVVar1->upVector).x;
    uVar5 = (pVVar1->upVector).y;
    fVar3 = (pVVar1->upVector).z;
    uVar6 = uVar4;
    uVar7 = uVar5;
  }
  else {
    uStack_8 = uVar2;
    if (axis != Axis__Enum_Z) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6 = (pVVar1->rightVector).x;
    uVar7 = (pVVar1->rightVector).y;
    fVar3 = (pVVar1->rightVector).z;
  }
  uStack_8 = CONCAT44(uVar7,uVar6);
  uVar2._0_4_ = uVar6;
  uVar2._4_4_ = uVar7;
code_?:
  uStack_9 = CONCAT44(uVar2._4_4_,(undefined4)uVar2);
  fStack_10 = fVar3;
  PStack_11.m_Normal.z = (float)FUN_?(&uStack_9);
  if (_UNK_? < PStack_11.m_Normal.z) {
    fVar12 = (float)uStack_8 / PStack_11.m_Normal.z;
    fVar13 = uStack_8._4_4_ / PStack_11.m_Normal.z;
    PStack_11.m_Normal.z = fVar3 / PStack_11.m_Normal.z;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar12 = (pVVar1->zeroVector).x;
    fVar13 = (pVVar1->zeroVector).y;
    PStack_11.m_Normal.z = (pVVar1->zeroVector).z;
  }
  uVar14 = alignmentPlaneOrigin->x;
  uVar15 = alignmentPlaneOrigin->y;
  PStack_11.m_Normal.y = fVar13;
  PStack_11.m_Normal.x = fVar12;
  PStack_11.m_Distance =
       (float)((uint)(fVar13 * (float)uVar15 + fVar12 * (float)uVar14 +
                     PStack_11.m_Normal.z * alignmentPlaneOrigin->z) ^ _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  roots = GameObjectEx::GameObjectEx_FilterParentsOnly_1(gameObjects,(MethodInfo *)0x0);
  if (roots == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar16 = (code *)swi(3);
    OVar17 = (*pcVar16)();
    return OVar17;
  }
  bVar18 = (roots->fields)._size != 0;
  if (bVar18) {
    ObjectAlign_AlignRootsToPlane(roots,&PStack_11,(MethodInfo *)0x0);
  }
  return (uint)bVar18;
}


/* ObjectAlign+Result AlignToWorldPlane(IEnumerable`1[UnityEngine.GameObject], Plane) */

ObjectAlign_Result__Enum
Assembly-CSharp.dll::RTG::ObjectAlign::ObjectAlign_AlignToWorldPlane
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,Plane *alignmentPlane,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  roots = GameObjectEx::GameObjectEx_FilterParentsOnly_1(gameObjects,(MethodInfo *)0x0);
  if (roots != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((roots->fields)._size != 0) {
      PStack_1.m_Normal.x = (alignmentPlane->m_Normal).x;
      PStack_1.m_Normal.y = (alignmentPlane->m_Normal).y;
      PStack_1._8_8_ = *(undefined8 *)&(alignmentPlane->m_Normal).z;
      ObjectAlign_AlignRootsToPlane(roots,&PStack_1,(MethodInfo *)0x0);
      return ObjectAlign_Result__Enum_Success;
    }
    return ObjectAlign_Result__Enum_Err_NoObjects;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  OVar3 = (*pcVar2)();
  return OVar3;
}

