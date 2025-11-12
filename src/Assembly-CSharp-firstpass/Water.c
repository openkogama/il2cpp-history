
/* Void CalculateObliqueMatrix(Matrix4x4 ByRef, Vector4) */

void Assembly-CSharp-firstpass.dll::Water::Water_CalculateObliqueMatrix
               (Matrix4x4 *projection,Vector4 *clipPlane,MethodInfo *method)

{
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     (aMStack_2,projection,(MethodInfo *)0x0);
  fStackX_10 = 0.0;
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
    fStackX_10 = _UNK_?;
  }
  else if (clipPlane->y < 0.0) {
    fStackX_10 = _UNK_?;
  }
  fVar3 = clipPlane->y;
  fVar4 = clipPlane->z;
  fVar5 = clipPlane->w;
  fVar6 = TypeRef__System__Activator__T._0_4_ /
          ((pMVar1->m11 * fStackX_10 + pMVar1->m10 * fStackX_8 + pMVar1->m12 + pMVar1->m13) * fVar3
           + (pMVar1->m01 * fStackX_10 + pMVar1->m00 * fStackX_8 + pMVar1->m02 + pMVar1->m03) *
             clipPlane->x +
           (pMVar1->m21 * fStackX_10 + pMVar1->m20 * fStackX_8 + pMVar1->m22 + pMVar1->m23) * fVar4
          + (pMVar1->m31 * fStackX_10 + pMVar1->m30 * fStackX_8 + pMVar1->m32 + pMVar1->m33) * fVar5
          );
  projection->m20 = clipPlane->x * fVar6 - projection->m30;
  projection->m21 = fVar3 * fVar6 - projection->m31;
  projection->m22 = fVar4 * fVar6 - projection->m32;
  projection->m23 = fVar5 * fVar6 - projection->m33;
  return;
}


/* Void CalculateReflectionMatrix(Matrix4x4 ByRef, Vector4) */

void Assembly-CSharp-firstpass.dll::Water::Water_CalculateReflectionMatrix
               (Matrix4x4 *reflectionMat,Vector4 *plane,MethodInfo *method)

{
  fVar1 = _UNK_?;
  reflectionMat->m00 = _UNK_? - (plane->x + plane->x) * plane->x;
  fVar2 = MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
          ._0_4_;
  reflectionMat->m01 =
       plane->x *
       MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
       ._0_4_ * plane->y;
  reflectionMat->m02 = plane->x * fVar2 * plane->z;
  reflectionMat->m03 = plane->w * fVar2 * plane->x;
  reflectionMat->m10 = plane->y * fVar2 * plane->x;
  reflectionMat->m11 = fVar1 - (plane->y + plane->y) * plane->y;
  reflectionMat->m12 = plane->y * fVar2 * plane->z;
  reflectionMat->m13 = plane->w * fVar2 * plane->y;
  reflectionMat->m20 = plane->z * fVar2 * plane->x;
  reflectionMat->m21 = plane->z * fVar2 * plane->y;
  reflectionMat->m22 = fVar1 - (plane->z + plane->z) * plane->z;
  fVar1 = plane->w;
  reflectionMat->m30 = 0.0;
  reflectionMat->m31 = 0.0;
  reflectionMat->m32 = 0.0;
  fVar3 = plane->z;
  reflectionMat->m33 = 1.0;
  reflectionMat->m23 = fVar1 * fVar2 * fVar3;
  return;
}


/* Vector4 CameraSpacePlane(Camera, Vector3, Vector3, Single) */

Vector4 * Assembly-CSharp-firstpass.dll::Water::Water_CameraSpacePlane
                    (Vector4 *__return_storage_ptr__,Water *this,Camera *cam,Vector3 *pos,
                    Vector3 *normal,float sideSign,MethodInfo *method)

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


/* Void CreateWaterObjects(Camera, Camera ByRef, Camera ByRef) */

void Assembly-CSharp-firstpass.dll::Water::Water_CreateWaterObjects
               (Water *this,Camera *currentCamera,Camera **reflectionCamera,
               Camera **refractionCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__UnityEngine__Camera);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Camera);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
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
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__UnityEngine__Skybox);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Water_Refl_Camera_id);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___WaterReflection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__for_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  lVar2 = 0x20;
  if ((this->fields).hardwareWaterSupport < (this->fields).waterMode) {
    lVar2 = 0x40;
  }
  pCVar3 = (Camera *)0x0;
  iVar4 = *(int *)((longlong)&this->klass + lVar2);
  *reflectionCamera = (Camera *)0x0;
  if (iVar1 != 0) {
    uVar5 = (uint)((ulonglong)reflectionCamera >> 0xc);
    lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar7 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar8);
  }
  *refractionCamera = (Camera *)0x0;
  if (iVar1 != 0) {
    uVar5 = (uint)((ulonglong)refractionCamera >> 0xc);
    lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar7 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if (iVar4 < 1) {
    return;
  }
  pRVar9 = (this->fields).reflectionTexture;
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
  if (pRVar9 == (RenderTexture *)0x0) {
code_?:
    pRVar9 = (this->fields).reflectionTexture;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pRVar9,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      pRVar9 = (this->fields).reflectionTexture;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DestroyImmediate_1
                ((Object_1 *)pRVar9,(MethodInfo *)0x0);
    }
    iVar11 = (this->fields).textureSize;
    pRVar9 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
              (pRVar9,iVar11,iVar11,0x10,RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
    bVar8 = iRam_? != 0;
    (this->fields).reflectionTexture = pRVar9;
    if (bVar8) {
      uVar5 = (uint)((ulonglong)&(this->fields).reflectionTexture >> 0xc);
      lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar7 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pRVar9 = (this->fields).reflectionTexture;
    iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_12._pointer._value = (void *)0x0;
    RStack_12._8_8_ = 0;
    pSVar13 = mscorlib.dll::System::Number::Number_FormatInt32
                        (iVar11,&RStack_12,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar13 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral___WaterReflection,pSVar13,(MethodInfo *)0x0);
    if ((pRVar9 == (RenderTexture *)0x0) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                  ((Object_1 *)pRVar9,pSVar13,(MethodInfo *)0x0),
       (this->fields).reflectionTexture == (RenderTexture *)0x0)) goto DAT_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)(this->fields).reflectionTexture,HideFlags__Enum_DontSave,
               (MethodInfo *)0x0);
    (this->fields).oldReflectionTextureSize = (this->fields).textureSize;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (((pRVar9->fields)._._.m_CachedPtr == (void *)0x0) ||
       ((this->fields).oldReflectionTextureSize != (this->fields).textureSize))
    goto code_?;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).reflectionCameras;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)currentCamera,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar11) {
      pDVar14 = (this->fields).reflectionCameras;
      if (pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto DAT_?;
      pCVar15 = (Camera *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar14,(Object *)currentCamera,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      pCVar16 = pCVar3;
      if ((pCVar15 != (Camera *)0x0) && (pCVar15->klass == TypeInfo__UnityEngine__Camera)) {
        pCVar16 = pCVar15;
      }
      bVar8 = iRam_? != 0;
      *reflectionCamera = pCVar16;
      if (bVar8) {
        uVar5 = (uint)((ulonglong)reflectionCamera >> 0xc);
        lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar7 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    pCVar16 = *reflectionCamera;
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
    if (pCVar16 != (Camera *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pCVar16->fields)._._._.m_CachedPtr != (void *)0x0) {
        return;
      }
    }
    aIStackX_8[0].m_value =
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                   ((Object_1 *)this,(MethodInfo *)0x0);
    pSVar13 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    if (currentCamera != (Camera *)0x0) {
      aIStackX_8[0].m_value =
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                     ((Object_1 *)currentCamera,(MethodInfo *)0x0);
      str3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
      pSVar13 = mscorlib.dll::System::String::String_Concat_6
                          (StringLiteral_Water_Refl_Camera_id,pSVar13,StringLiteral__for_,str3,
                           (MethodInfo *)0x0);
      components = (Type__Array *)FUN_?(TypeInfo__System__Type,2);
      pIVar17 = TypeRef__UnityEngine__Camera;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pCVar16 = pCVar3;
      if (pIVar17 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar2 = FUN_?(pIVar17,1);
        pCVar16 = (Camera *)FUN_?(lVar2 + 0x20);
      }
      if (components != (Type__Array *)0x0) {
        if ((pCVar16 != (Camera *)0x0) &&
           (lVar2 = FUN_?(pCVar16,(components->klass->_0).element_class), lVar2 == 0)) {
          uVar18 = FUN_?();
          FUN_?(uVar18,0);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        FUN_?(components,0,pCVar16);
        pIVar17 = TypeRef__UnityEngine__Skybox;
        if (TypeRef__UnityEngine__Skybox != (Il2CppType *)0x0) {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          lVar2 = FUN_?(pIVar17,1);
          pCVar3 = (Camera *)FUN_?(lVar2 + 0x20);
          if ((pCVar3 != (Camera *)0x0) &&
             (lVar2 = FUN_?(pCVar3,(components->klass->_0).element_class), lVar2 == 0)) {
            uVar18 = FUN_?();
            FUN_?(uVar18,0);
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
        }
        FUN_?(components,1,pCVar3);
        this_01 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
        uVar18 = 0;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_2
                  (this_01,pSVar13,components,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          pCVar3 = (Camera *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (this_01,
                               UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                              );
          bVar8 = iRam_? != 0;
          *reflectionCamera = pCVar3;
          if (bVar8) {
            uVar5 = (uint)((ulonglong)reflectionCamera >> 0xc);
            lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
              puVar7 = (ulonglong *)(lVar2 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          pCVar3 = *reflectionCamera;
          if (pCVar3 != (Camera *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar20 = (pCVar3->fields)._._._.m_CachedPtr;
            if (pvVar20 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar3,(MethodInfo *)0x0);
              pcVar19 = (code *)swi(3);
              (*pcVar19)();
              return;
            }
            pcVar19 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar19 = (code *)swi(3);
              (*pcVar19)();
              return;
            }
            pcRam_? = pcVar19;
            (*pcRam_?)(pvVar20);
            pCVar3 = *reflectionCamera;
            if (pCVar3 != (Camera *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar20 = (pCVar3->fields)._._._.m_CachedPtr;
              if (pvVar20 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar3,(MethodInfo *)0x0);
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
              pcVar19 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                uVar18 = func_?(&UNK_?);
                FUN_?(uVar18,0);
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
              pcRam_? = pcVar19;
              pvVar20 = (void *)(*pcRam_?)(pvVar20);
              pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar20,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar22 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar20 = (pTVar22->fields)._._.m_CachedPtr;
                if (pvVar20 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar22,(MethodInfo *)0x0);
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
                pcVar19 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                  uVar18 = func_?(&UNK_?);
                  FUN_?(uVar18,0);
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
                pcRam_? = pcVar19;
                (*pcRam_?)(pvVar20);
                if (pOVar21 != (Object *)0x0) {
                  RStack_12._pointer._value = (void *)0x0;
                  RStack_12._8_8_ = RStack_12._8_8_ & 0xffffffff00000000;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pOVar23 = pOVar21[1].klass;
                  if (pOVar23 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(pOVar21,(MethodInfo *)0x0);
                    pcVar19 = (code *)swi(3);
                    (*pcVar19)();
                    return;
                  }
                  pcVar19 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                    uVar18 = func_?(&UNK_?);
                    FUN_?(uVar18,0);
                    pcVar19 = (code *)swi(3);
                    (*pcVar19)();
                    return;
                  }
                  pcRam_? = pcVar19;
                  (*pcRam_?)(pOVar23);
                  pCVar3 = *reflectionCamera;
                  if (pCVar3 != (Camera *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar20 = (pCVar3->fields)._._._.m_CachedPtr;
                    if (pvVar20 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar3,(MethodInfo *)0x0)
                      ;
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcVar19 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                      uVar18 = func_?(&UNK_?);
                      FUN_?(uVar18,0);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcRam_? = pcVar19;
                    pvVar20 = (void *)(*pcRam_?)(pvVar20);
                    pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                              Unmarshal_UnmarshalUnityObject
                                        (pvVar20,
                                         UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                        );
                    pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if (pTVar22 != (Transform *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar20 = (pTVar22->fields)._._.m_CachedPtr;
                      if (pvVar20 != (void *)0x0) {
                        pcVar19 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)
                           ) {
                          uVar18 = func_?(&UNK_?);
                          FUN_?(uVar18,0);
                          pcVar19 = (code *)swi(3);
                          (*pcVar19)();
                          return;
                        }
                        pcRam_? = pcVar19;
                        (*pcRam_?)(pvVar20);
                        if (pOVar21 != (Object *)0x0) {
                          uStack_24 = 0;
                          uStack_25 = 0;
                          uStack_26 = 0;
                          uStack_27 = 0;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar23 = pOVar21[1].klass;
                          if (pOVar23 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar21,(MethodInfo *)0x0);
                            pcVar19 = (code *)swi(3);
                            (*pcVar19)();
                            return;
                          }
                          pcVar19 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar19 = (code *)FUN_?(&UNK_?),
                             pcVar19 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar19 = (code *)swi(3);
                            (*pcVar19)();
                            return;
                          }
                          pcRam_? = pcVar19;
                          (*pcRam_?)(pOVar23,&uStack_24);
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                                    ((Object_1 *)this_01,HideFlags__Enum_HideAndDontSave,
                                     (MethodInfo *)0x0);
                          pDVar14 = (this->fields).reflectionCameras;
                          if (pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__TryInsert
                                      (pDVar14,(Object *)currentCamera,(Object *)*reflectionCamera,
                                       (InsertionBehavior__Enum)
                                       CONCAT71((int7)((ulonglong)uVar18 >> 8),1),
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                       ->klass->rgctx_data[0x22].method);
                            return;
                          }
                        }
                        FUN_?();
                        pcVar19 = (code *)swi(3);
                        (*pcVar19)();
                        return;
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar22,(MethodInfo *)0x0)
                      ;
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                  }
                }
                FUN_?();
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Water+WaterMode FindHardwareWaterSupport() */

Water_WaterMode__Enum
Assembly-CSharp-firstpass.dll::Water::Water_FindHardwareWaterSupport(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WATERMODE);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Reflective);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Refractive);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).meshRenderer;
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
  if (pRVar1 != (Renderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar1 = (this->fields).meshRenderer;
      if (pRVar1 == (Renderer *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        WVar3 = (*pcVar2)();
        return WVar3;
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                          (pRVar1,(MethodInfo *)0x0);
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
      if (this_00 != (Material *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar4 = StringLiteral_WATERMODE;
        if ((this_00->fields)._.m_CachedPtr != (void *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&::StringLiteral__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTagImpl
                             (this_00,pSVar4,1,::StringLiteral__,(MethodInfo *)0x0);
          if (pSVar4 != StringLiteral_Reflective) {
            if ((((pSVar4 != (String *)0x0) && (StringLiteral_Reflective != (String *)0x0)) &&
                ((pSVar4->fields)._stringLength == (StringLiteral_Reflective->fields)._stringLength)
                ) && (bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                        ((uint8_t *)&(pSVar4->fields)._firstChar,
                                         (uint8_t *)&(StringLiteral_Reflective->fields)._firstChar,
                                         (longlong)(pSVar4->fields)._stringLength * 2,
                                         (MethodInfo *)0x0), bVar5 != 0)) {
              return Water_WaterMode__Enum_Reflective;
            }
            if (pSVar4 != StringLiteral_Refractive) {
              if (((pSVar4 != (String *)0x0) && (StringLiteral_Refractive != (String *)0x0)) &&
                 ((pSVar4->fields)._stringLength == (StringLiteral_Refractive->fields)._stringLength
                 )) {
                bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar4->fields)._firstChar,
                                   (uint8_t *)&(StringLiteral_Refractive->fields)._firstChar,
                                   (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0);
                return (Water_WaterMode__Enum)(bVar5 != 0);
              }
              return Water_WaterMode__Enum_Simple;
            }
          }
          return Water_WaterMode__Enum_Reflective;
        }
      }
    }
  }
  return Water_WaterMode__Enum_Simple;
}


/* Water+WaterMode GetWaterMode() */

Water_WaterMode__Enum
Assembly-CSharp-firstpass.dll::Water::Water_GetWaterMode(Water *this,MethodInfo *method)

{
  WVar1 = (this->fields).waterMode;
  if ((this->fields).hardwareWaterSupport < (int)WVar1) {
    WVar1 = (this->fields).hardwareWaterSupport;
  }
  return WVar1;
}


/* Boolean IsNanCheck(Vector3) */

bool Assembly-CSharp-firstpass.dll::Water::Water_IsNanCheck
               (Water *this,Vector3 *v,MethodInfo *method)

{
  if (((uint)ABS(v->x) < 0x7f800001) && ((uint)ABS(v->y) < 0x7f800001)) {
    return 0x7f800000 < (uint)ABS(v->z);
  }
  return 1;
}


/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::Water::Water_OnDisable(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Camera);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).reflectionTexture;
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
  if (pRVar1 == (RenderTexture *)0x0) {
    bVar2 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = (pRVar1->fields)._._.m_CachedPtr != (void *)0x0;
  }
  if (bVar2) {
    this_00 = (this->fields).reflectionTexture;
    if (this_00 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
              (this_00,(MethodInfo *)0x0);
    (this->fields).reflectionTexture = (RenderTexture *)0x0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields).reflectionTexture >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  pDVar7 = (this->fields).reflectionCameras;
  if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pDStack_8 >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_9 = (ulonglong)(uint)(pDVar7->fields)._version;
    uStack_10 = 2;
    uStack_11 = 0;
    uStack_12 = 0;
    DStack_13._version = (undefined4)uStack_9;
    DStack_13._index = uStack_9._4_4_;
    DStack_13._current.key = (Object *)0x0;
    DStack_13._current.value = (Object *)0x0;
    DStack_13._getEnumeratorRetType = 2;
    DStack_13._36_4_ = 0;
    pDStack_8 = pDVar7;
    DStack_13._dictionary = pDVar7;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_13,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             ), bVar14 != 0) {
      if ((RenderTexture *)DStack_13._current.value == (RenderTexture *)0x0)
      goto code_?;
      pRVar1 = (RenderTexture *)0x0;
      if ((RenderTexture__Class *)(DStack_13._current.value)->klass ==
          (RenderTexture__Class *)TypeInfo__UnityEngine__Camera) {
        pRVar1 = (RenderTexture *)DStack_13._current.value;
      }
      if (pRVar1 == (RenderTexture *)0x0) goto code_?;
      pRVar1 = (RenderTexture *)0x0;
      if ((RenderTexture__Class *)(DStack_13._current.value)->klass ==
          (RenderTexture__Class *)TypeInfo__UnityEngine__Camera) {
        pRVar1 = (RenderTexture *)DStack_13._current.value;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar15 = (pRVar1->fields)._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) goto code_?;
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar16;
      pvVar15 = (void *)(*pcRam_?)(pvVar15);
      pRVar1 = (RenderTexture *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar15,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pRVar1,0.0,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).reflectionCameras;
    if (this_01 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
      return;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar17 = func_?(&UNK_?);
  FUN_?(uVar17);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnWillRenderObject() */

void Assembly-CSharp-firstpass.dll::Water::Water_OnWillRenderObject(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Water);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WATER_REFLECTIVE);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WATER_REFRACTIVE);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ReflectionTex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WATER_SIMPLE);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apCStack_1[0] = (Camera *)0x0;
  apCStack_2[0] = (Camera *)0x0;
  MStack_3.m00 = 0.0;
  MStack_3.m10 = 0.0;
  MStack_3.m20 = 0.0;
  MStack_3.m30 = 0.0;
  MStack_3.m01 = 0.0;
  MStack_3.m11 = 0.0;
  MStack_3.m21 = 0.0;
  MStack_3.m31 = 0.0;
  MStack_3.m02 = 0.0;
  MStack_3.m12 = 0.0;
  MStack_3.m22 = 0.0;
  MStack_3.m32 = 0.0;
  MStack_3.m03 = 0.0;
  MStack_3.m13 = 0.0;
  MStack_3.m23 = 0.0;
  MStack_3.m33 = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Water *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar5 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  cVar7 = (*pcRam_?)(pvVar5);
  if (cVar7 != '\0') {
    pRVar8 = (this->fields).meshRenderer;
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
    if (pRVar8 != (Renderer *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pRVar8->fields)._._.m_CachedPtr != (void *)0x0) {
        pRVar8 = (this->fields).meshRenderer;
        if (pRVar8 != (Renderer *)0x0) {
          pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                              (pRVar8,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                             ((Object_1 *)pMVar9,(MethodInfo *)0x0);
          if (bVar10 == 0) {
            return;
          }
          pRVar8 = (this->fields).meshRenderer;
          if (pRVar8 != (Renderer *)0x0) {
            bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                               (pRVar8,(MethodInfo *)0x0);
            if (bVar10 == 0) {
              return;
            }
            currentCamera =
                 UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_currentInternal
                           ((MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                               ((Object_1 *)currentCamera,(MethodInfo *)0x0);
            if (bVar10 == 0) {
              return;
            }
            if (TypeInfo__Water->static_fields->InsideWater != 0) {
              return;
            }
            TypeInfo__Water->static_fields->InsideWater = 1;
            WVar11 = Water_FindHardwareWaterSupport(this,(MethodInfo *)0x0);
            (this->fields).hardwareWaterSupport = WVar11;
            if ((this->fields).waterMode <= (int)WVar11) {
              WVar11 = (this->fields).waterMode;
            }
            Water_CreateWaterObjects(this,currentCamera,apCStack_1,apCStack_2,(MethodInfo *)0x0)
            ;
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar12 != (Transform *)0x0) {
              pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_14,pTVar12,(MethodInfo *)0x0);
              VStack_15.x = pVVar13->x;
              VStack_15.y = pVVar13->y;
              fVar16 = pVVar13->z;
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar12 != (Transform *)0x0) {
                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    (&VStack_14,pTVar12,(MethodInfo *)0x0);
                VStack_17.x = pVVar13->x;
                VStack_17.y = pVVar13->y;
                fVar18 = pVVar13->z;
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(), pcVar4 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar4;
                value = (*pcRam_?)();
                if ((this->fields).disablePixelLights != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
                  QualitySettings_set_pixelLightCount(0,(MethodInfo *)0x0);
                }
                Water_UpdateCameraModes(this,currentCamera,apCStack_1[0],(MethodInfo *)0x0);
                Water_UpdateCameraModes(this,currentCamera,apCStack_2[0],(MethodInfo *)0x0);
                if (((int)WVar11 < 1) || ((this->fields).isCameraAboveWater == 0)) {
code_?:
                  if ((this->fields).disablePixelLights != 0) {
                    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
                    QualitySettings_set_pixelLightCount(value,(MethodInfo *)0x0);
                  }
                  if (((int)WVar11 < 1) || ((this->fields).isCameraAboveWater == 0)) {
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
                fVar19 = VStack_17.y;
                fVar20 = VStack_17.x;
                fVar21 = (float)((uint)(VStack_15.y * VStack_17.y + VStack_15.x * VStack_17.x +
                                       fVar16 * fVar18) ^ _UNK_?) -
                         (this->fields).clipPlaneOffset;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Matrix4x4);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                fVar22 = _UNK_? - (fVar20 + fVar20) * fVar20;
                fVar23 = fVar20 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                 ._0_4_ * fVar19;
                fVar24 = fVar20 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                 ._0_4_ * fVar18;
                fVar25 = fVar21 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                  ._0_4_ * fVar20;
                fVar26 = fVar19 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                 ._0_4_ * fVar20;
                MStack_3.m10 = fVar26;
                MStack_3.m00 = fVar22;
                fVar27 = _UNK_? - (fVar19 + fVar19) * fVar19;
                MStack_3.m11 = fVar27;
                MStack_3.m01 = fVar23;
                fVar28 = fVar19 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                 ._0_4_ * fVar18;
                MStack_3.m12 = fVar28;
                MStack_3.m02 = fVar24;
                fVar29 = fVar21 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                  ._0_4_ * fVar19;
                MStack_3.m13 = fVar29;
                MStack_3.m03 = fVar25;
                fStack_30 = fVar18 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                      ._0_4_ * fVar20;
                fStack_31 = fVar18 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                      ._0_4_ * fVar19;
                fStack_32 = _UNK_? - (fVar18 + fVar18) * fVar18;
                MStack_3.m30 = 0.0;
                MStack_3.m20 = fStack_30;
                MStack_3.m31 = 0.0;
                MStack_3.m21 = fStack_31;
                MStack_3.m32 = 0.0;
                MStack_3.m22 = fStack_32;
                fVar21 = fVar21 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                                  ._0_4_ * fVar18;
                MStack_3.m33 = 1.0;
                MStack_3.m23 = fVar21;
                if ((currentCamera != (Camera *)0x0) &&
                   (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)currentCamera,(MethodInfo *)0x0),
                   pTVar12 != (Transform *)0x0)) {
                  pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_33,pTVar12,(MethodInfo *)0x0);
                  pCVar34 = apCStack_1[0];
                  VStack_17.x = pVVar13->x;
                  VStack_17.y = pVVar13->y;
                  fVar35 = pVVar13->z;
                  fStack_36 = pVVar13->z;
                  fVar37 = _UNK_? /
                           (VStack_17.y * 0.0 + VStack_17.x * 0.0 + fVar35 * 0.0 + _UNK_?);
                  fVar23 = VStack_17.y * fVar23;
                  fVar22 = VStack_17.x * fVar22;
                  fStack_38 = (VStack_17.y * fVar27 + VStack_17.x * fVar26 + fVar35 * fVar28 +
                               fVar29) * fVar37;
                  VStack_39.y = VStack_17.y;
                  VStack_39.x = (VStack_17.y * fStack_31 + VStack_17.x * fStack_30 +
                                  fVar35 * fStack_32 + fVar21) * fVar37;
                  VStack_14._0_8_ = VStack_17._0_8_;
                  pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_get_worldToCameraMatrix
                                      (aMStack_41,currentCamera,(MethodInfo *)0x0);
                  MStack_42.m00 = MStack_3.m00;
                  MStack_42.m10 = MStack_3.m10;
                  MStack_42.m20 = MStack_3.m20;
                  MStack_42.m30 = MStack_3.m30;
                  MStack_42.m01 = MStack_3.m01;
                  MStack_42.m11 = MStack_3.m11;
                  MStack_42.m21 = MStack_3.m21;
                  MStack_42.m31 = MStack_3.m31;
                  MStack_42.m02 = MStack_3.m02;
                  MStack_42.m12 = MStack_3.m12;
                  MStack_42.m22 = MStack_3.m22;
                  MStack_42.m32 = MStack_3.m32;
                  MStack_3.m00 = pMVar40->m00;
                  MStack_3.m10 = pMVar40->m10;
                  MStack_3.m20 = pMVar40->m20;
                  MStack_3.m30 = pMVar40->m30;
                  MStack_42.m03 = MStack_3.m03;
                  MStack_42.m13 = MStack_3.m13;
                  MStack_42.m23 = MStack_3.m23;
                  MStack_42.m33 = MStack_3.m33;
                  MStack_3.m01 = pMVar40->m01;
                  MStack_3.m11 = pMVar40->m11;
                  MStack_3.m21 = pMVar40->m21;
                  MStack_3.m31 = pMVar40->m31;
                  MStack_3.m02 = pMVar40->m02;
                  MStack_3.m12 = pMVar40->m12;
                  MStack_3.m22 = pMVar40->m22;
                  MStack_3.m32 = pMVar40->m32;
                  MStack_3.m03 = pMVar40->m03;
                  MStack_3.m13 = pMVar40->m13;
                  MStack_3.m23 = pMVar40->m23;
                  MStack_3.m33 = pMVar40->m33;
                  pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                            Matrix4x4_op_Multiply
                                      (aMStack_41,&MStack_3,&MStack_42,(MethodInfo *)0x0);
                  if (pCVar34 == (Camera *)0x0) {
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  MStack_42.m00 = pMVar40->m00;
                  MStack_42.m10 = pMVar40->m10;
                  MStack_42.m20 = pMVar40->m20;
                  MStack_42.m30 = pMVar40->m30;
                  MStack_42.m01 = pMVar40->m01;
                  MStack_42.m11 = pMVar40->m11;
                  MStack_42.m21 = pMVar40->m21;
                  MStack_42.m31 = pMVar40->m31;
                  MStack_42.m02 = pMVar40->m02;
                  MStack_42.m12 = pMVar40->m12;
                  MStack_42.m22 = pMVar40->m22;
                  MStack_42.m32 = pMVar40->m32;
                  MStack_42.m03 = pMVar40->m03;
                  MStack_42.m13 = pMVar40->m13;
                  MStack_42.m23 = pMVar40->m23;
                  MStack_42.m33 = pMVar40->m33;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar5 = (pCVar34->fields)._._._.m_CachedPtr;
                  if (pvVar5 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar34,(MethodInfo *)0x0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcVar4 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                    uVar6 = func_?(&UNK_?);
                    FUN_?(uVar6,0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcRam_? = pcVar4;
                  (*pcRam_?)(pvVar5);
                  pCVar34 = apCStack_1[0];
                  fVar21 = (this->fields).clipPlaneOffset;
                  fVar27 = fVar21 * fVar20 + VStack_15.x;
                  fVar26 = fVar21 * fVar19 + VStack_15.y;
                  fVar16 = fVar21 * fVar18 + fVar16;
                  if (apCStack_1[0] != (Camera *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    MStack_3.m00 = 0.0;
                    MStack_3.m10 = 0.0;
                    MStack_3.m20 = 0.0;
                    MStack_3.m30 = 0.0;
                    MStack_3.m01 = 0.0;
                    MStack_3.m11 = 0.0;
                    MStack_3.m21 = 0.0;
                    MStack_3.m31 = 0.0;
                    MStack_3.m02 = 0.0;
                    MStack_3.m12 = 0.0;
                    MStack_3.m22 = 0.0;
                    MStack_3.m32 = 0.0;
                    MStack_3.m03 = 0.0;
                    MStack_3.m13 = 0.0;
                    MStack_3.m23 = 0.0;
                    MStack_3.m33 = 0.0;
                    pvVar5 = (pCVar34->fields)._._._.m_CachedPtr;
                    if (pvVar5 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar34,(MethodInfo *)0x0);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pcVar4 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                      uVar6 = func_?(&UNK_?);
                      FUN_?(uVar6,0);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pcRam_? = pcVar4;
                    (*pcRam_?)(pvVar5);
                    fVar21 = _UNK_? /
                             (MStack_3.m31 * fVar26 + MStack_3.m30 * fVar27 +
                              MStack_3.m32 * fVar16 + MStack_3.m33);
                    fVar43 = MStack_3.m01 * fVar26 + MStack_3.m00 * fVar27 +
                             MStack_3.m02 * fVar16 + MStack_3.m03;
                    fVar28 = MStack_3.m11 * fVar26 + MStack_3.m10 * fVar27 +
                             MStack_3.m12 * fVar16 + MStack_3.m13;
                    fVar29 = MStack_3.m21 * fVar26 + MStack_3.m20 * fVar27 +
                             MStack_3.m22 * fVar16 + MStack_3.m23;
                    fVar26 = MStack_3.m01 * fVar19 + MStack_3.m00 * fVar20 +
                             MStack_3.m02 * fVar18;
                    fVar27 = MStack_3.m21 * fVar19 + MStack_3.m20 * fVar20 +
                             MStack_3.m22 * fVar18;
                    fVar18 = MStack_3.m11 * fVar19 + MStack_3.m10 * fVar20 +
                             MStack_3.m12 * fVar18;
                    VStack_15.y = fVar18;
                    VStack_15.x = fVar26;
                    VStack_15.z = fVar27;
                    fVar16 = (float)FUN_?(&VStack_15);
                    if (_UNK_? < fVar16) {
                      VStack_33.z = fVar27 / fVar16;
                      VStack_15.y = fVar18 / fVar16;
                      VStack_15.x = fVar26 / fVar16;
                    }
                    else {
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pVVar44 = TypeInfo__UnityEngine__Vector3->static_fields;
                      VStack_15.x = (pVVar44->zeroVector).x;
                      VStack_15.y = (pVVar44->zeroVector).y;
                      VStack_33.z = (pVVar44->zeroVector).z;
                    }
                    uVar45 = _UNK_?;
                    uStack_46 = (uint)(fVar28 * fVar21 * VStack_15.y +
                                        fVar43 * fVar21 * VStack_15.x +
                                       fVar29 * fVar21 * VStack_33.z) ^ _UNK_?;
                    VStack_33.x = VStack_15.x;
                    VStack_33.y = VStack_15.y;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    MStack_3.m00 = 0.0;
                    MStack_3.m10 = 0.0;
                    MStack_3.m20 = 0.0;
                    MStack_3.m30 = 0.0;
                    MStack_3.m01 = 0.0;
                    MStack_3.m11 = 0.0;
                    MStack_3.m21 = 0.0;
                    MStack_3.m31 = 0.0;
                    MStack_3.m02 = 0.0;
                    MStack_3.m12 = 0.0;
                    MStack_3.m22 = 0.0;
                    MStack_3.m32 = 0.0;
                    MStack_3.m03 = 0.0;
                    MStack_3.m13 = 0.0;
                    MStack_3.m23 = 0.0;
                    MStack_3.m33 = 0.0;
                    pvVar5 = (currentCamera->fields)._._._.m_CachedPtr;
                    if (pvVar5 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException
                                ((Object *)currentCamera,(MethodInfo *)0x0);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pcVar4 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                      uVar6 = func_?(&UNK_?);
                      FUN_?(uVar6,0);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pcRam_? = pcVar4;
                    (*pcRam_?)(pvVar5);
                    pCVar34 = apCStack_1[0];
                    if (apCStack_1[0] != (Camera *)0x0) {
                      MStack_42.m00 = MStack_3.m00;
                      MStack_42.m10 = MStack_3.m10;
                      MStack_42.m20 = MStack_3.m20;
                      MStack_42.m30 = MStack_3.m30;
                      MStack_42.m01 = MStack_3.m01;
                      MStack_42.m11 = MStack_3.m11;
                      MStack_42.m21 = MStack_3.m21;
                      MStack_42.m31 = MStack_3.m31;
                      MStack_42.m02 = MStack_3.m02;
                      MStack_42.m12 = MStack_3.m12;
                      MStack_42.m22 = MStack_3.m22;
                      MStack_42.m32 = MStack_3.m32;
                      MStack_42.m03 = MStack_3.m03;
                      MStack_42.m13 = MStack_3.m13;
                      MStack_42.m23 = MStack_3.m23;
                      MStack_42.m33 = MStack_3.m33;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar5 = (pCVar34->fields)._._._.m_CachedPtr;
                      if (pvVar5 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pCVar34,(MethodInfo *)0x0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
                      {
                        uVar6 = func_?(&UNK_?);
                        FUN_?(uVar6,0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcRam_? = pcVar4;
                      (*pcRam_?)(pvVar5);
                      pCVar34 = apCStack_1[0];
                      if (((apCStack_1[0] != (Camera *)0x0) &&
                          (uVar47 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                    Camera_get_cullingMask(apCStack_1[0],(MethodInfo *)0x0),
                          pCVar34 != (Camera *)0x0)) &&
                         (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                    (pCVar34,uVar47 & 0xffffffef,(MethodInfo *)0x0),
                         apCStack_1[0] != (Camera *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                                  (apCStack_1[0],(this->fields).reflectionTexture,
                                   (MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling
                                  (1,(MethodInfo *)0x0);
                        if ((apCStack_1[0] != (Camera *)0x0) &&
                           (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)apCStack_1[0],(MethodInfo *)0x0),
                           pTVar12 != (Transform *)0x0)) {
                          VStack_15.y = fStack_38;
                          VStack_15.x = (fVar23 + fVar22 + fVar35 * fVar24 + fVar25) * fVar37;
                          VStack_15.z = VStack_39.x;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                    (pTVar12,&VStack_15,(MethodInfo *)0x0);
                          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform
                                              ((Component *)currentCamera,(MethodInfo *)0x0);
                          if (pTVar12 != (Transform *)0x0) {
                            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_eulerAngles
                                                (&VStack_33,pTVar12,(MethodInfo *)0x0);
                            VStack_15.x = pVVar13->x;
                            VStack_15.y = pVVar13->y;
                            fVar16 = pVVar13->z;
                            if (apCStack_1[0] != (Camera *)0x0) {
                              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)apCStack_1[0],(MethodInfo *)0x0);
                              uVar6._0_4_ = (float)((uint)VStack_15.x ^ uVar45);
                              if (pTVar12 != (Transform *)0x0) {
                                uVar6._4_4_ = VStack_15.y;
                                VStack_15._0_8_ = uVar6;
                                VStack_15.z = fVar16;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_eulerAngles(pTVar12,&VStack_15,(MethodInfo *)0x0);
                                if (((apCStack_1[0] != (Camera *)0x0) &&
                                    (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render
                                               (apCStack_1[0],(MethodInfo *)0x0),
                                    apCStack_1[0] != (Camera *)0x0)) &&
                                   (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_transform
                                                        ((Component *)apCStack_1[0],
                                                         (MethodInfo *)0x0),
                                   pTVar12 != (Transform *)0x0)) {
                                  VStack_39.z = fStack_36;
                                  VStack_39.x = VStack_17.x;
                                  VStack_39.y = VStack_17.y;
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_position(pTVar12,&VStack_39,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling
                                            (0,(MethodInfo *)0x0);
                                  pRVar8 = (this->fields).meshRenderer;
                                  if ((pRVar8 != (Renderer *)0x0) &&
                                     (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                                Renderer_get_sharedMaterial
                                                          (pRVar8,(MethodInfo *)0x0),
                                     pMVar9 != (Material *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Material::
                                    Material_SetTexture(pMVar9,StringLiteral__ReflectionTex,
                                                        (Texture *)(this->fields).reflectionTexture,
                                                        (MethodInfo *)0x0);
                                    goto code_?;
                                  }
                                }
                              }
                            }
                            FUN_?();
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                        }
                      }
                    }
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
  return;
}


/* Void SetLethal(Boolean) */

void Assembly-CSharp-firstpass.dll::Water::Water_SetLethal
               (Water *this,bool isLethal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__HorizonColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__BumpMap);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshRenderer;
  if (this_00 != (Renderer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (this_00,(MethodInfo *)0x0);
    if (isLethal == 0) {
      pTVar1 = (this->fields).m_WaterBumpTexture;
      if (this_01 == (Material *)0x0) goto code_?;
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__BumpMap,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                (this_01,iVar2,pTVar1,(MethodInfo *)0x0);
      CStack_3.r = (this->fields).m_WaterHorizon.r;
      CStack_3.g = (this->fields).m_WaterHorizon.g;
      CStack_3.b = (this->fields).m_WaterHorizon.b;
      CStack_3.a = (this->fields).m_WaterHorizon.a;
    }
    else {
      pTVar1 = (this->fields).m_LethalBumpTexture;
      if (this_01 == (Material *)0x0) goto code_?;
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__BumpMap,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                (this_01,iVar2,pTVar1,(MethodInfo *)0x0);
      CStack_3.r = (this->fields).m_LethalHorizon.r;
      CStack_3.g = (this->fields).m_LethalHorizon.g;
      CStack_3.b = (this->fields).m_LethalHorizon.b;
      CStack_3.a = (this->fields).m_LethalHorizon.a;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (this_01,StringLiteral__HorizonColor,&CStack_3,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp-firstpass.dll::Water::Water_Update(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WaveSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__WaveScale);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__WaveScale4);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__WaveOffset);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__WaveMatrix);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__WaveMatrix2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).meshRenderer;
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
  if (pRVar1 != (Renderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar1 = (this->fields).meshRenderer;
      if (pRVar1 == (Renderer *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                          (pRVar1,(MethodInfo *)0x0);
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
      if (this_00 != (Material *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._.m_CachedPtr != (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral_WaveSpeed,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Material);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_3.x = 0.0;
          VStack_3.y = 0.0;
          VStack_3.z = 0.0;
          VStack_3.w = 0.0;
          pvVar4 = (this_00->fields)._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar4);
          name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                           (StringLiteral__WaveScale,(MethodInfo *)0x0);
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloatImpl
                             (this_00,name,(MethodInfo *)0x0);
          fVar7 = fVar6 * _UNK_?;
          fVar8 = fVar6 * _UNK_?;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          fVar9 = (float)(*pcRam_?)();
          dVar10 = (double)fVar9 / _UNK_?;
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          y = _UNK_?;
          dVar11 = mscorlib.dll::System::Math::Math_IEEERemainder
                            ((double)(VStack_3.x * fVar6) * dVar10,_UNK_?,
                             (MethodInfo *)0x0);
          dVar12 = mscorlib.dll::System::Math::Math_IEEERemainder
                            ((double)(VStack_3.y * fVar6) * dVar10,y,(MethodInfo *)0x0);
          dVar13 = mscorlib.dll::System::Math::Math_IEEERemainder
                            ((double)(VStack_3.z * fVar7) * dVar10,y,(MethodInfo *)0x0);
          dVar10 = mscorlib.dll::System::Math::Math_IEEERemainder
                            ((double)(VStack_3.w * fVar8) * dVar10,y,(MethodInfo *)0x0);
          VStack_3.y = (float)dVar12;
          VStack_3.x = (float)dVar11;
          VStack_3.w = (float)dVar10;
          VStack_3.z = (float)dVar13;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_00,StringLiteral__WaveOffset,&VStack_3,(MethodInfo *)0x0);
          VStack_3.y = fVar6;
          VStack_3.x = fVar6;
          VStack_3.w = fVar8;
          VStack_3.z = fVar7;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_00,StringLiteral__WaveScale4,&VStack_3,(MethodInfo *)0x0);
          pRVar1 = (this->fields).meshRenderer;
          if (pRVar1 == (Renderer *)0x0) goto DAT_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_14 = 0;
          uStack_15 = 0;
          uStack_16 = 0;
          pvVar4 = (pRVar1->fields)._._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar4,&uStack_14);
          fVar9 = _UNK_?;
          fVar17 = uStack_15._4_4_ * TypeRef__System__Activator__T._0_4_;
          fVar18 = uStack_16._4_4_ + uStack_16._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar19 = TypeInfo__UnityEngine__Quaternion->static_fields;
          VStack_3._8_8_ = VStack_3._8_8_ & 0xffffffff00000000;
          uStack_20 = CONCAT44(fVar18 * fVar6,fVar17 * fVar6);
          fStack_21 = fVar9;
          VStack_3.y = (float)dVar12;
          VStack_3.x = (float)dVar11;
          uStack_22._0_4_ = (pQVar19->identityQuaternion).x;
          uStack_22._4_4_ = (pQVar19->identityQuaternion).y;
          uStack_23._0_4_ = (pQVar19->identityQuaternion).z;
          uStack_23._4_4_ = (pQVar19->identityQuaternion).w;
          MStack_24.m00 = 0.0;
          MStack_24.m10 = 0.0;
          MStack_24.m20 = 0.0;
          MStack_24.m30 = 0.0;
          MStack_24.m01 = 0.0;
          MStack_24.m11 = 0.0;
          MStack_24.m21 = 0.0;
          MStack_24.m31 = 0.0;
          MStack_24.m02 = 0.0;
          MStack_24.m12 = 0.0;
          MStack_24.m22 = 0.0;
          MStack_24.m32 = 0.0;
          MStack_24.m03 = 0.0;
          MStack_24.m13 = 0.0;
          MStack_24.m23 = 0.0;
          MStack_24.m33 = 0.0;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&VStack_3,&uStack_22,&uStack_20);
          aMStack_25[0].m00 = MStack_24.m00;
          aMStack_25[0].m10 = MStack_24.m10;
          aMStack_25[0].m20 = MStack_24.m20;
          aMStack_25[0].m30 = MStack_24.m30;
          aMStack_25[0].m01 = MStack_24.m01;
          aMStack_25[0].m11 = MStack_24.m11;
          aMStack_25[0].m21 = MStack_24.m21;
          aMStack_25[0].m31 = MStack_24.m31;
          aMStack_25[0].m02 = MStack_24.m02;
          aMStack_25[0].m12 = MStack_24.m12;
          aMStack_25[0].m22 = MStack_24.m22;
          aMStack_25[0].m32 = MStack_24.m32;
          aMStack_25[0].m03 = MStack_24.m03;
          aMStack_25[0].m13 = MStack_24.m13;
          aMStack_25[0].m23 = MStack_24.m23;
          aMStack_25[0].m33 = MStack_24.m33;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral__WaveMatrix,aMStack_25,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar19 = TypeInfo__UnityEngine__Quaternion->static_fields;
          fStack_21 = 0.0;
          VStack_3.y = fVar18 * fVar8;
          VStack_3.x = fVar17 * fVar7;
          VStack_3.z = fVar9;
          uStack_20 = CONCAT44((float)dVar10,(float)dVar13);
          uStack_22._0_4_ = (pQVar19->identityQuaternion).x;
          uStack_22._4_4_ = (pQVar19->identityQuaternion).y;
          uStack_23._0_4_ = (pQVar19->identityQuaternion).z;
          uStack_23._4_4_ = (pQVar19->identityQuaternion).w;
          MStack_24.m00 = 0.0;
          MStack_24.m10 = 0.0;
          MStack_24.m20 = 0.0;
          MStack_24.m30 = 0.0;
          MStack_24.m01 = 0.0;
          MStack_24.m11 = 0.0;
          MStack_24.m21 = 0.0;
          MStack_24.m31 = 0.0;
          MStack_24.m02 = 0.0;
          MStack_24.m12 = 0.0;
          MStack_24.m22 = 0.0;
          MStack_24.m32 = 0.0;
          MStack_24.m03 = 0.0;
          MStack_24.m13 = 0.0;
          MStack_24.m23 = 0.0;
          MStack_24.m33 = 0.0;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&uStack_20,&uStack_22,&VStack_3);
          aMStack_25[0].m00 = MStack_24.m00;
          aMStack_25[0].m10 = MStack_24.m10;
          aMStack_25[0].m20 = MStack_24.m20;
          aMStack_25[0].m30 = MStack_24.m30;
          aMStack_25[0].m01 = MStack_24.m01;
          aMStack_25[0].m11 = MStack_24.m11;
          aMStack_25[0].m21 = MStack_24.m21;
          aMStack_25[0].m31 = MStack_24.m31;
          aMStack_25[0].m02 = MStack_24.m02;
          aMStack_25[0].m12 = MStack_24.m12;
          aMStack_25[0].m22 = MStack_24.m22;
          aMStack_25[0].m32 = MStack_24.m32;
          aMStack_25[0].m03 = MStack_24.m03;
          aMStack_25[0].m13 = MStack_24.m13;
          aMStack_25[0].m23 = MStack_24.m23;
          aMStack_25[0].m33 = MStack_24.m33;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral__WaveMatrix2,aMStack_25,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void UpdateCameraModes(Camera, Camera) */

void Assembly-CSharp-firstpass.dll::Water::Water_UpdateCameraModes
               (Water *this,Camera *src,Camera *dest,MethodInfo *method)

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
  if (dest == (Camera *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((dest->fields)._._._.m_CachedPtr == (void *)0x0) {
    return;
  }
  if (src == (Camera *)0x0) goto DAT_?;
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
            (dest,CVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (src->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)src,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar2);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (dest->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)dest,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar2);
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                    (src,(MethodInfo *)0x0);
  pIVar5 = TypeRef__UnityEngine__Skybox;
  if (CVar1 != CameraClearFlags__Enum_Skybox) {
code_?:
    value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (src,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (dest,value,(MethodInfo *)0x0);
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                       (src,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
              (dest,fVar6,(MethodInfo *)0x0);
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                       (src,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
              (dest,fVar6,(MethodInfo *)0x0);
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                      (src,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
              (dest,bVar7,(MethodInfo *)0x0);
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (src,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (dest,fVar6,(MethodInfo *)0x0);
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                       (src,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
              (dest,fVar6,(MethodInfo *)0x0);
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                       (src,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
              (dest,fVar6,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  this_00 = (Type *)0x0;
  pTVar8 = this_00;
  if (pIVar5 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar9 = FUN_?(pIVar5);
    pTVar8 = (Type *)FUN_?(lVar9 + 0x20);
  }
  pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)src,(MethodInfo *)0x0);
  if (pGVar10 != (GameObject *)0x0) {
    pTVar11 = (Type *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                               (pGVar10,pTVar8,(MethodInfo *)0x0);
    pIVar5 = TypeRef__UnityEngine__Skybox;
    pTVar8 = this_00;
    if ((pTVar11 != (Type *)0x0) && (pTVar11->klass == (Type__Class *)TypeInfo__UnityEngine__Skybox))
    {
      pTVar8 = pTVar11;
    }
    pTVar11 = this_00;
    if (TypeRef__UnityEngine__Skybox != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar9 = FUN_?(pIVar5);
      pTVar11 = (Type *)FUN_?(lVar9 + 0x20);
    }
    pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)dest,(MethodInfo *)0x0);
    if (pGVar10 != (GameObject *)0x0) {
      pTVar11 = (Type *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                                 (pGVar10,pTVar11,(MethodInfo *)0x0);
      if ((pTVar11 != (Type *)0x0) && (pTVar11->klass == (Type__Class *)TypeInfo__UnityEngine__Skybox)
         ) {
        this_00 = pTVar11;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pTVar8,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        if (pTVar8 == (Type *)0x0) goto DAT_?;
        pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                            ((Skybox *)pTVar8,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pMVar12,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          if (this_00 != (Type *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this_00,1,(MethodInfo *)0x0);
            pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                                ((Skybox *)pTVar8,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                      ((Skybox *)this_00,pMVar12,(MethodInfo *)0x0);
            goto code_?;
          }
          goto DAT_?;
        }
      }
      if (this_00 != (Type *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Water() */

void Assembly-CSharp-firstpass.dll::Water::Water__ctor(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).disablePixelLights = 1;
  (this->fields).isCameraAboveWater = 1;
  (this->fields).textureSize = 0x100;
  (this->fields).clipPlaneOffset = 0.07;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).reflectionCameras = (Dictionary_2_System_Object_System_Object_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).reflectionCameras >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  (this->fields).isLethal = value;
  if (bVar1) {
    FUN_?(&StringLiteral__HorizonColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__BumpMap);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshRenderer;
  if (this_00 != (Renderer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (this_00,(MethodInfo *)0x0);
    if (value == 0) {
      pTVar2 = (this->fields).m_WaterBumpTexture;
      if (this_01 == (Material *)0x0) goto code_?;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__BumpMap,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                (this_01,iVar3,pTVar2,(MethodInfo *)0x0);
      CStack_4.r = (this->fields).m_WaterHorizon.r;
      CStack_4.g = (this->fields).m_WaterHorizon.g;
      CStack_4.b = (this->fields).m_WaterHorizon.b;
      CStack_4.a = (this->fields).m_WaterHorizon.a;
    }
    else {
      pTVar2 = (this->fields).m_LethalBumpTexture;
      if (this_01 == (Material *)0x0) goto code_?;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__BumpMap,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                (this_01,iVar3,pTVar2,(MethodInfo *)0x0);
      CStack_4.r = (this->fields).m_LethalHorizon.r;
      CStack_4.g = (this->fields).m_LethalHorizon.g;
      CStack_4.b = (this->fields).m_LethalHorizon.b;
      CStack_4.a = (this->fields).m_LethalHorizon.a;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (this_01,StringLiteral__HorizonColor,&CStack_4,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_WaterHorizon(Color) */

void Assembly-CSharp-firstpass.dll::Water::Water_set_WaterHorizon
               (Water *this,Color *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__HorizonColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).isLethal;
  fVar2 = value->g;
  fVar3 = value->b;
  fVar4 = value->a;
  (this->fields).m_WaterHorizon.r = value->r;
  (this->fields).m_WaterHorizon.g = fVar2;
  (this->fields).m_WaterHorizon.b = fVar3;
  (this->fields).m_WaterHorizon.a = fVar4;
  if (bVar1 != 0) {
    return;
  }
  this_00 = (this->fields).meshRenderer;
  if ((this_00 != (Renderer *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (this_00,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
    CStack_5.r = (this->fields).m_WaterHorizon.r;
    CStack_5.g = (this->fields).m_WaterHorizon.g;
    CStack_5.b = (this->fields).m_WaterHorizon.b;
    CStack_5.a = (this->fields).m_WaterHorizon.a;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (this_01,StringLiteral__HorizonColor,&CStack_5,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

