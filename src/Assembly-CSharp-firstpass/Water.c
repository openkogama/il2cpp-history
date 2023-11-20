
/* Void CalculateObliqueMatrix(Matrix4x4 ByRef, Vector4) */

void Assembly-CSharp-firstpass.dll::Water::Water_CalculateObliqueMatrix
               (Matrix4x4 *projection,Vector4 clipPlane,MethodInfo *method)

{
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffffa0,projection,(MethodInfo *)0x0);
  VStack_2.x = _UNK_?;
  if ((clipPlane.x <= 0.0) && (VStack_2.x = _UNK_?, 0.0 <= clipPlane.x)) {
    VStack_2.x = 0.0;
  }
  VStack_2.y = _UNK_?;
  if ((clipPlane.y <= 0.0) && (VStack_2.y = 0.0, clipPlane.y < 0.0)) {
    VStack_2.y = _UNK_?;
  }
  VStack_2.z = 1.0;
  VStack_2.w = 1.0;
  vector.y = VStack_2.y;
  vector.x = VStack_2.x;
  vector.z = 1.0;
  vector.w = 1.0;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                     (&VStack_2,*pMVar1,vector,(MethodInfo *)0x0);
  fVar4 = _UNK_? /
          (pVVar3->y * clipPlane.y + pVVar3->x * clipPlane.x + clipPlane.z * pVVar3->z +
          clipPlane.w * pVVar3->w);
  puStack_5 = (undefined *)(clipPlane.y * fVar4);
  fStack_6 = clipPlane.z * fVar4;
  fStack_7 = clipPlane.w * fVar4;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    (projection,3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (projection,2,clipPlane.x * fVar4 - fVar8,(MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    (projection,7,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (projection,6,(float)puStack_5 - fVar4,(MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    (projection,0xb,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (projection,10,fStack_6 - fVar4,(MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    (projection,0xf,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (projection,0xe,fStack_7 - fVar4,(MethodInfo *)0x0);
  return;
}


/* Void CalculateReflectionMatrix(Matrix4x4 ByRef, Vector4) */

void Assembly-CSharp-firstpass.dll::Water::Water_CalculateReflectionMatrix
               (Matrix4x4 *reflectionMat,Vector4 plane,MethodInfo *method)

{
  fVar1 = _UNK_?;
  reflectionMat->m00 = _UNK_? - (plane.x + plane.x) * plane.x;
  fVar2 = _UNK_?;
  reflectionMat->m01 = plane.x * _UNK_? * plane.y;
  reflectionMat->m02 = plane.x * fVar2 * plane.z;
  reflectionMat->m03 = plane.w * fVar2 * plane.x;
  reflectionMat->m10 = plane.y * fVar2 * plane.x;
  reflectionMat->m11 = fVar1 - (plane.y + plane.y) * plane.y;
  reflectionMat->m12 = plane.y * fVar2 * plane.z;
  reflectionMat->m13 = plane.w * fVar2 * plane.y;
  reflectionMat->m20 = plane.z * fVar2 * plane.x;
  reflectionMat->m21 = plane.z * fVar2 * plane.y;
  reflectionMat->m22 = fVar1 - (plane.z + plane.z) * plane.z;
  reflectionMat->m30 = 0.0;
  reflectionMat->m31 = 0.0;
  reflectionMat->m32 = 0.0;
  reflectionMat->m33 = 1.0;
  reflectionMat->m23 = plane.w * fVar2 * plane.z;
  return;
}


/* Vector4 CameraSpacePlane(Camera, Vector3, Vector3, Single) */

Vector4 * Assembly-CSharp-firstpass.dll::Water::Water_CameraSpacePlane
                    (Vector4 *__return_storage_ptr__,Water *this,Camera *cam,Vector3 pos,
                    Vector3 normal,float sideSign,MethodInfo *method)

{
  func_?(&MStack_1,0,0x40);
  fVar2 = (this->fields).m_ClipPlaneOffset;
  VStack_3.x = pos.x + normal.x * fVar2;
  VStack_3.y = pos.y + normal.y * fVar2;
  VStack_3.z = pos.z + normal.z * fVar2;
  if (cam != (Camera *)0x0) {
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                       ((Matrix4x4 *)&stack0xffffff70,cam,(MethodInfo *)0x0);
    MStack_1.m00 = pMVar4->m00;
    MStack_1.m10 = pMVar4->m10;
    MStack_1.m20 = pMVar4->m20;
    MStack_1.m30 = pMVar4->m30;
    MStack_1.m01 = pMVar4->m01;
    MStack_1.m11 = pMVar4->m11;
    MStack_1.m21 = pMVar4->m21;
    MStack_1.m31 = pMVar4->m31;
    MStack_1.m02 = pMVar4->m02;
    MStack_1.m12 = pMVar4->m12;
    MStack_1.m22 = pMVar4->m22;
    MStack_1.m32 = pMVar4->m32;
    MStack_1.m03 = pMVar4->m03;
    MStack_1.m13 = pMVar4->m13;
    MStack_1.m23 = pMVar4->m23;
    MStack_1.m33 = pMVar4->m33;
    point.y = VStack_3.y;
    point.x = VStack_3.x;
    point.z = VStack_3.z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                       (&VStack_3,&MStack_1,point,(MethodInfo *)0x0);
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    fVar2 = pVVar5->z;
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
              (&VStack_3,&MStack_1,normal,(MethodInfo *)0x0);
    puVar8 = (undefined8 *)func_?();
    fVar9 = *(float *)(puVar8 + 1);
    normal.x = (float)*puVar8;
    normal.y = (float)((ulonglong)*puVar8 >> 0x20);
    __return_storage_ptr__->x = normal.x * sideSign;
    __return_storage_ptr__->y = normal.y * sideSign;
    __return_storage_ptr__->z = fVar9 * sideSign;
    __return_storage_ptr__->w =
         (float)((uint)((float)uVar7 * normal.y * sideSign + (float)uVar6 * normal.x * sideSign +
                       fVar2 * fVar9 * sideSign) ^
                __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar11 = (Vector4 *)(*pcVar10)();
  return pVVar11;
}


/* Void CreateWaterObjects(Camera, Camera ByRef, Camera ByRef) */

void Assembly-CSharp-firstpass.dll::Water::Water_CreateWaterObjects
               (Water *this,Camera *currentCamera,Camera **reflectionCamera,
               Camera **refractionCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__UnityEngine__Camera);
    func_?(&TypeInfo__UnityEngine__Camera);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    func_?(&TypeRef__UnityEngine__Skybox);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_Water_Refl_Camera_id);
    func_?(&StringLiteral___WaterReflection);
    func_?(&StringLiteral__for_);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  iVar2 = (this->fields).m_HardwareWaterSupport;
  if ((this->fields).m_WaterMode <= iVar2) {
    iVar2 = (this->fields).m_WaterMode;
  }
  *reflectionCamera = (Camera *)0x0;
  func_?(reflectionCamera,0);
  *refractionCamera = (Camera *)0x0;
  func_?(refractionCamera,0);
  if (iVar2 < 1) {
    return;
  }
  pRVar3 = (this->fields).m_ReflectionTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar3,(MethodInfo *)0x0);
  if ((bVar4 == 0) || ((this->fields).m_OldReflectionTextureSize != (this->fields).m_TextureSize)) {
    pRVar3 = (this->fields).m_ReflectionTexture;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pRVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pRVar3 = (this->fields).m_ReflectionTexture;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DestroyImmediate_1
                ((Object_1 *)pRVar3,(MethodInfo *)0x0);
    }
    width = (this->fields).m_TextureSize;
    height = (this->fields).m_TextureSize;
    pRVar3 = (RenderTexture *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
              (pRVar3,width,height,0x10,(MethodInfo *)0x0);
    (this->fields).m_ReflectionTexture = pRVar3;
    func_?(&(this->fields).m_ReflectionTexture,pRVar3);
    pRVar3 = (this->fields).m_ReflectionTexture;
    IStack_1.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                   ((Object_1 *)this,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral___WaterReflection,pSVar5,(MethodInfo *)0x0);
    if (pRVar3 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pRVar3,pSVar5,(MethodInfo *)0x0);
      pRVar3 = (this->fields).m_ReflectionTexture;
      if (pRVar3 != (RenderTexture *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)pRVar3,ExceptionArgument__Enum_dictionary,(MethodInfo *)0x0);
        pRVar3 = (this->fields).m_ReflectionTexture;
        if (pRVar3 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)pRVar3,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          (this->fields).m_OldReflectionTextureSize = (this->fields).m_TextureSize;
          goto code_?;
        }
      }
    }
code_?:
    func_?();
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
  }
  else {
code_?:
    pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields).m_ReflectionCameras;
    if (pDVar7 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar7,(Object *)currentCamera,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 != 0) {
      pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).m_ReflectionCameras;
      if (pDVar7 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar7,(Object *)currentCamera,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar8.m_Index == 0) {
        *reflectionCamera = (Camera *)0x0;
        IStack_1.m_value = (int32_t)(Camera *)0x0;
      }
      else {
        TVar9.m_Index = (int32_t)(Camera *)0x0;
        if (*(Camera__Class **)TVar8.m_Index == TypeInfo__UnityEngine__Camera) {
          TVar9 = TVar8;
        }
        *reflectionCamera = (Camera *)TVar9.m_Index;
        IStack_1.m_value = (int32_t)(Camera *)0x0;
        if (*(Camera__Class **)TVar8.m_Index == TypeInfo__UnityEngine__Camera) {
          IStack_1.m_value = TVar8.m_Index;
        }
      }
      func_?();
    }
    pCVar10 = *reflectionCamera;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pCVar10,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    IStack_1.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                   ((Object_1 *)this,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
    if (currentCamera == (Camera *)0x0) goto code_?;
    IStack_1.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                   ((Object_1 *)currentCamera,(MethodInfo *)0x0);
    str3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_Water_Refl_Camera_id,pSVar5,StringLiteral__for_,str3,
                        (MethodInfo *)0x0);
    components = (Type__Array *)func_?(TypeInfo__System__Type,2);
    handle = TypeRef__UnityEngine__Camera;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (components == (Type__Array *)0x0) goto code_?;
    if ((pTVar11 != (Type *)0x0) &&
       (iVar2 = func_?(pTVar11,(components->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (components->max_length == 0) goto code_?;
    components->vector[0] = pTVar11;
    func_?(components->vector,pTVar11);
    pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__UnityEngine__Skybox,(MethodInfo *)0x0);
    if ((pTVar11 == (Type *)0x0) ||
       (iVar2 = func_?(pTVar11,(components->klass->_0).element_class), iVar2 != 0)) {
      if (components->max_length < 2) goto code_?;
      components->vector[1] = pTVar11;
      func_?(components->vector + 1,pTVar11);
      this_01 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_2
                (this_01,pSVar5,components,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        pCVar10 = (Camera *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (this_01,
                            UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                           );
        *reflectionCamera = pCVar10;
        func_?(reflectionCamera,pCVar10);
        if (*reflectionCamera != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)*reflectionCamera,0,(MethodInfo *)0x0);
          if (*reflectionCamera != (Camera *)0x0) {
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)*reflectionCamera,(MethodInfo *)0x0);
            pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if ((pTVar13 != (Transform *)0x0) &&
               (pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffec,pTVar13,(MethodInfo *)0x0),
               pTVar12 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar12,*pVVar14,(MethodInfo *)0x0);
              if (*reflectionCamera != (Camera *)0x0) {
                pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)*reflectionCamera,(MethodInfo *)0x0);
                pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if ((pTVar13 != (Transform *)0x0) &&
                   (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_rotation
                                        ((Quaternion *)&stack0xffffffe8,pTVar13,(MethodInfo *)0x0),
                   pTVar12 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar12,*pQVar15,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                            ((Object_1 *)this_01,HideFlags__Enum_HideAndDontSave,(MethodInfo *)0x0);
                  this_00 = (this->fields).m_ReflectionCameras;
                  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              (this_00,(Object *)currentCamera,(Object *)*reflectionCamera,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Water+WaterMode FindHardwareWaterSupport() */

Water_WaterMode__Enum
Assembly-CSharp-firstpass.dll::Water::Water_FindHardwareWaterSupport(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_WATERMODE);
    func_?(&StringLiteral_Reflective);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return Water_WaterMode__Enum_Simple;
  }
  pRVar1 = (this->fields).meshRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                        (pRVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return Water_WaterMode__Enum_Simple;
    }
    if (this_00 != (Material *)0x0) {
      a = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTag
                    (this_00,StringLiteral_WATERMODE,0,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_Reflective,(MethodInfo *)0x0);
      return (uint)(bVar2 != 0);
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  WVar4 = (*pcVar3)();
  return WVar4;
}


/* Water+WaterMode GetWaterMode() */

Water_WaterMode__Enum
Assembly-CSharp-firstpass.dll::Water::Water_GetWaterMode(Water *this,MethodInfo *method)

{
  WVar1 = (this->fields).m_HardwareWaterSupport;
  if ((this->fields).m_WaterMode <= (int)WVar1) {
    return (this->fields).m_WaterMode;
  }
  return WVar1;
}


/* Boolean IsNanCheck(Vector3) */

bool Assembly-CSharp-firstpass.dll::Water::Water_IsNanCheck
               (Water *this,Vector3 v,MethodInfo *method)

{
  if (((uint)ABS(v.x) < 0x7f800001) && ((uint)ABS(v.y) < 0x7f800001)) {
    return 0x7f800000 < (uint)ABS(v.z);
  }
  return 1;
}


/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::Water::Water_OnDisable(Water *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Camera);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  pRVar7 = (this->fields).m_ReflectionTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar7,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    pRVar7 = (this->fields).m_ReflectionTexture;
    if (pRVar7 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
              (pRVar7,(MethodInfo *)0x0);
    (this->fields).m_ReflectionTexture = (RenderTexture *)0x0;
    func_?();
  }
  method_00 = (MethodInfo *)(this->fields).m_ReflectionCameras;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_11 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar9->_dictionary;
    DStack_6._version = pDVar9->_version;
    DStack_6._index = pDVar9->_index;
    DStack_6._current.key = (Object *)(pDVar9->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pDStack_12 = &DStack_6;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar8 == 0) break;
      if ((Component *)DStack_6._current.value == (Component *)0x0) goto code_?;
      pCVar13 = (Component *)0x0;
      if ((Camera__Class *)(DStack_6._current.value)->klass == TypeInfo__UnityEngine__Camera) {
        pCVar13 = (Component *)DStack_6._current.value;
      }
      if (pCVar13 == (Component *)0x0) goto code_?;
      pCVar13 = (Component *)0x0;
      if ((Camera__Class *)(DStack_6._current.value)->klass == TypeInfo__UnityEngine__Camera) {
        pCVar13 = (Component *)DStack_6._current.value;
      }
      pMStack_14 = (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (pCVar13,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      method_00 = pMStack_14;
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pMStack_14,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).m_ReflectionCameras;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
code_?:
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnWillRenderObject() */

void Assembly-CSharp-firstpass.dll::Water::Water_OnWillRenderObject(Water *this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Renderer *pRVar5;
  code *pcVar6;
  Vector3 value;
  Vector3 vector;
  Vector4 clipPlane;
  Matrix4x4 rhs;
  Vector3 value_00;
  Water *pWVar7;
  bool bVar8;
  Material *pMVar9;
  Camera *currentCamera;
  String *a;
  Transform *pTVar10;
  Vector3 *pVVar11;
  undefined *value_01;
  Matrix4x4 *pMVar12;
  undefined1 (*pauVar13) [12];
  void *pvVar14;
  Transform *pTVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  Vector3 VVar23;
  float fVar24;
  undefined *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  Camera *pCVar31;
  float fStack_32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  Camera *pCVar37;
  undefined8 uVar38;
  
  pWVar7 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__Water);
    func_?(&StringLiteral_WATER_REFLECTIVE);
    func_?(&StringLiteral_WATER_REFRACTIVE);
    func_?(&StringLiteral__ReflectionTex);
    func_?(&StringLiteral_WATER_SIMPLE);
    cRam_? = '\x01';
  }
  pCVar37 = (Camera *)0x0;
  pCVar31 = (Camera *)0x0;
  func_?(&stack0xffffff74,0,0x40);
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    return;
  }
  pRVar5 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar5,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    return;
  }
  pRVar5 = (this->fields).meshRenderer;
  if (pRVar5 == (Renderer *)0x0) goto code_?;
  pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                     (pRVar5,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pMVar9,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    return;
  }
  pRVar5 = (this->fields).meshRenderer;
  if (pRVar5 == (Renderer *)0x0) goto code_?;
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                    (pRVar5,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    return;
  }
  currentCamera =
       UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_current((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)currentCamera,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    return;
  }
  if (TypeInfo__Water->static_fields->s_InsideWater != 0) {
    return;
  }
  bVar17 = cRam_? == '\0';
  TypeInfo__Water->static_fields->s_InsideWater = 1;
  if (bVar17) {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pRVar5 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar5,(MethodInfo *)0x0);
  if (bVar8 == 0) {
code_?:
    uVar16 = 0;
  }
  else {
    pRVar5 = (this->fields).meshRenderer;
    if (pRVar5 == (Renderer *)0x0) goto code_?;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                       (pRVar5,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pMVar9,(MethodInfo *)0x0);
    if (bVar8 == 0) goto code_?;
    if (pMVar9 == (Material *)0x0) goto code_?;
    a = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTag
                  (pMVar9,StringLiteral_WATERMODE,0,(MethodInfo *)0x0);
    bVar8 = mscorlib.dll::System::String::String_op_Equality
                      (a,StringLiteral_Reflective,(MethodInfo *)0x0);
    uVar16 = (uint)(bVar8 != 0);
  }
  (this->fields).m_HardwareWaterSupport = uVar16;
  if ((this->fields).m_WaterMode <= (int)uVar16) {
    uVar16 = (this->fields).m_WaterMode;
  }
  Water_CreateWaterObjects
            (this,currentCamera,(Camera **)&stack0xfffffff8,(Camera **)&stack0xffffffd0,
             (MethodInfo *)0x0);
  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar10 == (Transform *)0x0) {
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffec,pTVar10,(MethodInfo *)0x0);
  uVar1 = pVVar11->x;
  uVar3 = pVVar11->y;
  fVar22 = pVVar11->z;
  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar10 == (Transform *)0x0) goto code_?;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      ((Vector3 *)&stack0xffffff50,pTVar10,(MethodInfo *)0x0);
  uVar33._0_4_ = pVVar11->x;
  uVar33._4_4_ = pVVar11->y;
  fVar26 = pVVar11->z;
  fVar36 = fVar26;
  value_01 = (undefined *)
             UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
             QualitySettings_get_pixelLightCount((MethodInfo *)0x0);
  if ((this->fields).m_DisablePixelLights != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount
              (0,(MethodInfo *)0x0);
  }
  Water_UpdateCameraModes(this,currentCamera,pCVar37,(MethodInfo *)0x0);
  Water_UpdateCameraModes(this,currentCamera,pCVar31,(MethodInfo *)0x0);
  if (0 < (int)uVar16) {
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_zero
              ((Matrix4x4 *)&stack0xffffff04,(MethodInfo *)0x0);
    fVar21 = (float)uVar33;
    fVar18 = _UNK_? - (fVar21 + fVar21) * fVar21;
    fVar19 = fVar21 * _UNK_? * SUB84(uVar33,4);
    fVar20 = SUB84(uVar33,4) * _UNK_? * fVar21;
    fVar21 = fVar36 * _UNK_? * fVar21;
    fVar30 = 0.0;
    if ((currentCamera == (Camera *)0x0) ||
       (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)currentCamera,(MethodInfo *)0x0),
       pTVar10 == (Transform *)0x0)) goto code_?;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff5c,pTVar10,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
              ((Vector3 *)&stack0xffffff44,(Matrix4x4 *)&stack0xffffff74,*pVVar11,(MethodInfo *)0x0)
    ;
    pCVar31 = pCVar37;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                        ((Matrix4x4 *)&stack0xffffff04,currentCamera,(MethodInfo *)0x0);
    fVar27 = pMVar12->m31;
    fVar28 = pMVar12->m12;
    fVar29 = pMVar12->m22;
    rhs.m10 = fVar20;
    rhs.m00 = fVar18;
    rhs.m20 = fVar21;
    rhs.m30 = fVar30;
    rhs.m01 = fVar19;
    rhs.m11 = fVar18;
    rhs.m21 = fVar20;
    rhs.m31 = fVar21;
    rhs.m02 = fVar30;
    rhs.m12 = fVar19;
    rhs.m22 = fVar18;
    rhs.m32 = fVar20;
    rhs.m03 = fVar21;
    rhs.m13 = fVar30;
    rhs.m23 = fVar19;
    rhs.m33 = fVar18;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        ((Matrix4x4 *)&stack0xffffff04,*pMVar12,rhs,(MethodInfo *)0x0);
    if (pCVar37 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_worldToCameraMatrix
              (pCVar37,*pMVar12,(MethodInfo *)0x0);
    func_?();
    fVar18 = (this->fields).m_ClipPlaneOffset;
    fVar22 = fVar22 + fVar18 * fVar36;
    uVar34._4_4_ = (float)uVar3 + fVar18 * SUB84(uVar33,4);
    uVar34._0_4_ = fVar18 * (float)uVar33 + (float)uVar1;
    if (pCVar31 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
              ((Matrix4x4 *)&stack0xfffffec4,pCVar31,(MethodInfo *)0x0);
    VVar23.z = fVar22;
    VVar23.x = (float)uVar34;
    VVar23.y = SUB84(uVar34,4);
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                        ((Vector3 *)&stack0xffffff44,(Matrix4x4 *)&stack0xffffff04,VVar23,
                         (MethodInfo *)0x0);
    uVar35._0_4_ = pVVar11->x;
    uVar35._4_4_ = pVVar11->y;
    fVar22 = pVVar11->z;
    vector.y = fVar29;
    vector.x = fVar28;
    vector.z = fVar26;
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
              ((Vector3 *)&stack0xffffff68,(Matrix4x4 *)&stack0xffffff04,vector,(MethodInfo *)0x0);
    pauVar13 = (undefined1 (*) [12])func_?();
    fStack_32 = (float)((ulonglong)*(undefined8 *)*pauVar13 >> 0x20);
    clipPlane.w = (float)((uint)(SUB84(uVar35,4) * fStack_32 +
                                 (float)uVar35 * (float)*(undefined8 *)*pauVar13 +
                                fVar22 * *(float *)(*pauVar13 + 8)) ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    clipPlane._0_12_ = *pauVar13;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_CalculateObliqueMatrix
                        ((Matrix4x4 *)&stack0xfffffec4,currentCamera,clipPlane,(MethodInfo *)0x0);
    if (pCVar31 == (Camera *)0x0) goto code_?;
    fVar22 = pMVar12->m13;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_projectionMatrix
              (pCVar31,*pMVar12,(MethodInfo *)0x0);
    fVar26 = 0.0;
    puVar25 = &UNK_?;
    pCVar37 = pCVar31;
    pvVar14 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                        ((uint8_t *)&(this->fields).m_ReflectLayers,(MethodInfo *)0x0);
    if ((pCVar31 == (Camera *)0x0) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar31,(uint)pvVar14 & 0xffffffef,(MethodInfo *)0x0), pCVar37 == (Camera *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar37,(this->fields).m_ReflectionTexture,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
    if ((pCVar37 == (Camera *)0x0) ||
       (pCVar31 = pCVar37,
       pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pCVar37,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
    goto code_?;
    value_01 = &UNK_?;
    value_00.y = fVar27;
    value_00.x = fVar26;
    value_00.z = (float)pCVar37;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar10,value_00,(MethodInfo *)0x0);
    pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)currentCamera,(MethodInfo *)0x0);
    if (pTVar15 == (Transform *)0x0) goto code_?;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&stack0xffffffb8,pTVar15,(MethodInfo *)0x0);
    uVar2 = pVVar11->x;
    uVar4 = pVVar11->y;
    this = (Water *)pVVar11->z;
    if (pCVar31 == (Camera *)0x0) goto code_?;
    pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar31,(MethodInfo *)0x0);
    if ((((pTVar15 == (Transform *)0x0) ||
         (fVar24 = (float)uVar4,
         VVar23.x = (float)(uVar2 ^ 
                           __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field)
         , VVar23 = (Vector3)CONCAT84(uVar38,VVar23.x),
         UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                   (pTVar15,VVar23,(MethodInfo *)0x0), pTVar15 == (Transform *)0x0)) ||
        (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render
                   ((Camera *)pTVar15,(MethodInfo *)0x0), pTVar15 == (Transform *)0x0)) ||
       (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar15,(MethodInfo *)0x0), pTVar15 == (Transform *)0x0))
    goto code_?;
    value.y = (float)puVar25;
    value.x = fVar22;
    value.z = (float)pTVar10;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar15,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(0,(MethodInfo *)0x0);
    pRVar5 = (pWVar7->fields).meshRenderer;
    if ((pRVar5 == (Renderer *)0x0) ||
       (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                           (pRVar5,(MethodInfo *)0x0), pMVar9 == (Material *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
              (pMVar9,StringLiteral__ReflectionTex,(Texture *)(pWVar7->fields).m_ReflectionTexture,
               (MethodInfo *)0x0);
  }
  if ((pWVar7->fields).m_DisablePixelLights != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount
              ((int32_t)value_01,(MethodInfo *)0x0);
  }
  if (uVar16 == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
              (StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
              (StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
  }
  else {
    if (uVar16 != 1) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
              (StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
              (StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
            (StringLiteral_WATER_REFRACTIVE,(MethodInfo *)0x0);
code_?:
  TypeInfo__Water->static_fields->s_InsideWater = 0;
  return;
}


/* Void SetLethal(Boolean) */

void Assembly-CSharp-firstpass.dll::Water::Water_SetLethal
               (Water *this,bool isLethal,MethodInfo *method)

{
  auVar1._8_4_ = unaff_EBP;
  auVar1._4_4_ = unaff_EBX;
  auVar1._0_4_ = unaff_ESI;
  if (cRam_? == '\0') {
    func_?(&StringLiteral__HorizonColor);
    func_?(&StringLiteral__BumpMap);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshRenderer;
  if (this_00 != (Renderer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Material *)0x0) {
      if (isLethal == 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                  (this_01,StringLiteral__BumpMap,(this->fields).m_WaterBumpTexture,
                   (MethodInfo *)0x0);
        fVar2 = (this->fields).m_WaterHorizon.r;
        fVar3 = (this->fields).m_WaterHorizon.g;
        fVar4 = (this->fields).m_WaterHorizon.b;
        fVar5 = (this->fields).m_WaterHorizon.a;
      }
      else {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                  (this_01,StringLiteral__BumpMap,(this->fields).m_LethalBumpTexture,
                   (MethodInfo *)0x0);
        fVar2 = (this->fields).m_LethalHorizon.r;
        fVar3 = (this->fields).m_LethalHorizon.g;
        fVar4 = (this->fields).m_LethalHorizon.b;
        fVar5 = (this->fields).m_LethalHorizon.a;
      }
      value.y = fVar3;
      value.x = fVar2;
      value.z = fVar4;
      value.w = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_01,StringLiteral__HorizonColor,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)(auVar1);
  return;
}


/* Void Update() */

void Assembly-CSharp-firstpass.dll::Water::Water_Update(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_WaveSpeed);
    func_?(&StringLiteral__WaveScale);
    func_?(&StringLiteral__WaveScale4);
    func_?(&StringLiteral__WaveOffset);
    func_?(&StringLiteral__WaveMatrix);
    func_?(&StringLiteral__WaveMatrix2);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pRVar1 = (this->fields).meshRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                        (pRVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (this_00 != (Material *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                         ((Vector4 *)&stack0xffffffa4,this_00,StringLiteral_WaveSpeed,
                          (MethodInfo *)0x0);
      fVar4 = pVVar3->x;
      fVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      fVar7 = pVVar3->w;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloat
                         (this_00,StringLiteral__WaveScale,(MethodInfo *)0x0);
      fVar9 = fVar8 * _UNK_?;
      fVar10 = fVar8 * _UNK_?;
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                         ((MethodInfo *)0x0);
      dVar12 = (double)(fVar11 / (float)_UNK_?);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      dVar13 = mscorlib.dll::System::Math::Math_IEEERemainder
                         ((double)(fVar4 * fVar8) * dVar12,_UNK_?,(MethodInfo *)0x0);
      uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
      mscorlib.dll::System::Math::Math_IEEERemainder
                ((double)(fVar5 * fVar8) * dVar12,_UNK_?,(MethodInfo *)0x0);
      dVar13 = mscorlib.dll::System::Math::Math_IEEERemainder
                         ((double)(fVar9 * fVar6) * dVar12,_UNK_?,(MethodInfo *)0x0);
      fVar4 = (float)dVar13;
      uVar15 = 0;
      uVar16 = SUB84(_UNK_?,0);
      dVar12 = (double)(fVar10 * fVar7) * dVar12;
      dVar13 = mscorlib.dll::System::Math::Math_IEEERemainder
                         (dVar12,_UNK_?,(MethodInfo *)0x0);
      fVar5 = (float)(double)CONCAT44(uVar14,uVar15);
      method_00 = (MethodInfo *)0x0;
      fVar6 = (float)(double)CONCAT44(uVar16,(int)((ulonglong)dVar12 >> 0x20));
      puVar17 = &UNK_?;
      value.y = fVar6;
      value.x = fVar5;
      value.z = fVar4;
      value.w = (float)dVar13;
      pSVar18 = StringLiteral__WaveOffset;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_00,StringLiteral__WaveOffset,value,(MethodInfo *)0x0);
      puVar19 = &UNK_?;
      value_00.y = fVar8;
      value_00.x = fVar8;
      value_00.z = fVar9;
      value_00.w = (float)method_00;
      pMVar20 = this_00;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_00,StringLiteral__WaveScale4,value_00,method_00);
      pRVar1 = (this->fields).meshRenderer;
      if (pRVar1 != (Renderer *)0x0) {
        pBVar21 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                           ((Bounds *)&stack0xffffff9c,pRVar1,(MethodInfo *)0x0);
        uVar22 = (pBVar21->m_Extents).z;
        fVar8 = (float)uVar22 * _UNK_?;
        fVar10 = (pBVar21->m_Extents).x * _UNK_?;
        fVar4 = fVar10 * 3.1753322e-29;
        fVar23 = 1.0;
        fVar7 = fVar8 * 3.1753322e-29;
        fVar5 = (float)(double)CONCAT44(fVar5,pSVar18);
        fVar11 = 0.0;
        fVar9 = (float)(double)CONCAT44(puVar17,(int)((ulonglong)dVar12 >> 0x20));
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pos_00.y = fVar9;
        pos_00.x = fVar5;
        pos_00.z = fVar11;
        s.y = fVar7;
        s.x = fVar4;
        s.z = fVar23;
        pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                           ((Matrix4x4 *)&stack0xffffff5c,pos_00,
                            TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s,
                            (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                  (this_00,StringLiteral__WaveMatrix,*pMVar24,(MethodInfo *)0x0);
        fVar10 = (float)pMVar20 * fVar10;
        fVar4 = 0.0;
        fVar8 = (float)puVar19 * fVar8;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pos.y = fVar9;
        pos.x = fVar6;
        pos.z = fVar4;
        s_00.y = fVar8;
        s_00.x = fVar10;
        s_00.z = fVar23;
        pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                           ((Matrix4x4 *)&stack0xffffff5c,pos,
                            TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                            s_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                  (this_00,StringLiteral__WaveMatrix2,*pMVar24,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void UpdateCameraModes(Camera, Camera) */

void Assembly-CSharp-firstpass.dll::Water::Water_UpdateCameraModes
               (Water *this,Camera *src,Camera *dest,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeRef__UnityEngine__Skybox);
    func_?(&TypeInfo__UnityEngine__Skybox);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)dest,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((src == (Camera *)0x0) ||
     (CVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                        (src,(MethodInfo *)0x0), dest == (Camera *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
            (dest,CVar2,(MethodInfo *)0x0);
  pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_backgroundColor
                     ((Color *)&stack0xffffffe8,src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
            (dest,*pCVar3,(MethodInfo *)0x0);
  CVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                    (src,(MethodInfo *)0x0);
  handle = TypeRef__UnityEngine__Skybox;
  if (CVar2 == CameraClearFlags__Enum_Skybox) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    pSVar5 = (Skybox *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent
                       ((Component *)src,pTVar4,(MethodInfo *)0x0);
    this_00 = (Skybox *)0x0;
    if ((pSVar5 != (Skybox *)0x0) && (pSVar5->klass == TypeInfo__UnityEngine__Skybox)) {
      this_00 = pSVar5;
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__UnityEngine__Skybox,(MethodInfo *)0x0);
    pSVar6 = (Skybox *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent
                       ((Component *)dest,pTVar4,(MethodInfo *)0x0);
    pSVar5 = (Skybox *)0x0;
    if ((pSVar6 != (Skybox *)0x0) && (pSVar6->klass == TypeInfo__UnityEngine__Skybox)) {
      pSVar5 = pSVar6;
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar6 = this_00;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (this_00 == (Skybox *)0x0) goto code_?;
      pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                         (this_00,(MethodInfo *)0x0);
      auVar8._4_4_ = pSVar6;
      auVar8._0_4_ = pMVar7;
      auVar8._8_4_ = 0;
      auVar8 = auVar8 << 0x20;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pMVar7 = auVar8._4_4_;
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pMVar7,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (pSVar5 != (Skybox *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pSVar5,1,(MethodInfo *)0x0);
          pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                             (this_00,(MethodInfo *)0x0);
          dest = (Camera *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                    (pSVar5,pMVar7,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    if (pSVar5 == (Skybox *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    dest = (Camera *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pSVar5,0,(MethodInfo *)0x0);
  }
code_?:
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
            (dest,fVar10,(MethodInfo *)0x0);
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
            (dest,fVar10,(MethodInfo *)0x0);
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
            (dest,bVar1,(MethodInfo *)0x0);
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
            (dest,fVar10,(MethodInfo *)0x0);
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect(src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect(dest,fVar10,(MethodInfo *)0x0);
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
            (dest,fVar10,(MethodInfo *)0x0);
  return;
}


/* Water() */

void Assembly-CSharp-firstpass.dll::Water::Water__ctor(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  p_Var1 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)0xffffffff,(MethodInfo *)0x0);
  (this->fields).m_ReflectLayers.m_Mask = (int32_t)p_Var1;
  (this->fields).m_DisablePixelLights = 1;
  (this->fields).m_TextureSize = 0x100;
  (this->fields).m_ClipPlaneOffset = 0.07;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).m_ReflectionCameras = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(&(this->fields).m_ReflectionCameras,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsLethal() */

bool Assembly-CSharp-firstpass.dll::Water::Water_get_IsLethal(Water *this,MethodInfo *method)

{
  return (this->fields).m_IsLethal;
}


/* Color get_WaterHorizon() */

Color * Assembly-CSharp-firstpass.dll::Water::Water_get_WaterHorizon
                  (Color *__return_storage_ptr__,Water *this,MethodInfo *method)

{
  fVar1 = (this->fields).m_WaterHorizon.g;
  fVar2 = (this->fields).m_WaterHorizon.b;
  fVar3 = (this->fields).m_WaterHorizon.a;
  __return_storage_ptr__->r = (this->fields).m_WaterHorizon.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Void set_IsLethal(Boolean) */

void Assembly-CSharp-firstpass.dll::Water::Water_set_IsLethal
               (Water *this,bool value,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  auVar2._8_4_ = unaff_EBP;
  auVar2._4_4_ = unaff_EBX;
  auVar2._0_4_ = unaff_ESI;
  (this->fields).m_IsLethal = value;
  if (bVar1) {
    func_?(&StringLiteral__HorizonColor);
    func_?(&StringLiteral__BumpMap);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshRenderer;
  if (this_00 != (Renderer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Material *)0x0) {
      if (value == 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                  (this_01,StringLiteral__BumpMap,(this->fields).m_WaterBumpTexture,
                   (MethodInfo *)0x0);
        fVar3 = (this->fields).m_WaterHorizon.r;
        fVar4 = (this->fields).m_WaterHorizon.g;
        fVar5 = (this->fields).m_WaterHorizon.b;
        fVar6 = (this->fields).m_WaterHorizon.a;
      }
      else {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                  (this_01,StringLiteral__BumpMap,(this->fields).m_LethalBumpTexture,
                   (MethodInfo *)0x0);
        fVar3 = (this->fields).m_LethalHorizon.r;
        fVar4 = (this->fields).m_LethalHorizon.g;
        fVar5 = (this->fields).m_LethalHorizon.b;
        fVar6 = (this->fields).m_LethalHorizon.a;
      }
      value_00.y = fVar4;
      value_00.x = fVar3;
      value_00.z = fVar5;
      value_00.w = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_01,StringLiteral__HorizonColor,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)(auVar2);
  return;
}


/* Void set_WaterHorizon(Color) */

void Assembly-CSharp-firstpass.dll::Water::Water_set_WaterHorizon
               (Water *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__HorizonColor);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).m_IsLethal;
  (this->fields).m_WaterHorizon.r = value.r;
  (this->fields).m_WaterHorizon.g = value.g;
  (this->fields).m_WaterHorizon.b = value.b;
  (this->fields).m_WaterHorizon.a = value.a;
  if (bVar1 != 0) {
    return;
  }
  this_00 = (this->fields).meshRenderer;
  if ((this_00 != (Renderer *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (this_00,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_01,StringLiteral__HorizonColor,(Vector4)(this->fields).m_WaterHorizon,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

