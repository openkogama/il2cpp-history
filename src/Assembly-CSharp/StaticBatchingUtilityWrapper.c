
/* Void Add(GameObject) */

void Assembly-CSharp.dll::StaticBatchingUtilityWrapper::StaticBatchingUtilityWrapper_Add
               (GameObject *go,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StaticBatchingUtilityWrapper->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__StaticBatchingUtilityWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StaticBatchingUtilityWrapper);
  }
  this = TypeInfo__StaticBatchingUtilityWrapper->static_fields->staticGameObjects;
  if (this != (List_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)go,
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
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Combine() */

void Assembly-CSharp.dll::StaticBatchingUtilityWrapper::StaticBatchingUtilityWrapper_Combine
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StaticBatchingUtilityWrapper->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__StaticBatchingUtilityWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StaticBatchingUtilityWrapper);
  }
  this = (List_1_VoxelHit_ *)
         TypeInfo__StaticBatchingUtilityWrapper->static_fields->staticGameObjects;
  if (this != (List_1_VoxelHit_ *)0x0) {
    gos = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                    (this,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ToArray__
                    );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                          (this_00,
                           MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                          );
      if (this_01 != (MVRoundCube *)0x0) {
        staticBatchRoot =
             DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::StaticBatchingUtility::
        StaticBatchingUtility_Combine
                  ((GameObject__Array *)gos,(GameObject *)staticBatchRoot,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* StaticBatchingUtilityWrapper() */

void Assembly-CSharp.dll::StaticBatchingUtilityWrapper::StaticBatchingUtilityWrapper__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  TypeInfo__StaticBatchingUtilityWrapper->static_fields->staticGameObjects =
       (List_1_UnityEngine_GameObject_ *)this;
  return;
}

