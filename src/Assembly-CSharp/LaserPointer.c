
/* Void ActivateLaserForDuration(Single) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_ActivateLaserForDuration
               (LaserPointer *this,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_DoDeactivateLaserAfterDuration);
    cRam_? = '\x01';
  }
  (this->fields).isActive = 1;
  fVar1 = duration + (this->fields).activeDuration;
  if (_UNK_? <= fVar1) {
    fVar1 = _UNK_?;
  }
  (this->fields).activeDuration = fVar1;
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
  unaff_EDI = MVMaterialRepository::MVMaterialRepository_GetMaterial
                        (this_00,(this->fields).currentCubeMaterialId,(MethodInfo *)0x0);
  switch((this->fields).state) {
  case 0:
    pRVar4 = (this->fields).cubeRenderer;
    if (((pRVar4 != (Renderer *)0x0) &&
        (UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                   (pRVar4,(this->fields).currentCubeMaterial,(MethodInfo *)0x0),
        unaff_EDI != (MVMaterial *)0x0)) &&
       (pMVar5 = (this->fields).cubeMeshFilter, pMVar5 != (MeshFilter *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                (pMVar5,(unaff_EDI->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
      return;
    }
    break;
  case 1:
    pRVar4 = (this->fields).cubeRenderer;
    if (pRVar4 == (Renderer *)0x0) break;
    pMVar2 = (this->fields).insertingMaterial;
    goto code_?;
  case 2:
  case 5:
  case 6:
    pRVar4 = (this->fields).cubeRenderer;
    if (((pRVar4 != (Renderer *)0x0) &&
        (UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                   (pRVar4,(this->fields).currentCubeMaterial,(MethodInfo *)0x0),
        unaff_EDI != (MVMaterial *)0x0)) &&
       (pMVar5 = (this->fields).cubeMeshFilter, pMVar5 != (MeshFilter *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                (pMVar5,(unaff_EDI->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
      fVar6 = (this->fields).beamEditColor.g;
      fVar7 = (this->fields).beamEditColor.b;
      fVar8 = (this->fields).beamEditColor.a;
      (this->fields).beamColor.r = (this->fields).beamEditColor.r;
      (this->fields).beamColor.g = fVar6;
      (this->fields).beamColor.b = fVar7;
      (this->fields).beamColor.a = fVar8;
      return;
    }
    break;
  case 3:
    pRVar4 = (this->fields).cubeRenderer;
    if (pRVar4 == (Renderer *)0x0) break;
    pMVar2 = (this->fields).transformingMaterial;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              (pRVar4,pMVar2,(MethodInfo *)0x0);
    fVar6 = (this->fields).beamObjectColor.g;
    fVar7 = (this->fields).beamObjectColor.b;
    fVar8 = (this->fields).beamObjectColor.a;
    (this->fields).beamColor.r = (this->fields).beamObjectColor.r;
    (this->fields).beamColor.g = fVar6;
    (this->fields).beamColor.b = fVar7;
    (this->fields).beamColor.a = fVar8;
code_?:
    return;
  case 4:
    pRVar4 = (this->fields).cubeRenderer;
    if (pRVar4 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRVar4,(this->fields).deleteMaterial,(MethodInfo *)0x0);
      fVar6 = (this->fields).beamDeleteColor.g;
      fVar7 = (this->fields).beamDeleteColor.b;
      fVar8 = (this->fields).beamDeleteColor.a;
      (this->fields).beamColor.r = (this->fields).beamDeleteColor.r;
      (this->fields).beamColor.g = fVar6;
      (this->fields).beamColor.b = fVar7;
      (this->fields).beamColor.a = fVar8;
      return;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  bVar9 = 0;
  func_?();
  pbVar10 = (byte *)(unaff_EBX + -0x6ca9efae);
  bVar11 = (byte)extraout_EDX;
  bVar12 = CARRY1(*pbVar10,bVar11) || CARRY1(*pbVar10 + bVar11,bVar9);
  *pbVar10 = *pbVar10 + bVar11 + bVar9;
  pbVar10 = (byte *)((int)&unaff_EDI[-0x248d9f5].fields._PhysicalProperties_k__BackingField.
                          staticFriction + 3);
  bVar13 = (byte)((uint)extraout_EDX >> 8);
  bVar14 = CARRY1(*pbVar10,bVar13) || CARRY1(*pbVar10 + bVar13,bVar12);
  *pbVar10 = *pbVar10 + bVar13 + bVar12;
  pbVar10 = (byte *)(extraout_ECX + -0x48efad6d);
  bVar9 = *pbVar10;
  bVar15 = *pbVar10;
  *pbVar10 = bVar15 + bVar11 + bVar14;
  pcVar16 = (char *)((int)&unaff_EDI[-0xed6c3e].fields._PhysicalProperties_k__BackingField.bouncyness
                   + 3);
  *pcVar16 = *pcVar16 + bVar13 + (CARRY1(bVar9,bVar11) || CARRY1(bVar15 + bVar11,bVar14));
  pcVar17 = (code *)swi(3);
  (*pcVar17)(extraout_EDX,extraout_EDX);
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
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (LaserPointer *)CONCAT13((char)(this_00->fields).state,this._0_3_);
    value = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)StringLiteral_st,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    LaserPointer_SyncState(this_00,this_01,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__LaserPointer___DoDeactivateLaserAfterDuration_d__46);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__LaserPointer___DoDeactivateLaserAfterDuration_d__46);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
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
      this_01 = (UnityAction_1_System_Object_ *)func_?();
      if (this_01 != (UnityAction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_01,(Object *)this,MethodInfo__LaserPointer__OnChange_System__Object_,
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
  }
  uVar2 = func_?();
code_?:
  _ppMStack00000018 = uVar2;
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
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_8,newState,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,unaff_EDI);
    uStack_1 = 0xffffffff;
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                 ((this->fields).lastSyncTime + interval);
    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar13 <= (float)pDStack_10) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pDVar12 = (this->fields).syncBuffer;
    pDVar14 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             func_?();
    if (pDVar14 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_1
                (pDVar14,(IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)pDVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                );
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).lastSyncTime = fVar13;
      LaserPointer_SyncState
                (this,(Dictionary_2_System_Object_System_Object_ *)pDVar14,(MethodInfo *)0x0);
      pDVar14 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this->fields).syncBuffer;
      if (pDVar14 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                  (pDVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                  );
        goto code_?;
      }
    }
  }
code_?:
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  if ((this->fields).isLocal == 0) {
code_?:
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if ((pTVar1 == (Transform *)0x0) ||
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar1,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0))
    goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pVVar2->x;
    ppVVar4 = (Vector3__Class **)pVVar2->y;
    fVar5 = pVVar2->z;
    pTVar1 = (this->fields).cube;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    uVar6 = pVVar2->x;
    uVar7 = (this->fields).relativeTargetPosition.x;
    fVar8 = ((this->fields).relativeTargetPosition.z + pVVar2->z) - fVar5;
    fVar9 = ((float)uVar7 + (float)uVar6) - (float)puVar3;
    fVar10 = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
    pTVar1 = (this->fields).cube;
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
      this_00 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      value_00 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)StringLiteral_fire,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      LaserPointer_SyncState(this,this_00,(MethodInfo *)0x0);
    }
    if ((this->fields).isLocal == 0) goto code_?;
  }
  pTVar1 = (this->fields).cube;
  if (pTVar1 == (Transform *)0x0) goto code_?;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
  uVar14 = pVVar2->x;
  uVar15 = pVVar2->y;
  uVar16 = (this->fields).relativeTargetPosition.x;
  uVar17 = (this->fields).relativeTargetPosition.y;
  fVar5 = (float)uVar16 + (float)uVar14;
  fVar8 = (float)uVar17 + (float)uVar15;
  pTVar18 = (this->fields).cube;
  if (pTVar18 == (Transform *)0x0) goto code_?;
  puVar3 = &UNK_?;
  pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                      (pTVar18,(MethodInfo *)0x0);
  if (pTVar18 == (Transform *)0x0) goto code_?;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      ((Vector3 *)&stack0xffffffd0,pTVar18,(MethodInfo *)0x0);
  worldPosition.y = fVar8;
  worldPosition.x = fVar5;
  worldPosition.z = (float)puVar3;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_1
            (pTVar1,worldPosition,*pVVar2,(MethodInfo *)0x0);
  pLVar19 = (this->fields).lineRenderer;
  if (pLVar19 == (LineRenderer *)0x0) goto code_?;
  bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                     ((Renderer *)pLVar19,(MethodInfo *)0x0);
  if (bVar20 == 0) {
code_?:
    if ((this->fields).isActive == 0) goto code_?;
    fVar5 = _UNK_?;
    if ((this->fields).isLocal != 0) {
      fVar5 = _UNK_?;
    }
  }
  else {
    pTVar1 = (this->fields).cube;
    pLVar19 = (this->fields).lineRenderer;
    if ((pTVar1 == (Transform *)0x0) ||
       (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0),
       pLVar19 == (LineRenderer *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar19,0,*pVVar2,(MethodInfo *)0x0);
    if ((this->fields).isActive != 0) {
      pTVar1 = (this->fields).cube;
      pLVar19 = (this->fields).lineRenderer;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
      uVar21 = pVVar2->x;
      uVar22 = pVVar2->y;
      uVar23 = (this->fields).relativeCurrentTargetPosition.x;
      uVar24 = (this->fields).relativeCurrentTargetPosition.y;
      if (pLVar19 == (LineRenderer *)0x0) goto code_?;
      position.y = (float)uVar24 + (float)uVar22;
      position.x = (float)uVar23 + (float)uVar21;
      position.z = (this->fields).relativeCurrentTargetPosition.z + pVVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar19,1,position,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    fVar5 = 0.0;
  }
  fVar8 = (this->fields).currentLaserAlpha;
  if (fVar8 < fVar5) {
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar8 = fVar9 * _UNK_? + fVar8;
    if (fVar8 <= fVar5) {
      fVar5 = fVar8;
    }
code_?:
    (this->fields).currentLaserAlpha = fVar5;
  }
  else if (fVar5 < fVar8) {
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar8 = fVar8 - fVar9 * _UNK_?;
    if (fVar5 <= fVar8) {
      fVar5 = fVar8;
    }
    goto code_?;
  }
  fVar5 = (this->fields).currentLaserAlpha;
  (this->fields).beamColor.a = fVar5;
  pLVar19 = (this->fields).lineRenderer;
  if (pLVar19 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)pLVar19,
               TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fVar5 &&
               fVar5 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon,(MethodInfo *)0x0);
    pLVar19 = (this->fields).lineRenderer;
    if ((pLVar19 != (LineRenderer *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar19,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_01,StringLiteral__TintColor,(Vector4)(this->fields).beamColor,
                 (MethodInfo *)0x0);
      if ((this->fields).isLocal == 0) {
code_?:
        fVar9 = (this->fields).relativeCurrentTargetPosition.x;
        fVar25 = (this->fields).relativeCurrentTargetPosition.y;
        fVar5 = (this->fields).relativeCurrentTargetPosition.z;
        uVar26._0_4_ = (this->fields).relativeTargetPosition.x;
        uVar26._4_4_ = (this->fields).relativeTargetPosition.y;
        fVar8 = (this->fields).relativeTargetPosition.z;
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar10 = fVar10 * _UNK_?;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        else if (_UNK_? < fVar10) {
          fVar10 = _UNK_?;
        }
        (this->fields).relativeCurrentTargetPosition.x = ((float)uVar26 - fVar9) * fVar10 + fVar9;
        (this->fields).relativeCurrentTargetPosition.y =
             (SUB84(uVar26,4) - fVar25) * fVar10 + fVar25;
        (this->fields).relativeCurrentTargetPosition.z = (fVar8 - fVar5) * fVar10 + fVar5;
        return;
      }
      pLVar19 = (this->fields).lineRenderer;
      if (pLVar19 != (LineRenderer *)0x0) {
        bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                           ((Renderer *)pLVar19,(MethodInfo *)0x0);
        if (bVar20 != 0) goto code_?;
        pTVar1 = (this->fields).cube;
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
          uVar27 = pVVar2->x;
          uVar28 = pVVar2->y;
          fVar10 = (float)uVar27 * _UNK_?;
          fVar8 = fVar8 + (float)uVar28 * _UNK_?;
          fVar9 = fVar9 + pVVar2->z * _UNK_?;
          pTVar1 = (this->fields).cube;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
            uVar29 = pVVar2->x;
            uVar30 = pVVar2->y;
            fVar5 = (fVar5 + fVar10) - (float)uVar29;
            fVar8 = fVar8 - (float)uVar30;
            fVar9 = fVar9 - pVVar2->z;
            pTVar1 = (this->fields).cube;
            if ((pTVar1 != (Transform *)0x0) &&
               (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                    (pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
              fVar10 = pVVar2->x;
              fVar31 = pVVar2->y;
              fVar25 = pVVar2->z;
              forward.y = fVar8;
              forward.x = fVar5;
              forward.z = fVar9;
              pQVar32 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                                  ((Quaternion *)&stack0xffffffcc,forward,*pVVar2,(MethodInfo *)0x0
                                  );
              fVar5 = pQVar32->x;
              fVar8 = pQVar32->y;
              fVar9 = pQVar32->z;
              fVar33 = pQVar32->w;
              pTVar1 = (this->fields).cube;
              if (pTVar1 != (Transform *)0x0) {
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
                upwards.y = fVar31;
                upwards.x = fVar10;
                upwards.z = fVar25;
                pQVar32 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_LookRotation
                                    ((Quaternion *)&stack0xffffffcc,*pVVar2,upwards,
                                     (MethodInfo *)0x0);
                fVar10 = pQVar32->x;
                fVar31 = pQVar32->y;
                fVar25 = pQVar32->z;
                fVar34 = pQVar32->w;
                fVar35 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                a.y = fVar31;
                a.x = fVar10;
                a.z = fVar25;
                a.w = fVar34;
                b.y = fVar8;
                b.x = fVar5;
                b.z = fVar9;
                b.w = fVar33;
                pQVar32 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                    ((Quaternion *)&stack0xffffffcc,a,b,fVar35 * _UNK_?,
                                     (MethodInfo *)0x0);
                fVar5 = pQVar32->x;
                fVar8 = pQVar32->y;
                fVar9 = pQVar32->z;
                fVar10 = pQVar32->w;
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
                uVar36._0_4_ = pVVar2->x;
                uVar36._4_4_ = pVVar2->y;
                fVar8 = pVVar2->z;
                fVar37 = (float10)func_?();
                fVar5 = (float)fVar37;
                fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                fVar9 = fVar9 * _UNK_?;
                if (fVar9 < 0.0) {
                  fVar9 = 0.0;
                }
                else if (_UNK_? < fVar9) {
                  fVar9 = _UNK_?;
                }
                fVar5 = (_UNK_? - fVar5) * fVar9 + fVar5;
                (this->fields).relativeTargetPosition.x = (float)uVar36 * fVar5;
                (this->fields).relativeTargetPosition.y = SUB84(uVar36,4) * fVar5;
                (this->fields).relativeTargetPosition.z = fVar8 * fVar5;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
       typeHierarchyDepth <= (newvalue->klass->_1).typeHierarchyDepth) &&
     ((Dictionary_2_System_Object_System_Object___Class *)
      (newvalue->klass->_1).typeHierarchy
      [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth - 1] ==
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
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
                       (Object *)StringLiteral_tx,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_tx,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?();
      (this->fields).relativeTargetPosition.x = *pfVar3;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
                       (Object *)StringLiteral_ty,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_ty,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pOVar2);
      (this->fields).relativeTargetPosition.y = *pfVar3;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
                       (Object *)StringLiteral_tz,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_tz,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pOVar2);
      (this->fields).relativeTargetPosition.z = *pfVar3;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
                       (Object *)StringLiteral_st,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_st,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
      goto code_?;
      pbVar4 = (byte *)func_?(pOVar2);
      (this->fields).state = (uint)*pbVar4;
      LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
                       (Object *)StringLiteral_fire,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_fire,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pbVar5 = (bool *)func_?(pOVar2);
      (this->fields).isActive = *pbVar5;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
                       (Object *)StringLiteral_cm,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (newState,(Object *)StringLiteral_cm,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
        puVar6 = (uint8_t *)func_?();
        (this->fields).currentCubeMaterialId = *puVar6;
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack1 = (this->fields).currentCubeMaterialId;
    value = (Object *)func_?(TypeInfo__System__Byte,&stack0x0000000b);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)StringLiteral_cm,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    LaserPointer_SyncState(this,this_00,(MethodInfo *)0x0);
    LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    this_02 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (LaserPointer *)CONCAT13((char)(this_01->fields).state,this._0_3_);
      value = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_02,(Object *)StringLiteral_st,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      LaserPointer_SyncState(this_01,this_02,(MethodInfo *)0x0);
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
    pUVar4 = (UnityAction_1_System_ByteEnum_ *)
             func_?(TypeInfo__System__Action<unsigned_char>);
    if (pUVar4 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      if (this != (LaserPointer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
        UnityAction_1_System_ByteEnum___ctor
                  (pUVar4,(Object *)this,(this->klass->vtable).SetCurrentCubeMaterial.method,
                   (MethodInfo *)0x0);
        if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnCubeMaterialChanged
                    (pGVar3,(Action_1_Byte__1 *)pUVar4,(MethodInfo *)0x0);
          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar1 != (GameEventManager *)0x0) &&
             (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
             pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
            pGVar3 = (pGVar2->fields).LaserCommands;
            this_00 = (UnityAction_1_System_Single_ *)func_?();
            if (this_00 != (UnityAction_1_System_Single_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
              UnityAction_1_System_Single___ctor
                        (this_00,(Object *)this,
                         (this->klass->vtable).ActivateLaserForDuration.method,(MethodInfo *)0x0);
              if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                            0x0) {
                GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnActivateLaserForDuration
                          (pGVar3,(Action_1_Single_ *)this_00,(MethodInfo *)0x0);
                pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                   ((MethodInfo *)0x0);
                if ((pGVar1 != (GameEventManager *)0x0) &&
                   (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
                   pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                  pGVar3 = (pGVar2->fields).LaserCommands;
                  this_01 = (UnityAction_1_System_Int32Enum_ *)
                            func_?(TypeInfo__System__Action<LaserPointerState>);
                  if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                    Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                              (this_01,(Object *)this,(this->klass->vtable).ChangeState.method,
                               (MethodInfo *)0x0);
                    if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                   *)0x0) {
                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnChangeState
                                (pGVar3,(Action_1_LaserPointerState_ *)this_01,(MethodInfo *)0x0);
                      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                         ((MethodInfo *)0x0);
                      if ((pGVar1 != (GameEventManager *)0x0) &&
                         (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
                         pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                        pGVar3 = (pGVar2->fields).LaserCommands;
                        pUVar4 = (UnityAction_1_System_ByteEnum_ *)
                                 func_?(TypeInfo__System__Action<bool>);
                        if (pUVar4 != (UnityAction_1_System_ByteEnum_ *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                          ByteEnum]::UnityAction_1_System_ByteEnum___ctor
                                    (pUVar4,(Object *)this,
                                     (this->klass->vtable).SetLaserActiveState.method,
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
                              this_02 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
                                        func_?(
                                                  TypeInfo__System__Action<UnityEngine::Vector3>);
                              if (this_02 !=
                                  (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) {
                                Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                                SpawnRoleVariableTypes::
                                SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
                                SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
                                          (this_02,(Object *)this,
                                           (this->klass->vtable).UpdatePosition.method,
                                           (MethodInfo *)0x0);
                                if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                               *)0x0) {
                                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                  ::
                                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnUpdatePosition
                                            (pGVar3,(Action_1_UnityEngine_Vector3_ *)this_02,
                                             (MethodInfo *)0x0);
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
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
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
    puStack_3 = pVVar1->x;
    unique0x0000a404 = pVVar1->y;
    to.z = to.z - pVVar1->z;
    (this_01->fields).relativeTargetPosition.x = to.x - (float)puStack_3;
    (this_01->fields).relativeTargetPosition.y = to.y - (float)unique0x0000a404;
    (this_01->fields).relativeTargetPosition.z = to.z;
    this_02 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (LaserPointer *)(this_01->fields).relativeTargetPosition.x;
      pOVar4 = (Object *)func_?(TypeInfo__System__Single,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_02,(Object *)StringLiteral_tx,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar4 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_02,(Object *)StringLiteral_ty,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar4 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
      _puStack_18 = CONCAT44(this_02,&UNK_?);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_02,(Object *)StringLiteral_tz,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      to.x = 0.0;
      this = (LaserPointer *)0x3ecccccd;
      LaserPointer_IntervalSyncState(this_01,this_02,0.4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  (this->fields).beamObjectColor.r = _UNK_?;
  (this->fields).beamObjectColor.g = fVar3;
  (this->fields).beamObjectColor.b = fVar2;
  (this->fields).beamObjectColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).beamDeleteColor.r = _UNK_?;
  (this->fields).beamDeleteColor.g = fVar3;
  (this->fields).beamDeleteColor.b = fVar2;
  (this->fields).beamDeleteColor.a = fVar1;
  fVar6 = _UNK_?;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).offset.x = (float)uVar5;
  (this->fields).offset.y = (float)uVar4;
  (this->fields).offset.z = 0.5;
  (this->fields).beamEditColor.r = fVar3;
  (this->fields).beamEditColor.g = fVar2;
  (this->fields).beamEditColor.b = fVar1;
  (this->fields).beamEditColor.a = fVar6;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields).syncBuffer = this_00;
    func_?(&(this->fields).syncBuffer,this_00);
    fVar1 = _UNK_?;
    fVar2 = _UNK_?;
    fVar3 = _UNK_?;
    (this->fields).beamColor.r = _UNK_?;
    (this->fields).beamColor.g = fVar3;
    (this->fields).beamColor.b = fVar2;
    (this->fields).beamColor.a = fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

