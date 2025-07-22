
/* Void AddRenderIgnoreCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_AddRenderIgnoreCamera
               (RTSceneGrid *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._renderIgnoreCameras;
  if (pLVar1 != (List_1_UnityEngine_Camera_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)camera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    if (bVar2 == 0) {
      pLVar1 = (this->fields)._renderIgnoreCameras;
      if (pLVar1 == (List_1_UnityEngine_Camera_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)camera,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single CalculateCellFadeZoom(Camera) */

float Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_CalculateCellFadeZoom
                (RTSceneGrid *this,Camera *camera,MethodInfo *method)

{
  RTSceneGrid_get_WorldPlane((Plane *)&stack0xffffffe0,this,(MethodInfo *)0x0);
  if (camera != (Camera *)0x0) {
    puVar1 = &UNK_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      __return_storage_ptr__ = (Vector3 *)&stack0xfffffff0;
      puVar2 = &UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (__return_storage_ptr__,this_00,(MethodInfo *)0x0);
      plane.m_Normal.y = (float)puVar2;
      plane.m_Normal.x = (float)puVar1;
      plane.m_Normal.z = (float)__return_storage_ptr__;
      plane.m_Distance = (float)this_00;
      fVar4 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,*pVVar3,(MethodInfo *)0x0);
      return fVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* XZGridCell CellFromWorldPoint(Vector3) */

XZGridCell *
Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_CellFromWorldPoint
          (RTSceneGrid *this,Vector3 worldPoint,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    pXVar2 = XZGridCell::XZGridCell_FromPoint
                       (worldPoint,(pXVar1->fields)._cellSizeX,(pXVar1->fields)._cellSizeZ,
                        (IXZGrid *)this,(MethodInfo *)0x0);
    return pXVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pXVar2 = (XZGridCell *)(*pcVar4)();
  return pXVar2;
}


/* SceneRaycastHit GetSceneHitForGridSnap() */

SceneRaycastHit *
Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_GetSceneHitForGridSnap
          (RTSceneGrid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__RTG__SceneRaycastFilter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1[2].klass;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    }
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if ((pOVar1 != (Object *)0x0) &&
       (uStack_3 = CONCAT44(pOVar1[4].monitor,(undefined4)uStack_3), pOVar2 != (Object__Class *)0x0)
       ) {
      pIVar4 = (pOVar2->_0).image;
      uVar5 = 0;
      uVar6 = *(ushort *)((int)&pIVar4[4].nameNoExt + 2);
      if (uVar6 != 0) {
        do {
          if (*(IInputDevice__Class **)(pIVar4[2].name + (uint)uVar5 * 8) ==
              TypeInfo__RTG__IInputDevice) {
            pIVar4 = (pOVar2->_0).image;
            puVar7 = &pIVar4[5].customAttributeCount +
                      *(int *)(pIVar4[2].name + (uint)uVar5 * 8 + 4) * 2;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      puVar7 = (uint32_t *)func_?(pOVar2,TypeInfo__RTG__IInputDevice,6);
code_?:
      puVar8 = (undefined4 *)
                (*(code *)*puVar7)(auStack_9,pOVar2,uStack_3._4_4_,
                                    (Il2CppMetadataImageHandle)puVar7[1]);
      uStack_10 = *puVar8;
      uStack_11 = puVar8[1];
      uStack_12 = puVar8[2];
      uStack_13 = puVar8[3];
      uStack_3 = *(undefined8 *)(puVar8 + 4);
      this_01 = (SceneRaycastFilter *)func_?(TypeInfo__RTG__SceneRaycastFilter);
      SceneRaycastFilter::SceneRaycastFilter__ctor(this_01,(MethodInfo *)0x0);
      pMVar14 = 
      MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
      if ((this_01 != (SceneRaycastFilter *)0x0) &&
         (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this_01->fields)._allowedObjectTypes,
         this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
        piVar15 = &(this_00->fields)._version;
        *piVar15 = *piVar15 + 1;
        pRVar16 = (this_00->fields)._items;
        if (pRVar16 != (RegexCharClass_SingleRange__Array *)0x0) {
          uVar17 = (this_00->fields)._size;
          if (uVar17 < pRVar16->max_length) {
            (this_00->fields)._size = uVar17 + 1;
            if (pRVar16->max_length <= uVar17) goto code_?;
            pRVar16->vector[uVar17].First = 1;
            pRVar16->vector[uVar17].Last = 0;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      (this_00,(RegexCharClass_SingleRange)0x1,pMVar14->klass->rgctx_data[0xe].method
                      );
          }
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
          }
          this_02 = (RTScene *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
          if (this_02 != (RTScene *)0x0) {
            ray.m_Origin.y = (float)uStack_11;
            ray.m_Origin.x = (float)uStack_10;
            ray.m_Origin.z = (float)uStack_12;
            ray.m_Direction.x = (float)uStack_13;
            ray.m_Direction.y = (float)(int)uStack_3;
            ray.m_Direction.z = (float)((ulonglong)uStack_3 >> 0x20);
            pSVar18 = RTScene::RTScene_Raycast
                                (this_02,ray,SceneRaycastPrecision__Enum_BestFit,this_01,
                                 (MethodInfo *)0x0);
            return pSVar18;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  pSVar18 = (SceneRaycastHit *)(*pcVar19)();
  return pSVar18;
}


/* Void Initialize_SystemCall() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_Initialize_SystemCall
               (RTSceneGrid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&TypeInfo__RTG__InputDeviceDoubleTapHandler);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&
                    MethodInfo__RTG__RTSceneGrid__OnInputDeviceDoubleTap_RTG__IInputDevice__UnityEngine__Vector2_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1[2].klass;
    this_00 = (SerializationCallback *)func_?(TypeInfo__RTG__InputDeviceDoubleTapHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              (this_00,(Object *)this,
               MethodInfo__RTG__RTSceneGrid__OnInputDeviceDoubleTap_RTG__IInputDevice__UnityEngine__Vector2_
               ,(MethodInfo *)0x0);
    if (pOVar2 != (Object__Class *)0x0) {
      pIVar3 = (pOVar2->_0).image;
      uVar4 = 0;
      uVar5 = *(ushort *)((int)&pIVar3[4].nameNoExt + 2);
      if (uVar5 != 0) {
        do {
          if (*(IInputDevice__Class **)(pIVar3[2].name + (uint)uVar4 * 8) ==
              TypeInfo__RTG__IInputDevice) {
            pIVar3 = (pOVar2->_0).image;
            puVar6 = &pIVar3[4].exportedTypeCount +
                     *(int *)(pIVar3[2].name + (uint)uVar4 * 8 + 4) * 2;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      puVar6 = (uint32_t *)func_?(pOVar2,TypeInfo__RTG__IInputDevice,0);
code_?:
      (*(code *)*puVar6)(pOVar2,puVar6[1]);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsRenderIgnoreCamera(Camera) */

bool Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_IsRenderIgnoreCamera
               (RTSceneGrid *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._renderIgnoreCameras;
  if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)camera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void MoveDown() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_MoveDown
               (RTSceneGrid *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pXVar2 = (this->fields)._settings;
  if (pXVar2 != (XZGridSettings *)0x0) {
    if ((pXVar2->fields)._isVisible != 0) {
      (pXVar2->fields)._yOffset = (pXVar2->fields)._yOffset - (pXVar2->fields)._upDownStep;
    }
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void MoveUp() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_MoveUp(RTSceneGrid *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pXVar2 = (this->fields)._settings;
  if (pXVar2 != (XZGridSettings *)0x0) {
    if ((pXVar2->fields)._isVisible != 0) {
      (pXVar2->fields)._yOffset = (pXVar2->fields)._yOffset + (pXVar2->fields)._upDownStep;
    }
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnInputDeviceDoubleTap(IInputDevice, Vector2) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_OnInputDeviceDoubleTap
               (RTSceneGrid *this,IInputDevice *inputDevice,Vector2 position,MethodInfo *method)

{
  pSVar1 = (this->fields)._hotkeys;
  if ((pSVar1 != (SceneGridHotkeys *)0x0) &&
     (this_00 = (pSVar1->fields)._snapToCursorPickPoint, this_00 != (Hotkeys *)0x0)) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_01 = (UQuery_SingleQueryMatcher *)
                RTSceneGrid_GetSceneHitForGridSnap(this,(MethodInfo *)0x0);
      if (this_01 == (UQuery_SingleQueryMatcher *)0x0) goto code_?;
      bVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UQuery+SingleQueryMatcher::
              UQuery_SingleQueryMatcher_IsInUse(this_01,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        RTSceneGrid_SnapToObjectHitPoint
                  (this,(GameObjectRayHit *)(this_01->fields)._.m_Matchers,
                   RTSceneGrid_SnapToPointMode__Enum_ClosestExtremity,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_Raycast
               (RTSceneGrid *this,Ray ray,float *t,MethodInfo *method)

{
  pPVar1 = RTSceneGrid_get_WorldPlane((Plane *)&stack0xffffffec,this,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&stack0xffffffec,ray,(float *)(pPVar1->m_Normal).y,
                     (MethodInfo *)(pPVar1->m_Normal).z);
  return bVar2;
}


/* Void RemoveRenderIgnoreCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_RemoveRenderIgnoreCamera
               (RTSceneGrid *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._renderIgnoreCameras;
  if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              ((List_1_System_Object_ *)this_00,(Object *)camera,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Render_SystemCall(Camera) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_Render_SystemCall
               (RTSceneGrid *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    func_?(&StringLiteral__TransformMatrix);
    func_?(&StringLiteral__LineColor);
    func_?(&StringLiteral__CamWorldPos);
    func_?(&StringLiteral__GridRight);
    func_?(&StringLiteral__CellSizeX);
    func_?(&StringLiteral__CamFarPlaneDist);
    func_?(&StringLiteral__CellSizeZ);
    func_?(&StringLiteral__GridOrigin);
    func_?(&StringLiteral__GridLook);
    cRam_? = '\x01';
  }
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    if ((pXVar1->fields)._isVisible == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                     );
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._renderIgnoreCameras;
    if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        ((List_1_System_Object_ *)this_00,(Object *)renderCamera,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                        );
      if (bVar2 != 0) {
        return;
      }
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      pAVar3 = CameraEx::CameraEx_CalculateVolumeAABB
                         ((AABB *)&stack0xffffff40,renderCamera,(MethodInfo *)0x0);
      fStack_4 = (pAVar3->_size).x;
      fStack_5 = (pAVar3->_size).y;
      fStack_6 = (pAVar3->_size).z;
      fStack_7 = (pAVar3->_center).x;
      uVar8 = (pAVar3->_center).y;
      uVar9 = (pAVar3->_center).z;
      fStack_10 = (float)uVar8;
      fStack_11 = (float)uVar9;
      PStack_12.m_Normal.x = fStack_4;
      PStack_12.m_Normal.y = fStack_5;
      PStack_12.m_Normal.z = fStack_6;
      PStack_12.m_Distance = fStack_7;
      pPVar13 = RTSceneGrid_get_WorldPlane((Plane *)&QStack_14,this,(MethodInfo *)0x0);
      pt.y = fStack_10;
      pt.x = fStack_7;
      pt.z = fStack_11;
      pVVar15 = PlaneEx::PlaneEx_ProjectPoint(&VStack_16,*pPVar13,pt,(MethodInfo *)0x0);
      uStack_17._0_4_ = pVVar15->x;
      uStack_17._4_4_ = pVVar15->y;
      PStack_12.m_Normal.x = PStack_12.m_Normal.x * _UNK_?;
      fVar18 = pVVar15->z;
      VStack_16.z = PStack_12.m_Normal.z * _UNK_?;
      pQVar19 = RTSceneGrid_get_Rotation(&QStack_14,this,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)pQVar19->w;
      pos.z = fVar18;
      pos.x = (float)(undefined4)uStack_17;
      pos.y = (float)uStack_17._4_4_;
      s.y = _UNK_?;
      s.x = PStack_12.m_Normal.x;
      s.z = VStack_16.z;
      pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                          ((Matrix4x4 *)&stack0xffffff00,pos,*pQVar19,s,(MethodInfo *)0x0);
      fStack_21 = pMVar20->m00;
      fStack_22 = pMVar20->m10;
      fStack_23 = pMVar20->m20;
      fStack_24 = pMVar20->m30;
      fStack_25 = pMVar20->m01;
      fStack_26 = pMVar20->m11;
      fStack_27 = pMVar20->m21;
      fStack_28 = pMVar20->m31;
      fStack_6 = pMVar20->m02;
      fStack_7 = pMVar20->m12;
      fStack_10 = pMVar20->m22;
      fStack_11 = pMVar20->m32;
      QStack_14.x = pMVar20->m03;
      QStack_14.y = pMVar20->m13;
      QStack_14.z = pMVar20->m23;
      QStack_14.w = pMVar20->m33;
      pXVar29 = (this->fields)._lookAndFeel;
      if (pXVar29 != (XZGridLookAndFeel *)0x0) {
        if ((pXVar29->fields)._useCellFading == 0) {
          if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
          }
          pMVar30 = (MaterialPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
          if (((pMVar30 == (MaterialPool *)0x0) ||
              (pMStack_31 = MaterialPool::MaterialPool_get_XZGrid_Plane(pMVar30,(MethodInfo *)0x0),
              renderCamera == (Camera *)0x0)) ||
             (fStack_32 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                                    (renderCamera,(MethodInfo *)0x0), pMStack_31 == (Material *)0x0)
             ) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (pMStack_31,StringLiteral__CamFarPlaneDist,fStack_32,(MethodInfo *)0x0);
          pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)renderCamera,(MethodInfo *)0x0);
          if (pTVar33 == (Transform *)0x0) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_16,pTVar33,(MethodInfo *)0x0);
          this_01 = pMStack_31;
          uStack_34 = 0;
          uStack_17._0_4_ = pVVar15->x;
          uStack_17._4_4_ = pVVar15->y;
          fStack_35 = pVVar15->z;
          VStack_36.x = (float)(undefined4)uStack_17;
          VStack_36.y = (float)uStack_17._4_4_;
          value_05.w = 0.0;
          value_05.x = pVVar15->x;
          value_05.y = pVVar15->y;
          value_05.z = pVVar15->z;
          VStack_36.z = fStack_35;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMStack_31,StringLiteral__CamWorldPos,value_05,(MethodInfo *)0x0);
          value_04.m10 = fStack_22;
          value_04.m00 = fStack_21;
          value_04.m20 = fStack_23;
          value_04.m30 = fStack_24;
          value_04.m01 = fStack_25;
          value_04.m11 = fStack_26;
          value_04.m21 = fStack_27;
          value_04.m31 = fStack_28;
          value_04.m02 = fStack_6;
          value_04.m12 = fStack_7;
          value_04.m22 = fStack_10;
          value_04.m32 = fStack_11;
          value_04.m03 = QStack_14.x;
          value_04.m13 = QStack_14.y;
          value_04.m23 = QStack_14.z;
          value_04.m33 = QStack_14.w;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_01,StringLiteral__TransformMatrix,value_04,(MethodInfo *)0x0);
          pXVar1 = (this->fields)._settings;
          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CellSizeX,(pXVar1->fields)._cellSizeX,(MethodInfo *)0x0)
          ;
          pXVar1 = (this->fields)._settings;
          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CellSizeZ,(pXVar1->fields)._cellSizeZ,(MethodInfo *)0x0)
          ;
          pXVar29 = (this->fields)._lookAndFeel;
          if (pXVar29 == (XZGridLookAndFeel *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__LineColor,(Vector4)(pXVar29->fields)._lineColor,
                     (MethodInfo *)0x0);
          pVVar15 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                    MVWorldObject_get_WorldPosition(&VStack_16,(MVWorldObject *)0x0,method_00);
          uStack_34 = 0;
          uStack_17._0_4_ = pVVar15->x;
          uStack_17._4_4_ = pVVar15->y;
          fStack_35 = pVVar15->z;
          VStack_36.x = (float)(undefined4)uStack_17;
          VStack_36.y = (float)uStack_17._4_4_;
          value_07.w = 0.0;
          value_07.x = pVVar15->x;
          value_07.y = pVVar15->y;
          value_07.z = pVVar15->z;
          VStack_36.z = fStack_35;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridOrigin,value_07,(MethodInfo *)0x0);
          pVVar15 = RTSceneGrid_get_Right(&VStack_16,this,(MethodInfo *)0x0);
          uStack_34 = 0;
          uStack_17._0_4_ = pVVar15->x;
          uStack_17._4_4_ = pVVar15->y;
          fStack_35 = pVVar15->z;
          VStack_36.x = (float)(undefined4)uStack_17;
          VStack_36.y = (float)uStack_17._4_4_;
          value_08.w = 0.0;
          value_08.x = pVVar15->x;
          value_08.y = pVVar15->y;
          value_08.z = pVVar15->z;
          VStack_36.z = fStack_35;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridRight,value_08,(MethodInfo *)0x0);
          pVVar15 = RTSceneGrid_get_Look(&VStack_16,this,(MethodInfo *)0x0);
          uStack_34 = 0;
          uStack_17._0_4_ = pVVar15->x;
          uStack_17._4_4_ = pVVar15->y;
          fStack_35 = pVVar15->z;
          VStack_36.x = (float)(undefined4)uStack_17;
          VStack_36.y = (float)uStack_17._4_4_;
          value_09.w = 0.0;
          value_09.x = pVVar15->x;
          value_09.y = pVVar15->y;
          value_09.z = pVVar15->z;
          VStack_36.z = fStack_35;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridLook,value_09,(MethodInfo *)0x0);
        }
        else {
          pPVar13 = RTSceneGrid_get_WorldPlane(&PStack_12,this,(MethodInfo *)0x0);
          PStack_12.m_Normal.x = (pPVar13->m_Normal).x;
          PStack_12.m_Normal.y = (pPVar13->m_Normal).y;
          PStack_12.m_Normal.z = (pPVar13->m_Normal).z;
          PStack_12.m_Distance = pPVar13->m_Distance;
          if ((renderCamera == (Camera *)0x0) ||
             (pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)renderCamera,(MethodInfo *)0x0),
             pTVar33 == (Transform *)0x0)) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_16,pTVar33,(MethodInfo *)0x0);
          plane.m_Normal.y = PStack_12.m_Normal.y;
          plane.m_Normal.x = PStack_12.m_Normal.x;
          plane.m_Normal.z = PStack_12.m_Normal.z;
          plane.m_Distance = PStack_12.m_Distance;
          fStack_37 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,*pVVar15,(MethodInfo *)0x0);
          MathEx::MathEx_GetNumDigits((int)fStack_37,(MethodInfo *)0x0);
          dVar38 = _UNK_?;
          func_?();
          pMStack_31 = (Material *)(float)dVar38;
          dVar38 = _UNK_?;
          func_?();
          pXVar29 = (this->fields)._lookAndFeel;
          fStack_32 = (float)dVar38;
          if (pXVar29 == (XZGridLookAndFeel *)0x0) goto code_?;
          PStack_12.m_Normal.x = (pXVar29->fields)._lineColor.r;
          PStack_12.m_Normal.y = (pXVar29->fields)._lineColor.g;
          PStack_12.m_Normal.z = (pXVar29->fields)._lineColor.b;
          PStack_12.m_Distance = (pXVar29->fields)._lineColor.a;
          pMStack_39 = (Mesh *)((fStack_32 - fStack_37) / (fStack_32 - (float)pMStack_31));
          fStack_35 = _UNK_? - (float)pMStack_39;
          if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
          }
          pMVar30 = (MaterialPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
          if (pMVar30 == (MaterialPool *)0x0) goto code_?;
          this_01 = MaterialPool::MaterialPool_get_XZGrid_Plane(pMVar30,(MethodInfo *)0x0);
          fStack_37 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                                (renderCamera,(MethodInfo *)0x0);
          if (this_01 == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CamFarPlaneDist,fStack_37,(MethodInfo *)0x0);
          pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)renderCamera,(MethodInfo *)0x0);
          if (pTVar33 == (Transform *)0x0) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_36,pTVar33,(MethodInfo *)0x0);
          VStack_16.x = pVVar15->x;
          VStack_16.y = pVVar15->y;
          VStack_16.z = pVVar15->z;
          VStack_36.x = VStack_16.x;
          VStack_36.y = VStack_16.y;
          uStack_34 = 0;
          value.w = 0.0;
          value.x = pVVar15->x;
          value.y = pVVar15->y;
          value.z = pVVar15->z;
          VStack_36.z = VStack_16.z;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__CamWorldPos,value,(MethodInfo *)0x0);
          pVVar15 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                    MVWorldObject_get_WorldPosition
                              (&VStack_36,(MVWorldObject *)0x0,in_stack_40);
          VStack_16.x = pVVar15->x;
          VStack_16.y = pVVar15->y;
          VStack_16.z = pVVar15->z;
          VStack_36.x = VStack_16.x;
          VStack_36.y = VStack_16.y;
          uStack_34 = 0;
          value_00.w = 0.0;
          value_00.x = pVVar15->x;
          value_00.y = pVVar15->y;
          value_00.z = pVVar15->z;
          VStack_36.z = VStack_16.z;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridOrigin,value_00,(MethodInfo *)0x0);
          pVVar15 = RTSceneGrid_get_Right(&VStack_36,this,(MethodInfo *)0x0);
          VStack_16.x = pVVar15->x;
          VStack_16.y = pVVar15->y;
          VStack_16.z = pVVar15->z;
          VStack_36.x = VStack_16.x;
          VStack_36.y = VStack_16.y;
          uStack_34 = 0;
          value_01.w = 0.0;
          value_01.x = pVVar15->x;
          value_01.y = pVVar15->y;
          value_01.z = pVVar15->z;
          VStack_36.z = VStack_16.z;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridRight,value_01,(MethodInfo *)0x0);
          pVVar15 = RTSceneGrid_get_Look(&VStack_36,this,(MethodInfo *)0x0);
          VStack_16.x = pVVar15->x;
          VStack_16.y = pVVar15->y;
          VStack_16.z = pVVar15->z;
          VStack_36.x = VStack_16.x;
          VStack_36.y = VStack_16.y;
          uStack_34 = 0;
          value_03.w = 0.0;
          value_03.x = pVVar15->x;
          value_03.y = pVVar15->y;
          value_03.z = pVVar15->z;
          VStack_36.z = VStack_16.z;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridLook,value_03,(MethodInfo *)0x0);
          value_02.m10 = fStack_22;
          value_02.m00 = fStack_21;
          value_02.m20 = fStack_23;
          value_02.m30 = fStack_24;
          value_02.m01 = fStack_25;
          value_02.m11 = fStack_26;
          value_02.m21 = fStack_27;
          value_02.m31 = fStack_28;
          value_02.m02 = fStack_6;
          value_02.m12 = fStack_7;
          value_02.m22 = fStack_10;
          value_02.m32 = fStack_11;
          value_02.m03 = QStack_14.x;
          value_02.m13 = QStack_14.y;
          value_02.m23 = QStack_14.z;
          value_02.m33 = QStack_14.w;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_01,StringLiteral__TransformMatrix,value_02,(MethodInfo *)0x0);
          pXVar29 = (this->fields)._lookAndFeel;
          if (pXVar29 == (XZGridLookAndFeel *)0x0) goto code_?;
          PStack_12.m_Distance = (pXVar29->fields)._lineColor.a * (float)pMStack_39;
          if (PStack_12.m_Distance != 0.0) {
            pXVar1 = (this->fields)._settings;
            if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                      (this_01,StringLiteral__CellSizeX,
                       (float)pMStack_31 * (pXVar1->fields)._cellSizeX,(MethodInfo *)0x0);
            pXVar1 = (this->fields)._settings;
            if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                      (this_01,StringLiteral__CellSizeZ,
                       (float)pMStack_31 * (pXVar1->fields)._cellSizeZ,(MethodInfo *)0x0);
            value_06.y = PStack_12.m_Normal.y;
            value_06.x = PStack_12.m_Normal.x;
            value_06.z = PStack_12.m_Normal.z;
            value_06.w = PStack_12.m_Distance;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      (this_01,StringLiteral__LineColor,value_06,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                      (this_01,0,(MethodInfo *)0x0);
            if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
            }
            pMVar41 = (MeshPool *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
            if (pMVar41 == (MeshPool *)0x0) goto code_?;
            pMStack_39 = MeshPool::MeshPool_get_UnitQuadXZ(pMVar41,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Graphics);
            }
            matrix.m10 = fStack_22;
            matrix.m00 = fStack_21;
            matrix.m20 = fStack_23;
            matrix.m30 = fStack_24;
            matrix.m01 = fStack_25;
            matrix.m11 = fStack_26;
            matrix.m21 = fStack_27;
            matrix.m31 = fStack_28;
            matrix.m02 = fStack_6;
            matrix.m12 = fStack_7;
            matrix.m22 = fStack_10;
            matrix.m32 = fStack_11;
            matrix.m03 = QStack_14.x;
            matrix.m13 = QStack_14.y;
            matrix.m23 = QStack_14.z;
            matrix.m33 = QStack_14.w;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                      (pMStack_39,matrix,(MethodInfo *)0x0);
          }
          pXVar29 = (this->fields)._lookAndFeel;
          if (pXVar29 == (XZGridLookAndFeel *)0x0) goto code_?;
          PStack_12.m_Distance = (pXVar29->fields)._lineColor.a * fStack_35;
          if (PStack_12.m_Distance == 0.0) {
            return;
          }
          pXVar1 = (this->fields)._settings;
          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CellSizeX,fStack_32 * (pXVar1->fields)._cellSizeX,
                     (MethodInfo *)0x0);
          pXVar1 = (this->fields)._settings;
          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CellSizeZ,fStack_32 * (pXVar1->fields)._cellSizeZ,
                     (MethodInfo *)0x0);
          value_10.y = PStack_12.m_Normal.y;
          value_10.x = PStack_12.m_Normal.x;
          value_10.z = PStack_12.m_Normal.z;
          value_10.w = PStack_12.m_Distance;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__LineColor,value_10,(MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                  (this_01,0,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar41 = (MeshPool *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
        if (pMVar41 != (MeshPool *)0x0) {
          mesh = MeshPool::MeshPool_get_UnitQuadXZ(pMVar41,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          matrix_00.m10 = fStack_22;
          matrix_00.m00 = fStack_21;
          matrix_00.m20 = fStack_23;
          matrix_00.m30 = fStack_24;
          matrix_00.m01 = fStack_25;
          matrix_00.m11 = fStack_26;
          matrix_00.m21 = fStack_27;
          matrix_00.m31 = fStack_28;
          matrix_00.m02 = fStack_6;
          matrix_00.m12 = fStack_7;
          matrix_00.m22 = fStack_10;
          matrix_00.m32 = fStack_11;
          matrix_00.m03 = QStack_14.x;
          matrix_00.m13 = QStack_14.y;
          matrix_00.m23 = QStack_14.z;
          matrix_00.m33 = QStack_14.w;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (mesh,matrix_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
  return;
}


/* Void SnapToObjectHitPoint(GameObjectRayHit, RTSceneGrid+SnapToPointMode) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_SnapToObjectHitPoint
               (RTSceneGrid *this,GameObjectRayHit *objectHit,
               RTSceneGrid_SnapToPointMode__Enum snapMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  fStack_2 = 0.0;
  if (snapMode == RTSceneGrid_SnapToPointMode__Enum_Exact) {
    pVVar3 = RTSceneGrid_get_Normal(&VStack_1,this,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar3->x;
    uStack_4._4_4_ = pVVar3->y;
    fVar5 = pVVar3->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_7.x = (pVVar6->zeroVector).x;
    VStack_7.y = (pVVar6->zeroVector).y;
    VStack_7.z = (pVVar6->zeroVector).z;
    VVar8.z = fVar5;
    VVar8.x = (float)(undefined4)uStack_4;
    VVar8.y = (float)uStack_4._4_4_;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_1,VVar8,(MethodInfo *)0x0);
    uStack_9._0_4_ = pVVar3->x;
    uStack_9._4_4_ = pVVar3->y;
    fStack_10 = pVVar3->z;
    fVar5 = (float)((uint)(VStack_7.y * uStack_9._4_4_ + VStack_7.x * (float)uStack_9 +
                           VStack_7.z * fStack_10) ^
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    uStack_11 = uStack_9;
    fStack_12 = fStack_10;
    if (objectHit != (GameObjectRayHit *)0x0) {
      VStack_7.x = (objectHit->fields)._hitPoint.x;
      VStack_7.y = (objectHit->fields)._hitPoint.y;
      VStack_7.z = (objectHit->fields)._hitPoint.z;
      pXVar13 = (this->fields)._settings;
      if (pXVar13 != (XZGridSettings *)0x0) {
        fVar14 = uStack_9._4_4_ * VStack_7.y + (float)uStack_9 * VStack_7.x;
        fStack_15 = fStack_10 * VStack_7.z;
        goto code_?;
      }
    }
  }
  else {
    fStack_10 = 0.0;
    fStack_16 = 0.0;
    uStack_9 = 1;
    if (objectHit != (GameObjectRayHit *)0x0) {
      gameObject = (objectHit->fields)._hitObject;
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__ObjectBounds);
      }
      queryConfig.NoVolumeSize.y = fStack_10;
      queryConfig.ObjectTypes = (int32_t)(float)uStack_9;
      queryConfig.NoVolumeSize.x = uStack_9._4_4_;
      queryConfig.NoVolumeSize.z = fStack_16;
      pOVar17 = ObjectBounds::ObjectBounds_CalcWorldOBB
                          ((OBB *)&stack0xffffff40,gameObject,queryConfig,(MethodInfo *)0x0);
      VVar8 = pOVar17->_size;
      pVVar3 = &pOVar17->_center;
      fVar5 = pVVar3->x;
      fVar14 = (pOVar17->_center).y;
      uVar18._0_4_ = pVVar3->x;
      uVar18._4_4_ = pVVar3->y;
      uStack_11._0_4_ = pVVar3->x;
      uStack_11._4_4_ = pVVar3->y;
      fVar19 = (pOVar17->_center).z;
      uVar20 = (pOVar17->_rotation).w;
      uVar21 = (pOVar17->_rotation).x;
      uVar22 = (pOVar17->_rotation).y;
      uVar23 = (pOVar17->_rotation).z;
      boxRotation.z = (float)uVar23;
      boxRotation.y = (float)uVar22;
      boxRotation.x = (float)uVar21;
      if ((char)*(undefined4 *)&pOVar17->_isValid == '\0') {
        return;
      }
      pVVar3 = RTSceneGrid_get_Normal(&VStack_7,this,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_7,*pVVar3,(MethodInfo *)0x0);
      VStack_1.x = pVVar3->x;
      VStack_1.y = pVVar3->y;
      VStack_1.z = pVVar3->z;
      fStack_10 = 0.0;
      fStack_16 = 0.0;
      fStack_2 = (float)((uint)(fVar14 * VStack_1.y + fVar5 * VStack_1.x + fVar19 * VStack_1.z)
                         ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field)
      ;
      fStack_15 = fStack_2;
      uStack_9 = uVar18;
      fStack_12 = fVar19;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        fVar5 = (float)uStack_9;
        fVar14 = uStack_9._4_4_;
      }
      boxCenter.y = fVar14;
      boxCenter.x = fVar5;
      boxCenter.z = fVar19;
      boxRotation.w = (float)uVar20;
      points = BoxMath::BoxMath_CalcBoxCornerPoints(boxCenter,VVar8,boxRotation,(MethodInfo *)0x0);
      VStack_7.x = (objectHit->fields)._hitPoint.x;
      VStack_7.y = (objectHit->fields)._hitPoint.y;
      VStack_7.z = (objectHit->fields)._hitPoint.z;
      if (_UNK_? <=
          VStack_1.x * VStack_7.x + VStack_1.y * VStack_7.y + VStack_1.z * VStack_7.z +
          fStack_15) {
        plane_00.m_Normal.z = VStack_1.z;
        plane_00.m_Normal.x = VStack_1.x;
        plane_00.m_Normal.y = VStack_1.y;
        plane_00.m_Distance = fStack_2;
        iVar24 = PlaneEx::PlaneEx_GetFurthestPtInFront(plane_00,points,(MethodInfo *)0x0);
      }
      else {
        plane.m_Normal.z = VStack_1.z;
        plane.m_Normal.x = VStack_1.x;
        plane.m_Normal.y = VStack_1.y;
        plane.m_Distance = fStack_2;
        iVar24 = PlaneEx::PlaneEx_GetFurthestPtBehind(plane,points,(MethodInfo *)0x0);
      }
      if (-1 < iVar24) {
        if (points == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        puVar25 = (undefined8 *)
                  func_?(&VStack_7,points,iVar24,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                 );
        uStack_11 = *puVar25;
        fStack_12 = *(float *)(puVar25 + 1);
      }
      pVVar3 = RTSceneGrid_get_Normal(&VStack_7,this,(MethodInfo *)0x0);
      uStack_4._0_4_ = pVVar3->x;
      uStack_4._4_4_ = pVVar3->y;
      fVar5 = pVVar3->z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_7.x = (pVVar6->zeroVector).x;
      VStack_7.y = (pVVar6->zeroVector).y;
      VStack_7.z = (pVVar6->zeroVector).z;
      value.z = fVar5;
      value.x = (float)(undefined4)uStack_4;
      value.y = (float)uStack_4._4_4_;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_1,value,(MethodInfo *)0x0);
      uStack_4._0_4_ = pVVar3->x;
      uStack_4._4_4_ = pVVar3->y;
      fStack_15 = pVVar3->z;
      fVar5 = (float)((uint)(VStack_7.y * (float)uStack_4._4_4_ +
                              VStack_7.x * (float)(undefined4)uStack_4 + VStack_7.z * fStack_15)
                      ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      pXVar13 = (this->fields)._settings;
      uStack_9 = uStack_4;
      fStack_10 = fStack_15;
      if (pXVar13 != (XZGridSettings *)0x0) {
        fVar14 = (float)(undefined4)uStack_4 * (float)uStack_11 +
                 (float)uStack_4._4_4_ * uStack_11._4_4_;
        fStack_15 = fStack_15 * fStack_12;
code_?:
        (pXVar13->fields)._yOffset = fVar14 + fStack_15 + fVar5;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_Update_SystemCall
               (RTSceneGrid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
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
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar6 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar6 != (Object *)0x0) && (pOVar6[2].klass != (Object__Class *)0x0)) {
    cVar7 = func_?(2,TypeInfo__RTG__IInputDevice);
    if (cVar7 == '\0') {
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar6 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      if ((pOVar6 == (Object *)0x0) || (pOVar8 = pOVar6[2].klass, pOVar8 == (Object__Class *)0x0))
      goto code_?;
      pIVar9 = (pOVar8->_0).image;
      uVar10 = 0;
      uVar11 = *(ushort *)((int)&pIVar9[4].nameNoExt + 2);
      pRVar12 = this;
      if (uVar11 != 0) {
        do {
          if (*(IInputDevice__Class **)(pIVar9[2].name + (uint)uVar10 * 8) ==
              TypeInfo__RTG__IInputDevice) {
            pIVar9 = (pOVar8->_0).image;
            ppIVar13 = &pIVar9[6].assembly + *(int *)(pIVar9[2].name + (uint)uVar10 * 8 + 4) * 2;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
          pRVar12 = unaff_EDI;
        } while (uVar10 < uVar11);
      }
      unaff_EDI = pRVar12;
      ppIVar13 = (Il2CppAssembly **)func_?(pOVar8,TypeInfo__RTG__IInputDevice,10);
code_?:
      cVar7 = (*(code *)*ppIVar13)(pOVar8,0,ppIVar13[1]);
      if (cVar7 != '\0') {
        pSVar2 = (unaff_EDI->fields)._hotkeys;
        if ((pSVar2 == (SceneGridHotkeys *)0x0) ||
           (pHVar3 = (pSVar2->fields)._snapToCursorPickPoint, pHVar3 == (Hotkeys *)0x0))
        goto code_?;
        bVar4 = Hotkeys::Hotkeys_IsActive(pHVar3,1,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          this_00 = (UQuery_SingleQueryMatcher *)
                    RTSceneGrid_GetSceneHitForGridSnap(unaff_EDI,(MethodInfo *)0x0);
          if (this_00 == (UQuery_SingleQueryMatcher *)0x0) goto code_?;
          bVar4 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  UQuery+SingleQueryMatcher::UQuery_SingleQueryMatcher_IsInUse
                            (this_00,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            RTSceneGrid_SnapToObjectHitPoint
                      (unaff_EDI,(GameObjectRayHit *)(this_00->fields)._.m_Matchers,
                       RTSceneGrid_SnapToPointMode__Enum_Exact,(MethodInfo *)0x0);
          }
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* RTSceneGrid() */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid__ctor(RTSceneGrid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__MonoSingleton__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    func_?(&TypeInfo__RTG__SceneGridHotkeys);
    func_?(&TypeInfo__RTG__XZGridLookAndFeel);
    func_?(&TypeInfo__RTG__XZGridSettings);
    cRam_? = '\x01';
  }
  this_00 = (SceneGridHotkeys *)func_?(TypeInfo__RTG__SceneGridHotkeys);
  SceneGridHotkeys::SceneGridHotkeys__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._hotkeys = this_00;
  func_?(&(this->fields)._hotkeys,this_00);
  this_01 = (XZGridSettings *)func_?(TypeInfo__RTG__XZGridSettings);
  XZGridSettings::XZGridSettings__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._settings = this_01;
  func_?(&(this->fields)._settings,this_01);
  this_02 = (XZGridLookAndFeel *)func_?(TypeInfo__RTG__XZGridLookAndFeel);
  XZGridLookAndFeel::XZGridLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_02;
  func_?(&(this->fields)._lookAndFeel,this_02);
  this_03 = (List_1_UnityEngine_Camera_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
  (this->fields)._renderIgnoreCameras = this_03;
  func_?();
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor
            ((Singleton_1_System_Object_ *)this,
             MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__MonoSingleton__);
  return;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_Look
                    (Vector3 *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    uVar2 = (pXVar1->fields)._rotationAngles.x;
    uVar3 = (pXVar1->fields)._rotationAngles.y;
    euler.y = (float)uVar3 * _UNK_?;
    euler.x = (float)uVar2 * _UNK_?;
    euler.z = (pXVar1->fields)._rotationAngles.z * _UNK_?;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
    fVar5 = pQVar4->x;
    puVar6 = (undefined *)pQVar4->w;
    if (cRam_? == '\0') {
      puVar6 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar7 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    rotation.y = (float)uVar8;
    rotation.x = fVar5;
    rotation.z = (float)uVar9;
    rotation.w = (float)puVar6;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xfffffff0,rotation,*pVVar7,(MethodInfo *)0x0);
    fVar10 = pVVar7->y;
    fVar5 = pVVar7->z;
    __return_storage_ptr__->x = pVVar7->x;
    __return_storage_ptr__->y = fVar10;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar11)();
  return pVVar7;
}


/* Vector3 get_Normal() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_Normal
                    (Vector3 *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    uVar2 = (pXVar1->fields)._rotationAngles.x;
    uVar3 = (pXVar1->fields)._rotationAngles.y;
    euler.y = (float)uVar3 * _UNK_?;
    euler.x = (float)uVar2 * _UNK_?;
    euler.z = (pXVar1->fields)._rotationAngles.z * _UNK_?;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
    fVar5 = pQVar4->x;
    puVar6 = (undefined *)pQVar4->w;
    if (cRam_? == '\0') {
      puVar6 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar7 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    rotation.y = (float)uVar8;
    rotation.x = fVar5;
    rotation.z = (float)uVar9;
    rotation.w = (float)puVar6;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xfffffff0,rotation,*pVVar7,(MethodInfo *)0x0);
    fVar10 = pVVar7->y;
    fVar5 = pVVar7->z;
    __return_storage_ptr__->x = pVVar7->x;
    __return_storage_ptr__->y = fVar10;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar11)();
  return pVVar7;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_Right
                    (Vector3 *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    uVar2 = (pXVar1->fields)._rotationAngles.x;
    uVar3 = (pXVar1->fields)._rotationAngles.y;
    euler.y = (float)uVar3 * _UNK_?;
    euler.x = (float)uVar2 * _UNK_?;
    euler.z = (pXVar1->fields)._rotationAngles.z * _UNK_?;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
    fVar5 = pQVar4->x;
    puVar6 = (undefined *)pQVar4->w;
    if (cRam_? == '\0') {
      puVar6 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar7 = &TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    rotation.y = (float)uVar8;
    rotation.x = fVar5;
    rotation.z = (float)uVar9;
    rotation.w = (float)puVar6;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xfffffff0,rotation,*pVVar7,(MethodInfo *)0x0);
    fVar10 = pVVar7->y;
    fVar5 = pVVar7->z;
    __return_storage_ptr__->x = pVVar7->x;
    __return_storage_ptr__->y = fVar10;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar11)();
  return pVVar7;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_Rotation
          (Quaternion *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pXVar1 = (this->fields)._settings;
  if (pXVar1 != (XZGridSettings *)0x0) {
    QStack_2.y = (pXVar1->fields)._rotationAngles.x;
    QStack_2.z = (pXVar1->fields)._rotationAngles.y;
    QStack_2.w = (pXVar1->fields)._rotationAngles.z * _UNK_?;
    euler.y = QStack_2.z * _UNK_?;
    euler.x = QStack_2.y * _UNK_?;
    euler.z = QStack_2.w;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       (&QStack_2,euler,(MethodInfo *)0x0);
    fVar4 = pQVar3->y;
    fVar5 = pQVar3->z;
    fVar6 = pQVar3->w;
    __return_storage_ptr__->x = pQVar3->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    __return_storage_ptr__->w = fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pQVar3 = (Quaternion *)(*pcVar7)();
  return pQVar3;
}


/* Matrix4x4 get_WorldMatrix() */

Matrix4x4 *
Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_WorldMatrix
          (Matrix4x4 *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pVVar1 = RTSceneGrid_get_Normal(&VStack_2,this,(MethodInfo *)0x0);
  QStack_3.y = pVVar1->x;
  QStack_3.z = pVVar1->y;
  QStack_3.w = pVVar1->z;
  pXVar4 = (this->fields)._settings;
  if (pXVar4 != (XZGridSettings *)0x0) {
    VStack_2.z = (pXVar4->fields)._yOffset;
    VStack_2.x = QStack_3.y * VStack_2.z;
    VStack_2.y = QStack_3.z * VStack_2.z;
    VStack_2.z = QStack_3.w * VStack_2.z;
    QStack_3.y = (pXVar4->fields)._rotationAngles.x;
    QStack_3.z = (pXVar4->fields)._rotationAngles.y;
    QStack_3.w = (pXVar4->fields)._rotationAngles.z * _UNK_?;
    euler.y = QStack_3.z * _UNK_?;
    euler.x = QStack_3.y * _UNK_?;
    euler.z = QStack_3.w;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       (&QStack_3,euler,(MethodInfo *)0x0);
    QStack_3.x = pQVar5->x;
    QStack_3.y = pQVar5->y;
    QStack_3.z = pQVar5->z;
    QStack_3.w = pQVar5->w;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos.y = VStack_2.y;
    pos.x = VStack_2.x;
    pos.z = VStack_2.z;
    q.y = QStack_3.y;
    q.x = QStack_3.x;
    q.z = QStack_3.z;
    q.w = QStack_3.w;
    pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffffa0,pos,q,
                        TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
    fVar7 = pMVar6->m10;
    fVar8 = pMVar6->m20;
    fVar9 = pMVar6->m30;
    __return_storage_ptr__->m00 = pMVar6->m00;
    __return_storage_ptr__->m10 = fVar7;
    __return_storage_ptr__->m20 = fVar8;
    __return_storage_ptr__->m30 = fVar9;
    fVar7 = pMVar6->m11;
    fVar8 = pMVar6->m21;
    fVar9 = pMVar6->m31;
    __return_storage_ptr__->m01 = pMVar6->m01;
    __return_storage_ptr__->m11 = fVar7;
    __return_storage_ptr__->m21 = fVar8;
    __return_storage_ptr__->m31 = fVar9;
    fVar7 = pMVar6->m12;
    fVar8 = pMVar6->m22;
    fVar9 = pMVar6->m32;
    __return_storage_ptr__->m02 = pMVar6->m02;
    __return_storage_ptr__->m12 = fVar7;
    __return_storage_ptr__->m22 = fVar8;
    __return_storage_ptr__->m32 = fVar9;
    fVar7 = pMVar6->m13;
    fVar8 = pMVar6->m23;
    fVar9 = pMVar6->m33;
    __return_storage_ptr__->m03 = pMVar6->m03;
    __return_storage_ptr__->m13 = fVar7;
    __return_storage_ptr__->m23 = fVar8;
    __return_storage_ptr__->m33 = fVar9;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pMVar6 = (Matrix4x4 *)(*pcVar10)();
  return pMVar6;
}


/* Plane get_WorldPlane() */

Plane * Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_WorldPlane
                  (Plane *__return_storage_ptr__,RTSceneGrid *this,MethodInfo *method)

{
  pVVar1 = RTSceneGrid_get_Normal((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
  value = *pVVar1;
  pVVar1 = RTSceneGrid_get_Normal((Vector3 *)&stack0xffffffd4,this,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  pXVar5 = (this->fields)._settings;
  if (pXVar5 != (XZGridSettings *)0x0) {
    fVar6 = (pXVar5->fields)._yOffset;
    (__return_storage_ptr__->m_Normal).x = 0.0;
    (__return_storage_ptr__->m_Normal).y = 0.0;
    (__return_storage_ptr__->m_Normal).z = 0.0;
    __return_storage_ptr__->m_Distance = 0.0;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffd4,value,(MethodInfo *)0x0);
    uVar7 = pVVar1->x;
    uVar8 = pVVar1->y;
    fVar9 = pVVar1->z;
    (__return_storage_ptr__->m_Normal).x = (float)uVar7;
    (__return_storage_ptr__->m_Normal).y = (float)uVar8;
    (__return_storage_ptr__->m_Normal).z = fVar9;
    __return_storage_ptr__->m_Distance =
         (float)((uint)((float)uVar7 * (float)uVar2 * fVar6 + (float)uVar8 * (float)uVar3 * fVar6 +
                       fVar9 * fVar4 * fVar6) ^
                __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pPVar11 = (Plane *)(*pcVar10)();
  return pPVar11;
}


/* Single get_YOffset() */

float Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_get_YOffset
                (RTSceneGrid *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pXVar2 = (this->fields)._settings;
  if (pXVar2 != (XZGridSettings *)0x0) {
    return (pXVar2->fields)._yOffset;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_YOffset(Single) */

void Assembly-CSharp.dll::RTG::RTSceneGrid::RTSceneGrid_set_YOffset
               (RTSceneGrid *this,float value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pXVar2 = (this->fields)._settings;
  if (pXVar2 != (XZGridSettings *)0x0) {
    (pXVar2->fields)._yOffset = value;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

