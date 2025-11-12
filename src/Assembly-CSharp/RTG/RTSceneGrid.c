
/* Void AddRenderIgnoreCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_AddRenderIgnoreCamera
               (RTSceneGrid *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._renderIgnoreCameras;
  if (pLVar1 != (List_1_UnityEngine_Camera_ *)0x0) {
    cVar2 = FUN_?(pLVar1,camera);
    if (cVar2 == '\0') {
      pLVar1 = (this->fields)._renderIgnoreCameras;
      if (pLVar1 == (List_1_UnityEngine_Camera_ *)0x0) goto code_?;
      FUN_?(pLVar1,camera);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single CalculateCellFadeZoom(Camera) */

float Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_CalculateCellFadeZoom
                (RTSceneGrid *this,Camera *camera,MethodInfo *method)

{
  pPVar1 = RTSceneGrid_get_WorldPlane(aPStack_2,this,(MethodInfo *)0x0);
  fVar3 = (pPVar1->m_Normal).x;
  fVar4 = (pPVar1->m_Normal).y;
  fVar5 = (pPVar1->m_Normal).z;
  fVar6 = pPVar1->m_Distance;
  if ((camera == (Camera *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)camera,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    fVar3 = (float)(*pcVar7)();
    return fVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aPStack_2[0].m_Normal.x = 0.0;
  aPStack_2[0].m_Normal.y = 0.0;
  aPStack_2[0].m_Normal.z = 0.0;
  pvVar8 = (obj->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    fVar3 = (float)(*pcVar7)();
    return fVar3;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar7 = (code *)swi(3);
    fVar3 = (float)(*pcVar7)();
    return fVar3;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar8,aPStack_2);
  return (float)((uint)(aPStack_2[0].m_Normal.y * fVar4 + aPStack_2[0].m_Normal.x * fVar3 +
                        aPStack_2[0].m_Normal.z * fVar5 + fVar6) & _UNK_?);
}


/* XZGridCell CellFromWorldPoint(Vector3) */

XZGridCell *
Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_CellFromWorldPoint
          (RTSceneGrid *this,Vector3 *worldPoint,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    aVStack_2[0].x = worldPoint->x;
    aVStack_2[0].y = worldPoint->y;
    aVStack_2[0].z = worldPoint->z;
    pXVar3 = XZGridCell::XZGridCell_FromPoint
                       (aVStack_2,(pXVar1->fields)._cellSizeX,(pXVar1->fields)._cellSizeZ,
                        (IXZGrid *)this,(MethodInfo *)0x0);
    return pXVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pXVar3 = (XZGridCell *)(*pcVar4)();
  return pXVar3;
}


/* SceneRaycastHit GetSceneHitForGridSnap() */

SceneRaycastHit *
Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_GetSceneHitForGridSnap
          (RTSceneGrid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
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
    FUN_?(&TypeInfo__RTG__SceneRaycastFilter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1[2].klass;
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if ((pOVar1 != (Object *)0x0) && (pOVar2 != (Object__Class *)0x0)) {
      puVar3 = (undefined8 *)FUN_?(auStack_4);
      RStack_5.m_Origin._0_8_ = *puVar3;
      RStack_5._8_8_ = puVar3[1];
      uVar6 = puVar3[2];
      this_01 = (SceneRaycastFilter *)FUN_?(TypeInfo__RTG__SceneRaycastFilter);
      SceneRaycastFilter::SceneRaycastFilter__ctor(this_01,(MethodInfo *)0x0);
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
      if ((this_01 != (SceneRaycastFilter *)0x0) &&
         (this_00 = (List_1_System_UInt32Enum_ *)(this_01->fields)._allowedObjectTypes,
         this_00 != (List_1_System_UInt32Enum_ *)0x0)) {
        piVar8 = &(this_00->fields)._version;
        *piVar8 = *piVar8 + 1;
        pUVar9 = (this_00->fields)._items;
        if (pUVar9 != (UInt32Enum__Enum__Array *)0x0) {
          uVar10 = (this_00->fields)._size;
          if (uVar10 < (uint)pUVar9->max_length) {
            (this_00->fields)._size = uVar10 + 1;
            if ((uint)pUVar9->max_length <= uVar10) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              pSVar12 = (SceneRaycastHit *)(*pcVar11)();
              return pSVar12;
            }
            pUVar9->vector[(int)uVar10] = 1;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
            List_1_System_UInt32Enum__AddWithResize(this_00,1,pMVar7->klass->rgctx_data[0xe].method)
            ;
          }
          if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
            FUN_?();
          }
          this_02 = (RTScene *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
          if (this_02 != (RTScene *)0x0) {
            RStack_5.m_Direction._4_8_ = uVar6;
            pSVar12 = RTScene::RTScene_Raycast
                                (this_02,&RStack_5,SceneRaycastPrecision__Enum_BestFit,this_01,
                                 (MethodInfo *)0x0);
            return pSVar12;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pSVar12 = (SceneRaycastHit *)(*pcVar11)();
  return pSVar12;
}


/* Void Initialize_SystemCall() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_Initialize_SystemCall
               (RTSceneGrid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__InputDeviceDoubleTapHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTSceneGrid__OnInputDeviceDoubleTap_RTG__IInputDevice__UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1[2].klass;
    this_00 = (InputDeviceDoubleTapHandler *)
              FUN_?(TypeInfo__RTG__InputDeviceDoubleTapHandler);
    InputDeviceDoubleTapHandler::InputDeviceDoubleTapHandler__ctor
              (this_00,(Object *)this,
               MethodInfo__RTG__RTSceneGrid__OnInputDeviceDoubleTap_RTG__IInputDevice__UnityEngine__Vector2_
               ,(MethodInfo *)0x0);
    if (pOVar2 != (Object__Class *)0x0) {
      pIVar3 = (pOVar2->_0).image;
      uVar4 = 0;
      uVar5 = *(ushort *)((longlong)&pIVar3[4].nameNoExt + 6);
      if (uVar5 != 0) {
        do {
          if (*(IInputDevice__Class **)
               (*(longlong *)&pIVar3[2].customAttributeCount + (ulonglong)uVar4 * 0x10) ==
              TypeInfo__RTG__IInputDevice) {
            puVar6 = &pIVar3[4].typeCount +
                     (longlong)
                     *(int *)(*(longlong *)&pIVar3[2].customAttributeCount + 8 +
                             (ulonglong)uVar4 * 0x10) * 4;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      puVar6 = (uint32_t *)FUN_?(pOVar2,TypeInfo__RTG__IInputDevice,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)puVar6)(pOVar2,this_00,*(undefined8 *)(puVar6 + 2),*(code **)puVar6);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsRenderIgnoreCamera(Camera) */

bool Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_IsRenderIgnoreCamera
               (RTSceneGrid *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._renderIgnoreCameras;
  if (pLVar1 != (List_1_UnityEngine_Camera_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(pLVar1->fields)._items,(Object *)camera,0,
                       (pLVar1->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    return iVar2 != -1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void MoveDown() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_MoveDown
               (RTSceneGrid *this,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    if ((pXVar1->fields)._isVisible != 0) {
      (pXVar1->fields)._yOffset = (pXVar1->fields)._yOffset - (pXVar1->fields)._upDownStep;
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void MoveUp() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_MoveUp(RTSceneGrid *this,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    if ((pXVar1->fields)._isVisible != 0) {
      (pXVar1->fields)._yOffset = (pXVar1->fields)._yOffset + (pXVar1->fields)._upDownStep;
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnInputDeviceDoubleTap(IInputDevice, Vector2) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_OnInputDeviceDoubleTap
               (RTSceneGrid *this,IInputDevice *inputDevice,Vector2 position,MethodInfo *method)

{
  pSVar1 = (this->fields)._hotkeys;
  if ((pSVar1 == (SceneGridHotkeys *)0x0) ||
     (this_00 = (pSVar1->fields)._snapToCursorPickPoint, this_00 == (Hotkeys *)0x0)) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  pSVar4 = RTSceneGrid_GetSceneHitForGridSnap(this,(MethodInfo *)0x0);
  if (pSVar4 == (SceneRaycastHit *)0x0) goto code_?;
  if ((pSVar4->fields)._objectHit == (GameObjectRayHit *)0x0) {
    return;
  }
  pGVar5 = (pSVar4->fields)._objectHit;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_6.z = 0.0;
  QStack_6.w = 0.0;
  QStack_6.x = 1.4013e-45;
  QStack_6.y = 0.0;
  if (pGVar5 == (GameObjectRayHit *)0x0) goto code_?;
  gameObject = (pGVar5->fields)._hitObject;
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar7 = ObjectBounds::ObjectBounds_CalcWorldOBB
                      (aOStack_8,gameObject,(ObjectBounds_QueryConfig *)&QStack_6,
                       (MethodInfo *)0x0);
  fVar9 = (pOVar7->_center).y;
  fVar10 = (pOVar7->_center).z;
  fStack_11 = (pOVar7->_rotation).x;
  fStack_12 = (pOVar7->_rotation).y;
  fStack_13 = (pOVar7->_rotation).z;
  fStack_14 = (pOVar7->_rotation).w;
  uVar15._0_4_ = (pOVar7->_size).x;
  uVar15._4_4_ = (pOVar7->_size).y;
  fVar16 = (pOVar7->_size).z;
  pVVar17 = &pOVar7->_center;
  fVar18 = pVVar17->x;
  uVar19._0_4_ = pVVar17->x;
  uVar19._4_4_ = pVVar17->y;
  uVar20._0_4_ = pVVar17->x;
  uVar20._4_4_ = pVVar17->y;
  if (pOVar7->_isValid == 0) {
    return;
  }
  fStack_21 = fVar9;
  fStack_22 = fVar10;
  pVVar17 = RTSceneGrid_get_Normal((Vector3 *)&QStack_6,this,(MethodInfo *)0x0);
  VStack_23.x = pVVar17->x;
  VStack_23.y = pVVar17->y;
  fVar24 = pVVar17->z;
  VStack_23.z = fVar24;
  VStack_25._0_8_ = VStack_23._0_8_;
  fVar26 = (float)FUN_?(&VStack_23);
  if (_UNK_? < fVar26) {
    uVar27._0_4_ = VStack_25.x / fVar26;
    fVar24 = fVar24 / fVar26;
    uVar27._4_4_ = VStack_25.y / fVar26;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar28 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27._0_4_ = (pVVar28->zeroVector).x;
    uVar27._4_4_ = (pVVar28->zeroVector).y;
    fVar24 = (pVVar28->zeroVector).z;
  }
  uVar29 = _UNK_?;
  VStack_25.y = SUB84(uVar27,4);
  fVar30 = VStack_25.y;
  VStack_25.x = (float)uVar27;
  fVar26 = VStack_25.x;
  fVar9 = (float)((uint)(fVar9 * VStack_25.y + fVar18 * VStack_25.x + fVar10 * fVar24) ^
                  _UNK_?);
  VStack_25._0_8_ = uVar20;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_6.y = fStack_12;
  QStack_6.x = fStack_11;
  QStack_6.z = fStack_13;
  QStack_6.w = fStack_14;
  VStack_23._0_8_ = uVar15;
  VStack_23.z = fVar16;
  aVStack_31[0]._0_8_ = uVar19;
  aVStack_31[0].z = fVar10;
  points = BoxMath::BoxMath_CalcBoxCornerPoints
                     (aVStack_31,&VStack_23,&QStack_6,(MethodInfo *)0x0);
  QStack_6.x = (pGVar5->fields)._hitPoint.x;
  QStack_6.y = (pGVar5->fields)._hitPoint.y;
  if (fVar30 * QStack_6.y + fVar26 * QStack_6.x + fVar24 * (pGVar5->fields)._hitPoint.z + fVar9
      < 0.0) {
    QStack_6.w = fVar9;
    QStack_6.z = fVar24;
    QStack_6._0_8_ = uVar27;
    uVar32 = PlaneEx::PlaneEx_GetFurthestPtBehind((Plane *)&QStack_6,points,(MethodInfo *)0x0);
    if (-1 < (int)uVar32) {
      if (points == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((uint)(points->fields)._size <= uVar32) goto code_?;
      pVVar33 = (points->fields)._items;
      if (pVVar33 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar33->max_length <= uVar32) goto code_?;
code_?:
      VStack_25.x = pVVar33->vector[(int)uVar32].x;
      VStack_25.y = pVVar33->vector[(int)uVar32].y;
      fVar10 = pVVar33->vector[(int)uVar32].z;
    }
  }
  else {
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
    uVar32 = 0xffffffff;
    uVar34 = 0;
    if (points == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    uVar35 = (points->fields)._size;
    lVar36 = 0;
    fVar16 = _UNK_?;
    for (; (int)uVar34 < (int)uVar35; uVar34 = uVar34 + 1) {
      if (uVar35 <= uVar34) goto code_?;
      pVVar33 = (points->fields)._items;
      if (pVVar33 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar33->max_length <= uVar34) goto code_?;
      QStack_6._0_8_ = *(undefined8 *)((longlong)&pVVar33->vector[0].x + lVar36);
      fVar18 = fVar30 * QStack_6.y + fVar26 * QStack_6.x +
               fVar24 * *(float *)((longlong)&pVVar33->vector[0].z + lVar36) + fVar9;
      if ((0.0 < fVar18) && (fVar16 < fVar18)) {
        fVar16 = fVar18;
        uVar32 = uVar34;
      }
      lVar36 = lVar36 + 0xc;
    }
    if (-1 < (int)uVar32) {
      if (uVar35 <= uVar32) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pVVar33 = (points->fields)._items;
      if (pVVar33 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar33->max_length <= uVar32) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto code_?;
    }
  }
  pVVar17 = RTSceneGrid_get_Normal((Vector3 *)&QStack_6,this,(MethodInfo *)0x0);
  uVar37._0_4_ = pVVar17->x;
  uVar37._4_4_ = pVVar17->y;
  fVar9 = pVVar17->z;
  VStack_23._0_8_ = uVar37;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar28 = TypeInfo__UnityEngine__Vector3->static_fields;
  QStack_6.x = (pVVar28->zeroVector).x;
  QStack_6.y = (pVVar28->zeroVector).y;
  fVar16 = (pVVar28->zeroVector).z;
  aVStack_31[0]._0_8_ = uVar37;
  aVStack_31[0].z = fVar9;
  fVar18 = (float)FUN_?(aVStack_31);
  if (_UNK_? < fVar18) {
    VStack_23.x = VStack_23.x / fVar18;
    fVar9 = fVar9 / fVar18;
    VStack_23.y = VStack_23.y / fVar18;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar28 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_23.x = (pVVar28->zeroVector).x;
    VStack_23.y = (pVVar28->zeroVector).y;
    fVar9 = (pVVar28->zeroVector).z;
  }
  pXVar38 = (this->fields)._settings;
  if (pXVar38 != (XZGridSettings *)0x0) {
    (pXVar38->fields)._yOffset =
         VStack_23.y * VStack_25.y + VStack_23.x * VStack_25.x + fVar9 * fVar10 +
         (float)((uint)(QStack_6.y * VStack_23.y + QStack_6.x * VStack_23.x + fVar9 * fVar16)
                ^ uVar29);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_Raycast
               (RTSceneGrid *this,Ray *ray,float *t,MethodInfo *method)

{
  pPVar1 = RTSceneGrid_get_WorldPlane(&PStack_2,this,(MethodInfo *)0x0);
  RStack_3.m_Origin.x = (ray->m_Origin).x;
  RStack_3.m_Origin.y = (ray->m_Origin).y;
  RStack_3._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  PStack_2.m_Normal.x = (pPVar1->m_Normal).x;
  PStack_2.m_Normal.y = (pPVar1->m_Normal).y;
  PStack_2._8_8_ = *(undefined8 *)&(pPVar1->m_Normal).z;
  RStack_3.m_Direction.y = (ray->m_Direction).y;
  RStack_3.m_Direction.z = (ray->m_Direction).z;
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    (&PStack_2,&RStack_3,t,method);
  return bVar4;
}


/* Void RemoveRenderIgnoreCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_RemoveRenderIgnoreCamera
               (RTSceneGrid *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_;
  this_00 = (this->fields)._renderIgnoreCameras;
  if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
    index = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(this_00->fields)._items,(Object *)camera,0,
                       (this_00->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    if (index < 0) {
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)this_00,index,pMVar1->klass->rgctx_data[0x2b].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Render_SystemCall(Camera) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_Render_SystemCall
               (RTSceneGrid *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TransformMatrix);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__LineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__CamWorldPos);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__GridRight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__CellSizeX);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__CamFarPlaneDist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__CellSizeZ);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__GridOrigin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__GridLook);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    if ((pXVar1->fields)._isVisible == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields)._renderIgnoreCameras != (List_1_UnityEngine_Camera_ *)0x0) {
      cVar2 = FUN_?();
      if (cVar2 != '\0') {
        return;
      }
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__CameraEx);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (renderCamera != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (renderCamera->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)renderCamera,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        cVar2 = (*pcRam_?)(pvVar3);
        if (cVar2 == '\0') {
          if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
            FUN_?();
          }
          pAVar6 = CameraEx::CameraEx_CalculateFrustumAABB
                              (&AStack_7,renderCamera,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
            FUN_?();
          }
          pAVar6 = CameraEx::CameraEx_CalculateOrthoAABB
                              (&AStack_7,renderCamera,(MethodInfo *)0x0);
        }
        uStack_8._0_4_ = (pAVar6->_center).y;
        uStack_8._4_4_ = (pAVar6->_center).z;
        fVar9 = (pAVar6->_size).x;
        fVar10 = (pAVar6->_size).z;
        fVar11 = (pAVar6->_center).x;
        uStack_12 = *(undefined4 *)&pAVar6->_isValid;
        pPVar13 = RTSceneGrid_get_WorldPlane((Plane *)&AStack_7,this,(MethodInfo *)0x0);
        fVar14 = _UNK_?;
        fVar15 = (pPVar13->m_Normal).x;
        fVar16 = (pPVar13->m_Normal).y;
        fVar17 = (pPVar13->m_Normal).z;
        fVar18 = fVar15 * fVar11 + fVar16 * (float)uStack_8 + fVar17 * uStack_8._4_4_ +
                 pPVar13->m_Distance;
        fVar19 = (float)uStack_8 - fVar18 * fVar16;
        fVar16 = uStack_8._4_4_ - fVar18 * fVar17;
        CStack_20.r = fVar9 * TypeRef__System__Activator__T._0_4_;
        CStack_20.b = fVar10 + fVar10;
        CStack_20.g = _UNK_?;
        pQVar21 = RTSceneGrid_get_Rotation(&QStack_22,this,(MethodInfo *)0x0);
        CStack_23.g = fVar19;
        CStack_23.r = fVar11 - fVar18 * fVar15;
        AStack_7._size.x = pQVar21->x;
        AStack_7._size.y = pQVar21->y;
        AStack_7._size.z = pQVar21->z;
        AStack_7._center.x = pQVar21->w;
        MStack_24.m00 = 0.0;
        MStack_24.m10 = 0.0;
        MStack_24.m20 = 0.0;
        MStack_24.m30 = 0.0;
        MStack_24.m01 = 0.0;
        MStack_24.m11 = 0.0;
        MStack_24.m21 = 0.0;
        MStack_24.m31 = 0.0;
        MStack_24.m02 = 0.0;
        MStack_24.m12 = 0.0;
        MStack_24.m22 = 0.0;
        MStack_24.m32 = 0.0;
        MStack_24.m03 = 0.0;
        MStack_24.m13 = 0.0;
        MStack_24.m23 = 0.0;
        MStack_24.m33 = 0.0;
        pcVar4 = pcRam_?;
        CStack_23.b = fVar16;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(&CStack_23);
        pXVar25 = (this->fields)._lookAndFeel;
        if (pXVar25 != (XZGridLookAndFeel *)0x0) {
          if ((pXVar25->fields)._useCellFading == 0) {
            if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar26 = (MaterialPool *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
            if (pMVar26 != (MaterialPool *)0x0) {
              pMVar27 = MaterialPool::MaterialPool_get_XZGrid_Plane(pMVar26,(MethodInfo *)0x0);
              fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                                 (renderCamera,(MethodInfo *)0x0);
              if (pMVar27 != (Material *)0x0) {
                iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                   (StringLiteral__CamFarPlaneDist,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                          (pMVar27,iVar28,fVar9,(MethodInfo *)0x0);
                pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)renderCamera,(MethodInfo *)0x0);
                if (pTVar29 != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  CStack_20.r = 0.0;
                  CStack_20.g = 0.0;
                  CStack_20.b = 0.0;
                  pvVar3 = (pTVar29->fields)._._.m_CachedPtr;
                  if (pvVar3 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar29,(MethodInfo *)0x0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcVar4 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcRam_? = pcVar4;
                  (*pcRam_?)(pvVar3,&CStack_20);
                  CStack_23.r = CStack_20.r;
                  CStack_23.g = CStack_20.g;
                  CStack_23.b = CStack_20.b;
                  CStack_23.a = 0.0;
                  AStack_7._size.x = CStack_20.r;
                  AStack_7._size.y = CStack_20.g;
                  AStack_7._center.x = 0.0;
                  AStack_7._size.z = CStack_20.b;
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                            (pMVar27,StringLiteral__CamWorldPos,(Vector4 *)&AStack_7,
                             (MethodInfo *)0x0);
                  fVar9 = MStack_24.m00;
                  fVar10 = MStack_24.m10;
                  fVar11 = MStack_24.m20;
                  fVar15 = MStack_24.m30;
                  fVar16 = MStack_24.m01;
                  fVar17 = MStack_24.m11;
                  fVar14 = MStack_24.m21;
                  fVar18 = MStack_24.m31;
                  fVar19 = MStack_24.m02;
                  fVar30 = MStack_24.m12;
                  fVar31 = MStack_24.m22;
                  fVar32 = MStack_24.m32;
                  fVar33 = MStack_24.m03;
                  fVar34 = MStack_24.m13;
                  fVar35 = MStack_24.m23;
                  fVar36 = MStack_24.m33;
                  MStack_37.m00 = MStack_24.m00;
                  MStack_37.m10 = MStack_24.m10;
                  MStack_37.m20 = MStack_24.m20;
                  MStack_37.m30 = MStack_24.m30;
                  MStack_37.m01 = MStack_24.m01;
                  MStack_37.m11 = MStack_24.m11;
                  MStack_37.m21 = MStack_24.m21;
                  MStack_37.m31 = MStack_24.m31;
                  MStack_37.m02 = MStack_24.m02;
                  MStack_37.m12 = MStack_24.m12;
                  MStack_37.m22 = MStack_24.m22;
                  MStack_37.m32 = MStack_24.m32;
                  MStack_37.m03 = MStack_24.m03;
                  MStack_37.m13 = MStack_24.m13;
                  MStack_37.m23 = MStack_24.m23;
                  MStack_37.m33 = MStack_24.m33;
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                            (pMVar27,StringLiteral__TransformMatrix,&MStack_37,(MethodInfo *)0x0);
                  pXVar1 = (this->fields)._settings;
                  if (pXVar1 != (XZGridSettings *)0x0) {
                    fVar38 = (pXVar1->fields)._cellSizeX;
                    iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                       (StringLiteral__CellSizeX,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                              (pMVar27,iVar28,fVar38,(MethodInfo *)0x0);
                    pXVar1 = (this->fields)._settings;
                    if (pXVar1 != (XZGridSettings *)0x0) {
                      fVar38 = (pXVar1->fields)._cellSizeZ;
                      iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                         (StringLiteral__CellSizeZ,(MethodInfo *)0x0);
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                                (pMVar27,iVar28,fVar38,(MethodInfo *)0x0);
                      pXVar25 = (this->fields)._lookAndFeel;
                      if (pXVar25 != (XZGridLookAndFeel *)0x0) {
                        AStack_7._size.x = (pXVar25->fields)._lineColor.r;
                        AStack_7._size.y = (pXVar25->fields)._lineColor.g;
                        AStack_7._size.z = (pXVar25->fields)._lineColor.b;
                        AStack_7._center.x = (pXVar25->fields)._lineColor.a;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                  (pMVar27,StringLiteral__LineColor,(Color *)&AStack_7,
                                   (MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                          fVar9 = MStack_24.m00;
                          fVar10 = MStack_24.m10;
                          fVar11 = MStack_24.m20;
                          fVar15 = MStack_24.m30;
                          fVar16 = MStack_24.m01;
                          fVar17 = MStack_24.m11;
                          fVar14 = MStack_24.m21;
                          fVar18 = MStack_24.m31;
                          fVar19 = MStack_24.m02;
                          fVar30 = MStack_24.m12;
                          fVar31 = MStack_24.m22;
                          fVar32 = MStack_24.m32;
                          fVar33 = MStack_24.m03;
                          fVar34 = MStack_24.m13;
                          fVar35 = MStack_24.m23;
                          fVar36 = MStack_24.m33;
                        }
                        pVVar39 = TypeInfo__UnityEngine__Vector3->static_fields;
                        AStack_7._size.x = (pVVar39->zeroVector).x;
                        AStack_7._size.y = (pVVar39->zeroVector).y;
                        CStack_23.r = (pVVar39->zeroVector).x;
                        CStack_23.g = (pVVar39->zeroVector).y;
                        CStack_23.b = (pVVar39->zeroVector).z;
                        CStack_23.a = 0.0;
                        AStack_7._center.x = 0.0;
                        AStack_7._size.z = (pVVar39->zeroVector).z;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                  (pMVar27,StringLiteral__GridOrigin,(Vector4 *)&AStack_7,
                                   (MethodInfo *)0x0);
                        pVVar40 = RTSceneGrid_get_Right
                                            ((Vector3 *)&CStack_23,this,(MethodInfo *)0x0);
                        AStack_7._size.x = pVVar40->x;
                        AStack_7._size.y = pVVar40->y;
                        CStack_23.r = pVVar40->x;
                        CStack_23.g = pVVar40->y;
                        CStack_23.b = pVVar40->z;
                        CStack_23.a = 0.0;
                        AStack_7._center.x = 0.0;
                        AStack_7._size.z = pVVar40->z;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                  (pMVar27,StringLiteral__GridRight,(Vector4 *)&AStack_7,
                                   (MethodInfo *)0x0);
                        pVVar40 = RTSceneGrid_get_Look
                                            ((Vector3 *)&CStack_23,this,(MethodInfo *)0x0);
                        AStack_7._size.x = pVVar40->x;
                        AStack_7._size.y = pVVar40->y;
                        CStack_23.a = 0.0;
                        AStack_7._center.x = 0.0;
                        AStack_7._size.z = pVVar40->z;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                  (pMVar27,StringLiteral__GridLook,(Vector4 *)&AStack_7,
                                   (MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                                  (pMVar27,0,(MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0)
                        {
                          FUN_?();
                        }
                        pMVar41 = (MeshPool *)
                                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                            (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
                        if (pMVar41 != (MeshPool *)0x0) {
                          pMVar42 = MeshPool::MeshPool_get_UnitQuadXZ(pMVar41,(MethodInfo *)0x0);
                          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          MStack_37.m10 = fVar10;
                          MStack_37.m00 = fVar9;
                          MStack_37.m30 = fVar15;
                          MStack_37.m20 = fVar11;
                          MStack_37.m11 = fVar17;
                          MStack_37.m01 = fVar16;
                          MStack_37.m31 = fVar18;
                          MStack_37.m21 = fVar14;
                          MStack_37.m12 = fVar30;
                          MStack_37.m02 = fVar19;
                          MStack_37.m32 = fVar32;
                          MStack_37.m22 = fVar31;
                          MStack_37.m13 = fVar34;
                          MStack_37.m03 = fVar33;
                          MStack_37.m33 = fVar36;
                          MStack_37.m23 = fVar35;
code_?:
                          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                                    (pMVar42,&MStack_37,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pPVar13 = RTSceneGrid_get_WorldPlane((Plane *)&QStack_22,this,(MethodInfo *)0x0);
            fVar9 = (pPVar13->m_Normal).x;
            fVar10 = (pPVar13->m_Normal).y;
            fVar11 = (pPVar13->m_Normal).z;
            fVar15 = pPVar13->m_Distance;
            pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)renderCamera,(MethodInfo *)0x0);
            if (pTVar29 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              CStack_20.r = 0.0;
              CStack_20.g = 0.0;
              CStack_20.b = 0.0;
              pvVar3 = (pTVar29->fields)._._.m_CachedPtr;
              if (pvVar3 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar29,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              (*pcRam_?)(pvVar3);
              fVar9 = (float)((uint)(CStack_20.g * fVar10 + CStack_20.r * fVar9 +
                                      CStack_20.b * fVar11 + fVar15) & _UNK_?);
              if ((int)fVar9 != 0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Math);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                  FUN_?();
                }
                auVar43._0_8_ = FUN_?();
                auVar43._8_8_ = extraout_XMM0_Qb;
                auVar44._4_12_ = auVar43._4_12_;
                auVar44._0_4_ = (float)auVar43._0_8_ + fVar14;
                FUN_?(auVar44._0_8_);
              }
              fVar10 = (float)FUN_?();
              fVar11 = (float)FUN_?();
              pXVar25 = (this->fields)._lookAndFeel;
              if (pXVar25 != (XZGridLookAndFeel *)0x0) {
                AStack_7._size.x = (pXVar25->fields)._lineColor.r;
                AStack_7._size.y = (pXVar25->fields)._lineColor.g;
                AStack_7._size.z = (pXVar25->fields)._lineColor.b;
                AStack_7._center.x = (pXVar25->fields)._lineColor.a;
                fVar9 = (fVar11 - fVar9) / (fVar11 - fVar10);
                if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pMVar26 = (MaterialPool *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
                if (pMVar26 != (MaterialPool *)0x0) {
                  pMVar27 = MaterialPool::MaterialPool_get_XZGrid_Plane(pMVar26,(MethodInfo *)0x0);
                  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                                     (renderCamera,(MethodInfo *)0x0);
                  if (pMVar27 != (Material *)0x0) {
                    iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                       (StringLiteral__CamFarPlaneDist,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                              (pMVar27,iVar28,fVar15,(MethodInfo *)0x0);
                    pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)renderCamera,(MethodInfo *)0x0);
                    if (pTVar29 != (Transform *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      CStack_20.r = 0.0;
                      CStack_20.g = 0.0;
                      CStack_20.b = 0.0;
                      pvVar3 = (pTVar29->fields)._._.m_CachedPtr;
                      if (pvVar3 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar29,(MethodInfo *)0x0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
                      {
                        uVar5 = func_?(&UNK_?);
                        FUN_?(uVar5,0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcRam_? = pcVar4;
                      (*pcRam_?)(pvVar3,&CStack_20);
                      CStack_23.r = CStack_20.r;
                      CStack_23.g = CStack_20.g;
                      CStack_23.b = CStack_20.b;
                      CStack_23.a = 0.0;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                (pMVar27,StringLiteral__CamWorldPos,(Vector4 *)&CStack_23,
                                 (MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pVVar39 = TypeInfo__UnityEngine__Vector3->static_fields;
                      CStack_23.r = (pVVar39->zeroVector).x;
                      CStack_23.g = (pVVar39->zeroVector).y;
                      CStack_23.b = (pVVar39->zeroVector).z;
                      CStack_23.a = 0.0;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                (pMVar27,StringLiteral__GridOrigin,(Vector4 *)&CStack_23,
                                 (MethodInfo *)0x0);
                      pVVar40 = RTSceneGrid_get_Right((Vector3 *)&CStack_23,this,(MethodInfo *)0x0)
                      ;
                      CStack_23.r = pVVar40->x;
                      CStack_23.g = pVVar40->y;
                      CStack_23.b = pVVar40->z;
                      CStack_23.a = 0.0;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                (pMVar27,StringLiteral__GridRight,(Vector4 *)&CStack_23,
                                 (MethodInfo *)0x0);
                      pVVar40 = RTSceneGrid_get_Look((Vector3 *)&CStack_23,this,(MethodInfo *)0x0);
                      CStack_23.r = pVVar40->x;
                      CStack_23.g = pVVar40->y;
                      CStack_23.b = pVVar40->z;
                      CStack_23.a = 0.0;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                (pMVar27,StringLiteral__GridLook,(Vector4 *)&CStack_23,
                                 (MethodInfo *)0x0);
                      uVar45 = MStack_24._8_8_;
                      uVar46 = MStack_24._0_8_;
                      uVar5._0_4_ = MStack_24.m00;
                      uVar5._4_4_ = MStack_24.m10;
                      uVar47._0_4_ = MStack_24.m20;
                      uVar47._4_4_ = MStack_24.m30;
                      MStack_37.m01 = MStack_24.m01;
                      MStack_37.m11 = MStack_24.m11;
                      MStack_37.m21 = MStack_24.m21;
                      MStack_37.m31 = MStack_24.m31;
                      MStack_37.m00 = MStack_24.m00;
                      MStack_37.m10 = MStack_24.m10;
                      MStack_37.m20 = MStack_24.m20;
                      MStack_37.m30 = MStack_24.m30;
                      MStack_37.m02 = MStack_24.m02;
                      MStack_37.m12 = MStack_24.m12;
                      MStack_37.m22 = MStack_24.m22;
                      MStack_37.m32 = MStack_24.m32;
                      MStack_37.m03 = MStack_24.m03;
                      MStack_37.m13 = MStack_24.m13;
                      MStack_37.m23 = MStack_24.m23;
                      MStack_37.m33 = MStack_24.m33;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                                (pMVar27,StringLiteral__TransformMatrix,&MStack_37,
                                 (MethodInfo *)0x0);
                      uVar48 = AStack_7._size._0_8_;
                      pXVar25 = (this->fields)._lookAndFeel;
                      if (pXVar25 != (XZGridLookAndFeel *)0x0) {
                        fVar15 = (pXVar25->fields)._lineColor.a * fVar9;
                        uVar49 = AStack_7._size.z;
                        if (fVar15 == 0.0) {
                          fVar10 = MStack_24.m01;
                          fVar15 = MStack_24.m11;
                          fVar16 = MStack_24.m21;
                          fVar17 = MStack_24.m31;
                        }
                        else {
                          pXVar1 = (this->fields)._settings;
                          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
                          fVar16 = (pXVar1->fields)._cellSizeX;
                          iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                   Shader_PropertyToID(StringLiteral__CellSizeX,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                                    (pMVar27,iVar28,fVar10 * fVar16,(MethodInfo *)0x0);
                          pXVar1 = (this->fields)._settings;
                          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
                          fVar16 = (pXVar1->fields)._cellSizeZ;
                          iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                   Shader_PropertyToID(StringLiteral__CellSizeZ,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                                    (pMVar27,iVar28,fVar10 * fVar16,(MethodInfo *)0x0);
                          AStack_7._8_8_ = CONCAT44(fVar15,uVar49);
                          AStack_7._size._0_8_ = uVar48;
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                    (pMVar27,StringLiteral__LineColor,(Color *)&AStack_7,
                                     (MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                                    (pMVar27,0,(MethodInfo *)0x0);
                          if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0
                             ) {
                            FUN_?();
                          }
                          pMVar41 = (MeshPool *)
                                    Singleton`1[System::Object]::
                                    Singleton_1_System_Object__1_get_Get
                                              (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__)
                          ;
                          if (pMVar41 == (MeshPool *)0x0) goto code_?;
                          pMVar42 = MeshPool::MeshPool_get_UnitQuadXZ(pMVar41,(MethodInfo *)0x0);
                          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          uVar50 = MStack_24._8_8_;
                          uVar51 = MStack_24._0_8_;
                          fVar10 = MStack_24.m01;
                          fVar15 = MStack_24.m11;
                          fVar16 = MStack_24.m21;
                          fVar17 = MStack_24.m31;
                          MStack_37.m02 = MStack_24.m02;
                          MStack_37.m12 = MStack_24.m12;
                          MStack_37.m22 = MStack_24.m22;
                          MStack_37.m32 = MStack_24.m32;
                          MStack_24.m00 = (float)uVar46;
                          MStack_24.m10 = SUB84(uVar46,4);
                          MStack_37.m00 = MStack_24.m00;
                          MStack_37.m10 = MStack_24.m10;
                          MStack_24.m20 = (float)uVar45;
                          MStack_24.m30 = SUB84(uVar45,4);
                          MStack_37.m20 = MStack_24.m20;
                          MStack_37.m30 = MStack_24.m30;
                          MStack_37.m03 = MStack_24.m03;
                          MStack_37.m13 = MStack_24.m13;
                          MStack_37.m23 = MStack_24.m23;
                          MStack_37.m33 = MStack_24.m33;
                          MStack_37.m01 = MStack_24.m01;
                          MStack_37.m11 = MStack_24.m11;
                          MStack_37.m21 = MStack_24.m21;
                          MStack_37.m31 = MStack_24.m31;
                          MStack_24._0_8_ = uVar51;
                          MStack_24._8_8_ = uVar50;
                          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                                    (pMVar42,&MStack_37,(MethodInfo *)0x0);
                        }
                        pXVar25 = (this->fields)._lookAndFeel;
                        if (pXVar25 != (XZGridLookAndFeel *)0x0) {
                          fVar9 = (pXVar25->fields)._lineColor.a * (fVar14 - fVar9);
                          if (fVar9 == 0.0) {
                            return;
                          }
                          pXVar1 = (this->fields)._settings;
                          if (pXVar1 != (XZGridSettings *)0x0) {
                            fVar14 = (pXVar1->fields)._cellSizeX;
                            iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                     Shader_PropertyToID(StringLiteral__CellSizeX,(MethodInfo *)0x0)
                            ;
                            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                                      (pMVar27,iVar28,fVar11 * fVar14,(MethodInfo *)0x0);
                            pXVar1 = (this->fields)._settings;
                            if (pXVar1 != (XZGridSettings *)0x0) {
                              fVar14 = (pXVar1->fields)._cellSizeZ;
                              iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                       Shader_PropertyToID(StringLiteral__CellSizeZ,
                                                           (MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::Material::
                              Material_SetFloatImpl
                                        (pMVar27,iVar28,fVar11 * fVar14,(MethodInfo *)0x0);
                              AStack_7._8_8_ = CONCAT44(fVar9,uVar49);
                              AStack_7._size._0_8_ = uVar48;
                              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                        (pMVar27,StringLiteral__LineColor,(Color *)&AStack_7,
                                         (MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                                        (pMVar27,0,(MethodInfo *)0x0);
                              if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c
                                  == 0) {
                                FUN_?();
                              }
                              pMVar41 = (MeshPool *)
                                        Singleton`1[System::Object]::
                                        Singleton_1_System_Object__1_get_Get
                                                  (
                                                  MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__
                                                  );
                              if (pMVar41 != (MeshPool *)0x0) {
                                pMVar42 = MeshPool::MeshPool_get_UnitQuadXZ
                                                    (pMVar41,(MethodInfo *)0x0);
                                if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0)
                                {
                                  FUN_?();
                                }
                                MStack_37.m02 = MStack_24.m02;
                                MStack_37.m12 = MStack_24.m12;
                                MStack_37.m22 = MStack_24.m22;
                                MStack_37.m32 = MStack_24.m32;
                                MStack_37.m03 = MStack_24.m03;
                                MStack_37.m13 = MStack_24.m13;
                                MStack_37.m23 = MStack_24.m23;
                                MStack_37.m33 = MStack_24.m33;
                                MStack_37.m11 = fVar15;
                                MStack_37.m01 = fVar10;
                                MStack_37.m31 = fVar17;
                                MStack_37.m21 = fVar16;
                                MStack_37._0_8_ = uVar5;
                                MStack_37._8_8_ = uVar47;
                                goto code_?;
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SnapToObjectHitPoint(GameObjectRayHit, RTSceneGrid+SnapToPointMode) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_SnapToObjectHitPoint
               (RTSceneGrid *this,GameObjectRayHit *objectHit,
               RTSceneGrid_SnapToPointMode__Enum snapMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (snapMode == RTSceneGrid_SnapToPointMode__Enum_Exact) {
    pVVar1 = RTSceneGrid_get_Normal((Vector3 *)&QStack_2,this,(MethodInfo *)0x0);
    QStack_2.x = pVVar1->x;
    QStack_2.y = pVVar1->y;
    fVar3 = pVVar1->z;
    aQStack_4[0]._0_8_ = QStack_2._0_8_;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_2.z = fVar3;
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_6.x = (pVVar5->zeroVector).x;
    QStack_6.y = (pVVar5->zeroVector).y;
    fVar7 = (pVVar5->zeroVector).z;
    fVar8 = (float)FUN_?(&QStack_2);
    if (_UNK_? < fVar8) {
      QStack_9.x = aQStack_4[0].x / fVar8;
      fVar3 = fVar3 / fVar8;
      QStack_9.y = aQStack_4[0].y / fVar8;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      QStack_9.x = (pVVar5->zeroVector).x;
      QStack_9.y = (pVVar5->zeroVector).y;
      fVar3 = (pVVar5->zeroVector).z;
    }
    fVar7 = (float)((uint)(QStack_9.y * QStack_6.y + QStack_9.x * QStack_6.x +
                           fVar3 * fVar7) ^ _UNK_?);
    if (objectHit == (GameObjectRayHit *)0x0) goto code_?;
    QStack_2.x = (objectHit->fields)._hitPoint.x;
    QStack_2.y = (objectHit->fields)._hitPoint.y;
    pXVar10 = (this->fields)._settings;
    if (pXVar10 == (XZGridSettings *)0x0) goto code_?;
    fVar3 = QStack_2.y * QStack_9.y + QStack_2.x * QStack_9.x +
             (objectHit->fields)._hitPoint.z * fVar3;
    goto code_?;
  }
  QStack_2.z = 0.0;
  QStack_2.w = 0.0;
  QStack_2.x = 1.4013e-45;
  QStack_2.y = 0.0;
  if (objectHit == (GameObjectRayHit *)0x0) goto code_?;
  gameObject = (objectHit->fields)._hitObject;
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar11 = ObjectBounds::ObjectBounds_CalcWorldOBB
                      (aOStack_12,gameObject,(ObjectBounds_QueryConfig *)&QStack_2,
                       (MethodInfo *)0x0);
  fVar7 = (pOVar11->_center).y;
  fVar3 = (pOVar11->_center).z;
  fStack_13 = (pOVar11->_rotation).x;
  fStack_14 = (pOVar11->_rotation).y;
  fStack_15 = (pOVar11->_rotation).z;
  fStack_16 = (pOVar11->_rotation).w;
  uVar17._0_4_ = (pOVar11->_size).x;
  uVar17._4_4_ = (pOVar11->_size).y;
  fVar8 = (pOVar11->_size).z;
  pVVar1 = &pOVar11->_center;
  fVar18 = pVVar1->x;
  uVar19._0_4_ = pVVar1->x;
  uVar19._4_4_ = pVVar1->y;
  uVar20._0_4_ = pVVar1->x;
  uVar20._4_4_ = pVVar1->y;
  if (pOVar11->_isValid == 0) {
    return;
  }
  fStack_21 = fVar7;
  fStack_22 = fVar3;
  pVVar1 = RTSceneGrid_get_Normal((Vector3 *)&QStack_2,this,(MethodInfo *)0x0);
  QStack_9.x = pVVar1->x;
  QStack_9.y = pVVar1->y;
  fVar23 = pVVar1->z;
  QStack_9.z = fVar23;
  QStack_6._0_8_ = QStack_9._0_8_;
  fVar24 = (float)FUN_?(&QStack_9);
  if (_UNK_? < fVar24) {
    uVar25._0_4_ = QStack_6.x / fVar24;
    fVar23 = fVar23 / fVar24;
    uVar25._4_4_ = QStack_6.y / fVar24;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar25._0_4_ = (pVVar5->zeroVector).x;
    uVar25._4_4_ = (pVVar5->zeroVector).y;
    fVar23 = (pVVar5->zeroVector).z;
  }
  uVar26 = _UNK_?;
  QStack_6.y = SUB84(uVar25,4);
  fVar27 = QStack_6.y;
  QStack_6.x = (float)uVar25;
  fVar24 = QStack_6.x;
  fVar7 = (float)((uint)(fVar7 * QStack_6.y + fVar18 * QStack_6.x + fVar3 * fVar23) ^
                  _UNK_?);
  QStack_6._0_8_ = uVar20;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_2.y = fStack_14;
  QStack_2.x = fStack_13;
  QStack_2.z = fStack_15;
  QStack_2.w = fStack_16;
  QStack_9._0_8_ = uVar17;
  QStack_9.z = fVar8;
  aQStack_4[0]._0_8_ = uVar19;
  aQStack_4[0].z = fVar3;
  points = BoxMath::BoxMath_CalcBoxCornerPoints
                     ((Vector3 *)aQStack_4,(Vector3 *)&QStack_9,&QStack_2,(MethodInfo *)0x0);
  QStack_2.x = (objectHit->fields)._hitPoint.x;
  QStack_2.y = (objectHit->fields)._hitPoint.y;
  if (fVar27 * QStack_2.y + fVar24 * QStack_2.x + fVar23 * (objectHit->fields)._hitPoint.z +
      fVar7 < 0.0) {
    QStack_2.w = fVar7;
    QStack_2.z = fVar23;
    QStack_2._0_8_ = uVar25;
    uVar28 = PlaneEx::PlaneEx_GetFurthestPtBehind((Plane *)&QStack_2,points,(MethodInfo *)0x0);
    if (-1 < (int)uVar28) {
      if (points == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((uint)(points->fields)._size <= uVar28) goto code_?;
      pVVar29 = (points->fields)._items;
      if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar29->max_length <= uVar28) goto code_?;
code_?:
      QStack_6.x = pVVar29->vector[(int)uVar28].x;
      QStack_6.y = pVVar29->vector[(int)uVar28].y;
      fVar3 = pVVar29->vector[(int)uVar28].z;
    }
  }
  else {
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
    uVar28 = 0xffffffff;
    uVar30 = 0;
    if (points == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    uVar31 = (points->fields)._size;
    lVar32 = 0;
    fVar8 = _UNK_?;
    for (; (int)uVar30 < (int)uVar31; uVar30 = uVar30 + 1) {
      if (uVar31 <= uVar30) goto code_?;
      pVVar29 = (points->fields)._items;
      if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar29->max_length <= uVar30) goto code_?;
      QStack_2._0_8_ = *(undefined8 *)((longlong)&pVVar29->vector[0].x + lVar32);
      fVar18 = fVar27 * QStack_2.y + fVar24 * QStack_2.x +
               fVar23 * *(float *)((longlong)&pVVar29->vector[0].z + lVar32) + fVar7;
      if ((0.0 < fVar18) && (fVar8 < fVar18)) {
        fVar8 = fVar18;
        uVar28 = uVar30;
      }
      lVar32 = lVar32 + 0xc;
    }
    if (-1 < (int)uVar28) {
      if (uVar31 <= uVar28) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar33 = (code *)swi(3);
        (*pcVar33)();
        return;
      }
      pVVar29 = (points->fields)._items;
      if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar29->max_length <= uVar28) {
code_?:
        FUN_?();
        pcVar33 = (code *)swi(3);
        (*pcVar33)();
        return;
      }
      goto code_?;
    }
  }
  pVVar1 = RTSceneGrid_get_Normal((Vector3 *)&QStack_2,this,(MethodInfo *)0x0);
  uVar34._0_4_ = pVVar1->x;
  uVar34._4_4_ = pVVar1->y;
  fVar8 = pVVar1->z;
  QStack_9._0_8_ = uVar34;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  QStack_2.x = (pVVar5->zeroVector).x;
  QStack_2.y = (pVVar5->zeroVector).y;
  fVar7 = (pVVar5->zeroVector).z;
  aQStack_4[0]._0_8_ = uVar34;
  aQStack_4[0].z = fVar8;
  fVar18 = (float)FUN_?(aQStack_4);
  if (_UNK_? < fVar18) {
    QStack_9.x = QStack_9.x / fVar18;
    fVar8 = fVar8 / fVar18;
    QStack_9.y = QStack_9.y / fVar18;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_9.x = (pVVar5->zeroVector).x;
    QStack_9.y = (pVVar5->zeroVector).y;
    fVar8 = (pVVar5->zeroVector).z;
  }
  fVar7 = (float)((uint)(QStack_2.y * QStack_9.y + QStack_2.x * QStack_9.x +
                         fVar8 * fVar7) ^ uVar26);
  pXVar10 = (this->fields)._settings;
  if (pXVar10 == (XZGridSettings *)0x0) {
code_?:
    FUN_?();
    pcVar33 = (code *)swi(3);
    (*pcVar33)();
    return;
  }
  fVar3 = QStack_9.y * QStack_6.y + QStack_9.x * QStack_6.x + fVar8 * fVar3;
code_?:
  (pXVar10->fields)._yOffset = fVar3 + fVar7;
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_Update_SystemCall
               (RTSceneGrid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pXVar1 = (this->fields)._settings;
  if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
  if ((pXVar1->fields)._isVisible == 0) {
    return;
  }
  pSVar2 = (this->fields)._hotkeys;
  if ((pSVar2 == (SceneGridHotkeys *)0x0) ||
     (pHVar3 = (pSVar2->fields)._gridUp, pHVar3 == (Hotkeys *)0x0)) goto code_?;
  bVar4 = Hotkeys::Hotkeys_IsActiveInFrame(pHVar3,1,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    pSVar2 = (this->fields)._hotkeys;
    if ((pSVar2 == (SceneGridHotkeys *)0x0) ||
       (pHVar3 = (pSVar2->fields)._gridDown, pHVar3 == (Hotkeys *)0x0)) goto code_?;
    bVar4 = Hotkeys::Hotkeys_IsActiveInFrame(pHVar3,1,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pXVar1 = (this->fields)._settings;
      if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
      if ((pXVar1->fields)._isVisible != 0) {
        fVar5 = (pXVar1->fields)._yOffset - (pXVar1->fields)._upDownStep;
        goto code_?;
      }
    }
  }
  else {
    pXVar1 = (this->fields)._settings;
    if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
    if ((pXVar1->fields)._isVisible != 0) {
      fVar5 = (pXVar1->fields)._yOffset + (pXVar1->fields)._upDownStep;
code_?:
      (pXVar1->fields)._yOffset = fVar5;
    }
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar6 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar6 != (Object *)0x0) && (pOVar6[2].klass != (Object__Class *)0x0)) {
    cVar7 = FUN_?(2,TypeInfo__RTG__IInputDevice);
    if (cVar7 == '\0') {
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar6 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      if ((pOVar6 == (Object *)0x0) || (pOVar6[2].klass == (Object__Class *)0x0))
      goto code_?;
      cVar7 = FUN_?(10,TypeInfo__RTG__IInputDevice);
      if (cVar7 != '\0') {
        pSVar2 = (this->fields)._hotkeys;
        if ((pSVar2 == (SceneGridHotkeys *)0x0) ||
           (pHVar3 = (pSVar2->fields)._snapToCursorPickPoint, pHVar3 == (Hotkeys *)0x0))
        goto code_?;
        bVar4 = Hotkeys::Hotkeys_IsActive(pHVar3,1,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pSVar8 = RTSceneGrid_GetSceneHitForGridSnap(this,(MethodInfo *)0x0);
          if (pSVar8 == (SceneRaycastHit *)0x0) goto code_?;
          if ((pSVar8->fields)._objectHit != (GameObjectRayHit *)0x0) {
            pGVar9 = (pSVar8->fields)._objectHit;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__RTG__BoxMath);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__RTG__ObjectBounds);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar10 = RTSceneGrid_get_Normal(&VStack_11,this,(MethodInfo *)0x0);
            VStack_11.x = pVVar10->x;
            VStack_11.y = pVVar10->y;
            fVar5 = pVVar10->z;
            aVStack_12[0]._0_8_ = VStack_11._0_8_;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_14._0_4_ = (pVVar13->zeroVector).x;
            uStack_14._4_4_ = (pVVar13->zeroVector).y;
            fVar15 = (pVVar13->zeroVector).z;
            VStack_11.z = fVar5;
            fVar16 = (float)FUN_?(&VStack_11);
            if (_UNK_? < fVar16) {
              fVar5 = fVar5 / fVar16;
              uVar17 = CONCAT44(aVStack_12[0].y / fVar16,aVStack_12[0].x / fVar16);
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar17._0_4_ = (pVVar13->zeroVector).x;
              uVar17._4_4_ = (pVVar13->zeroVector).y;
              fVar5 = (pVVar13->zeroVector).z;
            }
            uStack_18._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
            uStack_18._0_4_ = (float)uVar17;
            if (pGVar9 != (GameObjectRayHit *)0x0) {
              VStack_11.x = (pGVar9->fields)._hitPoint.x;
              VStack_11.y = (pGVar9->fields)._hitPoint.y;
              pXVar1 = (this->fields)._settings;
              if (pXVar1 != (XZGridSettings *)0x0) {
                (pXVar1->fields)._yOffset =
                     VStack_11.y * uStack_18._4_4_ + VStack_11.x * (float)uStack_18 +
                     (pGVar9->fields)._hitPoint.z * fVar5 +
                     (float)((uint)(uStack_18._4_4_ * uStack_14._4_4_ +
                                    (float)uStack_18 * (float)uStack_14 + fVar5 * fVar15) ^
                            _UNK_?);
                return;
              }
            }
            uStack_18 = uVar17;
            FUN_?();
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* RTSceneGrid() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid__ctor(RTSceneGrid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__MonoSingleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SceneGridHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__XZGridLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__XZGridSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (SceneGridHotkeys *)FUN_?(TypeInfo__RTG__SceneGridHotkeys);
  SceneGridHotkeys::SceneGridHotkeys__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._hotkeys = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._hotkeys >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (XZGridSettings *)FUN_?(TypeInfo__RTG__XZGridSettings);
  bVar1 = cRam_? == '\0';
  (this_01->fields)._isVisible = 1;
  (this_01->fields)._cellSizeX = 1.0;
  (this_01->fields)._cellSizeZ = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar8 = (pVVar6->zeroVector).z;
  (this_01->fields)._rotationAngles.x = (pVVar6->zeroVector).x;
  (this_01->fields)._rotationAngles.y = fVar7;
  (this_01->fields)._rotationAngles.z = fVar8;
  (this_01->fields)._upDownStep = 1.0;
  Settings::Settings__ctor((Settings *)this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._settings = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_02 = (XZGridLookAndFeel *)FUN_?(TypeInfo__RTG__XZGridLookAndFeel);
  uVar9 = _UNK_?;
  uVar10 = _UNK_?;
  (this_02->fields)._lineColor.r = (float)_UNK_?;
  uVar11 = _UNK_?;
  (this_02->fields)._lineColor.g = (float)uVar10;
  _UNK_? = (undefined4)uVar9;
  _UNK_? = SUB84(uVar9,4);
  uVar10 = _UNK_?;
  (this_02->fields)._lineColor.b = (float)_UNK_?;
  _UNK_? = uVar11;
  (this_02->fields)._lineColor.a = (float)uVar10;
  (this_02->fields)._useCellFading = 1;
  Settings::Settings__ctor((Settings *)this_02,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._lookAndFeel = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._lookAndFeel >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_03 = (List_1_UnityEngine_Camera_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._renderIgnoreCameras = this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._renderIgnoreCameras >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).field_0x1c == 0) {
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
  return;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_Look
                    (Vector3 *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pQVar1 = RTSceneGrid_get_Rotation(aQStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = fVar5 + fVar5;
  fVar9 = fVar4 + fVar4;
  fVar10 = (fVar3 + fVar3) * fVar3;
  uVar11 = (pVVar7->forwardVector).x;
  uVar12 = (pVVar7->forwardVector).y;
  fVar13 = (pVVar7->forwardVector).z;
  fVar14 = (fVar3 + fVar3) * fVar6;
  fVar15 = _UNK_? - (fVar8 * fVar5 + fVar10);
  fVar10 = _UNK_? - (fVar9 * fVar4 + fVar10);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar8 * fVar5 + fVar9 * fVar4)) * (float)uVar11 +
       (fVar9 * fVar3 - fVar8 * fVar6) * (float)uVar12 + (fVar9 * fVar6 + fVar8 * fVar3) * fVar13;
  __return_storage_ptr__->y =
       fVar15 * (float)uVar12 + (fVar8 * fVar6 + fVar9 * fVar3) * (float)uVar11 +
       (fVar8 * fVar4 - fVar14) * fVar13;
  __return_storage_ptr__->z =
       (fVar8 * fVar3 - fVar9 * fVar6) * (float)uVar11 + (fVar14 + fVar8 * fVar4) * (float)uVar12 +
       fVar10 * fVar13;
  return __return_storage_ptr__;
}


/* Vector3 get_Normal() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_Normal
                    (Vector3 *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pQVar1 = RTSceneGrid_get_Rotation(aQStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = fVar5 + fVar5;
  fVar9 = fVar4 + fVar4;
  fVar10 = (fVar3 + fVar3) * fVar3;
  uVar11 = (pVVar7->upVector).x;
  uVar12 = (pVVar7->upVector).y;
  fVar13 = (pVVar7->upVector).z;
  fVar14 = (fVar3 + fVar3) * fVar6;
  fVar15 = _UNK_? - (fVar8 * fVar5 + fVar10);
  fVar10 = _UNK_? - (fVar9 * fVar4 + fVar10);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar8 * fVar5 + fVar9 * fVar4)) * (float)uVar11 +
       (fVar9 * fVar3 - fVar8 * fVar6) * (float)uVar12 + (fVar9 * fVar6 + fVar8 * fVar3) * fVar13;
  __return_storage_ptr__->y =
       fVar15 * (float)uVar12 + (fVar8 * fVar6 + fVar9 * fVar3) * (float)uVar11 +
       (fVar8 * fVar4 - fVar14) * fVar13;
  __return_storage_ptr__->z =
       (fVar8 * fVar3 - fVar9 * fVar6) * (float)uVar11 + (fVar14 + fVar8 * fVar4) * (float)uVar12 +
       fVar10 * fVar13;
  return __return_storage_ptr__;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_Right
                    (Vector3 *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pQVar1 = RTSceneGrid_get_Rotation(aQStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = fVar5 + fVar5;
  fVar9 = fVar4 + fVar4;
  fVar10 = (fVar3 + fVar3) * fVar3;
  uVar11 = (pVVar7->rightVector).x;
  uVar12 = (pVVar7->rightVector).y;
  fVar13 = (pVVar7->rightVector).z;
  fVar14 = (fVar3 + fVar3) * fVar6;
  fVar15 = _UNK_? - (fVar8 * fVar5 + fVar10);
  fVar10 = _UNK_? - (fVar9 * fVar4 + fVar10);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar8 * fVar5 + fVar9 * fVar4)) * (float)uVar11 +
       (fVar9 * fVar3 - fVar8 * fVar6) * (float)uVar12 + (fVar9 * fVar6 + fVar8 * fVar3) * fVar13;
  __return_storage_ptr__->y =
       fVar15 * (float)uVar12 + (fVar8 * fVar6 + fVar9 * fVar3) * (float)uVar11 +
       (fVar8 * fVar4 - fVar14) * fVar13;
  __return_storage_ptr__->z =
       (fVar8 * fVar3 - fVar9 * fVar6) * (float)uVar11 + (fVar14 + fVar8 * fVar4) * (float)uVar12 +
       fVar10 * fVar13;
  return __return_storage_ptr__;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_Rotation
          (Quaternion *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 == (XZGridSettings *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pQVar3 = (Quaternion *)(*pcVar2)();
    return pQVar3;
  }
  uVar4 = (pXVar1->fields)._rotationAngles.x;
  uVar5 = (pXVar1->fields)._rotationAngles.y;
  fStack_6 = (pXVar1->fields)._rotationAngles.z * _UNK_?;
  uStack_7 = CONCAT44((float)uVar5 * _UNK_?,(float)uVar4 * _UNK_?);
  uStack_8 = 0;
  uStack_9 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar2 = (code *)swi(3);
    pQVar3 = (Quaternion *)(*pcVar2)();
    return pQVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&uStack_7,&uStack_8);
  __return_storage_ptr__->x = (float)(undefined4)uStack_8;
  __return_storage_ptr__->y = (float)uStack_8._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_9;
  __return_storage_ptr__->w = (float)uStack_9._4_4_;
  return __return_storage_ptr__;
}


/* Matrix4x4 get_WorldMatrix() */

Matrix4x4 *
Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_WorldMatrix
          (Matrix4x4 *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pVVar1 = RTSceneGrid_get_Normal(&VStack_2,this,(MethodInfo *)0x0);
  pXVar3 = (this->fields)._settings;
  if (pXVar3 == (XZGridSettings *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pMVar5 = (Matrix4x4 *)(*pcVar4)();
    return pMVar5;
  }
  uStack_6._0_4_ = pVVar1->x;
  uStack_6._4_4_ = pVVar1->y;
  fVar7 = (pXVar3->fields)._yOffset;
  fVar8 = fVar7 * (float)(undefined4)uStack_6;
  fVar9 = fVar7 * pVVar1->z;
  fVar7 = fVar7 * (float)uStack_6._4_4_;
  pQVar10 = RTSceneGrid_get_Rotation(&QStack_11,this,(MethodInfo *)0x0);
  uStack_12._0_4_ = pQVar10->x;
  uStack_12._4_4_ = pQVar10->y;
  uStack_13._0_4_ = pQVar10->z;
  uStack_13._4_4_ = pQVar10->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_6._0_4_ = (pVVar14->oneVector).x;
  uStack_6._4_4_ = (pVVar14->oneVector).y;
  fStack_15 = (pVVar14->oneVector).z;
  VStack_2.y = fVar7;
  VStack_2.x = fVar8;
  uStack_16 = 0;
  uStack_17 = 0;
  uStack_18 = 0;
  uStack_19 = 0;
  uStack_20 = 0;
  uStack_21 = 0;
  uStack_22 = 0;
  uStack_23 = 0;
  pcVar4 = pcRam_?;
  VStack_2.z = fVar9;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar4 = (code *)swi(3);
    pMVar5 = (Matrix4x4 *)(*pcVar4)();
    return pMVar5;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(&VStack_2,&uStack_12,&uStack_6,&uStack_16);
  __return_storage_ptr__->m00 = (float)(undefined4)uStack_16;
  __return_storage_ptr__->m10 = (float)uStack_16._4_4_;
  __return_storage_ptr__->m20 = (float)(undefined4)uStack_17;
  __return_storage_ptr__->m30 = (float)uStack_17._4_4_;
  __return_storage_ptr__->m01 = (float)(undefined4)uStack_18;
  __return_storage_ptr__->m11 = (float)uStack_18._4_4_;
  __return_storage_ptr__->m21 = (float)(undefined4)uStack_19;
  __return_storage_ptr__->m31 = (float)uStack_19._4_4_;
  __return_storage_ptr__->m02 = (float)(undefined4)uStack_20;
  __return_storage_ptr__->m12 = (float)uStack_20._4_4_;
  __return_storage_ptr__->m22 = (float)(undefined4)uStack_21;
  __return_storage_ptr__->m32 = (float)uStack_21._4_4_;
  __return_storage_ptr__->m03 = (float)(undefined4)uStack_22;
  __return_storage_ptr__->m13 = (float)uStack_22._4_4_;
  __return_storage_ptr__->m23 = (float)(undefined4)uStack_23;
  __return_storage_ptr__->m33 = (float)uStack_23._4_4_;
  return __return_storage_ptr__;
}


/* Plane get_WorldPlane() */

Plane * Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_WorldPlane
                  (Plane *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pVVar1 = RTSceneGrid_get_Normal(aVStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = RTSceneGrid_get_Normal(aVStack_2,this,(MethodInfo *)0x0);
  pXVar5 = (this->fields)._settings;
  if (pXVar5 != (XZGridSettings *)0x0) {
    fVar6 = (pXVar5->fields)._yOffset;
    uVar7 = pVVar1->x;
    uVar8 = pVVar1->y;
    fStack_9 = fVar6 * pVVar1->z;
    (__return_storage_ptr__->m_Normal).x = 0.0;
    (__return_storage_ptr__->m_Normal).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
    uStack_10 = CONCAT44(fVar6 * (float)uVar8,fVar6 * (float)uVar7);
    aVStack_2[0]._0_8_ = uVar3;
    aVStack_2[0].z = fVar4;
    FUN_?(__return_storage_ptr__,aVStack_2,&uStack_10);
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pPVar12 = (Plane *)(*pcVar11)();
  return pPVar12;
}


/* Single get_YOffset() */

float Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_YOffset
                (RTSceneGrid *this,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    return (pXVar1->fields)._yOffset;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Void set_YOffset(Single) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_set_YOffset
               (RTSceneGrid *this,float value,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    (pXVar1->fields)._yOffset = value;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

