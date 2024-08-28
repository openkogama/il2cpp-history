
/* Void AddOptimizationData(SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData) */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_AddOptimizationData
               (SkinnedMeshOptimizeManager *this,
               SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData optimizationData,
               MethodInfo *method)

{
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
  pLVar1 = (this->fields).optimizationDataList;
  if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      UpdateController::UpdateController_AddUpdateObject
                ((IUpdatecontrollerSubscriberUpdate *)this,
                 UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
    }
    pLVar1 = (this->fields).optimizationDataList;
    if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
      func_?(pLVar1,optimizationData.skinnedMesh,optimizationData.mesh,
                      MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                     );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsNewMeshCloser(SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData,
   List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData], Int32 ByRef) */

bool Assembly-CSharp.dll::SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_IsNewMeshCloser
               (SkinnedMeshOptimizeManager *this,
               SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData newMesh,
               List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *oldMeshes,
               int32_t *index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  *index = -1;
  if (((newMesh.skinnedMesh != (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0) &&
      (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          newMesh.skinnedMesh,0,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                         ), RVar1 != (RegexCharClass_SingleRange)0x0)) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)RVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fStack_6 = pVVar3->z;
    pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar7 != (SpawnRoleDataMediator *)0x0) {
      pVVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[UnityEngine::Vector3]::
               SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                         ((Vector3 *)&stack0xffffffd8,
                          (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar7->fields).position,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                         );
      VStack_4.x = pVVar3->x;
      VStack_4.y = pVVar3->y;
      VStack_4.z = pVVar3->z;
      fVar8 = (float)uStack_5 - VStack_4.x;
      fVar9 = uStack_5._4_4_ - VStack_4.y;
      fVar10 = fStack_6 - VStack_4.z;
      index_00 = 0;
      if (oldMeshes != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
        while( true ) {
          if ((oldMeshes->fields)._size <= index_00) {
            return 0;
          }
          XVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                   XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                   List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                             ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *
                              )oldMeshes,index_00,
                              MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                             );
          if ((((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)XVar11.qname ==
                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
              (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)XVar11.qname,0,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                 ), RVar1 == (RegexCharClass_SingleRange)0x0)) ||
             (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)RVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0)
             ) break;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
          VStack_4.x = pVVar3->x;
          VStack_4.y = pVVar3->y;
          VStack_4.z = pVVar3->z;
          pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if (pSVar7 == (SpawnRoleDataMediator *)0x0) break;
          pVVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                   SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                   SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                             ((Vector3 *)&stack0xffffffcc,
                              (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar7->fields).position,
                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                             );
          uStack_5._0_4_ = pVVar3->x;
          uStack_5._4_4_ = pVVar3->y;
          fStack_6 = pVVar3->z;
          if (fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10 <
              (VStack_4.y - uStack_5._4_4_) * (VStack_4.y - uStack_5._4_4_) +
              (VStack_4.x - (float)uStack_5) * (VStack_4.x - (float)uStack_5) +
              (VStack_4.z - fStack_6) * (VStack_4.z - fStack_6)) {
            *index = index_00;
            return 1;
          }
          index_00 = index_00 + 1;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void RemoveoptimizationData(SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData) */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::
     SkinnedMeshOptimizeManager_RemoveoptimizationData
               (SkinnedMeshOptimizeManager *this,
               SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData optimizationData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Contains_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Remove_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).optimizationDataList;
  if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::
            List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
            List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Contains
                      (pLVar1,optimizationData,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Contains_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                      );
    if (bVar2 != 0) {
      pLVar1 = (this->fields).optimizationDataList;
      if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::
      List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
      List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Remove
                (pLVar1,optimizationData,
                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Remove_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                );
    }
    pLVar1 = (this->fields).optimizationDataList;
    if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
      if ((pLVar1->fields)._size == 0) {
        if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UpdateController::UpdateController_RemoveUpdateObject
                  ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::
     SkinnedMeshOptimizeManager_UpdateControllerUpdate
               (SkinnedMeshOptimizeManager *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                   );
    cRam_? = '\x01';
  }
  RVar1.First = 0;
  RVar1.Last = 0;
  pLVar2 = (this->fields).optimizationDataList;
  if (pLVar2 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    if ((pLVar2->fields)._size < 1) {
      return;
    }
    this_01 = (MethodInfo *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                             );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
               MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
              );
    this_02 = (RegexCharClass_SingleRange)
              func_?(
                             TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                             );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
              );
    iVar3 = 0;
    pLVar2 = (this->fields).optimizationDataList;
    while (pLVar2 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
      if ((pLVar2->fields)._size <= iVar3) {
        iVar3 = 0;
        if (this_01 != (MethodInfo *)0x0) {
          for (; iVar3 < (int)this_01->name; iVar3 = iVar3 + 1) {
            iVar4 = 0;
            while( true ) {
              XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                                ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_
                                  *)this_01,iVar3,
                                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                );
              if (XVar5.qname == (XmlQualifiedName *)0x0) goto code_?;
              if ((int)((XVar5.qname)->fields).ns <= iVar4) break;
              XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                                ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_
                                  *)this_01,iVar3,
                                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                );
              if (((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)XVar5.qname
                   == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
                 (this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)XVar5.qname,iVar4,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                      ), this_02 == (RegexCharClass_SingleRange)0x0))
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        ((Renderer *)this_02,1,(MethodInfo *)0x0);
              iVar4 = iVar4 + 1;
            }
          }
          iVar3 = 0;
          if (this_02 != (RegexCharClass_SingleRange)0x0) {
            do {
              if (*(int *)((int)this_02 + 0xc) <= iVar3) {
                return;
              }
              iVar4 = 0;
              while( true ) {
                XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                        XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                        List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                                  ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_
                                    *)this_02,iVar3,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                  );
                if (XVar5.xso == (XmlSchemaObject *)0x0) goto code_?;
                if (((XVar5.xso)->fields).linePos <= iVar4) break;
                XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                        XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                        List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                                  ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_
                                    *)this_02,iVar3,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                  );
                if ((XVar5.xso == (XmlSchemaObject *)0x0) ||
                   (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)XVar5.xso,iVar4,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                      ), RVar1 == (RegexCharClass_SingleRange)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                          ((Renderer *)RVar1,1,(MethodInfo *)0x0);
                iVar4 = iVar4 + 1;
              }
              iVar3 = iVar3 + 1;
            } while( true );
          }
        }
        break;
      }
      iVar4 = 0;
      this = (SkinnedMeshOptimizeManager *)0x0;
      while( true ) {
        pLVar6 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                 (this_00->fields).optimizationDataList;
        if (pLVar6 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
        goto code_?;
        XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                          (pLVar6,iVar3,
                           MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                          );
        if (XVar5.qname == (XmlQualifiedName *)0x0) goto code_?;
        if ((int)((XVar5.qname)->fields).ns <= iVar4) break;
        pLVar6 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                 (this_00->fields).optimizationDataList;
        if (pLVar6 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
        goto code_?;
        XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                          (pLVar6,iVar3,
                           MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                          );
        if (((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)XVar5.qname ==
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (this_01 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
           , RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )XVar5.qname,iVar4,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                               ), RVar1 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        this_02 = (RegexCharClass_SingleRange)&UNK_?;
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                          ((Renderer *)RVar1,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          pLVar6 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                   (this_00->fields).optimizationDataList;
          if (pLVar6 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
          goto code_?;
          RVar1 = (RegexCharClass_SingleRange)&UNK_?;
          XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                  XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                  List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                            (pLVar6,iVar3,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          if (XVar5.xso == (XmlSchemaObject *)0x0) goto code_?;
          this = (SkinnedMeshOptimizeManager *)&UNK_?;
          RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             XVar5.xso,iVar4,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                            );
          if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                            ((Renderer *)RVar8,(MethodInfo *)0x0);
          if (bVar7 != 0) goto code_?;
        }
        else {
code_?:
          this = (SkinnedMeshOptimizeManager *)0x1000000;
        }
        iVar4 = iVar4 + 1;
      }
      pMVar9 = this_01;
      if (this._3_1_ != '\0') {
        if (this_01 == (MethodInfo *)0x0) break;
        pLVar6 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                 (this_00->fields).optimizationDataList;
        if ((int)this_01->name < 5) {
code_?:
          if (pLVar6 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
          break;
          XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                  XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                  List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                            (pLVar6,iVar3,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          func_?(this_01,XVar5.qname,XVar5.xso,
                          MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                         );
        }
        else {
          if (pLVar6 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
          break;
          XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                  XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                  List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                            (pLVar6,iVar3,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          bVar7 = SkinnedMeshOptimizeManager_IsNewMeshCloser
                            (this_00,(SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData)XVar5,
                             (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
                             this_01,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                       this_01,(int32_t)RVar1,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                      );
            if (this_02 != (RegexCharClass_SingleRange)0x0) {
              func_?();
              mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
              XmlSchemaObjectTable+XmlSchemaObjectEntry]::
              List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAt
                        ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                         this_01,(int32_t)RVar1,
                         MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__RemoveAt_int_
                        );
              pLVar6 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                       (this_00->fields).optimizationDataList;
              goto code_?;
            }
            break;
          }
          pLVar6 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                   (this_00->fields).optimizationDataList;
          if ((pLVar6 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
             || (mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                 XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                 List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                           (pLVar6,iVar3,
                            MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                           ), this_02 == (RegexCharClass_SingleRange)0x0)) break;
          func_?();
        }
        iVar4 = 0;
        while( true ) {
          pLVar6 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                   (this_00->fields).optimizationDataList;
          if (pLVar6 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
          goto code_?;
          XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                  XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                  List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                            (pLVar6,iVar3,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          if (XVar5.qname == (XmlQualifiedName *)0x0) goto code_?;
          if ((int)((XVar5.qname)->fields).ns <= iVar4) break;
          pLVar6 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                   (this_00->fields).optimizationDataList;
          if (pLVar6 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
          goto code_?;
          XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                  XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                  List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                            (pLVar6,iVar3,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          if (((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)XVar5.qname ==
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
             (this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)XVar5.qname,iVar4,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                  ), this_02 == (RegexCharClass_SingleRange)0x0))
          goto code_?;
          RVar1.First = 0;
          RVar1.Last = 0;
          pMVar9 = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)this_02,0,(MethodInfo *)0x0);
          pLVar6 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                   (this_00->fields).optimizationDataList;
          if (pLVar6 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
          goto code_?;
          XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                  XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                  List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                            (pLVar6,iVar3,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          if ((XVar5.xso == (XmlSchemaObject *)0x0) ||
             (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)XVar5.xso,iVar4,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                ), RVar8 == (RegexCharClass_SingleRange)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)RVar8,0,(MethodInfo *)0x0);
          iVar4 = iVar4 + 1;
        }
      }
      iVar3 = iVar3 + 1;
      this_01 = pMVar9;
      pLVar2 = (this_00->fields).optimizationDataList;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* SkinnedMeshOptimizeManager() */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager__ctor
               (SkinnedMeshOptimizeManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
            );
  method_00 = (MethodInfo *)&this->fields;
  ((SkinnedMeshOptimizeManager__Fields *)method_00)->optimizationDataList = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

