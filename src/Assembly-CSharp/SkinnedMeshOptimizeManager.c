
/* Void AddOptimizationData(SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData) */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_AddOptimizationData
               (SkinnedMeshOptimizeManager *this,
               SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData *optimizationData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).optimizationDataList;
  if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?();
      }
      UpdateController::UpdateController_AddUpdateObject
                ((IUpdatecontrollerSubscriberUpdate *)this,
                 UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
    }
    pLVar1 = (this->fields).optimizationDataList;
    if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
      uStack_2 = *(undefined4 *)&optimizationData->skinnedMesh;
      uStack_3 = *(undefined4 *)((longlong)&optimizationData->skinnedMesh + 4);
      uStack_4 = *(undefined4 *)&optimizationData->mesh;
      uStack_5 = *(undefined4 *)((longlong)&optimizationData->mesh + 4);
      FUN_?(pLVar1,&uStack_2,
                    MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                   );
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsNewMeshCloser(SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData,
   List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData], Int32 ByRef) */

bool Assembly-CSharp.dll::SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_IsNewMeshCloser
               (SkinnedMeshOptimizeManager *this,
               SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData *newMesh,
               List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *oldMeshes,
               int32_t *index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = newMesh->skinnedMesh;
  *index = -1;
  if (pLVar1 != (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pSVar4 = (pLVar1->fields)._items;
    if (pSVar4 != (SkinnedMeshRenderer__Array *)0x0) {
      if ((int)pSVar4->max_length == 0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if ((pSVar4->vector[0] != (SkinnedMeshRenderer *)0x0) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar4->vector[0],(MethodInfo *)0x0),
         pTVar5 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pTVar5->fields)._._.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (((pSVar7 != (SpawnRoleDataMediator *)0x0) &&
            (pSVar8 = (pSVar7->fields).position,
            pSVar8 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0)
            ) && (pSVar9 = (pSVar8->fields)._.subscribableVariable,
                 pSVar9 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
          if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
               ->klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          uVar10 = (pSVar9->fields)._.value.x;
          uVar11 = (pSVar9->fields)._.value.y;
          fVar12 = 0.0 - (pSVar9->fields)._.value.z;
          uVar13 = 0;
          if (oldMeshes != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
            lVar14 = 0x20;
            while( true ) {
              if ((oldMeshes->fields)._size <= (int)uVar13) {
                return 0;
              }
              if ((uint)(oldMeshes->fields)._size <= uVar13) break;
              pSVar15 = (oldMeshes->fields)._items;
              if (pSVar15 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
              goto code_?;
              if ((uint)pSVar15->max_length <= uVar13) goto code_?;
              lVar16 = *(longlong *)
                        ((longlong)
                         &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                          (pSVar15->vector + -2))->klass + lVar14);
              if (lVar16 == 0) goto code_?;
              if (*(int *)(lVar16 + 0x18) == 0) break;
              lVar16 = *(longlong *)(lVar16 + 0x10);
              if (lVar16 == 0) goto code_?;
              if (*(int *)(lVar16 + 0x18) == 0) goto code_?;
              if ((*(Component **)(lVar16 + 0x20) == (Component *)0x0) ||
                 (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform
                                      (*(Component **)(lVar16 + 0x20),(MethodInfo *)0x0),
                 pTVar5 == (Transform *)0x0)) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((pTVar5->fields)._._.m_CachedPtr == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                bVar3 = (*pcVar2)();
                return bVar3;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar2 = (code *)swi(3);
                bVar3 = (*pcVar2)();
                return bVar3;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)();
              pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                  ((MethodInfo *)0x0);
              if (((pSVar7 == (SpawnRoleDataMediator *)0x0) ||
                  (pSVar8 = (pSVar7->fields).position,
                  pSVar8 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                             *)0x0)) ||
                 (pSVar9 = (pSVar8->fields)._.subscribableVariable,
                 pSVar9 == (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0))
              goto code_?;
              if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   ->klass->field_0x135 & 1) == 0) {
                FUN_?();
              }
              uVar17 = (pSVar9->fields)._.value.x;
              uVar18 = (pSVar9->fields)._.value.y;
              fVar19 = 0.0 - (pSVar9->fields)._.value.z;
              if ((0.0 - (float)uVar11) * (0.0 - (float)uVar11) +
                  (0.0 - (float)uVar10) * (0.0 - (float)uVar10) + fVar12 * fVar12 <
                  (0.0 - (float)uVar18) * (0.0 - (float)uVar18) +
                  (0.0 - (float)uVar17) * (0.0 - (float)uVar17) + fVar19 * fVar19) {
                *index = uVar13;
                return 1;
              }
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 0x10;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void RemoveoptimizationData(SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData) */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::
     SkinnedMeshOptimizeManager_RemoveoptimizationData
               (SkinnedMeshOptimizeManager *this,
               SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData *optimizationData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Contains_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Remove_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).optimizationDataList;
  if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    if ((pLVar1->fields)._size != 0) {
      uStack_2 = *(undefined4 *)&optimizationData->skinnedMesh;
      uStack_3 = *(undefined4 *)((longlong)&optimizationData->skinnedMesh + 4);
      uStack_4 = *(undefined4 *)&optimizationData->mesh;
      uStack_5 = *(undefined4 *)((longlong)&optimizationData->mesh + 4);
      iVar6 = FUN_?(pLVar1,&uStack_2,
                            MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Contains_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                            ->klass->rgctx_data[0x17].rgctxDataDummy);
      if (iVar6 != -1) {
        pLVar1 = (this->fields).optimizationDataList;
        if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
        goto code_?;
        uStack_2 = *(undefined4 *)&optimizationData->skinnedMesh;
        uStack_3 = *(undefined4 *)((longlong)&optimizationData->skinnedMesh + 4);
        uStack_4 = *(undefined4 *)&optimizationData->mesh;
        uStack_5 = *(undefined4 *)((longlong)&optimizationData->mesh + 4);
        iVar6 = FUN_?(pLVar1,&uStack_2,
                              MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Remove_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                              ->klass->rgctx_data[0x17].rgctxDataDummy);
        if (-1 < iVar6) {
          FUN_?(pLVar1);
        }
      }
    }
    pLVar1 = (this->fields).optimizationDataList;
    if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
      if ((pLVar1->fields)._size == 0) {
        if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
          FUN_?();
        }
        UpdateController::UpdateController_RemoveUpdateObject
                  ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::
     SkinnedMeshOptimizeManager_UpdateControllerUpdate
               (SkinnedMeshOptimizeManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).optimizationDataList;
  auStackX_8[0] = 0;
  if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    if ((pLVar1->fields)._size < 1) {
      return;
    }
    oldMeshes = (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                             );
    FUN_?(oldMeshes,
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
                 );
    pLVar2 = (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                          );
    FUN_?(pLVar2);
    pLVar1 = (this->fields).optimizationDataList;
    uVar3 = 0;
    if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
      lVar4 = 0x20;
      lVar5 = 0x20;
      do {
        if ((pLVar1->fields)._size <= (int)uVar3) {
          uVar3 = 0;
          if (oldMeshes != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
            lVar5 = 0x20;
            for (; (int)uVar3 < (oldMeshes->fields)._size; uVar3 = uVar3 + 1) {
              iVar6 = 0;
              while( true ) {
                if ((uint)(oldMeshes->fields)._size <= uVar3) goto code_?;
                pSVar7 = (oldMeshes->fields)._items;
                if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
                goto code_?;
                if ((uint)pSVar7->max_length <= uVar3) goto code_?;
                lVar8 = *(longlong *)
                         ((longlong)
                          &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                           (pSVar7->vector + -2))->klass + lVar5);
                if (lVar8 == 0) goto code_?;
                if (*(int *)(lVar8 + 0x18) <= iVar6) break;
                if ((uint)(oldMeshes->fields)._size <= uVar3) goto code_?;
                pSVar7 = (oldMeshes->fields)._items;
                if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
                goto code_?;
                if ((uint)pSVar7->max_length <= uVar3) goto code_?;
                lVar8 = *(longlong *)
                         ((longlong)
                          &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                           (pSVar7->vector + -2))->klass + lVar5);
                if ((lVar8 == 0) ||
                   (pRVar9 = (Renderer *)FUN_?(lVar8,iVar6), pRVar9 == (Renderer *)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                          (pRVar9,1,(MethodInfo *)0x0);
                iVar6 = iVar6 + 1;
              }
              lVar5 = lVar5 + 0x10;
            }
            uVar3 = 0;
            if (pLVar2 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
              do {
                if ((pLVar2->fields)._size <= (int)uVar3) {
                  return;
                }
                iVar6 = 0;
                while( true ) {
                  if ((uint)(pLVar2->fields)._size <= uVar3) goto code_?;
                  pSVar7 = (pLVar2->fields)._items;
                  if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0
                     ) goto code_?;
                  if ((uint)pSVar7->max_length <= uVar3) goto code_?;
                  lVar5 = *(longlong *)((longlong)pSVar7->vector + lVar4 + -0x18);
                  if (lVar5 == 0) goto code_?;
                  if (*(int *)(lVar5 + 0x18) <= iVar6) break;
                  if ((uint)(pLVar2->fields)._size <= uVar3) goto code_?;
                  pSVar7 = (pLVar2->fields)._items;
                  if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0
                     ) goto code_?;
                  if ((uint)pSVar7->max_length <= uVar3) goto code_?;
                  lVar5 = *(longlong *)((longlong)pSVar7->vector + lVar4 + -0x18);
                  if ((lVar5 == 0) ||
                     (pRVar9 = (Renderer *)FUN_?(lVar5,iVar6), pRVar9 == (Renderer *)0x0
                     )) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                            (pRVar9,1,(MethodInfo *)0x0);
                  iVar6 = iVar6 + 1;
                }
                uVar3 = uVar3 + 1;
                lVar4 = lVar4 + 0x10;
              } while( true );
            }
          }
          break;
        }
        bVar10 = false;
        iVar6 = 0;
        while( true ) {
          pLVar1 = (this->fields).optimizationDataList;
          if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
          goto code_?;
          if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
          pSVar7 = (pLVar1->fields)._items;
          if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
          goto code_?;
          if ((uint)pSVar7->max_length <= uVar3) goto code_?;
          lVar8 = *(longlong *)
                   ((longlong)
                    &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                     (pSVar7->vector + -2))->klass + lVar5);
          if (lVar8 == 0) goto code_?;
          if (*(int *)(lVar8 + 0x18) <= iVar6) break;
          pLVar1 = (this->fields).optimizationDataList;
          if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
          goto code_?;
          if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
          pSVar7 = (pLVar1->fields)._items;
          if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
          goto code_?;
          if ((uint)pSVar7->max_length <= uVar3) goto code_?;
          if ((*(longlong *)
                ((longlong)
                 &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                  (pSVar7->vector + -2))->klass + lVar5) == 0) ||
             (pRVar9 = (Renderer *)FUN_?(), pRVar9 == (Renderer *)0x0))
          goto code_?;
          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                            (pRVar9,(MethodInfo *)0x0);
          if (bVar11 == 0) {
            pLVar1 = (this->fields).optimizationDataList;
            if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            goto code_?;
            if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
            pSVar7 = (pLVar1->fields)._items;
            if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
            goto code_?;
            if ((uint)pSVar7->max_length <= uVar3) goto code_?;
            if ((*(longlong *)((longlong)pSVar7->vector + lVar5 + -0x18) == 0) ||
               (pRVar9 = (Renderer *)FUN_?(), pRVar9 == (Renderer *)0x0))
            goto code_?;
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                              (pRVar9,(MethodInfo *)0x0);
            if (bVar11 != 0) goto code_?;
          }
          else {
code_?:
            bVar10 = true;
          }
          iVar6 = iVar6 + 1;
        }
        if (bVar10) {
          if (oldMeshes == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
          break;
          pLVar1 = (this->fields).optimizationDataList;
          pLVar12 = oldMeshes;
          if ((oldMeshes->fields)._size < 5) {
            if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            break;
            if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
            pSVar7 = (pLVar1->fields)._items;
            if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
            break;
            if ((uint)pSVar7->max_length <= uVar3) goto code_?;
            puVar13 = (undefined4 *)
                     ((longlong)
                      &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                       (pSVar7->vector + -2))->klass + lVar5);
            uVar14 = *puVar13;
            uVar15 = puVar13[1];
            uVar16 = puVar13[2];
            uVar17 = puVar13[3];
          }
          else {
            if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            break;
            if ((uint)(pLVar1->fields)._size <= uVar3) {
code_?:
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pSVar7 = (pLVar1->fields)._items;
            if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
            break;
            if ((uint)pSVar7->max_length <= uVar3) {
code_?:
              FUN_?();
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            puVar19 = (undefined8 *)
                     ((longlong)
                      &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                       (pSVar7->vector + -2))->klass + lVar5);
            SStack_20.skinnedMesh = (List_1_UnityEngine_SkinnedMeshRenderer_ *)*puVar19;
            SStack_20.mesh = (List_1_UnityEngine_MeshRenderer_ *)puVar19[1];
            bVar11 = SkinnedMeshOptimizeManager_IsNewMeshCloser
                              (this,&SStack_20,oldMeshes,(int32_t *)auStackX_8,(MethodInfo *)0x0);
            uVar21 = auStackX_8[0];
            if (bVar11 == 0) {
              pLVar1 = (this->fields).optimizationDataList;
              if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              break;
              if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
              pSVar7 = (pLVar1->fields)._items;
              if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
              break;
              if ((uint)pSVar7->max_length <= uVar3) goto code_?;
              if (pLVar2 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              break;
              puVar13 = (undefined4 *)
                       ((longlong)
                        &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                         (pSVar7->vector + -2))->klass + lVar5);
              uVar14 = *puVar13;
              uVar15 = puVar13[1];
              uVar16 = puVar13[2];
              uVar17 = puVar13[3];
              pLVar12 = pLVar2;
            }
            else {
              if ((uint)(oldMeshes->fields)._size <= auStackX_8[0]) goto code_?;
              pSVar7 = (oldMeshes->fields)._items;
              if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
              break;
              if ((uint)pSVar7->max_length <= auStackX_8[0]) goto code_?;
              if (pLVar2 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              break;
              SStack_20.skinnedMesh = pSVar7->vector[(int)auStackX_8[0]].skinnedMesh;
              SStack_20.mesh = pSVar7->vector[(int)auStackX_8[0]].mesh;
              FUN_?(pLVar2,&SStack_20,
                            MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                           );
              FUN_?(oldMeshes,uVar21);
              pLVar1 = (this->fields).optimizationDataList;
              if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              break;
              if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
              pSVar7 = (pLVar1->fields)._items;
              if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
              break;
              if ((uint)pSVar7->max_length <= uVar3) goto code_?;
              puVar13 = (undefined4 *)
                       ((longlong)
                        &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                         (pSVar7->vector + -2))->klass + lVar5);
              uVar14 = *puVar13;
              uVar15 = puVar13[1];
              uVar16 = puVar13[2];
              uVar17 = puVar13[3];
            }
          }
          SStack_20.skinnedMesh = (List_1_UnityEngine_SkinnedMeshRenderer_ *)CONCAT44(uVar15,uVar14)
          ;
          SStack_20.mesh = (List_1_UnityEngine_MeshRenderer_ *)CONCAT44(uVar17,uVar16);
          FUN_?(pLVar12,&SStack_20);
          iVar6 = 0;
          while( true ) {
            pLVar1 = (this->fields).optimizationDataList;
            if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            goto code_?;
            if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
            pSVar7 = (pLVar1->fields)._items;
            if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
            goto code_?;
            if ((uint)pSVar7->max_length <= uVar3) goto code_?;
            lVar8 = *(longlong *)
                     ((longlong)
                      &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                       (pSVar7->vector + -2))->klass + lVar5);
            if (lVar8 == 0) goto code_?;
            if (*(int *)(lVar8 + 0x18) <= iVar6) break;
            pLVar1 = (this->fields).optimizationDataList;
            if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            goto code_?;
            if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
            pSVar7 = (pLVar1->fields)._items;
            if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
            goto code_?;
            if ((uint)pSVar7->max_length <= uVar3) goto code_?;
            if ((*(longlong *)
                  ((longlong)
                   &((SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)
                    (pSVar7->vector + -2))->klass + lVar5) == 0) ||
               (pRVar9 = (Renderer *)FUN_?(), pRVar9 == (Renderer *)0x0))
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (pRVar9,0,(MethodInfo *)0x0);
            pLVar1 = (this->fields).optimizationDataList;
            if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
            goto code_?;
            if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
            pSVar7 = (pLVar1->fields)._items;
            if (pSVar7 == (SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__Array *)0x0)
            goto code_?;
            if ((uint)pSVar7->max_length <= uVar3) goto code_?;
            if ((*(longlong *)((longlong)pSVar7->vector + lVar5 + -0x18) == 0) ||
               (pRVar9 = (Renderer *)FUN_?(), pRVar9 == (Renderer *)0x0))
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (pRVar9,0,(MethodInfo *)0x0);
            iVar6 = iVar6 + 1;
          }
        }
        pLVar1 = (this->fields).optimizationDataList;
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* SkinnedMeshOptimizeManager() */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager__ctor
               (SkinnedMeshOptimizeManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                        );
  FUN_?(pLVar1,
                MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
               );
  bVar2 = iRam_? != 0;
  (this->fields).optimizationDataList = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

