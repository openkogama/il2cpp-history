
/* Void ActivateLaserForDuration(Single) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_ActivateLaserForDuration
               (LaserPointer *this,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).activeDuration;
  (this->fields).isActive = 1;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                    (fVar1 + duration,0.2,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (this_00 == (MaterialLoader *)0x0) goto code_?;
  pSVar1 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
  (this->fields).currentCubeMaterial = (Material *)pSVar1;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 == (MVNetworkGame *)0x0) ||
     (this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)this_01,(MethodInfo *)0x0),
     this_02 == (CelestialParam *)0x0)) goto code_?;
  this_03 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                      ((MVMaterialRepository *)this_02,(this->fields).currentCubeMaterialId,
                       (MethodInfo *)0x0);
  switch((this->fields).state) {
  case 0:
    pRVar2 = (this->fields).cubeRenderer;
    if (pRVar2 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRVar2,(this->fields).currentCubeMaterial,(MethodInfo *)0x0);
      pMVar3 = (this->fields).cubeMeshFilter;
      if ((this_03 != (MVMaterial *)0x0) &&
         (pMVar4 = (Mesh *)System.dll::System::Collections::Generic::
                           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                           ::Single,System::Object]::
                           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                       *)this_03,(MethodInfo *)0x0), pMVar3 != (MeshFilter *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                  (pMVar3,pMVar4,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case 1:
    pRVar2 = (this->fields).cubeRenderer;
    if (pRVar2 == (Renderer *)0x0) break;
    method = (MethodInfo *)(this->fields).insertingMaterial;
    goto code_?;
  case 2:
  case 5:
  case 6:
    pRVar2 = (this->fields).cubeRenderer;
    if (pRVar2 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRVar2,(this->fields).currentCubeMaterial,(MethodInfo *)0x0);
      pMVar3 = (this->fields).cubeMeshFilter;
      if ((this_03 != (MVMaterial *)0x0) &&
         (pMVar4 = (Mesh *)System.dll::System::Collections::Generic::
                           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                           ::Single,System::Object]::
                           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                       *)this_03,(MethodInfo *)0x0), pMVar3 != (MeshFilter *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                  (pMVar3,pMVar4,(MethodInfo *)0x0);
        fVar5 = (this->fields).beamEditColor.g;
        fVar6 = (this->fields).beamEditColor.b;
        fVar7 = (this->fields).beamEditColor.a;
        (this->fields).beamColor.r = (this->fields).beamEditColor.r;
        (this->fields).beamColor.g = fVar5;
        (this->fields).beamColor.b = fVar6;
        (this->fields).beamColor.a = fVar7;
        return;
      }
    }
    break;
  case 3:
    pRVar2 = (this->fields).cubeRenderer;
    if (pRVar2 == (Renderer *)0x0) break;
    method = (MethodInfo *)(this->fields).transformingMaterial;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              (pRVar2,(Material *)method,(MethodInfo *)0x0);
    fVar5 = (this->fields).beamObjectColor.g;
    fVar6 = (this->fields).beamObjectColor.b;
    fVar7 = (this->fields).beamObjectColor.a;
    (this->fields).beamColor.r = (this->fields).beamObjectColor.r;
    (this->fields).beamColor.g = fVar5;
    (this->fields).beamColor.b = fVar6;
    (this->fields).beamColor.a = fVar7;
code_?:
    return;
  case 4:
    pRVar2 = (this->fields).cubeRenderer;
    if (pRVar2 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRVar2,(this->fields).deleteMaterial,(MethodInfo *)0x0);
      fVar5 = (this->fields).beamDeleteColor.g;
      fVar6 = (this->fields).beamDeleteColor.b;
      fVar7 = (this->fields).beamDeleteColor.a;
      (this->fields).beamColor.r = (this->fields).beamDeleteColor.r;
      (this->fields).beamColor.g = fVar5;
      (this->fields).beamColor.b = fVar6;
      (this->fields).beamColor.a = fVar7;
      return;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  bVar8 = 0;
  uVar9 = func_?();
  iVar10 = (int)((ulonglong)uVar9 >> 0x20);
  *(int *)uVar9 = (*(int *)uVar9 - iVar10) - (uint)bVar8;
  piVar11 = (int *)CONCAT31((int3)((ulonglong)uVar9 >> 8),(byte)uVar9 - 0x34);
  *piVar11 = (*piVar11 - iVar10) - (uint)((byte)uVar9 < 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void ChangeState(LaserPointerState) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_ChangeState
               (LaserPointer *this,LaserPointerState__Enum newState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  (this->fields).state = newState;
  LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
  newState_00 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)newState_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  this = (LaserPointer *)CONCAT13((char)(this_00->fields).state,this._0_3_);
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (newState_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)newState_00,StringLiteral_st,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    LaserPointer_SyncState(this_00,newState_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LaserPointer___DoDeactivateLaserAfterDuration_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isLocal = isLocal;
  (this->fields).currentItem = currentItem;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (this_00,parent,(MethodInfo *)0x0);
    if (isLocal != 0) {
      return;
    }
    if (currentItem != (MVRuntimeDataVariable *)0x0) {
      pMVar1 = (currentItem->fields).OnChange;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,unaff_EDI,MethodInfo__LaserPointer__OnChange_System__Object_,
                 (MethodInfo *)0x0);
      pMStack2 =
           (MVRuntimeDataVariable_OnChangeDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_01,(MethodInfo *)0x0);
      pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMStack2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
        (currentItem->fields).OnChange = pMVar1;
        return;
      }
      if (pMStack2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar1 = pMStack2;
      }
      pMStack3 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar1 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pMStack2 = extraout_ECX;
  pMStack3 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                      &stack0xffffffb4,(Dictionary_2_WinningConditionType_System_Object_ *)newState,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
  auStack_6._0_4_ = pDVar10->dictionary;
  auStack_6._4_4_ = pDVar10->next;
  auStack_6._8_4_ = pDVar10->stamp;
  auStack_6._12_4_ = (pDVar10->current).key;
  auStack_6._16_4_ = (pDVar10->current).value;
  uStack_1 = 0;
  while (cVar11 = func_?(), cVar11 != '\0') {
    KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)auStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                          );
    pDVar12 = (this->fields).syncBuffer;
    key = (String *)func_?();
    value = (Theme *)func_?();
    if (pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)pDVar12,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
  }
  *puStack_8 = 0x4c;
  uStack_1 = 0xffffffff;
  func_?();
  puStack_8 = (undefined4 *)((this->fields).lastSyncTime + interval);
  fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((float)puStack_8 < fVar13) {
    pDVar12 = (this->fields).syncBuffer;
    newState_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)newState_00,(int32_t)pDVar12,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).lastSyncTime = fVar13;
    LaserPointer_SyncState(this,newState_00,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).syncBuffer;
    if (this_00 ==
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
              );
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_LateUpdate
               (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  bVar1 = (this->fields).isLocal;
  bVar2 = bVar1 == 0;
  if (!bVar2) {
    bVar3 = (this->fields).isActive;
    if ((this->fields).isFiring != bVar3) {
      (this->fields).isFiring = bVar3;
      newState = (Dictionary_2_System_Object_System_Object_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)newState,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (LaserPointer *)CONCAT13((this_00->fields).isFiring,this._0_3_);
      value = (CrossPlatformInputManager_VirtualButton *)
              func_?(TypeInfo__System__Boolean,(int)&this + 3);
      if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)newState,StringLiteral_fire,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      LaserPointer_SyncState(this_00,newState,(MethodInfo *)0x0);
      bVar1 = (this_00->fields).isLocal;
    }
    bVar2 = bVar1 == 0;
  }
  this = (LaserPointer *)0x0;
  if (bVar2) {
    pTVar4 = (this_00->fields).cube;
    if (pTVar4 == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc8,pTVar4,(MethodInfo *)0x0);
    uVar6._0_4_ = (this_00->fields).relativeTargetPosition.x;
    uVar6._4_4_ = (this_00->fields).relativeTargetPosition.y;
    fVar7 = (this_00->fields).relativeTargetPosition.z;
    uVar8._0_4_ = pVVar5->x;
    uVar8._4_4_ = pVVar5->y;
    fVar9 = pVVar5->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_05.z = fVar9;
    a_05.x = (float)(int)uVar8;
    a_05.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    b_01.z = fVar7;
    b_01.x = (float)(int)uVar6;
    b_01.y = (float)(int)((ulonglong)uVar6 >> 0x20);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffc8,a_05,b_01,(MethodInfo *)0x0);
    fVar7 = pVVar5->x;
    fVar9 = pVVar5->y;
    uVar8._0_4_ = pVVar5->z;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((pTVar4 == (Transform *)0x0) ||
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar4,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
    goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc8,pTVar4,(MethodInfo *)0x0);
    a_10.y = fVar9;
    a_10.x = fVar7;
    a_10.z = (float)uVar8;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffc8,a_10,*pVVar5,(MethodInfo *)0x0);
    uVar10 = pVVar5->x;
    uVar8._0_4_ = pVVar5->z;
    uVar6._0_4_ = 0;
    func_?(&stack0xffffffb8,0);
    pTVar4 = (this_00->fields).cube;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((pTVar11 == (Transform *)0x0) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar11,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc8,pTVar11,(MethodInfo *)0x0);
    fVar12 = pVVar5->x;
    fVar13 = pVVar5->y;
    uVar8._4_4_ = pVVar5->z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                        ((Vector3 *)&stack0xffffffc8,(MethodInfo *)0x0);
    a_03.y = fVar13;
    a_03.x = fVar12;
    a_03.z = uVar8._4_4_;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffc8,a_03,*pVVar5,(MethodInfo *)0x0);
    fVar14 = pVVar5->x;
    fVar15 = pVVar5->y;
    uVar8._4_4_ = pVVar5->z;
    a_06.y = (float)(undefined4)uVar6;
    a_06.x = (float)uVar10;
    a_06.z = (float)uVar8;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffc8,a_06,1.25,(MethodInfo *)0x0);
    a_07.y = fVar15;
    a_07.x = fVar14;
    a_07.z = uVar8._4_4_;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffc8,a_07,*pVVar5,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar4,*pVVar5,(MethodInfo *)0x0);
  }
  pTVar4 = (this_00->fields).cube;
  if (pTVar4 == (Transform *)0x0) goto code_?;
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffc8,pTVar4,(MethodInfo *)0x0);
  uVar17._0_4_ = (this_00->fields).relativeTargetPosition.x;
  uVar17._4_4_ = (this_00->fields).relativeTargetPosition.y;
  pVVar5 = &(this_00->fields).relativeTargetPosition;
  uVar18._0_4_ = pVVar16->x;
  uVar18._4_4_ = pVVar16->y;
  uVar8._0_4_ = pVVar16->z;
  uVar8._4_4_ = (this_00->fields).relativeTargetPosition.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = (float)uVar8;
  a.x = (float)uVar18;
  a.y = SUB84(uVar18,4);
  b.z = uVar8._4_4_;
  b.x = (float)(int)uVar17;
  b.y = (float)(int)((ulonglong)uVar17 >> 0x20);
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
  fVar19 = pVVar16->x;
  fVar20 = pVVar16->y;
  uVar8._0_4_ = pVVar16->z;
  pTVar11 = (this_00->fields).cube;
  if (((pTVar11 == (Transform *)0x0) ||
      (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar11,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0)) ||
     (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffffd8,pTVar11,(MethodInfo *)0x0),
     pTVar4 == (Transform *)0x0)) goto code_?;
  worldPosition.y = fVar20;
  worldPosition.x = fVar19;
  worldPosition.z = (float)uVar8;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_1
            (pTVar4,worldPosition,*pVVar16,(MethodInfo *)0x0);
  pLVar21 = (this_00->fields).lineRenderer;
  if (pLVar21 == (LineRenderer *)0x0) goto code_?;
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                     ((Renderer *)pLVar21,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (((this_00->fields).isActive != 0) && (this = _UNK_?, (this_00->fields).isLocal == 0))
    {
      this = _UNK_?;
    }
  }
  else {
    pTVar4 = (this_00->fields).cube;
    pLVar21 = (this_00->fields).lineRenderer;
    if ((pTVar4 == (Transform *)0x0) ||
       (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffc8,pTVar4,(MethodInfo *)0x0),
       pLVar21 == (LineRenderer *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar21,0,*pVVar16,(MethodInfo *)0x0);
    if ((this_00->fields).isActive != 0) {
      pTVar4 = (this_00->fields).cube;
      pLVar21 = (this_00->fields).lineRenderer;
      if (pTVar4 == (Transform *)0x0) goto code_?;
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
      uVar22._0_4_ = (this_00->fields).relativeCurrentTargetPosition.x;
      uVar22._4_4_ = (this_00->fields).relativeCurrentTargetPosition.y;
      uVar23._0_4_ = pVVar16->x;
      uVar23._4_4_ = pVVar16->y;
      uVar8._0_4_ = pVVar16->z;
      uVar8._4_4_ = (this_00->fields).relativeCurrentTargetPosition.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_04.z = (float)uVar8;
      a_04.x = (float)(int)uVar23;
      a_04.y = (float)(int)((ulonglong)uVar23 >> 0x20);
      b_00.z = uVar8._4_4_;
      b_00.x = (float)uVar22;
      b_00.y = SUB84(uVar22,4);
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffc8,a_04,b_00,(MethodInfo *)0x0);
      if (pLVar21 == (LineRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar21,1,*pVVar16,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  uVar8._0_4_ = (this_00->fields).currentLaserAlpha;
  if ((float)uVar8 < (float)this) {
    uVar8._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    uVar8._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                             ((float)this,uVar8._4_4_ * _UNK_? + (float)uVar8,
                              (MethodInfo *)0x0);
code_?:
    (this_00->fields).currentLaserAlpha = (float)uVar8;
  }
  else if ((float)this < (float)uVar8) {
    uVar8._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    uVar8._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                             ((float)this,(float)uVar8 - uVar8._4_4_ * _UNK_?,
                              (MethodInfo *)0x0);
    goto code_?;
  }
  this = (LaserPointer *)(this_00->fields).currentLaserAlpha;
  (this_00->fields).beamColor.a = (float)this;
  pLVar21 = (this_00->fields).lineRenderer;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  if (pLVar21 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)pLVar21,
               TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= (float)this &&
               (float)this != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon,(MethodInfo *)0x0
              );
    pLVar21 = (this_00->fields).lineRenderer;
    if ((pLVar21 != (LineRenderer *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar21,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_01,StringLiteral__TintColor,(Vector4)(this_00->fields).beamColor,
                 (MethodInfo *)0x0);
      if ((this_00->fields).isLocal == 0) {
code_?:
        uVar24._0_4_ = (this_00->fields).relativeCurrentTargetPosition.x;
        uVar24._4_4_ = (this_00->fields).relativeCurrentTargetPosition.y;
        uVar8._0_4_ = (this_00->fields).relativeCurrentTargetPosition.z;
        fVar25 = pVVar5->x;
        fVar26 = pVVar5->y;
        uVar8._4_4_ = (this_00->fields).relativeTargetPosition.z;
        this = (LaserPointer *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a_09.z = (float)uVar8;
        a_09.x = (float)uVar24;
        a_09.y = SUB84(uVar24,4);
        b_02.y = fVar26;
        b_02.x = fVar25;
        b_02.z = uVar8._4_4_;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                            ((Vector3 *)&stack0xffffffc8,a_09,b_02,(float)this * _UNK_?,
                             (MethodInfo *)0x0);
        uVar8._4_4_ = pVVar5->y;
        uVar8._0_4_ = pVVar5->z;
        (this_00->fields).relativeCurrentTargetPosition.x = pVVar5->x;
        (this_00->fields).relativeCurrentTargetPosition.y = uVar8._4_4_;
        (this_00->fields).relativeCurrentTargetPosition.z = (float)uVar8;
        return;
      }
      pLVar21 = (this_00->fields).lineRenderer;
      if (pLVar21 != (LineRenderer *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                           ((Renderer *)pLVar21,(MethodInfo *)0x0);
        if (bVar1 != 0) goto code_?;
        pTVar4 = (this_00->fields).cube;
        if ((pTVar4 != (Transform *)0x0) &&
           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                (pTVar4,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffc8,pTVar4,(MethodInfo *)0x0);
          uVar27._0_4_ = pVVar16->x;
          uVar27._4_4_ = pVVar16->y;
          this = (LaserPointer *)pVVar16->z;
          pTVar4 = (this_00->fields).cube;
          if ((pTVar4 != (Transform *)0x0) &&
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                  (pTVar4,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)&stack0xffffffe8,pTVar4,(MethodInfo *)0x0);
            uVar28._0_4_ = pVVar16->x;
            uVar28._4_4_ = pVVar16->y;
            uVar8._0_4_ = pVVar16->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              method = (MethodInfo *)TypeInfo__UnityEngine__Vector3;
              this = (LaserPointer *)&UNK_?;
              func_?();
            }
            a_00.z = (float)uVar8;
            a_00.x = (float)(int)uVar28;
            a_00.y = (float)(int)((ulonglong)uVar28 >> 0x20);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)&stack0xffffffc8,a_00,10.0,(MethodInfo *)0x0);
            a_01.z = (float)this;
            a_01.x = (float)uVar27;
            a_01.y = SUB84(uVar27,4);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffffd8,a_01,*pVVar16,(MethodInfo *)0x0);
            fVar29 = pVVar16->x;
            fVar30 = pVVar16->y;
            uVar8._0_4_ = pVVar16->z;
            pTVar4 = (this_00->fields).cube;
            if (pTVar4 != (Transform *)0x0) {
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
              a_02.y = fVar30;
              a_02.x = fVar29;
              a_02.z = (float)uVar8;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                  ((Vector3 *)&stack0xffffffc8,a_02,*pVVar16,(MethodInfo *)0x0);
              uVar31._0_4_ = pVVar16->x;
              uVar31._4_4_ = pVVar16->y;
              this = (LaserPointer *)pVVar16->z;
              pTVar4 = (this_00->fields).cube;
              if ((pTVar4 != (Transform *)0x0) &&
                 (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                      (pTVar4,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    ((Vector3 *)&stack0xffffffe8,pTVar4,(MethodInfo *)0x0);
                uVar32._0_4_ = pVVar16->x;
                uVar32._4_4_ = pVVar16->y;
                uVar8._0_4_ = pVVar16->z;
                if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000
                     ) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Quaternion);
                }
                forward.z = (float)this;
                forward.x = (float)uVar31;
                forward.y = SUB84(uVar31,4);
                upwards.z = (float)uVar8;
                upwards.x = (float)(int)uVar32;
                upwards.y = (float)(int)((ulonglong)uVar32 >> 0x20);
                pQVar33 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_LookRotation
                                    ((Quaternion *)&stack0xffffffc4,forward,upwards,
                                     (MethodInfo *)0x0);
                uVar8._0_4_ = pQVar33->x;
                uVar8._4_4_ = pQVar33->y;
                fVar7 = pQVar33->z;
                fVar9 = pQVar33->w;
                pTVar4 = (this_00->fields).cube;
                if (pTVar4 != (Transform *)0x0) {
                  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward
                                      ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
                  fVar34 = pVVar16->x;
                  fVar35 = pVVar16->y;
                  fVar12 = pVVar16->z;
                  pTVar4 = (this_00->fields).cube;
                  if ((pTVar4 != (Transform *)0x0) &&
                     (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_GetParent(pTVar4,(MethodInfo *)0x0),
                     pTVar4 != (Transform *)0x0)) {
                    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                        ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
                    forward_00.y = fVar35;
                    forward_00.x = fVar34;
                    forward_00.z = fVar12;
                    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                              ((Quaternion *)&stack0xffffffc4,forward_00,*pVVar16,(MethodInfo *)0x0)
                    ;
                    this = (LaserPointer *)
                           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                    a_11.y = uVar8._4_4_;
                    a_11.x = (float)uVar8;
                    a_11.z = fVar7;
                    a_11.w = fVar9;
                    b_03.y = uVar8._4_4_;
                    b_03.x = (float)uVar8;
                    b_03.z = fVar7;
                    b_03.w = fVar9;
                    pQVar33 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                        ((Quaternion *)&stack0xffffffc4,a_11,b_03,
                                         (float)this * _UNK_?,(MethodInfo *)0x0);
                    pVVar16 = (Vector3 *)pQVar33->x;
                    method_00 = (MethodInfo *)pQVar33->y;
                    uVar8._0_4_ = pQVar33->z;
                    uVar8._4_4_ = pQVar33->w;
                    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                                        (pVVar16,method_00);
                    uVar37 = pVVar36->y;
                    method = (MethodInfo *)pVVar36->z;
                    rotation.y = (float)method_00;
                    rotation.x = (float)pVVar16;
                    rotation.z = (float)uVar8;
                    rotation.w = uVar8._4_4_;
                    this = (LaserPointer *)uVar37;
                    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_op_Multiply_1
                                        ((Vector3 *)&stack0xffffffd8,rotation,*pVVar36,
                                         (MethodInfo *)0x0);
                    fVar38 = pVVar16->x;
                    fVar39 = pVVar16->y;
                    uVar8._4_4_ = pVVar16->z;
                    this = (LaserPointer *)&UNK_?;
                    method = (MethodInfo *)pVVar5;
                    fVar40 = (float10)func_?();
                    uVar8._0_4_ = (float)fVar40;
                    this = (LaserPointer *)
                           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Mathf);
                    }
                    this = (LaserPointer *)
                           UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                                     ((float)uVar8,10.0,(float)this * _UNK_?,
                                      (MethodInfo *)0x0);
                    a_08.y = fVar39;
                    a_08.x = fVar38;
                    a_08.z = uVar8._4_4_;
                    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                        ((Vector3 *)&stack0xffffffc8,a_08,(float)this,
                                         (MethodInfo *)0x0);
                    uVar8._4_4_ = pVVar16->y;
                    uVar8._0_4_ = pVVar16->z;
                    pVVar5->x = pVVar16->x;
                    pVVar5->y = uVar8._4_4_;
                    (this_00->fields).relativeTargetPosition.z = (float)uVar8;
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
code_?:
  func_?(0);
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Void OnChange(Object) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnChange
               (LaserPointer *this,Object *newvalue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newvalue == (Object *)0x0) {
    newvalue = (Object *)0x0;
    pOVar1 = newvalue;
  }
  else {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((newvalue->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (newvalue->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pOVar1 = (Object *)0x0;
    if (bVar3) {
      pOVar1 = newvalue;
    }
    if (pOVar1 == (Object *)0x0) {
      func_?(newvalue,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  newvalue = pOVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((this->fields).isLocal != 0) {
    return;
  }
  if (newvalue != (Object *)0x0) {
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newvalue,StringLiteral_tx,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 != 0) {
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newvalue,(Type *)StringLiteral_tx,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar6 == (Pool *)0x0) goto code_?;
      if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar7 = (float *)func_?();
      (this->fields).relativeTargetPosition.x = *pfVar7;
    }
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newvalue,StringLiteral_ty,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 != 0) {
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newvalue,(Type *)StringLiteral_ty,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar6 == (Pool *)0x0) goto code_?;
      if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar7 = (float *)func_?(pPVar6);
      (this->fields).relativeTargetPosition.y = *pfVar7;
    }
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newvalue,StringLiteral_tz,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 != 0) {
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newvalue,(Type *)StringLiteral_tz,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar6 == (Pool *)0x0) goto code_?;
      if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar7 = (float *)func_?(pPVar6);
      (this->fields).relativeTargetPosition.z = *pfVar7;
    }
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newvalue,StringLiteral_st,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 != 0) {
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newvalue,(Type *)StringLiteral_st,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar6 == (Pool *)0x0) goto code_?;
      if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
      goto code_?;
      pbVar8 = (byte *)func_?(pPVar6);
      (this->fields).state = (uint)*pbVar8;
      LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    }
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newvalue,StringLiteral_fire,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 != 0) {
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newvalue,(Type *)StringLiteral_fire,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar6 == (Pool *)0x0) goto code_?;
      if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pbVar9 = (bool *)func_?(pPVar6);
      (this->fields).isActive = *pbVar9;
    }
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newvalue,StringLiteral_cm,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 == 0) {
      return;
    }
    pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)newvalue,(Type *)StringLiteral_cm,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar6 != (Pool *)0x0) {
      if ((pPVar6->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
        puVar10 = (uint8_t *)func_?();
        (this->fields).currentCubeMaterialId = *puVar10;
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_OnDisable
               (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).cube;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pTVar1 = (this->fields).cube;
  if ((pTVar1 != (Transform *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pTVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
  {
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
    value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this_01,(MethodInfo *)0x0);
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
  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
  if (pGVar6 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,1,(MethodInfo *)0x0);
    pTVar1 = (this_00->fields).cube;
    if (pTVar1 != (Transform *)0x0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isLocal != 0) {
    return;
  }
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,StringLiteral_tx,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_tx,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 == (Pool *)0x0) goto code_?;
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?();
      (this->fields).relativeTargetPosition.x = *pfVar3;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,StringLiteral_ty,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_ty,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 == (Pool *)0x0) goto code_?;
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pPVar2);
      (this->fields).relativeTargetPosition.y = *pfVar3;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,StringLiteral_tz,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_tz,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 == (Pool *)0x0) goto code_?;
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pPVar2);
      (this->fields).relativeTargetPosition.z = *pfVar3;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,StringLiteral_st,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_st,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 == (Pool *)0x0) goto code_?;
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
      goto code_?;
      pbVar4 = (byte *)func_?(pPVar2);
      (this->fields).state = (uint)*pbVar4;
      LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,StringLiteral_fire,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_fire,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 == (Pool *)0x0) goto code_?;
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pbVar5 = (bool *)func_?(pPVar2);
      (this->fields).isActive = *pbVar5;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,StringLiteral_cm,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_cm,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 != (Pool *)0x0) {
      if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentCubeMaterialId = cubeMaterial;
  newState = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)newState,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack1 = (this->fields).currentCubeMaterialId;
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Byte,&stack0x0000000b);
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)newState,StringLiteral_cm,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    LaserPointer_SyncState(this,newState,(MethodInfo *)0x0);
    LaserPointer_ApplyMaterialForState(this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLaserActiveState(Boolean) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SetLaserActiveState
               (LaserPointer *this,bool isActive,MethodInfo *method)

{
  (this->fields).isActive = isActive;
  return;
}


/* Void SetLaserCubeVisible(Boolean) */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SetLaserCubeVisible
               (LaserPointer *this,bool visible,MethodInfo *method)

{
  pRVar1 = (this->fields).cubeRenderer;
  if (pRVar1 == (Renderer *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pRVar1,_visible);
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (this_01->fields).state = iVar1;
    LaserPointer_ApplyMaterialForState(this_01,(MethodInfo *)0x0);
    newState = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)newState,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (LaserPointer *)CONCAT13((char)(this_01->fields).state,this._0_3_);
    value = (CrossPlatformInputManager_VirtualButton *)
            func_?(TypeInfo__System__Byte,(int)&this + 3);
    if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)newState,StringLiteral_st,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      LaserPointer_SyncState(this_01,newState,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SubscribeToCommands() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer_SubscribeToCommands
               (LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
     pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
    pGVar3 = (pGVar2->fields).LaserCommands;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<unsigned_char>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,MethodInfo__LaserPointer__SetCurrentCubeMaterial_unsigned_char_
               ,MethodInfo__System__Action<unsigned_char>__Action_System__Object__void__);
    if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnCubeMaterialChanged
                (pGVar3,(Action_1_Byte__1 *)pUVar4,(MethodInfo *)0x0);
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar1 != (GameEventManager *)0x0) &&
         (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
         pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
        pGVar3 = (pGVar2->fields).LaserCommands;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action<float>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__LaserPointer__ActivateLaserForDuration_float_,
                   MethodInfo__System__Action<float>__Action_System__Object__void__);
        if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnActivateLaserForDuration
                    (pGVar3,(Action_1_Single_ *)pUVar4,(MethodInfo *)0x0);
          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar1 != (GameEventManager *)0x0) &&
             (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
             pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
            pGVar3 = (pGVar2->fields).LaserCommands;
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action<LaserPointerState>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)this,
                       MethodInfo__LaserPointer__ChangeState_LaserPointerState_,
                       MethodInfo__System__Action<LaserPointerState>__Action_System__Object__void__)
            ;
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
                pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(TypeInfo__System__Action<bool>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar4,(Object *)this,MethodInfo__LaserPointer__SetLaserActiveState_bool_
                           ,MethodInfo__System__Action<bool>__Action_System__Object__void__);
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
                    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__System__Action<UnityEngine::Vector3>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar4,(Object *)this,
                               MethodInfo__LaserPointer__UpdatePosition_UnityEngine__Vector3_,
                               MethodInfo__System__Action<UnityEngine::Vector3>__Action_System__Object__void__
                              );
                    if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                   *)0x0) {
                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnUpdatePosition
                                (pGVar3,(Action_1_UnityEngine_Vector3_ *)pUVar4,(MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      value = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Int32);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)newState,StringLiteral_type,value,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  this_00 = (this->fields).cube;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe0,this_00,(MethodInfo *)0x0);
    b = *pVVar1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = to.z;
    a.x = to.x;
    a.y = to.y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&to,a,b,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    (this_01->fields).relativeTargetPosition.x = pVVar1->x;
    (this_01->fields).relativeTargetPosition.y = fVar2;
    (this_01->fields).relativeTargetPosition.z = fVar3;
    newState = (Dictionary_2_System_Object_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)newState,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (LaserPointer *)(this_01->fields).relativeTargetPosition.x;
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Single,&this);
    if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)newState,StringLiteral_tx,pCVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pCVar4 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Single,&stack0xfffffff8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)newState,StringLiteral_ty,pCVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      puStack_5 = (undefined *)(this_01->fields).relativeTargetPosition.z;
      pCVar4 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Single,&puStack_5);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)newState,StringLiteral_tz,pCVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      this = (LaserPointer *)0x0;
      LaserPointer_IntervalSyncState(this_01,newState,0.4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* LaserPointer() */

void Assembly-CSharp.dll::LaserPointer::LaserPointer__ctor(LaserPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0x3edc28f6,0xbeb851ec,0x3f000000,0);
  (this->fields).offset.x = (float)(undefined4)uStack_2;
  (this->fields).offset.y = (float)uStack_2._4_4_;
  (this->fields).offset.z = fStack_1;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  func_?(&fStack_3,0,0x3f800000,0,0x3f4ccccd,0);
  (this->fields).beamObjectColor.r = fStack_3;
  (this->fields).beamObjectColor.g = fStack_4;
  (this->fields).beamObjectColor.b = fStack_5;
  (this->fields).beamObjectColor.a = fStack_6;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  func_?(&fStack_7,0x3f800000,0,0,0x3f4ccccd,0);
  (this->fields).beamDeleteColor.r = fStack_7;
  (this->fields).beamDeleteColor.g = fStack_8;
  (this->fields).beamDeleteColor.b = fStack_9;
  (this->fields).beamDeleteColor.a = fStack_10;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  fStack_13 = 0.0;
  fStack_14 = 0.0;
  func_?(&fStack_11,0,0,0x3f800000,0x3f4ccccd,0);
  (this->fields).beamEditColor.r = fStack_11;
  (this->fields).beamEditColor.g = fStack_12;
  (this->fields).beamEditColor.b = fStack_13;
  (this->fields).beamEditColor.a = fStack_14;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).syncBuffer = this_00;
  fStack_15 = 0.0;
  fStack_16 = 0.0;
  fStack_17 = 0.0;
  fStack_18 = 0.0;
  func_?(&fStack_15,0x3f800000,0,0,0x3f4ccccd,0);
  (this->fields).beamColor.r = fStack_15;
  (this->fields).beamColor.g = fStack_16;
  (this->fields).beamColor.b = fStack_17;
  (this->fields).beamColor.a = fStack_18;
  (this->fields).relativeTargetPosition.x = 0.0;
  (this->fields).relativeTargetPosition.y = 0.0;
  (this->fields).relativeCurrentTargetPosition.x = 0.0;
  (this->fields).relativeCurrentTargetPosition.y = 0.0;
  (this->fields).relativeTargetPosition.z = 0.0;
  (this->fields).relativeCurrentTargetPosition.z = 0.0;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

