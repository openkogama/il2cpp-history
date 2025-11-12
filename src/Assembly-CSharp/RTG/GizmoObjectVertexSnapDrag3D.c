
/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_CalculateDragValues
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar2 == (Object *)0x0) goto code_?;
  focusCamera = (Camera *)pOVar2[4].monitor;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).z;
  fVar5 = (pVVar3->zeroVector).y;
  (this->fields)._._relativeDragOffset.x = (pVVar3->zeroVector).x;
  (this->fields)._._relativeDragOffset.y = fVar5;
  (this->fields)._._relativeDragOffset.z = fVar4;
  pLVar6 = (this->fields)._destinationObjects;
  if (pLVar6 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
  if ((pLVar6->fields)._size == 0) {
code_?:
    pGVar7 = (this->fields)._settings;
    if (pGVar7 == (GizmoObjectVertexSnapSettings *)0x0) goto code_?;
    if ((pGVar7->fields)._canSnapToGrid == 0) goto code_?;
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar2 == (Object *)0x0) || (pOVar2[2].klass == (Object__Class *)0x0)) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar9 = (undefined8 *)FUN_?(aRStack_10);
    uVar11 = *puVar9;
    uVar12 = puVar9[1];
    uVar13 = puVar9[2];
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = (RTScene *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    if (this_00 == (RTScene *)0x0) goto code_?;
    aRStack_10[0].m_Origin._0_8_ = uVar11;
    aRStack_10[0]._8_8_ = uVar12;
    aRStack_10[0].m_Direction._4_8_ = uVar13;
    pXVar14 = RTScene::RTScene_RaycastSceneGridIfVisible(this_00,aRStack_10,(MethodInfo *)0x0);
    if (pXVar14 == (XZGridRayHit *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    if ((pOVar2 == (Object *)0x0) || (pMVar15 = pOVar2[2].monitor, pMVar15 == (MonitorData *)0x0))
    goto code_?;
    uVar16 = 0;
    aRStack_10[0].m_Origin.x = (pXVar14->fields)._hitPoint.x;
    aRStack_10[0].m_Origin.y = (pXVar14->fields)._hitPoint.y;
    aRStack_10[0].m_Origin.z = (pXVar14->fields)._hitPoint.z;
    this_01 = XZGridCell::XZGridCell_FromPoint
                        (&aRStack_10[0].m_Origin,*(float *)(pMVar15 + 0x2c),
                         *(float *)(pMVar15 + 0x30),(IXZGrid *)pOVar2,(MethodInfo *)0x0);
    if (this_01 == (XZGridCell *)0x0) goto code_?;
    pLVar17 = XZGridCell::XZGridCell_GetCenterAndCorners(this_01,(MethodInfo *)0x0);
    aRStack_10[0].m_Origin.x = (pXVar14->fields)._hitPoint.x;
    aRStack_10[0].m_Origin.y = (pXVar14->fields)._hitPoint.y;
    aRStack_10[0].m_Origin.z = (pXVar14->fields)._hitPoint.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pLVar17 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    uVar18 = (pLVar17->fields)._size;
    uVar19 = uVar16;
    fVar4 = _UNK_?;
    uVar20 = 0xffffffff;
    while (uVar21 = (uint)uVar19, (int)uVar21 < (int)uVar18) {
      if (uVar18 <= uVar21) goto code_?;
      pVVar22 = (pLVar17->fields)._items;
      if (pVVar22 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar22->max_length <= uVar21) goto code_?;
      fVar23 = (float)*(undefined8 *)((longlong)&pVVar22->vector[0].x + uVar16) -
               aRStack_10[0].m_Origin.x;
      fVar5 = *(float *)((longlong)&pVVar22->vector[0].z + uVar16) - aRStack_10[0].m_Origin.z;
      fVar24 = (float)((ulonglong)*(undefined8 *)((longlong)&pVVar22->vector[0].x + uVar16) >> 0x20)
               - aRStack_10[0].m_Origin.y;
      fVar5 = fVar24 * fVar24 + fVar23 * fVar23 + fVar5 * fVar5;
      uVar25 = uVar21;
      if (fVar4 <= fVar5) {
        uVar25 = uVar20;
        fVar5 = fVar4;
      }
      fVar4 = fVar5;
      uVar16 = uVar16 + 0xc;
      uVar20 = uVar25;
      uVar19 = (ulonglong)(uVar21 + 1);
    }
    if ((int)uVar20 < 0) goto code_?;
    if (uVar18 <= uVar20) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pVVar22 = (pLVar17->fields)._items;
    if (pVVar22 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar22->max_length <= uVar20) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar26 = (this->fields)._snapPivot.x;
    uVar27 = (this->fields)._snapPivot.y;
    uVar28 = pVVar22->vector[(int)uVar20].x;
    fVar4 = pVVar22->vector[(int)uVar20].y;
    VStack_1.z = pVVar22->vector[(int)uVar20].z - (this->fields)._snapPivot.z;
    (this->fields)._._relativeDragOffset.x = (float)uVar28 - (float)uVar26;
    (this->fields)._._relativeDragOffset.y = fVar4 - (float)uVar27;
  }
  else {
    pGVar7 = (this->fields)._settings;
    if (pGVar7 == (GizmoObjectVertexSnapSettings *)0x0) goto code_?;
    if ((pGVar7->fields)._canSnapToObjectVerts == 0) goto code_?;
    bVar29 = GizmoObjectVertexSnapDrag3D_GetWorldPointClosestToInputDevice
                       (this,focusCamera,
                        (IEnumerable_1_UnityEngine_GameObject_ *)(this->fields)._destinationObjects,
                        &VStack_1,(MethodInfo *)0x0);
    if (bVar29 == 0) goto code_?;
    uVar30 = (this->fields)._snapPivot.x;
    uVar31 = (this->fields)._snapPivot.y;
    VStack_1.z = VStack_1.z - (this->fields)._snapPivot.z;
    (this->fields)._._relativeDragOffset.x = VStack_1.x - (float)uVar30;
    (this->fields)._._relativeDragOffset.y = VStack_1.y - (float)uVar31;
  }
  (this->fields)._._relativeDragOffset.z = VStack_1.z;
code_?:
  uVar32 = (this->fields)._snapPivot.x;
  uVar33 = (this->fields)._snapPivot.y;
  uVar34 = (this->fields)._._relativeDragOffset.x;
  fVar4 = (this->fields)._._relativeDragOffset.y;
  fVar5 = (this->fields)._._relativeDragOffset.z;
  fVar23 = (this->fields)._snapPivot.z;
  uVar35 = (this->fields)._._totalDragOffset.x;
  uVar36 = (this->fields)._._totalDragOffset.y;
  fVar24 = (this->fields)._._relativeDragOffset.y;
  (this->fields)._snapPivot.x = (float)uVar34 + (float)uVar32;
  (this->fields)._snapPivot.y = fVar4 + (float)uVar33;
  uVar37 = (this->fields)._._relativeDragOffset.x;
  (this->fields)._snapPivot.z = fVar5 + fVar23;
  fVar4 = (this->fields)._._relativeDragOffset.z;
  fVar5 = (this->fields)._._totalDragOffset.z;
  (this->fields)._._totalDragOffset.x = (float)uVar37 + (float)uVar35;
  (this->fields)._._totalDragOffset.y = fVar24 + (float)uVar36;
  (this->fields)._._totalDragOffset.z = fVar4 + fVar5;
  return;
}


/* Boolean CanUseObjectAsSnapDestination(GameObject) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_CanUseObjectAsSnapDestination
               (GizmoObjectVertexSnapDrag3D *this,GameObject *gameObject,MethodInfo *method)

{
  pGVar1 = (this->fields)._settings;
  if (gameObject != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (gameObject->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)gameObject,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcRam_? = pcVar3;
    bVar6 = (*pcRam_?)(pvVar2);
    if (pGVar1 != (GizmoObjectVertexSnapSettings *)0x0) {
      return ((pGVar1->fields)._snapDestinationLayers & 1 << (bVar6 & 0x1f)) != 0;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean DoBeginSession() */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_DoBeginSession
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  if ((this->fields)._targetObjects != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    (this->fields)._isActive = 1;
    return 1;
  }
  return 0;
}


/* Void DoEndSession() */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_DoEndSession
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [32];
  int iVar4;
  int iVar5;
  List_1_UnityEngine_GameObject_ *pLVar6;
  GameObject__Array *this_00;
  code *pcVar7;
  int iVar8;
  int32_t iVar9;
  ArgumentNullException *this_01;
  undefined8 uVar10;
  IndexOutOfRangeException *pIVar11;
  String *pSVar12;
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [16];
  GameObject **ppGVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auVar20 [32];
  
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar6 = (this->fields)._destinationObjects;
  (this->fields)._isActive = 0;
  if (pLVar6 == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = (pLVar6->fields)._size;
  piVar1 = &(pLVar6->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pLVar6->fields)._size = 0;
  if (iVar4 < 1) {
    return;
  }
  this_00 = (pLVar6->fields)._items;
  if (this_00 == (GameObject__Array *)0x0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentNullException,0,iVar4,0);
    this_01 = (ArgumentNullException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_array);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(this_01,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (iVar4 < 0) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException,0,iVar4,0);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_length___0);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((Array__Class *)this_00->klass)->_1).initialized_and_no_error == 0 &&
      ((((Array__Class *)this_00->klass)->_1).initialized == 0 &&
      ((((Array__Class *)this_00->klass)->_1).enumtype == 0 &&
      ((((Array__Class *)this_00->klass)->_1).nullabletype == 0 &&
      ((((Array__Class *)this_00->klass)->_1).is_generic == 0 &&
      ((((Array__Class *)this_00->klass)->_1).has_references == 0 &&
      ((((Array__Class *)this_00->klass)->_1).init_pending == 0 &&
      (((Array__Class *)this_00->klass)->_1).size_init_pending == 0))))))) {
    uVar10 = FUN_?();
    FUN_?(uVar10,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this_00->bounds == (Il2CppArrayBounds *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = this_00->bounds->lower_bound;
  }
  if (0 < iVar8) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException,0,iVar4,0);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_index___lower_bound);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_00,(MethodInfo *)0x0);
  if (iVar9 - iVar4 < -iVar8) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_index___length___size);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar5 = (((Array__Class *)this_00->klass)->_1).native_size;
  uVar18 = (ulonglong)(iVar5 * iVar4);
  ppGVar16 = (GameObject **)((longlong)this_00->vector + (longlong)iVar5 * (longlong)-iVar8);
  switch(uVar18) {
  case 0:
    return;
  case 8:
    *(undefined8 *)((longlong)ppGVar16 + (uVar18 - 8)) = 0;
    return;
  case 9:
    *(undefined8 *)((longlong)ppGVar16 + (uVar18 - 9)) = 0;
    *(undefined1 *)((longlong)ppGVar16 + (uVar18 - 1)) = 0;
    return;
  case 10:
    *(undefined8 *)((longlong)ppGVar16 + (uVar18 - 10)) = 0;
    *(undefined2 *)((longlong)ppGVar16 + (uVar18 - 2)) = 0;
    return;
  case 0xb:
    *(undefined8 *)((longlong)ppGVar16 + (uVar18 - 0xb)) = 0;
    *(undefined2 *)((longlong)ppGVar16 + (uVar18 - 3)) = 0;
    *(undefined1 *)((longlong)ppGVar16 + (uVar18 - 1)) = 0;
    return;
  case 0xc:
    *(undefined8 *)((longlong)ppGVar16 + (uVar18 - 0xc)) = 0;
  case 4:
    *(undefined4 *)((longlong)ppGVar16 + (uVar18 - 4)) = 0;
    return;
  case 0xd:
    *(undefined8 *)((longlong)ppGVar16 + (uVar18 - 0xd)) = 0;
  case 5:
    *(undefined4 *)((longlong)ppGVar16 + (uVar18 - 5)) = 0;
    *(undefined1 *)((longlong)ppGVar16 + (uVar18 - 1)) = 0;
    return;
  case 0xe:
    *(undefined8 *)((longlong)ppGVar16 + (uVar18 - 0xe)) = 0;
  case 6:
    *(undefined4 *)((longlong)ppGVar16 + (uVar18 - 6)) = 0;
  case 2:
    *(undefined2 *)((longlong)ppGVar16 + (uVar18 - 2)) = 0;
    return;
  case 0xf:
    *(undefined8 *)((longlong)ppGVar16 + (uVar18 - 0xf)) = 0;
  case 7:
    *(undefined4 *)((longlong)ppGVar16 + (uVar18 - 7)) = 0;
  case 3:
    *(undefined2 *)((longlong)ppGVar16 + (uVar18 - 3)) = 0;
  case 1:
    *(undefined1 *)((longlong)ppGVar16 + (uVar18 - 1)) = 0;
    return;
  }
  auVar20._0_16_ = ZEXT816(0);
  if (uVar18 < 0x21) {
    *(undefined1 (*) [16])ppGVar16 = auVar20._0_16_;
    *(undefined1 (*) [16])((longlong)ppGVar16 + (uVar18 - 0x10)) = auVar20._0_16_;
    return;
  }
  if (uRam_? < 3) {
    if ((uVar18 <= uRam_?) || ((bRam_? & 2) == 0)) {
      lVar19 = ((ulonglong)ppGVar16 & 0xf) - 0x10;
      pauVar15 = (undefined1 (*) [16])((longlong)ppGVar16 - lVar19);
      uVar18 = uVar18 + lVar19;
      if (0x80 < uVar18) {
        do {
          *pauVar15 = auVar20._0_16_;
          pauVar15[1] = auVar20._0_16_;
          pauVar15[2] = auVar20._0_16_;
          pauVar15[3] = auVar20._0_16_;
          pauVar15[4] = auVar20._0_16_;
          pauVar15[5] = auVar20._0_16_;
          pauVar15[6] = auVar20._0_16_;
          pauVar15[7] = auVar20._0_16_;
          pauVar15 = pauVar15 + 8;
          uVar18 = uVar18 - 0x80;
        } while (0x7f < uVar18);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar18 + 0xf >> 4) * 4) + 0xADDR))
                (pauVar15,-lVar19);
      return;
    }
  }
  else if (((uVar18 <= uRam_?) || (uRam_? < uVar18)) ||
          ((bRam_? & 2) == 0)) {
    auVar20._16_16_ = auVar20._0_16_;
    lVar19 = ((ulonglong)ppGVar16 & 0x1f) - 0x20;
    pauVar13 = (undefined1 (*) [32])((longlong)ppGVar16 - lVar19);
    uVar18 = uVar18 + lVar19;
    if (0x100 < uVar18) {
      if (uRam_? < uVar18) {
        do {
          uVar17 = uVar18;
          pauVar14 = pauVar13;
          auVar3 = vmovntdq_avx(auVar20);
          *pauVar14 = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[3] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[4] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[7] = auVar3;
          pauVar13 = pauVar14 + 8;
          uVar18 = uVar17 - 0x100;
        } while (0xff < uVar17 - 0x100);
        uVar18 = uVar17 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar17) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(*pauVar14 + uVar18) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[1] + uVar18) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[2] + uVar18) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[3] + uVar18) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[4] + uVar18) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[5] + uVar18) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[6] + uVar18) = auVar3;
        default:
          *(undefined1 (*) [32])(pauVar14[-1] + uVar17) = auVar20;
        case 0x100:
          *(undefined1 (*) [32])ppGVar16 = auVar20;
          return;
        }
      }
      do {
        *pauVar13 = auVar20;
        pauVar13[1] = auVar20;
        pauVar13[2] = auVar20;
        pauVar13[3] = auVar20;
        pauVar13[4] = auVar20;
        pauVar13[5] = auVar20;
        pauVar13[6] = auVar20;
        pauVar13[7] = auVar20;
        pauVar13 = pauVar13 + 8;
        uVar18 = uVar18 - 0x100;
      } while (0xff < uVar18);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar18 + 0x1f >> 5) * 4) + 0xADDR))
              (0,-lVar19);
    return;
  }
  for (; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined1 *)ppGVar16 = 0;
    ppGVar16 = (GameObject **)((longlong)ppGVar16 + 1);
  }
  return;
}


/* Boolean DoUpdateSession() */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_DoUpdateSession
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  GizmoObjectVertexSnapDrag3D_GatherDestinationObjects(this,(MethodInfo *)0x0);
  return 1;
}


/* Void GatherDestinationObjects() */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_GatherDestinationObjects
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_0___GatherDestinationObjects_b__0_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)
            FUN_?(TypeInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_0);
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if ((pOVar2 != (Object *)0x0) && (pOVar1 != (Object *)0x0)) {
    pOVar1[1].monitor = pOVar2[4].monitor;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pLVar8 = (this->fields)._destinationObjects;
    if (pLVar8 != (List_1_UnityEngine_GameObject_ *)0x0) {
      piVar9 = &(pLVar8->fields)._version;
      *piVar9 = *piVar9 + 1;
      length = (pLVar8->fields)._size;
      (pLVar8->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar8->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      if ((pOVar2 != (Object *)0x0) && (pOVar2[2].klass != (Object__Class *)0x0)) {
        cVar10 = FUN_?(8,TypeInfo__RTG__IInputDevice,pOVar2[2].klass);
        if (cVar10 == '\0') {
          return;
        }
        puVar11 = (undefined8 *)FUN_?(&uStack_12,7);
        uStack_12 = *puVar11;
        pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                     CONCAT44(pLStack_13._4_4_,*(undefined4 *)(puVar11 + 1));
        *(int *)&pOVar1[3].klass = (int)uStack_12;
        *(int *)((longlong)&pOVar1[3].klass + 4) = (int)((ulonglong)uStack_12 >> 0x20);
        pOVar1[2].klass = (Object__Class *)0x0;
        pOVar1[2].monitor = (MonitorData *)0x0;
        if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar14 = FUN_?();
        *(undefined4 *)&pOVar1[2].klass = uVar14;
        uVar14 = _UNK_?;
        *(ulonglong *)((longlong)&pOVar1[2].klass + 4) = CONCAT44(_UNK_?,_UNK_?);
        *(undefined4 *)((longlong)&pOVar1[2].monitor + 4) = uVar14;
        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_00 = (RTFocusCamera *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if (this_00 != (RTFocusCamera *)0x0) {
          RTFocusCamera::RTFocusCamera_GetVisibleObjects
                    (this_00,(this->fields)._visibleObjectBuffer,(MethodInfo *)0x0);
          collection = (IEnumerable_1_System_Object_ *)(this->fields)._targetObjects;
          this_01 = (Object__Class *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                                 );
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object___ctor_1
                    ((List_1_System_Object_ *)this_01,collection,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                    );
          pOVar1[1].klass = this_01;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          pLVar8 = (this->fields)._visibleObjectBuffer;
          this_02 = (Predicate_1_Object_ *)
                    FUN_?(TypeInfo__System__Predicate<UnityEngine::GameObject>);
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (this_02,pOVar1,
                     MethodInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_0___GatherDestinationObjects_b__0_UnityEngine__GameObject_
                     ,(MethodInfo *)0x0);
          if (pLVar8 != (List_1_UnityEngine_GameObject_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAll
                      ((List_1_System_Object_ *)pLVar8,this_02,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                      );
            LStack_15._list = (List_1_System_Object_ *)(this->fields)._visibleObjectBuffer;
            if ((List_1_UnityEngine_GameObject_ *)LStack_15._list !=
                (List_1_UnityEngine_GameObject_ *)0x0) {
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)&uStack_12 >> 0xc);
                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                  LOCK();
                  bVar7 = uVar5 == *puVar6;
                  if (bVar7) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                           ((ulonglong)
                            (uint)(((List_1_UnityEngine_GameObject_ *)LStack_15._list)->fields).
                                  _version << 0x20);
              uStack_16 = 0;
              LStack_15._8_8_ = pLStack_13;
              LStack_15._current = (Object *)0x0;
              uStack_12 = 0;
              pLStack_13 = &LStack_15;
code_?:
              bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_15,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                );
              pOVar1 = LStack_15._current;
              if (bVar17 == 0) {
                return;
              }
              pGVar18 = (this->fields)._settings;
              if ((GameObject *)LStack_15._current == (GameObject *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar19 = (((GameObject__Fields *)((longlong)pOVar1 + 0x10))->_).m_CachedPtr;
              if (pvVar19 != (void *)0x0) {
                pcVar20 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
                  uVar21 = func_?(&UNK_?);
                  FUN_?(uVar21);
                  goto code_?;
                }
                pcRam_? = pcVar20;
                bVar22 = (*pcRam_?)(pvVar19);
                if (pGVar18 != (GizmoObjectVertexSnapSettings *)0x0) goto code_?;
                goto code_?;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
code_?:
  if (((pGVar18->fields)._snapDestinationLayers & 1 << (bVar22 & 0x1f)) != 0) {
    if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    GVar23 = GameObjectEx::GameObjectEx_GetGameObjectType((GameObject *)pOVar1,(MethodInfo *)0x0);
    if ((GVar23 == GameObjectType__Enum_Mesh) || (GVar23 == GameObjectType__Enum_Sprite)) {
      pLVar8 = (this->fields)._destinationObjects;
      if (pLVar8 == (List_1_UnityEngine_GameObject_ *)0x0) {
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar1,(MethodInfo *)0x0);
code_?:
        FUN_?();
        FUN_?();
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      FUN_?(pLVar8,pOVar1);
    }
  }
  goto code_?;
}


/* Boolean GetWorldPointClosestToInputDevice(Camera, IEnumerable`1[UnityEngine.GameObject], Vector3
   ByRef) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_GetWorldPointClosestToInputDevice
               (GizmoObjectVertexSnapDrag3D *this,Camera *focusCamera,
               IEnumerable_1_UnityEngine_GameObject_ *gameObjects,Vector3 *point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).z;
  fVar4 = (pVVar2->zeroVector).y;
  point->x = (pVVar2->zeroVector).x;
  point->y = fVar4;
  point->z = fVar3;
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return 0;
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar5 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar5 != (Object *)0x0) && (pOVar5[2].klass != (Object__Class *)0x0)) {
    cVar6 = FUN_?(8,TypeInfo__RTG__IInputDevice);
    if (cVar6 == '\0') {
      return 0;
    }
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar5 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar5 != (Object *)0x0) && (pOVar5[2].klass != (Object__Class *)0x0)) {
      pVVar7 = (Vector2 *)FUN_?(&VStack_8,7,TypeInfo__RTG__IInputDevice);
      fVar3 = _UNK_?;
      pt = *pVVar7;
      fStack_9 = pVVar7[1].x;
      bStackX_18 = 0;
      VStack_8 = pt;
      lStack_10 = FUN_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                                 ,gameObjects);
      uStack_11 = 0;
      plStack_12 = &lStack_10;
      VStack_13 = pt;
code_?:
      while (lStack_10 != 0) {
        cVar6 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar6 == '\0') {
          if (lStack_10 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lStack_10);
            return bStackX_18;
          }
          return bStackX_18;
        }
        if (lStack_10 == 0) goto code_?;
        gameObject = (GameObject *)FUN_?(0);
        if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        mesh = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
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
        if (mesh == (Mesh *)0x0) {
          bVar14 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar14 = (mesh->fields)._.m_CachedPtr != (void *)0x0;
        }
        if (!bVar14) goto code_?;
        if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        this_00 = (MeshVertexChunkCollectionDb *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>__get_Get__
                            );
        if (this_00 == (MeshVertexChunkCollectionDb *)0x0) goto code_?;
        this_01 = MeshVertexChunkCollectionDb::MeshVertexChunkCollectionDb_get_Item
                            (this_00,mesh,(MethodInfo *)0x0);
        if (this_01 != (MeshVertexChunkCollection *)0x0) {
          if (gameObject == (GameObject *)0x0) goto code_?;
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (gameObject,(MethodInfo *)0x0);
          if (this_02 == (Transform *)0x0) goto code_?;
          pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_get_localToWorldMatrix(aMStack_16,this_02,(MethodInfo *)0x0);
          pLVar17 = *(List_1_RTG_MeshVertexChunk_ **)pMVar15;
          lVar18._0_4_ = pMVar15->m20;
          lVar18._4_4_ = pMVar15->m30;
          uVar19._0_4_ = pMVar15->m01;
          uVar19._4_4_ = pMVar15->m11;
          uVar20._0_4_ = pMVar15->m21;
          uVar20._4_4_ = pMVar15->m31;
          uVar21._0_4_ = pMVar15->m02;
          uVar21._4_4_ = pMVar15->m12;
          uVar22._0_4_ = pMVar15->m22;
          uVar22._4_4_ = pMVar15->m32;
          uVar23._0_4_ = pMVar15->m03;
          uVar23._4_4_ = pMVar15->m13;
          uVar24._0_4_ = pMVar15->m23;
          uVar24._4_4_ = pMVar15->m33;
          fStack_25 = 0.0;
          auStack_26._0_8_ = pLVar17;
          auStack_26._8_8_ = lVar18;
          auStack_26._16_8_ = uVar19;
          auStack_26._24_8_ = uVar20;
          auStack_26._32_8_ = uVar21;
          auStack_26._40_8_ = uVar22;
          auStack_26._48_8_ = uVar23;
          auStack_26._56_8_ = uVar24;
          VStack_27 = pt;
          pLVar28 = MeshVertexChunkCollection::
                    MeshVertexChunkCollection_GetWorldChunksHoveredByPoint
                              (this_01,(Vector3 *)&VStack_27,(Matrix4x4 *)auStack_26,focusCamera,
                               (MethodInfo *)0x0);
          if (pLVar28 == (List_1_RTG_MeshVertexChunk_ *)0x0) goto code_?;
          if ((((pLVar28->fields)._size == 0) &&
              (auStack_26._0_8_ = pLVar17, auStack_26._8_8_ = lVar18, auStack_26._16_8_ = uVar19,
              auStack_26._24_8_ = uVar20, auStack_26._32_8_ = uVar21, auStack_26._40_8_ = uVar22,
              auStack_26._48_8_ = uVar23, auStack_26._56_8_ = uVar24,
              this_03 = MeshVertexChunkCollection::
                        MeshVertexChunkCollection_GetWorldVertChunkClosestToScreenPt
                                  (this_01,pt,(Matrix4x4 *)auStack_26,focusCamera,(MethodInfo *)0x0
                                  ), this_03 != (MeshVertexChunk *)0x0)) &&
             (iVar29 = MeshVertexChunk::MeshVertexChunk_get_VertexCount(this_03,(MethodInfo *)0x0),
             iVar29 != 0)) {
            FUN_?(pLVar28,this_03);
          }
          auStack_26._8_4_ = 0.0;
          auStack_26._12_4_ = 0.0;
          auStack_26._16_4_ = 0.0;
          auStack_26._20_4_ = 0.0;
          auStack_26._0_8_ = pLVar28;
          func_?(auStack_26);
          auStack_26._8_8_ = (ulonglong)(uint)(pLVar28->fields)._version << 0x20;
          auStack_26._16_4_ = 0.0;
          auStack_26._20_4_ = 0.0;
          LStack_1._list = (List_1_System_Object_ *)auStack_26._0_8_;
          LStack_1._index = auStack_26._8_4_;
          LStack_1._version = auStack_26._12_4_;
          LStack_1._current = (Object *)0x0;
          uStack_30 = 0;
          pLStack_31 = &LStack_1;
          while (bVar32 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Object]::List_1_T_Enumerator_System_Object__MoveNext
                                    (&LStack_1,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                                    ), bVar32 != 0) {
            if ((MeshVertexChunk *)LStack_1._current == (MeshVertexChunk *)0x0) {
code_?:
              FUN_?();
              FUN_?();
              goto code_?;
            }
            auStack_26._0_8_ = pLVar17;
            auStack_26._8_8_ = lVar18;
            auStack_26._16_8_ = uVar19;
            auStack_26._24_8_ = uVar20;
            auStack_26._32_8_ = uVar21;
            auStack_26._40_8_ = uVar22;
            auStack_26._48_8_ = uVar23;
            auStack_26._56_8_ = uVar24;
            pVVar33 = MeshVertexChunk::MeshVertexChunk_GetWorldVertClosestToScreenPt
                                (&VStack_34,(MeshVertexChunk *)LStack_1._current,pt,
                                 (Matrix4x4 *)auStack_26,focusCamera,(MethodInfo *)0x0);
            VVar35.x = pVVar33->x;
            VVar35.y = pVVar33->y;
            fVar4 = pVVar33->z;
            if (focusCamera == (Camera *)0x0) {
code_?:
              FUN_?();
              goto code_?;
            }
            VStack_8 = VVar35;
            fStack_9 = fVar4;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_36 = 0;
            uStack_37 = 0;
            pvVar38 = (focusCamera->fields)._._._.m_CachedPtr;
            if (pvVar38 == (void *)0x0) {
code_?:
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)focusCamera,(MethodInfo *)0x0);
              goto code_?;
            }
            pcVar39 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar39 = (code *)FUN_?(&UNK_?), pcVar39 == (code *)0x0)) {
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19);
              goto code_?;
            }
            pcRam_? = pcVar39;
            (*pcRam_?)(pvVar38,&VStack_8,2,&uStack_36);
            fVar40 = pt.x - (float)uStack_36;
            fVar41 = pt.y - uStack_36._4_4_;
            fVar40 = fVar41 * fVar41 + fVar40 * fVar40;
            if (fVar40 < fVar3) {
              point->x = VVar35.x;
              point->y = VVar35.y;
              point->z = fVar4;
              bStackX_18 = 1;
              fVar3 = fVar40;
            }
          }
        }
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar39 = (code *)swi(3);
      bVar32 = (*pcVar39)();
      return bVar32;
    }
  }
  FUN_?();
  pcVar39 = (code *)swi(3);
  bVar32 = (*pcVar39)();
  return bVar32;
code_?:
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar42 = ObjectBounds::ObjectBounds_CalcSpriteWorldOBB
                      ((OBB *)auStack_26,gameObject,(MethodInfo *)0x0);
  OStack_43._size.x = (pOVar42->_size).x;
  OStack_43._size.y = (pOVar42->_size).y;
  OStack_43._8_8_ = *(undefined8 *)&(pOVar42->_size).z;
  OStack_43._center.y = (pOVar42->_center).y;
  OStack_43._center.z = (pOVar42->_center).z;
  OStack_43._rotation.x = (pOVar42->_rotation).x;
  OStack_43._rotation.y = (pOVar42->_rotation).y;
  OStack_43._rotation.z = (pOVar42->_rotation).z;
  OStack_43._rotation.w = (pOVar42->_rotation).w;
  OStack_43._isValid = pOVar42->_isValid;
  OStack_43._41_3_ = *(undefined3 *)&pOVar42->field_0x29;
  if (OStack_43._isValid != 0) {
    worldPoints = OBB::OBB_GetCenterAndCornerPoints(&OStack_43,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    points = CameraEx::CameraEx_ConvertWorldToScreenPoints
                       (focusCamera,worldPoints,(MethodInfo *)0x0);
    uVar44 = Vector2Ex::Vector2Ex_GetPointClosestToPoint(points,pt,(MethodInfo *)0x0);
    if (-1 < (int)uVar44) {
      if (points != (List_1_UnityEngine_Vector2_ *)0x0) {
        uVar19 = FUN_?(points,uVar44);
        fStack_45 = (float)((ulonglong)uVar19 >> 0x20);
        fStack_45 = pt.y - fStack_45;
        fStack_46 = (float)uVar19;
        fStack_46 = pt.x - fStack_46;
        fVar4 = fStack_46 * fStack_46 + fStack_45 * fStack_45;
        if (fVar3 <= fVar4) goto code_?;
        if (worldPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
          if (uVar44 < (uint)(worldPoints->fields)._size) {
            pVVar47 = (worldPoints->fields)._items;
            if (pVVar47 != (Vector3__Array *)0x0) {
              if (uVar44 < (uint)pVVar47->max_length) {
                fVar3 = pVVar47->vector[(int)uVar44].z;
                fVar40 = pVVar47->vector[(int)uVar44].y;
                point->x = pVVar47->vector[(int)uVar44].x;
                point->y = fVar40;
                point->z = fVar3;
                bStackX_18 = 1;
                fVar3 = fVar4;
                goto code_?;
              }
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
            }
            FUN_?();
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
        }
        FUN_?();
      }
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
  }
  goto code_?;
}


/* Boolean SelectSnapPivotPoint(Gizmo) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_SelectSnapPivotPoint
               (GizmoObjectVertexSnapDrag3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if ((this->fields)._targetObjects != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)();
    if (cVar1 == '\0') {
      if (gizmo != (Gizmo *)0x0) {
        focusCamera = Gizmo::Gizmo_get_FocusCamera(gizmo,(MethodInfo *)0x0);
        bVar2 = GizmoObjectVertexSnapDrag3D_GetWorldPointClosestToInputDevice
                          (this,focusCamera,(this->fields)._targetObjects,&(this->fields)._snapPivot
                           ,(MethodInfo *)0x0);
        return bVar2;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar2 = (*pcVar3)();
      return bVar2;
    }
  }
  return 0;
}


/* Void SetTargetObjects(IEnumerable`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_SetTargetObjects
               (GizmoObjectVertexSnapDrag3D *this,
               IEnumerable_1_UnityEngine_GameObject_ *targetObjects,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)
                    (this,(this->klass->vtable).get_IsActive_1.method);
  if ((cVar1 == '\0') &&
     (bVar2 = iRam_? != 0, (this->fields)._targetObjects = targetObjects, bVar2)) {
    uVar3 = (uint)((ulonglong)&(this->fields)._targetObjects >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* GizmoObjectVertexSnapDrag3D() */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D__ctor
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoObjectVertexSnapSettings);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar2 = iRam_? != 0;
  (this->fields)._destinationObjects = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._destinationObjects >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_01 = (GizmoObjectVertexSnapSettings *)
            FUN_?(TypeInfo__RTG__GizmoObjectVertexSnapSettings);
  (this_01->fields)._snapDestinationLayers = -1;
  (this_01->fields)._canSnapToGrid = 1;
  (this_01->fields)._canSnapToObjectVerts = 1;
  Settings::Settings__ctor((Settings *)this_01,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._settings = this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar2 = iRam_? != 0;
  (this->fields)._visibleObjectBuffer = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._visibleObjectBuffer >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoTransform_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
  bVar2 = iRam_? != 0;
  (this->fields)._._targetTransforms = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar5 = *puVar6;
      if (uVar7 == uVar5) {
        *puVar6 = uVar7 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar8 = cRam_?;
  cVar9 = cRam_?;
  pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar11 = (pQVar10->identityQuaternion).y;
  fVar12 = (pQVar10->identityQuaternion).z;
  fVar13 = (pQVar10->identityQuaternion).w;
  (this->fields)._._totalDragRotation.x = (pQVar10->identityQuaternion).x;
  (this->fields)._._totalDragRotation.y = fVar11;
  (this->fields)._._totalDragRotation.z = fVar12;
  (this->fields)._._totalDragRotation.w = fVar13;
  if (cVar8 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar8 = '\x01';
    cRam_? = '\x01';
    cVar9 = cRam_?;
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar12 = (pVVar14->oneVector).y;
  fVar11 = (pVVar14->oneVector).z;
  (this->fields)._._totalDragScale.x = (pVVar14->oneVector).x;
  (this->fields)._._totalDragScale.y = fVar12;
  (this->fields)._._totalDragScale.z = fVar11;
  if (cVar9 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    cVar8 = cRam_?;
  }
  pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar11 = (pQVar10->identityQuaternion).y;
  fVar12 = (pQVar10->identityQuaternion).z;
  fVar13 = (pQVar10->identityQuaternion).w;
  (this->fields)._._relativeDragRotation.x = (pQVar10->identityQuaternion).x;
  (this->fields)._._relativeDragRotation.y = fVar11;
  (this->fields)._._relativeDragRotation.z = fVar12;
  (this->fields)._._relativeDragRotation.w = fVar13;
  if (cVar8 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar12 = (pVVar14->oneVector).y;
  fVar11 = (pVVar14->oneVector).z;
  (this->fields)._._relativeDragScale.x = (pVVar14->oneVector).x;
  (this->fields)._._relativeDragScale.y = fVar12;
  (this->fields)._._relativeDragScale.z = fVar11;
  return;
}


/* Vector3 get_SnapPivot() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
          GizmoObjectVertexSnapDrag3D_get_SnapPivot
                    (Vector3 *__return_storage_ptr__,GizmoObjectVertexSnapDrag3D *this,
                    MethodInfo *method)

{
  fVar1 = (this->fields)._snapPivot.z;
  fVar2 = (this->fields)._snapPivot.y;
  __return_storage_ptr__->x = (this->fields)._snapPivot.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void set_Settings(GizmoObjectVertexSnapSettings) */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_set_Settings
               (GizmoObjectVertexSnapDrag3D *this,GizmoObjectVertexSnapSettings *value,
               MethodInfo *method)

{
  if ((value != (GizmoObjectVertexSnapSettings *)0x0) &&
     (bVar1 = iRam_? != 0, (this->fields)._settings = value, bVar1)) {
    uVar2 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
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

