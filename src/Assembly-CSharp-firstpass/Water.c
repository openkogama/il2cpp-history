
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
  fVar2 = (this->fields).clipPlaneOffset;
  if (cam != (Camera *)0x0) {
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                       ((Matrix4x4 *)&stack0xffffff70,cam,(MethodInfo *)0x0);
    MStack_1.m00 = pMVar3->m00;
    MStack_1.m10 = pMVar3->m10;
    MStack_1.m20 = pMVar3->m20;
    MStack_1.m30 = pMVar3->m30;
    MStack_1.m01 = pMVar3->m01;
    MStack_1.m11 = pMVar3->m11;
    MStack_1.m21 = pMVar3->m21;
    MStack_1.m31 = pMVar3->m31;
    MStack_1.m02 = pMVar3->m02;
    MStack_1.m12 = pMVar3->m12;
    MStack_1.m22 = pMVar3->m22;
    MStack_1.m32 = pMVar3->m32;
    MStack_1.m03 = pMVar3->m03;
    MStack_1.m13 = pMVar3->m13;
    MStack_1.m23 = pMVar3->m23;
    MStack_1.m33 = pMVar3->m33;
    point.y = pos.y + normal.y * fVar2;
    point.x = pos.x + normal.x * fVar2;
    point.z = pos.z + normal.z * fVar2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                       (&VStack_5,&MStack_1,point,(MethodInfo *)0x0);
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    fVar2 = pVVar4->z;
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
              (&VStack_5,&MStack_1,normal,(MethodInfo *)0x0);
    puVar8 = (undefined8 *)func_?();
    fVar9 = *(float *)(puVar8 + 1);
    normal.x = (float)*puVar8;
    normal.y = (float)((ulonglong)*puVar8 >> 0x20);
    __return_storage_ptr__->x = normal.x * sideSign;
    __return_storage_ptr__->y = normal.y * sideSign;
    __return_storage_ptr__->z = fVar9 * sideSign;
    __return_storage_ptr__->w =
         (float)((uint)((float)uVar6 * normal.x * sideSign + (float)uVar7 * normal.y * sideSign +
                       fVar2 * fVar9 * sideSign) ^
                __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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
  iVar2 = (this->fields).hardwareWaterSupport;
  if ((this->fields).waterMode <= iVar2) {
    iVar2 = (this->fields).waterMode;
  }
  *reflectionCamera = (Camera *)0x0;
  func_?(reflectionCamera,0);
  *refractionCamera = (Camera *)0x0;
  func_?(refractionCamera,0);
  if (iVar2 < 1) {
    return;
  }
  pRVar3 = (this->fields).reflectionTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar3,(MethodInfo *)0x0);
  if ((bVar4 == 0) || ((this->fields).oldReflectionTextureSize != (this->fields).textureSize)) {
    pRVar3 = (this->fields).reflectionTexture;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pRVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pRVar3 = (this->fields).reflectionTexture;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DestroyImmediate_1
                ((Object_1 *)pRVar3,(MethodInfo *)0x0);
    }
    width = (this->fields).textureSize;
    height = (this->fields).textureSize;
    pRVar3 = (RenderTexture *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
              (pRVar3,width,height,0x10,(MethodInfo *)0x0);
    (this->fields).reflectionTexture = pRVar3;
    func_?(&(this->fields).reflectionTexture,pRVar3);
    pRVar3 = (this->fields).reflectionTexture;
    IStack_1.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                   ((Object_1 *)this,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral___WaterReflection,pSVar5,(MethodInfo *)0x0);
    if (pRVar3 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pRVar3,pSVar5,(MethodInfo *)0x0);
      pRVar3 = (this->fields).reflectionTexture;
      if (pRVar3 != (RenderTexture *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pRVar3,ExceptionArgument__Enum_dictionary,(MethodInfo *)0x0);
        pRVar3 = (this->fields).reflectionTexture;
        if (pRVar3 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)pRVar3,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          (this->fields).oldReflectionTextureSize = (this->fields).textureSize;
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
             (this->fields).reflectionCameras;
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
               (this->fields).reflectionCameras;
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
                  this_00 = (this->fields).reflectionCameras;
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
    func_?(&StringLiteral_Refractive);
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
      if (bVar2 != 0) {
        return Water_WaterMode__Enum_Reflective;
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_Refractive,(MethodInfo *)0x0);
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
  WVar1 = (this->fields).hardwareWaterSupport;
  if ((this->fields).waterMode <= (int)WVar1) {
    return (this->fields).waterMode;
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
  pRVar7 = (this->fields).reflectionTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar7,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    pRVar7 = (this->fields).reflectionTexture;
    if (pRVar7 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
              (pRVar7,(MethodInfo *)0x0);
    (this->fields).reflectionTexture = (RenderTexture *)0x0;
    func_?();
  }
  method_00 = (MethodInfo *)(this->fields).reflectionCameras;
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).reflectionCameras;
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
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  Renderer *pRVar9;
  code *pcVar10;
  Vector3 value;
  Vector3 value_00;
  Vector3 point;
  Vector3 vector;
  Vector4 clipPlane;
  Matrix4x4 rhs;
  Vector3 value_01;
  bool bVar11;
  Material *pMVar12;
  Camera *currentCamera;
  String *a;
  Transform *pTVar13;
  Vector3 *pVVar14;
  int32_t value_02;
  Matrix4x4 *pMVar15;
  undefined1 (*pauVar16) [12];
  uint uVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  Camera *pCVar30;
  float fVar31;
  undefined8 uStack_32;
  Camera *pCVar33;
  
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__Water);
    func_?(&StringLiteral_WATER_REFLECTIVE);
    func_?(&StringLiteral_WATER_REFRACTIVE);
    func_?(&StringLiteral__ReflectionTex);
    func_?(&StringLiteral_WATER_SIMPLE);
    cRam_? = '\x01';
  }
  pCVar33 = (Camera *)0x0;
  pCVar30 = (Camera *)0x0;
  func_?(&stack0xffffff74,0,0x40);
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                     ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    return;
  }
  pRVar9 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)pRVar9,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    return;
  }
  pRVar9 = (this->fields).meshRenderer;
  if (pRVar9 == (Renderer *)0x0) goto code_?;
  pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                      (pRVar9,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)pMVar12,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    return;
  }
  pRVar9 = (this->fields).meshRenderer;
  if (pRVar9 == (Renderer *)0x0) goto code_?;
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                     (pRVar9,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    return;
  }
  currentCamera =
       UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_current((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)currentCamera,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    return;
  }
  if (TypeInfo__Water->static_fields->InsideWater != 0) {
    return;
  }
  bVar19 = cRam_? == '\0';
  TypeInfo__Water->static_fields->InsideWater = 1;
  if (bVar19) {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pRVar9 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)pRVar9,(MethodInfo *)0x0);
  if (bVar11 == 0) {
code_?:
    iVar18 = 0;
  }
  else {
    pRVar9 = (this->fields).meshRenderer;
    if (pRVar9 == (Renderer *)0x0) goto code_?;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                        (pRVar9,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pMVar12,(MethodInfo *)0x0);
    if (bVar11 == 0) goto code_?;
    if (pMVar12 == (Material *)0x0) goto code_?;
    a = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTag
                  (pMVar12,StringLiteral_WATERMODE,0,(MethodInfo *)0x0);
    bVar11 = mscorlib.dll::System::String::String_op_Equality
                       (a,StringLiteral_Reflective,(MethodInfo *)0x0);
    if ((bVar11 == 0) &&
       (bVar11 = mscorlib.dll::System::String::String_op_Equality
                           (a,StringLiteral_Refractive,(MethodInfo *)0x0), bVar11 == 0))
    goto code_?;
    iVar18 = 1;
  }
  (this->fields).hardwareWaterSupport = iVar18;
  if ((this->fields).waterMode <= iVar18) {
    iVar18 = (this->fields).waterMode;
  }
  Water_CreateWaterObjects
            (this,currentCamera,(Camera **)&stack0xfffffff8,(Camera **)&stack0xffffffd0,
             (MethodInfo *)0x0);
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar13 != (Transform *)0x0) {
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffdc,pTVar13,(MethodInfo *)0x0);
    uVar1 = pVVar14->x;
    uVar5 = pVVar14->y;
    fVar3 = pVVar14->z;
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar13 != (Transform *)0x0) {
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffff50,pTVar13,(MethodInfo *)0x0);
      fVar2 = pVVar14->x;
      fVar6 = pVVar14->y;
      fVar7 = pVVar14->z;
      value_02 = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
                 QualitySettings_get_pixelLightCount((MethodInfo *)0x0);
      if ((this->fields).disablePixelLights != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
        QualitySettings_set_pixelLightCount(0,(MethodInfo *)0x0);
      }
      Water_UpdateCameraModes(this,currentCamera,pCVar33,(MethodInfo *)0x0);
      Water_UpdateCameraModes(this,currentCamera,pCVar30,(MethodInfo *)0x0);
      if ((iVar18 < 1) || ((this->fields).isCameraAboveWater == 0)) {
code_?:
        if ((this->fields).disablePixelLights != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
          QualitySettings_set_pixelLightCount(value_02,(MethodInfo *)0x0);
        }
        if ((iVar18 < 1) || ((this->fields).isCameraAboveWater == 0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
                    (StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
                    (StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
        }
        else {
          UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
                    (StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
                    (StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
                  (StringLiteral_WATER_REFRACTIVE,(MethodInfo *)0x0);
        TypeInfo__Water->static_fields->InsideWater = 0;
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_zero
                ((Matrix4x4 *)&stack0xffffff04,(MethodInfo *)0x0);
      fVar20 = _UNK_? - (fVar2 + fVar2) * fVar2;
      fVar21 = fVar2 * _UNK_? * fVar6;
      fVar22 = fVar6 * _UNK_? * fVar2;
      fVar23 = _UNK_? - (fVar6 + fVar6) * fVar6;
      fVar24 = fVar7 * _UNK_? * fVar2;
      fVar25 = fVar7 * _UNK_? * fVar6;
      fVar28 = 0.0;
      fVar29 = 0.0;
      if ((currentCamera != (Camera *)0x0) &&
         (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)currentCamera,(MethodInfo *)0x0),
         pTVar13 != (Transform *)0x0)) {
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff5c,pTVar13,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                  ((Vector3 *)&stack0xffffff44,(Matrix4x4 *)&stack0xffffff74,*pVVar14,
                   (MethodInfo *)0x0);
        pCVar30 = pCVar33;
        pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                            ((Matrix4x4 *)&stack0xffffff04,currentCamera,(MethodInfo *)0x0);
        fVar31 = 0.0;
        fVar26 = pMVar15->m21;
        fVar27 = pMVar15->m31;
        rhs.m10 = fVar22;
        rhs.m00 = fVar20;
        rhs.m20 = fVar24;
        rhs.m30 = fVar28;
        rhs.m01 = fVar21;
        rhs.m11 = fVar23;
        rhs.m21 = fVar25;
        rhs.m31 = fVar29;
        rhs.m02 = fVar20;
        rhs.m12 = fVar22;
        rhs.m22 = fVar24;
        rhs.m32 = fVar28;
        rhs.m03 = fVar21;
        rhs.m13 = fVar23;
        rhs.m23 = fVar25;
        rhs.m33 = fVar29;
        pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                            ((Matrix4x4 *)&stack0xffffff04,*pMVar15,rhs,(MethodInfo *)0x0);
        if (pCVar33 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_worldToCameraMatrix
                    (pCVar33,*pMVar15,(MethodInfo *)0x0);
          func_?();
          fVar20 = (this->fields).clipPlaneOffset;
          if (pCVar30 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                      ((Matrix4x4 *)&stack0xfffffec4,pCVar30,(MethodInfo *)0x0);
            point.z = fVar20 * fVar7 + fVar3;
            point.x = fVar20 * fVar2 + (float)uVar1;
            point.y = fVar20 * fVar6 + (float)uVar5;
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                                ((Vector3 *)&stack0xffffff44,(Matrix4x4 *)&stack0xffffff04,point,
                                 (MethodInfo *)0x0);
            fVar3 = pVVar14->x;
            fVar7 = pVVar14->y;
            fVar2 = pVVar14->z;
            vector.y = fVar27;
            vector.x = fVar26;
            vector.z = fVar31;
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                      ((Vector3 *)&stack0xffffff68,(Matrix4x4 *)&stack0xffffff04,vector,
                       (MethodInfo *)0x0);
            pauVar16 = (undefined1 (*) [12])func_?();
            uStack_32._0_4_ = (float)*(undefined8 *)*pauVar16;
            uStack_32._4_4_ = (float)((ulonglong)*(undefined8 *)*pauVar16 >> 0x20);
            clipPlane.w = (float)((uint)((float)uStack_32 * fVar3 + uStack_32._4_4_ * fVar7 +
                                        *(float *)(*pauVar16 + 8) * fVar2) ^
                                 __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                 );
            clipPlane._0_12_ = *pauVar16;
            pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_CalculateObliqueMatrix
                                ((Matrix4x4 *)&stack0xfffffec4,currentCamera,clipPlane,
                                 (MethodInfo *)0x0);
            if (pCVar30 != (Camera *)0x0) {
              fVar3 = pMVar15->m22;
              fVar2 = pMVar15->m32;
              fVar6 = pMVar15->m13;
              fVar7 = pMVar15->m23;
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_projectionMatrix
                        (pCVar30,*pMVar15,(MethodInfo *)0x0);
              if (((pCVar30 != (Camera *)0x0) &&
                  (pCVar33 = pCVar30,
                  uVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                                     (pCVar30,(MethodInfo *)0x0), pCVar30 != (Camera *)0x0)) &&
                 (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                            (pCVar30,uVar17 & 0xffffffef,(MethodInfo *)0x0),
                 pCVar33 != (Camera *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                          (pCVar33,(this->fields).reflectionTexture,(MethodInfo *)0x0);
                fVar20 = 0.0;
                value_02 = 1;
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling
                          (1,(MethodInfo *)0x0);
                if ((pCVar33 != (Camera *)0x0) &&
                   (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar33,(MethodInfo *)0x0),
                   pTVar13 != (Transform *)0x0)) {
                  value_01.y = fVar7;
                  value_01.x = fVar6;
                  value_01.z = fVar25;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar13,value_01,(MethodInfo *)0x0);
                  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)currentCamera,(MethodInfo *)0x0);
                  if (pTVar13 != (Transform *)0x0) {
                    pCVar30 = (Camera *)&stack0xffffffb8;
                    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_eulerAngles
                                        ((Vector3 *)pCVar30,pTVar13,(MethodInfo *)0x0);
                    uVar4 = pVVar14->x;
                    uVar8 = pVVar14->y;
                    fVar6 = pVVar14->z;
                    if (pCVar30 != (Camera *)0x0) {
                      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar30,(MethodInfo *)0x0);
                      if (((pTVar13 != (Transform *)0x0) &&
                          (value.y = (float)uVar8,
                          value.x = (float)(uVar4 ^ 
                                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                           ), value.z = fVar6,
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_eulerAngles(pTVar13,value,(MethodInfo *)0x0),
                          pCVar30 != (Camera *)0x0)) &&
                         ((UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render
                                     (pCVar30,(MethodInfo *)0x0), pCVar30 != (Camera *)0x0 &&
                          (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_transform((Component *)pCVar30,(MethodInfo *)0x0)
                          , pTVar13 != (Transform *)0x0)))) {
                        value_00.y = fVar2;
                        value_00.x = fVar3;
                        value_00.z = fVar20;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                  (pTVar13,value_00,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling
                                  (0,(MethodInfo *)0x0);
                        pRVar9 = (this->fields).meshRenderer;
                        if ((pRVar9 != (Renderer *)0x0) &&
                           (pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                      Renderer_get_sharedMaterial(pRVar9,(MethodInfo *)0x0),
                           pMVar12 != (Material *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                                    (pMVar12,StringLiteral__ReflectionTex,
                                     (Texture *)(this->fields).reflectionTexture,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
      uVar4._0_4_ = pVVar3->x;
      uVar4._4_4_ = pVVar3->y;
      fVar5 = pVVar3->z;
      fVar6 = pVVar3->w;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloat
                         (this_00,StringLiteral__WaveScale,(MethodInfo *)0x0);
      fVar8 = fVar7 * _UNK_?;
      fVar9 = fVar7 * _UNK_?;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                         ((MethodInfo *)0x0);
      dVar11 = (double)(fVar10 / (float)_UNK_?);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      dVar12 = mscorlib.dll::System::Math::Math_IEEERemainder
                         ((double)((float)uVar4 * fVar7) * dVar11,_UNK_?,(MethodInfo *)0x0)
      ;
      uVar13 = SUB84(dVar12,0);
      uVar14 = (undefined4)((ulonglong)dVar12 >> 0x20);
      dVar12 = mscorlib.dll::System::Math::Math_IEEERemainder
                         ((double)(SUB84(uVar4,4) * fVar7) * dVar11,_UNK_?,
                          (MethodInfo *)0x0);
      fVar10 = (float)(double)CONCAT44(uVar14,uVar13);
      fVar15 = (float)dVar12;
      uVar16 = SUB84(_UNK_?,0);
      uVar17 = (undefined4)((ulonglong)_UNK_? >> 0x20);
      dVar12 = (double)(fVar5 * fVar8) * dVar11;
      dVar18 = mscorlib.dll::System::Math::Math_IEEERemainder
                         (dVar12,_UNK_?,(MethodInfo *)0x0);
      uVar13 = (undefined4)((ulonglong)dVar12 >> 0x20);
      fVar5 = (float)dVar18;
      puVar19 = &UNK_?;
      dVar11 = mscorlib.dll::System::Math::Math_IEEERemainder
                         ((double)(fVar6 * fVar9) * dVar11,_UNK_?,(MethodInfo *)0x0);
      fVar6 = (float)dVar11;
      value.y = fVar15;
      value.x = fVar10;
      value.z = fVar5;
      value.w = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_00,StringLiteral__WaveOffset,value,(MethodInfo *)0x0);
      uVar20 = 0;
      puVar21 = &UNK_?;
      value_00.y = (float)uVar16;
      value_00.x = (float)uVar13;
      value_00.z = (float)uVar17;
      value_00.w = (float)puVar19;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_00,StringLiteral__WaveScale4,value_00,(MethodInfo *)0x0);
      pRVar1 = (this->fields).meshRenderer;
      if (pRVar1 != (Renderer *)0x0) {
        pBVar22 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                           ((Bounds *)&stack0xffffff9c,pRVar1,(MethodInfo *)0x0);
        uVar23 = (pBVar22->m_Extents).z;
        fVar10 = (pBVar22->m_Extents).x * _UNK_?;
        fVar5 = fVar10 * fVar7;
        fVar24 = 1.0;
        fVar7 = (float)uVar23 * _UNK_? * fVar7;
        fVar9 = (float)(double)CONCAT44(uVar14,uVar20);
        fVar15 = 0.0;
        fVar8 = (float)(double)CONCAT44(uVar17,uVar16);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pos_00.y = fVar8;
        pos_00.x = fVar9;
        pos_00.z = fVar15;
        s_00.y = fVar7;
        s_00.x = fVar5;
        s_00.z = fVar24;
        pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                           ((Matrix4x4 *)&stack0xffffff44,pos_00,
                            TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                            s_00,(MethodInfo *)0x0);
        fVar5 = pMVar25->m10;
        puVar19 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                  (this_00,StringLiteral__WaveMatrix,*pMVar25,(MethodInfo *)0x0);
        fVar9 = 0.0;
        fVar10 = fVar10 * (float)puVar19;
        fVar5 = fVar5 * fVar15;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pos.y = (float)puVar21;
        pos.x = fVar6;
        pos.z = fVar9;
        s.y = fVar5;
        s.x = fVar10;
        s.z = fVar24;
        pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                           ((Matrix4x4 *)&stack0xffffff44,pos,
                            TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s,
                            (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                  (this_00,StringLiteral__WaveMatrix2,*pMVar25,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
  value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (dest,value,(MethodInfo *)0x0);
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
  (this->fields).disablePixelLights = 1;
  (this->fields).isCameraAboveWater = 1;
  (this->fields).textureSize = 0x100;
  (this->fields).clipPlaneOffset = 0.07;
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
  (this->fields).reflectionCameras = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(&(this->fields).reflectionCameras,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsLethal() */

bool Assembly-CSharp-firstpass.dll::Water::Water_get_IsLethal(Water *this,MethodInfo *method)

{
  return (this->fields).isLethal;
}


/* Renderer get_Renderer() */

Renderer * Assembly-CSharp-firstpass.dll::Water::Water_get_Renderer(Water *this,MethodInfo *method)

{
  return (this->fields).meshRenderer;
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
  (this->fields).isLethal = value;
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
  bVar1 = (this->fields).isLethal;
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

