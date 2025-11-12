
/* Void AddRenderIgnoreCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_AddRenderIgnoreCamera
               (RTCameraBackground *this,Camera *camera,MethodInfo *method)

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


/* List`1[UnityEngine.Camera] GetAllRenderIgnoreCameras() */

List_1_UnityEngine_Camera_ *
Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_GetAllRenderIgnoreCameras
          (RTCameraBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List_System__Collections__Generic__IEnumerable<UnityEngine::Camera>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (this->fields)._renderIgnoreCameras;
  this_00 = (List_1_UnityEngine_Camera_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List_System__Collections__Generic__IEnumerable<UnityEngine::Camera>_
            );
  return this_00;
}


/* Boolean IsRenderIgnoreCamera(Camera) */

bool Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_IsRenderIgnoreCamera
               (RTCameraBackground *this,Camera *camera,MethodInfo *method)

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


/* Void RemoveRenderIgnoreCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_RemoveRenderIgnoreCamera
               (RTCameraBackground *this,Camera *camera,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_Render_SystemCall
               (RTCameraBackground *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__get_Item_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__QuadShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__GradientOffset);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__FirstColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__FarPlaneHeight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__SecondColor);
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
    cVar2 = FUN_?(pLVar1,renderCamera);
    if (cVar2 != '\0') {
      return;
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields)._cameraToBkSettings;
    pCVar3 = (this->fields)._bkSettings;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)renderCamera,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar4) {
        this_01 = (this->fields)._cameraToBkSettings;
        if (this_01 == (Dictionary_2_UnityEngine_Camera_RTG_CameraBackgroundSettings_ *)0x0)
        goto code_?;
        pCVar3 = (CameraBackgroundSettings *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this_01,
                            (Object *)renderCamera,
                            MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__get_Item_UnityEngine__Camera_
                           );
      }
      if (pCVar3 != (CameraBackgroundSettings *)0x0) {
        if ((pCVar3->fields)._isVisible == 0) {
          return;
        }
        if (renderCamera != (Camera *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)renderCamera,(MethodInfo *)0x0);
          this_03 = (QuadShape3D *)FUN_?(TypeInfo__RTG__QuadShape3D);
          QuadShape3D::QuadShape3D__ctor(this_03,(MethodInfo *)0x0);
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                             (renderCamera,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar5 = CameraEx::CameraEx_GetFrustumWidthFromDistance
                             (renderCamera,fVar5,(MethodInfo *)0x0);
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                             (renderCamera,(MethodInfo *)0x0);
          fVar5 = fVar5 + _UNK_?;
          fVar6 = CameraEx::CameraEx_GetFrustumHeightFromDistance
                             (renderCamera,fVar6,(MethodInfo *)0x0);
          if (this_03 != (QuadShape3D *)0x0) {
            fVar6 = (float)((uint)(fVar6 + _UNK_?) & _UNK_?);
            (this_03->fields)._size.x = (float)((uint)fVar5 & _UNK_?);
            (this_03->fields)._size.y = fVar6;
            if (this_02 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              aCStack_7[0].r = 0.0;
              aCStack_7[0].g = 0.0;
              aCStack_7[0].b = 0.0;
              aCStack_7[0].a = 0.0;
              pvVar8 = (this_02->fields)._._.m_CachedPtr;
              if (pvVar8 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)this_02,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar8);
              bVar11 = cRam_? == '\0';
              (this_03->fields)._rotation.x = aCStack_7[0].r;
              (this_03->fields)._rotation.y = aCStack_7[0].g;
              (this_03->fields)._rotation.z = aCStack_7[0].b;
              (this_03->fields)._rotation.w = aCStack_7[0].a;
              if (bVar11) {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_12 = 0;
              fStack_13 = 0.0;
              pvVar8 = (this_02->fields)._._.m_CachedPtr;
              if (pvVar8 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)this_02,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar8,&uStack_12);
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                 ((Vector3 *)aCStack_7,this_02,(MethodInfo *)0x0);
              uVar10._0_4_ = pVVar14->x;
              uVar10._4_4_ = pVVar14->y;
              fVar5 = pVVar14->z;
              fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                                 (renderCamera,(MethodInfo *)0x0);
              fVar15 = uVar10._4_4_ * fVar6 * _UNK_?;
              fVar5 = fVar5 * fVar6 * _UNK_?;
              (this_03->fields)._center.x =
                   (float)uVar10 * fVar6 * _UNK_? + (float)uStack_12;
              (this_03->fields)._center.y = fVar15 + uStack_12._4_4_;
              (this_03->fields)._center.z = fVar5 + fStack_13;
              aCStack_7[0]._0_8_ = uVar10;
              if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).field_0x1c == 0) {
                FUN_?();
              }
              this_04 = (MaterialPool *)
                        Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                  (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
              if ((this_04 != (MaterialPool *)0x0) &&
                 (this_05 = MaterialPool::MaterialPool_get_LinearGradientCameraBk
                                      (this_04,(MethodInfo *)0x0), this_05 != (Material *)0x0)) {
                aCStack_7[0].r = (pCVar3->fields)._firstColor.r;
                aCStack_7[0].g = (pCVar3->fields)._firstColor.g;
                aCStack_7[0].b = (pCVar3->fields)._firstColor.b;
                aCStack_7[0].a = (pCVar3->fields)._firstColor.a;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                          (this_05,StringLiteral__FirstColor,aCStack_7,(MethodInfo *)0x0);
                aCStack_7[0].r = (pCVar3->fields)._secondColor.r;
                aCStack_7[0].g = (pCVar3->fields)._secondColor.g;
                aCStack_7[0].b = (pCVar3->fields)._secondColor.b;
                aCStack_7[0].a = (pCVar3->fields)._secondColor.a;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                          (this_05,StringLiteral__SecondColor,aCStack_7,(MethodInfo *)0x0);
                fVar5 = (pCVar3->fields)._gradientOffset;
                iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                  (StringLiteral__GradientOffset,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                          (this_05,iVar4,fVar5,(MethodInfo *)0x0);
                fVar5 = (this_03->fields)._size.y;
                iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                  (StringLiteral__FarPlaneHeight,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                          (this_05,iVar4,fVar5,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                          (this_05,0,(MethodInfo *)0x0);
                (*(this_03->klass->vtable).RenderSolid.methodPtr)
                          (this_03,(this_03->klass->vtable).RenderSolid.method);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetCameraBkSettings(Camera, CameraBackgroundSettings) */

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_SetCameraBkSettings
               (RTCameraBackground *this,Camera *camera,CameraBackgroundSettings *bkSettings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Add_UnityEngine__Camera__RTG__CameraBackgroundSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Remove_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__set_Item_UnityEngine__Camera__RTG__CameraBackgroundSettings_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bkSettings == (CameraBackgroundSettings *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields)._cameraToBkSettings;
    if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) goto code_?;
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (pDVar1,(Object *)camera,
                        MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                        ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Remove_UnityEngine__Camera_
    ;
    if (-1 < iVar2) {
      pDVar4 = (this->fields)._cameraToBkSettings;
      if (pDVar4 != (Dictionary_2_UnityEngine_Camera_RTG_CameraBackgroundSettings_ *)0x0) {
        if (camera == (Camera *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                    (ExceptionArgument__Enum_key,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((pDVar4->fields)._buckets != (Int32__Array *)0x0) {
          pIVar6 = (pDVar4->fields)._comparer;
          if (pIVar6 == (IEqualityComparer_1_UnityEngine_Camera_ *)0x0) {
            uVar7 = (*(camera->klass->vtable).GetHashCode.methodPtr)
                               (camera,(camera->klass->vtable).GetHashCode.method);
          }
          else {
            pvVar8 = MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Remove_UnityEngine__Camera_
                      ->klass->rgctx_data[1].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
              pvVar8 = (void *)FUN_?(pvVar8);
            }
            uVar7 = FUN_?(1,pvVar8,pIVar6,camera);
          }
          pIVar9 = (pDVar4->fields)._buckets;
          if (pIVar9 == (Int32__Array *)0x0) {
code_?:
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = (int)(uVar7 & 0x7fffffff) % (int)pIVar9->max_length;
          if ((uint)pIVar9->max_length <= uVar10) {
DAT_?:
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar11 = pIVar9->vector[(int)uVar10] - 1;
          uVar12 = 0xffffffff;
          while (uVar13 = uVar11, -1 < (int)uVar13) {
            pDVar14 = (pDVar4->fields)._entries;
            if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_Camera_RTG_CameraBackgroundSettings___Array
                           *)0x0) goto code_?;
            if ((uint)pDVar14->max_length <= uVar13) goto DAT_?;
            if (pDVar14->vector[(int)uVar13].hashCode == (uVar7 & 0x7fffffff)) {
              pIVar6 = (pDVar4->fields)._comparer;
              pIVar15 = pMVar3->klass->rgctx_data;
              if (pIVar6 == (IEqualityComparer_1_UnityEngine_Camera_ *)0x0) {
                pEVar16 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                          Object]::EqualityComparer_1_System_Object__get_Default(pIVar15[3].method);
                if (pEVar16 == (EqualityComparer_1_System_Object_ *)0x0) goto code_?;
                cVar17 = (*(pEVar16->klass->vtable).__unknown.methodPtr)
                                   (pEVar16,pDVar14->vector[(int)uVar13].key,camera,
                                    (pEVar16->klass->vtable).__unknown.method);
              }
              else {
                pvVar8 = pIVar15[1].rgctxDataDummy;
                pCVar18 = pDVar14->vector[(int)uVar13].key;
                if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
                  pvVar8 = (void *)FUN_?(pvVar8);
                }
                cVar17 = FUN_?(0,pvVar8,pIVar6,pCVar18,camera);
              }
              if (cVar17 != '\0') {
                if ((int)uVar12 < 0) {
                  pIVar9 = (pDVar4->fields)._buckets;
                  if (pIVar9 == (Int32__Array *)0x0) goto code_?;
                  if ((uint)pIVar9->max_length <= uVar10) goto DAT_?;
                  pIVar9->vector[(int)uVar10] = pDVar14->vector[(int)uVar13].next + 1;
                }
                else {
                  pDVar19 = (pDVar4->fields)._entries;
                  if (pDVar19 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_Camera_RTG_CameraBackgroundSettings___Array
                                 *)0x0) goto code_?;
                  if ((uint)pDVar19->max_length <= uVar12) goto DAT_?;
                  pDVar19->vector[(int)uVar12].next = pDVar14->vector[(int)uVar13].next;
                }
                pDVar14->vector[(int)uVar13].hashCode = -1;
                pDVar14->vector[(int)uVar13].next = (pDVar4->fields)._freeList;
                pDVar14->vector[(int)uVar13].key = (Camera *)0x0;
                pDVar14->vector[(int)uVar13].value = (CameraBackgroundSettings *)0x0;
                piVar20 = &(pDVar4->fields)._freeCount;
                *piVar20 = *piVar20 + 1;
                piVar20 = &(pDVar4->fields)._version;
                *piVar20 = *piVar20 + 1;
                (pDVar4->fields)._freeList = uVar13;
                return;
              }
            }
            uVar12 = uVar13;
            uVar11 = pDVar14->vector[(int)uVar13].next;
          }
        }
        return;
      }
      goto code_?;
    }
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._cameraToBkSettings;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (pDVar1,(Object *)camera,
                        MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                        ->klass->rgctx_data[0x21].method);
    pDVar4 = (this->fields)._cameraToBkSettings;
    if (pDVar4 != (Dictionary_2_UnityEngine_Camera_RTG_CameraBackgroundSettings_ *)0x0) {
      uVar21 = (undefined7)((ulonglong)method >> 8);
      if (iVar2 < 0) {
        behavior = (InsertionBehavior__Enum)CONCAT71(uVar21,2);
        pMVar3 = MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Add_UnityEngine__Camera__RTG__CameraBackgroundSettings_
                  ->klass->rgctx_data[0x22].method;
      }
      else {
        behavior = (InsertionBehavior__Enum)CONCAT71(uVar21,1);
        pMVar3 = MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__set_Item_UnityEngine__Camera__RTG__CameraBackgroundSettings_
                  ->klass->rgctx_data[0x22].method;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar4,(Object *)camera,
                 (Object *)bkSettings,behavior,pMVar3);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* RTCameraBackground() */

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground__ctor
               (RTCameraBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraBackgroundSettings);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__MonoSingleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (CameraBackgroundSettings *)FUN_?(TypeInfo__RTG__CameraBackgroundSettings);
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this_00->fields)._firstColor.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this_00->fields)._firstColor.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this_00->fields)._firstColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar1 = _UNK_?;
  (this_00->fields)._firstColor.a = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this_00->fields)._secondColor.r = (float)_UNK_?;
  _UNK_? = uVar1;
  uVar3 = _UNK_?;
  (this_00->fields)._secondColor.g = (float)uVar4;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this_00->fields)._secondColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this_00->fields)._secondColor.a = (float)uVar4;
  Settings::Settings__ctor((Settings *)this_00,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._bkSettings = this_00;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._bkSettings >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_01 = (List_1_UnityEngine_Camera_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
  bVar6 = iRam_? != 0;
  (this->fields)._renderIgnoreCameras = this_01;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._renderIgnoreCameras >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Dictionary__
            );
  bVar6 = iRam_? != 0;
  (this->fields)._cameraToBkSettings =
       (Dictionary_2_UnityEngine_Camera_RTG_CameraBackgroundSettings_ *)this_02;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._cameraToBkSettings >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>->_1).field_0x1c == 0) {
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

