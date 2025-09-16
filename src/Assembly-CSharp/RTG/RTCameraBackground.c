
/* Void AddRenderIgnoreCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_AddRenderIgnoreCamera
               (RTCameraBackground *this,Camera *camera,MethodInfo *method)

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


/* List`1[UnityEngine.Camera] GetAllRenderIgnoreCameras() */

List_1_UnityEngine_Camera_ *
Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_GetAllRenderIgnoreCameras
          (RTCameraBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List_System__Collections__Generic__IEnumerable<UnityEngine::Camera>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    cRam_? = '\x01';
  }
  collection = (this->fields)._renderIgnoreCameras;
  this_00 = (List_1_UnityEngine_Camera_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
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


/* Void RemoveRenderIgnoreCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_RemoveRenderIgnoreCamera
               (RTCameraBackground *this,Camera *camera,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_Render_SystemCall
               (RTCameraBackground *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__get_Item_UnityEngine__Camera_
                   );
    func_?(&TypeInfo__RTG__QuadShape3D);
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    func_?(&StringLiteral__GradientOffset);
    func_?(&StringLiteral__FirstColor);
    func_?(&StringLiteral__FarPlaneHeight);
    func_?(&StringLiteral__SecondColor);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._renderIgnoreCameras;
  if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)renderCamera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    if (bVar1 != 0) {
      return;
    }
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._cameraToBkSettings;
    TVar3.m_Index = (int32_t)(this->fields)._bkSettings;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar2,(Object *)renderCamera,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                        );
      if (bVar1 != 0) {
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._cameraToBkSettings;
        if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar2,(Object *)renderCamera,
                           MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__get_Item_UnityEngine__Camera_
                          );
      }
      if ((CameraBackgroundSettings *)TVar3.m_Index != (CameraBackgroundSettings *)0x0) {
        if ((((CameraBackgroundSettings *)TVar3.m_Index)->fields)._isVisible == 0) {
          return;
        }
        if (renderCamera != (Camera *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)renderCamera,(MethodInfo *)0x0);
          this_02 = (QuadShape3D *)func_?(TypeInfo__RTG__QuadShape3D);
          QuadShape3D::QuadShape3D__ctor(this_02,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                    (renderCamera,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                    (renderCamera,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                    (renderCamera,(MethodInfo *)0x0);
          func_?();
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                             (renderCamera,(MethodInfo *)0x0);
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                             (renderCamera,(MethodInfo *)0x0);
          dVar6 = (double)(fVar5 * _UNK_? * _UNK_?);
          puVar7 = &UNK_?;
          func_?();
          if ((this_02 != (QuadShape3D *)0x0) &&
             (value.y = (float)dVar6 * (fVar4 + fVar4) + _UNK_?, value.x = (float)puVar7,
             QuadShape3D::QuadShape3D_set_Size(this_02,value,(MethodInfo *)0x0),
             this_01 != (Transform *)0x0)) {
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffd0,this_01,(MethodInfo *)0x0);
            fVar4 = pQVar8->y;
            fVar5 = pQVar8->z;
            fVar9 = pQVar8->w;
            (this_02->fields)._rotation.x = pQVar8->x;
            (this_02->fields)._rotation.y = fVar4;
            (this_02->fields)._rotation.z = fVar5;
            (this_02->fields)._rotation.w = fVar9;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
            uVar11 = pVVar10->x;
            uVar12 = pVVar10->y;
            fVar4 = pVVar10->z;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                               ((Vector3 *)&stack0xffffffd4,this_01,(MethodInfo *)0x0);
            uVar13._0_4_ = pVVar10->x;
            uVar13._4_4_ = pVVar10->y;
            fVar5 = pVVar10->z;
            fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                               (renderCamera,(MethodInfo *)0x0);
            fVar9 = SUB84(uVar13,4) * fVar14 * _UNK_?;
            fVar5 = fVar5 * fVar14 * _UNK_?;
            (this_02->fields)._center.x = (float)uVar11 + (float)uVar13 * fVar14 * _UNK_?;
            (this_02->fields)._center.y = (float)uVar12 + fVar9;
            (this_02->fields)._center.z = fVar4 + fVar5;
            if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_03 = (MaterialPool *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
            if ((this_03 != (MaterialPool *)0x0) &&
               (this_04 = MaterialPool::MaterialPool_get_LinearGradientCameraBk
                                    (this_03,(MethodInfo *)0x0), this_04 != (Material *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (this_04,StringLiteral__FirstColor,
                         (Vector4)(((CameraBackgroundSettings *)TVar3.m_Index)->fields)._firstColor,
                         (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (this_04,StringLiteral__SecondColor,
                         (Vector4)(((CameraBackgroundSettings *)TVar3.m_Index)->fields)._secondColor
                         ,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                        (this_04,StringLiteral__GradientOffset,
                         (((CameraBackgroundSettings *)TVar3.m_Index)->fields)._gradientOffset,
                         (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                        (this_04,StringLiteral__FarPlaneHeight,(this_02->fields)._size.y,
                         (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                        (this_04,0,(MethodInfo *)0x0);
              (*(code *)(this_02->klass->vtable).RenderSolid.method)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetCameraBkSettings(Camera, CameraBackgroundSettings) */

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground_SetCameraBkSettings
               (RTCameraBackground *this,Camera *camera,CameraBackgroundSettings *bkSettings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Add_UnityEngine__Camera__RTG__CameraBackgroundSettings_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Remove_UnityEngine__Camera_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__set_Item_UnityEngine__Camera__RTG__CameraBackgroundSettings_
                   );
    cRam_? = '\x01';
  }
  if (bkSettings == (CameraBackgroundSettings *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._cameraToBkSettings;
    if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)camera,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                      );
    if (bVar2 != 0) {
      pDVar3 = (this->fields)._cameraToBkSettings;
      if (pDVar3 != (Dictionary_2_UnityEngine_Camera_RTG_CameraBackgroundSettings_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)camera,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Remove_UnityEngine__Camera_
                  );
        return;
      }
      goto code_?;
    }
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._cameraToBkSettings;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)camera,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__ContainsKey_UnityEngine__Camera_
                      );
    pDVar3 = (this->fields)._cameraToBkSettings;
    if (bVar2 == 0) {
      if (pDVar3 != (Dictionary_2_UnityEngine_Camera_RTG_CameraBackgroundSettings_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)camera,
                   (Object *)bkSettings,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Add_UnityEngine__Camera__RTG__CameraBackgroundSettings_
                  );
        return;
      }
    }
    else if (pDVar3 != (Dictionary_2_UnityEngine_Camera_RTG_CameraBackgroundSettings_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)camera,
                 (Object *)bkSettings,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__set_Item_UnityEngine__Camera__RTG__CameraBackgroundSettings_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* RTCameraBackground() */

void Assembly-CSharp.dll::RTG::RTCameraBackground::RTCameraBackground__ctor
               (RTCameraBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraBackgroundSettings);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__MonoSingleton__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>);
    cRam_? = '\x01';
  }
  value = (CameraBackgroundSettings *)func_?(TypeInfo__RTG__CameraBackgroundSettings);
  pCVar1 = RTSystemValues::RTSystemValues_get_CameraBkGradientFirstColor
                     ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  (value->fields)._firstColor.r = pCVar1->r;
  (value->fields)._firstColor.g = fVar2;
  (value->fields)._firstColor.b = fVar3;
  (value->fields)._firstColor.a = fVar4;
  pCVar1 = RTSystemValues::RTSystemValues_get_CameraBkGradientSecondColor
                     ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  bVar5 = cRam_? == '\0';
  fVar2 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  (value->fields)._secondColor.r = pCVar1->r;
  (value->fields)._secondColor.g = fVar2;
  (value->fields)._secondColor.b = fVar3;
  (value->fields)._secondColor.a = fVar4;
  if (bVar5) {
    func_?();
    cRam_? = '\x01';
  }
  (value->fields)._._canBeDisplayed = 1;
  (value->fields)._._isExpanded = 1;
  (value->fields)._._foldoutLabel = StringLiteral_Settings;
  method_00 = (MethodInfo *)&(value->fields)._._foldoutLabel;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._bkSettings = value;
  func_?(&(this->fields)._bkSettings,value);
  this_00 = (List_1_UnityEngine_Camera_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
  (this->fields)._renderIgnoreCameras = this_00;
  func_?(&(this->fields)._renderIgnoreCameras,this_00);
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_RTG::CameraBackgroundSettings>__Dictionary__
            );
  (this->fields)._cameraToBkSettings =
       (Dictionary_2_UnityEngine_Camera_RTG_CameraBackgroundSettings_ *)this_01;
  func_?(&(this->fields)._cameraToBkSettings,this_01);
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor
            ((Singleton_1_System_Object_ *)this,
             MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__MonoSingleton__);
  return;
}

