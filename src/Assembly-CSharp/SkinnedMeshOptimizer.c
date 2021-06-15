
/* Void DisableOptimizer() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isEnabled = 0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) && ((this->fields).isEnabled != 0)) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
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
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_Start
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_03 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__List__
            );
  this_04 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>)
  ;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_04,
             MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List__);
  index = 0;
  pLVar1 = (this->fields).meshData;
  do {
    if (pLVar1 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Count__;
    iVar4 = index;
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Count__
                       );
    if ((int)pOVar5 <= iVar4) {
      (this->fields).optimizationData.skinnedMesh =
           (List_1_UnityEngine_SkinnedMeshRenderer_ *)this_03;
      (this->fields).optimizationData.mesh = (List_1_UnityEngine_MeshRenderer_ *)pMVar3;
      if ((this->fields).isEnabled != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        obj = MVGameControllerBase::MVGameControllerBase_get_SkinnedMeshOptimizeManager
                        ((MethodInfo *)0x0);
        if (obj == (SkinnedMeshOptimizeManager *)0x0) goto code_?;
        item.order = (int32_t)(this->fields).optimizationData.skinnedMesh;
        item.callback = (UnityAction *)(this->fields).optimizationData.mesh;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_01 = (obj->fields).optimizationDataList;
        if (this_01 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
        goto code_?;
        pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                           );
        if (pOVar5 == (Object *)0x0) {
          if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
            func_?(TypeInfo__UpdateController);
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)obj,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
        }
        this_02 = (List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)
                  (obj->fields).optimizationDataList;
        if (this_02 == (List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        BeforeRenderHelper+OrderBlock]::List_1_UnityEngine_BeforeRenderHelper_OrderBlock__Add
                  (this_02,item,
                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                  );
      }
      return;
    }
    pLVar1 = (this->fields).meshData;
    if (pLVar1 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) goto code_?;
    SVar6 = mscorlib.dll::System::Collections::Generic::List`1[SkinnedMeshOptimizer+MeshData]::
            List_1_SkinnedMeshOptimizer_MeshData__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                      );
    if (this_03 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_03,(UIPushOption__Enum)SVar6.skinnedMesh,
               MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__Add_UnityEngine__SkinnedMeshRenderer_
              );
    this_00 = (this->fields).meshData;
    if (this_00 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) goto code_?;
    SVar6 = mscorlib.dll::System::Collections::Generic::List`1[SkinnedMeshOptimizer+MeshData]::
            List_1_SkinnedMeshOptimizer_MeshData__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                      );
    if (pLVar1 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)SVar6.mesh,
               MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Add_UnityEngine__MeshRenderer_
              );
    pLVar1 = (this->fields).meshData;
    index = index + 1;
  } while( true );
}


/* Void TurnOffMesh() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).meshData;
  while (pLVar1 != (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).meshData;
    if (pLVar1 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) break;
    SVar3 = mscorlib.dll::System::Collections::Generic::List`1[SkinnedMeshOptimizer+MeshData]::
            List_1_SkinnedMeshOptimizer_MeshData__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                      );
    if (SVar3.mesh == (MeshRenderer *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)SVar3.mesh,0,(MethodInfo *)0x0);
    index = index + 1;
    pLVar1 = (this->fields).meshData;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SkinnedMeshOptimizer() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer__ctor
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  (this->fields).optimizationData.skinnedMesh = (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0;
  (this->fields).optimizationData.mesh = (List_1_UnityEngine_MeshRenderer_ *)0x0;
  (this->fields).isEnabled = 1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

