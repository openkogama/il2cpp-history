
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
          TVar11 = mscorlib.dll::System::Collections::Generic::
                   List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                   List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                             ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)oldMeshes,index_00,
                              MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                             );
          if ((((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)TVar11.tabID ==
                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
              (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)TVar11.tabID,0,
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
            List`1[TabMenuButtonAccessory+AccessoryTabDef]::
            List_1_TabMenuButtonAccessory_AccessoryTabDef__Contains
                      ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,
                       (TabMenuButtonAccessory_AccessoryTabDef)optimizationData,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Contains_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                      );
    if (bVar2 != 0) {
      pLVar1 = (this->fields).optimizationDataList;
      if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[TabMenuButtonAccessory+AccessoryTabDef]::
      List_1_TabMenuButtonAccessory_AccessoryTabDef__Remove
                ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,
                 (TabMenuButtonAccessory_AccessoryTabDef)optimizationData,
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
  index = (MethodInfo *)0x0;
  pLVar1 = (this->fields).optimizationDataList;
  if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    if ((pLVar1->fields)._size < 1) {
      return;
    }
    RVar2 = (RegexCharClass_SingleRange)
            func_?(
                           TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                           );
    if (RVar2 != (RegexCharClass_SingleRange)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)RVar2,
                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
                );
      this_00 = (RegexCharClass_SingleRange)
                func_?(
                               TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                               );
      if (this_00 != (RegexCharClass_SingleRange)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
                  );
        iVar3 = 0;
        pLVar1 = (this->fields).optimizationDataList;
        while (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
          if ((pLVar1->fields)._size <= iVar3) {
            for (iVar3 = 0; iVar3 < *(int32_t *)((int)RVar2 + 0xc); iVar3 = iVar3 + 1) {
              iVar4 = 0;
              while( true ) {
                TVar5 = mscorlib.dll::System::Collections::Generic::
                        List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                        List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                  ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)RVar2,iVar3,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                  );
                if (TVar5.tabID == 0) goto code_?;
                if (*(int *)(TVar5.tabID + 0xc) <= iVar4) break;
                TVar5 = mscorlib.dll::System::Collections::Generic::
                        List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                        List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                  ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)RVar2,iVar3,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                  );
                if (((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     TVar5.tabID ==
                     (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
                   (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)TVar5.tabID,iVar4,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                      ), RVar6 == (RegexCharClass_SingleRange)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                          ((Renderer *)RVar6,1,(MethodInfo *)0x0);
                iVar4 = iVar4 + 1;
              }
            }
            iVar3 = 0;
            do {
              if (*(int *)((int)this_00 + 0xc) <= iVar3) {
                return;
              }
              iVar4 = 0;
              while( true ) {
                TVar5 = mscorlib.dll::System::Collections::Generic::
                        List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                        List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                  ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)this_00,iVar3,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                  );
                if (TVar5.streamedImagePrefab == (Graphic *)0x0) goto code_?;
                if ((int)((TVar5.streamedImagePrefab)->fields).m_Material <= iVar4) break;
                TVar5 = mscorlib.dll::System::Collections::Generic::
                        List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                        List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                  ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)this_00,iVar3,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                  );
                if ((TVar5.streamedImagePrefab == (Graphic *)0x0) ||
                   (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)TVar5.streamedImagePrefab,iVar4,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                      ), RVar2 == (RegexCharClass_SingleRange)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                          ((Renderer *)RVar2,1,(MethodInfo *)0x0);
                iVar4 = iVar4 + 1;
              }
              iVar3 = iVar3 + 1;
            } while( true );
          }
          iVar4 = 0;
          cVar7 = '\0';
          while( true ) {
            pLVar1 = (this->fields).optimizationDataList;
            if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            goto code_?;
            TVar5 = mscorlib.dll::System::Collections::Generic::
                    List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                    List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                              ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,iVar3,
                               MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                              );
            if (TVar5.tabID == 0) goto code_?;
            if (*(int *)(TVar5.tabID + 0xc) <= iVar4) break;
            pLVar1 = (this->fields).optimizationDataList;
            if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            goto code_?;
            TVar5 = mscorlib.dll::System::Collections::Generic::
                    List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                    List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                              ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,iVar3,
                               MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                              );
            if (((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)TVar5.tabID ==
                 (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
               (index = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
               , RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)TVar5.tabID,iVar4,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                   ), RVar2 == (RegexCharClass_SingleRange)0x0))
            goto code_?;
            this_00 = (RegexCharClass_SingleRange)&UNK_?;
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                              ((Renderer *)RVar2,(MethodInfo *)0x0);
            if (bVar8 == 0) {
              pLVar1 = (this->fields).optimizationDataList;
              if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              goto code_?;
              RVar2 = (RegexCharClass_SingleRange)&UNK_?;
              TVar5 = mscorlib.dll::System::Collections::Generic::
                      List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                      List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,iVar3,
                                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                );
              if (TVar5.streamedImagePrefab == (Graphic *)0x0) goto code_?;
              cVar7 = '\x10';
              RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)TVar5.streamedImagePrefab,iVar4,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                );
              if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
              bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                                ((Renderer *)RVar6,(MethodInfo *)0x0);
              if (bVar8 != 0) goto code_?;
            }
            else {
code_?:
              cVar7 = '\x01';
            }
            iVar4 = iVar4 + 1;
          }
          RVar6 = RVar2;
          if (cVar7 != '\0') {
            pLVar1 = (this->fields).optimizationDataList;
            if (*(int *)((int)RVar2 + 0xc) < 5) {
code_?:
              if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              break;
              TVar5 = mscorlib.dll::System::Collections::Generic::
                      List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                      List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,iVar3,
                                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                );
              pSVar9 = (SkinnedMeshOptimizeManager *)TVar5.tabID;
              pGVar10 = TVar5.streamedImagePrefab;
              pMVar11 = 
              MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
              ;
            }
            else {
              if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              break;
              newMesh = (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData)
                        mscorlib.dll::System::Collections::Generic::
                        List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                        List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                  ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,iVar3,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                  );
              pGVar10 = (Graphic *)newMesh.skinnedMesh;
              pMVar11 = (MethodInfo *)newMesh.mesh;
              pSVar9 = this;
              bVar8 = SkinnedMeshOptimizeManager_IsNewMeshCloser
                                (this,newMesh,
                                 (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
                                 RVar2,(int32_t *)&stack0xfffffff0,(MethodInfo *)0x0);
              if (bVar8 != 0) {
                pMVar11 = index;
                mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)RVar6,(int32_t)index,
                           MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                          );
                RVar2 = (RegexCharClass_SingleRange)&UNK_?;
                func_?();
                RVar6 = RVar2;
                mscorlib.dll::System::Collections::Generic::List`1[SkinnedMeshOptimizer+MeshData]::
                List_1_SkinnedMeshOptimizer_MeshData__RemoveAt
                          ((List_1_SkinnedMeshOptimizer_MeshData_ *)RVar2,(int32_t)index,
                           MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__RemoveAt_int_
                          );
                pLVar1 = (this->fields).optimizationDataList;
                index = pMVar11;
                goto code_?;
              }
              pLVar1 = (this->fields).optimizationDataList;
              if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              break;
              RVar2 = this_00;
              mscorlib.dll::System::Collections::Generic::
              List`1[TabMenuButtonAccessory+AccessoryTabDef]::
              List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                        ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,iVar3,
                         MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                        );
              this_00 = RVar2;
            }
            func_?(RVar2,pSVar9,pGVar10,pMVar11);
            iVar4 = 0;
            while( true ) {
              pLVar1 = (this->fields).optimizationDataList;
              if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              goto code_?;
              TVar5 = mscorlib.dll::System::Collections::Generic::
                      List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                      List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,iVar3,
                                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                );
              if (TVar5.tabID == 0) goto code_?;
              if (*(int *)(TVar5.tabID + 0xc) <= iVar4) break;
              pLVar1 = (this->fields).optimizationDataList;
              if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              goto code_?;
              TVar5 = mscorlib.dll::System::Collections::Generic::
                      List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                      List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,iVar3,
                                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                );
              if (((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)TVar5.tabID
                   == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
                 (this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)TVar5.tabID,iVar4,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                      ), this_00 == (RegexCharClass_SingleRange)0x0))
              goto code_?;
              RVar6.First = 0;
              RVar6.Last = 0;
              index = (MethodInfo *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        ((Renderer *)this_00,0,(MethodInfo *)0x0);
              pLVar1 = (this->fields).optimizationDataList;
              if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              goto code_?;
              TVar5 = mscorlib.dll::System::Collections::Generic::
                      List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                      List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar1,iVar3,
                                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                );
              if ((TVar5.streamedImagePrefab == (Graphic *)0x0) ||
                 (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)TVar5.streamedImagePrefab,iVar4,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                    ), RVar2 == (RegexCharClass_SingleRange)0x0))
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        ((Renderer *)RVar2,0,(MethodInfo *)0x0);
              iVar4 = iVar4 + 1;
            }
          }
          iVar3 = iVar3 + 1;
          RVar2 = RVar6;
          pLVar1 = (this->fields).optimizationDataList;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  if (this_00 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).optimizationDataList = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

