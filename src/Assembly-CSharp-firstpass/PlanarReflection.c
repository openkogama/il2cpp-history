
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
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
  func_?(&fStack_4,0,0x40);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)reflectCamera,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return;
  }
  auVar6._44_16_ = auVar3._44_16_;
  auVar6._0_40_ = auVar3._0_40_;
  auVar6._40_4_ = (this->fields).sharedMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     (auVar6._40_4_,(MethodInfo *)0x0);
  if (bVar5 == 0) {
code_?:
    p_Var16 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_AsRef_1((Void *)(this->fields).reflectionMask.m_Mask,(MethodInfo *)0x0);
    auVar7._44_16_ = auVar6._44_16_;
    auVar7._0_40_ = auVar6._0_40_;
    auVar7._40_4_ = p_Var16;
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
      auVar11._0_8_ = 0x10217f2200000000;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
      auVar12._16_44_ = auVar11._16_44_;
      auVar12._0_12_ = auVar11._0_12_;
      auVar12._12_4_ = 0;
      auVar13._12_48_ = auVar12._12_48_;
      auVar13._0_8_ = auVar11._0_8_;
      auVar13._8_4_ = this;
      auVar14._8_52_ = auVar13._8_52_;
      auVar14._0_8_ = 0x10217f2a00000000;
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
        auVar22._28_4_ = (Vector3 *)&stack0xffffffd8;
        auVar23._28_32_ = auVar22._28_32_;
        auVar23._0_24_ = auVar19._0_24_;
        auVar23._24_4_ = &UNK_?;
        pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                            ((Vector3 *)&stack0xffffffd8,pTVar15,(MethodInfo *)0x0);
        auVar25._40_20_ = auVar23._40_20_;
        auVar25._0_36_ = auVar23._0_36_;
        auVar25._36_4_ = 0;
        auVar26._36_24_ = auVar25._36_24_;
        auVar26._0_32_ = auVar23._0_32_;
        auVar26._32_4_ = reflectCamera;
        auVar27._12_44_ = auVar26._16_44_;
        auVar27._0_4_ = pVVar24->x;
        auVar27._4_4_ = pVVar24->y;
        auVar27._8_4_ = pVVar24->z;
        auVar28._0_28_ = auVar27._0_28_ << 0x20;
        auVar28._32_28_ = auVar26._32_28_;
        auVar28._28_4_ = &UNK_?;
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)reflectCamera,(MethodInfo *)0x0);
        auVar29._0_20_ = auVar28._0_20_;
        auVar29._20_4_ =
             (uint)auVar28._4_4_ ^
             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
        auVar29._24_4_ = auVar28._8_4_;
        auVar30._32_28_ = auVar28._32_28_;
        auVar30._28_4_ = auVar28._12_4_;
        auVar30._0_28_ = auVar29;
        if (pTVar15 != (Transform *)0x0) {
          auVar31._0_40_ = auVar30._0_40_;
          auVar31._40_4_ = pTVar15;
          auVar31._44_4_ = (float)auVar29._20_8_;
          auVar31._48_4_ = SUB84(auVar29._20_8_,4);
          auVar31._52_4_ = auVar28._12_4_;
          auVar32._0_36_ = auVar30._0_36_;
          auVar32._36_4_ = &UNK_?;
          auVar32._40_16_ = auVar31._40_16_;
          auVar32._56_4_ = 0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                    (pTVar15,auVar31._44_12_,(MethodInfo *)0x0);
          auVar33._0_48_ = auVar32._0_48_;
          auVar33._48_4_ = &UNK_?;
          auVar33._52_4_ = reflectCamera;
          auVar33._56_4_ = 0;
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)reflectCamera,(MethodInfo *)0x0);
          auVar34._0_52_ = auVar33._0_52_;
          auVar34._52_4_ = cam;
          auVar35._40_4_ = pTVar15;
          auVar35._0_40_ = auVar33._0_40_;
          auVar35._44_12_ = auVar34._44_12_;
          auVar36._0_48_ = auVar35._0_48_;
          auVar36._48_4_ = &UNK_?;
          auVar36._52_4_ = cam;
          auVar36._56_4_ = 0;
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)cam,(MethodInfo *)0x0);
          if (pTVar15 != (Transform *)0x0) {
            pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffc8,pTVar15,(MethodInfo *)0x0);
            if (auVar36._40_4_ != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (auVar36._40_4_,*pVVar24,(MethodInfo *)0x0);
              if ((auVar36._36_4_ != (Component *)0x0) &&
                 (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(auVar36._36_4_,(MethodInfo *)0x0),
                 pTVar15 != (Transform *)0x0)) {
                pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffd8,pTVar15,(MethodInfo *)0x0);
                uVar37 = pVVar24->x;
                uVar38 = pVVar24->y;
                auVar39._4_4_ = uVar38;
                auVar39._0_4_ = uVar37;
                auVar40._16_44_ = auVar36._16_44_;
                auVar40._0_12_ = auVar36._0_12_;
                auVar40._12_4_ = pVVar24->z;
                auVar39._8_48_ = auVar40._12_48_;
                auVar39._56_4_ = 0;
                auVar39 = auVar39 << 0x20;
                pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffd8,auVar36._36_4_,(MethodInfo *)0x0);
                auVar41._44_16_ = auVar39._44_16_;
                auVar41._0_40_ = auVar39._0_40_;
                auVar41._40_4_ = pVVar24->y;
                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(auVar39._36_4_,(MethodInfo *)0x0);
                if (pTVar15 != (Transform *)0x0) {
                  pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                      ((Vector3 *)&stack0xffffff48,pTVar15,(MethodInfo *)0x0);
                  fStack_42 = pVVar24->x;
                  puStack_43 = (undefined *)pVVar24->y;
                  fVar44 = pVVar24->z;
                  auVar45._0_20_ = auVar41._0_20_;
                  auVar45._20_4_ = fStack_42;
                  auVar45._24_4_ = puStack_43;
                  auVar45._32_28_ = auVar41._32_28_;
                  auVar45._28_4_ = fVar44;
                  auVar46._40_20_ = auVar41._40_20_;
                  auVar46._0_36_ = auVar45._0_36_;
                  auVar46._36_4_ =
                       (float)((uint)(auVar41._40_4_ * (float)puStack_43 + auVar41._4_4_ * fStack_42
                                     + auVar41._12_4_ * fVar44) ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              ) - (this->fields).clipPlaneOffset;
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_zero
                            ((Matrix4x4 *)&stack0xfffffeb8,(MethodInfo *)0x0);
                  fVar47 = auVar46._20_4_;
                  fStack_4 = _UNK_? - (fVar47 + fVar47) * fVar47;
                  fVar48 = auVar46._24_4_;
                  puStack_49 = (undefined *)(fVar47 * _UNK_? * fVar48);
                  fVar50 = auVar46._28_4_;
                  fVar51 = fVar47 * _UNK_? * fVar50;
                  fVar52 = auVar46._36_4_ * _UNK_?;
                  fStack_53 = fVar48 * _UNK_? * fVar47;
                  fVar54 = _UNK_? - (fVar48 + fVar48) * fVar48;
                  fVar55 = fVar48 * _UNK_? * fVar50;
                  fStack_56 = fVar50 * _UNK_? * fVar47;
                  fVar57 = fVar50 * _UNK_? * fVar48;
                  fVar58 = _UNK_? - (fVar50 + fVar50) * fVar50;
                  fStack_59 = 0.0;
                  fVar60 = 0.0;
                  pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)cam,(MethodInfo *)0x0);
                  if (pTVar15 != (Transform *)0x0) {
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffff48,pTVar15,(MethodInfo *)0x0);
                    fVar61 = pVVar24->y;
                    fVar62 = pVVar24->z;
                    VVar63 = *pVVar24;
                    (this->fields).oldpos.x = pVVar24->x;
                    (this->fields).oldpos.y = fVar61;
                    (this->fields).oldpos.z = fVar62;
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyPoint
                                        ((Vector3 *)&stack0xffffff48,(Matrix4x4 *)&fStack_4,VVar63
                                         ,(MethodInfo *)0x0);
                    uVar64 = pVVar24->x;
                    auVar65._40_20_ = auVar46._40_20_;
                    auVar65._0_36_ = auVar46._0_36_;
                    auVar65._36_4_ = pVVar24->z;
                    pMVar66 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_get_worldToCameraMatrix
                                        ((Matrix4x4 *)&stack0xfffffeb8,cam,(MethodInfo *)0x0);
                    rhs.m10 = fStack_53;
                    rhs.m00 = fStack_4;
                    rhs.m20 = fStack_56;
                    rhs.m30 = fStack_59;
                    rhs.m01 = (float)puStack_49;
                    rhs.m11 = fVar54;
                    rhs.m21 = fVar57;
                    rhs.m31 = fVar60;
                    rhs.m02 = fVar51;
                    rhs.m12 = fVar55;
                    rhs.m22 = fVar58;
                    rhs.m32 = 0.0;
                    rhs.m03 = fVar52 * fVar47;
                    rhs.m13 = fVar52 * fVar48;
                    rhs.m23 = fVar52 * fVar50;
                    rhs.m33 = 1.0;
                    pMVar66 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_op_Multiply
                                        ((Matrix4x4 *)&stack0xfffffeb8,*pMVar66,rhs,
                                         (MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_worldToCameraMatrix
                              (reflectCamera,*pMVar66,(MethodInfo *)0x0);
                    func_?();
                    fVar54 = (this->fields).clipPlaneOffset;
                    fVar51 = fVar54 * auVar65._20_4_ + auVar65._4_4_;
                    auVar67._44_16_ = auVar65._44_16_;
                    auVar67._0_40_ = auVar65._0_40_;
                    auVar67._40_4_ = fVar54 * auVar65._24_4_ + auVar65._40_4_;
                    auVar68._16_44_ = auVar67._16_44_;
                    auVar68._0_12_ = auVar65._0_12_;
                    auVar68._12_4_ = fVar54 * auVar65._28_4_ + auVar65._12_4_;
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                              ((Matrix4x4 *)&stack0xfffffeb8,reflectCamera,(MethodInfo *)0x0);
                    VVar63.y = (float)auVar68._40_4_;
                    VVar63.x = fVar51;
                    VVar63.z = auVar68._12_4_;
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyPoint
                                        ((Vector3 *)&stack0xffffff48,(Matrix4x4 *)&stack0xffffff58,
                                         VVar63,(MethodInfo *)0x0);
                    uVar69 = pVVar24->x;
                    uVar70 = pVVar24->y;
                    auVar71._24_4_ = uVar70;
                    auVar71._20_4_ = uVar69;
                    auVar72._32_28_ = auVar68._32_28_;
                    auVar72._0_28_ = auVar68._0_28_;
                    auVar72._28_4_ = pVVar24->z;
                    auVar71._28_32_ = auVar72._28_32_;
                    auVar71._0_20_ = auVar68._0_20_;
                    vector.z = fVar44;
                    vector.x = fStack_42;
                    vector.y = (float)puStack_43;
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyVector
                                        ((Vector3 *)&stack0xffffff38,(Matrix4x4 *)&stack0xffffff58,
                                         vector,(MethodInfo *)0x0);
                    uVar73 = pVVar24->x;
                    uVar74 = pVVar24->y;
                    auVar75._4_4_ = uVar74;
                    auVar75._0_4_ = uVar73;
                    auVar76._16_44_ = auVar71._16_44_;
                    auVar76._0_12_ = auVar71._0_12_;
                    auVar76._12_4_ = pVVar24->z;
                    auVar75._8_48_ = auVar76._12_48_;
                    auVar75._56_4_ = 0;
                    auVar75 = auVar75 << 0x20;
                    puVar77 = (undefined8 *)func_?();
                    fVar44 = *(float *)(puVar77 + 1);
                    fVar51 = (float)*puVar77;
                    fVar57 = (float)((ulonglong)*puVar77 >> 0x20);
                    fVar54 = (float)((uint)(fVar51 * auVar75._20_4_ + fVar57 * auVar75._24_4_ +
                                           fVar44 * auVar75._28_4_) ^
                                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                    );
                    pMVar66 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_get_projectionMatrix
                                        ((Matrix4x4 *)&stack0xfffffeb8,cam,(MethodInfo *)0x0);
                    clipPlane.y = fVar57;
                    clipPlane.x = fVar51;
                    clipPlane.z = fVar44;
                    clipPlane.w = fVar54;
                    pMVar66 = PlanarReflection_CalculateObliqueMatrix
                                        ((Matrix4x4 *)&stack0xfffffeb8,*pMVar66,clipPlane,
                                         (MethodInfo *)0x0);
                    auVar78._0_4_ = pMVar66->m00;
                    auVar78._4_4_ = pMVar66->m10;
                    auVar78._8_4_ = pMVar66->m20;
                    auVar78._12_4_ = pMVar66->m30;
                    auVar78._16_4_ = pMVar66->m01;
                    auVar78._20_4_ = pMVar66->m11;
                    auVar78._24_4_ = pMVar66->m21;
                    auVar78._28_4_ = pMVar66->m31;
                    auVar78._32_4_ = pMVar66->m02;
                    auVar78._36_4_ = pMVar66->m12;
                    auVar78._40_4_ = pMVar66->m22;
                    auVar78._44_4_ = pMVar66->m32;
                    auVar78._48_4_ = pMVar66->m03;
                    auVar78._52_4_ = pMVar66->m13;
                    auVar78._56_4_ = pMVar66->m23;
                    uVar79 = CONCAT44(&UNK_?,uVar64);
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_projectionMatrix
                              (reflectCamera,*pMVar66,(MethodInfo *)0x0);
                    auVar80._0_56_ = auVar78._0_56_;
                    auVar80._56_4_ = &UNK_?;
                    pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
                    if (pTVar15 != (Transform *)0x0) {
                      value.z = auVar80._36_4_;
                      value.x = (float)(int)uVar79;
                      value.y = (float)(int)((ulonglong)uVar79 >> 0x20);
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                (pTVar15,value,(MethodInfo *)0x0);
                      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)cam,(MethodInfo *)0x0);
                      if (pTVar15 != (Transform *)0x0) {
                        pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_eulerAngles
                                            ((Vector3 *)&stack0xffffffa0,pTVar15,(MethodInfo *)0x0);
                        auVar81._12_44_ = auVar80._16_44_;
                        auVar81._0_4_ = pVVar24->x;
                        auVar81._4_4_ = pVVar24->y;
                        auVar81._8_4_ = pVVar24->z;
                        auVar81._56_4_ = 0;
                        auVar81 = auVar81 << 0x20;
                        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform
                                            ((Component *)reflectCamera,(MethodInfo *)0x0);
                        auVar82._0_20_ = auVar81._0_20_;
                        auVar82._20_4_ =
                             (uint)auVar81._4_4_ ^
                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                        ;
                        auVar82._24_4_ = auVar81._8_4_;
                        if (pTVar15 != (Transform *)0x0) {
                          value_00.z = auVar81._12_4_;
                          value_00.x = (float)auVar82._20_8_;
                          value_00.y = SUB84(auVar82._20_8_,4);
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
    pGVar83 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)cam,(MethodInfo *)0x0);
    pIVar84 = TypeRef__UnityEngine__Skybox;
    auVar7._40_4_ = pGVar83;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar85 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar84,(MethodInfo *)0x0);
    if (auVar7._40_4_ == (GameObject *)0x0) goto code_?;
    pCVar86 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                        (auVar7._40_4_,pTVar85,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pCVar86,(MethodInfo *)0x0);
    if (bVar5 == 0) goto code_?;
    pGVar83 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)reflectCamera,(MethodInfo *)0x0);
    pIVar84 = TypeRef__UnityEngine__Skybox;
    auVar87._44_16_ = auVar7._44_16_;
    auVar87._0_40_ = auVar7._0_40_;
    auVar87._40_4_ = pGVar83;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar85 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar84,(MethodInfo *)0x0);
    if (auVar87._40_4_ == (GameObject *)0x0) goto code_?;
    pCVar88 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                        (auVar87._40_4_,pTVar85,(MethodInfo *)0x0);
    pCVar86 = (Component *)0x0;
    auVar89._40_20_ = auVar87._40_20_;
    auVar90._0_36_ = auVar87._0_36_;
    if (pCVar88 == (Component *)0x0) {
      auVar90._36_4_ = 0;
    }
    else {
      if ((Skybox__Class *)pCVar88->klass == TypeInfo__UnityEngine__Skybox) {
        pCVar86 = pCVar88;
      }
      auVar90._36_4_ = pCVar86;
      if (pCVar86 == (Component *)0x0) goto code_?;
    }
    auVar89._0_40_ = auVar90;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pCVar86,(MethodInfo *)0x0);
    if (bVar5 != 0) goto code_?;
    pGVar83 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)reflectCamera,(MethodInfo *)0x0);
    pIVar84 = TypeRef__UnityEngine__Skybox;
    auVar91._44_16_ = auVar89._44_16_;
    auVar91._0_40_ = auVar89._0_40_;
    auVar91._40_4_ = pGVar83;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar85 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar84,(MethodInfo *)0x0);
    if (auVar91._40_4_ == (GameObject *)0x0) goto code_?;
    pCVar86 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent
                        (auVar91._40_4_,pTVar85,(MethodInfo *)0x0);
    auVar89._40_20_ = auVar91._40_20_;
    auVar89._0_36_ = auVar91._0_36_;
    if (pCVar86 != (Component *)0x0) {
      pCVar88 = (Component *)0x0;
      if ((Skybox__Class *)pCVar86->klass == TypeInfo__UnityEngine__Skybox) {
        pCVar88 = pCVar86;
      }
      auVar89._36_4_ = pCVar88;
      if (pCVar88 != (Component *)0x0) goto code_?;
      goto code_?;
    }
    auVar89._36_4_ = 0;
code_?:
    pIVar84 = TypeRef__UnityEngine__Skybox;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar85 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar84,(MethodInfo *)0x0);
    pSVar92 = (Skybox *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent
                        ((Component *)cam,pTVar85,(MethodInfo *)0x0);
    if (pSVar92 == (Skybox *)0x0) goto code_?;
    pSVar93 = (Skybox *)0x0;
    if (pSVar92->klass == TypeInfo__UnityEngine__Skybox) {
      pSVar93 = pSVar92;
    }
    if (pSVar93 != (Skybox *)0x0) {
      pSVar93 = (Skybox *)0x0;
      if (pSVar92->klass == TypeInfo__UnityEngine__Skybox) {
        pSVar93 = pSVar92;
      }
      pMVar94 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                          (pSVar93,(MethodInfo *)0x0);
      if (auVar89._36_4_ != (Skybox *)0x0) {
        auVar95._56_4_ = 0;
        auVar95._0_56_ = auVar89._4_56_;
        auVar95 = auVar95 << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                  (auVar89._36_4_,pMVar94,(MethodInfo *)0x0);
        auVar96._56_4_ = 0;
        auVar96._0_56_ = auVar95._4_56_;
        auVar96 = auVar96 << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
        auVar97._56_4_ = 0;
        auVar97._0_56_ = auVar96._4_56_;
        auVar97 = auVar97 << 0x20;
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        auVar16._40_20_ = auVar97._40_20_;
        auVar16._0_36_ = auVar97._0_36_;
        auVar16._36_4_ = pTVar15;
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pMVar94 = (this->fields).sharedMaterial;
    if (pMVar94 != (Material *)0x0) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                         (pMVar94,(this->fields).reflectionSampler,(MethodInfo *)0x0);
      if (bVar5 == 0) {
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
  pcVar98 = (code *)swi(3);
  (*pcVar98)();
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

