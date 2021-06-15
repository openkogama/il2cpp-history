
/* Matrix4x4 CalculateObliqueMatrix(Matrix4x4, Vector4) */

Matrix4x4 *
Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CalculateObliqueMatrix
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 projection,Vector4 clipPlane,
          MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Matrix4x4 lhs;
  Vector4 vector;
  Vector4 a;
  Vector4 b;
  Vector4 a_00;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 (*pauVar8) [16];
  Vector4 *pVVar9;
  float10 fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auStack_16 [48];
  undefined *puStack_17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pauVar8 = (undefined1 (*) [16])func_?(auStack_16,&projection,0);
  auVar4 = *pauVar8;
  uVar22 = *(undefined4 *)pauVar8[1];
  uVar23 = *(undefined4 *)(pauVar8[1] + 4);
  uVar2 = *(undefined4 *)(pauVar8[1] + 8);
  uVar3 = *(undefined4 *)(pauVar8[1] + 0xc);
  uVar18 = *(undefined4 *)pauVar8[2];
  uVar19 = *(undefined4 *)(pauVar8[2] + 4);
  uVar20 = *(undefined4 *)(pauVar8[2] + 8);
  uVar21 = *(undefined4 *)(pauVar8[2] + 0xc);
  fVar12 = *(float *)pauVar8[3];
  fVar13 = *(float *)(pauVar8[3] + 4);
  fVar14 = *(float *)(pauVar8[3] + 8);
  fVar1 = *(float *)(pauVar8[3] + 0xc);
  uVar15 = _UNK_?;
  if ((clipPlane.x <= 0.0) && (uVar15 = _UNK_?, 0.0 <= clipPlane.x)) {
    uVar15 = 0;
  }
  uVar11 = _UNK_?;
  if ((clipPlane.y <= 0.0) && (uVar11 = 0, clipPlane.y < 0.0)) {
    uVar11 = _UNK_?;
  }
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  fVar27 = 0.0;
  func_?(&stack0xffffffcc,uVar15,uVar11,0x3f800000,0x3f800000,0);
  if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Matrix4x4);
  }
  lhs.m01 = (float)uVar22;
  lhs._0_16_ = auVar4;
  lhs.m11 = (float)uVar23;
  lhs.m21 = (float)uVar2;
  lhs.m31 = (float)uVar3;
  lhs.m02 = (float)uVar18;
  lhs.m12 = (float)uVar19;
  lhs.m22 = (float)uVar20;
  lhs.m32 = (float)uVar21;
  lhs.m03 = fVar12;
  lhs.m13 = fVar13;
  lhs.m23 = fVar14;
  lhs.m33 = fVar1;
  vector.y = (float)uVar25;
  vector.x = (float)uVar24;
  vector.z = (float)uVar26;
  vector.w = fVar27;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                     ((Vector4 *)&stack0xffffffdc,lhs,vector,(MethodInfo *)0x0);
  fVar7 = clipPlane.w;
  fVar6 = clipPlane.z;
  fVar5 = clipPlane.y;
  fVar27 = clipPlane.x;
  fVar12 = pVVar9->x;
  fVar13 = pVVar9->y;
  fVar14 = pVVar9->z;
  fVar1 = pVVar9->w;
  if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
    func_?();
  }
  a.y = clipPlane.y;
  a.x = clipPlane.x;
  a.z = clipPlane.z;
  a.w = clipPlane.w;
  b.y = fVar13;
  b.x = fVar12;
  b.z = fVar14;
  b.w = fVar1;
  clipPlane.w = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_Dot(a,b,(MethodInfo *)0x0)
  ;
  a_00.y = fVar5;
  a_00.x = fVar27;
  a_00.z = fVar6;
  a_00.w = fVar7;
  UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
            (&clipPlane,a_00,_UNK_? / clipPlane.w,(MethodInfo *)0x0);
  fVar10 = (float10)func_?();
  clipPlane.w = (float)fVar10;
  func_?();
  fVar10 = (float10)func_?();
  clipPlane.w = (float)fVar10;
  func_?();
  fVar10 = (float10)func_?();
  clipPlane.w = (float)fVar10;
  func_?();
  fVar10 = (float10)func_?();
  clipPlane.w = (float)fVar10;
  func_?();
  __return_storage_ptr__->m00 = projection.m00;
  __return_storage_ptr__->m10 = projection.m10;
  __return_storage_ptr__->m20 = projection.m20;
  __return_storage_ptr__->m30 = projection.m30;
  __return_storage_ptr__->m01 = projection.m01;
  __return_storage_ptr__->m11 = projection.m11;
  __return_storage_ptr__->m21 = projection.m21;
  __return_storage_ptr__->m31 = projection.m31;
  __return_storage_ptr__->m02 = projection.m02;
  __return_storage_ptr__->m12 = projection.m12;
  __return_storage_ptr__->m22 = projection.m22;
  __return_storage_ptr__->m32 = projection.m32;
  __return_storage_ptr__->m03 = projection.m03;
  __return_storage_ptr__->m13 = projection.m13;
  __return_storage_ptr__->m23 = projection.m23;
  __return_storage_ptr__->m33 = projection.m33;
  return __return_storage_ptr__;
}


/* Matrix4x4 CalculateReflectionMatrix(Matrix4x4, Vector4) */

Matrix4x4 *
Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CalculateReflectionMatrix
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 reflectionMat,Vector4 plane,
          MethodInfo *method)

{
  fVar1 = (float10)func_?(&plane,0,0);
  fVar2 = (float10)func_?(&plane,0,0);
  fVar3 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,0,0);
  fVar4 = (float10)func_?(&plane,1,0);
  fVar5 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,0,0);
  fVar6 = (float10)func_?(&plane,2,0);
  fVar7 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,3,0);
  fVar8 = (float10)func_?(&plane,0,0);
  fVar9 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,1,0);
  fVar10 = (float10)func_?(&plane,0,0);
  fVar11 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,1,0);
  fVar12 = (float10)func_?(&plane,1,0);
  fVar13 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,1,0);
  fVar14 = (float10)func_?(&plane,2,0);
  fVar15 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,3,0);
  fVar16 = (float10)func_?(&plane,1,0);
  fVar17 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,2,0);
  fVar18 = (float10)func_?(&plane,0,0);
  fVar19 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,2,0);
  fVar20 = (float10)func_?(&plane,1,0);
  fVar21 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,2,0);
  fVar22 = (float10)func_?(&plane,2,0);
  fVar23 = (float)fVar1 * _UNK_?;
  fVar1 = (float10)func_?(&plane,3,0);
  fVar24 = (float10)func_?(&plane,2,0);
  fVar25 = (float)fVar1 * _UNK_?;
  __return_storage_ptr__->m00 = (float)((float10)1 - fVar2 * (float10)fVar3);
  __return_storage_ptr__->m10 = (float)(fVar10 * (float10)fVar11);
  __return_storage_ptr__->m20 = (float)(fVar18 * (float10)fVar19);
  __return_storage_ptr__->m30 = 0.0;
  __return_storage_ptr__->m01 = (float)(fVar4 * (float10)fVar5);
  __return_storage_ptr__->m11 = (float)((float10)1 - fVar12 * (float10)fVar13);
  __return_storage_ptr__->m21 = (float)(fVar20 * (float10)fVar21);
  __return_storage_ptr__->m31 = 0.0;
  __return_storage_ptr__->m02 = (float)(fVar6 * (float10)fVar7);
  __return_storage_ptr__->m12 = (float)(fVar14 * (float10)fVar15);
  __return_storage_ptr__->m22 = (float)((float10)1 - fVar22 * (float10)fVar23);
  __return_storage_ptr__->m32 = 0.0;
  __return_storage_ptr__->m03 = (float)(fVar8 * (float10)fVar9);
  __return_storage_ptr__->m13 = (float)(fVar16 * (float10)fVar17);
  __return_storage_ptr__->m23 = (float)(fVar24 * (float10)fVar25);
  __return_storage_ptr__->m33 = 1.0;
  return __return_storage_ptr__;
}


/* Vector4 CameraSpacePlane(Camera, Vector3, Vector3, Single) */

Vector4 * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CameraSpacePlane
                    (Vector4 *__return_storage_ptr__,PlanarReflection *this,Camera *cam,Vector3 pos,
                    Vector3 normal,float sideSign,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa4,0,0x40);
  uStack_1 = 0;
  uStack_2 = 0;
  d = (this->fields).clipPlaneOffset;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&VStack_4,normal,d,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
            (&VStack_4,pos,*pVVar3,(MethodInfo *)0x0);
  if (cam != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
              ((Matrix4x4 *)&stack0xffffff64,cam,(MethodInfo *)0x0);
    pVVar3 = (Vector3 *)func_?();
    lhs = *pVVar3;
    puVar5 = (undefined8 *)func_?();
    uStack_1 = *puVar5;
    uStack_2 = *(undefined4 *)(puVar5 + 1);
    pVVar3 = (Vector3 *)func_?();
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_4,*pVVar3,sideSign,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(lhs,*pVVar3,(MethodInfo *)0x0);
    __return_storage_ptr__->x = 0.0;
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->z = 0.0;
    __return_storage_ptr__->w = 0.0;
    func_?();
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector4 *)(*pcVar6)();
  return pVVar7;
}


/* Camera CreateReflectionCameraFor(Camera) */

Camera * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CreateReflectionCameraFor
                   (PlanarReflection *this,Camera *cam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((pGVar1 == (GameObject *)0x0) ||
     (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar1,(MethodInfo *)0x0), cam == (Camera *)0x0)) {
code_?:
    func_?();
  }
  else {
    str2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                     ((Object_1 *)cam,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,StringLiteral_Reflection,str2,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                       (pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
code_?:
      if (pGVar1 != (GameObject *)0x0) {
        pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                           (pGVar1,
                            UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                           );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pUVar4,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                    (pGVar1,
                     UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                    );
        }
        pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                           (pGVar1,
                            UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                           );
        if (pUVar4 != (UseInteractorHandler *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                    ((Camera *)pUVar4,(this->fields).clearColor,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                    ((Camera *)pUVar4,
                     ((this->fields).reflectSkybox == 0) + CameraClearFlags__Enum_Skybox,
                     (MethodInfo *)0x0);
          this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(this->fields).reflectionMask.m_Mask;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (this_00,(MethodInfo *)0x0);
          uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Water,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    ((Camera *)pUVar4,(uint)pOVar5 & ~(1 << (uVar6 & 0x1f)),(MethodInfo *)0x0);
          pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_black
                              ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                    ((Camera *)pUVar4,*pCVar7,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pUVar4,0,(MethodInfo *)0x0);
          pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                              ((Camera *)pUVar4,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)pRVar8,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return (Camera *)pUVar4;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                             ((Camera *)pUVar4,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                             ((float)iVar9 * _UNK_?,(MethodInfo *)0x0);
          iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                             ((Camera *)pUVar4,(MethodInfo *)0x0);
          iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                             ((float)iVar10 * _UNK_?,(MethodInfo *)0x0);
          pRVar8 = (RenderTexture *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_6
                    (pRVar8,iVar9,iVar10,0x18,(MethodInfo *)0x0);
          if (pRVar8 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      ((Object_1 *)pRVar8,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                      ((Camera *)pUVar4,pRVar8,(MethodInfo *)0x0);
            return (Camera *)pUVar4;
          }
        }
      }
      goto code_?;
    }
    components = (Type__Array *)func_?();
    this = (PlanarReflection *)TypeRef__UnityEngine__Camera;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)this,(MethodInfo *)0x0);
    if (components == (Type__Array *)0x0) goto code_?;
    if ((pTVar11 == (Type *)0x0) || (iVar12 = func_?(), iVar12 != 0)) {
      if (components->max_length == 0) goto code_?;
      components->vector[0] = pTVar11;
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
  func_?();
  pcVar13 = (code *)swi(3);
  pCVar14 = (Camera *)(*pcVar13)();
  return pCVar14;
}


/* RenderTexture CreateTextureFor(Camera) */

RenderTexture *
Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CreateTextureFor
          (PlanarReflection *this,Camera *cam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cam != (Camera *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                      (cam,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                      ((float)iVar1 * _UNK_?,(MethodInfo *)0x0);
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                      (cam,(MethodInfo *)0x0);
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                      ((float)iVar2 * _UNK_?,(MethodInfo *)0x0);
    pRVar3 = (RenderTexture *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_6
              (pRVar3,iVar1,iVar2,0x18,(MethodInfo *)0x0);
    if (pRVar3 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                ((Object_1 *)pRVar3,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
      return pRVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pRVar3 = (RenderTexture *)(*pcVar4)();
  return pRVar3;
}


/* Void LateUpdate() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_LateUpdate
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).helperCameras;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).reflectionCamera;
  if (pCVar1 != (Camera *)0x0) {
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                       (pCVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
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
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).helperCameras;
  if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    pDVar1 = (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
              );
    (this->fields).helperCameras = pDVar1;
    if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
          Dictionary_2_System_Object_System_Boolean__ContainsKey
                    ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                    );
  if (bVar2 == 0) {
    pDVar1 = (this->fields).helperCameras;
    if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
    Dictionary_2_System_Object_System_Boolean__Add
              ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,0,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
              );
  }
  pDVar1 = (this->fields).helperCameras;
  if (pDVar1 != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]
            ::Dictionary_2_System_Object_System_Boolean__get_Item
                      ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                      );
    if (bVar2 == 0) {
      pCVar3 = (this->fields).reflectionCamera;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pCVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pCVar3 = PlanarReflection_CreateReflectionCameraFor(this,currentCam,(MethodInfo *)0x0);
        (this->fields).reflectionCamera = pCVar3;
      }
      PlanarReflection_RenderReflectionFor
                (this,currentCam,(this->fields).reflectionCamera,(MethodInfo *)0x0);
      pDVar1 = (this->fields).helperCameras;
      if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
      Dictionary_2_System_Object_System_Boolean__set_Item
                ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,1,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
                );
    }
    return;
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
  this_01 = reflectCamera;
  uVar1 = CONCAT44(cam,this);
  auVar2._8_4_ = 0;
  auVar2._0_8_ = uVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xfffffef4,0,0x40);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)reflectCamera,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  pMVar4 = (this->fields).sharedMaterial;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)pMVar4,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).reflectionMask.m_Mask,(MethodInfo *)0x0);
    uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Water,(MethodInfo *)0x0);
    if (reflectCamera == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (reflectCamera,(uint)pOVar5 & ~(1 << (uVar6 & 0x1f)),(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
              (reflectCamera,DepthTextureMode__Enum_None,(MethodInfo *)0x0);
    pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_black
                        (&CStack_8,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (reflectCamera,*pCVar7,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
              (reflectCamera,CameraClearFlags__Enum_Color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_renderingPath
              (reflectCamera,RenderingPath__Enum_Forward,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (reflectCamera,(this->fields).clearColor,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
              (reflectCamera,((this->fields).reflectSkybox == 0) + CameraClearFlags__Enum_Skybox,
               (MethodInfo *)0x0);
    this_04 = this;
    auVar9 = auVar2 << 0x20;
    if ((this->fields).reflectSkybox == 0) {
code_?:
      auVar10._0_12_ = auVar9;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_04,(MethodInfo *)0x0);
      if ((cam != (Camera *)0x0) &&
         (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)cam,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                  (&VStack_13,pTVar12,(MethodInfo *)0x0);
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_01,(MethodInfo *)0x0);
        fStack_14 = 0.0;
        uStack_15 = 0;
        func_?();
        if (pTVar12 != (Transform *)0x0) {
          value.z = fStack_14;
          value.x = (float)(undefined4)uStack_15;
          value.y = (float)uStack_15._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                    (pTVar12,value,(MethodInfo *)0x0);
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_01,(MethodInfo *)0x0);
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)cam,(MethodInfo *)0x0);
          if ((((this_02 != (Transform *)0x0) &&
               (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_13,this_02,(MethodInfo *)0x0),
               pTVar12 != (Transform *)0x0)) &&
              (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                         (pTVar12,*pVVar16,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) &&
             (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pTVar11,(MethodInfo *)0x0),
             pTVar12 != (Transform *)0x0)) {
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffec,pTVar12,(MethodInfo *)0x0);
            VStack_13.x = pVVar16->x;
            VStack_13.y = pVVar16->y;
            fVar17 = pVVar16->z;
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd8,pTVar11,(MethodInfo *)0x0);
            uVar18 = pVVar16->y;
            VStack_13.y = (float)uVar18;
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pTVar11,(MethodInfo *)0x0);
            if (pTVar11 != (Transform *)0x0) {
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&stack0xffffffec,pTVar11,(MethodInfo *)0x0);
              uStack_19._0_4_ = pVVar16->x;
              uStack_19._4_4_ = pVVar16->y;
              CStack_8.r = pVVar16->z;
              fVar20 = (float)(undefined4)uStack_19;
              fVar21 = uStack_19._4_4_;
              fVar22 = CStack_8.r;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              lhs_00.z = fVar22;
              lhs_00.x = (float)(undefined4)uStack_19;
              lhs_00.y = uStack_19._4_4_;
              rhs_00.z = fVar17;
              rhs_00.x = VStack_13.x;
              rhs_00.y = VStack_13.y;
              fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                                (lhs_00,rhs_00,(MethodInfo *)0x0);
              puVar23 = &stack0xffffff80;
              CStack_8.g = (float)((uint)fVar17 ^ _UNK_?) - (this_04->fields).clipPlaneOffset
              ;
              CStack_8.b = 0.0;
              puVar24 = &UNK_?;
              func_?();
              if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_zero
                                  ((Matrix4x4 *)&stack0xffffff40,(MethodInfo *)0x0);
              plane.y = (float)puVar23;
              plane.x = (float)puVar24;
              plane.z = fVar20;
              plane.w = fVar21;
              pMVar25 = PlanarReflection_CalculateReflectionMatrix
                                  ((Matrix4x4 *)&stack0xffffff40,*pMVar25,plane,(MethodInfo *)0x0);
              fVar17 = pMVar25->m00;
              fVar20 = pMVar25->m10;
              fVar21 = pMVar25->m20;
              fVar22 = pMVar25->m30;
              fVar26 = pMVar25->m01;
              pCVar27 = (Component_1 *)pMVar25->m21;
              method_00 = (MethodInfo *)pMVar25->m31;
              fVar28 = pMVar25->m02;
              fVar29 = pMVar25->m12;
              fVar30 = pMVar25->m22;
              fVar31 = pMVar25->m32;
              fVar32 = pMVar25->m03;
              fVar33 = pMVar25->m13;
              fVar34 = pMVar25->m23;
              fVar35 = pMVar25->m33;
              puVar24 = &UNK_?;
              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform(pCVar27,method_00);
              if (pTVar11 != (Transform *)0x0) {
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffec,pTVar11,(MethodInfo *)0x0);
                fVar36 = pVVar16->y;
                fVar37 = pVVar16->z;
                (this_04->fields).oldpos.x = pVVar16->x;
                (this_04->fields).oldpos.y = fVar36;
                (this_04->fields).oldpos.z = fVar37;
                iVar38 = func_?();
                uStack_19 = CONCAT44(*(undefined4 *)(iVar38 + 8),(undefined4)uStack_19);
                pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                          Camera_get_worldToCameraMatrix
                                    ((Matrix4x4 *)&stack0xffffff40,cam,(MethodInfo *)0x0);
                rhs.m10 = fVar20;
                rhs.m00 = fVar17;
                rhs.m20 = fVar21;
                rhs.m30 = fVar22;
                rhs.m01 = fVar26;
                rhs.m11 = (float)puVar24;
                rhs.m21 = (float)pCVar27;
                rhs.m31 = (float)method_00;
                rhs.m02 = fVar28;
                rhs.m12 = fVar29;
                rhs.m22 = fVar30;
                rhs.m32 = fVar31;
                rhs.m03 = fVar32;
                rhs.m13 = fVar33;
                rhs.m23 = fVar34;
                rhs.m33 = fVar35;
                pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                                    ((Matrix4x4 *)&stack0xffffff40,*pMVar25,rhs,(MethodInfo *)0x0);
                uVar39 = pMVar25->m00;
                uVar40 = pMVar25->m10;
                fVar17 = pMVar25->m30;
                fVar20 = pMVar25->m01;
                fVar21 = pMVar25->m22;
                this_00 = pMVar25->m23;
                uVar41 = pMVar25->m33;
                VStack_13.z = (float)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_worldToCameraMatrix
                          (this_01,*pMVar25,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                func_?();
                fVar22 = (this_04->fields).clipPlaneOffset;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?();
                }
                a.y = (float)uVar40;
                a.x = (float)uVar39;
                a.z = (float)uVar41;
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    ((Vector3 *)&stack0xfffffee8,a,fVar22,(MethodInfo *)0x0);
                a_00.z = fVar21;
                a_00.x = VStack_13.x;
                a_00.y = VStack_13.y;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_13,a_00,*pVVar16,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                          ((Matrix4x4 *)&stack0xfffffe84,this_01,(MethodInfo *)0x0);
                puVar42 = (undefined8 *)func_?();
                fVar21 = *(float *)(puVar42 + 1);
                uVar39 = (undefined4)*puVar42;
                uVar40 = (undefined4)((ulonglong)*puVar42 >> 0x20);
                func_?();
                pVVar16 = (Vector3 *)func_?();
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    ((Vector3 *)&stack0xffffff34,*pVVar16,1.0,(MethodInfo *)0x0);
                lhs.y = (float)uVar40;
                lhs.x = (float)uVar39;
                lhs.z = fVar21;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                          (lhs,*pVVar16,(MethodInfo *)0x0);
                CStack_8.r = 0.0;
                CStack_8.g = 0.0;
                CStack_8.b = 0.0;
                CStack_8.a = 0.0;
                func_?();
                pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                          Camera_get_projectionMatrix
                                    ((Matrix4x4 *)&stack0xfffffe84,(Camera *)this_00,
                                     (MethodInfo *)0x0);
                clipPlane.y = CStack_8.g;
                clipPlane.x = CStack_8.r;
                clipPlane.z = CStack_8.b;
                clipPlane.w = CStack_8.a;
                pMVar25 = PlanarReflection_CalculateObliqueMatrix
                                    ((Matrix4x4 *)&stack0xfffffe84,*pMVar25,clipPlane,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_projectionMatrix
                          (this_01,*pMVar25,(MethodInfo *)0x0);
                pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_01,(MethodInfo *)0x0);
                if (pTVar11 != (Transform *)0x0) {
                  value_00.y = fVar20;
                  value_00.x = fVar17;
                  value_00.z = uStack_19._4_4_;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar11,value_00,(MethodInfo *)0x0);
                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0);
                  if (pTVar11 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                              ((Vector3 *)&stack0xffffff34,pTVar11,(MethodInfo *)0x0);
                    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)this_01,(MethodInfo *)0x0);
                    fStack_43 = 0.0;
                    uStack_44 = 0;
                    func_?();
                    if (pTVar11 != (Transform *)0x0) {
                      value_01.z = fStack_43;
                      value_01.x = (float)(undefined4)uStack_44;
                      value_01.y = (float)uStack_44._4_4_;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                                (pTVar11,value_01,(MethodInfo *)0x0);
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render
                                (this_01,(MethodInfo *)0x0);
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
      goto code_?;
    }
    if (cam == (Camera *)0x0) goto code_?;
    pGVar45 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)cam,(MethodInfo *)0x0);
    pIVar46 = TypeRef__UnityEngine__Skybox;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar47 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar46,(MethodInfo *)0x0);
    if (pGVar45 == (GameObject *)0x0) goto code_?;
    pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                        (pGVar45,pTVar47,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pCVar27,(MethodInfo *)0x0);
    auVar10._0_12_ = auVar2 << 0x20;
    if (bVar3 == 0) {
code_?:
      this_04 = this;
      auVar9 = auVar10._0_12_;
      goto code_?;
    }
    pGVar45 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)reflectCamera,(MethodInfo *)0x0);
    pIVar46 = TypeRef__UnityEngine__Skybox;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar47 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar46,(MethodInfo *)0x0);
    if (pGVar45 == (GameObject *)0x0) goto code_?;
    pCVar48 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                        (pGVar45,pTVar47,(MethodInfo *)0x0);
    pCVar27 = (Component_1 *)0x0;
    if (pCVar48 == (Component_1 *)0x0) {
      auVar49._8_8_ = 0;
      auVar49._0_8_ = uVar1;
    }
    else {
      if ((Skybox__Class *)pCVar48->klass == TypeInfo__UnityEngine__Skybox) {
        pCVar27 = pCVar48;
      }
      auVar49._8_4_ = pCVar27;
      auVar49._0_8_ = uVar1;
      auVar49._12_4_ = 0;
      if (pCVar27 == (Component_1 *)0x0) goto code_?;
    }
    auVar10 = auVar49 << 0x20;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pCVar27,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pGVar45 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      pIVar46 = TypeRef__UnityEngine__Skybox;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar47 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar46,(MethodInfo *)0x0);
      if (pGVar45 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent
                (pGVar45,pTVar47,(MethodInfo *)0x0);
      reflectCamera = (Camera *)func_?();
    }
    pIVar46 = TypeRef__UnityEngine__Skybox;
    auVar2 = auVar10._0_12_;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar47 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar46,(MethodInfo *)0x0);
    pSVar50 = (Skybox *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent
                        ((Component_1 *)cam,pTVar47,(MethodInfo *)0x0);
    if (pSVar50 == (Skybox *)0x0) goto code_?;
    this_03 = (Skybox *)0x0;
    if (pSVar50->klass == TypeInfo__UnityEngine__Skybox) {
      this_03 = pSVar50;
    }
    if (this_03 != (Skybox *)0x0) {
      pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                          (this_03,(MethodInfo *)0x0);
      if (reflectCamera != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                  ((Skybox *)reflectCamera,pMVar4,(MethodInfo *)0x0);
        auVar10._0_12_ = auVar2;
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pMVar4 = (this->fields).sharedMaterial;
    if (pMVar4 != (Material *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                         (pMVar4,(this->fields).reflectionSampler,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar51 = (code *)swi(3);
  (*pcVar51)();
  return;
}


/* Void SaneCameraSettings(Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_SaneCameraSettings
               (PlanarReflection *this,Camera *helperCam,MethodInfo *method)

{
  if (helperCam != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
              (helperCam,DepthTextureMode__Enum_None,(MethodInfo *)0x0);
    pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_black
                       ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (helperCam,*pCVar1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
              (helperCam,CameraClearFlags__Enum_Color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_renderingPath
              (helperCam,RenderingPath__Enum_Forward,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetStandardCameraParameter(Camera, LayerMask) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_SetStandardCameraParameter
               (PlanarReflection *this,Camera *cam,LayerMask mask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)mask.m_Mask,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Water,(MethodInfo *)0x0);
  if (cam != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (cam,(uint)pOVar1 & ~(1 << (uVar2 & 0x1f)),(MethodInfo *)0x0);
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_black
                       ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (cam,*pCVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)cam,0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
  if (pMVar1 != (MVInteractableBase *)0x0) {
    (this->fields).sharedMaterial = *(Material **)&(pMVar1->fields)._.findWorldObjectParent;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WaterTileBeingRendered(Transform, Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_WaterTileBeingRendered
               (PlanarReflection *this,Transform *tr,Camera *currentCam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).helperCameras;
  if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    pDVar1 = (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
              );
    (this->fields).helperCameras = pDVar1;
    if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
          Dictionary_2_System_Object_System_Boolean__ContainsKey
                    ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                    );
  if (bVar2 == 0) {
    pDVar1 = (this->fields).helperCameras;
    if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
    Dictionary_2_System_Object_System_Boolean__Add
              ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,0,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
              );
  }
  pDVar1 = (this->fields).helperCameras;
  if (pDVar1 != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]
            ::Dictionary_2_System_Object_System_Boolean__get_Item
                      ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                      );
    if (bVar2 == 0) {
      pCVar3 = (this->fields).reflectionCamera;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pCVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pCVar3 = PlanarReflection_CreateReflectionCameraFor(this,currentCam,(MethodInfo *)0x0);
        (this->fields).reflectionCamera = pCVar3;
      }
      PlanarReflection_RenderReflectionFor
                (this,currentCam,(this->fields).reflectionCamera,(MethodInfo *)0x0);
      pDVar1 = (this->fields).helperCameras;
      if (pDVar1 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
      Dictionary_2_System_Object_System_Boolean__set_Item
                ((Dictionary_2_System_Object_System_Boolean_ *)pDVar1,(Object *)currentCam,1,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
                );
    }
    pCVar3 = (this->fields).reflectionCamera;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pCVar3,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pMVar4 = (this->fields).sharedMaterial;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pMVar4,(MethodInfo *)0x0);
      if (bVar2 != 0) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  (this->fields).clearColor.r = pCVar1->r;
  (this->fields).clearColor.g = fVar2;
  (this->fields).clearColor.b = fVar3;
  (this->fields).clearColor.a = fVar4;
  (this->fields).reflectionSampler = StringLiteral__ReflectionTex;
  (this->fields).clipPlaneOffset = 0.07;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_6,(MethodInfo *)0x0);
  fVar3 = pVVar5->y;
  fVar2 = pVVar5->z;
  (this->fields).oldpos.x = pVVar5->x;
  (this->fields).oldpos.y = fVar3;
  (this->fields).oldpos.z = fVar2;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
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

