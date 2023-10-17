
/* Matrix4x4 CalculateObliqueMatrix(Matrix4x4, Vector4) */

Matrix4x4 *
Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CalculateObliqueMatrix
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 projection,Vector4 clipPlane,
          MethodInfo *method)

{
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffff9c,&projection,(MethodInfo *)0x0);
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
  fStack_5 = clipPlane.y * fVar4;
  fStack_6 = clipPlane.z * fVar4;
  fStack_7 = clipPlane.w * fVar4;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    (&projection,3,(MethodInfo *)0x0);
  projection.m00 = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (&projection,2,clipPlane.x * fVar4 - fVar8,(MethodInfo *)0x0);
  projection.m00 = 0.0;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    (&projection,7,(MethodInfo *)0x0);
  projection.m01 = (float)&projection;
  projection.m21 = fStack_5 - fVar4;
  projection.m31 = 0.0;
  projection.m11 = 8.40779e-45;
  projection.m30 = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            ((Matrix4x4 *)projection.m01,6,projection.m21,(MethodInfo *)0x0);
  projection.m31 = 0.0;
  projection.m11 = (float)&projection;
  projection.m21 = 1.54143e-44;
  projection.m01 = (float)&UNK_?;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)projection.m11,0xb,(MethodInfo *)0x0);
  projection.m32 = (float)&projection;
  projection.m13 = fStack_6 - fVar4;
  projection.m23 = 0.0;
  projection.m03 = 1.4013e-44;
  projection.m22 = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            ((Matrix4x4 *)projection.m32,10,projection.m13,(MethodInfo *)0x0);
  projection.m23 = 0.0;
  projection.m03 = (float)&projection;
  projection.m13 = 2.10195e-44;
  projection.m32 = (float)&UNK_?;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)projection.m03,0xf,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (&projection,0xe,fStack_7 - fVar4,(MethodInfo *)0x0);
  fRam00000007 = projection.m00;
  fRam0000000b = projection.m10;
  fRam0000000f = projection.m20;
  fRam00000013 = projection.m30;
  fRam00000017 = projection.m01;
  fRam0000001b = projection.m11;
  fRam0000001f = projection.m21;
  fRam00000023 = projection.m31;
  fRam00000027 = projection.m02;
  fRam0000002b = projection.m12;
  fRam0000002f = projection.m22;
  fRam00000033 = projection.m32;
  fRam00000037 = projection.m03;
  fRam0000003b = projection.m13;
  fRam0000003f = projection.m23;
  fRam00000043 = projection.m33;
  return (Matrix4x4 *)0x7;
}


/* Matrix4x4 CalculateReflectionMatrix(Matrix4x4, Vector4) */

Matrix4x4 *
Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CalculateReflectionMatrix
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 reflectionMat,Vector4 plane,
          MethodInfo *method)

{
  fVar1 = plane.x * _UNK_?;
  fVar2 = plane.x * _UNK_?;
  fVar3 = plane.w * _UNK_?;
  fVar4 = plane.y * _UNK_?;
  fVar5 = _UNK_? - (plane.y + plane.y) * plane.y;
  fVar6 = plane.y * _UNK_?;
  fVar7 = plane.w * _UNK_?;
  fVar8 = plane.z * _UNK_?;
  fVar9 = plane.z * _UNK_?;
  fVar10 = _UNK_? - (plane.z + plane.z) * plane.z;
  fVar11 = plane.w * _UNK_?;
  __return_storage_ptr__->m00 = _UNK_? - (plane.x + plane.x) * plane.x;
  __return_storage_ptr__->m10 = fVar4 * plane.x;
  __return_storage_ptr__->m20 = fVar8 * plane.x;
  __return_storage_ptr__->m30 = 0.0;
  __return_storage_ptr__->m01 = fVar1 * plane.y;
  __return_storage_ptr__->m11 = fVar5;
  __return_storage_ptr__->m21 = fVar9 * plane.y;
  __return_storage_ptr__->m31 = 0.0;
  __return_storage_ptr__->m02 = fVar2 * plane.z;
  __return_storage_ptr__->m12 = fVar6 * plane.z;
  __return_storage_ptr__->m22 = fVar10;
  __return_storage_ptr__->m32 = 0.0;
  __return_storage_ptr__->m03 = fVar3 * plane.x;
  __return_storage_ptr__->m13 = fVar7 * plane.y;
  __return_storage_ptr__->m23 = fVar11 * plane.z;
  __return_storage_ptr__->m33 = 1.0;
  return __return_storage_ptr__;
}


/* Vector4 CameraSpacePlane(Camera, Vector3, Vector3, Single) */

Vector4 * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CameraSpacePlane
                    (Vector4 *__return_storage_ptr__,PlanarReflection *this,Camera *cam,Vector3 pos,
                    Vector3 normal,float sideSign,MethodInfo *method)

{
  func_?(&MStack_1,0,0x40);
  fVar2 = (this->fields).clipPlaneOffset;
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


/* Camera CreateReflectionCameraFor(Camera) */

Camera * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CreateReflectionCameraFor
                   (PlanarReflection *this,Camera *cam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__UnityEngine__Camera);
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                   );
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_Reflection);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((pGVar1 == (GameObject *)0x0) ||
     (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar1,(MethodInfo *)0x0), cam == (Camera *)0x0)) {
code_?:
    func_?();
  }
  else {
    str2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                     ((Object_1 *)cam,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar2,StringLiteral_Reflection,str2,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                       (pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (pGVar1 != (GameObject *)0x0) {
code_?:
        exists = (Object_1 *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar1,
                            UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                           );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          (exists,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                    (pGVar1,
                     UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                    );
        }
        pCVar4 = (Camera *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar1,
                            UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                           );
        if (pCVar4 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                    (pCVar4,(this->fields).clearColor,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                    (pCVar4,((this->fields).reflectSkybox == 0) + CameraClearFlags__Enum_Skybox,
                     (MethodInfo *)0x0);
          source = (Void *)(this->fields).reflectionMask.m_Mask;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          ppOVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                              (source,(MethodInfo *)0x0);
          uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Water,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar4,(uint)ppOVar5 & ~(1 << (uVar6 & 0x1f)),(MethodInfo *)0x0);
          value.g = (float)_UNK_?;
          value.r = (float)_UNK_?;
          value.b = (float)_UNK_?;
          value.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                    (pCVar4,value,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pCVar4,0,(MethodInfo *)0x0);
          pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                              (pCVar4,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)pRVar7,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return pCVar4;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                    (pCVar4,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar8 = (float10)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                    (pCVar4,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar7 = (RenderTexture *)func_?();
          if (pRVar7 != (RenderTexture *)0x0) {
            method_00 = (MethodInfo *)0x0;
            func_?();
            height = func_?();
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
                      (pRVar7,(int)fVar8,height,0x18,method_00);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      ((Object_1 *)pRVar7,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                      (pCVar4,pRVar7,(MethodInfo *)0x0);
            return pCVar4;
          }
        }
      }
      goto code_?;
    }
    components = (Type__Array *)func_?();
    handle = TypeRef__UnityEngine__Camera;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (components == (Type__Array *)0x0) goto code_?;
    if ((pTVar9 == (Type *)0x0) || (iVar10 = func_?(), iVar10 != 0)) {
      if (components->max_length == 0) goto code_?;
      components->vector[0] = pTVar9;
      func_?();
      pGVar1 = (GameObject *)func_?();
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_2
                  (pGVar1,pSVar2,components,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pCVar4 = (Camera *)(*pcVar11)();
  return pCVar4;
}


/* RenderTexture CreateTextureFor(Camera) */

RenderTexture *
Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CreateTextureFor
          (PlanarReflection *this,Camera *cam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  dVar1 = (double)CONCAT44(unaff_ESI,unaff_EDI);
  if (cam != (Camera *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                      (cam,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar3 = (float)iVar2 * _UNK_?;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    dVar1 = (double)fVar3;
    fVar4 = (float10)func_?(dVar1);
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                      (cam,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar3 = (float)iVar2 * _UNK_?;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pRVar5 = (RenderTexture *)func_?();
    if (pRVar5 != (RenderTexture *)0x0) {
      method_00 = (MethodInfo *)0x0;
      depth = 0x18;
      func_?((double)fVar3);
      iVar2 = func_?();
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
                (pRVar5,(int)fVar4,iVar2,depth,method_00);
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                ((Object_1 *)pRVar5,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
      return pRVar5;
    }
  }
  func_?(dVar1);
  pcVar6 = (code *)swi(3);
  pRVar5 = (RenderTexture *)(*pcVar6)();
  return pRVar5;
}


/* Void LateUpdate() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_LateUpdate
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Clear__
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).helperCameras != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
    Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
              ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this->fields).helperCameras,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Clear__
              );
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_OnDestroy
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).reflectionCamera;
  if (pCVar1 != (Camera *)0x0) {
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                       (pCVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pRVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pCVar1 = (this->fields).reflectionCamera;
    if (pCVar1 != (Camera *)0x0) {
      pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                         (pCVar1,(MethodInfo *)0x0);
      pCVar1 = (this->fields).reflectionCamera;
      if ((pCVar1 != (Camera *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0), pRVar2 != (RenderTexture *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                  (pRVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_OnDisable
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_WATER_REFLECTIVE);
    func_?(&StringLiteral_WATER_SIMPLE);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
            (StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
            (StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_OnEnable
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_WATER_REFLECTIVE);
    func_?(&StringLiteral_WATER_SIMPLE);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
            (StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
            (StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
  return;
}


/* Void RenderHelpCameras(Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_RenderHelpCameras
               (PlanarReflection *this,Camera *currentCam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).helperCameras == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    pDVar1 = (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>
                            );
    if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
              );
    (this->fields).helperCameras = pDVar1;
    func_?(&(this->fields).helperCameras,pDVar1);
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).helperCameras;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)currentCam,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                      );
    if (bVar2 == 0) {
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).helperCameras;
      if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar3,(Object *)currentCam,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
                );
    }
    pDVar1 = (this->fields).helperCameras;
    if (pDVar1 != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Boolean]::Dictionary_2_System_Object_System_Boolean__get_Item
                        ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                        );
      if (bVar2 == 0) {
        pCVar4 = (this->fields).reflectionCamera;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pCVar4,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          pCVar4 = PlanarReflection_CreateReflectionCameraFor(this,currentCam,(MethodInfo *)0x0);
          (this->fields).reflectionCamera = pCVar4;
          func_?(&(this->fields).reflectionCamera,pCVar4);
        }
        PlanarReflection_RenderReflectionFor
                  (this,currentCam,(this->fields).reflectionCamera,(MethodInfo *)0x0);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).helperCameras;
        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar3,(Object *)currentCam,(Object *)0x1,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
                  );
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RenderReflectionFor(Camera, Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_RenderReflectionFor
               (PlanarReflection *this,Camera *cam,Camera *reflectCamera,MethodInfo *method)

{
  auVar1._0_56_ = in_stack_2._0_56_;
  auVar1._56_4_ = unaff_EBX;
  auVar3._0_44_ = in_stack_2._0_44_;
  auVar3._44_4_ = unaff_EBP;
  auVar3._52_8_ = auVar1._52_8_;
  auVar3._48_4_ = unaff_retaddr;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeRef__UnityEngine__Skybox);
    func_?(&TypeInfo__UnityEngine__Skybox);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_Water);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)reflectCamera,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return;
  }
  auVar5._44_16_ = auVar3._44_16_;
  auVar5._0_40_ = auVar3._0_40_;
  auVar5._40_4_ = (this->fields).sharedMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     (auVar5._40_4_,(MethodInfo *)0x0);
  if (bVar4 == 0) {
code_?:
    ppOVar6 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                         ((Void *)(this->fields).reflectionMask.m_Mask,(MethodInfo *)0x0);
    auVar7._44_16_ = auVar5._44_16_;
    auVar7._0_40_ = auVar5._0_40_;
    auVar7._40_4_ = ppOVar6;
    uVar8 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Water,(MethodInfo *)0x0);
    if (reflectCamera == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (reflectCamera,auVar7._40_4_ & ~(1 << (uVar8 & 0x1f)),(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
              (reflectCamera,DepthTextureMode__Enum_None,(MethodInfo *)0x0);
    value_01.g = (float)_UNK_?;
    value_01.r = (float)_UNK_?;
    value_01.b = (float)_UNK_?;
    value_01.a = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (reflectCamera,value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
              (reflectCamera,CameraClearFlags__Enum_Color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_renderingPath
              (reflectCamera,RenderingPath__Enum_Forward,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (reflectCamera,(this->fields).clearColor,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
              (reflectCamera,((this->fields).reflectSkybox == 0) + CameraClearFlags__Enum_Skybox,
               (MethodInfo *)0x0);
    if ((this->fields).reflectSkybox == 0) {
code_?:
      auVar9._16_44_ = auVar7._16_44_;
      auVar9._0_12_ = auVar7._0_12_;
      auVar9._12_4_ = 0;
      auVar10._12_48_ = auVar9._12_48_;
      auVar10._0_8_ = auVar7._0_8_;
      auVar10._8_4_ = 1;
      auVar11._8_52_ = auVar10._8_52_;
      auVar11._0_8_ = 0x1018bdcf00000000;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
      auVar12._16_44_ = auVar11._16_44_;
      auVar12._0_12_ = auVar11._0_12_;
      auVar12._12_4_ = 0;
      auVar13._12_48_ = auVar12._12_48_;
      auVar13._0_8_ = auVar11._0_8_;
      auVar13._8_4_ = this;
      auVar14._8_52_ = auVar13._8_52_;
      auVar14._0_8_ = 0x1018bdd700000000;
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      auVar16._40_20_ = auVar14._40_20_;
      auVar16._0_36_ = auVar14._0_36_;
      auVar16._36_4_ = pTVar15;
      if (cam == (Camera *)0x0) goto code_?;
code_?:
      auVar17._32_28_ = auVar16._32_28_;
      auVar17._0_28_ = auVar16._0_28_;
      auVar17._28_4_ = 0;
      auVar18._28_32_ = auVar17._28_32_;
      auVar18._0_24_ = auVar16._0_24_;
      auVar18._24_4_ = cam;
      auVar19._24_36_ = auVar18._24_36_;
      auVar19._0_20_ = auVar16._0_20_;
      auVar19._20_4_ = &UNK_?;
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)cam,(MethodInfo *)0x0);
      if (pTVar15 != (Transform *)0x0) {
        auVar20._40_20_ = auVar19._40_20_;
        auVar20._0_36_ = auVar19._0_36_;
        auVar20._36_4_ = 0;
        auVar21._36_24_ = auVar20._36_24_;
        auVar21._0_32_ = auVar19._0_32_;
        auVar21._32_4_ = pTVar15;
        auVar22._32_28_ = auVar21._32_28_;
        auVar22._0_28_ = auVar19._0_28_;
        auVar22._28_4_ = (Vector3 *)&stack0xffffffc8;
        auVar23._28_32_ = auVar22._28_32_;
        auVar23._0_24_ = auVar19._0_24_;
        auVar23._24_4_ = &UNK_?;
        pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                            ((Vector3 *)&stack0xffffffc8,pTVar15,(MethodInfo *)0x0);
        auVar25._40_20_ = auVar23._40_20_;
        auVar25._0_36_ = auVar23._0_36_;
        auVar25._36_4_ = 0;
        auVar26._36_24_ = auVar25._36_24_;
        auVar26._0_32_ = auVar23._0_32_;
        auVar26._32_4_ = reflectCamera;
        uVar27 = pVVar24->x;
        uVar28 = pVVar24->y;
        auVar29._24_4_ = uVar28;
        auVar29._20_4_ = uVar27;
        auVar29._0_20_ = auVar23._0_20_;
        auVar29._32_28_ = auVar26._32_28_;
        auVar29._28_4_ = &UNK_?;
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)reflectCamera,(MethodInfo *)0x0);
        auVar30._48_4_ = auVar29._24_4_;
        auVar30._44_4_ =
             (uint)auVar29._20_4_ ^
             __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
        if (pTVar15 != (Transform *)0x0) {
          auVar30._0_40_ = auVar29._0_40_;
          auVar30._40_4_ = pTVar15;
          auVar30._52_4_ = auVar29._28_4_;
          auVar31._0_36_ = auVar29._0_36_;
          auVar31._36_4_ = &UNK_?;
          auVar31._40_16_ = auVar30._40_16_;
          auVar31._56_4_ = 0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                    (pTVar15,auVar30._44_12_,(MethodInfo *)0x0);
          auVar32._0_48_ = auVar31._0_48_;
          auVar32._48_4_ = &UNK_?;
          auVar32._52_4_ = reflectCamera;
          auVar32._56_4_ = 0;
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)reflectCamera,(MethodInfo *)0x0);
          auVar33._0_52_ = auVar32._0_52_;
          auVar33._52_4_ = cam;
          auVar34._40_4_ = pTVar15;
          auVar34._0_40_ = auVar32._0_40_;
          auVar34._44_12_ = auVar33._44_12_;
          auVar35._0_48_ = auVar34._0_48_;
          auVar35._48_4_ = &UNK_?;
          auVar35._52_4_ = cam;
          auVar35._56_4_ = 0;
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)cam,(MethodInfo *)0x0);
          if (pTVar15 != (Transform *)0x0) {
            pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffc8,pTVar15,(MethodInfo *)0x0);
            if (auVar35._40_4_ != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (auVar35._40_4_,*pVVar24,(MethodInfo *)0x0);
              if ((auVar35._36_4_ != (Component *)0x0) &&
                 (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(auVar35._36_4_,(MethodInfo *)0x0),
                 pTVar15 != (Transform *)0x0)) {
                pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffd8,pTVar15,(MethodInfo *)0x0);
                uVar36 = pVVar24->x;
                uVar37 = pVVar24->y;
                auVar38._4_4_ = uVar37;
                auVar38._0_4_ = uVar36;
                auVar39._16_44_ = auVar35._16_44_;
                auVar39._0_12_ = auVar35._0_12_;
                auVar39._12_4_ = pVVar24->z;
                auVar38._8_48_ = auVar39._12_48_;
                auVar38._56_4_ = 0;
                auVar38 = auVar38 << 0x20;
                pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffd8,auVar35._36_4_,(MethodInfo *)0x0);
                auVar40._44_16_ = auVar38._44_16_;
                auVar40._0_40_ = auVar38._0_40_;
                auVar40._40_4_ = pVVar24->y;
                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(auVar38._36_4_,(MethodInfo *)0x0);
                if (pTVar15 != (Transform *)0x0) {
                  pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                      ((Vector3 *)&stack0xffffff48,pTVar15,(MethodInfo *)0x0);
                  fStack_41 = pVVar24->x;
                  puStack_42 = (undefined *)pVVar24->y;
                  fVar43 = pVVar24->z;
                  auVar44._0_20_ = auVar40._0_20_;
                  auVar44._20_4_ = fStack_41;
                  auVar44._24_4_ = puStack_42;
                  auVar44._32_28_ = auVar40._32_28_;
                  auVar44._28_4_ = fVar43;
                  fVar45 = auVar40._4_4_;
                  auVar46._40_20_ = auVar40._40_20_;
                  auVar46._0_36_ = auVar44._0_36_;
                  auVar46._36_4_ =
                       (float)((uint)(auVar40._40_4_ * (float)puStack_42 + fVar45 * fStack_41 +
                                     auVar40._12_4_ * fVar43) ^
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              ) - (this->fields).clipPlaneOffset;
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_zero
                            ((Matrix4x4 *)&stack0xfffffeb8,(MethodInfo *)0x0);
                  fVar47 = auVar46._20_4_;
                  fStack_48 = _UNK_? - (fVar47 + fVar47) * fVar47;
                  fVar49 = auVar46._24_4_;
                  puStack_50 = (undefined *)(fVar47 * _UNK_? * fVar49);
                  fVar51 = auVar46._28_4_;
                  fVar52 = fVar47 * _UNK_? * fVar51;
                  fVar53 = auVar46._36_4_;
                  fVar54 = fVar53 * _UNK_?;
                  fStack_55 = fVar49 * _UNK_? * fVar47;
                  fVar56 = _UNK_? - (fVar49 + fVar49) * fVar49;
                  fVar57 = fVar49 * _UNK_? * fVar51;
                  fVar58 = fVar53 * _UNK_?;
                  fStack_59 = fVar51 * _UNK_? * fVar47;
                  fVar60 = fVar51 * _UNK_? * fVar49;
                  fVar61 = _UNK_? - (fVar51 + fVar51) * fVar51;
                  fVar53 = fVar53 * _UNK_?;
                  fStack_62 = 0.0;
                  fVar63 = 0.0;
                  pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)cam,(MethodInfo *)0x0);
                  if (pTVar15 != (Transform *)0x0) {
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffff48,pTVar15,(MethodInfo *)0x0);
                    fVar64 = pVVar24->y;
                    fVar65 = pVVar24->z;
                    VVar66 = *pVVar24;
                    (this->fields).oldpos.x = pVVar24->x;
                    (this->fields).oldpos.y = fVar64;
                    (this->fields).oldpos.z = fVar65;
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyPoint
                                        ((Vector3 *)&stack0xffffff48,(Matrix4x4 *)&fStack_48,VVar66
                                         ,(MethodInfo *)0x0);
                    uVar67 = pVVar24->x;
                    auVar68._40_20_ = auVar46._40_20_;
                    auVar68._0_36_ = auVar46._0_36_;
                    auVar68._36_4_ = pVVar24->z;
                    pMVar69 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_get_worldToCameraMatrix
                                        ((Matrix4x4 *)&stack0xfffffeb8,cam,(MethodInfo *)0x0);
                    rhs.m10 = fStack_55;
                    rhs.m00 = fStack_48;
                    rhs.m20 = fStack_59;
                    rhs.m30 = fStack_62;
                    rhs.m01 = (float)puStack_50;
                    rhs.m11 = fVar56;
                    rhs.m21 = fVar60;
                    rhs.m31 = fVar63;
                    rhs.m02 = fVar52;
                    rhs.m12 = fVar57;
                    rhs.m22 = fVar61;
                    rhs.m32 = 0.0;
                    rhs.m03 = fVar54 * fVar47;
                    rhs.m13 = fVar58 * fVar49;
                    rhs.m23 = fVar53 * fVar51;
                    rhs.m33 = 1.0;
                    pMVar69 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_op_Multiply
                                        ((Matrix4x4 *)&stack0xfffffeb8,*pMVar69,rhs,
                                         (MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_worldToCameraMatrix
                              (reflectCamera,*pMVar69,(MethodInfo *)0x0);
                    func_?();
                    fVar52 = (this->fields).clipPlaneOffset;
                    fVar45 = fVar45 + fVar52 * auVar68._20_4_;
                    auVar70._44_16_ = auVar68._44_16_;
                    auVar70._0_40_ = auVar68._0_40_;
                    auVar70._40_4_ = auVar68._40_4_ + fVar52 * auVar68._24_4_;
                    auVar71._16_44_ = auVar70._16_44_;
                    auVar71._0_12_ = auVar68._0_12_;
                    auVar71._12_4_ = auVar68._12_4_ + fVar52 * auVar68._28_4_;
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                              ((Matrix4x4 *)&stack0xfffffeb8,reflectCamera,(MethodInfo *)0x0);
                    VVar66.y = (float)auVar71._40_4_;
                    VVar66.x = fVar45;
                    VVar66.z = auVar71._12_4_;
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyPoint
                                        ((Vector3 *)&stack0xffffff48,(Matrix4x4 *)&stack0xffffff58,
                                         VVar66,(MethodInfo *)0x0);
                    uVar72 = pVVar24->x;
                    uVar73 = pVVar24->y;
                    auVar74._24_4_ = uVar73;
                    auVar74._20_4_ = uVar72;
                    auVar75._32_28_ = auVar71._32_28_;
                    auVar75._0_28_ = auVar71._0_28_;
                    auVar75._28_4_ = pVVar24->z;
                    auVar74._28_32_ = auVar75._28_32_;
                    auVar74._0_20_ = auVar71._0_20_;
                    vector.z = fVar43;
                    vector.x = fStack_41;
                    vector.y = (float)puStack_42;
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyVector
                                        ((Vector3 *)&stack0xffffff38,(Matrix4x4 *)&stack0xffffff58,
                                         vector,(MethodInfo *)0x0);
                    uVar76 = pVVar24->x;
                    uVar77 = pVVar24->y;
                    auVar78._4_4_ = uVar77;
                    auVar78._0_4_ = uVar76;
                    auVar79._16_44_ = auVar74._16_44_;
                    auVar79._0_12_ = auVar74._0_12_;
                    auVar79._12_4_ = pVVar24->z;
                    auVar78._8_48_ = auVar79._12_48_;
                    auVar78._56_4_ = 0;
                    auVar78 = auVar78 << 0x20;
                    puVar80 = (undefined8 *)func_?();
                    fVar43 = *(float *)(puVar80 + 1);
                    fVar54 = (float)*puVar80;
                    fVar56 = (float)((ulonglong)*puVar80 >> 0x20);
                    fVar52 = (float)((uint)(auVar78._24_4_ * fVar56 + auVar78._20_4_ * fVar54 +
                                           auVar78._28_4_ * fVar43) ^
                                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                    );
                    pMVar69 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_get_projectionMatrix
                                        ((Matrix4x4 *)&stack0xfffffeb8,cam,(MethodInfo *)0x0);
                    clipPlane.y = fVar56;
                    clipPlane.x = fVar54;
                    clipPlane.z = fVar43;
                    clipPlane.w = fVar52;
                    pMVar69 = PlanarReflection_CalculateObliqueMatrix
                                        ((Matrix4x4 *)&stack0xfffffeb8,*pMVar69,clipPlane,
                                         (MethodInfo *)0x0);
                    auVar81._0_4_ = pMVar69->m00;
                    auVar81._4_4_ = pMVar69->m10;
                    auVar81._8_4_ = pMVar69->m20;
                    auVar81._12_4_ = pMVar69->m30;
                    auVar81._16_4_ = pMVar69->m01;
                    auVar81._20_4_ = pMVar69->m11;
                    auVar81._24_4_ = pMVar69->m21;
                    auVar81._28_4_ = pMVar69->m31;
                    auVar81._32_4_ = pMVar69->m02;
                    auVar81._36_4_ = pMVar69->m12;
                    auVar81._40_4_ = pMVar69->m22;
                    auVar81._44_4_ = pMVar69->m32;
                    auVar81._48_4_ = pMVar69->m03;
                    auVar81._52_4_ = pMVar69->m13;
                    auVar81._56_4_ = pMVar69->m23;
                    uVar82 = CONCAT44(&UNK_?,uVar67);
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_projectionMatrix
                              (reflectCamera,*pMVar69,(MethodInfo *)0x0);
                    auVar83._0_56_ = auVar81._0_56_;
                    auVar83._56_4_ = &UNK_?;
                    pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
                    if (pTVar15 != (Transform *)0x0) {
                      value.z = auVar83._36_4_;
                      value.x = (float)(int)uVar82;
                      value.y = (float)(int)((ulonglong)uVar82 >> 0x20);
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                (pTVar15,value,(MethodInfo *)0x0);
                      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)cam,(MethodInfo *)0x0);
                      if (pTVar15 != (Transform *)0x0) {
                        pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_eulerAngles
                                            ((Vector3 *)&stack0xffffffa0,pTVar15,(MethodInfo *)0x0);
                        auVar84._12_44_ = auVar83._16_44_;
                        auVar84._0_4_ = pVVar24->x;
                        auVar84._4_4_ = pVVar24->y;
                        auVar84._8_4_ = pVVar24->z;
                        auVar84._56_4_ = 0;
                        auVar84 = auVar84 << 0x20;
                        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform
                                            ((Component *)reflectCamera,(MethodInfo *)0x0);
                        auVar85._0_20_ = auVar84._0_20_;
                        auVar85._20_4_ =
                             (uint)auVar84._4_4_ ^
                             __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                        ;
                        auVar85._24_4_ = auVar84._8_4_;
                        if (pTVar15 != (Transform *)0x0) {
                          value_00.z = auVar84._12_4_;
                          value_00.x = (float)auVar85._20_8_;
                          value_00.y = SUB84(auVar85._20_8_,4);
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_eulerAngles(pTVar15,value_00,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render
                                    (reflectCamera,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling
                                    (0,(MethodInfo *)0x0);
                          return;
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
      goto code_?;
    }
    if (cam == (Camera *)0x0) goto code_?;
    pGVar86 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)cam,(MethodInfo *)0x0);
    pIVar87 = TypeRef__UnityEngine__Skybox;
    auVar7._40_4_ = pGVar86;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar88 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar87,(MethodInfo *)0x0);
    if (auVar7._40_4_ == (GameObject *)0x0) goto code_?;
    pCVar89 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                        (auVar7._40_4_,pTVar88,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pCVar89,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    pGVar86 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)reflectCamera,(MethodInfo *)0x0);
    pIVar87 = TypeRef__UnityEngine__Skybox;
    auVar90._44_16_ = auVar7._44_16_;
    auVar90._0_40_ = auVar7._0_40_;
    auVar90._40_4_ = pGVar86;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar88 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar87,(MethodInfo *)0x0);
    if (auVar90._40_4_ == (GameObject *)0x0) goto code_?;
    pCVar91 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                        (auVar90._40_4_,pTVar88,(MethodInfo *)0x0);
    pCVar89 = (Component *)0x0;
    auVar92._40_20_ = auVar90._40_20_;
    auVar93._0_36_ = auVar90._0_36_;
    if (pCVar91 == (Component *)0x0) {
      auVar93._36_4_ = 0;
    }
    else {
      if ((Skybox__Class *)pCVar91->klass == TypeInfo__UnityEngine__Skybox) {
        pCVar89 = pCVar91;
      }
      auVar93._36_4_ = pCVar89;
      if (pCVar89 == (Component *)0x0) goto code_?;
    }
    auVar92._0_40_ = auVar93;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pCVar89,(MethodInfo *)0x0);
    if (bVar4 != 0) goto code_?;
    pGVar86 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)reflectCamera,(MethodInfo *)0x0);
    pIVar87 = TypeRef__UnityEngine__Skybox;
    auVar94._44_16_ = auVar92._44_16_;
    auVar94._0_40_ = auVar92._0_40_;
    auVar94._40_4_ = pGVar86;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar88 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar87,(MethodInfo *)0x0);
    if (auVar94._40_4_ == (GameObject *)0x0) goto code_?;
    pCVar89 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent
                        (auVar94._40_4_,pTVar88,(MethodInfo *)0x0);
    auVar92._40_20_ = auVar94._40_20_;
    auVar92._0_36_ = auVar94._0_36_;
    if (pCVar89 != (Component *)0x0) {
      pCVar91 = (Component *)0x0;
      if ((Skybox__Class *)pCVar89->klass == TypeInfo__UnityEngine__Skybox) {
        pCVar91 = pCVar89;
      }
      auVar92._36_4_ = pCVar91;
      if (pCVar91 != (Component *)0x0) goto code_?;
      goto code_?;
    }
    auVar92._36_4_ = 0;
code_?:
    pIVar87 = TypeRef__UnityEngine__Skybox;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar88 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar87,(MethodInfo *)0x0);
    pSVar95 = (Skybox *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent
                        ((Component *)cam,pTVar88,(MethodInfo *)0x0);
    if (pSVar95 == (Skybox *)0x0) goto code_?;
    pSVar96 = (Skybox *)0x0;
    if (pSVar95->klass == TypeInfo__UnityEngine__Skybox) {
      pSVar96 = pSVar95;
    }
    if (pSVar96 != (Skybox *)0x0) {
      pSVar96 = (Skybox *)0x0;
      if (pSVar95->klass == TypeInfo__UnityEngine__Skybox) {
        pSVar96 = pSVar95;
      }
      pMVar97 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                          (pSVar96,(MethodInfo *)0x0);
      if (auVar92._36_4_ != (Skybox *)0x0) {
        auVar98._56_4_ = 0;
        auVar98._0_56_ = auVar92._4_56_;
        auVar98 = auVar98 << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                  (auVar92._36_4_,pMVar97,(MethodInfo *)0x0);
        auVar99._56_4_ = 0;
        auVar99._0_56_ = auVar98._4_56_;
        auVar99 = auVar99 << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
        auVar100._56_4_ = 0;
        auVar100._0_56_ = auVar99._4_56_;
        auVar100 = auVar100 << 0x20;
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        auVar16._40_20_ = auVar100._40_20_;
        auVar16._0_36_ = auVar100._0_36_;
        auVar16._36_4_ = pTVar15;
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pMVar97 = (this->fields).sharedMaterial;
    if (pMVar97 != (Material *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                         (pMVar97,(this->fields).reflectionSampler,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      goto code_?;
    }
code_?:
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar101 = (code *)swi(3);
  (*pcVar101)();
  return;
}


/* Void SaneCameraSettings(Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_SaneCameraSettings
               (PlanarReflection *this,Camera *helperCam,MethodInfo *method)

{
  if (helperCam != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
              (helperCam,DepthTextureMode__Enum_None,(MethodInfo *)0x0);
    value.g = (float)_UNK_?;
    value.r = (float)_UNK_?;
    value.b = (float)_UNK_?;
    value.a = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (helperCam,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
              (helperCam,CameraClearFlags__Enum_Color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_renderingPath
              (helperCam,RenderingPath__Enum_Forward,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetStandardCameraParameter(Camera, LayerMask) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_SetStandardCameraParameter
               (PlanarReflection *this,Camera *cam,LayerMask mask,MethodInfo *method)

{
  this_00 = cam;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Water);
    cRam_? = '\x01';
  }
  ppOVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                      ((Void *)mask.m_Mask,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Water,(MethodInfo *)0x0);
  if (cam != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (cam,(uint)ppOVar1 & ~(1 << (uVar2 & 0x1f)),(MethodInfo *)0x0);
    this = (PlanarReflection *)_UNK_?;
    fVar3 = (float)_UNK_?;
    cam = (Camera *)_UNK_?;
    value.r = _UNK_?;
    value = (Color)CONCAT124(auVar4,value.r);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (this_00,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_Start
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
  if (pOVar1 != (Object *)0x0) {
    pMVar2 = (Material *)pOVar1[1].monitor;
    (this->fields).sharedMaterial = pMVar2;
    func_?(&(this->fields).sharedMaterial,pMVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WaterTileBeingRendered(Transform, Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_WaterTileBeingRendered
               (PlanarReflection *this,Transform *tr,Camera *currentCam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).helperCameras == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    pDVar1 = (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>
                            );
    if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
              );
    (this->fields).helperCameras = pDVar1;
    func_?(&(this->fields).helperCameras,pDVar1);
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).helperCameras;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)currentCam,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                      );
    if (bVar2 == 0) {
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).helperCameras;
      if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar3,(Object *)currentCam,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
                );
    }
    pDVar1 = (this->fields).helperCameras;
    if (pDVar1 != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Boolean]::Dictionary_2_System_Object_System_Boolean__get_Item
                        ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                        );
      if (bVar2 == 0) {
        pCVar4 = (this->fields).reflectionCamera;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pCVar4,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          pCVar4 = PlanarReflection_CreateReflectionCameraFor(this,currentCam,(MethodInfo *)0x0);
          (this->fields).reflectionCamera = pCVar4;
          func_?(&(this->fields).reflectionCamera,pCVar4);
        }
        PlanarReflection_RenderReflectionFor
                  (this,currentCam,(this->fields).reflectionCamera,(MethodInfo *)0x0);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).helperCameras;
        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar3,(Object *)currentCam,(Object *)0x1,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
                  );
      }
      pCVar4 = (this->fields).reflectionCamera;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pCVar4,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pMVar5 = (this->fields).sharedMaterial;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pMVar5,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pCVar4 = (this->fields).reflectionCamera;
          pMVar5 = (this->fields).sharedMaterial;
          name = (this->fields).reflectionSampler;
          if ((pCVar4 != (Camera *)0x0) &&
             (value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                                (pCVar4,(MethodInfo *)0x0), pMVar5 != (Material *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                      (pMVar5,name,(Texture *)value,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* PlanarReflection() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection__ctor
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__ReflectionTex);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).clearColor.r = _UNK_?;
  (this->fields).clearColor.g = fVar3;
  (this->fields).clearColor.b = fVar2;
  (this->fields).clearColor.a = fVar1;
  (this->fields).reflectionSampler = StringLiteral__ReflectionTex;
  func_?(&(this->fields).reflectionSampler,StringLiteral__ReflectionTex);
  (this->fields).clipPlaneOffset = 0.07;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar4->zeroVector).y;
  fVar3 = (pVVar4->zeroVector).z;
  (this->fields).oldpos.x = (pVVar4->zeroVector).x;
  (this->fields).oldpos.y = fVar2;
  (this->fields).oldpos.z = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}


/* Single sgn(Single) */

float Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_sgn
                (float a,MethodInfo *method)

{
  if (0.0 < a) {
    return 1.0;
  }
  if (0.0 <= a) {
    return 0.0;
  }
  return _UNK_?;
}

