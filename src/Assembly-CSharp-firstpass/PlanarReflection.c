
/* Matrix4x4 CalculateObliqueMatrix(Matrix4x4, Vector4) */

Matrix4x4 *
Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CalculateObliqueMatrix
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 *projection,Vector4 *clipPlane,
          MethodInfo *method)

{
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     (aMStack_2,projection,(MethodInfo *)0x0);
  fStackX_18 = 0.0;
  if (0.0 < clipPlane->x) {
    fStackX_8 = _UNK_?;
  }
  else if (clipPlane->x < 0.0) {
    fStackX_8 = _UNK_?;
  }
  else {
    fStackX_8 = 0.0;
  }
  if (0.0 < clipPlane->y) {
    fStackX_18 = _UNK_?;
  }
  else if (clipPlane->y < 0.0) {
    fStackX_18 = _UNK_?;
  }
  fVar3 = TypeRef__System__Activator__T._0_4_ /
          ((pMVar1->m01 * fStackX_18 + pMVar1->m00 * fStackX_8 + pMVar1->m02 + pMVar1->m03) *
           clipPlane->x +
           (pMVar1->m11 * fStackX_18 + pMVar1->m10 * fStackX_8 + pMVar1->m12 + pMVar1->m13) *
           clipPlane->y +
           (pMVar1->m21 * fStackX_18 + pMVar1->m20 * fStackX_8 + pMVar1->m22 + pMVar1->m23) *
           clipPlane->z +
          (pMVar1->m31 * fStackX_18 + pMVar1->m30 * fStackX_8 + pMVar1->m32 + pMVar1->m33) *
          clipPlane->w);
  fVar4 = clipPlane->z;
  fVar5 = clipPlane->w;
  fVar6 = clipPlane->x * fVar3 - projection->m30;
  projection->m21 = clipPlane->y * fVar3 - projection->m31;
  projection->m22 = fVar4 * fVar3 - projection->m32;
  projection->m23 = fVar5 * fVar3 - projection->m33;
  fVar4 = projection->m00;
  fVar5 = projection->m10;
  fVar3 = projection->m30;
  __return_storage_ptr__->m00 = fVar4;
  __return_storage_ptr__->m10 = fVar5;
  __return_storage_ptr__->m20 = fVar6;
  __return_storage_ptr__->m30 = fVar3;
  projection->m00 = fVar4;
  projection->m10 = fVar5;
  projection->m20 = fVar6;
  projection->m30 = fVar3;
  fVar4 = projection->m11;
  fVar5 = projection->m21;
  fVar3 = projection->m31;
  fVar6 = projection->m02;
  fVar7 = projection->m12;
  fVar8 = projection->m22;
  fVar9 = projection->m32;
  __return_storage_ptr__->m01 = projection->m01;
  __return_storage_ptr__->m11 = fVar4;
  __return_storage_ptr__->m21 = fVar5;
  __return_storage_ptr__->m31 = fVar3;
  fVar4 = projection->m03;
  fVar5 = projection->m13;
  fVar3 = projection->m23;
  fVar10 = projection->m33;
  __return_storage_ptr__->m02 = fVar6;
  __return_storage_ptr__->m12 = fVar7;
  __return_storage_ptr__->m22 = fVar8;
  __return_storage_ptr__->m32 = fVar9;
  __return_storage_ptr__->m03 = fVar4;
  __return_storage_ptr__->m13 = fVar5;
  __return_storage_ptr__->m23 = fVar3;
  __return_storage_ptr__->m33 = fVar10;
  return __return_storage_ptr__;
}


/* Matrix4x4 CalculateReflectionMatrix(Matrix4x4, Vector4) */

Matrix4x4 *
Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CalculateReflectionMatrix
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 *reflectionMat,Vector4 *plane,
          MethodInfo *method)

{
  fVar1 = MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
          ._0_4_;
  fVar2 = _UNK_?;
  fVar3 = _UNK_? - (plane->x + plane->x) * plane->x;
  reflectionMat->m01 =
       plane->x *
       MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
       ._0_4_ * plane->y;
  reflectionMat->m02 = plane->x * fVar1 * plane->z;
  reflectionMat->m03 = plane->w * fVar1 * plane->x;
  fVar4 = plane->y * fVar1 * plane->x;
  reflectionMat->m11 = fVar2 - (plane->y + plane->y) * plane->y;
  reflectionMat->m12 = plane->y * fVar1 * plane->z;
  reflectionMat->m13 = plane->w * fVar1 * plane->y;
  fVar5 = plane->z * fVar1 * plane->x;
  reflectionMat->m21 = plane->z * fVar1 * plane->y;
  reflectionMat->m22 = fVar2 - (plane->z + plane->z) * plane->z;
  fVar2 = plane->w;
  reflectionMat->m30 = 0.0;
  reflectionMat->m31 = 0.0;
  reflectionMat->m32 = 0.0;
  fVar6 = plane->z;
  reflectionMat->m33 = 1.0;
  reflectionMat->m23 = fVar2 * fVar1 * fVar6;
  fVar2 = reflectionMat->m30;
  __return_storage_ptr__->m00 = fVar3;
  __return_storage_ptr__->m10 = fVar4;
  __return_storage_ptr__->m20 = fVar5;
  __return_storage_ptr__->m30 = fVar2;
  reflectionMat->m00 = fVar3;
  reflectionMat->m10 = fVar4;
  reflectionMat->m20 = fVar5;
  reflectionMat->m30 = fVar2;
  fVar2 = reflectionMat->m11;
  fVar6 = reflectionMat->m21;
  fVar1 = reflectionMat->m31;
  fVar5 = reflectionMat->m02;
  fVar4 = reflectionMat->m12;
  fVar3 = reflectionMat->m22;
  fVar7 = reflectionMat->m32;
  __return_storage_ptr__->m01 = reflectionMat->m01;
  __return_storage_ptr__->m11 = fVar2;
  __return_storage_ptr__->m21 = fVar6;
  __return_storage_ptr__->m31 = fVar1;
  fVar2 = reflectionMat->m03;
  fVar6 = reflectionMat->m13;
  fVar1 = reflectionMat->m23;
  fVar8 = reflectionMat->m33;
  __return_storage_ptr__->m02 = fVar5;
  __return_storage_ptr__->m12 = fVar4;
  __return_storage_ptr__->m22 = fVar3;
  __return_storage_ptr__->m32 = fVar7;
  __return_storage_ptr__->m03 = fVar2;
  __return_storage_ptr__->m13 = fVar6;
  __return_storage_ptr__->m23 = fVar1;
  __return_storage_ptr__->m33 = fVar8;
  return __return_storage_ptr__;
}


/* Vector4 CameraSpacePlane(Camera, Vector3, Vector3, Single) */

Vector4 * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CameraSpacePlane
                    (Vector4 *__return_storage_ptr__,PlanarReflection *this,Camera *cam,Vector3 *pos
                    ,Vector3 *normal,float sideSign,MethodInfo *method)

{
  fVar1 = (this->fields).clipPlaneOffset;
  uVar2 = normal->x;
  uVar3 = normal->y;
  uStack_4._0_4_ = pos->x;
  uStack_4._4_4_ = pos->y;
  fVar5 = (float)uVar2 * fVar1 + (float)uStack_4;
  fVar6 = (float)uVar3 * fVar1 + uStack_4._4_4_;
  fVar1 = normal->z * fVar1 + pos->z;
  if (cam == (Camera *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector4 *)(*pcVar7)();
    return pVVar8;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  pvVar17 = (cam->fields)._._._.m_CachedPtr;
  if (pvVar17 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)cam,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector4 *)(*pcVar7)();
    return pVVar8;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector4 *)(*pcVar7)();
    return pVVar8;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar17,&uStack_9);
  fVar19 = _UNK_? /
           (uStack_10._4_4_ * fVar5 + uStack_12._4_4_ * fVar6 + uStack_14._4_4_ * fVar1 +
           uStack_16._4_4_);
  fVar20 = (float)uStack_9 * fVar5 + (float)uStack_11 * fVar6 + (float)uStack_13 * fVar1 +
           (float)uStack_15;
  fVar21 = uStack_9._4_4_ * fVar5 + uStack_11._4_4_ * fVar6 + uStack_13._4_4_ * fVar1 +
           uStack_15._4_4_;
  fVar22 = (float)uStack_10 * fVar5 + (float)uStack_12 * fVar6 + (float)uStack_14 * fVar1 +
           (float)uStack_16;
  uVar23 = normal->x;
  uVar24 = normal->y;
  fVar1 = normal->z;
  fVar25 = (float)uStack_11 * (float)uVar24 + (float)uStack_9 * (float)uVar23 +
           (float)uStack_13 * fVar1;
  fVar6 = (float)uStack_12 * (float)uVar24 + (float)uStack_10 * (float)uVar23 +
           (float)uStack_14 * fVar1;
  fVar5 = uStack_11._4_4_ * (float)uVar24 + uStack_9._4_4_ * (float)uVar23 +
           uStack_13._4_4_ * fVar1;
  uStack_4 = CONCAT44(fVar5,fVar25);
  fStack_26 = fVar6;
  fVar1 = (float)FUN_?(&uStack_4);
  if (_UNK_? < fVar1) {
    fVar6 = fVar6 / fVar1;
    uStack_4 = CONCAT44(fVar5 / fVar1,fVar25 / fVar1);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_4._0_4_ = (pVVar27->zeroVector).x;
    uStack_4._4_4_ = (pVVar27->zeroVector).y;
    fVar6 = (pVVar27->zeroVector).z;
  }
  __return_storage_ptr__->x = (float)uStack_4 * sideSign;
  __return_storage_ptr__->y = uStack_4._4_4_ * sideSign;
  __return_storage_ptr__->z = fVar6 * sideSign;
  __return_storage_ptr__->w =
       (float)((uint)(fVar21 * fVar19 * uStack_4._4_4_ * sideSign +
                      fVar20 * fVar19 * (float)uStack_4 * sideSign +
                     fVar22 * fVar19 * fVar6 * sideSign) ^ _UNK_?);
  return __return_storage_ptr__;
}


/* Camera CreateReflectionCameraFor(Camera) */

Camera * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CreateReflectionCameraFor
                   (PlanarReflection *this,Camera *cam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__UnityEngine__Camera);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Reflection);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((pGVar1 == (GameObject *)0x0) ||
     (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                         ((Object_1 *)pGVar1,(MethodInfo *)0x0), cam == (Camera *)0x0))
  goto DAT_?;
  str2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                   ((Object_1 *)cam,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_5
                     (pSVar2,StringLiteral_Reflection,str2,(MethodInfo *)0x0);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                     (pSVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    components = (Type__Array *)FUN_?(TypeInfo__System__Type,1);
    pIVar3 = TypeRef__UnityEngine__Camera;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = 0;
    if (pIVar3 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar4 = FUN_?(pIVar3,1);
      lVar4 = FUN_?(lVar4 + 0x20);
    }
    if (components == (Type__Array *)0x0) {
DAT_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      pCVar6 = (Camera *)(*pcVar5)();
      return pCVar6;
    }
    if ((lVar4 != 0) &&
       (lVar7 = FUN_?(lVar4,(components->klass->_0).element_class), lVar7 == 0)) {
      uVar8 = FUN_?();
      FUN_?(uVar8,0);
      pcVar5 = (code *)swi(3);
      pCVar6 = (Camera *)(*pcVar5)();
      return pCVar6;
    }
    FUN_?(components,0,lVar4);
    pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_2
              (pGVar1,pSVar2,components,(MethodInfo *)0x0);
    if (pGVar1 == (GameObject *)0x0) goto DAT_?;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (pGVar1,
                      UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                     );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar9 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar9[1].klass != (Object__Class *)0x0) goto code_?;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
            (pGVar1,
             UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
            );
code_?:
  pCVar6 = (Camera *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (pGVar1,
                       UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                      );
  if (pCVar6 == (Camera *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pCVar6 = (Camera *)(*pcVar5)();
    return pCVar6;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar10 = (pCVar6->fields)._._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    pCVar6 = (Camera *)(*pcVar5)();
    return pCVar6;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar5 = (code *)swi(3);
    pCVar6 = (Camera *)(*pcVar5)();
    return pCVar6;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar10);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
            (pCVar6,CameraClearFlags__Enum_Color - ((this->fields).reflectSkybox != 0),
             (MethodInfo *)0x0);
  uVar11 = (this->fields).reflectionMask.m_Mask;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Water);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Water,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (pCVar6,uVar11 & ~(1 << (uVar12 & 0x1f)),(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar10 = (pCVar6->fields)._._._.m_CachedPtr;
  if (pvVar10 != (void *)0x0) {
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar5 = (code *)swi(3);
      pCVar6 = (Camera *)(*pcVar5)();
      return pCVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar10);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pCVar6,0,(MethodInfo *)0x0);
    pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                        (pCVar6,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pRVar13 != (RenderTexture *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pRVar13->fields)._._.m_CachedPtr != (void *)0x0) {
        return pCVar6;
      }
    }
    pRVar13 = PlanarReflection_CreateTextureFor(this,cam,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar6,pRVar13,(MethodInfo *)0x0);
    return pCVar6;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
  pcVar5 = (code *)swi(3);
  pCVar6 = (Camera *)(*pcVar5)();
  return pCVar6;
}


/* RenderTexture CreateTextureFor(Camera) */

RenderTexture *
Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CreateTextureFor
          (PlanarReflection *this,Camera *cam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cam == (Camera *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pRVar2 = (RenderTexture *)(*pcVar1)();
    return pRVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (cam->fields)._._._.m_CachedPtr;
  if (pvVar3 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      pRVar2 = (RenderTexture *)(*pcVar1)();
      return pRVar2;
    }
    pcRam_? = pcVar1;
    iVar5 = (*pcRam_?)(pvVar3);
    width = FUN_?((float)iVar5 * _UNK_?);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (cam->fields)._._._.m_CachedPtr;
    if (pvVar3 != (void *)0x0) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar1 = (code *)swi(3);
        pRVar2 = (RenderTexture *)(*pcVar1)();
        return pRVar2;
      }
      pcRam_? = pcVar1;
      iVar5 = (*pcRam_?)(pvVar3);
      height = FUN_?((float)iVar5 * _UNK_?);
      pRVar2 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
                (pRVar2,width,height,0x18,RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
      if (pRVar2 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                  ((Object_1 *)pRVar2,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
        return pRVar2;
      }
      goto DAT_?;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)cam,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  pRVar2 = (RenderTexture *)(*pcVar1)();
  return pRVar2;
}


/* Void LateUpdate() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_LateUpdate
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).helperCameras != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    pDVar1 = (this->fields).helperCameras;
    length = (pDVar1->fields)._count;
    if (0 < length) {
      pIVar2 = (pDVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pDVar1->fields)._count = 0;
      (pDVar1->fields)._freeCount = 0;
      (pDVar1->fields)._freeList = -1;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
    }
    piVar4 = &(pDVar1->fields)._version;
    *piVar4 = *piVar4 + 1;
    return;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_OnDestroy
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).reflectionCamera;
  if (pCVar1 == (Camera *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                     (pCVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar3 != (RenderTexture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar3->fields)._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields).reflectionCamera;
      if (pCVar1 != (Camera *)0x0) {
        pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                           (pCVar1,(MethodInfo *)0x0);
        pCVar1 = (this->fields).reflectionCamera;
        if ((pCVar1 != (Camera *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                      (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0),
           pRVar3 != (RenderTexture *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                    (pRVar3,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_OnDisable
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_WATER_REFLECTIVE);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WATER_SIMPLE);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
            (StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_WATER_REFLECTIVE;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_8 = (uint16_t *)0x0;
  puStack_2 = (uint16_t *)0x0;
  uStack_3 = 0;
  uStack_4 = 0;
  ppuStack_5 = &puStackX_8;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_2 = (uint16_t *)0x1;
      uStack_3 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar6 = (pSVar1->fields)._stringLength;
      puStackX_8 = &(pSVar1->fields)._firstChar;
      if (iVar6 == 0) {
        puStackX_8 = (uint16_t *)0x0;
      }
      uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
      puStack_2 = puStackX_8;
    }
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&puStack_2);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_OnEnable
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_WATER_REFLECTIVE);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WATER_SIMPLE);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
            (StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_WATER_SIMPLE;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_8 = (uint16_t *)0x0;
  puStack_2 = (uint16_t *)0x0;
  uStack_3 = 0;
  uStack_4 = 0;
  ppuStack_5 = &puStackX_8;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_2 = (uint16_t *)0x1;
      uStack_3 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar6 = (pSVar1->fields)._stringLength;
      puStackX_8 = &(pSVar1->fields)._firstChar;
      if (iVar6 == 0) {
        puStackX_8 = (uint16_t *)0x0;
      }
      uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
      puStack_2 = puStackX_8;
    }
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&puStack_2);
  return;
}


/* Void RenderHelpCameras(Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_RenderHelpCameras
               (PlanarReflection *this,Camera *currentCam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).helperCameras == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__
              );
    bVar1 = iRam_? != 0;
    (this->fields).helperCameras = (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).helperCameras >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields).helperCameras;
  if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
  iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (pDVar6,(Object *)currentCam,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_
                     ->klass->rgctx_data[0x21].method);
  if (iVar7 < 0) {
    pDVar8 = (this->fields).helperCameras;
    if (pDVar8 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
    Dictionary_2_System_Object_System_Boolean__TryInsert
              ((Dictionary_2_System_Object_System_Boolean_ *)pDVar8,(Object *)currentCam,0,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_
               ->klass->rgctx_data[0x22].method);
  }
  pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields).helperCameras;
  if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
  uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (pDVar6,(Object *)currentCam,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar2 < 0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              ((Object *)currentCam,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pDVar10 = (pDVar6->fields)._entries;
  if (pDVar10 == (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                 *)0x0) goto code_?;
  if ((uint)pDVar10->max_length <= uVar2) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((char)pDVar10->vector[(int)uVar2].value.state != '\0') {
    return;
  }
  pCVar11 = (this->fields).reflectionCamera;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar11 == (Camera *)0x0) {
code_?:
    pCVar11 = PlanarReflection_CreateReflectionCameraFor(this,currentCam,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).reflectionCamera = pCVar11;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).reflectionCamera >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar11->fields)._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  uVar12 = 0;
  PlanarReflection_RenderReflectionFor
            (this,currentCam,(this->fields).reflectionCamera,(MethodInfo *)0x0);
  pDVar8 = (this->fields).helperCameras;
  if (pDVar8 != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
    Dictionary_2_System_Object_System_Boolean__TryInsert
              ((Dictionary_2_System_Object_System_Boolean_ *)pDVar8,(Object *)currentCam,1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_
               ->klass->rgctx_data[0x22].method);
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RenderReflectionFor(Camera, Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_RenderReflectionFor
               (PlanarReflection *this,Camera *cam,Camera *reflectCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__UnityEngine__Skybox);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Skybox);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Water);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (reflectCamera == (Camera *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((reflectCamera->fields)._._._.m_CachedPtr == (void *)0x0) {
    return;
  }
  pMVar1 = (this->fields).sharedMaterial;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (Material *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).sharedMaterial;
      if (pMVar1 == (Material *)0x0) goto code_?;
      nameID = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                         ((this->fields).reflectionSampler,(MethodInfo *)0x0);
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                         (pMVar1,nameID,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
    }
  }
  uVar3 = (this->fields).reflectionMask.m_Mask;
  uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Water,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (reflectCamera,uVar3 & ~(1 << (uVar4 & 0x1f)),(MethodInfo *)0x0);
  PlanarReflection_SaneCameraSettings(this,reflectCamera,(MethodInfo *)0x0);
  VStack_5.x = (this->fields).clearColor.r;
  VStack_5.y = (this->fields).clearColor.g;
  VStack_5.z = (this->fields).clearColor.b;
  VStack_5.w = (this->fields).clearColor.a;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (reflectCamera->fields)._._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)reflectCamera,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
            (reflectCamera,CameraClearFlags__Enum_Color - ((this->fields).reflectSkybox != 0),
             (MethodInfo *)0x0);
  if ((this->fields).reflectSkybox != 0) {
    if (cam == (Camera *)0x0) goto code_?;
    pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)cam,(MethodInfo *)0x0);
    pIVar10 = TypeRef__UnityEngine__Skybox;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar10,(MethodInfo *)0x0);
    if (pGVar9 == (GameObject *)0x0) goto code_?;
    exists = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                       (pGVar9,pTVar11,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)exists,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)reflectCamera,(MethodInfo *)0x0);
      pIVar10 = TypeRef__UnityEngine__Skybox;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar10,(MethodInfo *)0x0);
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      pSVar12 = (Skybox *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                          (pGVar9,pTVar11,(MethodInfo *)0x0);
      this_00 = (Skybox *)0x0;
      if (pSVar12 != (Skybox *)0x0) {
        if (pSVar12->klass == TypeInfo__UnityEngine__Skybox) {
          this_00 = pSVar12;
        }
        if (this_00 == (Skybox *)0x0) {
          FUN_?(pSVar12);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                         ((Object_1 *)this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)reflectCamera,(MethodInfo *)0x0);
        pIVar10 = TypeRef__UnityEngine__Skybox;
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar10,(MethodInfo *)0x0);
        if (pGVar9 == (GameObject *)0x0) goto code_?;
        pSVar12 = (Skybox *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent
                            (pGVar9,pTVar11,(MethodInfo *)0x0);
        this_00 = (Skybox *)0x0;
        if (pSVar12 != (Skybox *)0x0) {
          if (pSVar12->klass == TypeInfo__UnityEngine__Skybox) {
            this_00 = pSVar12;
          }
          if (this_00 == (Skybox *)0x0) {
            FUN_?(pSVar12);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      pIVar10 = TypeRef__UnityEngine__Skybox;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar10,(MethodInfo *)0x0);
      pSVar12 = (Skybox *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent
                          ((Component *)cam,pTVar11,(MethodInfo *)0x0);
      if (pSVar12 == (Skybox *)0x0) goto code_?;
      pSVar13 = (Skybox *)0x0;
      if (pSVar12->klass == TypeInfo__UnityEngine__Skybox) {
        pSVar13 = pSVar12;
      }
      if (pSVar13 == (Skybox *)0x0) {
        FUN_?(pSVar12);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pSVar13 = (Skybox *)0x0;
      if (pSVar12->klass == TypeInfo__UnityEngine__Skybox) {
        pSVar13 = pSVar12;
      }
      pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                          (pSVar13,(MethodInfo *)0x0);
      if (this_00 == (Skybox *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                (this_00,pMVar1,(MethodInfo *)0x0);
    }
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(1);
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if ((cam != (Camera *)0x0) &&
     (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)cam,(MethodInfo *)0x0), pTVar15 != (Transform *)0x0)) {
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&VStack_17,pTVar15,(MethodInfo *)0x0);
    uVar8._0_4_ = pVVar16->x;
    uVar8._4_4_ = pVVar16->y;
    fVar18 = pVVar16->z;
    pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)reflectCamera,(MethodInfo *)0x0);
    uVar3 = _UNK_?;
    VStack_17._0_8_ = uVar8;
    if (pTVar15 != (Transform *)0x0) {
      VStack_19.y = uVar8._4_4_;
      VStack_19.x = (float)((uint)(float)uVar8 ^ _UNK_?);
      VStack_19.z = fVar18;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                (pTVar15,(Vector3 *)&VStack_19,(MethodInfo *)0x0);
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)reflectCamera,(MethodInfo *)0x0);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)cam,(MethodInfo *)0x0);
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_20.x = 0.0;
        VStack_20.y = 0.0;
        VStack_20.z = 0.0;
        pvVar6 = (obj->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6);
        if (pTVar15 != (Transform *)0x0) {
          VStack_19.x = VStack_20.x;
          VStack_19.y = VStack_20.y;
          VStack_19.z = VStack_20.z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar6 = (pTVar15->fields)._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar6);
          if ((pTVar14 != (Transform *)0x0) &&
             (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pTVar14,(MethodInfo *)0x0),
             pTVar15 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_20.x = 0.0;
            VStack_20.y = 0.0;
            VStack_20.z = 0.0;
            pvVar6 = (pTVar15->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar6);
            fVar18 = VStack_20.z;
            VStack_17.x = VStack_20.x;
            VStack_17.y = VStack_20.y;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_19.x = 0.0;
            VStack_19.y = 0.0;
            VStack_19.z = 0.0;
            pvVar6 = (pTVar14->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar6);
            fVar21 = VStack_19.y;
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pTVar14,(MethodInfo *)0x0);
            if (pTVar14 != (Transform *)0x0) {
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&VStack_20,pTVar14,(MethodInfo *)0x0);
              uVar22._0_4_ = pVVar16->x;
              uVar22._4_4_ = pVVar16->y;
              fVar23 = pVVar16->z;
              fVar24 = (float)((uint)(uVar22._4_4_ * fVar21 + VStack_17.x * (float)uVar22 +
                                     fVar18 * pVVar16->z) ^ uVar3) - (this->fields).clipPlaneOffset;
              VStack_19._0_8_ = uVar22;
              VStack_5._0_8_ = uVar22;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Matrix4x4);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              sideSign = _UNK_?;
              fVar25 = _UNK_? - (VStack_19.x + VStack_19.x) * VStack_19.x;
              fVar26 = VStack_19.x *
                       MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                       ._0_4_ * VStack_19.y;
              fVar27 = VStack_19.x *
                       MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                       ._0_4_ * fVar23;
              fVar28 = fVar24 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                ._0_4_ * VStack_19.x;
              fStack_29 = VStack_19.y *
                           MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                           ._0_4_ * VStack_19.x;
              fStack_30 = _UNK_? - (VStack_19.y + VStack_19.y) * VStack_19.y;
              fStack_31 = VStack_19.y *
                           MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                           ._0_4_ * fVar23;
              fStack_32 = fVar24 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                    ._0_4_ * VStack_19.y;
              fStack_33 = fVar23 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                   ._0_4_ * VStack_19.x;
              fStack_34 = fVar23 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                   ._0_4_ * VStack_19.y;
              fStack_35 = _UNK_? - (fVar23 + fVar23) * fVar23;
              fVar24 = fVar24 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                ._0_4_ * fVar23;
              MStack_36.m10 = fStack_29;
              MStack_36.m00 = fVar25;
              MStack_36.m30 = 0.0;
              MStack_36.m20 = fStack_33;
              MStack_36.m11 = fStack_30;
              MStack_36.m01 = fVar26;
              MStack_36.m31 = 0.0;
              MStack_36.m21 = fStack_34;
              MStack_36.m12 = fStack_31;
              MStack_36.m02 = fVar27;
              MStack_36.m32 = 0.0;
              MStack_36.m22 = fStack_35;
              MStack_36.m13 = fStack_32;
              MStack_36.m03 = fVar28;
              MStack_36.m33 = _UNK_?;
              MStack_36.m23 = fVar24;
              pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)cam,(MethodInfo *)0x0);
              if (pTVar14 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_20.x = 0.0;
                VStack_20.y = 0.0;
                VStack_20.z = 0.0;
                pvVar6 = (pTVar14->fields)._._.m_CachedPtr;
                if (pvVar6 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar6);
                fVar37 = VStack_20.y;
                fVar38 = VStack_20.x;
                fVar26 = VStack_20.y * fVar26;
                fVar39 = VStack_20.y * fStack_30;
                fVar40 = VStack_20.y * fStack_34;
                (this->fields).oldpos.x = VStack_20.x;
                (this->fields).oldpos.y = VStack_20.y;
                (this->fields).oldpos.z = VStack_20.z;
                fVar27 = VStack_20.z * fVar27;
                fVar37 = sideSign / (fVar37 * 0.0 + fVar38 * 0.0 + VStack_20.z * 0.0 + sideSign);
                fVar39 = fVar39 + fVar38 * fStack_29 + VStack_20.z * fStack_31 + fStack_32;
                fVar24 = (fVar40 + fVar38 * fStack_33 + VStack_20.z * fStack_35 + fVar24) *
                         fVar37;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                MStack_41.m00 = 0.0;
                MStack_41.m10 = 0.0;
                MStack_41.m20 = 0.0;
                MStack_41.m30 = 0.0;
                MStack_41.m01 = 0.0;
                MStack_41.m11 = 0.0;
                MStack_41.m21 = 0.0;
                MStack_41.m31 = 0.0;
                MStack_41.m02 = 0.0;
                MStack_41.m12 = 0.0;
                MStack_41.m22 = 0.0;
                MStack_41.m32 = 0.0;
                MStack_41.m03 = 0.0;
                MStack_41.m13 = 0.0;
                MStack_41.m23 = 0.0;
                MStack_41.m33 = 0.0;
                pvVar6 = (cam->fields)._._._.m_CachedPtr;
                if (pvVar6 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)cam,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar6,&MStack_41);
                aMStack_42[0].m00 = MStack_36.m00;
                aMStack_42[0].m10 = MStack_36.m10;
                aMStack_42[0].m20 = MStack_36.m20;
                aMStack_42[0].m30 = MStack_36.m30;
                aMStack_42[0].m01 = MStack_36.m01;
                aMStack_42[0].m11 = MStack_36.m11;
                aMStack_42[0].m21 = MStack_36.m21;
                aMStack_42[0].m31 = MStack_36.m31;
                aMStack_42[0].m02 = MStack_36.m02;
                aMStack_42[0].m12 = MStack_36.m12;
                aMStack_42[0].m22 = MStack_36.m22;
                aMStack_42[0].m32 = MStack_36.m32;
                aMStack_42[0].m03 = MStack_36.m03;
                aMStack_42[0].m13 = MStack_36.m13;
                aMStack_42[0].m23 = MStack_36.m23;
                aMStack_42[0].m33 = MStack_36.m33;
                MStack_36.m00 = MStack_41.m00;
                MStack_36.m10 = MStack_41.m10;
                MStack_36.m20 = MStack_41.m20;
                MStack_36.m30 = MStack_41.m30;
                MStack_36.m01 = MStack_41.m01;
                MStack_36.m11 = MStack_41.m11;
                MStack_36.m21 = MStack_41.m21;
                MStack_36.m31 = MStack_41.m31;
                MStack_36.m02 = MStack_41.m02;
                MStack_36.m12 = MStack_41.m12;
                MStack_36.m22 = MStack_41.m22;
                MStack_36.m32 = MStack_41.m32;
                MStack_36.m03 = MStack_41.m03;
                MStack_36.m13 = MStack_41.m13;
                MStack_36.m23 = MStack_41.m23;
                MStack_36.m33 = MStack_41.m33;
                pMVar43 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                                    (&MStack_41,&MStack_36,aMStack_42,(MethodInfo *)0x0);
                aMStack_42[0].m00 = pMVar43->m00;
                aMStack_42[0].m10 = pMVar43->m10;
                aMStack_42[0].m20 = pMVar43->m20;
                aMStack_42[0].m30 = pMVar43->m30;
                aMStack_42[0].m01 = pMVar43->m01;
                aMStack_42[0].m11 = pMVar43->m11;
                aMStack_42[0].m21 = pMVar43->m21;
                aMStack_42[0].m31 = pMVar43->m31;
                aMStack_42[0].m02 = pMVar43->m02;
                aMStack_42[0].m12 = pMVar43->m12;
                aMStack_42[0].m22 = pMVar43->m22;
                aMStack_42[0].m32 = pMVar43->m32;
                aMStack_42[0].m03 = pMVar43->m03;
                aMStack_42[0].m13 = pMVar43->m13;
                aMStack_42[0].m23 = pMVar43->m23;
                aMStack_42[0].m33 = pMVar43->m33;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar6 = (reflectCamera->fields)._._._.m_CachedPtr;
                if (pvVar6 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException
                            ((Object *)reflectCamera,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar6,aMStack_42);
                VStack_17.y = fVar21;
                VStack_17.z = fVar18;
                VStack_19._0_8_ = uVar22;
                VStack_19.z = fVar23;
                pVVar44 = PlanarReflection_CameraSpacePlane
                                    (&VStack_5,this,reflectCamera,(Vector3 *)&VStack_17,
                                     (Vector3 *)&VStack_19,sideSign,(MethodInfo *)0x0);
                uVar45._0_4_ = pVVar44->x;
                uVar45._4_4_ = pVVar44->y;
                uVar46._0_4_ = pVVar44->z;
                uVar46._4_4_ = pVVar44->w;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                MStack_41.m00 = 0.0;
                MStack_41.m10 = 0.0;
                MStack_41.m20 = 0.0;
                MStack_41.m30 = 0.0;
                MStack_41.m01 = 0.0;
                MStack_41.m11 = 0.0;
                MStack_41.m21 = 0.0;
                MStack_41.m31 = 0.0;
                MStack_41.m02 = 0.0;
                MStack_41.m12 = 0.0;
                MStack_41.m22 = 0.0;
                MStack_41.m32 = 0.0;
                MStack_41.m03 = 0.0;
                MStack_41.m13 = 0.0;
                MStack_41.m23 = 0.0;
                MStack_41.m33 = 0.0;
                pvVar6 = (cam->fields)._._._.m_CachedPtr;
                if (pvVar6 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)cam,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar6,&MStack_41);
                aMStack_42[0].m00 = MStack_41.m00;
                aMStack_42[0].m10 = MStack_41.m10;
                aMStack_42[0].m20 = MStack_41.m20;
                aMStack_42[0].m30 = MStack_41.m30;
                aMStack_42[0].m01 = MStack_41.m01;
                aMStack_42[0].m11 = MStack_41.m11;
                aMStack_42[0].m21 = MStack_41.m21;
                aMStack_42[0].m31 = MStack_41.m31;
                aMStack_42[0].m02 = MStack_41.m02;
                aMStack_42[0].m12 = MStack_41.m12;
                aMStack_42[0].m22 = MStack_41.m22;
                aMStack_42[0].m32 = MStack_41.m32;
                aMStack_42[0].m03 = MStack_41.m03;
                aMStack_42[0].m13 = MStack_41.m13;
                aMStack_42[0].m23 = MStack_41.m23;
                aMStack_42[0].m33 = MStack_41.m33;
                VStack_5._0_8_ = uVar45;
                VStack_5._8_8_ = uVar46;
                pMVar43 = PlanarReflection_CalculateObliqueMatrix
                                    (&MStack_41,aMStack_42,&VStack_5,(MethodInfo *)0x0);
                aMStack_42[0].m00 = pMVar43->m00;
                aMStack_42[0].m10 = pMVar43->m10;
                aMStack_42[0].m20 = pMVar43->m20;
                aMStack_42[0].m30 = pMVar43->m30;
                aMStack_42[0].m01 = pMVar43->m01;
                aMStack_42[0].m11 = pMVar43->m11;
                aMStack_42[0].m21 = pMVar43->m21;
                aMStack_42[0].m31 = pMVar43->m31;
                aMStack_42[0].m02 = pMVar43->m02;
                aMStack_42[0].m12 = pMVar43->m12;
                aMStack_42[0].m22 = pMVar43->m22;
                aMStack_42[0].m32 = pMVar43->m32;
                aMStack_42[0].m03 = pMVar43->m03;
                aMStack_42[0].m13 = pMVar43->m13;
                aMStack_42[0].m23 = pMVar43->m23;
                aMStack_42[0].m33 = pMVar43->m33;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar6 = (reflectCamera->fields)._._._.m_CachedPtr;
                if (pvVar6 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException
                            ((Object *)reflectCamera,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar6);
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
                if (pTVar14 != (Transform *)0x0) {
                  VStack_17.y = fVar39 * fVar37;
                  VStack_17.x = (fVar26 + fVar38 * fVar25 + fVar27 + fVar28) * fVar37;
                  VStack_17.z = fVar24;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar6 = (pTVar14->fields)._._.m_CachedPtr;
                  if (pvVar6 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pcVar7 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pcRam_? = pcVar7;
                  (*pcRam_?)(pvVar6);
                  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)cam,(MethodInfo *)0x0);
                  if (pTVar14 != (Transform *)0x0) {
                    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_eulerAngles
                                        ((Vector3 *)&VStack_5,pTVar14,(MethodInfo *)0x0);
                    uVar47 = pVVar16->x;
                    uVar48 = pVVar16->y;
                    fVar18 = pVVar16->z;
                    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
                    if (pTVar14 != (Transform *)0x0) {
                      VStack_17.y = (float)uVar48;
                      VStack_17.x = (float)(uVar47 ^ _UNK_?);
                      VStack_17.z = fVar18;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                                (pTVar14,(Vector3 *)&VStack_17,(MethodInfo *)0x0);
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render
                                (reflectCamera,(MethodInfo *)0x0);
                      pcVar7 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0))
                      {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pcRam_? = pcVar7;
                      (*pcRam_?)(0);
                      return;
                    }
                    goto code_?;
                  }
                }
                FUN_?();
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            goto code_?;
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SaneCameraSettings(Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_SaneCameraSettings
               (PlanarReflection *this,Camera *helperCam,MethodInfo *method)

{
  if (helperCam == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (helperCam->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)helperCam,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar2);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (helperCam->fields)._._._.m_CachedPtr;
  if (pvVar2 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar2);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (helperCam->fields)._._._.m_CachedPtr;
    if (pvVar2 != (void *)0x0) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar2);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (helperCam->fields)._._._.m_CachedPtr;
      if (pvVar2 != (void *)0x0) {
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar2,1);
        return;
      }
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)helperCam,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetStandardCameraParameter(Camera, LayerMask) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_SetStandardCameraParameter
               (PlanarReflection *this,Camera *cam,LayerMask mask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Water);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Water,(MethodInfo *)0x0);
  if (cam == (Camera *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (cam,mask.m_Mask & ~(1 << (uVar1 & 0x1f)),(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (cam->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)cam,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar3);
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)cam,0,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_Start
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (this->fields).sharedMaterial = (Material *)pOVar1[2].klass;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).sharedMaterial >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void WaterTileBeingRendered(Transform, Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_WaterTileBeingRendered
               (PlanarReflection *this,Transform *tr,Camera *currentCam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PlanarReflection_RenderHelpCameras(this,currentCam,(MethodInfo *)0x0);
  pCVar1 = (this->fields).reflectionCamera;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pMVar2 = (this->fields).sharedMaterial;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar2 != (Material *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pMVar2->fields)._.m_CachedPtr != (void *)0x0) {
          pCVar1 = (this->fields).reflectionCamera;
          pMVar2 = (this->fields).sharedMaterial;
          name = (this->fields).reflectionSampler;
          if ((pCVar1 != (Camera *)0x0) &&
             (value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                                (pCVar1,(MethodInfo *)0x0), pMVar2 != (Material *)0x0)) {
            name_00 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                (name,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                      (pMVar2,name_00,(Texture *)value,(MethodInfo *)0x0);
            return;
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  return;
}


/* PlanarReflection() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection__ctor
               (PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ReflectionTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  bVar2 = iRam_? != 0;
  uVar3 = _UNK_?;
  (this->fields).clearColor.r = (float)_UNK_?;
  uVar4 = _UNK_?;
  (this->fields).clearColor.g = (float)uVar3;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar3 = _UNK_?;
  (this->fields).clearColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (this->fields).clearColor.a = (float)uVar3;
  (this->fields).reflectionSampler = StringLiteral__ReflectionTex;
  if (bVar2) {
    uVar5 = (uint)((ulonglong)&(this->fields).reflectionSampler >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar7 == *puVar8;
      if (bVar2) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar2 = cRam_? == '\0';
  (this->fields).clipPlaneOffset = 0.07;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar9->zeroVector).y;
  fVar11 = (pVVar9->zeroVector).z;
  (this->fields).oldpos.x = (pVVar9->zeroVector).x;
  (this->fields).oldpos.y = fVar10;
  (this->fields).oldpos.z = fVar11;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar12 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar13 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar14 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar15 = ppMVar13;
  if (lVar14 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar14 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar15;
      LOCK();
      bVar2 = uVar5 != uRam_?;
      uVar16 = uVar5;
      uVar17 = uVar5 + 1;
      if (bVar2) {
        uVar16 = uRam_?;
        uVar17 = uRam_?;
      }
      uRam_? = uVar17;
      UNLOCK();
    } while ((bVar2) && (ppMVar15 = (MethodInfo **)(ulonglong)uVar16, uVar5 = uVar16, uVar16 != 2)
            );
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar14;
  puVar18 = &(pOVar12->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar18 == 1;
  if (bVar2) {
    *(undefined4 *)puVar18 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar19 = &(pOVar12->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar19 == 1;
  if (bVar2) {
    *puVar19 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar5 = GetCurrentThreadId();
    psVar20 = &(pOVar12->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar5 == *psVar20;
    if (bVar2) {
      *psVar20 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar18 = &(pOVar12->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar18 == 1;
      if (bVar2) {
        *(undefined4 *)puVar18 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar14._0_4_ = (pOVar12->_1).initializationExceptionGCHandle;
      lVar14._4_4_ = (pOVar12->_1).cctor_started;
      if (lVar14 == 0) {
        (pOVar12->_1).initializationExceptionGCHandle = 0;
        (pOVar12->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar14 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar21._0_4_ = (pOVar12->_1).initializationExceptionGCHandle;
    lVar21._4_4_ = (pOVar12->_1).cctor_started;
    if (lVar21 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pOVar12->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pOVar12->_1).cctor_finished_or_no_cctor = 1;
    uVar5 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar12->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar12);
      ppMVar15 = ppMVar13;
      pIVar22 = (Il2CppClass *)pOVar12;
code_?:
      do {
        if (ppMVar15 == (MethodInfo **)0x0) {
          FUN_?(pIVar22);
          if (pIVar22->field_count != 0) {
            ppMVar15 = pIVar22->methods;
            pMVar23 = *ppMVar15;
code_?:
            if (pMVar23 != (MethodInfo *)0x0) {
              if ((*pMVar23->name == '.') && ((pMVar23->flags & 0x800) != 0)) {
                ppMVar24 = ppMVar13;
                while (ppMVar25 = ppMVar24 + 0x30529dd4,
                      ppMVar24 = (MethodInfo **)((longlong)ppMVar24 + 1),
                      *(char *)ppMVar25 == (pMVar23->name + -1)[(longlong)ppMVar24]) {
                  if (ppMVar24 == (MethodInfo **)0x7) {
                    FUN_?(pMVar23,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar15 = ppMVar15 + 1;
          if (ppMVar15 < pIVar22->methods + pIVar22->field_count) {
            pMVar23 = *ppMVar15;
            goto code_?;
          }
        }
        pIVar22 = pIVar22->parent;
        ppMVar15 = ppMVar13;
      } while (pIVar22 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar12->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar1 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar12->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_26 = 0;
    uStack_27 = _UNK_?;
    uStack_28 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar12->_0).byval_arg,0,0);
    pppppppuVar21 = &pppppppuStack_78;
    if (0xf < uStack_28) {
      pppppppuVar21 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar21);
    if (uStack_28 < 0x10) {
code_?:
      lVar14 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar21 = apppppppuStack_58;
      if (0xf < uStack_29) {
        pppppppuVar21 = apppppppuStack_58[0];
      }
      uStack_27 = uVar1;
      uStack_28 = uVar6;
      lVar21 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar21);
      if (lVar14 != 0) {
        *(longlong *)(lVar21 + 0x28U) = lVar14;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar21 + 0x28U >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar8;
            LOCK();
            uVar6 = *puVar8;
            if (uVar7 == uVar6) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar6);
        }
      }
      FUN_?(pOVar12,lVar21);
      if (0xf < uStack_29) {
        pppppppuVar21 = apppppppuStack_58[0];
        if ((0xfff < uStack_29 + 1) &&
           (pppppppuVar21 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar21))))
        goto code_?;
        func_?(pppppppuVar21);
      }
      goto code_?;
    }
    pppppppuVar21 = pppppppuStack_78;
    if ((uStack_28 + 1 < 0x1000) ||
       (pppppppuVar21 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar21)) < 0x20)) {
      func_?(pppppppuVar21);
      uVar1 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar1._0_4_ = (pOVar12->_1).initializationExceptionGCHandle;
  uVar1._4_4_ = (pOVar12->_1).cctor_started;
  uVar1 = FUN_?(uVar1);
  FUN_?(uVar1,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Single sgn(Single) */

float Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_sgn
                (float a,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if ((a <= 0.0) && (fVar1 = 0.0, a < 0.0)) {
    return _UNK_?;
  }
  return fVar1;
}

