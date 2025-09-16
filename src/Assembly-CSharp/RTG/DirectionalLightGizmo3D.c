
/* Void GenerateLightRayEmissionPoints(Camera) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::
     DirectionalLightGizmo3D_GenerateLightRayEmissionPoints
               (DirectionalLightGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetLight;
  if ((pLVar1 != (Light *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pLVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    fStack_7 = fVar6;
    uStack_8 = uStack_5;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      VStack_4.y = (float)TypeInfo__RTG__CameraEx;
      VStack_4.x = (float)&UNK_?;
      func_?();
    }
    worldPos.z = fVar6;
    worldPos.x = (float)(undefined4)uStack_8;
    worldPos.y = uStack_8._4_4_;
    fVar6 = CameraEx::CameraEx_EstimateZoomFactor(camera,worldPos,(MethodInfo *)0x0);
    if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0) {
      pDVar9 = (this->fields)._lookAndFeel;
      if (pDVar9 == (DirectionalLightGizmo3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pDVar9 = (this->fields)._sharedLookAndFeel;
    }
    fVar6 = fVar6 * (pDVar9->fields)._sourceCircleRadius;
    pLVar1 = (this->fields)._targetLight;
    if ((pLVar1 != (Light *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pLVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      uStack_10._0_4_ = pVVar3->x;
      uStack_10._4_4_ = pVVar3->y;
      fStack_11 = pVVar3->z;
      pLVar1 = (this->fields)._targetLight;
      if ((pLVar1 != (Light *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pLVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           (&VStack_4,pTVar2,(MethodInfo *)0x0);
        pLVar12 = (this->fields)._lightRayEmissionPoints;
        uStack_13._0_4_ = pVVar3->x;
        uStack_13._4_4_ = pVVar3->y;
        fStack_14 = pVVar3->z;
        if (pLVar12 != (List_1_UnityEngine_Vector3_ *)0x0) {
          piVar15 = &(pLVar12->fields)._version;
          *piVar15 = *piVar15 + 1;
          (pLVar12->fields)._size = 0;
          if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0) {
            pDVar9 = (this->fields)._lookAndFeel;
            if (pDVar9 == (DirectionalLightGizmo3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pDVar9 = (this->fields)._sharedLookAndFeel;
          }
          iVar16 = 0;
          fVar17 = _UNK_? / (float)((pDVar9->fields)._numLightRays + -1);
          uStack_8 = CONCAT44(fVar17,(undefined4)uStack_8);
          while( true ) {
            while( true ) {
              if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0) {
                pDVar9 = (this->fields)._lookAndFeel;
                if (pDVar9 == (DirectionalLightGizmo3DLookAndFeel *)0x0) goto code_?;
              }
              else {
                pDVar9 = (this->fields)._sharedLookAndFeel;
              }
              if ((pDVar9->fields)._numLightRays <= iVar16) {
                return;
              }
              this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                        (this->fields)._lightRayEmissionPoints;
              fStack_18 = (float)iVar16 * fVar17 * _UNK_?;
              dVar19 = (double)fStack_18;
              func_?();
              fVar17 = (float)dVar19;
              fStack_20 = (float)uStack_5 + (float)uStack_10 * fVar17 * fVar6;
              fStack_21 = uStack_5._4_4_ + uStack_10._4_4_ * fVar17 * fVar6;
              fStack_22 = fStack_7 + fStack_11 * fVar17 * fVar6;
              dVar19 = (double)fStack_18;
              func_?();
              pMVar23 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              ;
              fVar17 = (float)dVar19;
              puStack_24 = (undefined *)((float)uStack_13 * fVar17 * fVar6 + fStack_20);
              pCStack_25 = (CameraEx__Class *)(uStack_13._4_4_ * fVar17 * fVar6 + fStack_21);
              fStack_26 = fStack_14 * fVar17 * fVar6 + fStack_22;
              if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0)
              goto code_?;
              piVar15 = &(this_00->fields)._version;
              *piVar15 = *piVar15 + 1;
              pPVar27 = (this_00->fields)._items;
              if (pPVar27 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
              uVar28 = (this_00->fields)._size;
              if (uVar28 < pPVar27->max_length) break;
              item.FirstAxisSign = (int32_t)pCStack_25;
              item.Quadrant = (int32_t)puStack_24;
              item.SecondAxisSign = (int32_t)fStack_26;
              mscorlib.dll::System::Collections::Generic::List`1[RTG::
              PlaneIdHelper+PlaneQuadrantInfo]::
              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                        (this_00,item,pMVar23->klass->rgctx_data[0xe].method);
              iVar16 = iVar16 + 1;
              fVar17 = uStack_8._4_4_;
            }
            (this_00->fields)._size = uVar28 + 1;
            VStack_4.x = (float)puStack_24;
            VStack_4.y = (float)pCStack_25;
            VStack_4.z = fStack_26;
            if (pPVar27->max_length <= uVar28) break;
            iVar16 = iVar16 + 1;
            pPVar27->vector[uVar28].Quadrant = (int32_t)puStack_24;
            pPVar27->vector[uVar28].FirstAxisSign = (int32_t)pCStack_25;
            pPVar27->vector[uVar28].SecondAxisSign = (int32_t)fStack_26;
            fVar17 = uStack_8._4_4_;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Boolean IsTargetReady() */

bool Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_IsTargetReady
               (DirectionalLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetLight;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pLVar1 = (this->fields)._targetLight;
  if (pLVar1 != (Light *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pLVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pLVar1 = (this->fields)._targetLight;
    if ((pLVar1 != (Light *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pLVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
    {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return 0;
      }
      pLVar1 = (this->fields)._targetLight;
      if (pLVar1 != (Light *)0x0) {
        LVar3 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_type
                          (pLVar1,(MethodInfo *)0x0);
        return LVar3 == LightType__Enum_Directional;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_OnAttached
               (DirectionalLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                   );
    cRam_? = '\x01';
  }
  gizmo = (this->fields)._._gizmo;
  pGVar1 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
  GizmoCap2D::GizmoCap2D__ctor(pGVar1,gizmo,700,(MethodInfo *)0x0);
  (this->fields)._dirSnapTick = pGVar1;
  func_?(&(this->fields)._dirSnapTick,pGVar1);
  this_00 = (GizmoCap3D *)(this->fields)._dirSnapTick;
  if (this_00 == (GizmoCap3D *)0x0) goto code_?;
  GizmoCap3D::GizmoCap3D_set_DragSession
            (this_00,(IGizmoDragSession *)(this->fields)._dummyDragSession,(MethodInfo *)0x0);
  if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0) {
    pDVar2 = (this->fields)._lookAndFeel;
    if (pDVar2 == (DirectionalLightGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pDVar2 = (this->fields)._sharedLookAndFeel;
  }
  pGVar1 = (this->fields)._dirSnapTick;
  if (pGVar1 == (GizmoCap2D *)0x0) goto code_?;
  pGVar3 = (pDVar2->fields)._dirSnapTickLookAndFeel;
  (pGVar1->fields)._sharedLookAndFeel = pGVar3;
  func_?(&(pGVar1->fields)._sharedLookAndFeel,pGVar3);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar6 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
  uVar7 = pVVar6->y;
  circleCenter.y = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  circleCenter.x = (float)uVar7;
  circleCenter.z = fVar4;
  circleRight.z = fVar5;
  circleRight.x = 1.4013e-43;
  circleRight.y = 0.0;
  pLVar8 = PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
                      (circleCenter,1.0,circleRight,*pVVar6,100,(MethodInfo *)0x0);
  (this->fields)._sourceCirclePoints = pLVar8;
  func_?(&(this->fields)._sourceCirclePoints);
  pMVar9 = 
  MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
  pSVar10 = (this->fields)._raycastFilter;
  if ((pSVar10 == (SceneRaycastFilter *)0x0) ||
     (pLVar11 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pSVar10->fields)._allowedObjectTypes,
     pLVar11 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
  goto code_?;
  piVar12 = &(pLVar11->fields)._version;
  *piVar12 = *piVar12 + 1;
  pRVar13 = (pLVar11->fields)._items;
  if (pRVar13 == (RegexCharClass_SingleRange__Array *)0x0) goto code_?;
  uVar14 = (pLVar11->fields)._size;
  if (uVar14 < pRVar13->max_length) {
    (pLVar11->fields)._size = uVar14 + 1;
    if (uVar14 < pRVar13->max_length) {
      pRVar13->vector[uVar14].First = 1;
      pRVar13->vector[uVar14].Last = 0;
      goto code_?;
    }
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
              (pLVar11,(RegexCharClass_SingleRange)0x1,pMVar9->klass->rgctx_data[0xe].method);
code_?:
    pMVar9 = 
    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
    pSVar10 = (this->fields)._raycastFilter;
    if ((pSVar10 == (SceneRaycastFilter *)0x0) ||
       (pLVar11 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pSVar10->fields)._allowedObjectTypes,
       pLVar11 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
    goto code_?;
    piVar12 = &(pLVar11->fields)._version;
    *piVar12 = *piVar12 + 1;
    pRVar13 = (pLVar11->fields)._items;
    if (pRVar13 == (RegexCharClass_SingleRange__Array *)0x0) goto code_?;
    uVar14 = (pLVar11->fields)._size;
    if (pRVar13->max_length <= uVar14) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                (pLVar11,(RegexCharClass_SingleRange)0x2,pMVar9->klass->rgctx_data[0xe].method);
      return;
    }
    (pLVar11->fields)._size = uVar14 + 1;
    if (uVar14 < pRVar13->max_length) {
      pRVar13->vector[uVar14].First = 2;
      pRVar13->vector[uVar14].Last = 0;
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::
     DirectionalLightGizmo3D_OnGizmoAttemptHandleDragBegin
               (DirectionalLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._dirSnapTick;
  if (this_00 != (GizmoCap2D *)0x0) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    if (((void *)handleId != pvVar1) ||
       (bVar2 = DirectionalLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0), bVar2 == 0)) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->oneVector).y;
    fVar5 = (pVVar3->oneVector).z;
    (this->fields)._dummySessionWorkData.Axis.x = (pVVar3->oneVector).x;
    (this->fields)._dummySessionWorkData.Axis.y = fVar4;
    (this->fields)._dummySessionWorkData.Axis.z = fVar5;
    this_01 = (this->fields)._dummyDragSession;
    if (this_01 != (GizmoSglAxisOffsetDrag3D *)0x0) {
      GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
                (this_01,(this->fields)._dummySessionWorkData,(MethodInfo *)0x0);
      this_02 = (this->fields)._preChangeSnapshot;
      if (this_02 != (Light3DSnapshot *)0x0) {
        Light3DSnapshot::Light3DSnapshot_Snapshot
                  (this_02,(this->fields)._targetLight,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_OnGizmoDragEnd
               (DirectionalLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Light3DChangedAction);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._postChangeSnapshot;
  if (pLVar1 != (Light3DSnapshot *)0x0) {
    Light3DSnapshot::Light3DSnapshot_Snapshot(pLVar1,(this->fields)._targetLight,(MethodInfo *)0x0);
    pLVar1 = (this->fields)._preChangeSnapshot;
    postChangeSnapshot = (this->fields)._postChangeSnapshot;
    this_00 = (Light3DChangedAction *)func_?(TypeInfo__RTG__Light3DChangedAction);
    Light3DChangedAction::Light3DChangedAction__ctor
              (this_00,pLVar1,postChangeSnapshot,(MethodInfo *)0x0);
    if (this_00 != (Light3DChangedAction *)0x0) {
      Light3DChangedAction::Light3DChangedAction_Execute(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_OnGizmoDragUpdate
               (DirectionalLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = DirectionalLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._dirSnapTick;
  if (this_00 != (GizmoCap2D *)0x0) {
    pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar2) {
      DirectionalLightGizmo3D_SnapDirection(this,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._._gizmo;
    if (this_01 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_01,(MethodInfo *)0x0);
      DirectionalLightGizmo3D_UpdateTicks(this,camera,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_OnGizmoRender
               (DirectionalLightGizmo3D *this,Camera *camera,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff00;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff00;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
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
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  LStack_8._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current.Quadrant = 0;
  LStack_8._current.FirstAxisSign = 0;
  LStack_8._current.SecondAxisSign = 0;
  bVar9 = DirectionalLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar9 == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_4;
    return;
  }
  pLVar10 = (this->fields)._targetLight;
  if ((pLVar10 != (Light *)0x0) &&
     (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pLVar10,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff70,pTVar11,(MethodInfo *)0x0);
    uStack_13._0_4_ = pVVar12->x;
    uStack_13._4_4_ = pVVar12->y;
    pSVar14 = (String *)pVVar12->z;
    uStack_15 = uStack_13;
    pSStack_16 = pSVar14;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    worldPos.z = (float)pSVar14;
    worldPos.x = (float)(undefined4)uStack_15;
    worldPos.y = (float)uStack_15._4_4_;
    fStack_17 = CameraEx::CameraEx_EstimateZoomFactor(camera,worldPos,(MethodInfo *)0x0);
    if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0) {
      pDVar18 = (this->fields)._lookAndFeel;
      if (pDVar18 == (DirectionalLightGizmo3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pDVar18 = (this->fields)._sharedLookAndFeel;
    }
    fVar19 = (pDVar18->fields)._sourceCircleRadius * fStack_17;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pLStack_20 = (List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if (pLStack_20 != (List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pLStack_20[3]._version != 0) {
        if (1 < *(int *)(pLStack_20[3]._version + 0xc)) {
          DirectionalLightGizmo3D_UpdateTicks(this,camera,(MethodInfo *)0x0);
        }
        if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
        }
        method_00 = (MethodInfo *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
        if (method_00 != (MethodInfo *)0x0) {
          GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                    ((GizmoLineMaterial *)method_00,(MethodInfo *)0x0);
          if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0) {
            pDVar18 = (this->fields)._lookAndFeel;
            if (pDVar18 == (DirectionalLightGizmo3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pDVar18 = (this->fields)._sharedLookAndFeel;
          }
          GizmoLineMaterial::GizmoLineMaterial_SetColor
                    ((GizmoLineMaterial *)method_00,(pDVar18->fields)._sourceCircleBorderColor,
                     (MethodInfo *)0x0);
          pMVar21 = GizmoLineMaterial::GizmoLineMaterial_get_Material
                              ((GizmoLineMaterial *)method_00,(MethodInfo *)0x0);
          if (pMVar21 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                      (pMVar21,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
            pLVar10 = (this->fields)._targetLight;
            if ((pLVar10 != (Light *)0x0) &&
               (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pLVar10,(MethodInfo *)0x0),
               pTVar11 != (Transform *)0x0)) {
              pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                  ((Quaternion *)&stack0xffffff58,pTVar11,(MethodInfo *)0x0);
              pLStack_20 = (List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x3f800000;
              pos.z = (float)pSStack_16;
              pos.x = (float)uStack_13;
              pos.y = uStack_13._4_4_;
              s.y = fVar19;
              s.x = fVar19;
              s.z = 1.0;
              pMVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                  ((Matrix4x4 *)&stack0xffffff10,pos,*pQVar22,s,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix(*pMVar23,(MethodInfo *)0x0)
              ;
              GLRenderer::GLRenderer_DrawLines3D
                        ((this->fields)._sourceCirclePoints,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
              this_00 = (this->fields)._._gizmo;
              if (this_00 != (Gizmo *)0x0) {
                pSStack_16 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                             PointerEventBase`1[System::Object]::
                             PointerEventBase_1_System_Object__get_pointerType
                                       ((PointerEventBase_1_System_Object_ *)this_00,
                                        (MethodInfo *)0x0);
                pGVar24 = (this->fields)._dirSnapTick;
                if (pGVar24 != (GizmoCap2D *)0x0) {
                  pSVar14 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                            AndroidJavaObject__GetRawClass
                                      ((AndroidJavaObject *)pGVar24,(MethodInfo *)0x0);
                  if (pSStack_16 == pSVar14) {
                    if ((this->fields)._sharedLookAndFeel ==
                        (DirectionalLightGizmo3DLookAndFeel *)0x0) {
                      pDVar18 = (this->fields)._lookAndFeel;
                      if (pDVar18 == (DirectionalLightGizmo3DLookAndFeel *)0x0)
                      goto code_?;
                    }
                    else {
                      pDVar18 = (this->fields)._sharedLookAndFeel;
                    }
                    GizmoLineMaterial::GizmoLineMaterial_SetColor
                              ((GizmoLineMaterial *)method_00,(pDVar18->fields)._dirSnapSegmentColor
                               ,(MethodInfo *)0x0);
                    pMVar21 = GizmoLineMaterial::GizmoLineMaterial_get_Material
                                        ((GizmoLineMaterial *)method_00,(MethodInfo *)0x0);
                    if (pMVar21 == (Material *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                              (pMVar21,0,(MethodInfo *)0x0);
                    pLVar10 = (this->fields)._targetLight;
                    if ((pLVar10 == (Light *)0x0) ||
                       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_transform((Component *)pLVar10,(MethodInfo *)0x0),
                       pTVar11 == (Transform *)0x0)) goto code_?;
                    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffff70,pTVar11,(MethodInfo *)0x0);
                    GLRenderer::GLRenderer_DrawLine3D
                              (*pVVar12,(this->fields)._pickedWorldSnapPoint,(MethodInfo *)0x0);
                  }
                  if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0
                     ) {
                    pDVar18 = (this->fields)._lookAndFeel;
                    if (pDVar18 == (DirectionalLightGizmo3DLookAndFeel *)0x0) goto code_?;
                  }
                  else {
                    pDVar18 = (this->fields)._sharedLookAndFeel;
                  }
                  GizmoLineMaterial::GizmoLineMaterial_SetColor
                            ((GizmoLineMaterial *)method_00,(pDVar18->fields)._lightRaysColor,
                             (MethodInfo *)0x0);
                  pMVar21 = GizmoLineMaterial::GizmoLineMaterial_get_Material
                                      ((GizmoLineMaterial *)method_00,(MethodInfo *)0x0);
                  if (pMVar21 != (Material *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                              (pMVar21,0,(MethodInfo *)0x0);
                    pLVar10 = (this->fields)._targetLight;
                    if (pLVar10 != (Light *)0x0) {
                      pLStack_25 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                                   &UNK_?;
                      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)pLVar10,(MethodInfo *)0x0);
                      if (pTVar11 != (Transform *)0x0) {
                        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_forward
                                            ((Vector3 *)&stack0xffffff70,pTVar11,(MethodInfo *)0x0);
                        uStack_13._0_4_ = pVVar12->x;
                        uStack_13._4_4_ = pVVar12->y;
                        fStack_26 = pVVar12->z;
                        DirectionalLightGizmo3D_GenerateLightRayEmissionPoints
                                  (this,camera,(MethodInfo *)0x0);
                        if ((this->fields)._sharedLookAndFeel ==
                            (DirectionalLightGizmo3DLookAndFeel *)0x0) {
                          pDVar18 = (this->fields)._lookAndFeel;
                          if (pDVar18 == (DirectionalLightGizmo3DLookAndFeel *)0x0)
                          goto code_?;
                        }
                        else {
                          pDVar18 = (this->fields)._sharedLookAndFeel;
                        }
                        pSStack_16 = (String *)((pDVar18->fields)._lightRayLength * fStack_17);
                        this_01 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                                  (this->fields)._lightRayEmissionPoints;
                        if (this_01 !=
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
                          pLVar27 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                    UIElements::VisualTreeAsset+UsingEntry]::
                                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                                              ((List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_
                                                *)&pLStack_25,this_01,
                                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                                              );
                          uStack_15 = uStack_15 & 0xffffffff;
                          LStack_8._list =
                               (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar27->_list;
                          LStack_8._index = pLVar27->_index;
                          LStack_8._version = pLVar27->_version;
                          LStack_8._current.Quadrant = (int32_t)(pLVar27->_current).alias;
                          uVar28 = (pLVar27->_current).path;
                          uVar29 = (pLVar27->_current).asset;
                          uStack_2 = 1;
                          LStack_8._current.FirstAxisSign = uVar28;
                          LStack_8._current.SecondAxisSign = uVar29;
                          pLStack_20 = &LStack_8;
                          while (bVar9 = mscorlib.dll::System::Collections::Generic::
                                         List`1[T]+Enumerator[RTG::PlaneIdHelper+PlaneQuadrantInfo]
                                         ::
                                         List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                                                   (&LStack_8,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                                  ), bVar9 != 0) {
                            startPoint.y = (float)LStack_8._current.FirstAxisSign;
                            startPoint.x = (float)LStack_8._current.Quadrant;
                            startPoint.z = (float)LStack_8._current.SecondAxisSign;
                            endPoint.y = (float)LStack_8._current.FirstAxisSign +
                                         uStack_13._4_4_ * (float)pSStack_16;
                            endPoint.x = (float)LStack_8._current.Quadrant +
                                         (float)uStack_13 * (float)pSStack_16;
                            endPoint.z = (float)LStack_8._current.SecondAxisSign +
                                         fStack_26 * (float)pSStack_16;
                            GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint,(MethodInfo *)0x0)
                            ;
                          }
                          uStack_2 = 0xffffffff;
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                    ((Object *)&LStack_8,
                                     (ExceptionArgument__Enum)
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                                     ,method_00);
                          uStack_2 = 0xffffffff;
                          pGVar24 = (this->fields)._dirSnapTick;
                          if (pGVar24 != (GizmoCap2D *)0x0) {
                            (*(code *)(pGVar24->klass->vtable).Render_1.method)();
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
code_?:
  func_?();
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_OnGizmoUpdateBegin
               (DirectionalLightGizmo3D *this,MethodInfo *method)

{
  bVar1 = DirectionalLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 != (Gizmo *)0x0) {
    this_00 = (pGVar2->fields)._transform;
    this_01 = (this->fields)._targetLight;
    if (((this_01 != (Light *)0x0) &&
        (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
       && (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0),
          this_00 != (GizmoTransform *)0x0)) {
      GizmoTransform::GizmoTransform_set_Position3D(this_00,*pVVar3,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(pGVar2,(MethodInfo *)0x0);
        DirectionalLightGizmo3D_UpdateTicks(this,camera,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_OwnsHandle
               (DirectionalLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._dirSnapTick;
  if (this_00 != (GizmoCap2D *)0x0) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    return (void *)handleId == pvVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::
     DirectionalLightGizmo3D_SetupSharedLookAndFeel
               (DirectionalLightGizmo3D *this,MethodInfo *method)

{
  ppGStack_1 = (GizmoCap2DLookAndFeel **)&stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0) {
    pDVar2 = (this->fields)._lookAndFeel;
    if (pDVar2 == (DirectionalLightGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pDVar2 = (this->fields)._sharedLookAndFeel;
  }
  pGVar3 = (this->fields)._dirSnapTick;
  if (pGVar3 != (GizmoCap2D *)0x0) {
    (pGVar3->fields)._sharedLookAndFeel = (pDVar2->fields)._dirSnapTickLookAndFeel;
    ppGStack_1 = &(pGVar3->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
code_?:
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SnapDirection() */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_SnapDirection
               (DirectionalLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
  }
  this_01 = (RTScene *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1[2].klass;
    this_00 = (this->fields)._._gizmo;
    if ((((this_00 != (Gizmo *)0x0) &&
         (pCVar3 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0),
         pOVar2 != (Object__Class *)0x0)) &&
        (pRVar4 = (Ray *)func_?(&stack0xffffffa0,6,TypeInfo__RTG__IInputDevice,pOVar2,
                                          pCVar3), this_01 != (RTScene *)0x0)) &&
       (this_02 = (IPAddress *)
                  RTScene::RTScene_Raycast
                            (this_01,*pRVar4,SceneRaycastPrecision__Enum_BestFit,
                             (this->fields)._raycastFilter,(MethodInfo *)0x0),
       this_02 != (IPAddress *)0x0)) {
      bVar5 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UQuery+SingleQueryMatcher
               ::UQuery_SingleQueryMatcher_IsInUse
                         ((UQuery_SingleQueryMatcher *)this_02,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        bVar5 = System.dll::System::Net::IPAddress::IPAddress_get_IsIPv6(this_02,(MethodInfo *)0x0)
        ;
        if (bVar5 == 0) {
          return;
        }
        pUVar6 = (this_02->fields)._numbers;
      }
      else {
        pUVar6 = (UInt16__Array *)(this_02->fields)._addressOrScopeId;
      }
      if (pUVar6 != (UInt16__Array *)0x0) {
        uVar7._0_4_ = pUVar6->max_length;
        uVar7._4_2_ = pUVar6->vector[0];
        uVar7._6_2_ = pUVar6->vector[1];
        fVar8 = *(float *)(pUVar6->vector + 2);
        (this->fields)._pickedWorldSnapPoint.x = (float)(undefined4)uVar7;
        (this->fields)._pickedWorldSnapPoint.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        (this->fields)._pickedWorldSnapPoint.z = fVar8;
        uVar9 = (this->fields)._pickedWorldSnapPoint.x;
        uVar10 = (this->fields)._pickedWorldSnapPoint.y;
        pLVar11 = (this->fields)._targetLight;
        if ((pLVar11 != (Light *)0x0) &&
           (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pLVar11,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0
           )) {
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffa8,pTVar12,(MethodInfo *)0x0);
          uVar14 = pVVar13->x;
          uVar15 = pVVar13->y;
          fVar16 = pVVar13->z;
          fVar17 = (float)uVar9 - (float)uVar14;
          fVar18 = (float)uVar10 - (float)uVar15;
          fVar19 = (float10)func_?();
          if (_UNK_? < (float)fVar19) {
            pLVar11 = (this->fields)._targetLight;
            if (pLVar11 == (Light *)0x0) goto code_?;
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pLVar11,(MethodInfo *)0x0);
            value.y = fVar18;
            value.x = fVar17;
            value.z = fVar8 - fVar16;
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&stack0xffffffa8,value,(MethodInfo *)0x0);
            TransformEx::TransformEx_Align
                      ((Quaternion *)&stack0xffffffa8,pTVar12,*pVVar13,TransformAxis__Enum_PositiveZ
                       ,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void UpdateTicks(Camera) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_UpdateTicks
               (DirectionalLightGizmo3D *this,Camera *camera,MethodInfo *method)

{
  pDVar1 = this;
  if ((camera != (Camera *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)camera,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    uVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
      uVar7 = pVVar3->x;
      fVar8 = pVVar3->y;
      fVar9 = pVVar3->z;
      value_00.y = (float)uVar5;
      value_00.x = (float)uVar4;
      value_00.z = fVar6;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffd8,value_00,(MethodInfo *)0x0);
      uVar10 = pVVar3->x;
      uVar11 = pVVar3->y;
      fVar6 = pVVar3->z;
      pGVar12 = (this->fields)._._gizmo;
      fVar8 = (float)((uint)(fVar8 * (float)uVar11 + (float)uVar7 * (float)uVar10 + fVar9 * fVar6) ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if (pGVar12 != (Gizmo *)0x0) {
        pSVar13 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  PointerEventBase`1[System::Object]::
                  PointerEventBase_1_System_Object__get_pointerType
                            ((PointerEventBase_1_System_Object_ *)pGVar12,(MethodInfo *)0x0);
        pGVar14 = (this->fields)._dirSnapTick;
        if (pGVar14 != (GizmoCap2D *)0x0) {
          pSVar15 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                    AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar14,(MethodInfo *)0x0);
          camera._1_3_ = (uint3)((uint)fVar8 >> 8);
          if (pSVar13 == pSVar15) {
            uVar16 = (this->fields)._pickedWorldSnapPoint.x;
            uVar17 = (this->fields)._pickedWorldSnapPoint.y;
            pGVar14 = (this->fields)._dirSnapTick;
            if (_UNK_? <
                (float)uVar11 * (float)uVar17 + (float)uVar10 * (float)uVar16 +
                fVar6 * (this->fields)._pickedWorldSnapPoint.z + fVar8) {
              if (pGVar14 == (GizmoCap2D *)0x0) goto code_?;
              camera._0_1_ = 1;
            }
            else {
              if (pGVar14 == (GizmoCap2D *)0x0) goto code_?;
              camera._0_1_ = 0;
            }
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar14,(bool)camera,(MethodInfo *)0x0);
            pGVar12 = (this->fields)._._gizmo;
            pGVar14 = (this->fields)._dirSnapTick;
            if ((pGVar12 == (Gizmo *)0x0) ||
               (pTVar2 = (Transform *)Gizmo::Gizmo_GetWorkCamera(pGVar12,(MethodInfo *)0x0),
               pTVar2 == (Transform *)0x0)) goto code_?;
            uVar18 = (this->fields)._pickedWorldSnapPoint.x;
            uVar19 = (this->fields)._pickedWorldSnapPoint.y;
            pDVar20 = &this->fields;
            this = (DirectionalLightGizmo3D *)uVar18;
            camera = (Camera *)uVar19;
            method = (MethodInfo *)(pDVar20->_pickedWorldSnapPoint).z;
          }
          else {
            this_00 = (this->fields)._targetLight;
            if ((this_00 == (Light *)0x0) ||
               (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_00,(MethodInfo *)0x0),
               pTVar2 == (Transform *)0x0)) goto code_?;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffcc,pTVar2,(MethodInfo *)0x0);
            uVar21 = pVVar3->x;
            uVar22 = pVVar3->y;
            this_01 = (this->fields)._dirSnapTick;
            if (_UNK_? <
                (float)uVar11 * (float)uVar22 + (float)uVar10 * (float)uVar21 + fVar6 * pVVar3->z +
                fVar8) {
              if (this_01 == (GizmoCap2D *)0x0) goto code_?;
              camera = (Camera *)CONCAT31(camera._1_3_,1);
            }
            else {
              if (this_01 == (GizmoCap2D *)0x0) goto code_?;
              camera = (Camera *)((uint)camera._1_3_ << 8);
            }
            method = (MethodInfo *)camera;
            pMVar23 = method;
            this = (DirectionalLightGizmo3D *)&UNK_?;
            method._0_1_ = (bool)camera;
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,(bool)method,(MethodInfo *)0x0);
            pGVar12 = (pDVar1->fields)._._gizmo;
            pGVar14 = (pDVar1->fields)._dirSnapTick;
            if ((pGVar12 == (Gizmo *)0x0) ||
               (pCVar24 = Gizmo::Gizmo_GetWorkCamera(pGVar12,(MethodInfo *)0x0),
               camera = (Camera *)this_01, method = pMVar23, pCVar24 == (Camera *)0x0))
            goto code_?;
          }
          position.y = (float)camera;
          position.x = (float)this;
          position.z = (float)method;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              ((Vector3 *)&stack0xffffffcc,(Camera *)pTVar2,position,
                               (MethodInfo *)0x0);
          value.x = pVVar3->x;
          value.y = pVVar3->y;
          if (pGVar14 != (GizmoCap2D *)0x0) {
            GizmoCap2D::GizmoCap2D_set_Position(pGVar14,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* DirectionalLightGizmo3D() */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D__ctor
               (DirectionalLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__DirectionalLightGizmo3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__Light3DSnapshot);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__RTG__SceneRaycastFilter);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields)._lightRayEmissionPoints = this_00;
  func_?(&(this->fields)._lightRayEmissionPoints,this_00);
  this_01 = (SceneRaycastFilter *)func_?(TypeInfo__RTG__SceneRaycastFilter);
  SceneRaycastFilter::SceneRaycastFilter__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._raycastFilter = this_01;
  func_?(&(this->fields)._raycastFilter,this_01);
  this_02 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._dummyDragSession = (GizmoSglAxisOffsetDrag3D *)this_02;
  func_?(&(this->fields)._dummyDragSession,this_02);
  pLVar1 = (Light3DSnapshot *)func_?(TypeInfo__RTG__Light3DSnapshot);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pLVar1,ExceptionArgument__Enum_obj,in_stack_2);
  (this->fields)._preChangeSnapshot = pLVar1;
  func_?();
  method_00 = TypeInfo__RTG__Light3DSnapshot;
  pLVar1 = (Light3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pLVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._postChangeSnapshot = pLVar1;
  func_?(&(this->fields)._postChangeSnapshot,pLVar1);
  this_03 = (DirectionalLightGizmo3DLookAndFeel *)
            func_?(TypeInfo__RTG__DirectionalLightGizmo3DLookAndFeel);
  DirectionalLightGizmo3DLookAndFeel::DirectionalLightGizmo3DLookAndFeel__ctor
            (this_03,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_03;
  func_?(&(this->fields)._lookAndFeel,this_03);
  GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* DirectionalLightGizmo3DLookAndFeel get_LookAndFeel() */

DirectionalLightGizmo3DLookAndFeel *
Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::DirectionalLightGizmo3D_get_LookAndFeel
          (DirectionalLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return (this->fields)._sharedLookAndFeel;
}


/* Void set_SharedLookAndFeel(DirectionalLightGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3D::
     DirectionalLightGizmo3D_set_SharedLookAndFeel
               (DirectionalLightGizmo3D *this,DirectionalLightGizmo3DLookAndFeel *value,
               MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  if ((this->fields)._sharedLookAndFeel == (DirectionalLightGizmo3DLookAndFeel *)0x0) {
    pDVar1 = (this->fields)._lookAndFeel;
    if (pDVar1 == (DirectionalLightGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pDVar1 = (this->fields)._sharedLookAndFeel;
  }
  pGVar2 = (this->fields)._dirSnapTick;
  if (pGVar2 != (GizmoCap2D *)0x0) {
    pGVar3 = (pDVar1->fields)._dirSnapTickLookAndFeel;
    (pGVar2->fields)._sharedLookAndFeel = pGVar3;
    func_?(&(pGVar2->fields)._sharedLookAndFeel,pGVar3);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

