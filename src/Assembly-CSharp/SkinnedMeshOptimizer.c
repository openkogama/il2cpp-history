
/* Void DisableOptimizer() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  (this->fields).isEnabled = 0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SkinnedMeshOptimizeManager
                      ((MethodInfo *)0x0);
  if (this_00 != (SkinnedMeshOptimizeManager *)0x0) {
    SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_RemoveoptimizationData
              (this_00,(this->fields).optimizationData,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_OnDestroy
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (((bVar1 != 0) &&
      (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
      pMVar2 != (MVNetworkGame *)0x0)) && ((this->fields).isEnabled != 0)) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_SkinnedMeshOptimizeManager
                        ((MethodInfo *)0x0);
    if (this_00 == (SkinnedMeshOptimizeManager *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_RemoveoptimizationData
              (this_00,(this->fields).optimizationData,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_Start
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__Add_UnityEngine__SkinnedMeshRenderer_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Add_UnityEngine__MeshRenderer_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_SkinnedMeshRenderer_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>
                          );
  if (pLVar1 != (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__List__
              );
    this_00 = (MethodInfo *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>
                             );
    if (this_00 != (MethodInfo *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List__);
      index = 0;
      pLVar2 = (this->fields).meshData;
      while (pLVar2 != (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) {
        if ((pLVar2->fields)._size <= index) {
          pSVar3 = &(this->fields).optimizationData;
          pSVar3->skinnedMesh = pLVar1;
          func_?(pSVar3,pLVar1);
          (this->fields).optimizationData.mesh = (List_1_UnityEngine_MeshRenderer_ *)this_00;
          func_?(&(this->fields).optimizationData.mesh,this_00);
          if ((this->fields).isEnabled != 0) {
            obj = MVGameControllerBase::MVGameControllerBase_get_SkinnedMeshOptimizeManager
                            ((MethodInfo *)0x0);
            pLVar1 = (this->fields).optimizationData.skinnedMesh;
            pLVar4 = (this->fields).optimizationData.mesh;
            if (obj == (SkinnedMeshOptimizeManager *)0x0) break;
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                             );
              func_?(&
                              MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                             );
              func_?(&TypeInfo__UpdateController);
              cRam_? = '\x01';
            }
            pLVar5 = (obj->fields).optimizationDataList;
            if (pLVar5 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            break;
            if ((pLVar5->fields)._size == 0) {
              if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UpdateController);
              }
              UpdateController::UpdateController_AddUpdateObject
                        ((IUpdatecontrollerSubscriberUpdate *)obj,
                         UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
            }
            pLVar5 = (obj->fields).optimizationDataList;
            if (pLVar5 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            break;
            func_?(pLVar5,pLVar1,pLVar4,
                            MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                           );
          }
          return;
        }
        if (pLVar2 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) break;
        TVar6 = mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar2,index,
                           MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                          );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar1,(Object *)TVar6.tabID,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__Add_UnityEngine__SkinnedMeshRenderer_
                  );
        pLVar2 = (this->fields).meshData;
        if (pLVar2 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) break;
        TVar6 = mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar2,index,
                           MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                          );
        this_00 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Add_UnityEngine__MeshRenderer_
        ;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)
                   MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Add_UnityEngine__MeshRenderer_
                   ,(Object *)TVar6.streamedImagePrefab,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Add_UnityEngine__MeshRenderer_
                  );
        index = index + 1;
        pLVar2 = (this->fields).meshData;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void TurnOffMesh() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).meshData;
  while (pLVar1 != (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    pLVar1 = (this->fields).meshData;
    if (pLVar1 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) break;
    TVar2 = mscorlib.dll::System::Collections::Generic::
            List`1[TabMenuButtonAccessory+AccessoryTabDef]::
            List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                      ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                      );
    if (TVar2.streamedImagePrefab == (Graphic *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)TVar2.streamedImagePrefab,0,(MethodInfo *)0x0);
    index = index + 1;
    pLVar1 = (this->fields).meshData;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

