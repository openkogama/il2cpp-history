
/* Void ExportSelfAvatar() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_ExportSelfAvatar(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Adding_obj_file__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___kogama_data_folder__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__obj);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Exported__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__files_successfully_to_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).game;
    if (pMVar2 != (MVNetworkGame *)0x0) {
      this = (pMVar2->fields).playerContainer;
      if (this != (MVPlayerContainer *)0x0) {
        pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0);
        if (pMVar3 != (MVLocalPlayer *)0x0) {
          pSVar4 = (pMVar3->fields).spawnRoleDataMediator;
          if (pSVar4 != (SpawnRoleDataMediator *)0x0) {
            pSVar5 = (pSVar4->fields).woId;
            if (pSVar5 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0) {
              pSVar6 = (pSVar5->fields)._.subscribableVariable;
              if (pSVar6 != (SubscribableVariable_1_System_Int32_ *)0x0) {
                if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                     ->klass->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (this_00 != (MVWorldObjectClientManager *)0x0) {
                  pMVar7 = MVWorldObjectClientManager::
                            MVWorldObjectClientManager_GetWorldObjectClient
                                      (this_00,(pSVar6->fields)._.value,(MethodInfo *)0x0);
                  pSVar8 = (String__Array *)
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                  ;
                  if (pMVar7 != (MVWorldObjectClient *)0x0) {
                    this_01 = (pMVar7->fields).gameObject;
                    if (this_01 != (GameObject *)0x0) {
                      if ((
                          UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                        FUN_?(
                                     UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                                     );
                      }
                      p_Var13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentsInChildren_4
                                          (this_01,0,
                                           ((((MethodInfo *)pSVar8)->field7_0x38).rgctx_data)->
                                           method);
                      value = 0;
                      if (p_Var13 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                        for (; uVar9 = (uint)p_Var13->max_length, (int)value < (int)uVar9;
                            value = value + 1) {
                          if (uVar9 <= value) {
                            FUN_?();
code_?:
                            FUN_?();
code_?:
                            FUN_?();
code_?:
                            FUN_?();
code_?:
                            uVar10 = func_?(&UNK_?);
                            FUN_?(uVar10);
code_?:
                            FUN_?();
code_?:
                            FUN_?();
code_?:
                            FUN_?();
code_?:
                            FUN_?();
code_?:
                            uVar10 = func_?(&UNK_?);
                            FUN_?(uVar10);
code_?:
                            FUN_?();
code_?:
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pSVar8,(MethodInfo *)0x0);
code_?:
                            FUN_?();
code_?:
                            FUN_?();
code_?:
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)this_01,(MethodInfo *)0x0);
code_?:
                            FUN_?();
code_?:
                            FUN_?();
                            goto code_?;
                          }
                          mf = (MeshFilter *)p_Var13->vector[(int)value];
                          pSVar8 = (String__Array *)FUN_?(TypeInfo__System__String);
                          if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Application::
                                    Application_get_dataPath((MethodInfo *)0x0);
                          if (pSVar8 == (String__Array *)0x0) goto code_?;
                          if ((int)pSVar8->max_length == 0) goto code_?;
                          pSVar8->vector[0] = pSVar11;
                          if (iRam_? != 0) {
                            uVar9 = (uint)((ulonglong)pSVar8->vector >> 0xc);
                            lVar12 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                              LOCK();
                              bVar15 = uVar13 == *puVar14;
                              if (bVar15) {
                                *puVar14 = uVar13 | 1L << (uVar9 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar15);
                          }
                          iVar16 = iRam_?;
                          if ((uint)pSVar8->max_length < 2) goto code_?;
                          pSVar8->vector[1] = ::StringLiteral_____;
                          if (iVar16 != 0) {
                            uVar9 = (uint)((ulonglong)(pSVar8->vector + 1) >> 0xc);
                            lVar12 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                              LOCK();
                              bVar15 = uVar13 == *puVar14;
                              if (bVar15) {
                                *puVar14 = uVar13 | 1L << (uVar9 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar15);
                          }
                          this_01 = (GameObject *)(longlong)(int)value;
                          if ((uint)p_Var13->max_length <= value) goto code_?;
                          this_01 = (GameObject *)p_Var13->vector[(longlong)this_01];
                          if (this_01 == (GameObject *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar17 = (this_01->fields)._.m_CachedPtr;
                          if (pvVar17 == (void *)0x0) goto code_?;
                          pcVar18 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar18 = (code *)FUN_?(&UNK_?),
                             pcVar18 == (code *)0x0)) goto code_?;
                          pcRam_? = pcVar18;
                          pvVar17 = (void *)(*pcRam_?)(pvVar17);
                          pOVar19 = (Object_1 *)
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar17,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar19 == (Object_1 *)0x0) goto code_?;
                          pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_GetName(pOVar19,(MethodInfo *)0x0);
                          if ((uint)pSVar8->max_length < 3) goto code_?;
                          pSVar8->vector[2] = pSVar11;
                          if (iRam_? != 0) {
                            uVar9 = (uint)((ulonglong)(pSVar8->vector + 2) >> 0xc);
                            lVar12 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                              LOCK();
                              bVar15 = uVar13 == *puVar14;
                              if (bVar15) {
                                *puVar14 = uVar13 | 1L << (uVar9 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar15);
                          }
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Number);
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               ->klass->field_0x135 & 1) == 0) {
                            FUN_?();
                          }
                          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          aRStack_20[0]._pointer._value = (void *)0x0;
                          aRStack_20[0]._length = 0;
                          aRStack_20[0]._12_4_ = 0;
                          pSVar11 = mscorlib.dll::System::Number::Number_FormatInt32
                                              (value,aRStack_20,(IFormatProvider *)0x0,
                                               (MethodInfo *)0x0);
                          if ((uint)pSVar8->max_length < 4) goto code_?;
                          pSVar8->vector[3] = pSVar11;
                          if (iRam_? != 0) {
                            uVar9 = (uint)((ulonglong)(pSVar8->vector + 3) >> 0xc);
                            lVar12 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                              LOCK();
                              bVar15 = uVar13 == *puVar14;
                              if (bVar15) {
                                *puVar14 = uVar13 | 1L << (uVar9 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar15);
                          }
                          iVar16 = iRam_?;
                          if ((uint)pSVar8->max_length < 5) goto code_?;
                          pSVar8->vector[4] = StringLiteral__obj;
                          if (iVar16 != 0) {
                            uVar9 = (uint)((ulonglong)(pSVar8->vector + 4) >> 0xc);
                            lVar12 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                              LOCK();
                              bVar15 = uVar13 == *puVar14;
                              if (bVar15) {
                                *puVar14 = uVar13 | 1L << (uVar9 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar15);
                          }
                          pSVar11 = mscorlib.dll::System::String::String_Concat_7
                                              (pSVar8,(MethodInfo *)0x0);
                          ObjExporterScript::ObjExporterScript_MeshToFile
                                    (mf,pSVar11,0,(MethodInfo *)0x0);
                          pSVar8 = (String__Array *)(longlong)(int)value;
                          if ((uint)p_Var13->max_length <= value) goto code_?;
                          pSVar8 = (String__Array *)p_Var13->vector[(longlong)pSVar8];
                          if (pSVar8 == (String__Array *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          this_01 = (GameObject *)pSVar8->bounds;
                          if (this_01 == (GameObject *)0x0) goto code_?;
                          pcVar18 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar18 = (code *)FUN_?(&UNK_?),
                             pcVar18 == (code *)0x0)) goto code_?;
                          pcRam_? = pcVar18;
                          pvVar17 = (void *)(*pcRam_?)(this_01);
                          pOVar19 = (Object_1 *)
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar17,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar19 == (Object_1 *)0x0) goto code_?;
                          pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_GetName(pOVar19,(MethodInfo *)0x0);
                          pSVar8 = (String__Array *)
                                    mscorlib.dll::System::String::String_Concat_4
                                              (StringLiteral_Adding_obj_file__,pSVar11,
                                               (MethodInfo *)0x0);
                          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                    ((Object *)pSVar8,(MethodInfo *)0x0);
                        }
                        pSVar8 = (String__Array *)FUN_?(TypeInfo__System__String,5);
                        if (pSVar8 != (String__Array *)0x0) {
                          FUN_?(pSVar8,0);
                          iVar21 = p_Var13->max_length;
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Number);
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               ->klass->field_0x135 & 1) == 0) {
                            FUN_?();
                          }
                          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          aRStack_20[0]._pointer._value = (void *)0x0;
                          aRStack_20[0]._length = 0;
                          aRStack_20[0]._12_4_ = 0;
                          pSVar11 = mscorlib.dll::System::Number::Number_FormatInt32
                                              ((int32_t)iVar21,aRStack_20,(IFormatProvider *)0x0,
                                               (MethodInfo *)0x0);
                          FUN_?(pSVar8,1,pSVar11);
                          FUN_?(pSVar8,2,StringLiteral__files_successfully_to_);
                          if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Application::
                                    Application_get_dataPath((MethodInfo *)0x0);
                          FUN_?(pSVar8,3,pSVar11);
                          FUN_?(pSVar8,4,StringLiteral___kogama_data_folder__);
                          pSVar11 = mscorlib.dll::System::String::String_Concat_7
                                              (pSVar8,(MethodInfo *)0x0);
                          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                    ((Object *)pSVar11,(MethodInfo *)0x0);
                          return;
                        }
code_?:
                        FUN_?();
                      }
                      FUN_?();
                    }
                    FUN_?();
                  }
                  FUN_?();
                }
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void InitializePicking() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_InitializePicking(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObjExportHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObjExportHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ObjExportHandler);
  }
  TypeInfo__ObjExportHandler->static_fields->picking = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
       (IPlayModeUI *)0x0) && (lVar1 = FUN_?(2,TypeInfo__IPlayModeUI), lVar1 != 0)) {
    FUN_?(1,TypeInfo__IGUICrossHair,lVar1,1);
    this = TypeInfo__ObjExportHandler->static_fields->ignoreIds;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
        ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar4 != (MVLocalPlayer *)0x0 &&
         (pSVar5 = (pMVar4->fields).spawnRoleDataMediator, pSVar5 != (SpawnRoleDataMediator *)0x0))
        )) && ((pSVar6 = (pSVar5->fields).woId,
               pSVar6 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0 &&
               (pSVar7 = (pSVar6->fields)._.subscribableVariable,
               pSVar7 != (SubscribableVariable_1_System_Int32_ *)0x0)))) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (this != (HashSet_1_System_Int32_ *)0x0) {
        iVar8 = (pSVar7->fields)._.value;
        pMVar9 = MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
                 [0x15].method;
        if ((this->fields)._buckets == (Int32__Array *)0x0) {
          FUN_?(this,0,pMVar9->klass->rgctx_data[0xe].rgctxDataDummy);
        }
        pIVar10 = (this->fields)._comparer;
        if (pIVar10 != (IEqualityComparer_1_System_Int32_ *)0x0) {
          pvVar11 = (pMVar9->klass->rgctx_data[0x16].method)->klass->rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
            pvVar11 = (void *)FUN_?(pvVar11);
          }
          uVar12 = FUN_?(1,pvVar11,pIVar10,iVar8);
          pIVar13 = (this->fields)._buckets;
          uVar12 = uVar12 & 0x7fffffff;
          if (pIVar13 != (Int32__Array *)0x0) {
            pHVar14 = (this->fields)._slots;
            uVar15 = (int)uVar12 % (int)pIVar13->max_length;
            if (uVar15 < (uint)pIVar13->max_length) {
              uVar16 = pIVar13->vector[(int)uVar15] - 1;
              if (-1 < (int)uVar16) {
                iVar17 = 0;
                if (pHVar14 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
                goto code_?;
                do {
                  if ((uint)pHVar14->max_length <= uVar16) goto code_?;
                  if (pHVar14->vector[(int)uVar16].hashCode == uVar12) {
                    if ((this->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0)
                    goto code_?;
                    pvVar11 = pMVar9->klass->rgctx_data[4].rgctxDataDummy;
                    if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
                      FUN_?(pvVar11);
                    }
                    cVar18 = FUN_?();
                    if (cVar18 != '\0') {
                      return;
                    }
                  }
                  if ((int)pHVar14->max_length <= iVar17) {
                    uVar19 = func_?(&TypeInfo__System__InvalidOperationException);
                    this_01 = (ProtocolViolationException *)func_?(uVar19);
                    pSVar20 = (String *)
                              func_?(&StringLiteral_Operations_that_change_non_concu);
                    System.dll::System::Net::ProtocolViolationException::
                    ProtocolViolationException__ctor_1(this_01,pSVar20,(MethodInfo *)0x0);
                    FUN_?(this_01,pMVar9);
                    pcVar21 = (code *)swi(3);
                    (*pcVar21)();
                    return;
                  }
                  iVar17 = iVar17 + 1;
                  if ((uint)pHVar14->max_length <= uVar16) goto code_?;
                  uVar16 = pHVar14->vector[(int)uVar16].next;
                } while (-1 < (int)uVar16);
              }
              if ((this->fields)._freeList < 0) {
                if (pHVar14 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
                goto code_?;
                if ((this->fields)._lastIndex == (int)pHVar14->max_length) {
                  pMVar9 = pMVar9->klass->rgctx_data[0x2b].method;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__Collections__HashHelpers);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  iVar22 = (this->fields)._count;
                  if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  iVar22 = mscorlib.dll::System::Collections::HashHelpers::HashHelpers_1_ExpandPrime
                                     (iVar22,(MethodInfo *)0x0);
                  if (iVar22 <= (this->fields)._count) {
                    uVar19 = func_?(&TypeInfo__System__ArgumentException);
                    this_02 = (InvalidEnumArgumentException *)func_?(uVar19);
                    pSVar20 = (String *)
                              func_?(&StringLiteral_HashSet_capacity_is_too_big_);
                    System.dll::System::ComponentModel::InvalidEnumArgumentException::
                    InvalidEnumArgumentException__ctor_1(this_02,pSVar20,(MethodInfo *)0x0);
                    FUN_?(this_02,pMVar9);
                    pcVar21 = (code *)swi(3);
                    (*pcVar21)();
                    return;
                  }
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32__SetCapacity
                            (this,iVar22,pMVar9->klass->rgctx_data[0x2a].method);
                  pIVar13 = (this->fields)._buckets;
                  pHVar14 = (this->fields)._slots;
                  if (pIVar13 == (Int32__Array *)0x0) goto code_?;
                  uVar15 = (int)uVar12 % (int)pIVar13->max_length;
                }
                uVar16 = (this->fields)._lastIndex;
                piVar23 = &(this->fields)._lastIndex;
                *piVar23 = *piVar23 + 1;
                if (pHVar14 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
                goto code_?;
              }
              else {
                uVar16 = (this->fields)._freeList;
                if (pHVar14 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
                goto code_?;
                if ((uint)pHVar14->max_length <= uVar16) goto code_?;
                (this->fields)._freeList = pHVar14->vector[(int)uVar16].next;
              }
              if ((uVar16 < (uint)pHVar14->max_length) &&
                 (pHVar14->vector[(int)uVar16].hashCode = uVar12, uVar16 < (uint)pHVar14->max_length
                 )) {
                pHVar14->vector[(int)uVar16].value = iVar8;
                pIVar13 = (this->fields)._buckets;
                if (pIVar13 == (Int32__Array *)0x0) goto code_?;
                if ((uVar15 < (uint)pIVar13->max_length) && (uVar16 < (uint)pHVar14->max_length)) {
                  pHVar14->vector[(int)uVar16].next = pIVar13->vector[(int)uVar15] + -1;
                  pIVar13 = (this->fields)._buckets;
                  if (pIVar13 == (Int32__Array *)0x0) goto code_?;
                  if (uVar15 < (uint)pIVar13->max_length) {
                    pIVar13->vector[(int)uVar15] = uVar16 + 1;
                    piVar23 = &(this->fields)._count;
                    *piVar23 = *piVar23 + 1;
                    piVar23 = &(this->fields)._version;
                    *piVar23 = *piVar23 + 1;
                    return;
                  }
                }
              }
            }
code_?:
            FUN_?();
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
        }
code_?:
        FUN_?();
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
    }
  }
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean MVObjectIsType(Transform, Type, Int32 ByRef) */

bool Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_MVObjectIsType
               (Transform *t,Type *type,int32_t *woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObjExportHandler);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((t == (Transform *)0x0) ||
      (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)t,(MethodInfo *)0x0), this == (GameObject *)0x0)) ||
     (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)this,(MethodInfo *)0x0),
     pMVar1 == (MVWorldObjectClientManager *)0x0)) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                     (pMVar1,goId,(MethodInfo *)0x0);
  if (pMVar4 == (MVWorldObjectClient *)0x0) {
code_?:
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (t,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar5 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar5->fields)._._.m_CachedPtr != (void *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (t,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__ObjExportHandler->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = ObjExportHandler_MVObjectIsType(pTVar5,type,woId,(MethodInfo *)0x0);
        return bVar3;
      }
    }
    *woId = -1;
code_?:
    bVar3 = 0;
  }
  else {
    *woId = (pMVar4->fields)._.id;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (type != (Type *)0x0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                        (pMVar1,*woId,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) goto code_?;
      uVar6 = FUN_?(&(pMVar4->klass->_0).byval_arg);
      cVar7 = (*(type->klass->vtable).IsAssignableFrom.methodPtr)
                        (type,uVar6,(type->klass->vtable).IsAssignableFrom.method);
      if (cVar7 == '\0') goto code_?;
    }
    bVar3 = 1;
  }
  return bVar3;
}


/* Boolean Pick(VoxelHit ByRef, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_Pick
               (VoxelHit *hit,HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  auStack_3._0_4_ = 0.0;
  auStack_3._4_4_ = 0.0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  pCStack_9 = (Cube *)0x0;
  uStack_10 = 0;
  pCStack_11 = (Collider *)0x0;
  pTStack_12 = (Transform *)0x0;
  iStack_13 = 0;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar14 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar14 == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
      FUN_?();
    }
    this = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
    if (this == (EventSystem *)0x0) goto code_?;
    bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
             EventSystem_IsPointerOverGameObject(this,(MethodInfo *)0x0);
    if ((bVar14 == 0) &&
       (MVar15 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0),
       MVar15 == MVJoinState__Enum_Playing)) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_16._0_4_ = 0.0;
      auStack_16._4_4_ = 0.0;
      stack0xfffffffffffffe30 = (undefined8 *)((ulonglong)uStack_17 << 0x20);
      pcVar18 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
        uVar19 = func_?(&UNK_?);
        FUN_?(uVar19,0);
        pcVar18 = (code *)swi(3);
        bVar14 = (*pcVar18)();
        return bVar14;
      }
      pcRam_? = pcVar18;
      (*pcRam_?)(auStack_16);
      RStack_20.m_Origin.x = 0.0;
      RStack_20.m_Origin.y = 0.0;
      RStack_20.m_Origin.z = 0.0;
      pcVar18 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
        uVar19 = func_?(&UNK_?);
        FUN_?(uVar19,0);
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar18 = (code *)swi(3);
        bVar14 = (*pcVar18)();
        return bVar14;
      }
      pcRam_? = pcVar18;
      (*pcRam_?)(&RStack_20);
      if (this_00 != (Camera *)0x0) {
        auStack_16._4_4_ = RStack_20.m_Origin.y;
        stack0xfffffffffffffe30 =
             (undefined8 *)((ulonglong)stack0xfffffffffffffe30 & 0xffffffff00000000);
        pRVar21 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                            (&RStack_20,this_00,(Vector3 *)auStack_16,(MethodInfo *)0x0);
        fVar22 = _UNK_?;
        auStack_16._0_4_ = (pRVar21->m_Origin).x;
        auStack_16._4_4_ = (pRVar21->m_Origin).y;
        unique0x100007b7 = *(undefined8 **)&(pRVar21->m_Origin).z;
        uStack_23._0_4_ = (pRVar21->m_Direction).y;
        uStack_23._4_4_ = (pRVar21->m_Direction).z;
        uStack_24 = 0;
        auStack_25._0_8_ = auStack_16._0_8_;
        auStack_25._8_8_ = unique0x100007b7;
        auStack_25._16_8_ = uStack_23;
        pLVar26 = CollisionDetection::CollisionDetection_MVHitAll
                            ((Ray *)auStack_25,_UNK_?,ignoreWoIds,layerMask,
                             (MethodInfo *)0x0);
        if (pLVar26 != (List_1_VoxelHit_ *)0x0) {
          if ((pLVar26->fields)._size == 0) {
            return 0;
          }
          bVar14 = 0;
          puVar27 = (undefined8 *)FUN_?(auStack_28,pLVar26);
          uVar19 = auStack_16._0_8_;
          uStack_1 = *puVar27;
          uStack_2 = puVar27[1];
          auStack_3 = (undefined1  [8])puVar27[2];
          uStack_4 = puVar27[3];
          uStack_5 = puVar27[4];
          uStack_6 = puVar27[5];
          uStack_7 = puVar27[6];
          uStack_8 = puVar27[7];
          pCStack_9 = (Cube *)puVar27[8];
          uStack_10 = puVar27[9];
          pCStack_11 = (Collider *)puVar27[10];
          pTStack_12 = (Transform *)puVar27[0xb];
          iStack_13 = puVar27[0xc];
          auStack_25._0_4_ = 0.0;
          auStack_25._4_4_ = 0.0;
          auStack_25._8_8_ = &uStack_1;
          uVar29 = auStack_16._8_4_;
          while( true ) {
            cVar30 = FUN_?(&uStack_1);
            iVar31 = iStack_13;
            pTVar32 = pTStack_12;
            pCVar33 = pCStack_11;
            uVar34 = uStack_10;
            pCVar35 = pCStack_9;
            uVar36 = uStack_8;
            uVar37 = uStack_7;
            uVar38 = uStack_6;
            uVar39 = uStack_5;
            uVar40 = uStack_4;
            auVar41 = auStack_3;
            if (cVar30 == '\0') {
              return bVar14;
            }
            if (pTStack_12 == (Transform *)0x0) break;
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTStack_12,(MethodInfo *)0x0);
            if (this_01 == (GameObject *)0x0) goto code_?;
            bVar42 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_get_activeInHierarchy(this_01,(MethodInfo *)0x0);
            if (bVar42 != 0) {
              auStack_16._0_8_ = auVar41;
              uVar43 = auStack_16._0_8_;
              stack0xfffffffffffffe30 = (undefined8 *)CONCAT44(uStack_17,(int)uVar40);
              auStack_16._0_4_ = (undefined4)uVar19;
              auStack_16._4_4_ = SUB84(uVar19,4);
              RStack_20.m_Origin.x = (float)auStack_16._0_4_;
              RStack_20.m_Origin.y = (float)auStack_16._4_4_;
              RStack_20.m_Origin.z = (float)uVar29;
              auStack_16._0_8_ = uVar43;
              fVar44 = (float)FUN_?(&RStack_20,auStack_16);
              uVar45 = uStack_7;
              uVar43 = uStack_5;
              auVar46 = auStack_3;
              if (fVar44 < fVar22) {
                auStack_3._0_4_ = auVar41._0_4_;
                auStack_3._4_4_ = auVar41._4_4_;
                (hit->point).x = (float)auStack_3._0_4_;
                (hit->point).y = (float)auStack_3._4_4_;
                *(undefined8 *)&(hit->point).z = uVar40;
                uStack_5._0_4_ = (undefined4)uVar39;
                uStack_5._4_4_ = SUB84(uVar39,4);
                (hit->normal).y = (float)(undefined4)uStack_5;
                (hit->normal).z = (float)uStack_5._4_4_;
                *(undefined8 *)&hit->cubePos = uVar38;
                uStack_7._0_4_ = (undefined4)uVar37;
                uStack_7._4_1_ = SUB81(uVar37,4);
                uStack_7._5_3_ = SUB83(uVar37,5);
                hit->face = (undefined4)uStack_7;
                hit->isCubeHit = uStack_7._4_1_;
                *(undefined3 *)&hit->field_0x25 = uStack_7._5_3_;
                *(undefined8 *)&hit->woId = uVar36;
                hit->cube = pCVar35;
                *(undefined8 *)&hit->distance = uVar34;
                hit->collider = pCVar33;
                hit->transform = pTVar32;
                hit->interactionFlags = iVar31;
                auStack_3 = auVar46;
                uStack_5 = uVar43;
                uStack_7 = uVar45;
                func_?(&hit->cube);
                bVar14 = 1;
                fVar22 = fVar44;
              }
            }
          }
          goto code_?;
        }
      }
code_?:
      FUN_?();
      pcVar18 = (code *)swi(3);
      bVar14 = (*pcVar18)();
      return bVar14;
    }
  }
  return 0;
}


/* Void Update() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_Update
               (ObjExportHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObjExportHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WoPickSuccess__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Adding_obj_file__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___kogama_data_folder__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__obj);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Exported__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__files_successfully_to_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral_____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0].point.x = 0.0;
  aVStack_1[0].point.y = 0.0;
  aVStack_1[0].point.z = 0.0;
  aVStack_1[0].normal.x = 0.0;
  aVStack_1[0].normal.y = 0.0;
  aVStack_1[0].normal.z = 0.0;
  aVStack_1[0].cubePos.x = 0;
  aVStack_1[0].cubePos.y = 0;
  aVStack_1[0].cubePos.z = 0;
  aVStack_1[0]._30_2_ = 0;
  aVStack_1[0].face = 0;
  aVStack_1[0].isCubeHit = 0;
  aVStack_1[0]._37_3_ = 0;
  aVStack_1[0].woId = 0;
  aVStack_1[0]._44_4_ = 0;
  aVStack_1[0].cube = (Cube *)0x0;
  aVStack_1[0].distance = 0.0;
  aVStack_1[0]._60_4_ = 0;
  aVStack_1[0].collider = (Collider *)0x0;
  aVStack_1[0].transform = (Transform *)0x0;
  aVStack_1[0].interactionFlags = 0;
  if (*(int *)&(TypeInfo__ObjExportHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ObjExportHandler);
  }
  if (TypeInfo__ObjExportHandler->static_fields->picking == 0) {
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(0x143);
    if (cVar4 == '\0') {
      return;
    }
    if (*(int *)&(TypeInfo__ObjExportHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ObjExportHandler);
    }
    TypeInfo__ObjExportHandler->static_fields->picking = 0;
    bVar5 = ObjExportHandler_Pick
                      (aVStack_1,TypeInfo__ObjExportHandler->static_fields->ignoreIds,-0x40005,
                       (MethodInfo *)0x0);
    value_00 = 0;
    if ((bVar5 != 0) && (aVStack_1[0].woId == -1)) {
      bVar5 = 0;
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar6 = StringLiteral_False;
    if (bVar5 != 0) {
      pSVar6 = StringLiteral_True;
    }
    pSVar6 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_WoPickSuccess__,pSVar6,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar6,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,aVStack_1[0].woId,(MethodInfo *)0x0);
    if (pMVar7 != (MVWorldObjectClient *)0x0) {
      if ((pMVar7->fields).gameObject != (GameObject *)0x0) {
        lVar8 = FUN_?();
        if (lVar8 != 0) {
          for (; (int)value_00 < (int)*(uint *)(lVar8 + 0x18); value_00 = value_00 + 1) {
            if (*(uint *)(lVar8 + 0x18) <= value_00) goto code_?;
            mf = *(MeshFilter **)(lVar8 + 0x20 + (longlong)(int)value_00 * 8);
            pSVar9 = (String__Array *)FUN_?(TypeInfo__System__String,5);
            if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                               ((MethodInfo *)0x0);
            if (pSVar9 == (String__Array *)0x0) goto code_?;
            FUN_?(pSVar9,0,pSVar6);
            FUN_?(pSVar9,1,::StringLiteral_____);
            if (*(uint *)(lVar8 + 0x18) <= value_00) goto code_?;
            pCVar10 = *(Component **)(lVar8 + 0x20 + (longlong)(int)value_00 * 8);
            if (pCVar10 == (Component *)0x0) goto code_?;
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (pCVar10,(MethodInfo *)0x0);
            if (pGVar11 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                      ((Object_1 *)pGVar11,(MethodInfo *)0x0);
            FUN_?(pSVar9,2);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                 field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            RStack_12._pointer._value = (void *)0x0;
            RStack_12._length = 0;
            RStack_12._12_4_ = 0;
            pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                               (value_00,&RStack_12,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            FUN_?(pSVar9,3,pSVar6);
            FUN_?(pSVar9);
            pSVar6 = mscorlib.dll::System::String::String_Concat_7(pSVar9,(MethodInfo *)0x0);
            ObjExporterScript::ObjExporterScript_MeshToFile(mf,pSVar6,0,(MethodInfo *)0x0);
            if (*(uint *)(lVar8 + 0x18) <= value_00) goto code_?;
            pCVar10 = *(Component **)(lVar8 + 0x20 + (longlong)(int)value_00 * 8);
            if (pCVar10 == (Component *)0x0) goto code_?;
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (pCVar10,(MethodInfo *)0x0);
            if (pGVar11 == (GameObject *)0x0) goto code_?;
            pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                               ((Object_1 *)pGVar11,(MethodInfo *)0x0);
            pSVar6 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_Adding_obj_file__,pSVar6,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar6,(MethodInfo *)0x0);
          }
          pSVar9 = (String__Array *)FUN_?(TypeInfo__System__String,5);
          if (pSVar9 != (String__Array *)0x0) {
            FUN_?(pSVar9,0);
            value = *(int32_t *)(lVar8 + 0x18);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                 field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            RStack_12._pointer._value = (void *)0x0;
            RStack_12._length = 0;
            RStack_12._12_4_ = 0;
            pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                               (value,&RStack_12,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            FUN_?(pSVar9,1,pSVar6);
            FUN_?(pSVar9,2,StringLiteral__files_successfully_to_);
            if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                               ((MethodInfo *)0x0);
            FUN_?(pSVar9,3,pSVar6);
            FUN_?(pSVar9,4,StringLiteral___kogama_data_folder__);
            pSVar6 = mscorlib.dll::System::String::String_Concat_7(pSVar9,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar6,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ObjExportHandler() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObjExportHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__ObjExportHandler->static_fields->picking = 0;
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  TypeInfo__ObjExportHandler->static_fields->ignoreIds = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&TypeInfo__ObjExportHandler->static_fields->ignoreIds >> 0xc);
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

