
/* Void Add(GameObject) */

void Assembly-CSharp.dll::StaticBatchingUtilityWrapper::StaticBatchingUtilityWrapper_Add
               (GameObject *go,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__StaticBatchingUtilityWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StaticBatchingUtilityWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StaticBatchingUtilityWrapper);
  }
  this = TypeInfo__StaticBatchingUtilityWrapper->static_fields->staticGameObjects;
  if (this != (List_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this,(Object *)go,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
              );
    if (go != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (go,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (go,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Combine() */

void Assembly-CSharp.dll::StaticBatchingUtilityWrapper::StaticBatchingUtilityWrapper_Combine
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ToArray__
                   );
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    func_?(&TypeInfo__StaticBatchingUtilityWrapper);
    func_?(&TypeInfo__UnityEngine__StaticBatchingUtility);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StaticBatchingUtilityWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StaticBatchingUtilityWrapper);
  }
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
         TypeInfo__StaticBatchingUtilityWrapper->static_fields->staticGameObjects;
  if (this != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    gos = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                    (this,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ToArray__
                    );
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_00,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      if (pOVar1 != (Object *)0x0) {
        staticBatchRoot = pOVar1[0x11].klass;
        if ((TypeInfo__UnityEngine__StaticBatchingUtility->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::StaticBatchingUtility::
        StaticBatchingUtility_Combine
                  ((GameObject__Array *)gos,(GameObject *)staticBatchRoot,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* StaticBatchingUtilityWrapper() */

void Assembly-CSharp.dll::StaticBatchingUtilityWrapper::StaticBatchingUtilityWrapper__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__StaticBatchingUtilityWrapper);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_GameObject_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  if (this != (List_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    TypeInfo__StaticBatchingUtilityWrapper->static_fields->staticGameObjects = this;
    func_?(TypeInfo__StaticBatchingUtilityWrapper->static_fields,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

