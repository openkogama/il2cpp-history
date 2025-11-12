
/* Void Add(GameObject) */

void Assembly-CSharp.dll::StaticBatchingUtilityWrapper::StaticBatchingUtilityWrapper_Add
               (GameObject *go,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StaticBatchingUtilityWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StaticBatchingUtilityWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StaticBatchingUtilityWrapper);
  }
  if ((TypeInfo__StaticBatchingUtilityWrapper->static_fields->staticGameObjects ==
       (List_1_UnityEngine_GameObject_ *)0x0) || (FUN_?(), go == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(go,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (go == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (go->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)go,(MethodInfo *)0x0);
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


/* Void Combine() */

void Assembly-CSharp.dll::StaticBatchingUtilityWrapper::StaticBatchingUtilityWrapper_Combine
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ToArray__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StaticBatchingUtilityWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__StaticBatchingUtility);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StaticBatchingUtilityWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StaticBatchingUtilityWrapper);
  }
  this = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
          *)TypeInfo__StaticBatchingUtilityWrapper->static_fields->staticGameObjects;
  if (this == (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
               *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pRVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
           RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
           List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                     (this,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ToArray__
                     );
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 == (MVWorldObjectClientManager *)0x0) ||
     (pOVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_00,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         ), pOVar3 == (Object *)0x0)) goto DAT_?;
  pMVar4 = pOVar3[0xc].monitor;
  if (*(int *)&(TypeInfo__UnityEngine__StaticBatchingUtility->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__StaticBatchingUtility,pMVar4,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__StaticBatchingUtility->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__StaticBatchingUtility);
  }
  pvVar5 = (TypeInfo__UnityEngine__StaticBatchingUtility->static_fields->s_CombineMarker).m_Ptr;
  if (pvVar5 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      goto code_?;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar5);
  }
  method_00 = (MethodInfo *)0x0;
  PStackX_20.m_Ptr = pvVar5;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::GameObject>_UnityEngine__GameObject_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (pMVar4 != (MonitorData *)0x0) {
    method_00 = *(MethodInfo **)(pMVar4 + 0x10);
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? != (code *)0x0) ||
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 != (code *)0x0)) {
    pcRam_? = pcVar1;
    (*pcRam_?)(pRVar2);
    UnityEngine.CoreModule.dll::Unity::Profiling::ProfilerMarker+AutoScope::
    ProfilerMarker_AutoScope_Dispose(&PStackX_20,method_00);
    return;
  }
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6,0);
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* StaticBatchingUtilityWrapper() */

void Assembly-CSharp.dll::StaticBatchingUtilityWrapper::StaticBatchingUtilityWrapper__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StaticBatchingUtilityWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_GameObject_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  TypeInfo__StaticBatchingUtilityWrapper->static_fields->staticGameObjects = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__StaticBatchingUtilityWrapper->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

