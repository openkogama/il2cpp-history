
/* Void ActivateLaserForDuration(Single) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_ActivateLaserForDuration
               (LaserPointer *this,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_DoDeactivateLaserAfterDuration);
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
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
            ((MonoBehaviour *)this,StringLiteral_DoDeactivateLaserAfterDuration,(MethodInfo *)0x0);
  return;
}


/* Void ApplyMaterialForState() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_ApplyMaterialForState
               (LaserPointer *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (pMVar1 == (MaterialLoader *)0x0) goto code_?;
  pMVar2 = (pMVar1->fields)._CubeModelMaterial_k__BackingField;
  (this->fields).currentCubeMaterial = pMVar2;
  func_?(&(this->fields).currentCubeMaterial,pMVar2);
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar3->fields)._MaterialRepository_k__BackingField,
     this_00 == (MVMaterialRepository *)0x0)) goto code_?;
  pMVar4 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                     (this_00,(this->fields).currentCubeMaterialId,(MethodInfo *)0x0);
  switch((this->fields).state) {
  case 0:
    pRVar5 = (this->fields).cubeRenderer;
    if (((pRVar5 != (Renderer *)0x0) &&
        (UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                   (pRVar5,(this->fields).currentCubeMaterial,(MethodInfo *)0x0),
        pMVar4 != (MVMaterial *)0x0)) &&
       (pMVar6 = (this->fields).cubeMeshFilter, pMVar6 != (MeshFilter *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                (pMVar6,(pMVar4->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
      return;
    }
    break;
  case 1:
    pRVar5 = (this->fields).cubeRenderer;
    if (pRVar5 == (Renderer *)0x0) break;
    pMVar2 = (this->fields).insertingMaterial;
    goto code_?;
  case 2:
  case 5:
  case 6:
    pRVar5 = (this->fields).cubeRenderer;
    if (((pRVar5 != (Renderer *)0x0) &&
        (UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                   (pRVar5,(this->fields).currentCubeMaterial,(MethodInfo *)0x0),
        pMVar4 != (MVMaterial *)0x0)) &&
       (pMVar6 = (this->fields).cubeMeshFilter, pMVar6 != (MeshFilter *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                (pMVar6,(pMVar4->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
      fVar7 = (this->fields).beamEditColor.g;
      fVar8 = (this->fields).beamEditColor.b;
      fVar9 = (this->fields).beamEditColor.a;
      (this->fields).beamColor.r = (this->fields).beamEditColor.r;
      (this->fields).beamColor.g = fVar7;
      (this->fields).beamColor.b = fVar8;
      (this->fields).beamColor.a = fVar9;
      return;
    }
    break;
  case 3:
    pRVar5 = (this->fields).cubeRenderer;
    if (pRVar5 == (Renderer *)0x0) break;
    pMVar2 = (this->fields).transformingMaterial;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              (pRVar5,pMVar2,(MethodInfo *)0x0);
    fVar7 = (this->fields).beamObjectColor.g;
    fVar8 = (this->fields).beamObjectColor.b;
    fVar9 = (this->fields).beamObjectColor.a;
    (this->fields).beamColor.r = (this->fields).beamObjectColor.r;
    (this->fields).beamColor.g = fVar7;
    (this->fields).beamColor.b = fVar8;
    (this->fields).beamColor.a = fVar9;
code_?:
    return;
  case 4:
    pRVar5 = (this->fields).cubeRenderer;
    if (pRVar5 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRVar5,(this->fields).deleteMaterial,(MethodInfo *)0x0);
      fVar7 = (this->fields).beamDeleteColor.g;
      fVar8 = (this->fields).beamDeleteColor.b;
      fVar9 = (this->fields).beamDeleteColor.a;
      (this->fields).beamColor.r = (this->fields).beamDeleteColor.r;
      (this->fields).beamColor.g = fVar7;
      (this->fields).beamColor.b = fVar8;
      (this->fields).beamColor.a = fVar9;
      return;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  uVar10 = 0x1067;
  func_?();
  func_?(CONCAT22(uVar10,in_CS));
  return;
}


/* Void ChangeState(LaserPointerState) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_ChangeState
               (LaserPointer *this,LaserPointerState__Enum newState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_st);
    cRam_? = '\x01';
  }
  this_00 = this;
  (this->fields).state = newState;
  LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  this = (LaserPointer *)CONCAT13((char)(this_00->fields).state,this._0_3_);
  value = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_st,value
               ,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    LaserPointer_SyncState
              (this_00,(Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* IEnumerator DoDeactivateLaserAfterDuration() */

IEnumerator *
Assembly-CSharp.dll::LaserPointer::LaserPointer_DoDeactivateLaserAfterDuration
          (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LaserPointer___DoDeactivateLaserAfterDuration_d__45);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__LaserPointer___DoDeactivateLaserAfterDuration_d__45);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1);
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize(Boolean, MVRuntimeDataVariable, Transform) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_Initialize
               (LaserPointer *this,bool isLocal,MVRuntimeDataVariable *currentItem,Transform *parent
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__LaserPointer__OnChange_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  (this->fields).isLocal = isLocal;
  (this->fields).currentItem = currentItem;
  func_?(&(this->fields).currentItem,currentItem);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (this_00,parent,(MethodInfo *)0x0);
    if (isLocal != 0) {
      return;
    }
    if (currentItem != (MVRuntimeDataVariable *)0x0) {
      pMVar1 = (currentItem->fields).OnChange;
      this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_01,unaff_EDI,MethodInfo__LaserPointer__OnChange_System__Object_,
                 (MethodInfo *)0x0);
      pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar1,(Delegate *)this_01,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar1);
      if (pMVar1 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (currentItem->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        ppMStack3 = &(currentItem->fields).OnChange;
        pMStack4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        func_?();
        return;
      }
      pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar5 = pMVar1;
      }
      if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (currentItem->fields).OnChange = pMVar5;
        uVar2 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar1);
        pMStack4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMStack4 = pMVar1;
        }
        if (pMStack4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          ppMStack3 = &(currentItem->fields).OnChange;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar2 = func_?();
code_?:
  _ppMStack0000001c = uVar2;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void IntervalSyncState(Dictionary`2[System.Object,System.Object], Single) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_IntervalSyncState
               (LaserPointer *this,Dictionary_2_System_Object_System_Object_ *newState,
               float interval,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
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
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,(Dictionary_2_System_UInt32_System_Object_ *)newState,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (Object *)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar11 == 0) break;
      pDVar12 = (this->fields).syncBuffer;
      if (pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (pDVar12,DStack_6._current.key,DStack_6._current.value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,unaff_EDI);
    uStack_1 = 0xffffffff;
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                 ((this->fields).lastSyncTime + interval);
    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((float)pDStack_10 < fVar13) {
      pDVar12 = (this->fields).syncBuffer;
      this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object___ctor_1
                (this_01,(IDictionary_2_System_Object_System_Object_ *)pDVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                );
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).lastSyncTime = fVar13;
      LaserPointer_SyncState(this,this_01,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this->fields).syncBuffer;
      if (this_00 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_LateUpdate
               (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral_fire);
    cRam_? = '\x01';
  }
  this_00 = this;
  if ((this->fields).isLocal == 0) {
code_?:
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if ((pTVar1 == (Transform *)0x0) ||
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar1,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0))
    goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pVVar2->x;
    ppVVar4 = (Vector3__Class **)pVVar2->y;
    fVar5 = pVVar2->z;
    pTVar1 = (this_00->fields).cube;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    uVar6 = pVVar2->x;
    uVar7 = (this_00->fields).relativeTargetPosition.x;
    fVar8 = ((this_00->fields).relativeTargetPosition.z + pVVar2->z) - fVar5;
    fVar9 = ((float)uVar7 + (float)uVar6) - (float)puVar3;
    fVar10 = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
    pTVar1 = (this_00->fields).cube;
    if (cRam_? == '\0') {
      ppVVar4 = &TypeInfo__UnityEngine__Vector3;
      puVar3 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar12 = (pVVar11->upVector).x;
    uVar13 = (pVVar11->upVector).y;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    value.y = fVar10 * _UNK_? + (float)ppVVar4 + (float)uVar13;
    value.x = fVar9 * _UNK_? + (float)puVar3 + (float)uVar12;
    value.z = fVar8 * _UNK_? + fVar5 + (pVVar11->upVector).z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar1,value,(MethodInfo *)0x0);
  }
  else {
    if ((this->fields).isFiring != (this->fields).isActive) {
      (this->fields).isFiring = (this->fields).isActive;
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (LaserPointer *)CONCAT13((this_00->fields).isFiring,this._0_3_);
      value_00 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
      if (this_01 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_fire,
                 value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      LaserPointer_SyncState
                (this_00,(Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
    }
    if ((this_00->fields).isLocal == 0) goto code_?;
  }
  pTVar1 = (this_00->fields).cube;
  if (pTVar1 == (Transform *)0x0) goto code_?;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
  uVar14 = pVVar2->x;
  uVar15 = pVVar2->y;
  uVar16 = (this_00->fields).relativeTargetPosition.x;
  uVar17 = (this_00->fields).relativeTargetPosition.y;
  fVar5 = (this_00->fields).relativeTargetPosition.z + pVVar2->z;
  uVar18._4_4_ = (float)uVar17 + (float)uVar15;
  uVar18._0_4_ = (float)uVar16 + (float)uVar14;
  pTVar19 = (this_00->fields).cube;
  if ((pTVar19 == (Transform *)0x0) ||
     (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                          (pTVar19,(MethodInfo *)0x0), pTVar19 == (Transform *)0x0))
  goto code_?;
  this = (LaserPointer *)0x0;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      ((Vector3 *)&stack0xffffffe0,pTVar19,(MethodInfo *)0x0);
  uVar20 = pVVar2->x;
  uVar21 = pVVar2->y;
  in_stack_22 = pVVar2->z;
  worldPosition.z = fVar5;
  worldPosition.x = (float)uVar18;
  worldPosition.y = SUB84(uVar18,4);
  this = (LaserPointer *)uVar20;
  method = (MethodInfo *)uVar21;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_1
            (pTVar1,worldPosition,*pVVar2,(MethodInfo *)0x0);
  pLVar23 = (this_00->fields).lineRenderer;
  if (pLVar23 == (LineRenderer *)0x0) goto code_?;
  bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                     ((Renderer *)pLVar23,(MethodInfo *)0x0);
  if (bVar24 == 0) {
code_?:
    if ((this_00->fields).isActive == 0) goto code_?;
    this = _UNK_?;
    if ((this_00->fields).isLocal != 0) {
      this = _UNK_?;
    }
  }
  else {
    pTVar1 = (this_00->fields).cube;
    pLVar23 = (this_00->fields).lineRenderer;
    if ((pTVar1 == (Transform *)0x0) ||
       (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0),
       pLVar23 == (LineRenderer *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar23,0,*pVVar2,(MethodInfo *)0x0);
    if ((this_00->fields).isActive != 0) {
      pTVar1 = (this_00->fields).cube;
      pLVar23 = (this_00->fields).lineRenderer;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
      uVar25 = pVVar2->x;
      uVar26 = pVVar2->y;
      uVar27 = (this_00->fields).relativeTargetPosition.x;
      uVar28 = (this_00->fields).relativeTargetPosition.y;
      if (pLVar23 == (LineRenderer *)0x0) goto code_?;
      position.y = (float)uVar28 + (float)uVar26;
      position.x = (float)uVar27 + (float)uVar25;
      position.z = (this_00->fields).relativeTargetPosition.z + pVVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar23,1,position,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    this = (LaserPointer *)0x0;
  }
  fVar5 = (this_00->fields).currentLaserAlpha;
  if (fVar5 < (float)this) {
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pLVar29 = (LaserPointer *)(fVar8 * _UNK_? + fVar5);
    pLVar30 = this;
    if ((float)pLVar29 <= (float)this) {
      pLVar30 = pLVar29;
    }
code_?:
    (this_00->fields).currentLaserAlpha = (float)pLVar30;
  }
  else if ((float)this < fVar5) {
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pLVar29 = (LaserPointer *)(fVar5 - fVar8 * _UNK_?);
    pLVar30 = this;
    if ((float)this <= (float)pLVar29) {
      pLVar30 = pLVar29;
    }
    goto code_?;
  }
  fVar5 = (this_00->fields).currentLaserAlpha;
  (this_00->fields).beamColor.a = fVar5;
  pLVar23 = (this_00->fields).lineRenderer;
  if (pLVar23 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)pLVar23,
               TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fVar5 &&
               fVar5 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon,(MethodInfo *)0x0);
    pLVar23 = (this_00->fields).lineRenderer;
    if ((pLVar23 != (LineRenderer *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar23,(MethodInfo *)0x0), this_02 != (Material *)0x0)) {
      this = (LaserPointer *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_02,StringLiteral__TintColor,(Vector4)(this_00->fields).beamColor,
                 (MethodInfo *)0x0);
      if ((this_00->fields).isLocal == 0) {
        return;
      }
      pLVar23 = (this_00->fields).lineRenderer;
      if (pLVar23 != (LineRenderer *)0x0) {
        bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                           ((Renderer *)pLVar23,(MethodInfo *)0x0);
        if (bVar24 != 0) {
          return;
        }
        pTVar1 = (this_00->fields).cube;
        if ((pTVar1 != (Transform *)0x0) &&
           (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                (pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
          fVar5 = pVVar2->x;
          fVar8 = pVVar2->y;
          fVar9 = pVVar2->z;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
          uVar31 = pVVar2->x;
          uVar32 = pVVar2->y;
          this = (LaserPointer *)(fVar5 + (float)uVar31 * _UNK_?);
          fVar8 = fVar8 + (float)uVar32 * _UNK_?;
          fVar9 = fVar9 + pVVar2->z * _UNK_?;
          pTVar1 = (this_00->fields).cube;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
            uVar33 = pVVar2->x;
            uVar34 = pVVar2->y;
            fVar9 = fVar9 - pVVar2->z;
            uVar35._4_4_ = fVar8 - (float)uVar34;
            uVar35._0_4_ = (float)this - (float)uVar33;
            pTVar1 = (this_00->fields).cube;
            if ((pTVar1 != (Transform *)0x0) &&
               (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                    (pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
              fVar10 = pVVar2->x;
              fVar36 = pVVar2->y;
              fVar5 = pVVar2->z;
              forward.z = fVar9;
              forward.x = (float)uVar35;
              forward.y = SUB84(uVar35,4);
              pQVar37 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                                  ((Quaternion *)&stack0xffffffcc,forward,*pVVar2,(MethodInfo *)0x0
                                  );
              fVar8 = pQVar37->x;
              fVar9 = pQVar37->y;
              fVar38 = pQVar37->z;
              fVar39 = pQVar37->w;
              pTVar1 = (this_00->fields).cube;
              if (pTVar1 != (Transform *)0x0) {
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
                upwards.y = fVar36;
                upwards.x = fVar10;
                upwards.z = fVar5;
                pQVar37 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_LookRotation
                                    ((Quaternion *)&stack0xffffffcc,*pVVar2,upwards,
                                     (MethodInfo *)0x0);
                fVar5 = pQVar37->x;
                fVar10 = pQVar37->y;
                fVar36 = pQVar37->z;
                fVar40 = pQVar37->w;
                fVar41 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                this = (LaserPointer *)(fVar41 * _UNK_?);
                a.y = fVar10;
                a.x = fVar5;
                a.z = fVar36;
                a.w = fVar40;
                b.y = fVar9;
                b.x = fVar8;
                b.z = fVar38;
                b.w = fVar39;
                pQVar37 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                    ((Quaternion *)&stack0xffffffcc,a,b,(float)this,
                                     (MethodInfo *)0x0);
                fVar5 = pQVar37->x;
                fVar8 = pQVar37->y;
                fVar9 = pQVar37->z;
                fVar10 = pQVar37->w;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                rotation.y = fVar8;
                rotation.x = fVar5;
                rotation.z = fVar9;
                rotation.w = fVar10;
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_op_Multiply_1
                                    ((Vector3 *)&stack0xffffffe0,rotation,
                                     TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                                     (MethodInfo *)0x0);
                uVar42._0_4_ = pVVar2->x;
                uVar42._4_4_ = pVVar2->y;
                fVar8 = pVVar2->z;
                fVar43 = (float10)func_?();
                fVar5 = (float)fVar43;
                fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                pLVar29 = (LaserPointer *)(fVar9 * _UNK_?);
                if ((float)pLVar29 < 0.0) {
                  pLVar29 = (LaserPointer *)0x0;
                }
                else if ((float)_UNK_? < (float)pLVar29) {
                  pLVar29 = _UNK_?;
                }
                fVar5 = (_UNK_? - fVar5) * (float)pLVar29 + fVar5;
                (this_00->fields).relativeTargetPosition.x = (float)uVar42 * fVar5;
                (this_00->fields).relativeTargetPosition.y = SUB84(uVar42,4) * fVar5;
                (this_00->fields).relativeTargetPosition.z = fVar8 * fVar5;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
  return;
}


/* Void OnChange(Object) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnChange
               (LaserPointer *this,Object *newvalue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  if (newvalue == (Object *)0x0) {
    LaserPointer_OnStateChanged
              (this,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
    return;
  }
  if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment <= (newvalue->klass->_1).naturalAligment) &&
     ((Dictionary_2_System_Object_System_Object___Class *)
      (newvalue->klass->_1).typeHierarchy
      [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment - 1] ==
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    LaserPointer_OnStateChanged
              (this,(Dictionary_2_System_Object_System_Object_ *)newvalue,(MethodInfo *)0x0);
    return;
  }
  func_?(newvalue,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnDisable
               (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).cube;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pTVar1 = (this->fields).cube;
  if ((pTVar1 != (Transform *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnEnable(LaserPointer *this,MethodInfo *method)

{
  if (((this->fields).isLocal == 0) && ((this->fields).isActive == 0)) {
    this_00 = (this->fields).lineRenderer;
    (this->fields).currentLaserAlpha = 0.0;
    if (this_00 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)this_00,0,(MethodInfo *)0x0);
  }
  this_01 = (this->fields).cube;
  if (this_01 != (Transform *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnEquip(LaserPointer *this,MethodInfo *method)

{
  this_00 = this;
  if ((this->fields).isLocal != 0) {
    pTVar1 = (this->fields).cube;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if (this_01 == (Camera *)0x0) goto code_?;
    value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_01,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (this->fields).cube;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    uVar2 = (this->fields).offset.x;
    uVar3 = (this->fields).offset.y;
    this = (LaserPointer *)(this->fields).offset.z;
    fVar4 = (float)uVar3;
    value_00.x = (float)uVar2;
    value_00 = (Vector3)CONCAT84(uVar5,value_00.x);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar1,value_00,(MethodInfo *)0x0);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this_00,1,(MethodInfo *)0x0);
  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (pGVar6 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,1,(MethodInfo *)0x0);
    pTVar1 = (this_00->fields).cube;
    if (pTVar1 != (Transform *)0x0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnStateChanged
               (LaserPointer *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_fire);
    func_?(&StringLiteral_st);
    func_?(&StringLiteral_tz);
    func_?(&StringLiteral_cm);
    func_?(&StringLiteral_ty);
    func_?(&StringLiteral_tx);
    cRam_? = '\x01';
  }
  if ((this->fields).isLocal != 0) {
    return;
  }
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_tx,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                         (Object *)StringLiteral_tx,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar3 = (float *)func_?();
      (this->fields).relativeTargetPosition.x = *pfVar3;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_ty,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                         (Object *)StringLiteral_ty,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar3 = (float *)func_?(TVar2.m_Index);
      (this->fields).relativeTargetPosition.y = *pfVar3;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_tz,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                         (Object *)StringLiteral_tz,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar3 = (float *)func_?(TVar2.m_Index);
      (this->fields).relativeTargetPosition.z = *pfVar3;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_st,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                         (Object *)StringLiteral_st,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Byte->_0).element_class) goto code_?;
      pbVar4 = (byte *)func_?(TVar2.m_Index);
      (this->fields).state = (uint)*pbVar4;
      LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_fire,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                         (Object *)StringLiteral_fire,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
      pbVar5 = (bool *)func_?(TVar2.m_Index);
      pAVar6 = (this->fields).OnLaserActive;
      bVar1 = *pbVar5;
      (this->fields).isActive = bVar1;
      if (pAVar6 != (Action_2_Boolean_Boolean_ *)0x0) {
        (*(pAVar6->fields)._._.invoke_impl)
                  ((pAVar6->fields)._._.method_code,(this->fields).isLocal,bVar1,
                   (pAVar6->fields)._._.method);
      }
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_cm,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_cm,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Byte->_0).element_class) {
        puVar7 = (uint8_t *)func_?();
        (this->fields).currentCubeMaterialId = *puVar7;
        LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetCurrentCubeMaterial(Byte) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SetCurrentCubeMaterial
               (LaserPointer *this,uint8_t cubeMaterial,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_cm);
    cRam_? = '\x01';
  }
  (this->fields).currentCubeMaterialId = cubeMaterial;
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
  uStack1 = (this->fields).currentCubeMaterialId;
  value = (Object *)func_?(TypeInfo__System__Byte,&stack0x0000000b);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_cm,value
               ,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    LaserPointer_SyncState
              (this,(Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
    LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLaserActiveState(Boolean) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SetLaserActiveState
               (LaserPointer *this,bool isActive,MethodInfo *method)

{
  pAVar1 = (this->fields).OnLaserActive;
  (this->fields).isActive = isActive;
  if (pAVar1 != (Action_2_Boolean_Boolean_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).isLocal,_isActive,
               (pAVar1->fields)._._.method);
  }
  return;
}


/* Void SetLaserCubeVisible(Boolean) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SetLaserCubeVisible
               (LaserPointer *this,bool visible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pRVar2 = (this->fields).cubeRenderer;
  if (pRVar2 != (Renderer *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)_visible;
    pRStack_3 = pRVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_Start(LaserPointer *this,MethodInfo *method)

{
  this_01 = this;
  this_00 = (this->fields).lineRenderer;
  if (this_00 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
              (this_00,2,(MethodInfo *)0x0);
    iVar1 = (this_01->fields).state;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&StringLiteral_st);
      cRam_? = '\x01';
    }
    (this_01->fields).state = iVar1;
    LaserPointer_ApplyMaterialForState(this_01,(MethodInfo *)0x0);
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (LaserPointer *)CONCAT13((char)(this_01->fields).state,this._0_3_);
    value = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    if (this_02 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_st,
                 value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      LaserPointer_SyncState
                (this_01,(Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SubscribeToCommands() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SubscribeToCommands
               (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Action<float>);
    func_?(&TypeInfo__System__Action<LaserPointerState>);
    func_?(&TypeInfo__System__Action<unsigned_char>);
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
     pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
    pGVar3 = (pGVar2->fields).LaserCommands;
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)
             func_?(TypeInfo__System__Action<unsigned_char>);
    if (this != (LaserPointer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar4,(Object *)this,(this->klass->vtable).ChangeState.methodPtr,(MethodInfo *)0x0
                );
      if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnCubeMaterialChanged
                  (pGVar3,(Action_1_Byte__1 *)pUVar4,(MethodInfo *)0x0);
        pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar1 != (GameEventManager *)0x0) &&
           (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
           pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
          pGVar3 = (pGVar2->fields).LaserCommands;
          this_00 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>)
          ;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    (this_00,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
          if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)
          {
            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnActivateLaserForDuration
                      (pGVar3,(Action_1_Single_ *)this_00,(MethodInfo *)0x0);
            pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if ((pGVar1 != (GameEventManager *)0x0) &&
               (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
               pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
              pGVar3 = (pGVar2->fields).LaserCommands;
              pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                       func_?(TypeInfo__System__Action<LaserPointerState>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        (pUVar4,(Object *)this,(this->klass->vtable).UpdatePosition.methodPtr,
                         (MethodInfo *)0x0);
              if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                            0x0) {
                GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnChangeState
                          (pGVar3,(Action_1_LaserPointerState_ *)pUVar4,(MethodInfo *)0x0);
                pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                   ((MethodInfo *)0x0);
                if ((pGVar1 != (GameEventManager *)0x0) &&
                   (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
                   pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                  pGVar3 = (pGVar2->fields).LaserCommands;
                  pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                           func_?(TypeInfo__System__Action<bool>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]
                  ::UnityAction_1_System_Int32Enum___ctor
                            (pUVar4,(Object *)this,
                             (this->klass->vtable).SetCurrentCubeMaterial.methodPtr,
                             (MethodInfo *)0x0);
                  if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                 *)0x0) {
                    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnLaserActiveChanged
                              (pGVar3,(Action_1_Boolean_ *)pUVar4,(MethodInfo *)0x0);
                    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                       ((MethodInfo *)0x0);
                    if ((pGVar1 != (GameEventManager *)0x0) &&
                       (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
                       pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                      pGVar3 = (pGVar2->fields).LaserCommands;
                      this_01 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
                                func_?(TypeInfo__System__Action<UnityEngine::Vector3>);
                      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                      SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::
                      Vector3]::SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
                                (this_01,(Object *)this,
                                 (this->klass->vtable).ActivateLaserForDuration.methodPtr,
                                 (MethodInfo *)0x0);
                      if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                     *)0x0) {
                        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnUpdatePosition
                                  (pGVar3,(Action_1_UnityEngine_Vector3_ *)this_01,(MethodInfo *)0x0
                                  );
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SyncState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SyncState
               (LaserPointer *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      value = (Object *)func_?(TypeInfo__System__Int32);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (newState,(Object *)StringLiteral_type,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    this_00 = (this->fields).currentItem;
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (this_00,(Object *)newState,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdatePosition(Vector3) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_UpdatePosition
               (LaserPointer *this,Vector3 to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_tz);
    func_?(&StringLiteral_ty);
    func_?(&StringLiteral_tx);
    cRam_? = '\x01';
  }
  this_01 = this;
  this_00 = (this->fields).cube;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    puStack_4 = (undefined *)pVVar1->z;
    to.z = to.z - (float)puStack_4;
    (this_01->fields).relativeTargetPosition.x = to.x - (float)(undefined4)uStack_3;
    (this_01->fields).relativeTargetPosition.y = to.y - (float)uStack_3._4_4_;
    (this_01->fields).relativeTargetPosition.z = to.z;
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (LaserPointer *)(this_01->fields).relativeTargetPosition.x;
    pOVar5 = (Object *)func_?(TypeInfo__System__Single,&this);
    if (this_02 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_tx,
                 pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar5 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_ty,
                 pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar5 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_tz,
                 pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      LaserPointer_IntervalSyncState
                (this_01,(Dictionary_2_System_Object_System_Object_ *)this_02,0.4,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* LaserPointer() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer__ctor(LaserPointer *this,MethodInfo *method)

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
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  uVar5 = _UNK_?;
  (this->fields).offset.x = (float)_UNK_?;
  fVar6 = _UNK_?;
  fVar7 = _UNK_?;
  fVar8 = _UNK_?;
  fVar9 = _UNK_?;
  (this->fields).offset.y = (float)uVar5;
  (this->fields).offset.z = 0.5;
  (this->fields).beamObjectColor.r = fVar4;
  (this->fields).beamObjectColor.g = fVar3;
  (this->fields).beamObjectColor.b = fVar2;
  (this->fields).beamObjectColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields).beamDeleteColor.r = fVar9;
  (this->fields).beamDeleteColor.g = fVar8;
  (this->fields).beamDeleteColor.b = fVar7;
  (this->fields).beamDeleteColor.a = fVar6;
  (this->fields).beamEditColor.r = fVar4;
  (this->fields).beamEditColor.g = fVar3;
  (this->fields).beamEditColor.b = fVar2;
  (this->fields).beamEditColor.a = fVar1;
  (this->fields).beamColor.r = fVar9;
  (this->fields).beamColor.g = fVar8;
  (this->fields).beamColor.b = fVar7;
  (this->fields).beamColor.a = fVar6;
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
  (this->fields).syncBuffer = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(&(this->fields).syncBuffer,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

