
/* Void ActivateLaserForDuration(Single) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_ActivateLaserForDuration
               (LaserPointer *this,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_DoDeactivateLaserAfterDuration);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).OnLaserActive;
  (this->fields).isActive = 1;
  if (pAVar1 != (Action_2_Boolean_Boolean_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).isLocal,1,(pAVar1->fields)._._.method
              );
  }
  fVar2 = duration + (this->fields).activeDuration;
  if (_UNK_? <= fVar2) {
    fVar2 = _UNK_?;
  }
  (this->fields).activeDuration = fVar2;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
            ((MonoBehaviour *)this,StringLiteral_DoDeactivateLaserAfterDuration,(MethodInfo *)0x0);
  pSVar3 = StringLiteral_DoDeactivateLaserAfterDuration;
  if ((StringLiteral_DoDeactivateLaserAfterDuration == (String *)0x0) ||
     ((StringLiteral_DoDeactivateLaserAfterDuration->fields)._stringLength == 0)) {
    uVar4 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar4);
    pSVar3 = (String *)func_?(&StringLiteral_methodName_is_null_or_empty);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar3,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                               );
    FUN_?(this_00,uVar4);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puStackX_8 = unaff_RBX;
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar4);
    pSVar3 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar3,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                               );
    FUN_?(this_01,uVar4);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puStackX_10 = puStackX_8;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                  ,pSVar3,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_8 = (uint16_t *)0x0;
  puStack_7 = (uint16_t *)0x0;
  puStack_8 = (undefined *)0x0;
  uStack_9 = 0;
  ppuStack_10 = &puStackX_8;
  if (this != (LaserPointer *)0x0) {
    pvVar11 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar11 != (void *)0x0) {
      if (pSVar3 != (String *)0x0) {
        if ((pSVar3->fields)._stringLength == 0) {
          puStack_7 = (uint16_t *)0x1;
          puStack_8 = (undefined *)0x0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar12 = (pSVar3->fields)._stringLength;
          puStackX_8 = &(pSVar3->fields)._firstChar;
          if (iVar12 == 0) {
            puStackX_8 = (uint16_t *)0x0;
          }
          puStack_8 = (undefined *)CONCAT44(puStack_8._4_4_,iVar12);
          puStack_7 = puStackX_8;
        }
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? != (code *)0x0) ||
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 != (code *)0x0)) {
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar11,&puStack_7,0);
        return;
      }
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ApplyMaterialForState() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_ApplyMaterialForState
               (LaserPointer *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (pMVar1 == (MaterialLoader *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (this->fields).currentCubeMaterial = (pMVar1->fields)._CubeModelMaterial_k__BackingField;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).currentCubeMaterial >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar8 == (MVGameControllerBase *)0x0) ||
      (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar9->fields)._MaterialRepository_k__BackingField,
     this_00 == (MVMaterialRepository *)0x0)) goto code_?;
  pMVar10 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                      (this_00,(this->fields).currentCubeMaterialId,(MethodInfo *)0x0);
  switch((this->fields).state) {
  case 0:
    pRVar11 = (this->fields).cubeRenderer;
    if (((pRVar11 != (Renderer *)0x0) &&
        (UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                   (pRVar11,(this->fields).currentCubeMaterial,(MethodInfo *)0x0),
        pMVar10 != (MVMaterial *)0x0)) &&
       (pMVar12 = (this->fields).cubeMeshFilter, pMVar12 != (MeshFilter *)0x0)) {
      pMVar13 = (pMVar10->fields)._Mesh_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MeshFilter>_UnityEngine__MeshFilter_
                      ,pMVar13,0,in_R9,unaff_RDI);
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar12 == (MeshFilter *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar14 = (pMVar12->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar12,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pMVar13 == (Mesh *)0x0) {
        pvVar15 = (void *)0x0;
      }
      else {
        pvVar15 = (pMVar13->fields)._.m_CachedPtr;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar14,pvVar15);
      return;
    }
    goto code_?;
  case 1:
    pRVar11 = (this->fields).cubeRenderer;
    if (pRVar11 == (Renderer *)0x0) goto code_?;
    m = (this->fields).insertingMaterial;
    goto code_?;
  case 2:
  case 5:
  case 6:
    pRVar11 = (this->fields).cubeRenderer;
    if (((pRVar11 == (Renderer *)0x0) ||
        (UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                   (pRVar11,(this->fields).currentCubeMaterial,(MethodInfo *)0x0),
        pMVar10 == (MVMaterial *)0x0)) ||
       (pMVar12 = (this->fields).cubeMeshFilter, pMVar12 == (MeshFilter *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
              (pMVar12,(pMVar10->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
    fVar17 = (this->fields).beamEditColor.r;
    fVar18 = (this->fields).beamEditColor.g;
    fVar19 = (this->fields).beamEditColor.b;
    fVar20 = (this->fields).beamEditColor.a;
    break;
  case 3:
    pRVar11 = (this->fields).cubeRenderer;
    if (pRVar11 == (Renderer *)0x0) goto code_?;
    m = (this->fields).transformingMaterial;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              (pRVar11,m,(MethodInfo *)0x0);
    fVar17 = (this->fields).beamObjectColor.r;
    fVar18 = (this->fields).beamObjectColor.g;
    fVar19 = (this->fields).beamObjectColor.b;
    fVar20 = (this->fields).beamObjectColor.a;
    break;
  case 4:
    pRVar11 = (this->fields).cubeRenderer;
    if (pRVar11 == (Renderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              (pRVar11,(this->fields).deleteMaterial,(MethodInfo *)0x0);
    fVar17 = (this->fields).beamDeleteColor.r;
    fVar18 = (this->fields).beamDeleteColor.g;
    fVar19 = (this->fields).beamDeleteColor.b;
    fVar20 = (this->fields).beamDeleteColor.a;
    break;
  default:
    goto code_?;
  }
  (this->fields).beamColor.r = fVar17;
  (this->fields).beamColor.g = fVar18;
  (this->fields).beamColor.b = fVar19;
  (this->fields).beamColor.a = fVar20;
code_?:
  return;
}


/* Void ChangeState(LaserPointerState) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_ChangeState
               (LaserPointer *this,LaserPointerState__Enum newState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&StringLiteral_st);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).state = newState;
  LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
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
  uStackX_10 = CONCAT31(uStackX_10._1_3_,(char)(this->fields).state);
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_st,pOVar1
             ,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)this_00,(Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    lVar5 = lRam_?;
    uStackX_18 = unaff_RDI;
    if (iVar4 < 0) {
      pOVar1 = (Object *)0x0;
      uStackX_10 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar1 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
            uVar3 = (ulonglong)(uVar6 & 0x3f);
            puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << uVar3;
              }
              UNLOCK();
            } while (uVar8 != uVar9);
          }
        }
      }
      else {
        pOVar1 = (Object *)((ulonglong)uStackX_14 << 0x20);
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_type,
                 pOVar1,(InsertionBehavior__Enum)CONCAT71((int7)(uVar3 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    pMVar10 = (this->fields).currentItem;
    if (pMVar10 != (MVRuntimeDataVariable *)0x0) {
      pOVar11 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                          ((Object *)this_00,(MethodInfo *)0x0);
      bVar12 = iRam_? != 0;
      pOVar1 = (pMVar10->fields).value;
      (pMVar10->fields).value = pOVar11;
      if (bVar12) {
        uVar6 = (uint)((ulonglong)&(pMVar10->fields).value >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar7;
          LOCK();
          uVar3 = *puVar7;
          if (uVar9 == uVar3) {
            *puVar7 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar3);
      }
      if (pOVar1 != pOVar11) {
        if ((pMVar10->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMVar13 = (pMVar10->fields).OnChange;
          pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                              ((pMVar10->fields).value,(MethodInfo *)0x0);
          pcVar2 = (pMVar13->fields)._._.invoke_impl;
          (*pcVar2)((pMVar13->fields)._._.method_code,pOVar1,(pMVar13->fields)._._.method,pcVar2,
                    uStackX_18);
        }
        if (((pMVar10->fields).writeThrough != 0) &&
           ((pMVar10->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0))
        {
          pMVar14 = (pMVar10->fields).OnWriteThrough;
          pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                              ((pMVar10->fields).value,(MethodInfo *)0x0);
          (*(pMVar14->fields)._._.invoke_impl)
                    ((pMVar14->fields)._._.method_code,pOVar1,(pMVar14->fields)._._.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator DoDeactivateLaserAfterDuration() */

IEnumerator *
Assembly-CSharp.dll::LaserPointer::LaserPointer_DoDeactivateLaserAfterDuration
          (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LaserPointer___DoDeactivateLaserAfterDuration_d__45);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__LaserPointer___DoDeactivateLaserAfterDuration_d__45);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void Initialize(Boolean, MVRuntimeDataVariable, Transform) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_Initialize
               (LaserPointer *this,bool isLocal,MVRuntimeDataVariable *currentItem,Transform *parent
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__LaserPointer__OnChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).isLocal = isLocal;
  (this->fields).currentItem = currentItem;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentItem >> 0xc);
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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
            (this_00,parent,(MethodInfo *)0x0);
  if (isLocal == 0) {
    if (currentItem == (MVRuntimeDataVariable *)0x0) goto code_?;
    pMVar7 = (currentItem->fields).OnChange;
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,MethodInfo__LaserPointer__OnChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar7,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar7 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (currentItem->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar8 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar7->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar8 = pMVar7;
      }
      if (pMVar8 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?(pMVar7,TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (currentItem->fields).OnChange = pMVar8;
      pMVar8 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar7->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar8 = pMVar7;
      }
      if (pMVar8 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(currentItem->fields).OnChange >> 0xc);
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
  return;
}


/* Void IntervalSyncState(Dictionary`2[System.Object,System.Object], Single) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_IntervalSyncState
               (LaserPointer *this,Dictionary_2_System_Object_System_Object_ *newState,
               float interval,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
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
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
    uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    method = (MethodInfo *)0xADDR;
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  uStack_10 = (ulonglong)(uint)(newState->fields)._version;
  uStack_11 = 2;
  aDStack_12[0]._version = (undefined4)uStack_10;
  aDStack_12[0]._index = uStack_10._4_4_;
  aDStack_12[0]._current.key = (Object *)0x0;
  aDStack_12[0]._current.value = (Object *)0x0;
  aDStack_12[0]._getEnumeratorRetType = 2;
  aDStack_12[0]._36_4_ = 0;
  pDStack_5 = newState;
  aDStack_12[0]._dictionary = newState;
  while (bVar13 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                           (aDStack_12,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                           ), bVar13 != 0) {
    pDVar14 = (this->fields).syncBuffer;
    if (pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    method = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar14,aDStack_12[0]._current.key,aDStack_12[0]._current.value,
               (InsertionBehavior__Enum)method,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  fVar15 = (this->fields).lastSyncTime;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar17 = (float)(*pcRam_?)();
  if (fVar15 + interval < fVar17) {
    pDVar14 = (this->fields).syncBuffer;
    this_01 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_4
              (this_01,(IDictionary_2_System_Object_System_Object_ *)pDVar14,
               (IEqualityComparer_1_System_Object_ *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
               ->klass->rgctx_data[8].method);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar15 = (float)(*pcRam_?)();
    (this->fields).lastSyncTime = fVar15;
    LaserPointer_SyncState(this,this_01,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).syncBuffer;
    if (this_00 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
    TypeConverterRegistry+ConverterKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
              );
  }
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_LateUpdate
               (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fire);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).isLocal != 0) &&
     (bVar1 = (this->fields).isActive, (this->fields).isFiring != bVar1)) {
    (this->fields).isFiring = bVar1;
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    abStackX_8[0] = (this->fields).isFiring;
    value = (Object *)FUN_?(uRam_?,abStackX_8);
    if (this_00 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_fire,
               value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    LaserPointer_SyncState
              (this,(Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
  }
  if ((this->fields).isLocal == 0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((pTVar2 == (Transform *)0x0) ||
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar2,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_3._0_4_ = 0.0;
    auStack_3._4_4_ = 0.0;
    auStack_3._8_8_ = auStack_3._8_8_ & 0xffffffff00000000;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    pTVar2 = (this->fields).cube;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_7.x = 0.0;
    VStack_7.y = 0.0;
    VStack_7.z = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    VStack_8.x = (this->fields).relativeTargetPosition.x;
    VStack_8.y = (this->fields).relativeTargetPosition.y;
    uVar6._0_4_ = (VStack_7.x + VStack_8.x) - (float)auStack_3._0_4_;
    fVar9 = (VStack_7.z + (this->fields).relativeTargetPosition.z) - (float)auStack_3._8_4_;
    VStack_7._0_8_ = ZEXT48((uint)(float)uVar6);
    VStack_7.z = fVar9;
    fVar10 = (float)FUN_?(&VStack_7);
    if (_UNK_? < fVar10) {
      uVar6._4_4_ = 0.0 / fVar10;
      uVar6._0_4_ = (float)uVar6 / fVar10;
      fVar9 = fVar9 / fVar10;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar6._0_4_ = (pVVar11->zeroVector).x;
      uVar6._4_4_ = (pVVar11->zeroVector).y;
      fVar9 = (pVVar11->zeroVector).z;
      VStack_8._0_8_ = uVar6;
    }
    pTVar2 = (this->fields).cube;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_8.x = (pVVar11->upVector).x;
    VStack_8.y = (pVVar11->upVector).y;
    fVar9 = (float)auStack_3._8_4_ + (pVVar11->upVector).z + fVar9 * _UNK_?;
    if (pTVar2 == (Transform *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    VStack_7.y = (float)auStack_3._4_4_ + VStack_8.y + uVar6._4_4_ * _UNK_?;
    VStack_7.x = (float)auStack_3._0_4_ + VStack_8.x + (float)uVar6 * _UNK_?;
    VStack_7.z = fVar9;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
  }
  pTVar2 = (this->fields).cube;
  if (pTVar2 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_3._0_4_ = 0.0;
  auStack_3._4_4_ = 0.0;
  auStack_3._8_8_ = auStack_3._8_8_ & 0xffffffff00000000;
  pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar4);
  VStack_8.x = (this->fields).relativeTargetPosition.x;
  VStack_8.y = (this->fields).relativeTargetPosition.y;
  fVar9 = (float)auStack_3._0_4_ + VStack_8.x;
  fVar10 = (float)auStack_3._8_4_ + (this->fields).relativeTargetPosition.z;
  uVar6._0_4_ = (float)auStack_3._4_4_ + VStack_8.y;
  pTVar12 = (this->fields).cube;
  if ((pTVar12 == (Transform *)0x0) ||
     (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar12,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
  goto code_?;
  pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      (&VStack_8,pTVar12,(MethodInfo *)0x0);
  auStack_3._8_4_ = fVar10;
  VStack_7.x = pVVar13->x;
  VStack_7.y = pVVar13->y;
  VStack_7.z = pVVar13->z;
  auStack_3._4_4_ = (float)uVar6;
  auStack_3._0_4_ = fVar9;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar4);
  pLVar14 = (this->fields).lineRenderer;
  if (pLVar14 == (LineRenderer *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (pLVar14->fields)._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar14,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  cVar15 = (*pcRam_?)(pvVar4);
  if (cVar15 == '\0') {
code_?:
    if ((this->fields).isActive == 0) goto code_?;
    fVar9 = _UNK_?;
    if ((this->fields).isLocal != 0) {
      fVar9 = _UNK_?;
    }
  }
  else {
    pTVar2 = (this->fields).cube;
    pLVar14 = (this->fields).lineRenderer;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_7.x = 0.0;
    VStack_7.y = 0.0;
    VStack_7.z = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    if (pLVar14 == (LineRenderer *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    VStack_8.x = VStack_7.x;
    VStack_8.y = VStack_7.y;
    VStack_8.z = VStack_7.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar14->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar14,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    if ((this->fields).isActive != 0) {
      pTVar2 = (this->fields).cube;
      pLVar14 = (this->fields).lineRenderer;
      if (pTVar2 == (Transform *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_3._0_4_ = 0.0;
      auStack_3._4_4_ = 0.0;
      auStack_3._8_8_ = auStack_3._8_8_ & 0xffffffff00000000;
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
      VStack_7.x = (this->fields).relativeTargetPosition.x;
      VStack_7.y = (this->fields).relativeTargetPosition.y;
      fVar9 = (float)auStack_3._8_4_ + (this->fields).relativeTargetPosition.z;
      if (pLVar14 == (LineRenderer *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      VStack_7.y = (float)auStack_3._4_4_ + VStack_7.y;
      VStack_7.x = (float)auStack_3._0_4_ + VStack_7.x;
      VStack_7.z = fVar9;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pLVar14->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar14,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,1);
      goto code_?;
    }
code_?:
    fVar9 = 0.0;
  }
  uVar6._0_4_ = (this->fields).currentLaserAlpha;
  if ((float)uVar6 < fVar9) {
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    fVar10 = (float)(*pcRam_?)();
    uVar6._0_4_ = fVar10 * _UNK_? + (float)uVar6;
    if ((float)uVar6 <= fVar9) {
      fVar9 = (float)uVar6;
    }
code_?:
    (this->fields).currentLaserAlpha = fVar9;
  }
  else if (fVar9 < (float)uVar6) {
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    fVar10 = (float)(*pcRam_?)();
    uVar6._0_4_ = (float)uVar6 - fVar10 * _UNK_?;
    if (fVar9 <= (float)uVar6) {
      fVar9 = (float)uVar6;
    }
    goto code_?;
  }
  fVar9 = (this->fields).currentLaserAlpha;
  (this->fields).beamColor.a = fVar9;
  pLVar14 = (this->fields).lineRenderer;
  if (pLVar14 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)pLVar14,
               TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fVar9 &&
               fVar9 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon,(MethodInfo *)0x0);
    pLVar14 = (this->fields).lineRenderer;
    if ((pLVar14 != (LineRenderer *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar14,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
      CStack_16.r = (this->fields).beamColor.r;
      CStack_16.g = (this->fields).beamColor.g;
      CStack_16.b = (this->fields).beamColor.b;
      CStack_16.a = (this->fields).beamColor.a;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (this_01,StringLiteral__TintColor,&CStack_16,(MethodInfo *)0x0);
      if ((this->fields).isLocal == 0) {
        return;
      }
      pLVar14 = (this->fields).lineRenderer;
      if (pLVar14 != (LineRenderer *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                          ((Renderer *)pLVar14,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
        pTVar2 = (this->fields).cube;
        if ((pTVar2 != (Transform *)0x0) &&
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                               (pTVar2,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStack_3._0_4_ = 0.0;
          auStack_3._4_4_ = 0.0;
          auStack_3._8_8_ = auStack_3._8_8_ & 0xffffffff00000000;
          pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar4,auStack_3);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              (&VStack_8,pTVar2,(MethodInfo *)0x0);
          fVar9 = _UNK_?;
          VStack_7.x = pVVar13->x;
          VStack_7.y = pVVar13->y;
          uVar6._0_4_ = VStack_7.y * _UNK_? + (float)auStack_3._4_4_;
          fVar10 = VStack_7.x * _UNK_? + (float)auStack_3._0_4_;
          uVar6._4_4_ = pVVar13->z * _UNK_? + (float)auStack_3._8_4_;
          pTVar2 = (this->fields).cube;
          if (pTVar2 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            auStack_3._0_4_ = 0.0;
            auStack_3._4_4_ = 0.0;
            auStack_3._8_8_ = auStack_3._8_8_ & 0xffffffff00000000;
            pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar4);
            pTVar2 = (this->fields).cube;
            fVar10 = fVar10 - (float)auStack_3._0_4_;
            uVar6._0_4_ = (float)uVar6 - (float)auStack_3._4_4_;
            uVar6._4_4_ = uVar6._4_4_ - (float)auStack_3._8_4_;
            if ((pTVar2 != (Transform *)0x0) &&
               (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                   (pTVar2,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
              pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)auStack_3,pTVar2,(MethodInfo *)0x0);
              VStack_7.y = (float)uVar6;
              VStack_7.x = fVar10;
              uVar17._0_4_ = pVVar13->x;
              uVar17._4_4_ = pVVar13->y;
              uVar6._0_4_ = pVVar13->z;
              CStack_18.r = 0.0;
              CStack_18.g = 0.0;
              CStack_18.b = 0.0;
              CStack_18.a = 0.0;
              pcVar5 = pcRam_?;
              VStack_7.z = uVar6._4_4_;
              VStack_8._0_8_ = uVar17;
              VStack_8.z = (float)uVar6;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pcRam_? = pcVar5;
              (*pcRam_?)(&VStack_7,&VStack_8);
              pTVar2 = (this->fields).cube;
              if (pTVar2 != (Transform *)0x0) {
                VStack_8._0_8_ = uVar17;
                VStack_8.z = (float)uVar6;
                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)auStack_3,pTVar2,(MethodInfo *)0x0);
                VStack_7.x = pVVar13->x;
                VStack_7.y = pVVar13->y;
                VStack_7.z = pVVar13->z;
                CStack_16.r = 0.0;
                CStack_16.g = 0.0;
                CStack_16.b = 0.0;
                CStack_16.a = 0.0;
                pcVar5 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcRam_? = pcVar5;
                (*pcRam_?)(&VStack_7,&VStack_8,&CStack_16);
                pcVar5 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcRam_? = pcVar5;
                auStack_3._0_4_ = CStack_18.r;
                auStack_3._4_4_ = CStack_18.g;
                auStack_3._8_4_ = CStack_18.b;
                auStack_3._12_4_ = CStack_18.a;
                CStack_18.r = 0.0;
                CStack_18.g = 0.0;
                CStack_18.b = 0.0;
                CStack_18.a = 0.0;
                aCStack_19[0].r = CStack_16.r;
                aCStack_19[0].g = CStack_16.g;
                aCStack_19[0].b = CStack_16.b;
                aCStack_19[0].a = CStack_16.a;
                uVar6._0_4_ = (float)(*pcRam_?)();
                pcVar5 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcRam_? = pcVar5;
                (*pcRam_?)(aCStack_19,auStack_3,(float)uVar6 * fVar9);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
                VStack_8.x = (pVVar11->forwardVector).x;
                VStack_8.y = (pVVar11->forwardVector).y;
                VStack_8.z = (pVVar11->forwardVector).z;
                aCStack_19[0].r = CStack_18.r;
                aCStack_19[0].g = CStack_18.g;
                aCStack_19[0].b = CStack_18.b;
                aCStack_19[0].a = CStack_18.a;
                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_op_Multiply_1
                                    (&VStack_7,(Quaternion *)aCStack_19,&VStack_8,
                                     (MethodInfo *)0x0);
                VStack_8.x = pVVar13->x;
                VStack_8.y = pVVar13->y;
                uVar6._0_4_ = pVVar13->z;
                fVar10 = (float)FUN_?(&(this->fields).relativeTargetPosition);
                pcVar5 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcRam_? = pcVar5;
                uVar6._4_4_ = (float)(*pcRam_?)();
                uVar6._4_4_ = uVar6._4_4_ * _UNK_?;
                if (uVar6._4_4_ < 0.0) {
                  uVar6._4_4_ = 0.0;
                }
                else if (_UNK_? < uVar6._4_4_) {
                  uVar6._4_4_ = _UNK_?;
                }
                fVar10 = (fVar9 - fVar10) * uVar6._4_4_ + fVar10;
                (this->fields).relativeTargetPosition.x = fVar10 * VStack_8.x;
                (this->fields).relativeTargetPosition.y = fVar10 * VStack_8.y;
                (this->fields).relativeTargetPosition.z = fVar10 * (float)uVar6;
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnChange(Object) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnChange
               (LaserPointer *this,Object *newvalue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newvalue != (Object *)0x0) {
    bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((newvalue->klass->_1).naturalAligment < bVar1) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (newvalue->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(newvalue);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,newvalue,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_st);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tz);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isLocal == 0) {
    if (newvalue == (Object *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newvalue,(Object *)StringLiteral_tx,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar3) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)newvalue,
                          (Object *)StringLiteral_tx,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).relativeTargetPosition.x = *(float *)&pOVar4[1].klass;
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newvalue,(Object *)StringLiteral_ty,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar3) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)newvalue,
                          (Object *)StringLiteral_ty,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).relativeTargetPosition.y = *(float *)&pOVar4[1].klass;
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newvalue,(Object *)StringLiteral_tz,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar3) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)newvalue,
                          (Object *)StringLiteral_tz,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).relativeTargetPosition.z = *(float *)&pOVar4[1].klass;
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newvalue,(Object *)StringLiteral_st,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar3) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)newvalue,
                          (Object *)StringLiteral_st,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).state = (uint)*(byte *)&pOVar4[1].klass;
      LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newvalue,(Object *)StringLiteral_fire,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar3) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)newvalue,
                          (Object *)StringLiteral_fire,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pAVar5 = (this->fields).OnLaserActive;
      bVar6 = *(bool *)&pOVar4[1].klass;
      (this->fields).isActive = bVar6;
      if (pAVar5 != (Action_2_Boolean_Boolean_ *)0x0) {
        (*(pAVar5->fields)._._.invoke_impl)
                  ((pAVar5->fields)._._.method_code,(this->fields).isLocal,bVar6,
                   (pAVar5->fields)._._.method);
      }
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newvalue,(Object *)StringLiteral_cm,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar3) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)newvalue,
                          (Object *)StringLiteral_cm,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).currentCubeMaterialId = *(uint8_t *)&pOVar4[1].klass;
      LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnDisable
               (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).cube;
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
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).cube;
      if ((pTVar1 != (Transform *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnEnable(LaserPointer *this,MethodInfo *method)

{
  if (((this->fields).isLocal == 0) && ((this->fields).isActive == 0)) {
    (this->fields).currentLaserAlpha = 0.0;
    this_00 = (this->fields).lineRenderer;
    if (this_00 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)this_00,0,(MethodInfo *)0x0);
  }
  this_01 = (this->fields).cube;
  if ((this_01 != (Transform *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_01,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,1,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj == (GameObject *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar2 = (obj->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar2,1);
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnEquip(LaserPointer *this,MethodInfo *method)

{
  if ((this->fields).isLocal == 0) {
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pTVar2 = (this->fields).cube;
      if ((pTVar2 != (Transform *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,1);
        return;
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar2 = (this->fields).cube;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if ((this_00 != (Camera *)0x0) &&
     (value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar2,value,(MethodInfo *)0x0);
    pTVar2 = (this->fields).cube;
    if (pTVar2 != (Transform *)0x0) {
      uStack_6._0_4_ = (this->fields).offset.x;
      uStack_6._4_4_ = (this->fields).offset.y;
      fStack_7 = (this->fields).offset.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar4,&uStack_6);
      goto code_?;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnStateChanged
               (LaserPointer *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_fire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_st);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tz);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isLocal == 0) {
    if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newState,(Object *)StringLiteral_tx,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_tx,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->fields).relativeTargetPosition.x = *(float *)&pOVar3[1].klass;
    }
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newState,(Object *)StringLiteral_ty,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_ty,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->fields).relativeTargetPosition.y = *(float *)&pOVar3[1].klass;
    }
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newState,(Object *)StringLiteral_tz,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_tz,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->fields).relativeTargetPosition.z = *(float *)&pOVar3[1].klass;
    }
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newState,(Object *)StringLiteral_st,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_st,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->fields).state = (uint)*(byte *)&pOVar3[1].klass;
      LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    }
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newState,(Object *)StringLiteral_fire,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_fire,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pAVar4 = (this->fields).OnLaserActive;
      bVar5 = *(bool *)&pOVar3[1].klass;
      (this->fields).isActive = bVar5;
      if (pAVar4 != (Action_2_Boolean_Boolean_ *)0x0) {
        (*(pAVar4->fields)._._.invoke_impl)
                  ((pAVar4->fields)._._.method_code,(this->fields).isLocal,bVar5,
                   (pAVar4->fields)._._.method);
      }
    }
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newState,(Object *)StringLiteral_cm,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_cm,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->fields).currentCubeMaterialId = *(uint8_t *)&pOVar3[1].klass;
      LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetCurrentCubeMaterial(Byte) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SetCurrentCubeMaterial
               (LaserPointer *this,uint8_t cubeMaterial,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&StringLiteral_cm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).currentCubeMaterialId = cubeMaterial;
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  value = (Object *)FUN_?(uRam_?,&stack0x00000010);
  if (this_01 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_cm,value,
             CONCAT31((int3)((uint)in_R9D >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  LaserPointer_SyncState
            (this,(Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (pMVar2 == (MaterialLoader *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar3 = iRam_? != 0;
  (this->fields).currentCubeMaterial = (pMVar2->fields)._CubeModelMaterial_k__BackingField;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).currentCubeMaterial >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar8 == (MVGameControllerBase *)0x0) ||
      (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar9->fields)._MaterialRepository_k__BackingField,
     this_00 == (MVMaterialRepository *)0x0)) goto code_?;
  pMVar10 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                      (this_00,(this->fields).currentCubeMaterialId,(MethodInfo *)0x0);
  switch((this->fields).state) {
  case 0:
    pRVar11 = (this->fields).cubeRenderer;
    if (((pRVar11 != (Renderer *)0x0) &&
        (UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                   (pRVar11,(this->fields).currentCubeMaterial,(MethodInfo *)0x0),
        pMVar10 != (MVMaterial *)0x0)) &&
       (pMVar12 = (this->fields).cubeMeshFilter, pMVar12 != (MeshFilter *)0x0)) {
      pMVar13 = (pMVar10->fields)._Mesh_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MeshFilter>_UnityEngine__MeshFilter_
                      ,pMVar13,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar12 == (MeshFilter *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar14 = (pMVar12->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar12,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pMVar13 == (Mesh *)0x0) {
        pvVar15 = (void *)0x0;
      }
      else {
        pvVar15 = (pMVar13->fields)._.m_CachedPtr;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar14,pvVar15);
      return;
    }
    goto code_?;
  case 1:
    pRVar11 = (this->fields).cubeRenderer;
    if (pRVar11 == (Renderer *)0x0) goto code_?;
    m = (this->fields).insertingMaterial;
    goto code_?;
  case 2:
  case 5:
  case 6:
    pRVar11 = (this->fields).cubeRenderer;
    if (((pRVar11 == (Renderer *)0x0) ||
        (UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                   (pRVar11,(this->fields).currentCubeMaterial,(MethodInfo *)0x0),
        pMVar10 == (MVMaterial *)0x0)) ||
       (pMVar12 = (this->fields).cubeMeshFilter, pMVar12 == (MeshFilter *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
              (pMVar12,(pMVar10->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
    fVar17 = (this->fields).beamEditColor.r;
    fVar18 = (this->fields).beamEditColor.g;
    fVar19 = (this->fields).beamEditColor.b;
    fVar20 = (this->fields).beamEditColor.a;
    break;
  case 3:
    pRVar11 = (this->fields).cubeRenderer;
    if (pRVar11 == (Renderer *)0x0) goto code_?;
    m = (this->fields).transformingMaterial;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              (pRVar11,m,(MethodInfo *)0x0);
    fVar17 = (this->fields).beamObjectColor.r;
    fVar18 = (this->fields).beamObjectColor.g;
    fVar19 = (this->fields).beamObjectColor.b;
    fVar20 = (this->fields).beamObjectColor.a;
    break;
  case 4:
    pRVar11 = (this->fields).cubeRenderer;
    if (pRVar11 == (Renderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              (pRVar11,(this->fields).deleteMaterial,(MethodInfo *)0x0);
    fVar17 = (this->fields).beamDeleteColor.r;
    fVar18 = (this->fields).beamDeleteColor.g;
    fVar19 = (this->fields).beamDeleteColor.b;
    fVar20 = (this->fields).beamDeleteColor.a;
    break;
  default:
    goto code_?;
  }
  (this->fields).beamColor.r = fVar17;
  (this->fields).beamColor.g = fVar18;
  (this->fields).beamColor.b = fVar19;
  (this->fields).beamColor.a = fVar20;
code_?:
  return;
}


/* Void SetLaserActiveState(Boolean) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SetLaserActiveState
               (LaserPointer *this,bool isActive,MethodInfo *method)

{
  (this->fields).isActive = isActive;
  pAVar1 = (this->fields).OnLaserActive;
  if (pAVar1 != (Action_2_Boolean_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).isLocal,isActive,
               (pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void SetLaserCubeVisible(Boolean) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SetLaserCubeVisible
               (LaserPointer *this,bool visible,MethodInfo *method)

{
  obj = (this->fields).cubeRenderer;
  if (obj == (Renderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                  ,CONCAT71(in_register_00000011,visible),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Renderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,visible);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_Start(LaserPointer *this,MethodInfo *method)

{
  obj = (this->fields).lineRenderer;
  if (obj != (LineRenderer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar1);
    iVar4 = (this->fields).state;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
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
      FUN_?(&StringLiteral_st);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (this->fields).state = iVar4;
    LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStackX_8 = CONCAT71(uStackX_8._1_7_,(char)(this->fields).state);
    pOVar5 = (Object *)FUN_?(uRam_?,&uStackX_8);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      uVar6 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_st,
                 pOVar5,(InsertionBehavior__Enum)uVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      ,this_00,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_type);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)this_00,(Object *)StringLiteral_type,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        lVar7 = lRam_?;
        if (iVar4 < 0) {
          pOVar5 = (Object *)(unaff_RBX & 0xffffffff00000000);
          uStackX_8 = unaff_RBX;
          if ((*(int *)(lRam_? + 0x28) < 0) &&
             ((*(longlong *)(lRam_? + 0x60) == 0 ||
              (pOVar5 = (Object *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
            pOVar5 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar5 + 1,&stack0x00000010,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar8 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
              uVar6 = (ulonglong)(uVar8 & 0x3f);
              puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << uVar6;
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)StringLiteral_type,pOVar5,
                     (InsertionBehavior__Enum)CONCAT71((int7)(uVar6 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        pMVar12 = (this->fields).currentItem;
        if (pMVar12 != (MVRuntimeDataVariable *)0x0) {
          pOVar13 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                              ((Object *)this_00,(MethodInfo *)0x0);
          bVar14 = iRam_? != 0;
          pOVar5 = (pMVar12->fields).value;
          (pMVar12->fields).value = pOVar13;
          if (bVar14) {
            uVar8 = (uint)((ulonglong)&(pMVar12->fields).value >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar11 = *puVar9;
              LOCK();
              uVar6 = *puVar9;
              if (uVar11 == uVar6) {
                *puVar9 = uVar11 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (uVar11 != uVar6);
          }
          if (pOVar5 != pOVar13) {
            if ((pMVar12->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              pMVar15 = (pMVar12->fields).OnChange;
              pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                  ((pMVar12->fields).value,(MethodInfo *)0x0);
              pcVar2 = (pMVar15->fields)._._.invoke_impl;
              (*pcVar2)((pMVar15->fields)._._.method_code,pOVar5,(pMVar15->fields)._._.method,
                         pcVar2,unaff_RDI);
            }
            if (((pMVar12->fields).writeThrough != 0) &&
               ((pMVar12->fields).OnWriteThrough !=
                (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
              pMVar16 = (pMVar12->fields).OnWriteThrough;
              pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                  ((pMVar12->fields).value,(MethodInfo *)0x0);
              (*(pMVar16->fields)._._.invoke_impl)
                        ((pMVar16->fields)._._.method_code,pOVar5,(pMVar16->fields)._._.method);
            }
          }
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SubscribeToCommands() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SubscribeToCommands
               (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<LaserPointerState>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
     pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
    pGVar5 = (pGVar4->fields).LaserCommands;
    pDVar6 = (Delegate *)FUN_?(TypeInfo__System__Action<unsigned_char>);
    if (this != (LaserPointer *)0x0) {
      bVar7 = iRam_? != 0;
      pMVar8 = (this->klass->vtable).SetCurrentCubeMaterial.method;
      (pDVar6->fields).method_ptr = pMVar8->virtualMethodPointer;
      (pDVar6->fields).method = pMVar8;
      (pDVar6->fields).m_target = (Object *)this;
      if (bVar7) {
        uVar9 = (uint)((ulonglong)&(pDVar6->fields).m_target >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar7 = uVar11 == *puVar12;
          if (bVar7) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      uVar13 = pMVar8->parameters_count;
      (pDVar6->fields).method_code = pDVar6;
      if (((pMVar8->flags & 0x10) == 0) || (uVar13 != 1)) {
        (pDVar6->fields).method_code = (pDVar6->fields).m_target;
        puVar14 = (pDVar6->fields).method_ptr;
      }
      else {
        puVar14 = &UNK_?;
      }
      (pDVar6->fields).invoke_impl = puVar14;
      (pDVar6->fields).extra_arg = FUN_?;
      if (pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<unsigned_char>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppAVar15 = &(pGVar5->fields).OnCubeMaterialChanged;
        a_03 = (pGVar5->fields).OnCubeMaterialChanged;
        do {
          pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a_03,pDVar6,(MethodInfo *)0x0);
          pAVar17 = TypeInfo__System__Action<unsigned_char>;
          if (pDVar16 == (Delegate *)0x0) {
            pAVar18 = (Action_1_Byte__1 *)0x0;
          }
          else {
            pAVar18 = (Action_1_Byte__1 *)
                      FUN_?(pDVar16,TypeInfo__System__Action<unsigned_char>);
            if (pAVar18 == (Action_1_Byte__1 *)0x0) {
              FUN_?(pDVar16,pAVar17);
              pcVar19 = (code *)swi(3);
              (*pcVar19)();
              return;
            }
          }
          LOCK();
          pAVar20 = *ppAVar15;
          bVar7 = a_03 == pAVar20;
          if (bVar7) {
            *ppAVar15 = pAVar18;
            pAVar20 = a_03;
          }
          UNLOCK();
          pAVar18 = a_03;
          if (!bVar7) {
            pAVar18 = pAVar20;
          }
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)ppAVar15 >> 0xc);
            lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar7 = uVar11 == *puVar12;
              if (bVar7) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          bVar7 = pAVar18 != a_03;
          a_03 = pAVar18;
        } while (bVar7);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           ((pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0 &&
            (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
            pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)))) {
          pGVar5 = (pGVar4->fields).LaserCommands;
          pDVar6 = (Delegate *)FUN_?(TypeInfo__System__Action<float>);
          FUN_?(pDVar6,this);
          if (pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
             ) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action<float>);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            ppAVar21 = &(pGVar5->fields).OnActivateLaserForDuration;
            a = (pGVar5->fields).OnActivateLaserForDuration;
            do {
              pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)a,pDVar6,(MethodInfo *)0x0);
              pAVar22 = TypeInfo__System__Action<float>;
              if (pDVar16 == (Delegate *)0x0) {
                pAVar23 = (Action_1_Single_ *)0x0;
              }
              else {
                pAVar23 = (Action_1_Single_ *)FUN_?(pDVar16,TypeInfo__System__Action<float>)
                ;
                if (pAVar23 == (Action_1_Single_ *)0x0) {
                  FUN_?(pDVar16,pAVar22);
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
              }
              LOCK();
              pAVar24 = *ppAVar21;
              bVar7 = a == pAVar24;
              if (bVar7) {
                *ppAVar21 = pAVar23;
                pAVar24 = a;
              }
              UNLOCK();
              pAVar23 = a;
              if (!bVar7) {
                pAVar23 = pAVar24;
              }
              if (iRam_? != 0) {
                uVar9 = (uint)((ulonglong)ppAVar21 >> 0xc);
                lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                do {
                  uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                  puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                  LOCK();
                  bVar7 = uVar11 == *puVar12;
                  if (bVar7) {
                    *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              bVar7 = pAVar23 != a;
              a = pAVar23;
            } while (bVar7);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
                 (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0))
               && (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
                  pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
              pGVar5 = (pGVar4->fields).LaserCommands;
              this_00 = (UnityAction_1_System_Int32Enum_ *)
                        FUN_?(TypeInfo__System__Action<LaserPointerState>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        (this_00,(Object *)this,(this->klass->vtable).ChangeState.method,
                         (MethodInfo *)0x0);
              if (pGVar5 !=
                  (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Action<LaserPointerState>);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                ppAVar25 = &(pGVar5->fields).OnChangeState;
                a_00 = (pGVar5->fields).OnChangeState;
                do {
                  pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a_00,(Delegate *)this_00,(MethodInfo *)0x0);
                  pAVar26 = TypeInfo__System__Action<LaserPointerState>;
                  if (pDVar6 == (Delegate *)0x0) {
                    pAVar27 = (Action_1_LaserPointerState_ *)0x0;
                  }
                  else {
                    pAVar27 = (Action_1_LaserPointerState_ *)
                              FUN_?(pDVar6,TypeInfo__System__Action<LaserPointerState>);
                    if (pAVar27 == (Action_1_LaserPointerState_ *)0x0) {
                      FUN_?(pDVar6,pAVar26);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                  }
                  LOCK();
                  pAVar28 = *ppAVar25;
                  bVar7 = a_00 == pAVar28;
                  if (bVar7) {
                    *ppAVar25 = pAVar27;
                    pAVar28 = a_00;
                  }
                  UNLOCK();
                  pAVar27 = a_00;
                  if (!bVar7) {
                    pAVar27 = pAVar28;
                  }
                  if (iRam_? != 0) {
                    uVar9 = (uint)((ulonglong)ppAVar25 >> 0xc);
                    lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                      puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                      LOCK();
                      bVar7 = uVar11 == *puVar12;
                      if (bVar7) {
                        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar7);
                  }
                  bVar7 = pAVar27 != a_00;
                  a_00 = pAVar27;
                } while (bVar7);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                    (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                   ((pGVar3 = (pMVar2->fields).GameEventManager,
                    pGVar3 != (GameEventManager *)0x0 &&
                    (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
                    pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)))) {
                  pGVar5 = (pGVar4->fields).LaserCommands;
                  pDVar6 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
                  FUN_?(pDVar6,this);
                  if (pGVar5 !=
                      (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__System__Action<bool>);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pGVar29 = &pGVar5->fields;
                    a_01 = (pGVar5->fields).OnLaserActiveChanged;
                    do {
                      pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)a_01,pDVar6,(MethodInfo *)0x0);
                      pAVar30 = TypeInfo__System__Action<bool>;
                      if (pDVar16 == (Delegate *)0x0) {
                        pAVar31 = (Action_1_Boolean_ *)0x0;
                      }
                      else {
                        pAVar31 = (Action_1_Boolean_ *)
                                  FUN_?(pDVar16,TypeInfo__System__Action<bool>);
                        if (pAVar31 == (Action_1_Boolean_ *)0x0) {
                          FUN_?(pDVar16,pAVar30);
                          pcVar19 = (code *)swi(3);
                          (*pcVar19)();
                          return;
                        }
                      }
                      LOCK();
                      pAVar32 = pGVar29->OnLaserActiveChanged;
                      bVar7 = a_01 == pAVar32;
                      if (bVar7) {
                        pGVar29->OnLaserActiveChanged = pAVar31;
                        pAVar32 = a_01;
                      }
                      UNLOCK();
                      pAVar31 = a_01;
                      if (!bVar7) {
                        pAVar31 = pAVar32;
                      }
                      if (iRam_? != 0) {
                        uVar9 = (uint)((ulonglong)pGVar29 >> 0xc);
                        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                          LOCK();
                          bVar7 = uVar11 == *puVar12;
                          if (bVar7) {
                            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar7);
                      }
                      bVar7 = pAVar31 != a_01;
                      a_01 = pAVar31;
                    } while (bVar7);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                       ((pGVar3 = (pMVar2->fields).GameEventManager,
                        pGVar3 != (GameEventManager *)0x0 &&
                        (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
                        pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)))) {
                      pGVar5 = (pGVar4->fields).LaserCommands;
                      pDVar6 = (Delegate *)
                                FUN_?(TypeInfo__System__Action<UnityEngine::Vector3>);
                      FUN_?(pDVar6,this);
                      if (pGVar5 !=
                          (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                          0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        a_02 = (pGVar5->fields).OnUpdatePosition;
                        do {
                          pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)a_02,pDVar6,(MethodInfo *)0x0);
                          pAVar33 = TypeInfo__System__Action<UnityEngine::Vector3>;
                          if (pDVar16 == (Delegate *)0x0) {
                            pAVar34 = (Action_1_UnityEngine_Vector3_ *)0x0;
                          }
                          else {
                            pAVar34 = (Action_1_UnityEngine_Vector3_ *)
                                      FUN_?(pDVar16,
                                                  TypeInfo__System__Action<UnityEngine::Vector3>);
                            if (pAVar34 == (Action_1_UnityEngine_Vector3_ *)0x0) {
                              FUN_?(pDVar16,pAVar33);
                              pcVar19 = (code *)swi(3);
                              (*pcVar19)();
                              return;
                            }
                          }
                          ppAVar35 = &(pGVar5->fields).OnUpdatePosition;
                          LOCK();
                          pAVar36 = *ppAVar35;
                          bVar7 = a_02 == pAVar36;
                          if (bVar7) {
                            *ppAVar35 = pAVar34;
                            pAVar36 = a_02;
                          }
                          UNLOCK();
                          pAVar34 = a_02;
                          if (!bVar7) {
                            pAVar34 = pAVar36;
                          }
                          if (iRam_? != 0) {
                            uVar9 = (uint)((ulonglong)&(pGVar5->fields).OnUpdatePosition >> 0xc);
                            lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                              LOCK();
                              bVar7 = uVar11 == *puVar12;
                              if (bVar7) {
                                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar7);
                          }
                          bVar7 = pAVar34 != a_02;
                          a_02 = pAVar34;
                        } while (bVar7);
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
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SyncState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SyncState
               (LaserPointer *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newState,(Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    lVar2 = lRam_?;
    if (iVar1 < 0) {
      pOVar3 = (Object *)0x0;
      uStackX_10 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar3 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar3 + 1,&uStackX_10,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
            in_R9 = (ulonglong)(uVar4 & 0x3f);
            puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar6 = *puVar5;
              LOCK();
              uVar7 = *puVar5;
              if (uVar6 == uVar7) {
                *puVar5 = uVar6 | 1L << in_R9;
              }
              UNLOCK();
            } while (uVar6 != uVar7);
          }
        }
      }
      else {
        pOVar3 = (Object *)((ulonglong)uStackX_14 << 0x20);
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (newState,(Object *)StringLiteral_type,pOVar3,
                 (InsertionBehavior__Enum)CONCAT71((int7)(in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    pMVar8 = (this->fields).currentItem;
    if (pMVar8 != (MVRuntimeDataVariable *)0x0) {
      pOVar9 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                          ((Object *)newState,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      pOVar3 = (pMVar8->fields).value;
      (pMVar8->fields).value = pOVar9;
      if (bVar10) {
        uVar4 = (uint)((ulonglong)&(pMVar8->fields).value >> 0xc);
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
      if (pOVar3 != pOVar9) {
        if ((pMVar8->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMVar11 = (pMVar8->fields).OnChange;
          pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                              ((pMVar8->fields).value,(MethodInfo *)0x0);
          pcVar12 = (pMVar11->fields)._._.invoke_impl;
          (*pcVar12)((pMVar11->fields)._._.method_code,pOVar3,(pMVar11->fields)._._.method,pcVar12,
                    unaff_RDI);
        }
        if (((pMVar8->fields).writeThrough != 0) &&
           ((pMVar8->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0))
        {
          pMVar13 = (pMVar8->fields).OnWriteThrough;
          pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                              ((pMVar8->fields).value,(MethodInfo *)0x0);
          (*(pMVar13->fields)._._.invoke_impl)
                    ((pMVar13->fields)._._.method_code,pOVar3,(pMVar13->fields)._._.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdatePosition(Vector3) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_UpdatePosition
               (LaserPointer *this,Vector3 *to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&StringLiteral_tz);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields).cube;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_1 = 0;
    fStack_2 = 0.0;
    pvVar3 = (obj->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar4 = (code *)FUN_?(&UNK_?);
      if (pcVar4 == (code *)0x0) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3,&uStack_1);
    uVar6 = to->x;
    fVar7 = to->y;
    fVar8 = to->z;
    (this->fields).relativeTargetPosition.x = (float)uVar6 - (float)uStack_1;
    (this->fields).relativeTargetPosition.y = fVar7 - uStack_1._4_4_;
    (this->fields).relativeTargetPosition.z = fVar8 - fStack_2;
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pLStackX_8 = (LaserPointer *)CONCAT44(pLStackX_8._4_4_,(this->fields).relativeTargetPosition.x);
    pOVar9 = (Object *)FUN_?(uRam_?,&pLStackX_8);
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      uVar5 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_tx,
                 pOVar9,(InsertionBehavior__Enum)uVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pLStackX_8._0_4_ = (this->fields).relativeTargetPosition.y;
      pOVar9 = (Object *)FUN_?(uRam_?,&pLStackX_8);
      uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_ty,
                 pOVar9,(InsertionBehavior__Enum)uVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pLStackX_8 = (LaserPointer *)
                   CONCAT44(pLStackX_8._4_4_,(this->fields).relativeTargetPosition.z);
      pOVar9 = (Object *)FUN_?(uRam_?,&pLStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_tz,
                 pOVar9,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      fVar7 = _UNK_?;
      uVar5 = 0;
      pLStackX_8 = this;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                      ,this_01,_UNK_?,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
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
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_01 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_10 = 0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar12 = (uint)((ulonglong)&pDStack_13 >> 0xc);
        uVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
        uVar5 = 0xADDR;
        do {
          uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
          puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
          LOCK();
          bVar17 = uVar15 == *puVar16;
          if (bVar17) {
            *puVar16 = uVar15 | 1L << (uVar12 & 0x3f);
          }
          UNLOCK();
        } while (!bVar17);
      }
      uStack_18 = (ulonglong)(uint)(this_01->fields)._version;
      puStack_19 = (undefined *)0x2;
      uStack_20 = uStack_18;
      pOStack_21 = (Object *)0x0;
      pOStack_22 = (Object *)0x0;
      pDStack_13 = this_01;
      pDStack_23 = this_01;
      while (bVar24 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                                &pDStack_23,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                               ), bVar24 != 0) {
        pDVar25 = (this->fields).syncBuffer;
        if (pDVar25 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar25,pOStack_21,pOStack_22,(InsertionBehavior__Enum)uVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      fVar8 = (this->fields).lastSyncTime;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar26 = (float)(*pcRam_?)();
      if (fVar8 + fVar7 < fVar26) {
        pDVar25 = (this->fields).syncBuffer;
        this_02 = (Dictionary_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object___ctor_4
                  (this_02,(IDictionary_2_System_Object_System_Object_ *)pDVar25,
                   (IEqualityComparer_1_System_Object_ *)0x0,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   ->klass->rgctx_data[8].method);
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        fVar7 = (float)(*pcRam_?)();
        (this->fields).lastSyncTime = fVar7;
        LaserPointer_SyncState(this,this_02,(MethodInfo *)0x0);
        this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)(this->fields).syncBuffer;
        if (this_00 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        TypeConverterRegistry+ConverterKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                  (this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                  );
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* LaserPointer() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer__ctor(LaserPointer *this,MethodInfo *method)

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
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields).offset.x = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields).offset.y = (float)uVar3;
  uVar3 = _UNK_?;
  (this->fields).beamObjectColor.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields).beamObjectColor.g = (float)uVar3;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar3 = _UNK_?;
  (this->fields).beamObjectColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar5 = _UNK_?;
  (this->fields).beamObjectColor.a = (float)uVar3;
  uVar3 = _UNK_?;
  (this->fields).beamEditColor.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields).beamEditColor.g = (float)uVar3;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar3 = _UNK_?;
  (this->fields).beamEditColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields).beamEditColor.a = (float)uVar3;
  (this->fields).offset.z = fVar4;
  uVar5 = _UNK_?;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar3 = _UNK_?;
  (this->fields).beamDeleteColor.r = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (this->fields).beamDeleteColor.g = (float)uVar3;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar3 = _UNK_?;
  (this->fields).beamDeleteColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (this->fields).beamDeleteColor.a = (float)uVar3;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar3 = _UNK_?;
  (this->fields).beamColor.r = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar2 = _UNK_?;
  (this->fields).beamColor.g = (float)uVar3;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar3 = _UNK_?;
  (this->fields).beamColor.b = (float)_UNK_?;
  _UNK_? = uVar2;
  (this->fields).beamColor.a = (float)uVar3;
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
  bVar7 = iRam_? != 0;
  (this->fields).syncBuffer = (Dictionary_2_System_Object_System_Object_ *)this_00;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields).syncBuffer >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
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

