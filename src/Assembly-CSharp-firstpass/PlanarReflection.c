
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
code_?:
      if (pGVar1 != (GameObject *)0x0) {
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
        method_00 = (MethodInfo *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar1,
                               UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                              );
        if (method_00 != (MethodInfo *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                    ((Camera *)method_00,(this->fields).clearColor,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                    ((Camera *)method_00,
                     ((this->fields).reflectSkybox == 0) + CameraClearFlags__Enum_Skybox,
                     (MethodInfo *)0x0);
          ptr = (Void *)(this->fields).reflectionMask.m_Mask;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          p_Var7 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_AsRef_1(ptr,(MethodInfo *)0x0);
          uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Water,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    ((Camera *)method_00,(uint)p_Var7 & ~(1 << (uVar4 & 0x1f)),(MethodInfo *)0x0);
          value.g = (float)_UNK_?;
          value.r = (float)_UNK_?;
          value.b = (float)_UNK_?;
          value.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                    ((Camera *)method_00,value,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)method_00,0,(MethodInfo *)0x0);
          pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                             ((Camera *)method_00,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)pRVar5,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return (Camera *)method_00;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                    ((Camera *)method_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar6 = (float10)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                    ((Camera *)method_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar5 = (RenderTexture *)func_?();
          func_?();
          height = func_?();
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
                    (pRVar5,(int)fVar6,height,0xADDR,method_00);
          if (pRVar5 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      ((Object_1 *)pRVar5,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                      ((Camera *)method_00,pRVar5,(MethodInfo *)0x0);
            return (Camera *)method_00;
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
    pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (components == (Type__Array *)0x0) goto code_?;
    if ((pTVar7 == (Type *)0x0) || (iVar8 = func_?(), iVar8 != 0)) {
      if (components->max_length == 0) goto code_?;
      components->vector[0] = pTVar7;
      func_?();
      pGVar1 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_2
                (pGVar1,pSVar2,components,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pCVar10 = (Camera *)(*pcVar9)();
  return pCVar10;
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
  if (cam != (Camera *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                      (cam,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar2 = (float)iVar1 * _UNK_?;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar3 = (float10)func_?((double)fVar2);
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                      (cam,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar2 = (float)iVar1 * _UNK_?;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pRVar4 = (RenderTexture *)func_?();
    func_?((double)fVar2);
    iVar1 = func_?();
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
              (pRVar4,(int)fVar3,iVar1,in_stack_5,in_stack_6);
    if (pRVar4 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                ((Object_1 *)pRVar4,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
      return pRVar4;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pRVar4 = (RenderTexture *)(*pcVar7)();
  return pRVar4;
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
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
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
              );
    (this->fields).helperCameras = (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)this_01;
    func_?(&(this->fields).helperCameras,this_01);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).helperCameras;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)currentCam,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                      );
    if (bVar1 == 0) {
      pDVar2 = (this->fields).helperCameras;
      if (pDVar2 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
      Dictionary_2_System_Object_System_Boolean__Add
                ((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,0,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
                );
    }
    pDVar2 = (this->fields).helperCameras;
    if (pDVar2 != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Boolean]::Dictionary_2_System_Object_System_Boolean__get_Item
                        ((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                        );
      if (bVar1 == 0) {
        pCVar3 = (this->fields).reflectionCamera;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pCVar3,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pCVar3 = PlanarReflection_CreateReflectionCameraFor(this,currentCam,(MethodInfo *)0x0);
          (this->fields).reflectionCamera = pCVar3;
          func_?(&(this->fields).reflectionCamera,pCVar3);
        }
        PlanarReflection_RenderReflectionFor
                  (this,currentCam,(this->fields).reflectionCamera,(MethodInfo *)0x0);
        pDVar2 = (this->fields).helperCameras;
        if (pDVar2 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
        Dictionary_2_System_Object_System_Boolean__set_Item
                  ((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,1,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
                  );
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    p_Var17 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_AsRef_1((Void *)(this->fields).reflectionMask.m_Mask,(MethodInfo *)0x0);
    auVar6._44_16_ = auVar5._44_16_;
    auVar6._0_40_ = auVar5._0_40_;
    auVar6._40_4_ = p_Var17;
    uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Water,(MethodInfo *)0x0);
    if (reflectCamera == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (reflectCamera,auVar6._40_4_ & ~(1 << (uVar7 & 0x1f)),(MethodInfo *)0x0);
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
      auVar8._16_44_ = auVar6._16_44_;
      auVar8._0_12_ = auVar6._0_12_;
      auVar8._12_4_ = 0;
      auVar9._12_48_ = auVar8._12_48_;
      auVar9._0_8_ = auVar6._0_8_;
      auVar9._8_4_ = 1;
      auVar10._8_52_ = auVar9._8_52_;
      auVar10._0_8_ = 0x1020cf2f00000000;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
      auVar11._16_44_ = auVar10._16_44_;
      auVar11._0_12_ = auVar10._0_12_;
      auVar11._12_4_ = 0;
      auVar12._12_48_ = auVar11._12_48_;
      auVar12._0_8_ = auVar10._0_8_;
      auVar12._8_4_ = this;
      auVar13._8_52_ = auVar12._8_52_;
      auVar13._0_8_ = 0x1020cf3700000000;
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      auVar15._40_20_ = auVar13._40_20_;
      auVar15._0_36_ = auVar13._0_36_;
      auVar15._36_4_ = pTVar14;
      if (cam == (Camera *)0x0) goto code_?;
code_?:
      auVar16._32_28_ = auVar15._32_28_;
      auVar16._0_28_ = auVar15._0_28_;
      auVar16._28_4_ = 0;
      auVar17._28_32_ = auVar16._28_32_;
      auVar17._0_24_ = auVar15._0_24_;
      auVar17._24_4_ = cam;
      auVar18._24_36_ = auVar17._24_36_;
      auVar18._0_20_ = auVar15._0_20_;
      auVar18._20_4_ = &UNK_?;
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)cam,(MethodInfo *)0x0);
      if (pTVar14 != (Transform *)0x0) {
        auVar19._40_20_ = auVar18._40_20_;
        auVar19._0_36_ = auVar18._0_36_;
        auVar19._36_4_ = 0;
        auVar20._36_24_ = auVar19._36_24_;
        auVar20._0_32_ = auVar18._0_32_;
        auVar20._32_4_ = pTVar14;
        auVar21._32_28_ = auVar20._32_28_;
        auVar21._0_28_ = auVar18._0_28_;
        auVar21._28_4_ = (Vector3 *)&stack0xffffffc8;
        auVar22._28_32_ = auVar21._28_32_;
        auVar22._0_24_ = auVar18._0_24_;
        auVar22._24_4_ = &UNK_?;
        pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                            ((Vector3 *)&stack0xffffffc8,pTVar14,(MethodInfo *)0x0);
        auVar24._40_20_ = auVar22._40_20_;
        auVar24._0_36_ = auVar22._0_36_;
        auVar24._36_4_ = 0;
        auVar25._36_24_ = auVar24._36_24_;
        auVar25._0_32_ = auVar22._0_32_;
        auVar25._32_4_ = reflectCamera;
        uVar26 = pVVar23->x;
        uVar27 = pVVar23->y;
        auVar28._24_4_ = uVar27;
        auVar28._20_4_ = uVar26;
        auVar28._0_20_ = auVar22._0_20_;
        auVar28._32_28_ = auVar25._32_28_;
        auVar28._28_4_ = &UNK_?;
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)reflectCamera,(MethodInfo *)0x0);
        auVar29._48_4_ = auVar28._24_4_;
        auVar29._44_4_ =
             (uint)auVar28._20_4_ ^
             __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
        if (pTVar14 != (Transform *)0x0) {
          auVar29._0_40_ = auVar28._0_40_;
          auVar29._40_4_ = pTVar14;
          auVar29._52_4_ = auVar28._28_4_;
          auVar30._0_36_ = auVar28._0_36_;
          auVar30._36_4_ = &UNK_?;
          auVar30._40_16_ = auVar29._40_16_;
          auVar30._56_4_ = 0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                    (pTVar14,auVar29._44_12_,(MethodInfo *)0x0);
          auVar31._0_48_ = auVar30._0_48_;
          auVar31._48_4_ = &UNK_?;
          auVar31._52_4_ = reflectCamera;
          auVar31._56_4_ = 0;
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)reflectCamera,(MethodInfo *)0x0);
          auVar32._0_52_ = auVar31._0_52_;
          auVar32._52_4_ = cam;
          auVar33._40_4_ = pTVar14;
          auVar33._0_40_ = auVar31._0_40_;
          auVar33._44_12_ = auVar32._44_12_;
          auVar34._0_48_ = auVar33._0_48_;
          auVar34._48_4_ = &UNK_?;
          auVar34._52_4_ = cam;
          auVar34._56_4_ = 0;
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)cam,(MethodInfo *)0x0);
          if (pTVar14 != (Transform *)0x0) {
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffc8,pTVar14,(MethodInfo *)0x0);
            if (auVar34._40_4_ != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (auVar34._40_4_,*pVVar23,(MethodInfo *)0x0);
              if ((auVar34._36_4_ != (Component *)0x0) &&
                 (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(auVar34._36_4_,(MethodInfo *)0x0),
                 pTVar14 != (Transform *)0x0)) {
                pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffd8,pTVar14,(MethodInfo *)0x0);
                uVar35 = pVVar23->x;
                uVar36 = pVVar23->y;
                auVar37._4_4_ = uVar36;
                auVar37._0_4_ = uVar35;
                auVar38._16_44_ = auVar34._16_44_;
                auVar38._0_12_ = auVar34._0_12_;
                auVar38._12_4_ = pVVar23->z;
                auVar37._8_48_ = auVar38._12_48_;
                auVar37._56_4_ = 0;
                auVar37 = auVar37 << 0x20;
                pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffd8,auVar34._36_4_,(MethodInfo *)0x0);
                auVar39._44_16_ = auVar37._44_16_;
                auVar39._0_40_ = auVar37._0_40_;
                auVar39._40_4_ = pVVar23->y;
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(auVar37._36_4_,(MethodInfo *)0x0);
                if (pTVar14 != (Transform *)0x0) {
                  pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                      ((Vector3 *)&stack0xffffff48,pTVar14,(MethodInfo *)0x0);
                  fStack_40 = pVVar23->x;
                  puStack_41 = (undefined *)pVVar23->y;
                  fVar42 = pVVar23->z;
                  auVar43._0_20_ = auVar39._0_20_;
                  auVar43._20_4_ = fStack_40;
                  auVar43._24_4_ = puStack_41;
                  auVar43._32_28_ = auVar39._32_28_;
                  auVar43._28_4_ = fVar42;
                  fVar44 = auVar39._4_4_;
                  auVar45._40_20_ = auVar39._40_20_;
                  auVar45._0_36_ = auVar43._0_36_;
                  auVar45._36_4_ =
                       (float)((uint)(auVar39._40_4_ * (float)puStack_41 + fVar44 * fStack_40 +
                                     auVar39._12_4_ * fVar42) ^
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              ) - (this->fields).clipPlaneOffset;
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_zero
                            ((Matrix4x4 *)&stack0xfffffeb8,(MethodInfo *)0x0);
                  fVar46 = auVar45._20_4_;
                  fStack_47 = _UNK_? - (fVar46 + fVar46) * fVar46;
                  fVar48 = auVar45._24_4_;
                  puStack_49 = (undefined *)(fVar46 * _UNK_? * fVar48);
                  fVar50 = auVar45._28_4_;
                  fVar51 = fVar46 * _UNK_? * fVar50;
                  fVar52 = auVar45._36_4_;
                  fVar53 = fVar52 * _UNK_?;
                  fStack_54 = fVar48 * _UNK_? * fVar46;
                  fVar55 = _UNK_? - (fVar48 + fVar48) * fVar48;
                  fVar56 = fVar48 * _UNK_? * fVar50;
                  fVar57 = fVar52 * _UNK_?;
                  fStack_58 = fVar50 * _UNK_? * fVar46;
                  fVar59 = fVar50 * _UNK_? * fVar48;
                  fVar60 = _UNK_? - (fVar50 + fVar50) * fVar50;
                  fVar52 = fVar52 * _UNK_?;
                  fStack_61 = 0.0;
                  fVar62 = 0.0;
                  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)cam,(MethodInfo *)0x0);
                  if (pTVar14 != (Transform *)0x0) {
                    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffff48,pTVar14,(MethodInfo *)0x0);
                    fVar63 = pVVar23->y;
                    fVar64 = pVVar23->z;
                    VVar65 = *pVVar23;
                    (this->fields).oldpos.x = pVVar23->x;
                    (this->fields).oldpos.y = fVar63;
                    (this->fields).oldpos.z = fVar64;
                    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyPoint
                                        ((Vector3 *)&stack0xffffff48,(Matrix4x4 *)&fStack_47,VVar65
                                         ,(MethodInfo *)0x0);
                    uVar66 = pVVar23->x;
                    auVar67._40_20_ = auVar45._40_20_;
                    auVar67._0_36_ = auVar45._0_36_;
                    auVar67._36_4_ = pVVar23->z;
                    pMVar68 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_get_worldToCameraMatrix
                                        ((Matrix4x4 *)&stack0xfffffeb8,cam,(MethodInfo *)0x0);
                    rhs.m10 = fStack_54;
                    rhs.m00 = fStack_47;
                    rhs.m20 = fStack_58;
                    rhs.m30 = fStack_61;
                    rhs.m01 = (float)puStack_49;
                    rhs.m11 = fVar55;
                    rhs.m21 = fVar59;
                    rhs.m31 = fVar62;
                    rhs.m02 = fVar51;
                    rhs.m12 = fVar56;
                    rhs.m22 = fVar60;
                    rhs.m32 = 0.0;
                    rhs.m03 = fVar53 * fVar46;
                    rhs.m13 = fVar57 * fVar48;
                    rhs.m23 = fVar52 * fVar50;
                    rhs.m33 = 1.0;
                    pMVar68 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_op_Multiply
                                        ((Matrix4x4 *)&stack0xfffffeb8,*pMVar68,rhs,
                                         (MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_worldToCameraMatrix
                              (reflectCamera,*pMVar68,(MethodInfo *)0x0);
                    func_?();
                    fVar51 = (this->fields).clipPlaneOffset;
                    fVar44 = fVar44 + fVar51 * auVar67._20_4_;
                    auVar69._44_16_ = auVar67._44_16_;
                    auVar69._0_40_ = auVar67._0_40_;
                    auVar69._40_4_ = auVar67._40_4_ + fVar51 * auVar67._24_4_;
                    auVar70._16_44_ = auVar69._16_44_;
                    auVar70._0_12_ = auVar67._0_12_;
                    auVar70._12_4_ = auVar67._12_4_ + fVar51 * auVar67._28_4_;
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                              ((Matrix4x4 *)&stack0xfffffeb8,reflectCamera,(MethodInfo *)0x0);
                    VVar65.y = (float)auVar70._40_4_;
                    VVar65.x = fVar44;
                    VVar65.z = auVar70._12_4_;
                    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyPoint
                                        ((Vector3 *)&stack0xffffff48,(Matrix4x4 *)&stack0xffffff58,
                                         VVar65,(MethodInfo *)0x0);
                    uVar71 = pVVar23->x;
                    uVar72 = pVVar23->y;
                    auVar73._24_4_ = uVar72;
                    auVar73._20_4_ = uVar71;
                    auVar74._32_28_ = auVar70._32_28_;
                    auVar74._0_28_ = auVar70._0_28_;
                    auVar74._28_4_ = pVVar23->z;
                    auVar73._28_32_ = auVar74._28_32_;
                    auVar73._0_20_ = auVar70._0_20_;
                    vector.z = fVar42;
                    vector.x = fStack_40;
                    vector.y = (float)puStack_41;
                    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyVector
                                        ((Vector3 *)&stack0xffffff38,(Matrix4x4 *)&stack0xffffff58,
                                         vector,(MethodInfo *)0x0);
                    uVar75 = pVVar23->x;
                    uVar76 = pVVar23->y;
                    auVar77._4_4_ = uVar76;
                    auVar77._0_4_ = uVar75;
                    auVar78._16_44_ = auVar73._16_44_;
                    auVar78._0_12_ = auVar73._0_12_;
                    auVar78._12_4_ = pVVar23->z;
                    auVar77._8_48_ = auVar78._12_48_;
                    auVar77._56_4_ = 0;
                    auVar77 = auVar77 << 0x20;
                    puVar79 = (undefined8 *)func_?();
                    fVar42 = *(float *)(puVar79 + 1);
                    fVar53 = (float)*puVar79;
                    fVar55 = (float)((ulonglong)*puVar79 >> 0x20);
                    fVar51 = (float)((uint)(auVar77._24_4_ * fVar55 + auVar77._20_4_ * fVar53 +
                                           auVar77._28_4_ * fVar42) ^
                                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                    );
                    pMVar68 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_get_projectionMatrix
                                        ((Matrix4x4 *)&stack0xfffffeb8,cam,(MethodInfo *)0x0);
                    clipPlane.y = fVar55;
                    clipPlane.x = fVar53;
                    clipPlane.z = fVar42;
                    clipPlane.w = fVar51;
                    pMVar68 = PlanarReflection_CalculateObliqueMatrix
                                        ((Matrix4x4 *)&stack0xfffffeb8,*pMVar68,clipPlane,
                                         (MethodInfo *)0x0);
                    auVar80._0_4_ = pMVar68->m00;
                    auVar80._4_4_ = pMVar68->m10;
                    auVar80._8_4_ = pMVar68->m20;
                    auVar80._12_4_ = pMVar68->m30;
                    auVar80._16_4_ = pMVar68->m01;
                    auVar80._20_4_ = pMVar68->m11;
                    auVar80._24_4_ = pMVar68->m21;
                    auVar80._28_4_ = pMVar68->m31;
                    auVar80._32_4_ = pMVar68->m02;
                    auVar80._36_4_ = pMVar68->m12;
                    auVar80._40_4_ = pMVar68->m22;
                    auVar80._44_4_ = pMVar68->m32;
                    auVar80._48_4_ = pMVar68->m03;
                    auVar80._52_4_ = pMVar68->m13;
                    auVar80._56_4_ = pMVar68->m23;
                    uVar81 = CONCAT44(&UNK_?,uVar66);
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_projectionMatrix
                              (reflectCamera,*pMVar68,(MethodInfo *)0x0);
                    auVar82._0_56_ = auVar80._0_56_;
                    auVar82._56_4_ = &UNK_?;
                    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
                    if (pTVar14 != (Transform *)0x0) {
                      value.z = auVar82._36_4_;
                      value.x = (float)(int)uVar81;
                      value.y = (float)(int)((ulonglong)uVar81 >> 0x20);
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                (pTVar14,value,(MethodInfo *)0x0);
                      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)cam,(MethodInfo *)0x0);
                      if (pTVar14 != (Transform *)0x0) {
                        pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_eulerAngles
                                            ((Vector3 *)&stack0xffffffa0,pTVar14,(MethodInfo *)0x0);
                        auVar83._12_44_ = auVar82._16_44_;
                        auVar83._0_4_ = pVVar23->x;
                        auVar83._4_4_ = pVVar23->y;
                        auVar83._8_4_ = pVVar23->z;
                        auVar83._56_4_ = 0;
                        auVar83 = auVar83 << 0x20;
                        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform
                                            ((Component *)reflectCamera,(MethodInfo *)0x0);
                        auVar84._0_20_ = auVar83._0_20_;
                        auVar84._20_4_ =
                             (uint)auVar83._4_4_ ^
                             __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                        ;
                        auVar84._24_4_ = auVar83._8_4_;
                        if (pTVar14 != (Transform *)0x0) {
                          value_00.z = auVar83._12_4_;
                          value_00.x = (float)auVar84._20_8_;
                          value_00.y = SUB84(auVar84._20_8_,4);
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_eulerAngles(pTVar14,value_00,(MethodInfo *)0x0);
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
    pGVar85 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)cam,(MethodInfo *)0x0);
    pIVar86 = TypeRef__UnityEngine__Skybox;
    auVar6._40_4_ = pGVar85;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar87 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar86,(MethodInfo *)0x0);
    if (auVar6._40_4_ == (GameObject *)0x0) goto code_?;
    pCVar88 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                        (auVar6._40_4_,pTVar87,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pCVar88,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    pGVar85 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)reflectCamera,(MethodInfo *)0x0);
    pIVar86 = TypeRef__UnityEngine__Skybox;
    auVar89._44_16_ = auVar6._44_16_;
    auVar89._0_40_ = auVar6._0_40_;
    auVar89._40_4_ = pGVar85;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar87 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar86,(MethodInfo *)0x0);
    if (auVar89._40_4_ == (GameObject *)0x0) goto code_?;
    pCVar90 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                        (auVar89._40_4_,pTVar87,(MethodInfo *)0x0);
    pCVar88 = (Component *)0x0;
    auVar91._40_20_ = auVar89._40_20_;
    auVar92._0_36_ = auVar89._0_36_;
    if (pCVar90 == (Component *)0x0) {
      auVar92._36_4_ = 0;
    }
    else {
      if ((Skybox__Class *)pCVar90->klass == TypeInfo__UnityEngine__Skybox) {
        pCVar88 = pCVar90;
      }
      auVar92._36_4_ = pCVar88;
      if (pCVar88 == (Component *)0x0) goto code_?;
    }
    auVar91._0_40_ = auVar92;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pCVar88,(MethodInfo *)0x0);
    if (bVar4 != 0) goto code_?;
    pGVar85 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)reflectCamera,(MethodInfo *)0x0);
    pIVar86 = TypeRef__UnityEngine__Skybox;
    auVar93._44_16_ = auVar91._44_16_;
    auVar93._0_40_ = auVar91._0_40_;
    auVar93._40_4_ = pGVar85;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar87 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar86,(MethodInfo *)0x0);
    if (auVar93._40_4_ == (GameObject *)0x0) goto code_?;
    pCVar88 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent
                        (auVar93._40_4_,pTVar87,(MethodInfo *)0x0);
    auVar91._40_20_ = auVar93._40_20_;
    auVar91._0_36_ = auVar93._0_36_;
    if (pCVar88 != (Component *)0x0) {
      pCVar90 = (Component *)0x0;
      if ((Skybox__Class *)pCVar88->klass == TypeInfo__UnityEngine__Skybox) {
        pCVar90 = pCVar88;
      }
      auVar91._36_4_ = pCVar90;
      if (pCVar90 != (Component *)0x0) goto code_?;
      goto code_?;
    }
    auVar91._36_4_ = 0;
code_?:
    pIVar86 = TypeRef__UnityEngine__Skybox;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar87 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar86,(MethodInfo *)0x0);
    pSVar94 = (Skybox *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent
                        ((Component *)cam,pTVar87,(MethodInfo *)0x0);
    if (pSVar94 == (Skybox *)0x0) goto code_?;
    pSVar95 = (Skybox *)0x0;
    if (pSVar94->klass == TypeInfo__UnityEngine__Skybox) {
      pSVar95 = pSVar94;
    }
    if (pSVar95 != (Skybox *)0x0) {
      pSVar95 = (Skybox *)0x0;
      if (pSVar94->klass == TypeInfo__UnityEngine__Skybox) {
        pSVar95 = pSVar94;
      }
      pMVar96 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                          (pSVar95,(MethodInfo *)0x0);
      if (auVar91._36_4_ != (Skybox *)0x0) {
        auVar97._56_4_ = 0;
        auVar97._0_56_ = auVar91._4_56_;
        auVar97 = auVar97 << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                  (auVar91._36_4_,pMVar96,(MethodInfo *)0x0);
        auVar98._56_4_ = 0;
        auVar98._0_56_ = auVar97._4_56_;
        auVar98 = auVar98 << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
        auVar99._56_4_ = 0;
        auVar99._0_56_ = auVar98._4_56_;
        auVar99 = auVar99 << 0x20;
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        auVar15._40_20_ = auVar99._40_20_;
        auVar15._0_36_ = auVar99._0_36_;
        auVar15._36_4_ = pTVar14;
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pMVar96 = (this->fields).sharedMaterial;
    if (pMVar96 != (Material *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                         (pMVar96,(this->fields).reflectionSampler,(MethodInfo *)0x0);
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
  pcVar100 = (code *)swi(3);
  (*pcVar100)();
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
  p_Var2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)mask.m_Mask,(MethodInfo *)0x0);
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Water,(MethodInfo *)0x0);
  if (cam != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (cam,(uint)p_Var2 & ~(1 << (uVar1 & 0x1f)),(MethodInfo *)0x0);
    this = (PlanarReflection *)_UNK_?;
    fVar2 = (float)_UNK_?;
    cam = (Camera *)_UNK_?;
    value.r = _UNK_?;
    value = (Color)CONCAT124(auVar3,value.r);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (this_00,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    pOVar2 = pOVar1[2].klass;
    (this->fields).sharedMaterial = (Material *)pOVar2;
    func_?(&(this->fields).sharedMaterial,pOVar2);
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
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
              );
    (this->fields).helperCameras = (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)this_01;
    func_?(&(this->fields).helperCameras,this_01);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).helperCameras;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)currentCam,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                      );
    if (bVar1 == 0) {
      pDVar2 = (this->fields).helperCameras;
      if (pDVar2 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
      Dictionary_2_System_Object_System_Boolean__Add
                ((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,0,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
                );
    }
    pDVar2 = (this->fields).helperCameras;
    if (pDVar2 != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Boolean]::Dictionary_2_System_Object_System_Boolean__get_Item
                        ((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                        );
      if (bVar1 == 0) {
        pCVar3 = (this->fields).reflectionCamera;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pCVar3,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pCVar3 = PlanarReflection_CreateReflectionCameraFor(this,currentCam,(MethodInfo *)0x0);
          (this->fields).reflectionCamera = pCVar3;
          func_?(&(this->fields).reflectionCamera,pCVar3);
        }
        PlanarReflection_RenderReflectionFor
                  (this,currentCam,(this->fields).reflectionCamera,(MethodInfo *)0x0);
        pDVar2 = (this->fields).helperCameras;
        if (pDVar2 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
        Dictionary_2_System_Object_System_Boolean__set_Item
                  ((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,1,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
                  );
      }
      pCVar3 = (this->fields).reflectionCamera;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pCVar3,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pMVar4 = (this->fields).sharedMaterial;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pMVar4,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pCVar3 = (this->fields).reflectionCamera;
          pMVar4 = (this->fields).sharedMaterial;
          name = (this->fields).reflectionSampler;
          if ((pCVar3 != (Camera *)0x0) &&
             (value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                                (pCVar3,(MethodInfo *)0x0), pMVar4 != (Material *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                      (pMVar4,name,(Texture *)value,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
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

