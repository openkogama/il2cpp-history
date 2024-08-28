
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__List__
            );
  pLVar2 = (List_1_UnityEngine_MeshRenderer_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List__);
  index = 0;
  pLVar3 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
           (this->fields).meshData;
  do {
    if (pLVar3 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pLVar3->fields)._size <= index) {
      pSVar5 = &(this->fields).optimizationData;
      pSVar5->skinnedMesh = pLVar1;
      func_?(pSVar5,pLVar1);
      ppLVar6 = &(this->fields).optimizationData.mesh;
      *ppLVar6 = pLVar2;
      func_?(ppLVar6,pLVar2);
      if ((this->fields).isEnabled != 0) {
        obj = MVGameControllerBase::MVGameControllerBase_get_SkinnedMeshOptimizeManager
                        ((MethodInfo *)0x0);
        pLVar1 = (this->fields).optimizationData.skinnedMesh;
        pLVar2 = (this->fields).optimizationData.mesh;
        if (obj == (SkinnedMeshOptimizeManager *)0x0) goto code_?;
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
        pLVar7 = (obj->fields).optimizationDataList;
        if (pLVar7 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
        goto code_?;
        if ((pLVar7->fields)._size == 0) {
          if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UpdateController);
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)obj,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
        }
        pLVar7 = (obj->fields).optimizationDataList;
        if (pLVar7 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
        goto code_?;
        func_?(pLVar7,pLVar1,pLVar2,
                        MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                       );
      }
      return;
    }
    if (pLVar3 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    XVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      (pLVar3,index,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                      );
    pLVar2 = (List_1_UnityEngine_MeshRenderer_ *)XVar8.qname;
    if (pLVar1 == (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)pLVar2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__Add_UnityEngine__SkinnedMeshRenderer_
              );
    pLVar3 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             (this->fields).meshData;
    if (pLVar3 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    XVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      (pLVar3,index,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                      );
    if (pLVar2 == (List_1_UnityEngine_MeshRenderer_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar2,(Object *)XVar8.xso,
               MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Add_UnityEngine__MeshRenderer_
              );
    pLVar3 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             (this->fields).meshData;
    index = index + 1;
  } while( true );
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
  this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            (this->fields).meshData;
  while (this_00 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
    if ((this_00->fields)._size <= index) {
      return;
    }
    if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    break;
    XVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                      );
    if (XVar1.xso == (XmlSchemaObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)XVar1.xso,0,(MethodInfo *)0x0);
    index = index + 1;
    this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              (this->fields).meshData;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

