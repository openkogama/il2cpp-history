
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
       (uStack_3 = CONCAT44(pOVar1[4].monitor,(undefined4)uStack_3), pOVar2 != (Object__Class *)0x0
       )) {
      pIVar4 = (pOVar2->_0).image;
      uVar5 = 0;
      uVar6 = *(ushort *)((int)&pIVar4[4].nameNoExt + 2);
      if (uVar6 != 0) {
        pcVar7 = pIVar4[2].name;
        do {
          if (*(IInputDevice__Class **)(pcVar7 + (uint)uVar5 * 8) == TypeInfo__RTG__IInputDevice) {
            puVar8 = &(pOVar2->_0).image[5].customAttributeCount +
                      *(int *)(pcVar7 + (uint)uVar5 * 8 + 4) * 2;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      puVar8 = (uint32_t *)func_?(pOVar2,TypeInfo__RTG__IInputDevice,6);
code_?:
      puVar9 = (undefined4 *)
                (*(code *)*puVar8)(auStack_10,pOVar2,uStack_3._4_4_,
                                    (Il2CppMetadataImageHandle)puVar8[1]);
      uStack_11 = *puVar9;
      uStack_12 = puVar9[1];
      uStack_13 = puVar9[2];
      uStack_14 = puVar9[3];
      uStack_3 = *(undefined8 *)(puVar9 + 4);
      this_00 = (SceneRaycastFilter *)func_?(TypeInfo__RTG__SceneRaycastFilter);
      SceneRaycastFilter::SceneRaycastFilter__ctor(this_00,(MethodInfo *)0x0);
      pMVar15 = 
      MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
      if ((this_00 != (SceneRaycastFilter *)0x0) &&
         (pLVar16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this_00->fields)._allowedObjectTypes,
         pLVar16 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
        piVar17 = &(pLVar16->fields)._version;
        *piVar17 = *piVar17 + 1;
        pRVar18 = (pLVar16->fields)._items;
        if (pRVar18 != (RegexCharClass_SingleRange__Array *)0x0) {
          uVar19 = (pLVar16->fields)._size;
          if (uVar19 < pRVar18->max_length) {
            (pLVar16->fields)._size = uVar19 + 1;
            if (pRVar18->max_length <= uVar19) goto code_?;
            pRVar18->vector[uVar19].First = 1;
            pRVar18->vector[uVar19].Last = 0;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      (pLVar16,(RegexCharClass_SingleRange)0x1,pMVar15->klass->rgctx_data[0xe].method
                      );
          }
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
          }
          this_01 = (RTScene *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
          if (this_01 != (RTScene *)0x0) {
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                             );
              func_?(&
                              MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Item_int_
                             );
              func_?(&TypeInfo__RTG__SceneRaycastHit);
              cRam_? = '\x01';
            }
            hits = (this_01->fields)._objectHitBuffer;
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__
                             );
              func_?(&
                              MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                             );
              func_?(&
                              MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__get_Count__
                             );
              cRam_? = '\x01';
            }
            if (hits != (List_1_RTG_GameObjectRayHit_ *)0x0) {
              length = (hits->fields)._size;
              piVar17 = &(hits->fields)._version;
              *piVar17 = *piVar17 + 1;
              (hits->fields)._size = 0;
              if (0 < length) {
                mscorlib.dll::System::Array::Array_Clear
                          ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
              }
              pLVar20 = (this_00->fields)._allowedObjectTypes;
              if (pLVar20 != (List_1_RTG_GameObjectType_ *)0x0) {
                if ((pLVar20->fields)._size != 0) {
                  ray.m_Origin.y = (float)uStack_12;
                  ray.m_Origin.x = (float)uStack_11;
                  ray.m_Origin.z = (float)uStack_13;
                  ray.m_Direction.x = (float)uStack_14;
                  ray.m_Direction.y = (float)(int)uStack_3;
                  ray.m_Direction.z = (float)((ulonglong)uStack_3 >> 0x20);
                  RTScene::RTScene_RaycastAllObjectsSorted
                            (this_01,ray,SceneRaycastPrecision__Enum_BestFit,hits,(MethodInfo *)0x0)
                  ;
                  SceneRaycastFilter::SceneRaycastFilter_FilterHits(this_00,hits,(MethodInfo *)0x0);
                }
                pLVar16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this_01->fields)._objectHitBuffer;
                if (pLVar16 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              0x0) {
                  if ((pLVar16->fields)._size == 0) {
                    item1.First = 0;
                    item1.Last = 0;
                  }
                  else {
                    item1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar16,0,
                                       MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Item_int_
                                      );
                  }
                  ray_00.m_Origin.y = (float)uStack_12;
                  ray_00.m_Origin.x = (float)uStack_11;
                  ray_00.m_Origin.z = (float)uStack_13;
                  ray_00.m_Direction.x = (float)uStack_14;
                  ray_00.m_Direction.y = (float)(int)uStack_3;
                  ray_00.m_Direction.z = (float)((ulonglong)uStack_3 >> 0x20);
                  item2 = RTScene::RTScene_RaycastSceneGridIfVisible
                                    (this_01,ray_00,(MethodInfo *)0x0);
                  this_02 = (Tuple_2_Object_Object_ *)
                            func_?(TypeInfo__RTG__SceneRaycastHit);
                  mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
                            (this_02,(Object *)item1,(Object *)item2,(MethodInfo *)0x0);
                  return (SceneRaycastHit *)this_02;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  pSVar22 = (SceneRaycastHit *)(*pcVar21)();
  return pSVar22;
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
        pcVar6 = pIVar3[2].name;
        do {
          if (*(IInputDevice__Class **)(pcVar6 + (uint)uVar4 * 8) == TypeInfo__RTG__IInputDevice) {
            puVar7 = &(pOVar2->_0).image[4].exportedTypeCount +
                     *(int *)(pcVar6 + (uint)uVar4 * 8 + 4) * 2;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      puVar7 = (uint32_t *)func_?(pOVar2,TypeInfo__RTG__IInputDevice,0);
code_?:
      (*(code *)*puVar7)(pOVar2,puVar7[1]);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
                          ((AABB *)&stack0xffffff60,renderCamera,(MethodInfo *)0x0);
      fStack_4 = (pAVar3->_size).x;
      fStack_5 = (pAVar3->_size).y;
      fStack_6 = (pAVar3->_size).z;
      fStack_7 = (pAVar3->_center).x;
      uVar8 = (pAVar3->_center).y;
      uVar9 = (pAVar3->_center).z;
      fStack_10 = *(float *)&pAVar3->_isValid;
      fStack_11 = (float)uVar8;
      fStack_12 = (float)uVar9;
      QStack_13.x = fStack_4;
      QStack_13.y = fStack_5;
      QStack_13.z = fStack_6;
      QStack_13.w = fStack_7;
      pPVar14 = RTSceneGrid_get_WorldPlane(&PStack_15,this,(MethodInfo *)0x0);
      pt.y = fStack_11;
      pt.x = fStack_7;
      pt.z = fStack_12;
      pVVar16 = PlaneEx::PlaneEx_ProjectPoint(&VStack_17,*pPVar14,pt,(MethodInfo *)0x0);
      uVar18 = pVVar16->x;
      uVar19 = pVVar16->y;
      fVar20 = pVVar16->z;
      fVar21 = QStack_13.z * _UNK_?;
      uStack_22 = CONCAT44(0x3f800000,QStack_13.x * _UNK_?);
      fStack_23 = (float)uVar18;
      fStack_24 = (float)uVar19;
      VStack_17.z = fVar21;
      pQVar25 = RTSceneGrid_get_Rotation(&QStack_13,this,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)pQVar25->w;
      pos.y = fStack_24;
      pos.x = fStack_23;
      pos.z = fVar20;
      s.z = fVar21;
      s.x = (float)(undefined4)uStack_22;
      s.y = (float)uStack_22._4_4_;
      pMVar26 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                          ((Matrix4x4 *)&stack0xffffff20,pos,*pQVar25,s,(MethodInfo *)0x0);
      fStack_27 = pMVar26->m00;
      fStack_28 = pMVar26->m10;
      fStack_29 = pMVar26->m20;
      fStack_30 = pMVar26->m30;
      fStack_31 = pMVar26->m01;
      fStack_32 = pMVar26->m11;
      fStack_33 = pMVar26->m21;
      fStack_34 = pMVar26->m31;
      fStack_7 = pMVar26->m02;
      fStack_11 = pMVar26->m12;
      fStack_12 = pMVar26->m22;
      fStack_10 = pMVar26->m32;
      PStack_15.m_Normal.x = pMVar26->m03;
      PStack_15.m_Normal.y = pMVar26->m13;
      PStack_15.m_Normal.z = pMVar26->m23;
      PStack_15.m_Distance = pMVar26->m33;
      pXVar35 = (this->fields)._lookAndFeel;
      if (pXVar35 != (XZGridLookAndFeel *)0x0) {
        if ((pXVar35->fields)._useCellFading == 0) {
          if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
          }
          pMVar36 = (MaterialPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
          if (((pMVar36 == (MaterialPool *)0x0) ||
              (this_01 = MaterialPool::MaterialPool_get_XZGrid_Plane(pMVar36,(MethodInfo *)0x0),
              renderCamera == (Camera *)0x0)) ||
             (fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                                 (renderCamera,(MethodInfo *)0x0), this_01 == (Material *)0x0))
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CamFarPlaneDist,fVar20,(MethodInfo *)0x0);
          pTVar37 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)renderCamera,(MethodInfo *)0x0);
          if (pTVar37 == (Transform *)0x0) goto code_?;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_17,pTVar37,(MethodInfo *)0x0);
          uVar38 = pVVar16->x;
          uVar39 = pVVar16->y;
          fStack_24 = pVVar16->z;
          uStack_40 = uVar38;
          VStack_17.x = (float)uVar39;
          VStack_17.z = 0.0;
          value_05.w = 0.0;
          value_05.x = pVVar16->x;
          value_05.y = pVVar16->y;
          value_05.z = pVVar16->z;
          uStack_41 = uVar38;
          fStack_23 = (float)uVar39;
          VStack_17.y = fStack_24;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__CamWorldPos,value_05,(MethodInfo *)0x0);
          value_04.m10 = fStack_28;
          value_04.m00 = fStack_27;
          value_04.m20 = fStack_29;
          value_04.m30 = fStack_30;
          value_04.m01 = fStack_31;
          value_04.m11 = fStack_32;
          value_04.m21 = fStack_33;
          value_04.m31 = fStack_34;
          value_04.m02 = fStack_7;
          value_04.m12 = fStack_11;
          value_04.m22 = fStack_12;
          value_04.m32 = fStack_10;
          value_04.m03 = PStack_15.m_Normal.x;
          value_04.m13 = PStack_15.m_Normal.y;
          value_04.m23 = PStack_15.m_Normal.z;
          value_04.m33 = PStack_15.m_Distance;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_01,StringLiteral__TransformMatrix,value_04,(MethodInfo *)0x0);
          pXVar1 = (this->fields)._settings;
          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CellSizeX,(pXVar1->fields)._cellSizeX,(MethodInfo *)0x0
                    );
          pXVar1 = (this->fields)._settings;
          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CellSizeZ,(pXVar1->fields)._cellSizeZ,(MethodInfo *)0x0
                    );
          pXVar35 = (this->fields)._lookAndFeel;
          if (pXVar35 == (XZGridLookAndFeel *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__LineColor,(Vector4)(pXVar35->fields)._lineColor,
                     (MethodInfo *)0x0);
          pVVar16 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                    MVWorldObject_get_WorldPosition(&VStack_17,(MVWorldObject *)0x0,method_00);
          uVar42 = pVVar16->x;
          uVar43 = pVVar16->y;
          fStack_24 = pVVar16->z;
          uStack_40 = uVar42;
          VStack_17.x = (float)uVar43;
          VStack_17.z = 0.0;
          value_07.w = 0.0;
          value_07.x = pVVar16->x;
          value_07.y = pVVar16->y;
          value_07.z = pVVar16->z;
          uStack_41 = uVar42;
          fStack_23 = (float)uVar43;
          VStack_17.y = fStack_24;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridOrigin,value_07,(MethodInfo *)0x0);
          pVVar16 = RTSceneGrid_get_Right(&VStack_17,this,(MethodInfo *)0x0);
          uVar44 = pVVar16->x;
          uVar45 = pVVar16->y;
          fStack_24 = pVVar16->z;
          uStack_40 = uVar44;
          VStack_17.x = (float)uVar45;
          VStack_17.z = 0.0;
          value_08.w = 0.0;
          value_08.x = pVVar16->x;
          value_08.y = pVVar16->y;
          value_08.z = pVVar16->z;
          uStack_41 = uVar44;
          fStack_23 = (float)uVar45;
          VStack_17.y = fStack_24;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridRight,value_08,(MethodInfo *)0x0);
          pVVar16 = RTSceneGrid_get_Look(&VStack_17,this,(MethodInfo *)0x0);
          uVar46 = pVVar16->x;
          uVar47 = pVVar16->y;
          fStack_24 = pVVar16->z;
          uStack_40 = uVar46;
          VStack_17.x = (float)uVar47;
          VStack_17.z = 0.0;
          value_09.w = 0.0;
          value_09.x = pVVar16->x;
          value_09.y = pVVar16->y;
          value_09.z = pVVar16->z;
          uStack_41 = uVar46;
          fStack_23 = (float)uVar47;
          VStack_17.y = fStack_24;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridLook,value_09,(MethodInfo *)0x0);
        }
        else {
          pPVar14 = RTSceneGrid_get_WorldPlane((Plane *)&QStack_13,this,(MethodInfo *)0x0);
          QStack_13.x = (pPVar14->m_Normal).x;
          QStack_13.y = (pPVar14->m_Normal).y;
          QStack_13.z = (pPVar14->m_Normal).z;
          QStack_13.w = pPVar14->m_Distance;
          if ((renderCamera == (Camera *)0x0) ||
             (pTVar37 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)renderCamera,(MethodInfo *)0x0),
             pTVar37 == (Transform *)0x0)) goto code_?;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_17,pTVar37,(MethodInfo *)0x0);
          plane.m_Normal.y = QStack_13.y;
          plane.m_Normal.x = QStack_13.x;
          plane.m_Normal.z = QStack_13.z;
          plane.m_Distance = QStack_13.w;
          fStack_48 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,*pVVar16,(MethodInfo *)0x0);
          MathEx::MathEx_GetNumDigits((int)fStack_48,(MethodInfo *)0x0);
          dVar49 = _UNK_?;
          func_?();
          fVar20 = (float)dVar49;
          dVar49 = _UNK_?;
          func_?();
          pXVar35 = (this->fields)._lookAndFeel;
          fStack_50 = (float)dVar49;
          if (pXVar35 == (XZGridLookAndFeel *)0x0) goto code_?;
          QStack_13.x = (pXVar35->fields)._lineColor.r;
          QStack_13.y = (pXVar35->fields)._lineColor.g;
          QStack_13.z = (pXVar35->fields)._lineColor.b;
          QStack_13.w = (pXVar35->fields)._lineColor.a;
          fStack_51 = (fStack_50 - fStack_48) / (fStack_50 - fVar20);
          fStack_24 = _UNK_? - fStack_51;
          if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
          }
          pMVar36 = (MaterialPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
          if (pMVar36 == (MaterialPool *)0x0) goto code_?;
          this_01 = MaterialPool::MaterialPool_get_XZGrid_Plane(pMVar36,(MethodInfo *)0x0);
          fStack_48 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                                (renderCamera,(MethodInfo *)0x0);
          if (this_01 == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CamFarPlaneDist,fStack_48,(MethodInfo *)0x0);
          pTVar37 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)renderCamera,(MethodInfo *)0x0);
          if (pTVar37 == (Transform *)0x0) goto code_?;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_17,pTVar37,(MethodInfo *)0x0);
          uStack_22._0_4_ = pVVar16->x;
          uStack_22._4_4_ = pVVar16->y;
          fStack_52 = pVVar16->z;
          uStack_40 = (undefined4)uStack_22;
          VStack_17.x = (float)uStack_22._4_4_;
          VStack_17.z = 0.0;
          value.w = 0.0;
          value.x = pVVar16->x;
          value.y = pVVar16->y;
          value.z = pVVar16->z;
          VStack_17.y = fStack_52;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__CamWorldPos,value,(MethodInfo *)0x0);
          pVVar16 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                    MVWorldObject_get_WorldPosition
                              (&VStack_17,(MVWorldObject *)0x0,in_stack_53);
          uStack_22._0_4_ = pVVar16->x;
          uStack_22._4_4_ = pVVar16->y;
          fStack_52 = pVVar16->z;
          uStack_40 = (undefined4)uStack_22;
          VStack_17.x = (float)uStack_22._4_4_;
          VStack_17.z = 0.0;
          value_00.w = 0.0;
          value_00.x = pVVar16->x;
          value_00.y = pVVar16->y;
          value_00.z = pVVar16->z;
          VStack_17.y = fStack_52;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridOrigin,value_00,(MethodInfo *)0x0);
          pVVar16 = RTSceneGrid_get_Right(&VStack_17,this,(MethodInfo *)0x0);
          uStack_22._0_4_ = pVVar16->x;
          uStack_22._4_4_ = pVVar16->y;
          fStack_52 = pVVar16->z;
          uStack_40 = (undefined4)uStack_22;
          VStack_17.x = (float)uStack_22._4_4_;
          VStack_17.z = 0.0;
          value_01.w = 0.0;
          value_01.x = pVVar16->x;
          value_01.y = pVVar16->y;
          value_01.z = pVVar16->z;
          VStack_17.y = fStack_52;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridRight,value_01,(MethodInfo *)0x0);
          pVVar16 = RTSceneGrid_get_Look(&VStack_17,this,(MethodInfo *)0x0);
          uStack_22._0_4_ = pVVar16->x;
          uStack_22._4_4_ = pVVar16->y;
          fStack_52 = pVVar16->z;
          uStack_40 = (undefined4)uStack_22;
          VStack_17.x = (float)uStack_22._4_4_;
          VStack_17.z = 0.0;
          value_03.w = 0.0;
          value_03.x = pVVar16->x;
          value_03.y = pVVar16->y;
          value_03.z = pVVar16->z;
          VStack_17.y = fStack_52;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__GridLook,value_03,(MethodInfo *)0x0);
          value_02.m10 = fStack_28;
          value_02.m00 = fStack_27;
          value_02.m20 = fStack_29;
          value_02.m30 = fStack_30;
          value_02.m01 = fStack_31;
          value_02.m11 = fStack_32;
          value_02.m21 = fStack_33;
          value_02.m31 = fStack_34;
          value_02.m02 = fStack_7;
          value_02.m12 = fStack_11;
          value_02.m22 = fStack_12;
          value_02.m32 = fStack_10;
          value_02.m03 = PStack_15.m_Normal.x;
          value_02.m13 = PStack_15.m_Normal.y;
          value_02.m23 = PStack_15.m_Normal.z;
          value_02.m33 = PStack_15.m_Distance;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_01,StringLiteral__TransformMatrix,value_02,(MethodInfo *)0x0);
          pXVar35 = (this->fields)._lookAndFeel;
          if (pXVar35 == (XZGridLookAndFeel *)0x0) goto code_?;
          QStack_13.w = (pXVar35->fields)._lineColor.a * fStack_51;
          if (QStack_13.w != 0.0) {
            pXVar1 = (this->fields)._settings;
            if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                      (this_01,StringLiteral__CellSizeX,fVar20 * (pXVar1->fields)._cellSizeX,
                       (MethodInfo *)0x0);
            pXVar1 = (this->fields)._settings;
            if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                      (this_01,StringLiteral__CellSizeZ,fVar20 * (pXVar1->fields)._cellSizeZ,
                       (MethodInfo *)0x0);
            value_06.y = QStack_13.y;
            value_06.x = QStack_13.x;
            value_06.z = QStack_13.z;
            value_06.w = QStack_13.w;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      (this_01,StringLiteral__LineColor,value_06,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                      (this_01,0,(MethodInfo *)0x0);
            if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
            }
            pMVar54 = (MeshPool *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
            if (pMVar54 == (MeshPool *)0x0) goto code_?;
            pMVar55 = MeshPool::MeshPool_get_UnitQuadXZ(pMVar54,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Graphics);
            }
            matrix.m10 = fStack_28;
            matrix.m00 = fStack_27;
            matrix.m20 = fStack_29;
            matrix.m30 = fStack_30;
            matrix.m01 = fStack_31;
            matrix.m11 = fStack_32;
            matrix.m21 = fStack_33;
            matrix.m31 = fStack_34;
            matrix.m02 = fStack_7;
            matrix.m12 = fStack_11;
            matrix.m22 = fStack_12;
            matrix.m32 = fStack_10;
            matrix.m03 = PStack_15.m_Normal.x;
            matrix.m13 = PStack_15.m_Normal.y;
            matrix.m23 = PStack_15.m_Normal.z;
            matrix.m33 = PStack_15.m_Distance;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                      (pMVar55,matrix,(MethodInfo *)0x0);
          }
          pXVar35 = (this->fields)._lookAndFeel;
          if (pXVar35 == (XZGridLookAndFeel *)0x0) goto code_?;
          QStack_13.w = (pXVar35->fields)._lineColor.a * fStack_24;
          if (QStack_13.w == 0.0) {
            return;
          }
          pXVar1 = (this->fields)._settings;
          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CellSizeX,fStack_50 * (pXVar1->fields)._cellSizeX,
                     (MethodInfo *)0x0);
          pXVar1 = (this->fields)._settings;
          if (pXVar1 == (XZGridSettings *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (this_01,StringLiteral__CellSizeZ,fStack_50 * (pXVar1->fields)._cellSizeZ,
                     (MethodInfo *)0x0);
          value_10.y = QStack_13.y;
          value_10.x = QStack_13.x;
          value_10.z = QStack_13.z;
          value_10.w = QStack_13.w;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__LineColor,value_10,(MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                  (this_01,0,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar54 = (MeshPool *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
        if (pMVar54 != (MeshPool *)0x0) {
          pMVar55 = MeshPool::MeshPool_get_UnitQuadXZ(pMVar54,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          matrix_00.m10 = fStack_28;
          matrix_00.m00 = fStack_27;
          matrix_00.m20 = fStack_29;
          matrix_00.m30 = fStack_30;
          matrix_00.m01 = fStack_31;
          matrix_00.m11 = fStack_32;
          matrix_00.m21 = fStack_33;
          matrix_00.m31 = fStack_34;
          matrix_00.m02 = fStack_7;
          matrix_00.m12 = fStack_11;
          matrix_00.m22 = fStack_12;
          matrix_00.m32 = fStack_10;
          matrix_00.m03 = PStack_15.m_Normal.x;
          matrix_00.m13 = PStack_15.m_Normal.y;
          matrix_00.m23 = PStack_15.m_Normal.z;
          matrix_00.m33 = PStack_15.m_Distance;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (pMVar55,matrix_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar56 = (code *)swi(3);
  (*pcVar56)();
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
  if (snapMode == RTSceneGrid_SnapToPointMode__Enum_Exact) {
    pVVar1 = RTSceneGrid_get_Normal(&VStack_2,this,(MethodInfo *)0x0);
    VVar3 = *pVVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_5.x = (pVVar4->zeroVector).x;
    VStack_5.y = (pVVar4->zeroVector).y;
    VStack_5.z = (pVVar4->zeroVector).z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_2,VVar3,(MethodInfo *)0x0);
    uStack_6._0_4_ = pVVar1->x;
    uStack_6._4_4_ = pVVar1->y;
    fStack_7 = pVVar1->z;
    fVar8 = (float)((uint)(VStack_5.y * uStack_6._4_4_ + VStack_5.x * (float)uStack_6 +
                           VStack_5.z * fStack_7) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if (objectHit != (GameObjectRayHit *)0x0) {
      VStack_5.x = (objectHit->fields)._hitPoint.x;
      VStack_5.y = (objectHit->fields)._hitPoint.y;
      VStack_5.z = (objectHit->fields)._hitPoint.z;
      pXVar9 = (this->fields)._settings;
      if (pXVar9 != (XZGridSettings *)0x0) {
        fVar10 = uStack_6._4_4_ * VStack_5.y + (float)uStack_6 * VStack_5.x;
        fStack_7 = fStack_7 * VStack_5.z;
        goto code_?;
      }
    }
  }
  else if (objectHit != (GameObjectRayHit *)0x0) {
    gameObject = (objectHit->fields)._hitObject;
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__ObjectBounds);
    }
    pOVar11 = ObjectBounds::ObjectBounds_CalcWorldOBB
                        ((OBB *)&stack0xffffff40,gameObject,(ObjectBounds_QueryConfig)ZEXT816(1),
                         (MethodInfo *)0x0);
    VVar3 = pOVar11->_size;
    pVVar1 = &pOVar11->_center;
    fVar8 = pVVar1->x;
    fVar10 = (pOVar11->_center).y;
    uStack_6._0_4_ = pVVar1->x;
    uStack_6._4_4_ = pVVar1->y;
    fStack_7 = (pOVar11->_center).z;
    boxCenter = *pVVar1;
    uVar12 = (pOVar11->_rotation).w;
    uVar13 = (pOVar11->_rotation).x;
    uVar14 = (pOVar11->_rotation).y;
    uVar15 = (pOVar11->_rotation).z;
    boxRotation.z = (float)uVar15;
    boxRotation.y = (float)uVar14;
    boxRotation.x = (float)uVar13;
    if ((char)*(undefined4 *)&pOVar11->_isValid == '\0') {
      return;
    }
    pVVar1 = RTSceneGrid_get_Normal(&VStack_5,this,(MethodInfo *)0x0);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_5,*pVVar1,(MethodInfo *)0x0);
    VStack_2.x = pVVar1->x;
    VStack_2.y = pVVar1->y;
    VStack_2.z = pVVar1->z;
    fVar8 = (float)((uint)(fVar8 * VStack_2.x + fVar10 * VStack_2.y + fStack_7 * VStack_2.z) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    boxRotation.w = (float)uVar12;
    points = BoxMath::BoxMath_CalcBoxCornerPoints(boxCenter,VVar3,boxRotation,(MethodInfo *)0x0);
    VStack_5.x = (objectHit->fields)._hitPoint.x;
    VStack_5.y = (objectHit->fields)._hitPoint.y;
    VStack_5.z = (objectHit->fields)._hitPoint.z;
    fStack_16 = fVar8;
    if (_UNK_? <=
        VStack_2.y * VStack_5.y + VStack_2.x * VStack_5.x + VStack_2.z * VStack_5.z + fVar8)
    {
      plane_00.m_Normal.z = VStack_2.z;
      plane_00.m_Normal.x = VStack_2.x;
      plane_00.m_Normal.y = VStack_2.y;
      plane_00.m_Distance = fVar8;
      iVar17 = PlaneEx::PlaneEx_GetFurthestPtInFront(plane_00,points,(MethodInfo *)0x0);
    }
    else {
      plane.m_Normal.z = VStack_2.z;
      plane.m_Normal.x = VStack_2.x;
      plane.m_Normal.y = VStack_2.y;
      plane.m_Distance = fVar8;
      iVar17 = PlaneEx::PlaneEx_GetFurthestPtBehind(plane,points,(MethodInfo *)0x0);
    }
    if (-1 < iVar17) {
      if (points == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      puVar18 = (undefined8 *)
                func_?(&VStack_5,points,iVar17,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                               );
      uStack_6 = *puVar18;
      fStack_7 = *(float *)(puVar18 + 1);
    }
    pVVar1 = RTSceneGrid_get_Normal(&VStack_5,this,(MethodInfo *)0x0);
    VVar3 = *pVVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_5.x = (pVVar4->zeroVector).x;
    VStack_5.y = (pVVar4->zeroVector).y;
    VStack_5.z = (pVVar4->zeroVector).z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_2,VVar3,(MethodInfo *)0x0);
    uVar19 = pVVar1->x;
    uVar20 = pVVar1->y;
    fVar8 = (float)((uint)(VStack_5.y * (float)uVar20 + VStack_5.x * (float)uVar19 +
                           VStack_5.z * pVVar1->z) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    pXVar9 = (this->fields)._settings;
    if (pXVar9 != (XZGridSettings *)0x0) {
      fVar10 = uStack_6._4_4_ * (float)uVar20 + (float)uStack_6 * (float)uVar19;
      fStack_7 = fStack_7 * pVVar1->z;
code_?:
      (pXVar9->fields)._yOffset = fVar10 + fStack_7 + fVar8;
      return;
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&StringLiteral_Grid_down);
    func_?(&StringLiteral_Grid_up);
    func_?(&StringLiteral_Snap_to_cursor_pick_point);
    cRam_? = '\x01';
  }
  pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor_1(pHVar1,StringLiteral_Grid_up,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar1 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_RightBracket,(MethodInfo *)0x0);
    (this_00->fields)._gridUp = pHVar1;
    func_?();
    pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
    Hotkeys::Hotkeys__ctor_1
              (pHVar1,StringLiteral_Grid_down,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar1 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_LeftBracket,(MethodInfo *)0x0);
      (this_00->fields)._gridDown = pHVar1;
      func_?();
      pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
      Hotkeys::Hotkeys__ctor_1
                (pHVar1,StringLiteral_Snap_to_cursor_pick_point,(HotkeysStaticData)0x0,
                 (MethodInfo *)0x0);
      if (pHVar1 != (Hotkeys *)0x0) {
        (pHVar1->fields)._lAlt = 1;
        (this_00->fields)._snapToCursorPickPoint = pHVar1;
        func_?();
        Settings::Settings__ctor((Settings *)this_00,(MethodInfo *)0x0);
        ppSVar2 = &(this->fields)._hotkeys;
        *ppSVar2 = this_00;
        func_?(ppSVar2,this_00);
        this_01 = (XZGridSettings *)func_?(TypeInfo__RTG__XZGridSettings);
        (this_01->fields)._isVisible = 1;
        (this_01->fields)._cellSizeX = 1.0;
        (this_01->fields)._cellSizeZ = 1.0;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar4 = (pVVar3->zeroVector).y;
        fVar5 = (pVVar3->zeroVector).z;
        (this_01->fields)._rotationAngles.x = (pVVar3->zeroVector).x;
        (this_01->fields)._rotationAngles.y = fVar4;
        (this_01->fields)._rotationAngles.z = fVar5;
        (this_01->fields)._upDownStep = 1.0;
        Settings::Settings__ctor((Settings *)this_01,(MethodInfo *)0x0);
        (this->fields)._settings = this_01;
        func_?();
        this_02 = (XZGridLookAndFeel *)func_?();
        pCVar6 = ColorEx::ColorEx_FromByteValues
                            ((Color *)&stack0xffffffe8,0x80,0x80,0x80,0x66,(MethodInfo *)0x0);
        fVar5 = pCVar6->r;
        fVar4 = pCVar6->g;
        fVar7 = pCVar6->b;
        fVar8 = pCVar6->a;
        (this_02->fields)._useCellFading = 1;
        (this_02->fields)._lineColor.r = fVar5;
        (this_02->fields)._lineColor.g = fVar4;
        (this_02->fields)._lineColor.b = fVar7;
        (this_02->fields)._lineColor.a = fVar8;
        Settings::Settings__ctor((Settings *)this_02,(MethodInfo *)0x0);
        ppXVar9 = &(this->fields)._lookAndFeel;
        *ppXVar9 = this_02;
        func_?(ppXVar9);
        this_03 = (List_1_UnityEngine_Camera_ *)
                  func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>)
        ;
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
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
         (float)((uint)((float)uVar8 * (float)uVar3 * fVar6 + (float)uVar7 * (float)uVar2 * fVar6 +
                       fVar9 * fVar4 * fVar6) ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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

